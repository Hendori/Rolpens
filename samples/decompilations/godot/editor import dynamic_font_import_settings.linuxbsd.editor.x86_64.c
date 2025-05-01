
/* DynamicFontImportSettingsDialog::_locale_edited() */

void DynamicFontImportSettingsDialog::_locale_edited(void)

{
  long lVar1;
  
  lVar1 = Tree::get_selected();
  if (lVar1 != 0) {
    TreeItem::is_checked((int)lVar1);
    TreeItem::set_checked((int)lVar1,false);
    return;
  }
  _err_print_error("_locale_edited","editor/import/dynamic_font_import_settings.cpp",0x40f,
                   "Parameter \"item\" is null.",0,0);
  return;
}



/* HashSet<char32_t, HashMapHasherDefault, HashMapComparatorDefault<char32_t>
   >::_lookup_pos(char32_t const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::_lookup_pos
          (HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>> *this,
          wchar32 *param_1,uint *param_2)

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



/* Ref<FontFile>::TEMPNAMEPLACEHOLDERVALUE(Ref<FontFile> const&) [clone .isra.0] */

void __thiscall Ref<FontFile>::operator=(Ref<FontFile> *this,Ref *param_1)

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



/* void Ref<Font>::TEMPNAMEPLACEHOLDERVALUE(Ref<FontFile> const&) [clone .isra.0] */

void __thiscall Ref<Font>::operator=(Ref<Font> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::erase(int const&) [clone
   .isra.0] */

ulong __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
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
  uint uVar30;
  uint uVar31;
  ulong in_RAX;
  ulong uVar32;
  long lVar33;
  uint *puVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  int iVar38;
  long lVar39;
  ulong uVar40;
  uint *puVar41;
  uint uVar42;
  uint *puVar43;
  ulong uVar44;
  ulong uVar45;
  
  uVar31 = *param_1;
  lVar6 = *(long *)this;
  if ((lVar6 == 0) || (in_RAX = (ulong)*(uint *)(this + 0x24), *(uint *)(this + 0x24) == 0)) {
    return in_RAX;
  }
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
  uVar45 = CONCAT44(0,uVar4);
  uVar35 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar42 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar42 = 1;
    uVar32 = uVar35;
  }
  else {
    uVar32 = uVar42 * uVar35;
  }
  lVar7 = *(long *)(this + 0x18);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar45;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar32;
  auVar10 = auVar10 * auVar20;
  lVar39 = auVar10._8_8_;
  uVar32 = auVar10._0_8_;
  uVar30 = *(uint *)(lVar7 + lVar39 * 4);
  iVar38 = auVar10._8_4_;
  if (uVar30 != 0) {
    uVar36 = 0;
    do {
      if (uVar42 == uVar30) {
        lVar8 = *(long *)(this + 8);
        uVar30 = *(uint *)(lVar8 + lVar39 * 4);
        if (uVar31 == *(uint *)(lVar6 + (ulong)uVar30 * 4)) {
          lVar9 = *(long *)(this + 0x10);
          lVar33 = (ulong)uVar30 * 4;
          puVar34 = (uint *)(lVar33 + lVar9);
          uVar31 = *puVar34;
          uVar32 = (ulong)uVar31;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (uVar31 + 1) * uVar35;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar45;
          lVar39 = SUB168(auVar14 * auVar24,8) * 4;
          uVar42 = SUB164(auVar14 * auVar24,8);
          uVar44 = (ulong)uVar42;
          puVar41 = (uint *)(lVar7 + lVar39);
          if ((*puVar41 == 0) ||
             (auVar15._8_8_ = 0, auVar15._0_8_ = *puVar41 * uVar35, auVar25._8_8_ = 0,
             auVar25._0_8_ = uVar45, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar42 + uVar4) - SUB164(auVar15 * auVar25,8)) * uVar35,
             auVar26._8_8_ = 0, auVar26._0_8_ = uVar45, SUB164(auVar16 * auVar26,8) == 0)) {
            uVar44 = (ulong)uVar31;
          }
          else {
            while( true ) {
              puVar37 = (uint *)(lVar39 + lVar8);
              puVar3 = (uint *)(lVar8 + uVar32 * 4);
              puVar43 = (uint *)(uVar32 * 4 + lVar7);
              puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar37 * 4);
              puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
              uVar5 = *puVar2;
              *puVar2 = *puVar1;
              *puVar1 = uVar5;
              uVar31 = *puVar41;
              *puVar41 = *puVar43;
              *puVar43 = uVar31;
              uVar31 = *puVar37;
              *puVar37 = *puVar3;
              *puVar3 = uVar31;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar44 + 1) * uVar35;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar45;
              uVar40 = SUB168(auVar19 * auVar29,8);
              lVar39 = uVar40 * 4;
              puVar41 = (uint *)(lVar7 + lVar39);
              if ((*puVar41 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = *puVar41 * uVar35, auVar27._8_8_ = 0,
                 auVar27._0_8_ = uVar45, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar29,8) + uVar4) - SUB164(auVar17 * auVar27,8)) * uVar35
                 , auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, SUB164(auVar18 * auVar28,8) == 0))
              break;
              uVar32 = uVar44;
              uVar44 = uVar40 & 0xffffffff;
            }
          }
          *(undefined4 *)(lVar7 + uVar44 * 4) = 0;
          uVar31 = *(int *)(this + 0x24) - 1;
          *(uint *)(this + 0x24) = uVar31;
          if (uVar31 <= uVar30) {
            return (ulong)uVar31;
          }
          *(undefined4 *)(lVar33 + lVar6) = *(undefined4 *)(lVar6 + (ulong)uVar31 * 4);
          *puVar34 = *(uint *)(lVar9 + (ulong)*(uint *)(this + 0x24) * 4);
          uVar35 = (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 0x24) * 4);
          *(uint *)(lVar8 + uVar35 * 4) = uVar30;
          return uVar35;
        }
      }
      uVar36 = uVar36 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (iVar38 + 1) * uVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar45;
      auVar11 = auVar11 * auVar21;
      lVar39 = auVar11._8_8_;
      uVar32 = auVar11._0_8_;
      uVar30 = *(uint *)(lVar7 + lVar39 * 4);
      iVar38 = auVar11._8_4_;
    } while ((uVar30 != 0) &&
            (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar35, auVar22._8_8_ = 0,
            auVar22._0_8_ = uVar45, auVar13._8_8_ = 0,
            auVar13._0_8_ = ((uVar4 + iVar38) - SUB164(auVar12 * auVar22,8)) * uVar35,
            auVar23._8_8_ = 0, auVar23._0_8_ = uVar45, uVar32 = SUB168(auVar13 * auVar23,0),
            uVar36 <= SUB164(auVar13 * auVar23,8)));
  }
  return uVar32;
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



/* List<ResourceImporter::ImportOption, DefaultAllocator>::push_back(ResourceImporter::ImportOption
   const&) [clone .isra.0] */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this,ImportOption *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  
  if (*(long *)this == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 8);
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = *(undefined4 *)param_1;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)(param_1 + 0x10));
  puVar4[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar4 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar4[10] = *(undefined4 *)(param_1 + 0x28);
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar4 + 0x16) = *(long *)this;
  plVar2 = *(long **)this;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)puVar4;
  return;
}



/* HashSet<char32_t, HashMapHasherDefault, HashMapComparatorDefault<char32_t> >::erase(char32_t
   const&) [clone .isra.0] */

ulong __thiscall
HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::erase
          (HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>> *this,
          wchar32 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  wchar32 wVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
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
  uint uVar30;
  uint uVar31;
  ulong in_RAX;
  ulong uVar32;
  long lVar33;
  uint *puVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  int iVar38;
  long lVar39;
  ulong uVar40;
  uint *puVar41;
  uint uVar42;
  uint *puVar43;
  ulong uVar44;
  ulong uVar45;
  
  wVar4 = *param_1;
  lVar6 = *(long *)this;
  if ((lVar6 == 0) || (in_RAX = (ulong)*(uint *)(this + 0x24), *(uint *)(this + 0x24) == 0)) {
    return in_RAX;
  }
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
  uVar45 = CONCAT44(0,uVar31);
  uVar35 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
  uVar30 = ((uint)wVar4 >> 0x10 ^ wVar4) * -0x7a143595;
  uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar42 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar42 = 1;
    uVar32 = uVar35;
  }
  else {
    uVar32 = uVar42 * uVar35;
  }
  lVar7 = *(long *)(this + 0x18);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar45;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar32;
  auVar10 = auVar10 * auVar20;
  lVar39 = auVar10._8_8_;
  uVar32 = auVar10._0_8_;
  uVar30 = *(uint *)(lVar7 + lVar39 * 4);
  iVar38 = auVar10._8_4_;
  if (uVar30 != 0) {
    uVar36 = 0;
    do {
      if (uVar42 == uVar30) {
        lVar8 = *(long *)(this + 8);
        uVar30 = *(uint *)(lVar8 + lVar39 * 4);
        if (wVar4 == *(wchar32 *)(lVar6 + (ulong)uVar30 * 4)) {
          lVar9 = *(long *)(this + 0x10);
          lVar33 = (ulong)uVar30 * 4;
          puVar34 = (uint *)(lVar33 + lVar9);
          uVar42 = *puVar34;
          uVar32 = (ulong)uVar42;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (uVar42 + 1) * uVar35;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar45;
          lVar39 = SUB168(auVar14 * auVar24,8) * 4;
          uVar36 = SUB164(auVar14 * auVar24,8);
          uVar44 = (ulong)uVar36;
          puVar41 = (uint *)(lVar7 + lVar39);
          if ((*puVar41 == 0) ||
             (auVar15._8_8_ = 0, auVar15._0_8_ = *puVar41 * uVar35, auVar25._8_8_ = 0,
             auVar25._0_8_ = uVar45, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar36 + uVar31) - SUB164(auVar15 * auVar25,8)) * uVar35,
             auVar26._8_8_ = 0, auVar26._0_8_ = uVar45, SUB164(auVar16 * auVar26,8) == 0)) {
            uVar44 = (ulong)uVar42;
          }
          else {
            while( true ) {
              puVar37 = (uint *)(lVar39 + lVar8);
              puVar3 = (uint *)(lVar8 + uVar32 * 4);
              puVar43 = (uint *)(uVar32 * 4 + lVar7);
              puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar37 * 4);
              puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
              uVar5 = *puVar2;
              *puVar2 = *puVar1;
              *puVar1 = uVar5;
              uVar42 = *puVar41;
              *puVar41 = *puVar43;
              *puVar43 = uVar42;
              uVar42 = *puVar37;
              *puVar37 = *puVar3;
              *puVar3 = uVar42;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar44 + 1) * uVar35;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar45;
              uVar40 = SUB168(auVar19 * auVar29,8);
              lVar39 = uVar40 * 4;
              puVar41 = (uint *)(lVar7 + lVar39);
              if ((*puVar41 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = *puVar41 * uVar35, auVar27._8_8_ = 0,
                 auVar27._0_8_ = uVar45, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar29,8) + uVar31) - SUB164(auVar17 * auVar27,8)) *
                      uVar35, auVar28._8_8_ = 0, auVar28._0_8_ = uVar45,
                 SUB164(auVar18 * auVar28,8) == 0)) break;
              uVar32 = uVar44;
              uVar44 = uVar40 & 0xffffffff;
            }
          }
          *(undefined4 *)(lVar7 + uVar44 * 4) = 0;
          uVar31 = *(int *)(this + 0x24) - 1;
          *(uint *)(this + 0x24) = uVar31;
          if (uVar31 <= uVar30) {
            return (ulong)uVar31;
          }
          *(undefined4 *)(lVar33 + lVar6) = *(undefined4 *)(lVar6 + (ulong)uVar31 * 4);
          *puVar34 = *(uint *)(lVar9 + (ulong)*(uint *)(this + 0x24) * 4);
          uVar35 = (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 0x24) * 4);
          *(uint *)(lVar8 + uVar35 * 4) = uVar30;
          return uVar35;
        }
      }
      uVar36 = uVar36 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (iVar38 + 1) * uVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar45;
      auVar11 = auVar11 * auVar21;
      lVar39 = auVar11._8_8_;
      uVar32 = auVar11._0_8_;
      uVar30 = *(uint *)(lVar7 + lVar39 * 4);
      iVar38 = auVar11._8_4_;
    } while ((uVar30 != 0) &&
            (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar35, auVar22._8_8_ = 0,
            auVar22._0_8_ = uVar45, auVar13._8_8_ = 0,
            auVar13._0_8_ = ((uVar31 + iVar38) - SUB164(auVar12 * auVar22,8)) * uVar35,
            auVar23._8_8_ = 0, auVar23._0_8_ = uVar45, uVar32 = SUB168(auVar13 * auVar23,0),
            uVar36 <= SUB164(auVar13 * auVar23,8)));
  }
  return uVar32;
}



/* WARNING: Type propagation algorithm not settling */
/* DynamicFontImportSettingsData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall
DynamicFontImportSettingsData::_get_property_list(DynamicFontImportSettingsData *this,List *param_1)

{
  String *this_00;
  bool *pbVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(undefined8 **)(this + 0x1e0) == (undefined8 *)0x0) {
LAB_00100fd0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar8 = (undefined4 *)**(undefined8 **)(this + 0x1e0);
joined_r0x00100d6c:
  if (puVar8 != (undefined4 *)0x0) {
    do {
      if ((*(long *)(this + 0x1e8) == 0) ||
         (pbVar1 = *(bool **)(*(long *)(this + 0x1e8) + 0xdc0), pbVar1 == (bool *)0x0)) {
LAB_00100e90:
        if (*(long *)param_1 == 0) {
          pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar7;
          *(undefined4 *)pauVar7[1] = 0;
          *pauVar7 = (undefined1  [16])0x0;
        }
        puVar6 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
        lVar5 = *(long *)(puVar8 + 2);
        *puVar6 = 0;
        puVar6[6] = 0;
        puVar6[10] = 6;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar6 + 0xc) = (undefined1  [16])0x0;
        *puVar6 = *puVar8;
        if (lVar5 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar8 + 2));
        }
        StringName::operator=((StringName *)(puVar6 + 4),(StringName *)(puVar8 + 4));
        puVar6[6] = puVar8[6];
        if (*(long *)(puVar6 + 8) != *(long *)(puVar8 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)(puVar8 + 8));
        }
        puVar6[10] = puVar8[10];
        plVar2 = *(long **)param_1;
        lVar5 = plVar2[1];
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(long **)(puVar6 + 0x10) = plVar2;
        *(long *)(puVar6 + 0xe) = lVar5;
        if (lVar5 != 0) {
          *(undefined4 **)(lVar5 + 0x30) = puVar6;
        }
        plVar2[1] = (long)puVar6;
        if (*plVar2 == 0) {
          *plVar2 = (long)puVar6;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
      }
      else {
        StringName::StringName((StringName *)&local_60,"multichannel_signed_distance_field",false);
        Object::get((StringName *)local_58,pbVar1);
        bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (bVar3) {
          this_00 = (String *)(puVar8 + 2);
          cVar4 = String::operator==(this_00,"size");
          if (((cVar4 == '\0') &&
              (cVar4 = String::operator==(this_00,"outline_size"), cVar4 == '\0')) &&
             (cVar4 = String::operator==(this_00,"oversampling"), cVar4 == '\0')) {
            cVar4 = Variant::needs_deinit[local_58[0]];
            goto joined_r0x001010c5;
          }
          cVar4 = Variant::needs_deinit[local_58[0]];
        }
        else {
          cVar4 = Variant::needs_deinit[local_58[0]];
joined_r0x001010c5:
          if (cVar4 != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          pbVar1 = *(bool **)(*(long *)(this + 0x1e8) + 0xdc0);
          StringName::StringName((StringName *)&local_60,"multichannel_signed_distance_field",false)
          ;
          Object::get((StringName *)local_58,pbVar1);
          bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
          if (bVar3) {
            lVar5 = (long)local_58[0];
LAB_00100e66:
            if (Variant::needs_deinit[lVar5] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            goto LAB_00100e90;
          }
          cVar4 = String::operator==((String *)(puVar8 + 2),"msdf_pixel_range");
          if (cVar4 == '\0') {
            cVar4 = String::operator==((String *)(puVar8 + 2),"msdf_size");
            lVar5 = (long)local_58[0];
            if (cVar4 == '\0') goto LAB_00100e66;
          }
          else {
            lVar5 = (long)local_58[0];
          }
          cVar4 = Variant::needs_deinit[lVar5];
        }
        if (cVar4 != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) goto LAB_00100fb5;
      }
      puVar8 = *(undefined4 **)(puVar8 + 0x12);
      if (puVar8 == (undefined4 *)0x0) break;
    } while( true );
  }
  goto LAB_00100fd0;
LAB_00100fb5:
  StringName::unref();
  puVar8 = *(undefined4 **)(puVar8 + 0x12);
  goto joined_r0x00100d6c;
}



/* DynamicFontImportSettingsData::get_font() const */

void DynamicFontImportSettingsData::get_font(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x240) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x240);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* DynamicFontImportSettingsDialog::get_singleton() */

undefined8 DynamicFontImportSettingsDialog::get_singleton(void)

{
  return singleton;
}



/* DynamicFontImportSettingsDialog::_char_update(int) */

undefined8 __thiscall
DynamicFontImportSettingsDialog::_char_update(DynamicFontImportSettingsDialog *this,int param_1)

{
  HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>> *this_00;
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Object *local_70;
  wchar32 local_68 [4];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (Object *)0x0;
  lVar5 = Tree::get_selected();
  if (lVar5 != 0) {
    TreeItem::get_metadata((int)(Variant *)local_58);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_70,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar2 = local_70;
    if (local_70 != (Object *)0x0) {
      this_00 = (HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>> *)
                (local_70 + 0x1f0);
      cVar3 = HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::_lookup_pos
                        (this_00,(wchar32 *)(ulong)(uint)param_1,(uint *)local_68);
      if (cVar3 == '\0') {
        plVar1 = *(long **)(this + 0xec8);
        if (plVar1 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar1 + 0x630))(plVar1,0x10,param_1,0);
          cVar3 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos
                            ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                             (pOVar2 + 0x218),(int *)(ulong)uVar4,(uint *)local_68);
          if (cVar3 != '\0') {
            local_68[0] = (**(code **)(**(long **)(this + 0xec8) + 0x630))
                                    (*(long **)(this + 0xec8),0x10,param_1,0);
            HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
                      ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                       (pOVar2 + 0x218),local_68);
            goto LAB_0010127f;
          }
        }
        HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::insert(local_68);
        uVar6 = 1;
        cVar3 = RefCounted::unreference();
      }
      else {
        local_68[0] = param_1;
        HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::erase
                  (this_00,local_68);
LAB_0010127f:
        uVar6 = 0;
        cVar3 = RefCounted::unreference();
      }
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_001012d5;
    }
  }
  uVar6 = 0;
LAB_001012d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* DynamicFontImportSettingsDialog::_notification(int) */

void DynamicFontImportSettingsDialog::_notification(int param_1)

{
  Ref *pRVar1;
  StringName *pSVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int in_ESI;
  undefined4 in_register_0000003c;
  StringName *pSVar6;
  long in_FS_OFFSET;
  Object *local_58 [2];
  undefined8 local_48;
  long local_30;
  
  pSVar6 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 0xd) {
    pcVar3 = *(code **)(*(long *)pSVar6 + 0x108);
    create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
              ((DynamicFontImportSettingsDialog *)local_58,(char *)pSVar6,
               (_func_void *)"&DynamicFontImportSettingsDialog::_re_import");
    (*pcVar3)(pSVar6,SceneStringNames::singleton + 0x268,local_58,0);
    Callable::~Callable((Callable *)local_58);
  }
  else if (in_ESI == 0x20) {
    pRVar1 = *(Ref **)(pSVar6 + 0xe20);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_58);
    Button::set_button_icon(pRVar1);
    if (local_58[0] != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58[0]);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_58[0] + 0x140))(local_58[0]);
          Memory::free_static(local_58[0],false);
        }
      }
    }
    pSVar2 = *(StringName **)(pSVar6 + 0xde0);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    local_48 = Window::get_theme_color
                         (pSVar6,(StringName *)
                                 &_notification(int)::{lambda()#2}::operator()()::sname);
    Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_pad_zeros(String const&) const */

String * DynamicFontImportSettingsDialog::_pad_zeros(String *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 1;
  local_48 = &_LC42;
  String::parse_latin1((StrRange *)&local_50);
  String::repeat((int)(String *)&local_48);
  String::operator+(param_1,(String *)&local_48);
  puVar2 = local_48;
  if (local_48 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (undefined *)0x0;
      Memory::free_static(puVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* DynamicFontImportSettingsDialog::_add_glyph_range_item(int, int, String const&) */

void __thiscall
DynamicFontImportSettingsDialog::_add_glyph_range_item
          (DynamicFontImportSettingsDialog *this,int param_1,int param_2,String *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  int local_c0;
  CowData<char32_t> local_a8 [8];
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  int local_60;
  int local_5c;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = param_2 - param_1;
  iVar5 = iVar8 + 0x1ff;
  if (-1 < iVar8) {
    iVar5 = iVar8;
  }
  local_c0 = param_1;
  if (0x1ff < iVar8) {
    iVar2 = 0;
    iVar10 = param_1;
    do {
      lVar7 = Tree::create_item(*(TreeItem **)(this + 0xeb0),(int)*(undefined8 *)(this + 0xeb8));
      if (lVar7 == 0) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101c85;
        uVar9 = 0x1c1;
        goto LAB_00101a13;
      }
      TreeItem::set_cell_mode(lVar7,0,1);
      local_c0 = param_1 + 0x200;
      String::num_int64((long)&local_88,iVar10 + 0x200,true);
      _pad_zeros((String *)&local_80);
      local_98 = 0;
      local_78 = &_LC44;
      local_70 = 3;
      String::parse_latin1((StrRange *)&local_98);
      String::num_int64((long)local_a8,iVar10,true);
      _pad_zeros((String *)&local_a0);
      String::operator+((String *)&local_90,(String *)&local_a0);
      String::operator+((String *)&local_78,(String *)&local_90);
      TreeItem::set_text(lVar7,0,(String *)&local_78);
      puVar4 = local_78;
      if (local_78 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = (undefined *)0x0;
          Memory::free_static(puVar4 + -0x10,false);
        }
      }
      lVar3 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      lVar3 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref(local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      lVar3 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      lVar3 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_78 = (undefined *)0x0;
      plVar1 = (long *)(*(long *)param_3 + -0x10);
      if (*(long *)param_3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00101940;
          LOCK();
          lVar6 = *plVar1;
          bVar11 = lVar3 == lVar6;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar6 != -1) {
          local_78 = *(undefined **)param_3;
        }
      }
LAB_00101940:
      TreeItem::set_text(lVar7,1,(String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_60 = param_1;
      local_5c = local_c0;
      Variant::Variant((Variant *)local_58,(Vector2i *)&local_60);
      TreeItem::set_metadata((int)lVar7,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar2 = iVar2 + 1;
      param_1 = local_c0;
      iVar10 = iVar10 + 0x200;
    } while (iVar2 < iVar5 >> 9);
  }
  if (0 < iVar8 % 0x200) {
    lVar7 = Tree::create_item(*(TreeItem **)(this + 0xeb0),(int)*(undefined8 *)(this + 0xeb8));
    if (lVar7 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar9 = 0x1ca;
LAB_00101a13:
        _err_print_error("_add_glyph_range_item","editor/import/dynamic_font_import_settings.cpp",
                         uVar9,"Parameter \"item\" is null.",0,0);
        return;
      }
      goto LAB_00101c85;
    }
    TreeItem::set_cell_mode(lVar7,0,1);
    String::num_int64((long)&local_88,param_2,true);
    _pad_zeros((String *)&local_80);
    local_98 = 0;
    String::parse_latin1((String *)&local_98," - ");
    String::num_int64((long)local_a8,local_c0,true);
    _pad_zeros((String *)&local_a0);
    String::operator+((String *)&local_90,(String *)&local_a0);
    String::operator+((String *)&local_78,(String *)&local_90);
    TreeItem::set_text(lVar7,0,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    local_78 = (undefined *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_3);
    TreeItem::set_text(lVar7,1,(String *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_60 = local_c0;
    local_5c = param_2;
    Variant::Variant((Variant *)local_58,(Vector2i *)&local_60);
    TreeItem::set_metadata((int)lVar7,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101c85:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicFontImportSettingsDialog::DynamicFontImportSettingsDialog() */

void __thiscall
DynamicFontImportSettingsDialog::DynamicFontImportSettingsDialog
          (DynamicFontImportSettingsDialog *this)

{
  List<ResourceImporter::ImportOption,DefaultAllocator> *this_00;
  List<ResourceImporter::ImportOption,DefaultAllocator> *this_01;
  StringName *pSVar1;
  String *pSVar2;
  Vector2 *pVVar3;
  long *plVar4;
  code *pcVar5;
  Object *pOVar6;
  char cVar7;
  BoxContainer *pBVar8;
  TabContainer *pTVar9;
  Label *pLVar10;
  SplitContainer *pSVar11;
  EditorInspector *pEVar12;
  BoxContainer *pBVar13;
  Button *pBVar14;
  Tree *pTVar15;
  CallableCustom *this_02;
  undefined8 uVar16;
  TextEdit *this_03;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  Object *local_100;
  long local_f8 [6];
  int local_c8 [8];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_88;
  Variant local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined ***)this = &PTR__initialize_classv_00129b50;
  this_00 = (List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xdc8);
  this[0xdd8] = (DynamicFontImportSettingsDialog)0x0;
  this_01 = (List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xdd0);
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xea0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xeb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xec0) = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_100 = (Object *)0x0;
  local_108 = 0;
  singleton = this;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Rendering");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0,(String *)&local_110,0,(String *)&local_108,0x40,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,1);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"None,Grayscale,LCD Subpixel");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"antialiasing");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,2,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,false);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"generate_mipmaps");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,true);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"disable_embedded_bitmaps");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,true);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"multichannel_signed_distance_field");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,0x4006,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,8);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"1,100,1");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"msdf_pixel_range");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,1,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,0x30);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"1,250,1");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"msdf_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,1,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,true);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"allow_system_fallback");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,false);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"force_autohinter");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,1);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"None,Light,Normal");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"hinting");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,2,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,4);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1
            ((String *)&local_108,
             "Disabled,Auto,One Half of a Pixel,One Quarter of a Pixel,Auto (Except Pixel Fonts)");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"subpixel_positioning");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,2,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,true);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"keep_rounding_remainders");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,0.0);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"0,10,0.1");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"oversampling");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,3,(String *)&local_110,1,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Metadata Overrides");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0,(String *)&local_110,0,(String *)&local_108,0x40,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,(Dictionary *)&local_100);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"language_support");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0x1b,(String *)&local_118,0,(String *)&local_110,6,
             (String *)&local_108);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_100);
  Dictionary::Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,(Dictionary *)&local_100);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"script_support");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0x1b,(String *)&local_118,0,(String *)&local_110,6,
             (String *)&local_108);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_100);
  Dictionary::Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,(Dictionary *)&local_100);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"opentype_features");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0x1b,(String *)&local_118,0,(String *)&local_110,6,
             (String *)&local_108);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_100);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Fallbacks");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0,(String *)&local_110,0,(String *)&local_108,0x40,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_100);
  Variant::Variant((Variant *)&local_a8,(Array *)&local_100);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"%s/%s:%s");
  vformat<Variant::Type,PropertyHint,char_const*>
            ((String *)&local_118,(String *)&local_110,0x18,0x11,&_LC91);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"fallbacks");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0x1c,(String *)&local_120,0x1f,(String *)&local_118,6,
             (String *)&local_108);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_100);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Compress");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0,(String *)&local_110,0,(String *)&local_108,0x40,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,false);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"compress");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,1,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_01,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,(Dictionary *)&local_100);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"opentype_features");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0x1b,(String *)&local_118,0,(String *)&local_110,6,
             (String *)&local_108);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xe90),
             (ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,"");
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"language");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,4,(String *)&local_110,0x20,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xe90),
             (ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,0x10);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"0,127,1");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,1,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,0);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"0,127,1");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"outline_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,1,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"variation");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Variation");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0,(String *)&local_110,0,(String *)&local_108,0x40,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,(Dictionary *)&local_100);
  local_108 = 0;
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"");
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"variation_opentype");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0x1b,(String *)&local_118,0,(String *)&local_110,6,
             (String *)&local_108);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_100);
  Variant::Variant((Variant *)&local_a8,0);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"-2,2,0.01");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"variation_embolden");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,3,(String *)&local_110,1,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_a8,0);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"variation_face_index");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,2,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)&local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  local_a8 = 0x3f800000;
  local_a0 = ZEXT816(0x3f80000000000000);
  Variant::Variant((Variant *)local_c8,(Transform2D *)&local_a8);
  local_100 = (Object *)0x0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"variation_transform");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_f8,0xb,(String *)&local_110,0,(String *)&local_108,6,
             (Dictionary *)&local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_88,(PropertyInfo *)local_f8);
  Variant::Variant(local_58,(Variant *)local_c8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            (this_00,(ImportOption *)&local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)&local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_c8[0]] != '\0') {
    Variant::_clear_internal();
  }
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this,pBVar8,0,0);
  pTVar9 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(pTVar9);
  postinitialize_handler((Object *)pTVar9);
  *(TabContainer **)(this + 0xde8) = pTVar9;
  TabContainer::set_tab_alignment(pTVar9,1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xde8),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xde8),3);
  pSVar1 = *(StringName **)(this + 0xde8);
  StringName::StringName((StringName *)local_f8,"TabContainerOdd",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xde8),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xde0) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xde0),1);
  pSVar2 = *(String **)(this + 0xde0);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xde0),0,0);
  CanvasItem::hide();
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Rendering Options");
  TTR((String *)&local_108,(String *)&local_100);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(*(undefined8 *)(this + 0xde8),pBVar8,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xdf0) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xdf0);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_100,
             "Select font rendering options, fallback font, and metadata override:");
  TTR((String *)&local_108,(String *)&local_100);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdf0),3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdf0),0,0);
  pSVar11 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(pSVar11,false);
  pSVar11[0xa68] = (SplitContainer)0x1;
  *(undefined ***)pSVar11 = &PTR__initialize_classv_00129f28;
  postinitialize_handler((Object *)pSVar11);
  Control::set_v_size_flags(pSVar11,3);
  Control::set_h_size_flags(pSVar11,3);
  Node::add_child(pBVar8,pSVar11,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  Control::set_v_size_flags(pBVar8,3);
  Control::set_h_size_flags(pBVar8,3);
  Node::add_child(pSVar11,pBVar8,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xdf8) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xdf8),1);
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xdf8),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdf8),3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xdf8),0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xe00) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe00),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xe00),1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe00),1);
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xe00),0));
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe00),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe00),3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe00),0,0);
  pEVar12 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(pEVar12);
  postinitialize_handler((Object *)pEVar12);
  *(EditorInspector **)(this + 0xe08) = pEVar12;
  Control::set_v_size_flags(pEVar12,3);
  pVVar3 = *(Vector2 **)(this + 0xe08);
  fVar18 = (float)EditorScale::get_scale();
  fVar19 = (float)EditorScale::get_scale();
  local_88 = CONCAT44(fVar18 * _LC112._4_4_,fVar19 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pSVar11,*(undefined8 *)(this + 0xe08),0,0);
  plVar4 = *(long **)(this + 0xe08);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog,String_const&>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void_String_ptr *)"&DynamicFontImportSettingsDialog::_main_prop_changed");
  StringName::StringName((StringName *)&local_100,"property_edited",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Pre-render Configurations");
  TTR((String *)&local_108,(String *)&local_100);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(*(undefined8 *)(this + 0xde8),pBVar8,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xe10) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe10);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_100,
             "Add font size, and variation coordinates, and select glyphs to pre-render:");
  TTR((String *)&local_108,(String *)&local_100);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe10),3);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe10),3);
  pVVar3 = *(Vector2 **)(this + 0xe10);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = CONCAT44(0x3f800000,fVar18 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe10),0,0);
  pSVar11 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(pSVar11,false);
  pSVar11[0xa68] = (SplitContainer)0x1;
  *(undefined ***)pSVar11 = &PTR__initialize_classv_00129f28;
  postinitialize_handler((Object *)pSVar11);
  Control::set_v_size_flags(pSVar11,3);
  Control::set_h_size_flags(pSVar11,3);
  Node::add_child(pBVar8,pSVar11,0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(pSVar11,pBVar8,0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00129088;
  postinitialize_handler((Object *)pBVar13);
  Node::add_child(pBVar8,pBVar13,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xe18) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe18),1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe18),3);
  pSVar2 = *(String **)(this + 0xe18);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Configuration:");
  TTR((String *)&local_108,(String *)&local_100);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xe18),0,0);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_f8[0] = 0;
  Button::Button(pBVar14,(String *)local_f8);
  postinitialize_handler((Object *)pBVar14);
  *(Button **)(this + 0xe20) = pBVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe20);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Add configuration");
  TTR((String *)&local_108,(String *)&local_100);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xe20),0,0);
  plVar4 = *(long **)(this + 0xe20);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_variation_add");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(PropertyInfo *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  pTVar15 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar15);
  postinitialize_handler((Object *)pTVar15);
  *(Tree **)(this + 0xe28) = pTVar15;
  Node::set_auto_translate_mode(pTVar15,2);
  pVVar3 = *(Vector2 **)(this + 0xe28);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = (ulong)(uint)(fVar18 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe28),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xe28));
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xe28),false);
  uVar16 = *(undefined8 *)(this + 0xe28);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar16,0);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xe28),true);
  uVar16 = *(undefined8 *)(this + 0xe28);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar16,1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe28),3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe28),0,0);
  plVar4 = *(long **)(this + 0xe28);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_variation_selected");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x260,(PropertyInfo *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  plVar4 = *(long **)(this + 0xe28);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(DynamicFontImportSettingsDialog **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC24;
  *(undefined ***)this_02 = &PTR_hash_0012a3c0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar16 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar16;
  *(code **)(this_02 + 0x38) = _variation_remove;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "DynamicFontImportSettingsDialog::_variation_remove";
  Callable::Callable((Callable *)local_f8,this_02);
  StringName::StringName((StringName *)&local_100,"button_clicked",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  pEVar12 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(pEVar12);
  postinitialize_handler((Object *)pEVar12);
  *(EditorInspector **)(this + 0xe38) = pEVar12;
  Control::set_v_size_flags(pEVar12,3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe38),0,0);
  plVar4 = *(long **)(this + 0xe38);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog,String_const&>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void_String_ptr *)"&DynamicFontImportSettingsDialog::_variation_changed");
  StringName::StringName((StringName *)&local_100,"property_edited",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(pSVar11,pBVar8,0,0);
  pTVar9 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(pTVar9);
  postinitialize_handler((Object *)pTVar9);
  *(TabContainer **)(this + 0xe40) = pTVar9;
  TabContainer::set_tab_alignment(pTVar9,1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe40),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe40),3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe40),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00129088;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(pBVar8,pBVar13,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xe48) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe48);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Preloaded glyphs: %d");
  TTR((String *)&local_108,(String *)&local_100);
  vformat<int>((String *)&local_110,(int)(String *)&local_108);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pVVar3 = *(Vector2 **)(this + 0xe48);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = (ulong)(uint)(fVar18 * __LC119);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xe48),0,0);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_f8[0] = 0;
  Button::Button(pBVar14,(String *)local_f8);
  postinitialize_handler((Object *)pBVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Clear Glyph List");
  TTR((String *)&local_108,(String *)&local_100);
  Button::set_text((String *)pBVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(pBVar13,pBVar14,0,0);
  pcVar5 = *(code **)(*(long *)pBVar14 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_glyph_clear");
  (*pcVar5)(pBVar14,SceneStringNames::singleton + 0x238,(PropertyInfo *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Glyphs from the Translations");
  TTR((String *)&local_108,(String *)&local_100);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(*(undefined8 *)(this + 0xe40),pBVar8,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xe50) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe50);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_100,
             "Select translations to add all required glyphs to pre-render list:");
  TTR((String *)&local_108,(String *)&local_100);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe50),3);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe50),3);
  pVVar3 = *(Vector2 **)(this + 0xe50);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = CONCAT44(0x3f800000,fVar18 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe50),0,0);
  pTVar15 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar15);
  postinitialize_handler((Object *)pTVar15);
  *(Tree **)(this + 0xe58) = pTVar15;
  Node::set_auto_translate_mode(pTVar15,2);
  Tree::set_columns((int)*(undefined8 *)(this + 0xe58));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe58),0));
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xe58),false);
  uVar16 = *(undefined8 *)(this + 0xe58);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar16,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe58),3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe58),0,0);
  plVar4 = *(long **)(this + 0xe58);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_locale_edited");
  StringName::StringName((StringName *)&local_100,"item_activated",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  uVar16 = Tree::create_item(*(TreeItem **)(this + 0xe58),0);
  *(undefined8 *)(this + 0xe60) = uVar16;
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00129088;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(pBVar8,pBVar13,0,0);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_f8[0] = 0;
  Button::Button(pBVar14,(String *)local_f8);
  postinitialize_handler((Object *)pBVar14);
  *(Button **)(this + 0xe68) = pBVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe68);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Shape all Strings in the Translations and Add Glyphs");
  TTR((String *)&local_108,(String *)&local_100);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xe68),0,0);
  plVar4 = *(long **)(this + 0xe68);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_process_locales");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(PropertyInfo *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Glyphs from the Text");
  TTR((String *)&local_108,(String *)&local_100);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(*(undefined8 *)(this + 0xe40),pBVar8,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xe70) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe70);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_100,
             "Enter a text and select OpenType features to shape and add all required glyphs to pre-render list:"
            );
  TTR((String *)&local_108,(String *)&local_100);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe70),3);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xe70),3);
  pVVar3 = *(Vector2 **)(this + 0xe70);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = CONCAT44(0x3f800000,fVar18 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xe70),0,0);
  pSVar11 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(pSVar11,false);
  pSVar11[0xa68] = (SplitContainer)0x1;
  *(undefined ***)pSVar11 = &PTR__initialize_classv_00129f28;
  postinitialize_handler((Object *)pSVar11);
  Control::set_h_size_flags(pSVar11,3);
  Control::set_v_size_flags(pSVar11,3);
  Node::add_child(pBVar8,pSVar11,0,0);
  pEVar12 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(pEVar12);
  postinitialize_handler((Object *)pEVar12);
  *(EditorInspector **)(this + 0xe80) = pEVar12;
  Control::set_v_size_flags(pEVar12,3);
  pVVar3 = *(Vector2 **)(this + 0xe80);
  fVar18 = (float)EditorScale::get_scale();
  fVar19 = (float)EditorScale::get_scale();
  local_88 = CONCAT44(fVar18 * _LC112._4_4_,fVar19 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pSVar11,*(undefined8 *)(this + 0xe80),0,0);
  plVar4 = *(long **)(this + 0xe80);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_change_text_opts");
  StringName::StringName((StringName *)&local_100,"property_edited",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  this_03 = (TextEdit *)operator_new(0xeb8,"");
  local_f8[0] = 0;
  TextEdit::TextEdit(this_03,(String *)local_f8);
  postinitialize_handler((Object *)this_03);
  *(TextEdit **)(this + 0xe78) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe78),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe78),3);
  Node::add_child(pSVar11,*(undefined8 *)(this + 0xe78),0,0);
  pBVar13 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar13,false);
  pBVar13[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar13 = &PTR__initialize_classv_00129088;
  postinitialize_handler((Object *)pBVar13);
  Control::set_h_size_flags(pBVar13,3);
  Node::add_child(pBVar8,pBVar13,0,0);
  pBVar14 = (Button *)operator_new(0xc10,"");
  local_f8[0] = 0;
  Button::Button(pBVar14,(String *)local_f8);
  postinitialize_handler((Object *)pBVar14);
  *(Button **)(this + 0xe88) = pBVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xe88);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Shape Text and Add Glyphs");
  TTR((String *)&local_108,(String *)&local_100);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(pBVar13,*(undefined8 *)(this + 0xe88),0,0);
  plVar4 = *(long **)(this + 0xe88);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_glyph_text_selected");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(PropertyInfo *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00129400;
  postinitialize_handler((Object *)pBVar8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Glyphs from the Character Map");
  TTR((String *)&local_108,(String *)&local_100);
  Node::set_name((String *)pBVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Node::add_child(*(undefined8 *)(this + 0xe40),pBVar8,0,0);
  pLVar10 = (Label *)operator_new(0xad8,"");
  local_f8[0] = 0;
  Label::Label(pLVar10,(String *)local_f8);
  postinitialize_handler((Object *)pLVar10);
  *(Label **)(this + 0xea0) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  pSVar2 = *(String **)(this + 0xea0);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_100,
             "Add or remove glyphs from the character map to pre-render list:\nNote: Some stylistic alternatives and glyph variants do not have one-to-one correspondence to character, and not shown in this map, use \"Glyphs from the text\" tab to add these."
            );
  TTR((String *)&local_108,(String *)&local_100);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xea0),3);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xea0),3);
  pVVar3 = *(Vector2 **)(this + 0xea0);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = CONCAT44(0x3f800000,fVar18 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xea0),0,0);
  pSVar11 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(pSVar11,false);
  pSVar11[0xa68] = (SplitContainer)0x1;
  *(undefined ***)pSVar11 = &PTR__initialize_classv_00129f28;
  postinitialize_handler((Object *)pSVar11);
  Control::set_v_size_flags(pSVar11,3);
  Control::set_h_size_flags(pSVar11,3);
  Node::add_child(pBVar8,pSVar11,0,0);
  pTVar15 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar15);
  postinitialize_handler((Object *)pTVar15);
  *(Tree **)(this + 0xea8) = pTVar15;
  Node::set_auto_translate_mode(pTVar15,2);
  pVVar3 = *(Vector2 **)(this + 0xea8);
  fVar18 = (float)EditorScale::get_scale();
  lVar17 = 0;
  local_88 = (ulong)(uint)(fVar18 * __LC141);
  Control::set_custom_minimum_size(pVVar3);
  Tree::set_columns((int)*(undefined8 *)(this + 0xea8));
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xea8),false);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xea8),0));
  Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xea8),0));
  Tree::set_select_mode(*(undefined8 *)(this + 0xea8),0);
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xea8),0));
  do {
    uVar16 = *(undefined8 *)(this + 0xea8);
    String::num_int64((long)local_f8,(int)lVar17,true);
    Tree::set_column_title((int)uVar16,(String *)(ulong)((int)lVar17 + 1));
    lVar17 = lVar17 + 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  } while (lVar17 != 0x10);
  pSVar1 = *(StringName **)(this + 0xea8);
  local_f8[0] = 0;
  Control::get_theme_stylebox((StringName *)&local_100,pSVar1);
  StringName::StringName((StringName *)&local_108,"selected",false);
  Control::add_theme_style_override(pSVar1,(Ref *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (((local_100 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar6 = local_100, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_100), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(this + 0xea8);
  local_f8[0] = 0;
  Control::get_theme_stylebox((StringName *)&local_100,pSVar1);
  StringName::StringName((StringName *)&local_108,"selected_focus",false);
  Control::add_theme_style_override(pSVar1,(Ref *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (((local_100 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar6 = local_100, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_100), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(this + 0xea8);
  StringName::StringName((StringName *)local_f8,"h_separation",false);
  Control::add_theme_constant_override(pSVar1,(int)(PropertyInfo *)local_f8);
  if ((StringName::configured != '\0') && (local_f8[0] != 0)) {
    StringName::unref();
  }
  Control::set_h_size_flags(*(undefined8 *)(this + 0xea8),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xea8),3);
  Node::add_child(pSVar11,*(undefined8 *)(this + 0xea8),0,0);
  plVar4 = *(long **)(this + 0xea8);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_glyph_selected");
  StringName::StringName((StringName *)&local_100,"item_activated",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  pTVar15 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar15);
  postinitialize_handler((Object *)pTVar15);
  *(Tree **)(this + 0xeb0) = pTVar15;
  Node::set_auto_translate_mode(pTVar15,2);
  pVVar3 = *(Vector2 **)(this + 0xeb0);
  fVar18 = (float)EditorScale::get_scale();
  local_88 = (ulong)(uint)(fVar18 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar3);
  Tree::set_columns((int)*(undefined8 *)(this + 0xeb0));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xeb0),0));
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xeb0),false);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xeb0),true);
  uVar16 = *(undefined8 *)(this + 0xeb0);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar16,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xeb0));
  uVar16 = Tree::create_item(*(TreeItem **)(this + 0xeb0),0);
  *(undefined8 *)(this + 0xeb8) = uVar16;
  pSVar2 = (String *)&DAT_0010f708;
  lVar17 = _DAT_0010f708;
  while ((lVar17 != 0 && (1 < *(uint *)(lVar17 + -8)))) {
    _add_glyph_range_item(this,*(int *)(pSVar2 + -8),*(int *)(pSVar2 + -4),pSVar2);
    lVar17 = *(long *)(pSVar2 + 0x10);
    pSVar2 = pSVar2 + 0x10;
  }
  Node::add_child(pSVar11,*(undefined8 *)(this + 0xeb0),0,0);
  plVar4 = *(long **)(this + 0xeb0);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_range_edited");
  StringName::StringName((StringName *)&local_100,"item_activated",false);
  (*pcVar5)(plVar4,(Dictionary *)&local_100,(PropertyInfo *)local_f8,0);
  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_f8);
  plVar4 = *(long **)(this + 0xeb0);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
            ((DynamicFontImportSettingsDialog *)local_f8,(char *)this,
             (_func_void *)"&DynamicFontImportSettingsDialog::_range_selected");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x260,(PropertyInfo *)local_f8,0);
  Callable::~Callable((Callable *)local_f8);
  Ref<DynamicFontImportSettingsData>::instantiate<>
            ((Ref<DynamicFontImportSettingsData> *)(this + 0xdc0));
  *(DynamicFontImportSettingsDialog **)(*(long *)(this + 0xdc0) + 0x1e8) = this;
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Reimport");
  TTR((String *)&local_108,(String *)&local_100);
  AcceptDialog::set_ok_button_text(this,(String *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  local_f8[0] = 0;
  String::parse_latin1((String *)local_f8,"");
  local_100 = (Object *)0x0;
  String::parse_latin1((String *)&local_100,"Close");
  TTR((String *)&local_108,(String *)&local_100);
  ConfirmationDialog::set_cancel_button_text(this,(String *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsData::_set(StringName const&, Variant const&) */

undefined8 __thiscall
DynamicFontImportSettingsData::_set
          (DynamicFontImportSettingsData *this,StringName *param_1,Variant *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
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
  Variant *pVVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long *plVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  ulong uVar50;
  uint *puVar51;
  
  if ((*(long *)(this + 0x1b8) != 0) && (*(int *)(this + 0x1dc) != 0)) {
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d8) * 4);
    uVar48 = CONCAT44(0,uVar5);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d8) * 8);
    if (*(long *)param_1 == 0) {
      uVar38 = StringName::get_empty_hash();
    }
    else {
      uVar38 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar38 == 0) {
      uVar38 = 1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar6;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar48;
    lVar42 = SUB168(auVar9 * auVar23,8);
    uVar41 = *(uint *)(*(long *)(this + 0x1c0) + lVar42 * 4);
    iVar40 = SUB164(auVar9 * auVar23,8);
    if (uVar41 != 0) {
      uVar49 = 0;
      while ((uVar38 != uVar41 ||
             (*(long *)(*(long *)(*(long *)(this + 0x1b8) + lVar42 * 8) + 0x10) != *(long *)param_1)
             )) {
        uVar49 = uVar49 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar40 + 1) * lVar6;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar48;
        lVar42 = SUB168(auVar10 * auVar24,8);
        uVar41 = *(uint *)(*(long *)(this + 0x1c0) + lVar42 * 4);
        iVar40 = SUB164(auVar10 * auVar24,8);
        if ((uVar41 == 0) ||
           (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar41 * lVar6, auVar25._8_8_ = 0,
           auVar25._0_8_ = uVar48, auVar12._8_8_ = 0,
           auVar12._0_8_ = (ulong)((uVar5 + iVar40) - SUB164(auVar11 * auVar25,8)) * lVar6,
           auVar26._8_8_ = 0, auVar26._0_8_ = uVar48, SUB164(auVar12 * auVar26,8) < uVar49))
        goto LAB_00105fc9;
      }
      pVVar39 = (Variant *)
                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                              *)(this + 0x1b0),param_1);
      cVar37 = Variant::operator==(pVVar39,param_2);
      if (cVar37 != '\0') {
        if (*(long *)(this + 0x188) == 0) {
          return 1;
        }
        if (*(int *)(this + 0x1ac) != 0) {
          uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
          uVar48 = CONCAT44(0,uVar5);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
          if (*(long *)param_1 == 0) {
            uVar38 = StringName::get_empty_hash();
          }
          else {
            uVar38 = *(uint *)(*(long *)param_1 + 0x20);
          }
          lVar42 = *(long *)(this + 400);
          uVar41 = 1;
          if (uVar38 != 0) {
            uVar41 = uVar38;
          }
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar41 * lVar6;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar48;
          lVar43 = SUB168(auVar13 * auVar27,8);
          uVar38 = *(uint *)(lVar42 + lVar43 * 4);
          uVar49 = SUB164(auVar13 * auVar27,8);
          if (uVar38 != 0) {
            uVar47 = 0;
            do {
              uVar46 = (ulong)uVar49;
              if ((uVar41 == uVar38) &&
                 (lVar7 = *(long *)(this + 0x188),
                 *(long *)(*(long *)(lVar7 + lVar43 * 8) + 0x10) == *(long *)param_1)) {
                lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
                uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
                uVar50 = CONCAT44(0,uVar5);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = (ulong)(uVar49 + 1) * lVar6;
                auVar31._8_8_ = 0;
                auVar31._0_8_ = uVar50;
                uVar44 = SUB168(auVar17 * auVar31,8);
                puVar51 = (uint *)(lVar42 + uVar44 * 4);
                uVar41 = SUB164(auVar17 * auVar31,8);
                uVar48 = (ulong)uVar41;
                uVar38 = *puVar51;
                if ((uVar38 != 0) &&
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar38 * lVar6, auVar32._8_8_ = 0,
                   auVar32._0_8_ = uVar50, auVar19._8_8_ = 0,
                   auVar19._0_8_ = (ulong)((uVar5 + uVar41) - SUB164(auVar18 * auVar32,8)) * lVar6,
                   auVar33._8_8_ = 0, auVar33._0_8_ = uVar50, SUB164(auVar19 * auVar33,8) != 0)) {
                  while( true ) {
                    puVar4 = (uint *)(lVar42 + uVar46 * 4);
                    *puVar51 = *puVar4;
                    puVar1 = (undefined8 *)(lVar7 + uVar44 * 8);
                    *puVar4 = uVar38;
                    puVar2 = (undefined8 *)(lVar7 + uVar46 * 8);
                    uVar8 = *puVar1;
                    *puVar1 = *puVar2;
                    uVar49 = (uint)uVar48;
                    *puVar2 = uVar8;
                    auVar22._8_8_ = 0;
                    auVar22._0_8_ = (ulong)(uVar49 + 1) * lVar6;
                    auVar36._8_8_ = 0;
                    auVar36._0_8_ = uVar50;
                    uVar44 = SUB168(auVar22 * auVar36,8);
                    puVar51 = (uint *)(lVar42 + uVar44 * 4);
                    uVar38 = *puVar51;
                    if ((uVar38 == 0) ||
                       (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar38 * lVar6, auVar34._8_8_ = 0,
                       auVar34._0_8_ = uVar50, auVar21._8_8_ = 0,
                       auVar21._0_8_ =
                            (ulong)((SUB164(auVar22 * auVar36,8) + uVar5) -
                                   SUB164(auVar20 * auVar34,8)) * lVar6, auVar35._8_8_ = 0,
                       auVar35._0_8_ = uVar50, SUB164(auVar21 * auVar35,8) == 0)) break;
                    uVar46 = uVar48;
                    uVar48 = uVar44 & 0xffffffff;
                  }
                }
                uVar48 = (ulong)uVar49;
                *(undefined4 *)(lVar42 + uVar48 * 4) = 0;
                plVar3 = (long *)(lVar7 + uVar48 * 8);
                plVar45 = (long *)*plVar3;
                if (*(long **)(this + 0x198) == plVar45) {
                  *(long *)(this + 0x198) = *plVar45;
                  plVar45 = (long *)*plVar3;
                }
                if (*(long **)(this + 0x1a0) == plVar45) {
                  *(long *)(this + 0x1a0) = plVar45[1];
                  plVar45 = (long *)*plVar3;
                }
                if ((long *)plVar45[1] != (long *)0x0) {
                  *(long *)plVar45[1] = *plVar45;
                  plVar45 = (long *)*plVar3;
                }
                if (*plVar45 != 0) {
                  *(long *)(*plVar45 + 8) = plVar45[1];
                  plVar45 = (long *)*plVar3;
                }
                if (Variant::needs_deinit[(int)plVar45[3]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (plVar45[2] != 0)) {
                  StringName::unref();
                }
                Memory::free_static(plVar45,false);
                *(undefined8 *)(*(long *)(this + 0x188) + uVar48 * 8) = 0;
                *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + -1;
                return 1;
              }
              uVar47 = uVar47 + 1;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)(uVar49 + 1) * lVar6;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar48;
              lVar43 = SUB168(auVar14 * auVar28,8);
              uVar38 = *(uint *)(lVar42 + lVar43 * 4);
              uVar49 = SUB164(auVar14 * auVar28,8);
            } while ((uVar38 != 0) &&
                    (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar38 * lVar6, auVar29._8_8_ = 0,
                    auVar29._0_8_ = uVar48, auVar16._8_8_ = 0,
                    auVar16._0_8_ = (ulong)((uVar5 + uVar49) - SUB164(auVar15 * auVar29,8)) * lVar6,
                    auVar30._8_8_ = 0, auVar30._0_8_ = uVar48, uVar47 <= SUB164(auVar16 * auVar30,8)
                    ));
            return 1;
          }
          return 1;
        }
        return 1;
      }
    }
  }
LAB_00105fc9:
  pVVar39 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)(this + 0x180),param_1);
  Variant::operator=(pVVar39,param_2);
  return 1;
}



/* DynamicFontImportSettingsData::_get(StringName const&, Variant&) const */

undefined8 __thiscall
DynamicFontImportSettingsData::_get
          (DynamicFontImportSettingsData *this,StringName *param_1,Variant *param_2)

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
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    uVar19 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
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
    auVar7._0_8_ = uVar19;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar17 = *(uint *)(*(long *)(this + 400) + lVar16 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(long *)(*(long *)(*(long *)(this + 0x188) + lVar16 * 8) + 0x10) == *(long *)param_1))
        {
          local_48 = 0;
          cVar12 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 0x180),param_1,&local_48);
          if (cVar12 == '\0') goto LAB_001064bb;
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x188) + (ulong)local_48 * 8) +
                                     0x18));
          goto LAB_00106419;
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar19;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar17 = *(uint *)(*(long *)(this + 400) + lVar16 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
      } while ((uVar17 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar19, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  local_44 = 0;
  uVar14 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)(this + 0x1b0),param_1,&local_44);
  if ((char)uVar14 != '\0') {
    local_44 = 0;
    cVar12 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)(this + 0x1b0),param_1,&local_44);
    if (cVar12 == '\0') {
LAB_001064bb:
      _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                       "FATAL: Condition \"!exists\" is true.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    Variant::operator=(param_2,(Variant *)
                               (*(long *)(*(long *)(this + 0x1b8) + (ulong)local_44 * 8) + 0x18));
LAB_00106419:
    uVar14 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_glyph_update_lbl() */

void __thiscall
DynamicFontImportSettingsDialog::_glyph_update_lbl(DynamicFontImportSettingsDialog *this)

{
  int iVar1;
  ulong uVar2;
  String *pSVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Object *pOVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  long local_a8;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (Object *)0x0;
  lVar16 = Tree::get_selected();
  if (lVar16 == 0) {
LAB_0010680f:
    Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_88);
  }
  else {
    TreeItem::get_metadata((int)(Variant *)local_58);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_88,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar12 = local_88;
    if (local_88 == (Object *)0x0) goto LAB_0010680f;
    iVar1 = *(int *)(local_88 + 0x214);
    if (iVar1 != 0) {
      lVar16 = *(long *)(local_88 + 0x1f0);
      local_a8 = 0;
      do {
        uVar14 = (**(code **)(**(long **)(this + 0xec8) + 0x630))
                           (*(long **)(this + 0xec8),0x10,*(undefined4 *)(lVar16 + local_a8 * 4),0);
        if ((*(long *)(pOVar12 + 0x218) != 0) && (*(int *)(pOVar12 + 0x23c) != 0)) {
          uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(pOVar12 + 0x238) * 8);
          uVar15 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
          uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
          uVar20 = uVar15 ^ uVar15 >> 0x10;
          if (uVar15 == uVar15 >> 0x10) {
            uVar20 = 1;
            uVar18 = uVar2;
          }
          else {
            uVar18 = uVar20 * uVar2;
          }
          uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(pOVar12 + 0x238) * 4));
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar21;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar18;
          lVar19 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(*(long *)(pOVar12 + 0x230) + lVar19 * 4);
          iVar17 = SUB164(auVar4 * auVar8,8);
          if (uVar15 != 0) {
            uVar22 = 0;
            while ((uVar20 != uVar15 ||
                   (uVar14 != *(uint *)(*(long *)(pOVar12 + 0x218) +
                                       (ulong)*(uint *)(*(long *)(pOVar12 + 0x220) + lVar19 * 4) * 4
                                       )))) {
              uVar22 = uVar22 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (iVar17 + 1) * uVar2;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar21;
              lVar19 = SUB168(auVar5 * auVar9,8);
              uVar15 = *(uint *)(*(long *)(pOVar12 + 0x230) + lVar19 * 4);
              iVar17 = SUB164(auVar5 * auVar9,8);
              if ((uVar15 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = uVar15 * uVar2, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                 auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(pOVar12 + 0x238) * 4) + iVar17) -
                                SUB164(auVar6 * auVar10,8)) * uVar2, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar22)) break;
            }
          }
        }
        if (iVar1 <= (int)local_a8 + 1) break;
        local_a8 = local_a8 + 1;
      } while( true );
    }
    pSVar3 = *(String **)(this + 0xe48);
    local_78 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "Preloaded glyphs: %d";
    local_80 = 0;
    local_60 = 0x14;
    String::parse_latin1((StrRange *)&local_80);
    TTR(local_70,(String *)&local_80);
    vformat<unsigned_int>((String *)&local_68,(uint)local_70);
    Label::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    cVar13 = RefCounted::unreference();
    if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar12), cVar13 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar12,false);
        return;
      }
      goto LAB_0010687b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010687b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_glyph_selected() */

void DynamicFontImportSettingsDialog::_glyph_selected(void)

{
  uint uVar1;
  StringName *pSVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  DynamicFontImportSettingsDialog *in_RDI;
  ulong uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  undefined4 in_XMM1_Da;
  int local_b0;
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  lVar15 = Tree::get_selected();
  if (lVar15 == 0) goto LAB_00106be6;
  iVar21 = (int)(Variant *)local_58;
  TreeItem::get_metadata(iVar21);
  Ref<DynamicFontImportSettingsData>::operator=
            ((Ref<DynamicFontImportSettingsData> *)&local_80,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar15 = local_80;
  if (local_80 == 0) goto LAB_00106be6;
  lVar16 = Tree::get_selected();
  if (lVar16 == 0) {
    _err_print_error("_glyph_selected","editor/import/dynamic_font_import_settings.cpp",0x2f9,
                     "Parameter \"item\" is null.",0,0);
    goto LAB_00106be6;
  }
  pSVar2 = *(StringName **)(in_RDI + 0xea8);
  local_70 = in_XMM1_Da;
  if (_glyph_selected()::{lambda()#1}::operator()()::sname == '\0') {
    iVar12 = __cxa_guard_acquire(&_glyph_selected()::{lambda()#1}::operator()()::sname);
    if (iVar12 != 0) {
      _scs_create((char *)&_glyph_selected()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_glyph_selected()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_glyph_selected()::{lambda()#1}::operator()()::sname);
    }
  }
  local_78 = Control::get_theme_color
                       (pSVar2,(StringName *)&_glyph_selected()::{lambda()#1}::operator()()::sname);
  pSVar2 = *(StringName **)(in_RDI + 0xea8);
  if (_glyph_selected()::{lambda()#2}::operator()()::sname == '\0') {
    iVar12 = __cxa_guard_acquire(&_glyph_selected()::{lambda()#2}::operator()()::sname);
    if (iVar12 != 0) {
      _scs_create((char *)&_glyph_selected()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_glyph_selected()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_glyph_selected()::{lambda()#2}::operator()()::sname);
    }
  }
  local_68 = Control::get_theme_color
                       (pSVar2,(StringName *)&_glyph_selected()::{lambda()#2}::operator()()::sname);
  _local_70 = CONCAT44(0x3f800000,local_70);
  Tree::get_selected_column();
  TreeItem::get_metadata(iVar21);
  iVar12 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar11 = (**(code **)(**(long **)(in_RDI + 0xec8) + 0x2d0))(*(long **)(in_RDI + 0xec8),iVar12);
  if (cVar11 != '\0') {
    cVar11 = _char_update(in_RDI,iVar12);
    iVar12 = (int)lVar16;
    if (cVar11 == '\0') {
      Tree::get_selected_column();
      TreeItem::clear_custom_color(iVar12);
      Tree::get_selected_column();
      TreeItem::clear_custom_bg_color(iVar12);
    }
    else {
      uVar14 = Tree::get_selected_column();
      TreeItem::set_custom_color(iVar12,(Color *)(ulong)uVar14);
      uVar14 = Tree::get_selected_column();
      TreeItem::set_custom_bg_color(iVar12,(Color *)(ulong)uVar14,SUB81(&local_78,0));
    }
  }
  _glyph_update_lbl(in_RDI);
  lVar16 = Tree::get_selected();
  if (lVar16 == 0) {
    _err_print_error("_glyph_selected","editor/import/dynamic_font_import_settings.cpp",0x30c,
                     "Parameter \"item\" is null.",0,0);
    goto LAB_00106be6;
  }
  TreeItem::get_metadata(iVar21);
  uVar17 = Variant::operator_cast_to_Vector2i((Variant *)local_58);
  uVar19 = uVar17 & 0xffffffff;
  uVar14 = (uint)(uVar17 >> 0x20);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_b0 = uVar14 - (int)uVar17;
  iVar21 = (int)lVar16;
  if ((int)uVar17 < (int)uVar14) {
    iVar12 = 0;
    do {
      uVar20 = (uint)uVar19;
      cVar11 = (**(code **)(**(long **)(in_RDI + 0xec8) + 0x2d0))();
      local_b0 = local_b0 - (uint)(cVar11 == '\0');
      if ((*(long *)(lVar15 + 0x1f0) != 0) && (*(int *)(lVar15 + 0x214) != 0)) {
        uVar17 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar15 + 0x210) * 8);
        uVar13 = ((uint)(uVar19 >> 0x10) ^ uVar20) * -0x7a143595;
        uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
        uVar23 = uVar13 ^ uVar13 >> 0x10;
        if (uVar13 == uVar13 >> 0x10) {
          uVar23 = 1;
          uVar19 = uVar17;
        }
        else {
          uVar19 = uVar23 * uVar17;
        }
        uVar22 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar15 + 0x210) * 4)
                         );
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar22;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar19;
        lVar16 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(*(long *)(lVar15 + 0x208) + lVar16 * 4);
        uVar19 = (ulong)uVar13;
        iVar18 = SUB164(auVar3 * auVar7,8);
        if (uVar13 != 0) {
          uVar13 = 0;
          while (((uint)uVar19 != uVar23 ||
                 (*(uint *)(*(long *)(lVar15 + 0x1f0) +
                           (ulong)*(uint *)(*(long *)(lVar15 + 0x1f8) + lVar16 * 4) * 4) != uVar20))
                ) {
            uVar13 = uVar13 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (iVar18 + 1) * uVar17;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            lVar16 = SUB168(auVar4 * auVar8,8);
            uVar1 = *(uint *)(*(long *)(lVar15 + 0x208) + lVar16 * 4);
            uVar19 = (ulong)uVar1;
            iVar18 = SUB164(auVar4 * auVar8,8);
            if ((uVar1 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = uVar19 * uVar17, auVar9._8_8_ = 0,
               auVar9._0_8_ = uVar22, auVar6._8_8_ = 0,
               auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(lVar15 + 0x210) * 4) + iVar18) -
                              SUB164(auVar5 * auVar9,8)) * uVar17, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar22, SUB164(auVar6 * auVar10,8) < uVar13)) goto LAB_00106baa;
          }
          iVar12 = iVar12 + 1;
        }
      }
LAB_00106baa:
      uVar19 = (ulong)(uVar20 + 1);
    } while (uVar14 != uVar20 + 1);
    if (local_b0 == iVar12) {
LAB_00106dbd:
      TreeItem::set_checked(iVar21,false);
      goto LAB_00106be6;
    }
    if (0 < iVar12) {
      TreeItem::set_indeterminate(iVar21,false);
      goto LAB_00106be6;
    }
  }
  else if (local_b0 == 0) goto LAB_00106dbd;
  TreeItem::set_checked(iVar21,false);
LAB_00106be6:
  Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_edit_range(int, int) */

void DynamicFontImportSettingsDialog::_edit_range(int param_1,int param_2)

{
  StringName *pSVar1;
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
  char cVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  Object *pOVar24;
  long lVar25;
  uint uVar26;
  bool bVar27;
  int in_EDX;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  undefined4 in_register_0000003c;
  StringName *this;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  Ref<DynamicFontImportSettingsData> *local_a0;
  long local_98;
  Object *local_90;
  CowData<char32_t> local_88 [8];
  Object *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  ulong uVar36;
  
  this = (StringName *)CONCAT44(in_register_0000003c,param_1);
  uVar36 = (ulong)(uint)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  lVar22 = Tree::get_selected();
  if (lVar22 == 0) goto LAB_00107490;
  TreeItem::get_metadata((int)(Variant *)&local_58);
  Ref<DynamicFontImportSettingsData>::operator=
            ((Ref<DynamicFontImportSettingsData> *)&local_98,(Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  lVar22 = local_98;
  if (local_98 == 0) goto LAB_00107490;
  Tree::clear();
  lVar23 = Tree::create_item(*(TreeItem **)(this + 0xea8),0);
  if (lVar23 == 0) {
    _err_print_error("_edit_range","editor/import/dynamic_font_import_settings.cpp",0x341,
                     "Parameter \"root\" is null.",0,0);
    goto LAB_00107490;
  }
  pSVar1 = *(StringName **)(this + 0xea8);
  if ((_edit_range(int,int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar21 = __cxa_guard_acquire(&_edit_range(int,int)::{lambda()#1}::operator()()::sname),
     iVar21 != 0)) {
    _scs_create((char *)&_edit_range(int,int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_edit_range(int,int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_edit_range(int,int)::{lambda()#1}::operator()()::sname);
  }
  local_78 = Control::get_theme_color
                       (pSVar1,(StringName *)
                               &_edit_range(int,int)::{lambda()#1}::operator()()::sname);
  pSVar1 = *(StringName **)(this + 0xea8);
  local_70 = in_XMM1_Qa;
  if ((_edit_range(int,int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar21 = __cxa_guard_acquire(&_edit_range(int,int)::{lambda()#2}::operator()()::sname),
     iVar21 != 0)) {
    _scs_create((char *)&_edit_range(int,int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_edit_range(int,int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_edit_range(int,int)::{lambda()#2}::operator()()::sname);
  }
  local_68 = Control::get_theme_color
                       (pSVar1,(StringName *)
                               &_edit_range(int,int)::{lambda()#2}::operator()()::sname);
  local_70 = CONCAT44(0x3f800000,(undefined4)local_70);
  (**(code **)(**(long **)(this + 0xec8) + 0x198))
            ((CowData<char32_t> *)&local_80,*(long **)(this + 0xec8),0);
  local_90 = (Object *)0x0;
  if (local_80 != (Object *)0x0) {
    pOVar24 = (Object *)__dynamic_cast(local_80,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar24 != (Object *)0x0) {
      local_90 = pOVar24;
      cVar18 = RefCounted::reference();
      if (cVar18 == '\0') {
        local_90 = (Object *)0x0;
      }
      if (local_80 == (Object *)0x0) goto LAB_00107045;
    }
    cVar18 = RefCounted::unreference();
    pOVar24 = local_80;
    if ((cVar18 != '\0') && (cVar18 = predelete_handler(local_80), cVar18 != '\0')) {
      (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
      Memory::free_static(pOVar24,false);
    }
  }
LAB_00107045:
  if (param_2 <= in_EDX) {
    lVar25 = 0;
    uVar31 = 0;
LAB_00107080:
    bVar27 = SUB81((Variant *)&local_58,0);
    if (uVar31 == 0) goto LAB_0010724b;
LAB_00107088:
    uVar35 = (uint)uVar36;
    uVar31 = uVar31 + 1;
    cVar18 = (**(code **)(**(long **)(this + 0xec8) + 0x2d0))(*(long **)(this + 0xec8),uVar36);
    iVar21 = (int)lVar25;
    if (cVar18 == '\0') {
      pSVar1 = *(StringName **)(this + 0xea8);
      if ((_edit_range(int,int)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar20 = __cxa_guard_acquire(&_edit_range(int,int)::{lambda()#4}::operator()()::sname),
         iVar20 != 0)) {
        _scs_create((char *)&_edit_range(int,int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_edit_range(int,int)::{lambda()#4}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_edit_range(int,int)::{lambda()#4}::operator()()::sname);
      }
      local_58 = Control::get_theme_color
                           (pSVar1,(StringName *)
                                   &_edit_range(int,int)::{lambda()#4}::operator()()::sname);
      uStack_50 = in_XMM1_Qa;
      TreeItem::set_custom_bg_color(iVar21,(Color *)(ulong)uVar31,bVar27);
    }
    else {
      String::chr((wchar32)(CowData<char32_t> *)&local_80);
      TreeItem::set_text(lVar25,uVar31,(CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_58 = CONCAT44(_LC181,_LC181);
      uStack_50 = CONCAT44(_LC181,_LC181);
      TreeItem::set_custom_color(iVar21,(Color *)(ulong)uVar31);
      if ((*(long *)(lVar22 + 0x1f0) != 0) && (*(int *)(lVar22 + 0x214) != 0)) {
        uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar22 + 0x210) * 4)
                         );
        uVar30 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar22 + 0x210) * 8);
        uVar19 = ((uint)(uVar36 >> 0x10) ^ uVar35) * -0x7a143595;
        uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
        uVar26 = uVar19 ^ uVar19 >> 0x10;
        if (uVar19 == uVar19 >> 0x10) {
          uVar26 = 1;
          uVar28 = uVar30;
        }
        else {
          uVar28 = uVar26 * uVar30;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar32;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar28;
        lVar29 = SUB168(auVar2 * auVar10,8);
        uVar19 = *(uint *)(*(long *)(lVar22 + 0x208) + lVar29 * 4);
        iVar20 = SUB164(auVar2 * auVar10,8);
        if (uVar19 != 0) {
          uVar33 = 0;
          do {
            if ((uVar26 == uVar19) &&
               (uVar35 == *(uint *)(*(long *)(lVar22 + 0x1f0) +
                                   (ulong)*(uint *)(*(long *)(lVar22 + 0x1f8) + lVar29 * 4) * 4)))
            goto LAB_00107215;
            uVar33 = uVar33 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (iVar20 + 1) * uVar30;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar32;
            lVar29 = SUB168(auVar3 * auVar11,8);
            uVar19 = *(uint *)(*(long *)(lVar22 + 0x208) + lVar29 * 4);
            iVar20 = SUB164(auVar3 * auVar11,8);
          } while ((uVar19 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = uVar19 * uVar30, auVar12._8_8_ = 0,
                  auVar12._0_8_ = uVar32, auVar5._8_8_ = 0,
                  auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(lVar22 + 0x210) * 4) + iVar20) -
                                 SUB164(auVar4 * auVar12,8)) * uVar30, auVar13._8_8_ = 0,
                  auVar13._0_8_ = uVar32, uVar33 <= SUB164(auVar5 * auVar13,8)));
        }
      }
      uVar19 = (**(code **)(**(long **)(this + 0xec8) + 0x630))
                         (*(long **)(this + 0xec8),0x10,uVar36,0);
      if ((*(long *)(lVar22 + 0x218) != 0) && (*(int *)(lVar22 + 0x23c) != 0)) {
        uVar36 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar22 + 0x238) * 8);
        uVar26 = (uVar19 >> 0x10 ^ uVar19) * -0x7a143595;
        uVar26 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
        uVar33 = uVar26 ^ uVar26 >> 0x10;
        if (uVar26 == uVar26 >> 0x10) {
          uVar33 = 1;
          uVar30 = uVar36;
        }
        else {
          uVar30 = uVar33 * uVar36;
        }
        uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar22 + 0x238) * 4)
                         );
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar32;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar30;
        lVar29 = SUB168(auVar6 * auVar14,8);
        uVar26 = *(uint *)(*(long *)(lVar22 + 0x230) + lVar29 * 4);
        iVar20 = SUB164(auVar6 * auVar14,8);
        if (uVar26 != 0) {
          uVar34 = 0;
          do {
            if ((uVar26 == uVar33) &&
               (uVar19 == *(uint *)(*(long *)(lVar22 + 0x218) +
                                   (ulong)*(uint *)(*(long *)(lVar22 + 0x220) + lVar29 * 4) * 4)))
            goto LAB_00107215;
            uVar34 = uVar34 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (iVar20 + 1) * uVar36;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar32;
            lVar29 = SUB168(auVar7 * auVar15,8);
            uVar26 = *(uint *)(*(long *)(lVar22 + 0x230) + lVar29 * 4);
            iVar20 = SUB164(auVar7 * auVar15,8);
          } while ((uVar26 != 0) &&
                  (auVar8._8_8_ = 0, auVar8._0_8_ = uVar26 * uVar36, auVar16._8_8_ = 0,
                  auVar16._0_8_ = uVar32, auVar9._8_8_ = 0,
                  auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(lVar22 + 0x238) * 4) + iVar20) -
                                 SUB164(auVar8 * auVar16,8)) * uVar36, auVar17._8_8_ = 0,
                  auVar17._0_8_ = uVar32, uVar34 <= SUB164(auVar9 * auVar17,8)));
        }
      }
      TreeItem::clear_custom_color(iVar21);
      TreeItem::clear_custom_bg_color(iVar21);
    }
    goto LAB_00107392;
  }
LAB_00107467:
  _glyph_update_lbl((DynamicFontImportSettingsDialog *)this);
  if (((local_90 != (Object *)0x0) &&
      (cVar18 = RefCounted::unreference(), pOVar24 = local_90, cVar18 != '\0')) &&
     (cVar18 = predelete_handler(local_90), cVar18 != '\0')) {
    (**(code **)(*(long *)pOVar24 + 0x140))(pOVar24);
    Memory::free_static(pOVar24,false);
  }
LAB_00107490:
  local_a0 = (Ref<DynamicFontImportSettingsData> *)&local_98;
  Ref<DynamicFontImportSettingsData>::unref(local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00107215:
  TreeItem::set_custom_color(iVar21,(Color *)(ulong)uVar31);
  TreeItem::set_custom_bg_color(iVar21,(Color *)(ulong)uVar31,SUB81(&local_78,0));
LAB_00107392:
  Variant::Variant((Variant *)&local_58,uVar35);
  TreeItem::set_metadata(iVar21,(Variant *)(ulong)uVar31);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  TreeItem::set_text_alignment(lVar25,uVar31,1);
  TreeItem::set_selectable(iVar21,SUB41(uVar31,0));
  TreeItem::set_custom_font(iVar21,(Ref *)(ulong)uVar31);
  local_80 = (Object *)0x0;
  Window::get_theme_font_size(this,(StringName *)(SceneStringNames::singleton + 0xa8));
  TreeItem::set_custom_font_size(iVar21,uVar31);
  if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
    StringName::unref();
  }
  param_2 = param_2 + 1;
  uVar35 = uVar35 + 1;
  uVar36 = (ulong)uVar35;
  if (uVar31 != 0x10) goto code_r0x00107457;
  if (in_EDX < (int)uVar35) goto LAB_00107467;
LAB_0010724b:
  lVar25 = Tree::create_item(*(TreeItem **)(this + 0xea8),(int)lVar23);
  if (lVar25 == 0) {
    _err_print_error("_edit_range","editor/import/dynamic_font_import_settings.cpp",0x34f,
                     "Parameter \"item\" is null.",0,0);
    Ref<Font>::unref((Ref<Font> *)&local_90);
    goto LAB_00107490;
  }
  String::num_int64((long)local_88,param_2,true);
  _pad_zeros((String *)&local_80);
  TreeItem::set_text(lVar25,0,(CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref(local_88);
  TreeItem::set_text_alignment(lVar25,0,0);
  TreeItem::set_selectable((int)lVar25,false);
  pSVar1 = *(StringName **)(this + 0xea8);
  if ((_edit_range(int,int)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar21 = __cxa_guard_acquire(&_edit_range(int,int)::{lambda()#3}::operator()()::sname),
     iVar21 != 0)) {
    _scs_create((char *)&_edit_range(int,int)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_edit_range(int,int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_edit_range(int,int)::{lambda()#3}::operator()()::sname);
  }
  uVar31 = 0;
  local_58 = Control::get_theme_color
                       (pSVar1,(StringName *)
                               &_edit_range(int,int)::{lambda()#3}::operator()()::sname);
  uStack_50 = in_XMM1_Qa;
  TreeItem::set_custom_bg_color((int)lVar25,(Color *)0x0,bVar27);
  goto LAB_00107088;
code_r0x00107457:
  if (in_EDX < (int)uVar35) goto LAB_00107467;
  goto LAB_00107080;
}



/* DynamicFontImportSettingsDialog::_range_selected() */

void __thiscall
DynamicFontImportSettingsDialog::_range_selected(DynamicFontImportSettingsDialog *this)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    TreeItem::get_metadata((int)(Variant *)local_38);
    iVar1 = Variant::operator_cast_to_Vector2i((Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _edit_range((int)this,iVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_glyph_clear() */

void __thiscall DynamicFontImportSettingsDialog::_glyph_clear(DynamicFontImportSettingsDialog *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (Object *)0x0;
  lVar3 = Tree::get_selected();
  if (lVar3 != 0) {
    TreeItem::get_metadata((int)(Variant *)local_38);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_40,(Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar1 = local_40;
    if (local_40 != (Object *)0x0) {
      if ((*(long *)(local_40 + 0x218) != 0) && (*(int *)(local_40 + 0x23c) != 0)) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_40 + 0x238) * 4) != 0) {
          memset(*(void **)(local_40 + 0x230),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_40 + 0x238) * 4)
                 << 2);
        }
        *(undefined4 *)(pOVar1 + 0x23c) = 0;
      }
      _glyph_update_lbl(this);
      _range_selected(this);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar1,false);
            return;
          }
          goto LAB_00107af0;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107af0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_glyph_text_selected() */

void __thiscall
DynamicFontImportSettingsDialog::_glyph_text_selected(DynamicFontImportSettingsDialog *this)

{
  int *piVar1;
  bool *pbVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  Object *pOVar9;
  int *piVar10;
  long in_FS_OFFSET;
  Object *local_e8;
  long local_e0;
  long *local_d8;
  CowData<char32_t> local_d0 [8];
  Array local_c8 [8];
  long local_c0;
  long local_b8;
  long *local_b0;
  undefined8 local_a8 [2];
  int local_98 [8];
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = (Object *)0x0;
  lVar7 = Tree::get_selected();
  if (lVar7 != 0) {
    TreeItem::get_metadata((int)(Variant *)local_58);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_e8,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar4 = local_e8;
    if (local_e8 != (Object *)0x0) {
      pOVar9 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar9 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        pOVar9 = (Object *)0x0;
      }
      local_e0 = (**(code **)(*(long *)pOVar9 + 0x598))(pOVar9,0,0);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      if (local_e0 != 0) {
        local_d8 = (long *)0x0;
        plVar8 = *(long **)(TextServerManager::singleton + 0x178);
        if (plVar8 != (long *)0x0) {
          local_a8[0] = 0;
          local_d8 = plVar8;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_d8 = (long *)0x0;
            plVar8 = (long *)0x0;
          }
          Ref<TextServer>::unref((Ref<TextServer> *)local_a8);
        }
        pbVar2 = *(bool **)(this + 0xe98);
        pcVar3 = *(code **)(*plVar8 + 0x628);
        local_50 = (undefined1  [16])0x0;
        local_58[0] = 0;
        local_58[1] = 0;
        StringName::StringName((StringName *)&local_b8,"language",false);
        Object::get((StringName *)local_78,pbVar2);
        Variant::operator_cast_to_String((Variant *)local_a8);
        pbVar2 = *(bool **)(this + 0xe98);
        StringName::StringName((StringName *)&local_c0,"opentype_features",false);
        Object::get((StringName *)local_98,pbVar2);
        Variant::operator_cast_to_Dictionary((Variant *)&local_b0);
        (**(code **)(**(long **)(this + 0xec8) + 0x210))(local_c8);
        TextEdit::get_text();
        (*pcVar3)(plVar8,&local_e0,local_d0,local_c8,0x10,(Variant *)&local_b0,(Variant *)local_a8,
                  (Variant *)local_58);
        CowData<char32_t>::_unref(local_d0);
        Array::~Array(local_c8);
        Dictionary::~Dictionary((Dictionary *)&local_b0);
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Ref<TextServer>::unref((Ref<TextServer> *)&local_d8);
        local_b0 = (long *)0x0;
        plVar8 = *(long **)(TextServerManager::singleton + 0x178);
        if (plVar8 != (long *)0x0) {
          local_a8[0] = 0;
          local_b0 = plVar8;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_b0 = (long *)0x0;
            plVar8 = (long *)0x0;
          }
          Ref<TextServer>::unref((Ref<TextServer> *)local_a8);
        }
        (**(code **)(*plVar8 + 0x680))(plVar8,&local_e0);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_b0);
        local_b0 = (long *)0x0;
        plVar8 = *(long **)(TextServerManager::singleton + 0x178);
        if (plVar8 != (long *)0x0) {
          local_a8[0] = 0;
          local_b0 = plVar8;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_b0 = (long *)0x0;
            plVar8 = (long *)0x0;
          }
          Ref<TextServer>::unref((Ref<TextServer> *)local_a8);
        }
        lVar7 = (**(code **)(*plVar8 + 0x6a0))(plVar8,&local_e0);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_b0);
        local_b0 = (long *)0x0;
        plVar8 = *(long **)(TextServerManager::singleton + 0x178);
        if (plVar8 != (long *)0x0) {
          local_a8[0] = 0;
          local_b0 = plVar8;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_b0 = (long *)0x0;
            plVar8 = (long *)0x0;
          }
          Ref<TextServer>::unref((Ref<TextServer> *)local_a8);
        }
        iVar6 = (**(code **)(*plVar8 + 0x6b0))(plVar8,&local_e0);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_b0);
        if (0 < iVar6) {
          piVar10 = (int *)(lVar7 + 0x24);
          piVar1 = (int *)(lVar7 + 0x54 + (ulong)(iVar6 - 1) * 0x30);
          do {
            while ((*(long *)(piVar10 + -3) == 0 || (*piVar10 == 0))) {
              piVar10 = piVar10 + 0xc;
              if (piVar1 == piVar10) goto LAB_00108020;
            }
            piVar10 = piVar10 + 0xc;
            HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)local_a8)
            ;
          } while (piVar1 != piVar10);
        }
LAB_00108020:
        local_b0 = (long *)0x0;
        plVar8 = *(long **)(TextServerManager::singleton + 0x178);
        if (plVar8 != (long *)0x0) {
          local_a8[0] = 0;
          local_b0 = plVar8;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_b0 = (long *)0x0;
            plVar8 = (long *)0x0;
          }
          Ref<TextServer>::unref((Ref<TextServer> *)local_a8);
        }
        (**(code **)(*plVar8 + 0x168))(plVar8);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_b0);
        _glyph_update_lbl(this);
      }
      _range_selected(this);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar4), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_00107c06;
    }
  }
  Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_e8);
LAB_00107c06:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DynamicFontImportSettingsDialog::_range_update(int, int) */

void __thiscall
DynamicFontImportSettingsDialog::_range_update
          (DynamicFontImportSettingsDialog *this,int param_1,int param_2)

{
  Object *pOVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  wchar32 wVar8;
  long in_FS_OFFSET;
  Ref<DynamicFontImportSettingsData> *local_80;
  Object *local_70;
  wchar32 local_68 [4];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (Object *)0x0;
  lVar5 = Tree::get_selected();
  if (lVar5 == 0) {
LAB_0010845a:
    local_80 = (Ref<DynamicFontImportSettingsData> *)&local_70;
    Ref<DynamicFontImportSettingsData>::unref(local_80);
  }
  else {
    TreeItem::get_metadata((int)(Variant *)local_58);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_70,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar1 = local_70;
    if (local_70 == (Object *)0x0) goto LAB_0010845a;
    cVar3 = '\x01';
    if (param_1 <= param_2) {
      plVar6 = *(long **)(this + 0xec8);
      uVar7 = param_1;
      do {
        while( true ) {
          cVar2 = (**(code **)(*plVar6 + 0x2d0))(plVar6,uVar7);
          plVar6 = *(long **)(this + 0xec8);
          if (cVar2 != '\0') break;
LAB_00108289:
          uVar7 = uVar7 + 1;
          if (param_2 < (int)uVar7) goto LAB_001082e0;
        }
        if (plVar6 != (long *)0x0) {
          if (cVar3 != '\0') {
            cVar3 = HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::
                    _lookup_pos((HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>
                                 *)(pOVar1 + 0x1f0),(wchar32 *)(ulong)uVar7,(uint *)local_68);
            if (cVar3 != '\0') goto LAB_001082cd;
            uVar4 = (**(code **)(*plVar6 + 0x630))(plVar6,0x10,uVar7,0);
            cVar3 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos
                              ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                               (pOVar1 + 0x218),(int *)(ulong)uVar4,(uint *)local_68);
            plVar6 = *(long **)(this + 0xec8);
          }
          goto LAB_00108289;
        }
        if (cVar3 == '\0') goto LAB_00108289;
        cVar3 = HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::
                _lookup_pos((HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>
                             *)(pOVar1 + 0x1f0),(wchar32 *)(ulong)uVar7,(uint *)local_68);
LAB_001082cd:
        uVar7 = uVar7 + 1;
        plVar6 = *(long **)(this + 0xec8);
      } while ((int)uVar7 <= param_2);
LAB_001082e0:
      wVar8 = param_1;
      while( true ) {
        cVar2 = (**(code **)(*plVar6 + 0x2d0))(plVar6,wVar8);
        if (cVar2 != '\0') {
          if (cVar3 == '\0') {
            HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::insert
                      (local_68);
          }
          else {
            local_68[0] = wVar8;
            HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::erase
                      ((HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>> *)
                       (pOVar1 + 0x1f0),local_68);
            plVar6 = *(long **)(this + 0xec8);
            if (plVar6 != (long *)0x0) {
              local_68[0] = (**(code **)(*plVar6 + 0x630))(plVar6,0x10,wVar8,0);
              HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::erase
                        ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                         (pOVar1 + 0x218),local_68);
            }
          }
        }
        if (param_2 < wVar8 + L'\x01') break;
        wVar8 = wVar8 + L'\x01';
        plVar6 = *(long **)(this + 0xec8);
      }
    }
    _edit_range((int)this,param_1);
    lVar5 = Tree::get_selected();
    if (lVar5 == 0) {
      _err_print_error("_range_update","editor/import/dynamic_font_import_settings.cpp",0x3ac,
                       "Parameter \"item\" is null.",0,0);
      goto LAB_0010845a;
    }
    TreeItem::set_checked((int)lVar5,false);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_001084f2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001084f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_range_edited() */

void __thiscall
DynamicFontImportSettingsDialog::_range_edited(DynamicFontImportSettingsDialog *this)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Tree::get_selected();
  if (lVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_range_edited","editor/import/dynamic_font_import_settings.cpp",0x326,
                       "Parameter \"item\" is null.",0,0);
      return;
    }
  }
  else {
    TreeItem::get_metadata((int)(Variant *)local_38);
    uVar2 = Variant::operator_cast_to_Vector2i((Variant *)local_38);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _range_update(this,(int)uVar2,(int)((ulong)uVar2 >> 0x20));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_variations_validate() */

void __thiscall
DynamicFontImportSettingsDialog::_variations_validate(DynamicFontImportSettingsDialog *this)

{
  bool *pbVar1;
  String *pSVar2;
  Object *pOVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Object *pOVar9;
  Variant *this_00;
  long *plVar10;
  long in_FS_OFFSET;
  long local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  lVar7 = TreeItem::get_first_child();
  if (lVar7 == 0) {
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"");
    local_70 = 0;
    String::parse_latin1
              ((String *)&local_70,
               "Warning: There are no configurations specified, no glyphs will be pre-rendered.");
    TTR((String *)&local_60,(String *)&local_70);
    if (local_80 != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_60;
      local_60 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  lVar7 = TreeItem::get_first_child();
  if (lVar7 != 0) {
    do {
      iVar6 = (int)(StringName *)local_58;
      TreeItem::get_metadata(iVar6);
      local_78 = (Object *)0x0;
      Ref<DynamicFontImportSettingsData>::operator=
                ((Ref<DynamicFontImportSettingsData> *)&local_78,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pOVar3 = local_78;
      if (local_78 == (Object *)0x0) {
        _err_print_error("_variations_validate","editor/import/dynamic_font_import_settings.cpp",
                         0x265,"Condition \"import_variation_data_a.is_null()\" is true.",0,0);
        goto LAB_001087d9;
      }
      lVar8 = TreeItem::get_first_child();
      while (lVar8 != 0) {
        if (lVar8 != lVar7) {
          plVar10 = *(long **)(pOVar3 + 0x198);
          if (plVar10 != (long *)0x0) {
            cVar5 = '\x01';
LAB_00108745:
            do {
              TreeItem::get_metadata(iVar6);
              lVar8 = Variant::get_validated_object();
              if (lVar8 == 0) {
LAB_0010878f:
                cVar5 = Variant::needs_deinit[local_58[0]];
joined_r0x00108a8f:
                if (cVar5 != '\0') {
                  Variant::_clear_internal();
                }
                _err_print_error("_variations_validate",
                                 "editor/import/dynamic_font_import_settings.cpp",0x26c,
                                 "Condition \"import_variation_data_b.is_null()\" is true.",0,0);
                cVar5 = RefCounted::unreference();
                if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
                goto LAB_001087d9;
              }
              pOVar9 = (Object *)
                       __dynamic_cast(lVar8,&Object::typeinfo,
                                      &DynamicFontImportSettingsData::typeinfo,0);
              if (pOVar9 == (Object *)0x0) {
                cVar5 = Variant::needs_deinit[local_58[0]];
                goto joined_r0x00108a8f;
              }
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') goto LAB_0010878f;
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (cVar5 == '\0') {
                cVar4 = RefCounted::unreference();
              }
              else {
                this_00 = (Variant *)
                          HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                        *)(pOVar9 + 0x180),(StringName *)(plVar10 + 2));
                cVar5 = Variant::operator==(this_00,(Variant *)(plVar10 + 3));
                cVar4 = RefCounted::unreference();
              }
              if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar9), cVar4 == '\0')) {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) break;
                goto LAB_00108745;
              }
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
            if (cVar5 == '\0') goto LAB_00108886;
          }
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"");
          local_70 = 0;
          String::parse_latin1
                    ((String *)&local_70,
                     "Warning: Multiple configurations have identical settings. Duplicates will be ignored."
                    );
          TTR((String *)&local_60,(String *)&local_70);
          if (local_80 != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            local_80 = local_60;
            local_60 = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          break;
        }
LAB_00108886:
        lVar8 = TreeItem::get_next();
      }
      Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_78);
      lVar7 = TreeItem::get_next();
    } while (lVar7 != 0);
  }
  pbVar1 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_60,"antialiasing",false);
  Object::get((StringName *)local_58,pbVar1);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (iVar6 == 2) {
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = (Object *)0x0;
    String::parse_latin1
              ((String *)&local_78,
               "Note: LCD Subpixel antialiasing is selected, each of the glyphs will be pre-rendered for all supported subpixel layouts (5x)."
              );
    TTR((String *)&local_68,(String *)&local_78);
    operator+((char *)&local_60,(String *)&_LC173);
    String::operator+=((String *)&local_80,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  pbVar1 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_60,"subpixel_positioning",false);
  Object::get((StringName *)local_58,pbVar1);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (iVar6 == 4) {
    if (this[0xdd8] != (DynamicFontImportSettingsDialog)0x0) goto LAB_00108a26;
  }
  else if (iVar6 == 0) goto LAB_00108a26;
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"");
  local_78 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_78,
             "Note: Subpixel positioning is selected, each of the glyphs might be pre-rendered for multiple subpixel offsets (up to 4x)."
            );
  TTR((String *)&local_68,(String *)&local_78);
  operator+((char *)&local_60,(String *)&_LC173);
  String::operator+=((String *)&local_80,(String *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00108a26:
  pSVar2 = *(String **)(this + 0xde0);
  if ((local_80 == 0) || (*(uint *)(local_80 + -8) < 2)) {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    Label::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CanvasItem::hide();
  }
  else {
    Label::set_text(pSVar2);
    CanvasItem::show();
  }
LAB_001087d9:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_variation_remove(Object*, int, int, MouseButton) */

void __thiscall
DynamicFontImportSettingsDialog::_variation_remove
          (DynamicFontImportSettingsDialog *this,Object *param_1,undefined8 param_3,
          undefined8 param_4,int param_5)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if (param_1 == (Object *)0x0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_variation_remove","editor/import/dynamic_font_import_settings.cpp",0x241,
                         "Parameter \"vars_item\" is null.",0,0);
        return;
      }
    }
    else {
      EditorInspector::edit(*(Object **)(this + 0xe38));
      TreeItem::remove_child(*(TreeItem **)(this + 0xe30));
      cVar2 = predelete_handler(param_1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)param_1 + 0x140))(param_1);
        Memory::free_static(param_1,false);
      }
      lVar3 = TreeItem::get_first_child();
      if (lVar3 != 0) {
        TreeItem::get_first_child();
        TreeItem::get_metadata((int)(Variant *)local_38);
        local_40 = (Object *)0x0;
        Ref<DynamicFontImportSettingsData>::operator=
                  ((Ref<DynamicFontImportSettingsData> *)&local_40,(Variant *)local_38);
        if (Variant::needs_deinit[local_38[0]] != '\0') {
          Variant::_clear_internal();
        }
        pOVar1 = local_40;
        EditorInspector::edit(*(Object **)(this + 0xe38));
        Object::notify_property_list_changed();
        if (pOVar1 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
      }
      _variations_validate(this);
      lVar3 = Tree::get_selected();
      if (lVar3 == 0) {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe88),0));
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe68),0));
          return;
        }
      }
      else {
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe88),0));
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe68),0));
          return;
        }
      }
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_variation_changed(String const&) */

void DynamicFontImportSettingsDialog::_variation_changed(String *param_1)

{
  _variations_validate((DynamicFontImportSettingsDialog *)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicFontImportSettingsDialog::_variation_add() */

void __thiscall
DynamicFontImportSettingsDialog::_variation_add(DynamicFontImportSettingsDialog *this)

{
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  *this_00;
  long *plVar1;
  ImportOption *this_01;
  undefined8 uVar2;
  Object *pOVar3;
  Object *pOVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  Variant *this_02;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  Object *local_80;
  undefined8 local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = Tree::create_item(*(TreeItem **)(this + 0xe28),(int)*(undefined8 *)(this + 0xe30));
  if (lVar8 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_variation_add","editor/import/dynamic_font_import_settings.cpp",0x20c,
                       "Parameter \"vars_item\" is null.",0,0);
      return;
    }
  }
  else {
    local_70 = (Object *)0x0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "New Configuration";
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    TreeItem::set_text(lVar8,0,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar12 = (int)lVar8;
    TreeItem::set_editable(iVar12,false);
    local_68 = "";
    local_70 = (Object *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Remove Variation";
    local_78 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    if (_variation_add()::{lambda()#1}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_variation_add()::{lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_variation_add()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_variation_add()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_variation_add()::{lambda()#1}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_80);
    TreeItem::add_button(iVar12,(Ref *)0x1,(int)(StringName *)&local_80,true,(String *)0x0);
    if (local_80 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_80);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)local_80 + 0x140))(local_80);
          Memory::free_static(local_80,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = __LC181;
    uStack_50 = _UNK_0012b348;
    TreeItem::set_button_color(iVar12,1,(Color *)0x0);
    local_70 = (Object *)0x0;
    Ref<DynamicFontImportSettingsData>::instantiate<>
              ((Ref<DynamicFontImportSettingsData> *)&local_70);
    pOVar5 = local_70;
    plVar1 = *(long **)(this + 0xdc8);
    *(DynamicFontImportSettingsDialog **)(local_70 + 0x1e8) = this;
    if ((plVar1 != (long *)0x0) && (lVar8 = *plVar1, lVar8 != 0)) {
      this_00 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 *)(local_70 + 0x1b0);
      do {
        StringName::StringName((StringName *)&local_68,(String *)(lVar8 + 8),false);
        this_02 = (Variant *)
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[](this_00,(StringName *)&local_68);
        Variant::operator=(this_02,(Variant *)(lVar8 + 0x30));
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        lVar8 = *(long *)(lVar8 + 0x48);
      } while (lVar8 != 0);
    }
    puVar9 = *(undefined8 **)(pOVar5 + 0x1e0);
    if (puVar9 != (undefined8 *)0x0) {
      do {
        this_01 = (ImportOption *)*puVar9;
        if (this_01 == (ImportOption *)0x0) goto LAB_00109298;
        if (*(undefined8 **)(this_01 + 0x58) == puVar9) {
          *puVar9 = *(undefined8 *)(this_01 + 0x48);
          if (this_01 == (ImportOption *)puVar9[1]) {
            puVar9[1] = *(undefined8 *)(this_01 + 0x50);
          }
          if (*(long *)(this_01 + 0x50) != 0) {
            *(undefined8 *)(*(long *)(this_01 + 0x50) + 0x48) = *(undefined8 *)(this_01 + 0x48);
          }
          if (*(long *)(this_01 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(this_01 + 0x48) + 0x50) = *(undefined8 *)(this_01 + 0x50);
          }
          ResourceImporter::ImportOption::~ImportOption(this_01);
          Memory::free_static(this_01,false);
          *(int *)(puVar9 + 2) = *(int *)(puVar9 + 2) + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        puVar9 = *(undefined8 **)(pOVar5 + 0x1e0);
      } while (*(int *)(puVar9 + 2) != 0);
      Memory::free_static(puVar9,false);
      *(undefined8 *)(pOVar5 + 0x1e0) = 0;
    }
    puVar9 = (undefined8 *)0x0;
LAB_00109298:
    if ((*(undefined8 **)(this + 0xdc8) != (undefined8 *)0x0) &&
       (puVar13 = (undefined4 *)**(undefined8 **)(this + 0xdc8), puVar13 != (undefined4 *)0x0)) {
      if (puVar9 == (undefined8 *)0x0) {
        pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(pOVar5 + 0x1e0) = pauVar10;
        *(undefined4 *)pauVar10[1] = 0;
        *pauVar10 = (undefined1  [16])0x0;
      }
      do {
        while( true ) {
          puVar11 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
          *(undefined8 *)(puVar11 + 8) = 0;
          *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar11 + 0xe) = (undefined1  [16])0x0;
          lVar8 = *(long *)(puVar13 + 2);
          *puVar11 = 0;
          puVar11[6] = 0;
          puVar11[10] = 6;
          puVar11[0xc] = 0;
          *(undefined8 *)(puVar11 + 0x16) = 0;
          *(undefined1 (*) [16])(puVar11 + 0x12) = (undefined1  [16])0x0;
          *puVar11 = *puVar13;
          if (lVar8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)(puVar13 + 2));
          }
          StringName::operator=((StringName *)(puVar11 + 4),(StringName *)(puVar13 + 4));
          puVar11[6] = puVar13[6];
          if (*(long *)(puVar11 + 8) != *(long *)(puVar13 + 8)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)(puVar13 + 8));
          }
          puVar11[10] = puVar13[10];
          Variant::operator=((Variant *)(puVar11 + 0xc),(Variant *)(puVar13 + 0xc));
          uVar2 = *(undefined8 *)(*(long *)(pOVar5 + 0x1e0) + 8);
          *(long *)(puVar11 + 0x16) = *(long *)(pOVar5 + 0x1e0);
          plVar1 = *(long **)(pOVar5 + 0x1e0);
          *(undefined8 *)(puVar11 + 0x12) = 0;
          *(undefined8 *)(puVar11 + 0x14) = uVar2;
          if (plVar1[1] != 0) {
            *(undefined4 **)(plVar1[1] + 0x48) = puVar11;
          }
          plVar1[1] = (long)puVar11;
          if (*plVar1 == 0) break;
          puVar13 = *(undefined4 **)(puVar13 + 0x12);
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
          if (puVar13 == (undefined4 *)0x0) goto LAB_001093f1;
        }
        *plVar1 = (long)puVar11;
        puVar13 = *(undefined4 **)(puVar13 + 0x12);
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      } while (puVar13 != (undefined4 *)0x0);
    }
LAB_001093f1:
    EditorInspector::edit(*(Object **)(this + 0xe38));
    Object::notify_property_list_changed();
    pOVar3 = *(Object **)(this + 0xec8);
    pOVar4 = *(Object **)(pOVar5 + 0x240);
    if (pOVar3 != pOVar4) {
      *(Object **)(pOVar5 + 0x240) = pOVar3;
      if (pOVar3 != (Object *)0x0) {
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          *(undefined8 *)(pOVar5 + 0x240) = 0;
        }
      }
      if (pOVar4 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar4);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    Variant::Variant((Variant *)&local_58,pOVar5);
    TreeItem::set_metadata(iVar12,(Variant *)0x0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    _variations_validate(this);
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar5);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar5,false);
          return;
        }
        goto LAB_0010965e;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010965e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_re_import() */

void __thiscall DynamicFontImportSettingsDialog::_re_import(DynamicFontImportSettingsDialog *this)

{
  long *plVar1;
  Object *pOVar2;
  uint uVar3;
  bool *pbVar4;
  String *pSVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  Variant *pVVar9;
  long lVar10;
  StringName *pSVar11;
  Variant *this_00;
  char *pcVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  long in_FS_OFFSET;
  Array local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  String local_f8 [8];
  undefined8 local_f0;
  String local_e8 [8];
  CowData<char32_t> local_e0 [8];
  Object *local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  pbVar4 = *(bool **)(this + 0xdc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = 2;
  StringName::StringName((StringName *)&local_c0,"face_index",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"face_index",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"antialiasing",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"antialiasing",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"generate_mipmaps",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"generate_mipmaps",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"disable_embedded_bitmaps",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"disable_embedded_bitmaps",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"multichannel_signed_distance_field",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"multichannel_signed_distance_field",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"msdf_pixel_range",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"msdf_pixel_range",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"msdf_size",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"msdf_size",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"allow_system_fallback",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"allow_system_fallback",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"force_autohinter",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"force_autohinter",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"hinting",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"hinting",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"subpixel_positioning",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"subpixel_positioning",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"keep_rounding_remainders",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"keep_rounding_remainders",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"oversampling",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"oversampling",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"fallbacks",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"fallbacks",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  pbVar4 = *(bool **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_c0,"compress",false);
  Object::get((StringName *)local_58,pbVar4);
  StringName::StringName((StringName *)&local_c8,"compress",false);
  pVVar9 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[](local_b8,(StringName *)&local_c8);
  Variant::operator=(pVVar9,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  Array::Array(local_120);
  lVar10 = TreeItem::get_first_child();
  if (lVar10 == 0) {
LAB_0010a627:
    Variant::Variant((Variant *)local_58,local_120);
    StringName::StringName((StringName *)&local_c0,"preload",false);
    pVVar9 = (Variant *)
             HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::operator[](local_b8,(StringName *)&local_c0);
    Variant::operator=(pVVar9,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pbVar4 = *(bool **)(this + 0xdc0);
    StringName::StringName((StringName *)&local_c0,"language_support",false);
    Object::get((StringName *)local_58,pbVar4);
    StringName::StringName((StringName *)&local_c8,"language_support",false);
    pVVar9 = (Variant *)
             HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::operator[](local_b8,(StringName *)&local_c8);
    Variant::operator=(pVVar9,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    pbVar4 = *(bool **)(this + 0xdc0);
    StringName::StringName((StringName *)&local_c0,"script_support",false);
    Object::get((StringName *)local_58,pbVar4);
    StringName::StringName((StringName *)&local_c8,"script_support",false);
    pVVar9 = (Variant *)
             HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::operator[](local_b8,(StringName *)&local_c8);
    Variant::operator=(pVVar9,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    pbVar4 = *(bool **)(this + 0xdc0);
    StringName::StringName((StringName *)&local_c0,"opentype_features",false);
    Object::get((StringName *)local_58,pbVar4);
    StringName::StringName((StringName *)&local_c8,"opentype_features",false);
    pVVar9 = (Variant *)
             HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::operator[](local_b8,(StringName *)&local_c8);
    Variant::operator=(pVVar9,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    OS::get_singleton();
    cVar7 = OS::is_stdout_verbose();
    if (cVar7 != '\0') {
      Variant::Variant((Variant *)local_58,"Import settings:");
      stringify_variants((Variant *)&local_c0);
      __print_line((String *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        plVar13 = (long *)local_a0._0_8_;
        do {
          Variant::operator_cast_to_String((Variant *)local_e0);
          String::utf8();
          pcVar12 = (char *)CharString::get_data();
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,pcVar12);
          local_f0 = 0;
          String::parse_latin1((String *)&local_f0," == ");
          lVar10 = plVar13[2];
          if (lVar10 == 0) {
            local_110 = 0;
          }
          else {
            local_110 = 0;
            if (*(char **)(lVar10 + 8) == (char *)0x0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_110,*(char **)(lVar10 + 8));
            }
          }
          String::utf8();
          pcVar12 = (char *)CharString::get_data();
          local_100 = 0;
          String::parse_latin1((String *)&local_100,pcVar12);
          local_118 = 0;
          String::parse_latin1((String *)&local_118,"    ");
          String::operator+(local_f8,(String *)&local_118);
          String::operator+(local_e8,local_f8);
          String::operator+((String *)&local_c8,local_e8);
          Variant::Variant((Variant *)local_58,(String *)&local_c8);
          stringify_variants((Variant *)&local_c0);
          __print_line((String *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          lVar10 = local_108;
          if (local_108 != 0) {
            LOCK();
            plVar1 = (long *)(local_108 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_108 = 0;
              Memory::free_static((void *)(lVar10 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          pOVar6 = local_d8;
          if (local_d8 != (Object *)0x0) {
            LOCK();
            pOVar2 = local_d8 + -0x10;
            *(long *)pOVar2 = *(long *)pOVar2 + -1;
            UNLOCK();
            if (*(long *)pOVar2 == 0) {
              local_d8 = (Object *)0x0;
              Memory::free_static(pOVar6 + -0x10,false);
            }
          }
          CowData<char32_t>::_unref(local_e0);
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
    pSVar5 = EditorFileSystem::singleton;
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"font_data_dynamic");
    EditorFileSystem::reimport_file_with_custom_parameters
              (pSVar5,(String *)(this + 0xdb8),(HashMap *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Array::~Array(local_120);
    if ((void *)local_b0._0_8_ == (void *)0x0) goto LAB_0010a9d4;
    pvVar14 = (void *)local_b0._0_8_;
    if (local_90._4_4_ != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
      if (uVar3 == 0) goto LAB_0010b013;
      lVar10 = 0;
      do {
        if (*(int *)(local_b0._8_8_ + lVar10) != 0) {
          pvVar14 = *(void **)((long)pvVar14 + lVar10 * 2);
          *(int *)(local_b0._8_8_ + lVar10) = 0;
          if (Variant::needs_deinit[*(int *)((long)pvVar14 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar14 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar14,false);
          *(undefined8 *)(local_b0._0_8_ + lVar10 * 2) = 0;
          pvVar14 = (void *)local_b0._0_8_;
        }
        lVar10 = lVar10 + 4;
      } while (lVar10 != (ulong)uVar3 * 4);
LAB_0010a9a2:
      local_90 = local_90 & 0xffffffff;
      local_a0 = (undefined1  [16])0x0;
      if (pvVar14 == (void *)0x0) goto LAB_0010a9d4;
    }
  }
  else {
    while( true ) {
      TreeItem::get_metadata((int)(StringName *)local_58);
      local_d8 = (Object *)0x0;
      Ref<DynamicFontImportSettingsData>::operator=
                ((Ref<DynamicFontImportSettingsData> *)&local_d8,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pOVar6 = local_d8;
      if (local_d8 == (Object *)0x0) break;
      Dictionary::Dictionary((Dictionary *)&local_d0);
      TreeItem::get_text((int)(StringName *)&local_c0);
      Variant::Variant((Variant *)local_58,(String *)&local_c0);
      Variant::Variant((Variant *)local_78,"name");
      pSVar11 = (StringName *)Dictionary::operator[]((Variant *)&local_d0);
      if (pSVar11 != (StringName *)local_58) {
        if (Variant::needs_deinit[*(int *)pSVar11] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pSVar11 = 0;
        *(int *)pSVar11 = local_58[0];
        *(undefined8 *)(pSVar11 + 8) = local_50;
        *(undefined8 *)(pSVar11 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      plVar13 = *(long **)(pOVar6 + 0x198);
      local_80 = _LC187;
joined_r0x0010a23a:
      if (plVar13 != (long *)0x0) {
        do {
          pSVar11 = (StringName *)(plVar13 + 2);
          pVVar9 = (Variant *)(plVar13 + 3);
          cVar7 = StringName::operator==(pSVar11,"size");
          if (cVar7 != '\0') {
            iVar8 = Variant::operator_cast_to_int(pVVar9);
            local_80 = CONCAT44(local_80._4_4_,iVar8);
          }
          cVar7 = StringName::operator==(pSVar11,"outline_size");
          if (cVar7 == '\0') {
            Variant::Variant((Variant *)local_58,pSVar11);
            this_00 = (Variant *)Dictionary::operator[]((Variant *)&local_d0);
            Variant::operator=(this_00,pVVar9);
            if (Variant::needs_deinit[local_58[0]] != '\0') goto code_r0x0010a2cb;
          }
          else {
            iVar8 = Variant::operator_cast_to_int(pVVar9);
            local_80 = CONCAT44(iVar8,(undefined4)local_80);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) break;
        } while( true );
      }
      Variant::Variant((Variant *)local_58,(Vector2i *)&local_80);
      Variant::Variant((Variant *)local_78,"size");
      pSVar11 = (StringName *)Dictionary::operator[]((Variant *)&local_d0);
      if (pSVar11 != (StringName *)local_58) {
        if (Variant::needs_deinit[*(int *)pSVar11] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pSVar11 = 0;
        *(int *)pSVar11 = local_58[0];
        *(undefined8 *)(pSVar11 + 8) = local_50;
        *(undefined8 *)(pSVar11 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::Array((Array *)&local_c8);
      iVar8 = *(int *)(pOVar6 + 0x214);
      if (iVar8 != 0) {
        lVar15 = 0;
        lVar10 = *(long *)(pOVar6 + 0x1f0);
        while( true ) {
          Variant::Variant((Variant *)local_58,*(uint *)(lVar10 + lVar15 * 4));
          Array::push_back((Variant *)&local_c8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (iVar8 <= (int)lVar15 + 1) break;
          lVar15 = lVar15 + 1;
        }
      }
      Variant::Variant((Variant *)local_58,(Array *)&local_c8);
      Variant::Variant((Variant *)local_78,"chars");
      pSVar11 = (StringName *)Dictionary::operator[]((Variant *)&local_d0);
      if (pSVar11 != (StringName *)local_58) {
        if (Variant::needs_deinit[*(int *)pSVar11] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pSVar11 = 0;
        *(int *)pSVar11 = local_58[0];
        *(undefined8 *)(pSVar11 + 8) = local_50;
        *(undefined8 *)(pSVar11 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::Array((Array *)&local_c0);
      iVar8 = *(int *)(pOVar6 + 0x23c);
      if (iVar8 != 0) {
        lVar10 = *(long *)(pOVar6 + 0x218);
        lVar15 = 0;
        while( true ) {
          Variant::Variant((Variant *)local_58,*(int *)(lVar10 + lVar15 * 4));
          Array::push_back((Variant *)&local_c0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (iVar8 <= (int)lVar15 + 1) break;
          lVar15 = lVar15 + 1;
        }
      }
      Variant::Variant((Variant *)local_58,(Array *)&local_c0);
      Variant::Variant((Variant *)local_78,"glyphs");
      pSVar11 = (StringName *)Dictionary::operator[]((Variant *)&local_d0);
      if (pSVar11 != (StringName *)local_58) {
        if (Variant::needs_deinit[*(int *)pSVar11] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pSVar11 = 0;
        *(int *)pSVar11 = local_58[0];
        *(undefined8 *)(pSVar11 + 8) = local_50;
        *(undefined8 *)(pSVar11 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(Dictionary *)&local_d0);
      Array::push_back((Variant *)local_120);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)&local_c0);
      Array::~Array((Array *)&local_c8);
      Dictionary::~Dictionary((Dictionary *)&local_d0);
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      lVar10 = TreeItem::get_next();
      if (lVar10 == 0) goto LAB_0010a627;
    }
    _err_print_error("_re_import","editor/import/dynamic_font_import_settings.cpp",0x3de,
                     "Condition \"import_variation_data.is_null()\" is true.",0,0);
    Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_d8);
    Array::~Array(local_120);
    if ((void *)local_b0._0_8_ == (void *)0x0) goto LAB_0010a9d4;
    pvVar14 = (void *)local_b0._0_8_;
    if (local_90._4_4_ != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
      if (uVar3 != 0) {
        lVar10 = 0;
        do {
          if (*(int *)(local_b0._8_8_ + lVar10) != 0) {
            pvVar14 = *(void **)((long)pvVar14 + lVar10 * 2);
            *(int *)(local_b0._8_8_ + lVar10) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar14 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar14 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar14,false);
            *(undefined8 *)(local_b0._0_8_ + lVar10 * 2) = 0;
            pvVar14 = (void *)local_b0._0_8_;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar3 * 4);
        goto LAB_0010a9a2;
      }
LAB_0010b013:
      local_90 = local_90 & 0xffffffff;
      local_a0 = (undefined1  [16])0x0;
      pvVar14 = (void *)local_b0._0_8_;
    }
  }
  Memory::free_static(pvVar14,false);
  Memory::free_static((void *)local_b0._8_8_,false);
LAB_0010a9d4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010a2cb:
  Variant::_clear_internal();
  plVar13 = (long *)*plVar13;
  goto joined_r0x0010a23a;
}



/* DynamicFontImportSettingsDialog::_change_text_opts() */

void __thiscall
DynamicFontImportSettingsDialog::_change_text_opts(DynamicFontImportSettingsDialog *this)

{
  code *pcVar1;
  bool *pbVar2;
  bool *pbVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  FontVariation *this_00;
  Object *pOVar7;
  Object *pOVar8;
  StringName *pSVar9;
  long in_FS_OFFSET;
  Ref<DynamicFontImportSettingsData> *local_c0;
  bool *local_90;
  long local_88;
  Object *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (bool *)0x0;
  lVar6 = Tree::get_selected();
  if (lVar6 != 0) {
    TreeItem::get_metadata((int)(StringName *)local_58);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_90,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pbVar3 = local_90;
    if (local_90 != (bool *)0x0) {
      this_00 = (FontVariation *)operator_new(0x330,"");
      FontVariation::FontVariation(this_00);
      postinitialize_handler((Object *)this_00);
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      cVar4 = RefCounted::reference();
      pOVar8 = (Object *)0x0;
      if (cVar4 != '\0') {
        pOVar8 = (Object *)this_00;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
      pcVar1 = *(code **)(*(long *)pOVar8 + 0x308);
      local_80 = (Object *)0x0;
      if (((*(long *)(this + 0xec8) != 0) &&
          (pOVar7 = (Object *)
                    __dynamic_cast(*(long *)(this + 0xec8),&Object::typeinfo,&Font::typeinfo,0),
          pOVar7 != (Object *)0x0)) &&
         (local_80 = pOVar7, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_80 = (Object *)0x0;
      }
      (*pcVar1)(pOVar8);
      if (((local_80 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar7 = local_80, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))();
        Memory::free_static(pOVar7,false);
      }
      pcVar1 = *(code **)(*(long *)pOVar8 + 0x360);
      pbVar2 = *(bool **)(this + 0xe98);
      StringName::StringName((StringName *)&local_88,"opentype_features",false);
      Object::get((StringName *)local_58,pbVar2);
      Variant::operator_cast_to_Dictionary((Variant *)&local_80);
      (*pcVar1)(pOVar8,(Variant *)&local_80);
      Dictionary::~Dictionary((Dictionary *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      pcVar1 = *(code **)(*(long *)pOVar8 + 800);
      StringName::StringName((StringName *)&local_88,"variation_opentype",false);
      Object::get((StringName *)local_58,pbVar3);
      Variant::operator_cast_to_Dictionary((Variant *)&local_80);
      (*pcVar1)(pOVar8,(Variant *)&local_80);
      Dictionary::~Dictionary((Dictionary *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      pcVar1 = *(code **)(*(long *)pOVar8 + 0x330);
      StringName::StringName((StringName *)&local_80,"variation_embolden",false);
      Object::get((StringName *)local_58,pbVar3);
      Variant::operator_cast_to_float((Variant *)local_58);
      (*pcVar1)(pOVar8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
        StringName::unref();
      }
      pcVar1 = *(code **)(*(long *)pOVar8 + 0x350);
      StringName::StringName((StringName *)&local_80,"variation_face_index",false);
      Object::get((StringName *)local_58,pbVar3);
      iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
      (*pcVar1)(pOVar8,iVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
        StringName::unref();
      }
      pcVar1 = *(code **)(*(long *)pOVar8 + 0x340);
      StringName::StringName((StringName *)&local_80,"variation_transform",false);
      Object::get((StringName *)local_78,pbVar3);
      Variant::operator_cast_to_Transform2D((Variant *)local_58);
      (*pcVar1)(pOVar8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured == '\0') || (local_80 == (Object *)0x0)) {
        pSVar9 = *(StringName **)(this + 0xe78);
      }
      else {
        StringName::unref();
        pSVar9 = *(StringName **)(this + 0xe78);
      }
      local_80 = (Object *)0x0;
      pOVar7 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Font::typeinfo,0);
      if ((pOVar7 != (Object *)0x0) &&
         (local_80 = pOVar7, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_80 = (Object *)0x0;
      }
      Control::add_theme_font_override(pSVar9,(Ref *)(SceneStringNames::singleton + 0xa0));
      if (((local_80 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar7 = local_80, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  local_c0 = (Ref<DynamicFontImportSettingsData> *)&local_90;
  Ref<DynamicFontImportSettingsData>::unref(local_c0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DynamicFontImportSettingsDialog::_variation_selected() */

void __thiscall
DynamicFontImportSettingsDialog::_variation_selected(DynamicFontImportSettingsDialog *this)

{
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Tree::get_selected();
  if (lVar4 == 0) {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe88),0));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe68),0));
      return;
    }
  }
  else {
    TreeItem::get_metadata((int)(Variant *)local_58);
    local_88 = (Object *)0x0;
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_88,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar2 = local_88;
    if (local_88 == (Object *)0x0) {
      _err_print_error("_variation_selected","editor/import/dynamic_font_import_settings.cpp",0x22a,
                       "Condition \"import_variation_data.is_null()\" is true.",0,0);
      Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_88);
    }
    else {
      EditorInspector::edit(*(Object **)(this + 0xe38));
      Object::notify_property_list_changed();
      pSVar1 = *(String **)(this + 0xe48);
      local_78 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_80 = 0;
      local_68 = "Preloaded glyphs: %d";
      local_60 = 0x14;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_70,(String *)&local_80);
      vformat<unsigned_int>((String *)&local_68,(uint)local_70);
      Label::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      _range_selected(this);
      _change_text_opts(this);
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe88),0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe68),0));
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar2,false);
            return;
          }
          goto LAB_0010b962;
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010b962:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_main_prop_changed(String const&) */

void __thiscall
DynamicFontImportSettingsDialog::_main_prop_changed
          (DynamicFontImportSettingsDialog *this,String *param_1)

{
  bool *pbVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  Object *pOVar6;
  long lVar7;
  StringName *pSVar8;
  char *pcVar9;
  long *plVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xec0) == 0) {
    local_60 = (Object *)0x0;
    pSVar8 = *(StringName **)(this + 0xe00);
    goto LAB_0010baa0;
  }
  cVar2 = String::operator==(param_1,"antialiasing");
  if (cVar2 == '\0') {
    pcVar9 = "generate_mipmaps";
    cVar2 = String::operator==(param_1,"generate_mipmaps");
    if (cVar2 == '\0') {
      pcVar9 = "disable_embedded_bitmaps";
      cVar2 = String::operator==(param_1,"disable_embedded_bitmaps");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 0x358);
        goto LAB_0010bb76;
      }
      cVar2 = String::operator==(param_1,"multichannel_signed_distance_field");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pbVar1 = *(bool **)(this + 0xdc0);
        pcVar11 = *(code **)(*plVar10 + 0x378);
        StringName::StringName((StringName *)&local_60,"multichannel_signed_distance_field",false);
        Object::get((StringName *)local_58,pbVar1);
        bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
        (*pcVar11)(plVar10,bVar3);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        _variation_selected(this);
        _variations_validate(this);
        lVar7 = *(long *)(this + 0xec0);
        goto LAB_0010ba4e;
      }
      pcVar9 = "msdf_pixel_range";
      cVar2 = String::operator==(param_1,"msdf_pixel_range");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 0x388);
LAB_0010bd4c:
        pbVar1 = *(bool **)(this + 0xdc0);
        StringName::StringName((StringName *)&local_60,pcVar9,false);
        Object::get((StringName *)local_58,pbVar1);
        uVar5 = Variant::operator_cast_to_int((Variant *)local_58);
        goto LAB_0010bbaf;
      }
      pcVar9 = "msdf_size";
      cVar2 = String::operator==(param_1,"msdf_size");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 0x398);
        goto LAB_0010bd4c;
      }
      pcVar9 = "allow_system_fallback";
      cVar2 = String::operator==(param_1,"allow_system_fallback");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 0x3c8);
        goto LAB_0010bb76;
      }
      pcVar9 = "force_autohinter";
      cVar2 = String::operator==(param_1,"force_autohinter");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 0x3d8);
        goto LAB_0010bb76;
      }
      pcVar9 = "hinting";
      cVar2 = String::operator==(param_1,"hinting");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 1000);
        goto LAB_0010bd4c;
      }
      cVar2 = String::operator==(param_1,"subpixel_positioning");
      if (cVar2 != '\0') {
        pbVar1 = *(bool **)(this + 0xdc0);
        StringName::StringName((StringName *)&local_60,"subpixel_positioning",false);
        Object::get((StringName *)local_58,pbVar1);
        uVar5 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        if (uVar5 == 4) {
          uVar5 = (uint)((byte)this[0xdd8] ^ 1);
        }
        (**(code **)(**(long **)(this + 0xec0) + 0x3f8))(*(long **)(this + 0xec0),uVar5);
        goto LAB_0010ba3f;
      }
      pcVar9 = "keep_rounding_remainders";
      cVar2 = String::operator==(param_1,"keep_rounding_remainders");
      if (cVar2 != '\0') {
        plVar10 = *(long **)(this + 0xec0);
        pcVar11 = *(code **)(*plVar10 + 0x408);
        goto LAB_0010bb76;
      }
      cVar2 = String::operator==(param_1,"oversampling");
      if (cVar2 == '\0') {
        lVar7 = *(long *)(this + 0xec0);
        goto LAB_0010ba4e;
      }
      plVar10 = *(long **)(this + 0xec0);
      pbVar1 = *(bool **)(this + 0xdc0);
      pcVar11 = *(code **)(*plVar10 + 0x418);
      StringName::StringName((StringName *)&local_60,"oversampling",false);
      Object::get((StringName *)local_58,pbVar1);
      Variant::operator_cast_to_float((Variant *)local_58);
      (*pcVar11)(plVar10);
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    else {
      plVar10 = *(long **)(this + 0xec0);
      pcVar11 = *(code **)(*plVar10 + 0x368);
LAB_0010bb76:
      pbVar1 = *(bool **)(this + 0xdc0);
      StringName::StringName((StringName *)&local_60,pcVar9,false);
      Object::get((StringName *)local_58,pbVar1);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
      uVar5 = (uint)bVar3;
LAB_0010bbaf:
      (*pcVar11)(plVar10,uVar5);
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    lVar7 = *(long *)(this + 0xec0);
  }
  else {
    plVar10 = *(long **)(this + 0xec0);
    pbVar1 = *(bool **)(this + 0xdc0);
    pcVar11 = *(code **)(*plVar10 + 0x348);
    StringName::StringName((StringName *)&local_60,"antialiasing",false);
    Object::get((StringName *)local_58,pbVar1);
    iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
    (*pcVar11)(plVar10,iVar4);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
LAB_0010ba3f:
    _variations_validate(this);
    lVar7 = *(long *)(this + 0xec0);
  }
LAB_0010ba4e:
  local_60 = (Object *)0x0;
  pSVar8 = *(StringName **)(this + 0xe00);
  if (((lVar7 != 0) &&
      (pOVar6 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Font::typeinfo,0),
      pOVar6 != (Object *)0x0)) &&
     (local_60 = pOVar6, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_60 = (Object *)0x0;
  }
LAB_0010baa0:
  Control::add_theme_font_override(pSVar8,(Ref *)(SceneStringNames::singleton + 0xa0));
  if (((local_60 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar6 = local_60, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_60), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  pSVar8 = *(StringName **)(this + 0xe00);
  EditorScale::get_scale();
  Control::add_theme_font_size_override(pSVar8,(int)SceneStringNames::singleton + 0xa8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::queue_redraw();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicFontImportSettingsDialog::open_settings(String const&) */

void __thiscall
DynamicFontImportSettingsDialog::open_settings
          (DynamicFontImportSettingsDialog *this,String *param_1)

{
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  *this_00;
  float *pfVar1;
  float fVar2;
  float fVar3;
  StringName *pSVar4;
  code *pcVar5;
  TreeItem *pTVar6;
  void *pvVar7;
  bool *pbVar8;
  String *pSVar9;
  Object *pOVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  Variant *pVVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined8 *puVar21;
  float *pfVar22;
  wchar32 *pwVar23;
  ulong uVar24;
  ulong uVar25;
  Ref *pRVar26;
  ulong uVar27;
  ulong uVar28;
  CowData *pCVar29;
  long lVar30;
  long *plVar31;
  ulong uVar32;
  CowData *pCVar33;
  long in_FS_OFFSET;
  float fVar34;
  long local_220;
  CowData<char32_t> *local_218;
  CowData<char32_t> *local_200;
  String *local_1d8;
  Dictionary *local_1c0;
  CowData *local_1b0;
  int local_1a8;
  int local_1a4;
  double local_1a0;
  int local_198;
  int local_194;
  Array local_148 [8];
  CowData<char32_t> local_140 [8];
  long local_138;
  long local_130;
  String *local_128;
  long *local_120;
  undefined8 local_118;
  undefined8 local_110;
  String local_108 [8];
  undefined8 local_100;
  long local_f8;
  Object *local_f0;
  String local_e8 [8];
  long local_e0;
  Variant local_d8 [8];
  CowData *local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::get_file_as_bytes(local_e8,(Error *)param_1);
  Tree::clear();
  lVar17 = Tree::create_item(*(TreeItem **)(this + 0xe58),0);
  *(long *)(this + 0xe60) = lVar17;
  if (lVar17 == 0) {
    _err_print_error("open_settings","editor/import/dynamic_font_import_settings.cpp",0x446,
                     "Parameter \"locale_root\" is null.",0,0);
  }
  else {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_a8,"internationalization/locale/translations",false)
    ;
    ProjectSettings::get_setting_with_override((StringName *)&local_58);
    Variant::operator_cast_to_Vector(local_d8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != 0)) {
      StringName::unref();
    }
    CowData<String>::_copy_on_write((CowData<String> *)&local_d0);
    pCVar29 = local_d0;
    CowData<String>::_copy_on_write((CowData<String> *)&local_d0);
    pCVar33 = local_d0;
    if (local_d0 != (CowData *)0x0) {
      pCVar33 = local_d0 + *(long *)(local_d0 + -8) * 8;
    }
    for (; pCVar29 != pCVar33; pCVar29 = pCVar29 + 8) {
      lVar17 = Tree::create_item(*(TreeItem **)(this + 0xe58),(int)*(undefined8 *)(this + 0xe60));
      if (lVar17 == 0) {
        _err_print_error("open_settings","editor/import/dynamic_font_import_settings.cpp",1099,
                         "Parameter \"item\" is null.",0,0);
        goto LAB_0010c304;
      }
      TreeItem::set_cell_mode(lVar17,0,1);
      local_a8 = 0;
      if (*(long *)pCVar29 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,pCVar29);
      }
      TreeItem::set_text(lVar17,0,(StringName *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    Ref<FontFile>::instantiate<>((Ref<FontFile> *)(this + 0xec0));
    (**(code **)(**(long **)(this + 0xec0) + 0x310))(*(long **)(this + 0xec0),local_e8);
    (**(code **)(**(long **)(this + 0xec0) + 0x210))((StringName *)&local_a8);
    Array::Array(local_148,(Array *)&local_a8);
    Array::~Array((Array *)&local_a8);
    cVar11 = Array::is_empty();
    if (cVar11 == '\0') {
      plVar31 = *(long **)(TextServerManager::singleton + 0x178);
      if ((plVar31 == (long *)0x0) ||
         (local_b8 = plVar31, cVar11 = RefCounted::reference(), cVar11 == '\0')) {
        local_b8 = (long *)0x0;
        plVar31 = (long *)0x0;
      }
      pcVar5 = *(code **)(*plVar31 + 0x4e0);
      iVar14 = (int)local_148;
      pVVar18 = (Variant *)Array::operator[](iVar14);
      local_a8 = Variant::operator_cast_to_RID(pVVar18);
      (*pcVar5)(&local_c8,plVar31,(StringName *)&local_a8);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_b8);
      this[0xdd8] = (DynamicFontImportSettingsDialog)0x1;
      CowData<int>::_copy_on_write((CowData<int> *)&local_c0);
      local_220 = local_c0;
      CowData<int>::_copy_on_write((CowData<int> *)&local_c0);
      lVar17 = local_c0;
      if (local_c0 != 0) {
        lVar17 = local_c0 + *(long *)(local_c0 + -8) * 4;
      }
      if (local_220 != lVar17) {
        do {
          local_218 = (CowData<char32_t> *)&local_b8;
          plVar31 = *(long **)(TextServerManager::singleton + 0x178);
          if ((plVar31 == (long *)0x0) ||
             (local_b8 = plVar31, cVar11 = RefCounted::reference(), cVar11 == '\0')) {
            local_b8 = (long *)0x0;
            plVar31 = (long *)0x0;
          }
          pcVar5 = *(code **)(*plVar31 + 0x490);
          pVVar18 = (Variant *)Array::operator[](iVar14);
          local_a8 = Variant::operator_cast_to_RID(pVVar18);
          (*pcVar5)((Variant *)&local_f0,plVar31,(StringName *)&local_a8,0x10);
          Ref<TextServer>::unref((Ref<TextServer> *)local_218);
          Variant::Variant((Variant *)&local_58,"contours");
          Dictionary::operator[]((Variant *)&local_f0);
          Variant::operator_cast_to_Vector((Variant *)local_218);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,"points");
          Dictionary::operator[]((Variant *)&local_f0);
          Variant::operator_cast_to_Vector((Variant *)&local_a8);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if (local_b0 != 0) {
            lVar30 = 0;
            uVar28 = 0;
            while (lVar30 < *(long *)(local_b0 + -8)) {
              iVar13 = *(int *)(local_b0 + lVar30 * 4);
              iVar16 = (int)uVar28;
              if (iVar16 <= iVar13) {
                uVar24 = (ulong)iVar16;
                pfVar22 = (float *)(local_a0 + uVar24 * 0xc);
                uVar25 = uVar28;
                if (iVar13 <= iVar16) goto LAB_0010d6da;
LAB_0010d6d6:
                iVar16 = (int)uVar25;
                uVar25 = (ulong)((int)uVar24 + 1);
LAB_0010d6da:
                if (-1 < iVar16) goto code_r0x0010d6e2;
LAB_0010d87c:
                uVar32 = uVar24;
                if (local_a0 == 0) goto LAB_0010d982;
                uVar27 = *(ulong *)(local_a0 + -8);
                goto LAB_0010d435;
              }
LAB_0010e9fd:
              lVar30 = lVar30 + 1;
              uVar28 = (ulong)(iVar13 + 1);
              if (this[0xdd8] == (DynamicFontImportSettingsDialog)0x0) goto LAB_0010d7ca;
            }
          }
          if (this[0xdd8] == (DynamicFontImportSettingsDialog)0x0) {
LAB_0010d7ca:
            CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
            CowData<int>::_unref((CowData<int> *)&local_b0);
            Dictionary::~Dictionary((Dictionary *)&local_f0);
            break;
          }
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
          CowData<int>::_unref((CowData<int> *)&local_b0);
          Dictionary::~Dictionary((Dictionary *)&local_f0);
          local_220 = local_220 + 4;
        } while (lVar17 != local_220);
      }
      CowData<int>::_unref((CowData<int> *)&local_c0);
    }
    local_200 = (CowData<char32_t> *)&local_c8;
    local_218 = (CowData<char32_t> *)&local_b8;
    (**(code **)(**(long **)(this + 0xec0) + 0x248))(local_218);
    (**(code **)(**(long **)(this + 0xec0) + 0x240))(local_200);
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"%s (%s)");
    vformat<String,String>(local_140,(StringName *)&local_a8,local_200,local_218);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref(local_200);
    CowData<char32_t>::_unref(local_218);
    local_138 = 0;
    if ((open_settings(String_const&)::sample_base == '\0') &&
       (iVar14 = __cxa_guard_acquire(&open_settings(String_const&)::sample_base), iVar14 != 0)) {
      open_settings(String_const&)::sample_base = 0;
      String::parse_utf32((String *)&open_settings(String_const&)::sample_base,
                          L"12漢字ԱբΑαАбΑαאבابܐܒހށआআਆઆଆஆఆಆആආกิກິༀကႠა한글ሀᎣᐁᚁᚠᜀᜠᝀᝠកᠠᤁᥐAb😀"
                         );
      __cxa_atexit(String::~String,&open_settings(String_const&)::sample_base,&__dso_handle);
      __cxa_guard_release(&open_settings(String_const&)::sample_base);
    }
    if (open_settings(String_const&)::sample_base != 0) {
      uVar32 = 0;
      do {
        uVar27 = *(ulong *)(open_settings(String_const&)::sample_base + -8);
        if (((int)uVar27 == 0) || ((int)uVar27 + -1 <= (int)uVar32)) break;
        if (uVar32 == uVar27) {
          puVar21 = &String::_null;
        }
        else {
          if ((long)uVar27 <= (long)uVar32) goto LAB_0010d435;
          puVar21 = (undefined8 *)(open_settings(String_const&)::sample_base + uVar32 * 4);
        }
        cVar11 = (**(code **)(**(long **)(this + 0xec0) + 0x2d0))
                           (*(long **)(this + 0xec0),*(undefined4 *)puVar21);
        if (cVar11 != '\0') {
          if (open_settings(String_const&)::sample_base == 0) {
            if (uVar32 != 0) {
              uVar27 = 0;
LAB_0010d435:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar32,uVar27,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
LAB_0010d870:
            pwVar23 = (wchar32 *)&String::_null;
          }
          else {
            uVar27 = *(ulong *)(open_settings(String_const&)::sample_base + -8);
            if (uVar32 == uVar27) goto LAB_0010d870;
            if ((long)uVar27 <= (long)uVar32) goto LAB_0010d435;
            pwVar23 = (wchar32 *)(open_settings(String_const&)::sample_base + uVar32 * 4);
          }
          String::operator+=((String *)&local_138,*pwVar23);
        }
        uVar32 = uVar32 + 1;
      } while (open_settings(String_const&)::sample_base != 0);
    }
    iVar14 = (int)(StringName *)&local_a8;
    if ((local_138 == 0) || (*(uint *)(local_138 + -8) < 2)) {
      (**(code **)(**(long **)(this + 0xec0) + 0x2d8))(local_218);
      String::substr(iVar14,(int)local_218);
      if (local_138 != local_a8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        local_138 = local_a8;
        local_a8 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref(local_218);
    }
    Label::set_text(*(String **)(this + 0xe00));
    if ((open_settings(String_const&)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&open_settings(String_const&)::{lambda()#1}::operator()()::
                                      sname), iVar13 != 0)) {
      _scs_create((char *)&open_settings(String_const&)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &open_settings(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&open_settings(String_const&)::{lambda()#1}::operator()()::sname);
    }
    Window::get_theme_font((StringName *)&local_130,(StringName *)this);
    if (local_130 != 0) {
      pSVar4 = *(StringName **)(this + 0xdf8);
      StringName::StringName((StringName *)&local_a8,"bold_font",false);
      Control::add_theme_font_override(pSVar4,(Ref *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
    }
    Label::set_text(*(String **)(this + 0xdf8));
    Ref<FontFile>::instantiate<>((Ref<FontFile> *)(this + 0xec8));
    (**(code **)(**(long **)(this + 0xec8) + 0x310))(*(long **)(this + 0xec8),local_e8);
    (**(code **)(**(long **)(this + 0xec8) + 0x378))(*(long **)(this + 0xec8),0);
    local_a8 = 0;
    pSVar4 = *(StringName **)(this + 0xe78);
    Ref<Font>::operator=((Ref<Font> *)&local_a8,*(Ref **)(this + 0xec8));
    Control::add_theme_font_override(pSVar4,(Ref *)(SceneStringNames::singleton + 0xa0));
    Ref<Font>::unref((Ref<Font> *)&local_a8);
    if (*(long *)(this + 0xdb8) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xdb8),(CowData *)param_1);
    }
    EditorInspector::edit(*(Object **)(this + 0xe38));
    EditorInspector::edit(*(Object **)(this + 0xe80));
    EditorInspector::edit(*(Object **)(this + 0xe08));
    Ref<DynamicFontImportSettingsData>::instantiate<>
              ((Ref<DynamicFontImportSettingsData> *)(this + 0xe98));
    lVar17 = *(long *)(this + 0xe98);
    if (lVar17 == 0) {
      _err_print_error("open_settings","editor/import/dynamic_font_import_settings.cpp",0x491,
                       "Condition \"text_settings_data.is_null()\" is true.",0,0);
    }
    else {
      plVar31 = *(long **)(this + 0xe90);
      *(DynamicFontImportSettingsDialog **)(lVar17 + 0x1e8) = this;
      if (plVar31 != (long *)0x0) {
        for (lVar30 = *plVar31; lVar30 != 0; lVar30 = *(long *)(lVar30 + 0x48)) {
          StringName::StringName((StringName *)&local_a8,(String *)(lVar30 + 8),false);
          pVVar18 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(lVar17 + 0x1b0),(StringName *)&local_a8);
          Variant::operator=(pVVar18,(Variant *)(lVar30 + 0x30));
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          lVar17 = *(long *)(this + 0xe98);
        }
      }
      Ref<FontFile>::operator=((Ref<FontFile> *)(lVar17 + 0x240),*(Ref **)(this + 0xec8));
      List<ResourceImporter::ImportOption,DefaultAllocator>::operator=
                ((List<ResourceImporter::ImportOption,DefaultAllocator> *)
                 (*(long *)(this + 0xe98) + 0x1e0),(List *)(this + 0xe90));
      EditorInspector::edit(*(Object **)(this + 0xe80));
      local_c8 = 0;
      Window::get_theme_font((StringName *)local_218,(StringName *)this);
      plVar31 = local_b8;
      pcVar5 = *(code **)(*local_b8 + 0x288);
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"00000");
      (*pcVar5)(plVar31,(StringName *)&local_a8,0,0x10,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      Ref<Font>::unref((Ref<Font> *)local_218);
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0xea8),0);
      Tree::clear();
      Tree::clear();
      pTVar6 = *(TreeItem **)(this + 0xeb0);
      iVar13 = TreeItem::get_child((int)*(undefined8 *)(this + 0xeb8));
      Tree::set_selected(pTVar6,iVar13);
      uVar19 = Tree::create_item(*(TreeItem **)(this + 0xe28),0);
      lVar17 = *(long *)(this + 0xdc0);
      *(undefined8 *)(this + 0xe30) = uVar19;
      lVar30 = lVar17;
      if ((*(long *)(lVar17 + 0x188) != 0) && (*(int *)(lVar17 + 0x1ac) != 0)) {
        uVar15 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar17 + 0x1a8) * 4);
        if (uVar15 != 0) {
          lVar30 = 0;
          do {
            piVar20 = (int *)(*(long *)(lVar17 + 400) + lVar30);
            if (*piVar20 != 0) {
              *piVar20 = 0;
              pvVar7 = *(void **)(*(long *)(lVar17 + 0x188) + lVar30 * 2);
              if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar7 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar7,false);
              *(undefined8 *)(*(long *)(lVar17 + 0x188) + lVar30 * 2) = 0;
            }
            lVar30 = lVar30 + 4;
          } while (lVar30 != (ulong)uVar15 * 4);
          lVar30 = *(long *)(this + 0xdc0);
        }
        *(undefined4 *)(lVar17 + 0x1ac) = 0;
        *(undefined1 (*) [16])(lVar17 + 0x198) = (undefined1  [16])0x0;
      }
      if ((*(long *)(lVar30 + 0x1b8) != 0) && (*(int *)(lVar30 + 0x1dc) != 0)) {
        lVar17 = 0;
        uVar15 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar30 + 0x1d8) * 4);
        if (uVar15 != 0) {
          do {
            piVar20 = (int *)(*(long *)(lVar30 + 0x1c0) + lVar17);
            if (*piVar20 != 0) {
              *piVar20 = 0;
              pvVar7 = *(void **)(*(long *)(lVar30 + 0x1b8) + lVar17 * 2);
              if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar7 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar7,false);
              *(undefined8 *)(*(long *)(lVar30 + 0x1b8) + lVar17 * 2) = 0;
            }
            lVar17 = lVar17 + 4;
          } while (lVar17 != (ulong)uVar15 << 2);
        }
        *(undefined4 *)(lVar30 + 0x1dc) = 0;
        *(undefined1 (*) [16])(lVar30 + 0x1c8) = (undefined1  [16])0x0;
      }
      if (*(long **)(this + 0xdd0) != (long *)0x0) {
        for (lVar17 = **(long **)(this + 0xdd0); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x48)) {
          lVar30 = *(long *)(this + 0xdc0);
          StringName::StringName((StringName *)&local_a8,(String *)(lVar17 + 8),false);
          pVVar18 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(lVar30 + 0x1b0),(StringName *)&local_a8);
          Variant::operator=(pVVar18,(Variant *)(lVar17 + 0x30));
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
        }
      }
      local_128 = (String *)0x0;
      Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_128);
      pSVar9 = local_128;
      if (local_128 == (String *)0x0) {
        _err_print_error("open_settings","editor/import/dynamic_font_import_settings.cpp",0x4af,
                         "Condition \"config.is_null()\" is true.",0,0);
      }
      else {
        local_b8 = (long *)0x0;
        String::parse_latin1((String *)local_218,".import");
        String::operator+((String *)&local_a8,param_1);
        iVar13 = ConfigFile::load(pSVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref(local_218);
        cVar11 = is_print_verbose_enabled();
        if (cVar11 != '\0') {
          Variant::Variant((Variant *)&local_58,"Loading import settings:");
          stringify_variants((Variant *)&local_a8);
          __print_line((String *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (iVar13 == 0) {
          local_120 = (long *)0x0;
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"params");
          ConfigFile::get_section_keys(pSVar9,(List *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if ((local_120 != (long *)0x0) &&
             (local_1b0 = (CowData *)*local_120, local_1b0 != (CowData *)0x0)) {
            do {
              local_1d8 = (String *)&local_f8;
              local_118 = 0;
              if (*(long *)local_1b0 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,local_1b0);
              }
              cVar11 = is_print_verbose_enabled();
              if (cVar11 != '\0') {
                local_98 = 0;
                local_90 = (undefined1  [16])0x0;
                local_f0 = (Object *)0x0;
                String::parse_latin1((String *)&local_f0,"params");
                ConfigFile::get_value((String *)&local_78,pSVar9,(Variant *)&local_f0);
                Variant::operator_cast_to_String((Variant *)local_200);
                local_100 = 0;
                String::parse_latin1((String *)&local_100," == ");
                local_110 = 0;
                String::parse_latin1((String *)&local_110,"    ");
                String::operator+(local_108,(String *)&local_110);
                String::operator+(local_1d8,local_108);
                String::operator+((String *)local_218,local_1d8);
                Variant::Variant((Variant *)&local_58,(String *)local_218);
                stringify_variants((Variant *)&local_a8);
                __print_line((String *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                local_1d8 = (String *)&local_f8;
                CowData<char32_t>::_unref(local_218);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                CowData<char32_t>::_unref(local_200);
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                if (Variant::needs_deinit[(int)local_98] != '\0') {
                  Variant::_clear_internal();
                }
              }
              cVar11 = String::operator==((String *)&local_118,"preload");
              if (cVar11 == '\0') {
                local_58 = 0;
                auStack_50 = (undefined1  [16])0x0;
                local_a8 = 0;
                String::parse_latin1((String *)&local_a8,"params");
                ConfigFile::get_value((String *)&local_78,pSVar9,(Variant *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                lVar17 = *(long *)(this + 0xdc0);
                StringName::StringName((StringName *)&local_a8,(String *)&local_118,false);
                pVVar18 = (Variant *)
                          HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                        *)(lVar17 + 0x1b0),(StringName *)&local_a8);
                Variant::operator=(pVVar18,(Variant *)&local_78);
                if ((StringName::configured != '\0') && (local_a8 != 0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                local_78 = 0;
                local_70 = (undefined1  [16])0x0;
                local_a8 = 0;
                String::parse_latin1((String *)&local_a8,"params");
                ConfigFile::get_value((String *)&local_58,pSVar9,(Variant *)&local_a8);
                Variant::operator_cast_to_Array((Variant *)&local_110);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                for (local_1a8 = 0; iVar13 = Array::size(), local_1a8 < iVar13;
                    local_1a8 = local_1a8 + 1) {
                  Array::operator[]((int)(Variant *)&local_110);
                  Variant::operator_cast_to_Dictionary((Variant *)local_108);
                  Variant::Variant((Variant *)&local_78,"variation_opentype");
                  cVar11 = Dictionary::has((Variant *)local_108);
                  if (cVar11 == '\0') {
                    Dictionary::Dictionary((Dictionary *)&local_100);
                  }
                  else {
                    Variant::Variant((Variant *)&local_58,"variation_opentype");
                    Dictionary::operator[]((Variant *)local_108);
                    Variant::operator_cast_to_Dictionary((Variant *)&local_100);
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  local_1c0 = (Dictionary *)&local_100;
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_78,"variation_embolden");
                  cVar11 = Dictionary::has((Variant *)local_108);
                  local_1a0 = 0.0;
                  if (cVar11 != '\0') {
                    Variant::Variant((Variant *)&local_58,"variation_embolden");
                    pVVar18 = (Variant *)Dictionary::operator[]((Variant *)local_108);
                    local_1a0 = Variant::operator_cast_to_double(pVVar18);
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_78,"variation_face_index");
                  cVar11 = Dictionary::has((Variant *)local_108);
                  local_198 = 0;
                  if (cVar11 != '\0') {
                    Variant::Variant((Variant *)&local_58,"variation_face_index");
                    pVVar18 = (Variant *)Dictionary::operator[]((Variant *)local_108);
                    local_198 = Variant::operator_cast_to_int(pVVar18);
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_78,"variation_transform");
                  cVar11 = Dictionary::has((Variant *)local_108);
                  if (cVar11 == '\0') {
                    local_98 = 0x3f800000;
                    local_90 = ZEXT816(0x3f80000000000000);
                  }
                  else {
                    Variant::Variant((Variant *)&local_58,"variation_transform");
                    Dictionary::operator[]((Variant *)local_108);
                    Variant::operator_cast_to_Transform2D((Variant *)&local_98);
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_78,"size");
                  cVar11 = Dictionary::has((Variant *)local_108);
                  local_1a4 = 0;
                  local_194 = 0x10;
                  if (cVar11 != '\0') {
                    Variant::Variant((Variant *)&local_58,"size");
                    pVVar18 = (Variant *)Dictionary::operator[]((Variant *)local_108);
                    uVar19 = Variant::operator_cast_to_Vector2i(pVVar18);
                    local_194 = (int)uVar19;
                    local_1a4 = (int)((ulong)uVar19 >> 0x20);
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_1d8 = (String *)&local_f8;
                  Variant::Variant((Variant *)&local_78,"name");
                  cVar11 = Dictionary::has((Variant *)local_108);
                  if (cVar11 == '\0') {
                    local_a8 = 0;
                    String::parse_latin1((String *)&local_a8,"Configuration %d");
                    vformat<int>(local_1d8,iVar14);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  }
                  else {
                    Variant::Variant((Variant *)&local_58,"name");
                    Dictionary::operator[]((Variant *)local_108);
                    Variant::operator_cast_to_String((Variant *)local_1d8);
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  if (Variant::needs_deinit[(int)local_78] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_1d8 = (String *)&local_f8;
                  lVar17 = Tree::create_item(*(TreeItem **)(this + 0xe28),
                                             (int)*(undefined8 *)(this + 0xe30));
                  if (lVar17 == 0) {
                    _err_print_error("open_settings",
                                     "editor/import/dynamic_font_import_settings.cpp",0x4c6,
                                     "Parameter \"vars_item\" is null.",0,0);
LAB_0010eb41:
                    local_1d8 = (String *)&local_f8;
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                    Dictionary::~Dictionary(local_1c0);
                    Dictionary::~Dictionary((Dictionary *)local_108);
                    Array::~Array((Array *)&local_110);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    List<String,DefaultAllocator>::~List
                              ((List<String,DefaultAllocator> *)&local_120);
                    goto LAB_0010d374;
                  }
                  local_a8 = 0;
                  if (local_f8 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_1d8);
                  }
                  TreeItem::set_text(lVar17,0,(StringName *)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  iVar13 = (int)lVar17;
                  TreeItem::set_editable(iVar13,false);
                  local_b8 = (long *)0x0;
                  String::parse_latin1((String *)local_218,"");
                  local_c8 = 0;
                  String::parse_latin1((String *)local_200,"Remove Variation");
                  TTR((String *)&local_a8,(String *)local_200);
                  if ((open_settings(String_const&)::{lambda()#2}::operator()()::sname == '\0') &&
                     (iVar16 = __cxa_guard_acquire(&open_settings(String_const&)::{lambda()#2}::
                                                    operator()()::sname), iVar16 != 0)) {
                    _scs_create((char *)&open_settings(String_const&)::{lambda()#2}::operator()()::
                                         sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &open_settings(String_const&)::{lambda()#2}::operator()()::sname,
                                 &__dso_handle);
                    __cxa_guard_release(&open_settings(String_const&)::{lambda()#2}::operator()()::
                                         sname);
                  }
                  Window::get_editor_theme_icon((StringName *)&local_f0);
                  TreeItem::add_button
                            (iVar13,(Ref *)0x1,(int)(StringName *)&local_f0,true,(String *)0x0);
                  if (((local_f0 != (Object *)0x0) &&
                      (cVar11 = RefCounted::unreference(), pOVar10 = local_f0, cVar11 != '\0')) &&
                     (cVar11 = predelete_handler(local_f0), cVar11 != '\0')) {
                    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                    Memory::free_static(pOVar10,false);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  CowData<char32_t>::_unref(local_200);
                  CowData<char32_t>::_unref(local_218);
                  local_58 = CONCAT44(_UNK_0012b344,_LC181);
                  auStack_50._0_8_ = _UNK_0012b348;
                  TreeItem::set_button_color(iVar13,1,(Color *)0x0);
                  local_f0 = (Object *)0x0;
                  Ref<DynamicFontImportSettingsData>::instantiate<>
                            ((Ref<DynamicFontImportSettingsData> *)&local_f0);
                  pOVar10 = local_f0;
                  if (local_f0 == (Object *)0x0) {
                    _err_print_error("open_settings",
                                     "editor/import/dynamic_font_import_settings.cpp",0x4cf,
                                     "Condition \"import_variation_data_custom.is_null()\" is true."
                                     ,0,0);
                    Ref<DynamicFontImportSettingsData>::unref
                              ((Ref<DynamicFontImportSettingsData> *)&local_f0);
                    goto LAB_0010eb41;
                  }
                  *(DynamicFontImportSettingsDialog **)(local_f0 + 0x1e8) = this;
                  if ((*(long **)(this + 0xdc8) != (long *)0x0) &&
                     (lVar17 = **(long **)(this + 0xdc8), lVar17 != 0)) {
                    this_00 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)(local_f0 + 0x1b0);
                    do {
                      StringName::StringName((StringName *)&local_a8,(String *)(lVar17 + 8),false);
                      pVVar18 = (Variant *)
                                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                ::operator[](this_00,(StringName *)&local_a8);
                      Variant::operator=(pVVar18,(Variant *)(lVar17 + 0x30));
                      if ((StringName::configured != '\0') && (local_a8 != 0)) {
                        StringName::unref();
                      }
                      lVar17 = *(long *)(lVar17 + 0x48);
                    } while (lVar17 != 0);
                  }
                  Ref<FontFile>::operator=
                            ((Ref<FontFile> *)(pOVar10 + 0x240),*(Ref **)(this + 0xec8));
                  List<ResourceImporter::ImportOption,DefaultAllocator>::operator=
                            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)
                             (pOVar10 + 0x1e0),(List *)(this + 0xdc8));
                  Variant::Variant((Variant *)&local_58,pOVar10);
                  TreeItem::set_metadata(iVar13,(Variant *)0x0);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,local_194);
                  StringName::StringName((StringName *)&local_a8,"size",false);
                  Object::set((StringName *)pOVar10,(Variant *)&local_a8,(bool *)&local_58);
                  if ((StringName::configured != '\0') && (local_a8 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,local_1a4);
                  StringName::StringName((StringName *)&local_a8,"outline_size",false);
                  Object::set((StringName *)pOVar10,(Variant *)&local_a8,(bool *)&local_58);
                  if ((StringName::configured != '\0') && (local_a8 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,local_1c0);
                  StringName::StringName((StringName *)&local_a8,"variation_opentype",false);
                  Object::set((StringName *)pOVar10,(Variant *)&local_a8,(bool *)&local_58);
                  if ((StringName::configured != '\0') && (local_a8 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,local_1a0);
                  StringName::StringName((StringName *)&local_a8,"variation_embolden",false);
                  Object::set((StringName *)pOVar10,(Variant *)&local_a8,(bool *)&local_58);
                  if ((StringName::configured != '\0') && (local_a8 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,local_198);
                  StringName::StringName((StringName *)&local_a8,"variation_face_index",false);
                  Object::set((StringName *)pOVar10,(Variant *)&local_a8,(bool *)&local_58);
                  if ((StringName::configured != '\0') && (local_a8 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,(Transform2D *)&local_98);
                  StringName::StringName((StringName *)&local_a8,"variation_transform",false);
                  Object::set((StringName *)pOVar10,(Variant *)&local_a8,(bool *)&local_58);
                  if ((StringName::configured != '\0') && (local_a8 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)&local_58,"chars");
                  Dictionary::operator[]((Variant *)local_108);
                  Variant::operator_cast_to_Array((Variant *)local_200);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  for (iVar13 = 0; iVar16 = Array::size(), iVar13 < iVar16; iVar13 = iVar13 + 1) {
                    pVVar18 = (Variant *)Array::operator[]((int)local_200);
                    iVar16 = Variant::operator_cast_to_int(pVVar18);
                    local_b8 = (long *)CONCAT44(local_b8._4_4_,iVar16);
                    HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::
                    insert((wchar32 *)&local_a8);
                  }
                  Variant::Variant((Variant *)&local_58,"glyphs");
                  Dictionary::operator[]((Variant *)local_108);
                  Variant::operator_cast_to_Array((Variant *)local_218);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  iVar13 = 0;
                  while( true ) {
                    local_1d8 = (String *)&local_f8;
                    iVar16 = Array::size();
                    if (iVar16 <= iVar13) break;
                    iVar13 = iVar13 + 1;
                    pVVar18 = (Variant *)Array::operator[]((int)local_218);
                    Variant::operator_cast_to_int(pVVar18);
                    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert
                              ((int *)&local_a8);
                  }
                  Array::~Array((Array *)local_218);
                  Array::~Array((Array *)local_200);
                  Ref<DynamicFontImportSettingsData>::unref
                            ((Ref<DynamicFontImportSettingsData> *)&local_f0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                  Dictionary::~Dictionary(local_1c0);
                  Dictionary::~Dictionary((Dictionary *)local_108);
                }
                cVar11 = Array::is_empty();
                if (cVar11 != '\0') {
                  _variation_add(this);
                }
                pTVar6 = *(TreeItem **)(this + 0xe28);
                iVar13 = TreeItem::get_child((int)*(undefined8 *)(this + 0xe30));
                Tree::set_selected(pTVar6,iVar13);
                Array::~Array((Array *)&local_110);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
              local_1b0 = *(CowData **)(local_1b0 + 8);
            } while (local_1b0 != (CowData *)0x0);
          }
          List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_120);
        }
        local_1d8 = (String *)&local_f8;
        Ref<FontFile>::operator=
                  ((Ref<FontFile> *)(*(long *)(this + 0xdc0) + 0x240),*(Ref **)(this + 0xec8));
        List<ResourceImporter::ImportOption,DefaultAllocator>::operator=
                  ((List<ResourceImporter::ImportOption,DefaultAllocator> *)
                   (*(long *)(this + 0xdc0) + 0x1e0),(List *)(this + 0xdd0));
        EditorInspector::edit(*(Object **)(this + 0xe08));
        Object::notify_property_list_changed();
        pRVar26 = *(Ref **)(this + 0xec0);
        if (pRVar26 != (Ref *)0x0) {
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*(long *)pRVar26 + 0x348);
          StringName::StringName((StringName *)&local_a8,"antialiasing",false);
          Object::get((StringName *)&local_58,pbVar8);
          iVar14 = Variant::operator_cast_to_int((Variant *)&local_58);
          (*pcVar5)(pRVar26,iVar14);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x378);
          StringName::StringName((StringName *)&local_a8,"multichannel_signed_distance_field",false)
          ;
          Object::get((StringName *)&local_58,pbVar8);
          bVar12 = Variant::operator_cast_to_bool((Variant *)&local_58);
          (*pcVar5)(plVar31,bVar12);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x388);
          StringName::StringName((StringName *)&local_a8,"msdf_pixel_range",false);
          Object::get((StringName *)&local_58,pbVar8);
          iVar14 = Variant::operator_cast_to_int((Variant *)&local_58);
          (*pcVar5)(plVar31,iVar14);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x398);
          StringName::StringName((StringName *)&local_a8,"msdf_size",false);
          Object::get((StringName *)&local_58,pbVar8);
          iVar14 = Variant::operator_cast_to_int((Variant *)&local_58);
          (*pcVar5)(plVar31,iVar14);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x3c8);
          StringName::StringName((StringName *)&local_a8,"allow_system_fallback",false);
          Object::get((StringName *)&local_58,pbVar8);
          bVar12 = Variant::operator_cast_to_bool((Variant *)&local_58);
          (*pcVar5)(plVar31,bVar12);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x3d8);
          StringName::StringName((StringName *)&local_a8,"force_autohinter",false);
          Object::get((StringName *)&local_58,pbVar8);
          bVar12 = Variant::operator_cast_to_bool((Variant *)&local_58);
          (*pcVar5)(plVar31,bVar12);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 1000);
          StringName::StringName((StringName *)&local_a8,"hinting",false);
          Object::get((StringName *)&local_58,pbVar8);
          iVar14 = Variant::operator_cast_to_int((Variant *)&local_58);
          (*pcVar5)(plVar31,iVar14);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          pbVar8 = *(bool **)(this + 0xdc0);
          StringName::StringName((StringName *)&local_a8,"subpixel_positioning",false);
          Object::get((StringName *)&local_58,pbVar8);
          uVar15 = Variant::operator_cast_to_int((Variant *)&local_58);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          if (uVar15 == 4) {
            uVar15 = (uint)((byte)this[0xdd8] ^ 1);
          }
          (**(code **)(**(long **)(this + 0xec0) + 0x3f8))(*(long **)(this + 0xec0),uVar15);
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x408);
          StringName::StringName((StringName *)&local_a8,"keep_rounding_remainders",false);
          Object::get((StringName *)&local_58,pbVar8);
          bVar12 = Variant::operator_cast_to_bool((Variant *)&local_58);
          (*pcVar5)(plVar31,bVar12);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          plVar31 = *(long **)(this + 0xec0);
          pbVar8 = *(bool **)(this + 0xdc0);
          pcVar5 = *(code **)(*plVar31 + 0x418);
          StringName::StringName((StringName *)&local_a8,"oversampling",false);
          Object::get((StringName *)&local_58,pbVar8);
          Variant::operator_cast_to_float((Variant *)&local_58);
          (*pcVar5)(plVar31);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          pRVar26 = *(Ref **)(this + 0xec0);
        }
        pSVar4 = *(StringName **)(this + 0xe00);
        local_a8 = 0;
        Ref<Font>::operator=((Ref<Font> *)&local_a8,pRVar26);
        Control::add_theme_font_override(pSVar4,(Ref *)(SceneStringNames::singleton + 0xa0));
        Ref<Font>::unref((Ref<Font> *)&local_a8);
        pSVar4 = *(StringName **)(this + 0xe00);
        EditorScale::get_scale();
        Control::add_theme_font_size_override(pSVar4,(int)SceneStringNames::singleton + 0xa8);
        CanvasItem::queue_redraw();
        _variations_validate(this);
        Window::popup_centered_ratio(_LC220);
        String::get_file();
        local_f0 = (Object *)0x0;
        String::parse_latin1((String *)&local_f0,"");
        local_f8 = 0;
        String::parse_latin1(local_1d8,"Advanced Import Settings for \'%s\'");
        TTR((String *)local_200,local_1d8);
        vformat<String>((StringName *)&local_a8,local_200,local_218);
        Window::set_title((String *)this);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref(local_200);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref(local_218);
      }
LAB_0010d374:
      Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_128);
    }
    Ref<Font>::unref((Ref<Font> *)&local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref(local_140);
    Array::~Array(local_148);
LAB_0010c304:
    CowData<String>::_unref((CowData<String> *)&local_d0);
  }
  lVar17 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar31 = (long *)(local_e0 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010d6e2:
  uVar32 = uVar24;
  if (local_a0 != 0) {
    uVar27 = *(ulong *)(local_a0 + -8);
    do {
      uVar32 = uVar24;
      if ((long)uVar27 <= (long)uVar24) goto LAB_0010d435;
      if (_LC181 != pfVar22[2]) {
LAB_0010d7b3:
        this[0xdd8] = (DynamicFontImportSettingsDialog)0x0;
        goto LAB_0010d7ca;
      }
      uVar32 = (ulong)(int)uVar25;
      if (((long)uVar27 <= (long)uVar32) || ((int)uVar25 < 0)) goto LAB_0010d435;
      fVar2 = *pfVar22;
      pfVar1 = (float *)(local_a0 + uVar32 * 0xc);
      fVar3 = *pfVar1;
      if (fVar3 != fVar2) {
        fVar34 = _LC198;
        if (_LC198 <= ABS(fVar2) * _LC198) {
          fVar34 = ABS(fVar2) * _LC198;
        }
        if (fVar34 <= ABS(fVar2 - fVar3)) {
          fVar2 = pfVar1[1];
          fVar3 = pfVar22[1];
          if (fVar2 != fVar3) {
            fVar34 = _LC198;
            if (_LC198 <= ABS(fVar3) * _LC198) {
              fVar34 = ABS(fVar3) * _LC198;
            }
            if (fVar34 <= ABS(fVar3 - fVar2)) goto LAB_0010d7b3;
          }
        }
      }
      uVar24 = uVar24 + 1;
      pfVar22 = pfVar22 + 3;
      iVar16 = (int)uVar24;
      if (iVar13 < iVar16) goto LAB_0010e9fd;
      uVar25 = uVar24 & 0xffffffff;
      if (iVar16 < iVar13) goto LAB_0010d6d6;
      uVar25 = uVar28;
      if (iVar16 < 0) goto LAB_0010d87c;
    } while( true );
  }
LAB_0010d982:
  uVar27 = 0;
  goto LAB_0010d435;
}



/* DynamicFontImportSettingsDialog::_process_locales() */

void __thiscall
DynamicFontImportSettingsDialog::_process_locales(DynamicFontImportSettingsDialog *this)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Object *pOVar8;
  int iVar9;
  int *piVar10;
  long in_FS_OFFSET;
  Object *local_f8;
  long local_a0;
  CowData<char32_t> local_98 [8];
  long local_90;
  Array local_88 [8];
  Dictionary local_80 [8];
  undefined8 local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  lVar5 = Tree::get_selected();
  if (lVar5 != 0) {
    TreeItem::get_metadata((int)(Variant *)&local_58);
    Ref<DynamicFontImportSettingsData>::operator=
              ((Ref<DynamicFontImportSettingsData> *)&local_a0,(Variant *)&local_58);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (local_a0 != 0) {
      for (iVar9 = 0; iVar4 = TreeItem::get_child_count(), iVar9 < iVar4; iVar9 = iVar9 + 1) {
        lVar5 = TreeItem::get_child((int)*(undefined8 *)(this + 0xe60));
        if ((lVar5 != 0) && (cVar3 = TreeItem::is_checked((int)lVar5), cVar3 != '\0')) {
          TreeItem::get_text((int)local_98);
          local_78 = 0;
          local_68 = (Object *)&_LC24;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_78);
          ResourceLoader::load((CowData<char32_t> *)&local_68,local_98,(StrRange *)&local_78,1,0);
          if (local_68 == (Object *)0x0) {
LAB_0010eff8:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          }
          else {
            local_f8 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Translation::typeinfo,0)
            ;
            if (local_f8 == (Object *)0x0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 == '\0') goto LAB_0010eff8;
LAB_0010f4d0:
              local_f8 = (Object *)0x0;
LAB_0010f4d9:
              pOVar8 = local_68;
              cVar3 = predelete_handler(local_68);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                Memory::free_static(pOVar8,false);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              if (local_f8 != (Object *)0x0) goto LAB_0010f072;
            }
            else {
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                if ((local_68 != (Object *)0x0) &&
                   (cVar3 = RefCounted::unreference(), cVar3 != '\0')) goto LAB_0010f4d0;
                goto LAB_0010eff8;
              }
              if ((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
              goto LAB_0010f4d9;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0010f072:
              (**(code **)(*(long *)local_f8 + 0x218))((StrRange *)&local_78);
              CowData<String>::_copy_on_write((CowData<String> *)&local_70);
              lVar7 = local_70;
              CowData<String>::_copy_on_write((CowData<String> *)&local_70);
              lVar5 = local_70;
              if (local_70 != 0) {
                lVar5 = local_70 + *(long *)(local_70 + -8) * 8;
              }
              for (; lVar7 != lVar5; lVar7 = lVar7 + 8) {
                pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
                if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  pOVar8 = (Object *)0x0;
                }
                local_90 = (**(code **)(*(long *)pOVar8 + 0x598))(pOVar8,0,0);
                cVar3 = RefCounted::unreference();
                if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                  Memory::free_static(pOVar8,false);
                }
                if (local_90 != 0) {
                  pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
                  if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    pOVar8 = (Object *)0x0;
                  }
                  pcVar2 = *(code **)(*(long *)pOVar8 + 0x628);
                  local_50 = (undefined1  [16])0x0;
                  local_58 = 0;
                  local_68 = (Object *)0x0;
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_68,(CowData *)(local_f8 + 0x240));
                  Dictionary::Dictionary(local_80);
                  (**(code **)(**(long **)(this + 0xec8) + 0x210))(local_88);
                  (*pcVar2)(pOVar8,&local_90,lVar7,local_88,0x10,local_80,
                            (CowData<char32_t> *)&local_68,(Variant *)&local_58);
                  Array::~Array(local_88);
                  Dictionary::~Dictionary(local_80);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  cVar3 = RefCounted::unreference();
                  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
                  if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    pOVar8 = (Object *)0x0;
                  }
                  (**(code **)(*(long *)pOVar8 + 0x680))(pOVar8);
                  cVar3 = RefCounted::unreference();
                  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
                  if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    pOVar8 = (Object *)0x0;
                  }
                  lVar6 = (**(code **)(*(long *)pOVar8 + 0x6a0))(pOVar8);
                  cVar3 = RefCounted::unreference();
                  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
                  if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    pOVar8 = (Object *)0x0;
                  }
                  iVar4 = (**(code **)(*(long *)pOVar8 + 0x6b0))(pOVar8);
                  cVar3 = RefCounted::unreference();
                  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  if (0 < iVar4) {
                    piVar10 = (int *)(lVar6 + 0x24);
                    piVar1 = (int *)(lVar6 + 0x54 + (ulong)(iVar4 - 1) * 0x30);
                    do {
                      while ((*(long *)(piVar10 + -3) == 0 || (*piVar10 == 0))) {
                        piVar10 = piVar10 + 0xc;
                        if (piVar1 == piVar10) goto LAB_0010f3e8;
                      }
                      piVar10 = piVar10 + 0xc;
                      HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert
                                ((int *)&local_68);
                    } while (piVar1 != piVar10);
                  }
LAB_0010f3e8:
                  pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
                  if (pOVar8 == (Object *)0x0) {
                    FUN_00113e9e();
                    return;
                  }
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    pOVar8 = (Object *)0x0;
                  }
                  (**(code **)(*(long *)pOVar8 + 0x168))(pOVar8);
                  cVar3 = RefCounted::unreference();
                  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                }
              }
              CowData<String>::_unref((CowData<String> *)&local_70);
              cVar3 = RefCounted::unreference();
              if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_f8), cVar3 != '\0')) {
                (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
                Memory::free_static(local_f8,false);
              }
            }
          }
          CowData<char32_t>::_unref(local_98);
        }
      }
      _glyph_update_lbl(this);
      _range_selected(this);
    }
  }
  Ref<DynamicFontImportSettingsData>::unref((Ref<DynamicFontImportSettingsData> *)&local_a0);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x12a6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::ok_pressed() */

void AcceptDialog::ok_pressed(void)

{
  return;
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* ConfirmationDialog::is_class_ptr(void*) const */

uint ConfirmationDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x12a6,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ConfirmationDialog::_property_can_revertv(StringName const&) const */

undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DynamicFontImportSettingsData::is_class_ptr(void*) const */

uint __thiscall
DynamicFontImportSettingsData::is_class_ptr(DynamicFontImportSettingsData *this,void *param_1)

{
  return (uint)CONCAT71(0x12a6,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* DynamicFontImportSettingsData::_validate_propertyv(PropertyInfo&) const */

void DynamicFontImportSettingsData::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* DynamicFontImportSettingsData::_property_can_revertv(StringName const&) const */

undefined8 DynamicFontImportSettingsData::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DynamicFontImportSettingsData::_property_get_revertv(StringName const&, Variant&) const */

undefined8
DynamicFontImportSettingsData::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DynamicFontImportSettingsData::_notificationv(int, bool) */

void DynamicFontImportSettingsData::_notificationv(int param_1,bool param_2)

{
  return;
}



/* DynamicFontImportSettingsDialog::_property_can_revertv(StringName const&) const */

undefined8 DynamicFontImportSettingsDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DynamicFontImportSettingsDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8
DynamicFontImportSettingsDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x12a6,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12a6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void>::get_argument_count
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00128f28;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00128f28;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129778;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129778;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DynamicFontImportSettingsDialog::_getv(StringName const&, Variant&) const */

undefined8 DynamicFontImportSettingsDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00130008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DynamicFontImportSettingsDialog::_setv(StringName const&, Variant const&) */

undefined8 DynamicFontImportSettingsDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00130008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00130010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00130010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00130010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00130018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00130018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00130018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_001122a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001122a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0011230e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0011230e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&> *this)

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
      goto LAB_0011243d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011243d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011243d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void>::get_object
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void> *this)

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
      goto LAB_0011253d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011253d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011253d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>::
get_object(CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>
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
      goto LAB_0011263d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011263d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011263d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* DynamicFontImportSettingsDialog::_validate_propertyv(PropertyInfo&) const */

void DynamicFontImportSettingsDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130030 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00130028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12a6,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a4,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130038 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_00130038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12a6,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12a6,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00130040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* DynamicFontImportSettingsDialog::is_class_ptr(void*) const */

uint DynamicFontImportSettingsDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12a6,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12a6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00112dc8) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00112e38) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00112ea8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00130048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Font::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112f10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00112f10:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Font::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112f70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00112f70:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Font::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112fd0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00112fd0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Font::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113040;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113040:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130050 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
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
  if ((code *)PTR__notification_00130050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130050 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
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
  if ((code *)PTR__notification_00130050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00130058 != Container::_notification) {
      SplitContainer::_notification(iVar1);
    }
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
  if ((code *)PTR__notification_00130058 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
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
LAB_00113473:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113473;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001134de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001134de:
  return &_get_class_namev()::_class_name_static;
}



/* DynamicFontImportSettingsData::_get_class_namev() const */

undefined8 * DynamicFontImportSettingsData::_get_class_namev(void)

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
LAB_00113573:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113573;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "DynamicFontImportSettingsData");
      goto LAB_001135de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DynamicFontImportSettingsData");
LAB_001135de:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_00113663:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113663;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001136ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001136ce:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00113753:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113753;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001137be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001137be:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_00113843:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113843;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_001138ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_001138ae:
  return &_get_class_namev()::_class_name_static;
}



/* ConfirmationDialog::_get_class_namev() const */

undefined8 * ConfirmationDialog::_get_class_namev(void)

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
LAB_00113933:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113933;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0011399e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0011399e:
  return &_get_class_namev()::_class_name_static;
}



/* DynamicFontImportSettingsDialog::_get_class_namev() const */

undefined8 * DynamicFontImportSettingsDialog::_get_class_namev(void)

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
LAB_00113a33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113a33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "DynamicFontImportSettingsDialog");
      goto LAB_00113a9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DynamicFontImportSettingsDialog"
            );
LAB_00113a9e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Font::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b9f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113b9f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Font::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113d4f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113d4f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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



/* DynamicFontImportSettingsDialog::_glyph_text_selected() [clone .cold] */

void DynamicFontImportSettingsDialog::_glyph_text_selected(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DynamicFontImportSettingsDialog::_change_text_opts() [clone .cold] */

void DynamicFontImportSettingsDialog::_change_text_opts(void)

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



/* DynamicFontImportSettingsDialog::_process_locales() [clone .cold] */

void DynamicFontImportSettingsDialog::_process_locales(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00113e9e(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* String::~String() */

void __thiscall String::~String(String *this)

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
      return;
    }
  }
  return;
}



/* DynamicFontImportSettingsData::get_class() const */

void DynamicFontImportSettingsData::get_class(void)

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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* ConfirmationDialog::get_class() const */

void ConfirmationDialog::get_class(void)

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



/* String::parse_utf32(char32_t const*) */

void __thiscall String::parse_utf32(String *this,wchar32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (wchar32 *)0x0) {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      pwVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar2 = *pwVar1;
    }
  }
  String::parse_utf32((StrRange *)this);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  StringName::StringName((StringName *)(this + 0x10),(StringName *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
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



/* DynamicFontImportSettingsDialog::get_class() const */

void DynamicFontImportSettingsDialog::get_class(void)

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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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



/* void Ref<DynamicFontImportSettingsData>::instantiate<>() */

void __thiscall
Ref<DynamicFontImportSettingsData>::instantiate<>(Ref<DynamicFontImportSettingsData> *this)

{
  undefined8 uVar1;
  char cVar2;
  RefCounted *this_00;
  long lVar3;
  RefCounted *pRVar4;
  Object *pOVar5;
  Object *pOVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_00 = (RefCounted *)operator_new(0x248,"");
  pRVar4 = this_00;
  for (lVar3 = 0x49; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar7 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_001299f0;
  uVar1 = _LC25;
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x1a8) = uVar1;
  *(undefined8 *)(this_00 + 0x1d8) = uVar1;
  *(undefined8 *)(this_00 + 0x210) = uVar1;
  *(undefined8 *)(this_00 + 0x238) = uVar1;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x218) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x228) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)this;
    if (pOVar6 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar2 = predelete_handler(pOVar6);
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    pOVar6 = *(Object **)this;
    pOVar5 = pOVar6;
    if (this_00 == (RefCounted *)pOVar6) goto LAB_0011498d;
    *(RefCounted **)this = this_00;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar5 = (Object *)this_00;
    if (((pOVar6 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(pOVar6), cVar2 == '\0')) goto LAB_0011498d;
  }
  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
  Memory::free_static(pOVar6,false);
  pOVar5 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0011498d:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    return;
  }
  return;
}



/* Ref<DynamicFontImportSettingsData>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall
Ref<DynamicFontImportSettingsData>::operator=
          (Ref<DynamicFontImportSettingsData> *this,Variant *param_1)

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
    pOVar3 = (Object *)
             __dynamic_cast(pOVar3,&Object::typeinfo,&DynamicFontImportSettingsData::typeinfo,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

int * HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
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
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  int iVar30;
  uint *in_RDX;
  ulong uVar31;
  uint uVar32;
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *in_RSI;
  uint uVar33;
  ulong uVar34;
  undefined4 uVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar24 = (ulong)uVar23 << 2;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)in_RSI = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 8) = uVar25;
    if (uVar23 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar24);
    }
  }
  uVar38 = *in_RDX;
  local_44 = 0;
  cVar22 = _lookup_pos(in_RSI,(int *)(ulong)uVar38,&local_44);
  if (cVar22 == '\0') {
    uVar1 = *(uint *)(in_RSI + 0x24);
    if ((float)uVar23 * __LC27 < (float)(uVar1 + 1)) {
      if (*(int *)(in_RSI + 0x20) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar30 = *(int *)(in_RSI + 0x24);
        local_78 = *(long *)in_RSI;
        uVar23 = 0xffffffff;
        goto LAB_00114f63;
      }
      uVar23 = *(int *)(in_RSI + 0x20) + 1;
      uVar24 = (ulong)uVar23;
      if (uVar23 < 2) {
        uVar24 = 2;
      }
      uVar23 = *(uint *)(hash_table_size_primes + uVar24 * 4);
      *(int *)(in_RSI + 0x20) = (int)uVar24;
      pvVar2 = *(void **)(in_RSI + 0x18);
      uVar24 = (ulong)uVar23 << 2;
      pvVar3 = *(void **)(in_RSI + 0x10);
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar25;
      uVar25 = Memory::realloc_static(*(void **)in_RSI,uVar24,false);
      *(undefined8 *)in_RSI = uVar25;
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar25;
      lVar26 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar24,false);
      *(long *)(in_RSI + 8) = lVar26;
      if (uVar23 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar24);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar24 = 0;
        lVar4 = *(long *)(in_RSI + 0x18);
        lVar5 = *(long *)(in_RSI + 0x10);
        do {
          uVar37 = uVar24 & 0xffffffff;
          uVar35 = (undefined4)uVar24;
          uVar39 = 0;
          uVar23 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar24 * 4) * 4);
          uVar31 = (ulong)uVar23;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar34 = CONCAT44(0,uVar38);
          lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar31 * lVar27;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar34;
          lVar28 = SUB168(auVar6 * auVar14,8) * 4;
          iVar30 = SUB164(auVar6 * auVar14,8);
          puVar40 = (uint *)(lVar4 + lVar28);
          uVar1 = *puVar40;
          if (uVar1 == 0) {
            lVar27 = uVar24 * 4;
          }
          else {
            do {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar1 * lVar27;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar34;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)((uVar38 + iVar30) - SUB164(auVar7 * auVar15,8)) * lVar27;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar34;
              local_98 = SUB164(auVar8 * auVar16,8);
              if (local_98 < uVar39) {
                *(int *)(lVar5 + uVar37 * 4) = iVar30;
                uVar23 = *puVar40;
                *puVar40 = (uint)uVar31;
                uVar1 = *(uint *)(lVar28 + lVar26);
                uVar31 = (ulong)uVar23;
                *(uint *)(lVar28 + lVar26) = (uint)uVar37;
                uVar37 = (ulong)uVar1;
                uVar39 = local_98;
              }
              uVar35 = (undefined4)uVar37;
              uVar23 = (uint)uVar31;
              uVar39 = uVar39 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar30 + 1) * lVar27;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar34;
              lVar28 = SUB168(auVar9 * auVar17,8) * 4;
              iVar30 = SUB164(auVar9 * auVar17,8);
              puVar40 = (uint *)(lVar4 + lVar28);
              uVar1 = *puVar40;
            } while (uVar1 != 0);
            lVar27 = uVar37 << 2;
          }
          *puVar40 = uVar23;
          uVar24 = uVar24 + 1;
          *(int *)(lVar5 + lVar27) = iVar30;
          *(undefined4 *)(lVar26 + lVar28) = uVar35;
        } while ((uint)uVar24 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(pvVar3,false);
      uVar38 = *in_RDX;
      uVar1 = *(uint *)(in_RSI + 0x24);
    }
    uVar23 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
    uVar39 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
    uVar23 = uVar39 ^ uVar39 >> 0x10;
    if (uVar39 == uVar39 >> 0x10) {
      uVar24 = 1;
      uVar23 = 1;
    }
    else {
      uVar24 = (ulong)uVar23;
    }
    uVar33 = 0;
    local_78 = *(long *)in_RSI;
    *(uint *)(local_78 + (ulong)uVar1 * 4) = uVar38;
    lVar4 = *(long *)(in_RSI + 0x18);
    lVar5 = *(long *)(in_RSI + 8);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
    uVar31 = CONCAT44(0,uVar38);
    lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
    lVar27 = *(long *)(in_RSI + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar24 * lVar28;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar31;
    lVar26 = SUB168(auVar10 * auVar18,8) * 4;
    iVar30 = SUB164(auVar10 * auVar18,8);
    puVar40 = (uint *)(lVar4 + lVar26);
    uVar1 = *puVar40;
    uVar39 = *(uint *)(in_RSI + 0x24);
    while (uVar1 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar1 * lVar28;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar31;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)((uVar38 + iVar30) - SUB164(auVar11 * auVar19,8)) * lVar28;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar31;
      local_98 = SUB164(auVar12 * auVar20,8);
      uVar32 = uVar23;
      uVar36 = uVar39;
      if (local_98 < uVar33) {
        puVar29 = (uint *)(lVar26 + lVar5);
        *(int *)(lVar27 + (ulong)uVar39 * 4) = iVar30;
        uVar32 = *puVar40;
        *puVar40 = uVar23;
        uVar36 = *puVar29;
        *puVar29 = uVar39;
        uVar33 = local_98;
      }
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)(iVar30 + 1) * lVar28;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      lVar26 = SUB168(auVar13 * auVar21,8) * 4;
      iVar30 = SUB164(auVar13 * auVar21,8);
      puVar40 = (uint *)(lVar4 + lVar26);
      uVar39 = uVar36;
      uVar23 = uVar32;
      uVar1 = *puVar40;
    }
    *puVar40 = uVar23;
    *(int *)(lVar27 + (ulong)uVar39 * 4) = iVar30;
    *(uint *)(lVar5 + lVar26) = uVar39;
    uVar23 = *(uint *)(in_RSI + 0x24);
    iVar30 = uVar23 + 1;
    *(int *)(in_RSI + 0x24) = iVar30;
  }
  else {
    iVar30 = *(int *)(in_RSI + 0x24);
    local_78 = *(long *)in_RSI;
    uVar23 = local_44;
  }
LAB_00114f63:
  param_1[2] = iVar30;
  *(long *)param_1 = local_78;
  param_1[3] = uVar23;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<char32_t, HashMapHasherDefault, HashMapComparatorDefault<char32_t> >::insert(char32_t
   const&) */

wchar32 * HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>>::insert
                    (wchar32 *param_1)

{
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
  wchar32 wVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint *puVar30;
  int iVar31;
  wchar32 wVar32;
  uint *in_RDX;
  ulong uVar33;
  uint uVar34;
  HashSet<char32_t,HashMapHasherDefault,HashMapComparatorDefault<char32_t>> *in_RSI;
  uint uVar35;
  ulong uVar36;
  undefined4 uVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  wchar32 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar25 = (ulong)uVar23 << 2;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)in_RSI = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 8) = uVar26;
    if (uVar23 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar25);
    }
  }
  uVar40 = *in_RDX;
  local_44 = L'\0';
  cVar22 = _lookup_pos(in_RSI,(wchar32 *)(ulong)uVar40,(uint *)&local_44);
  if (cVar22 == '\0') {
    uVar1 = *(uint *)(in_RSI + 0x24);
    if ((float)uVar23 * __LC27 < (float)(uVar1 + 1)) {
      if (*(int *)(in_RSI + 0x20) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        wVar32 = *(wchar32 *)(in_RSI + 0x24);
        local_78 = *(long *)in_RSI;
        wVar24 = L'\xffffffff';
        goto LAB_00115483;
      }
      uVar23 = *(int *)(in_RSI + 0x20) + 1;
      uVar25 = (ulong)uVar23;
      if (uVar23 < 2) {
        uVar25 = 2;
      }
      uVar23 = *(uint *)(hash_table_size_primes + uVar25 * 4);
      *(int *)(in_RSI + 0x20) = (int)uVar25;
      pvVar2 = *(void **)(in_RSI + 0x18);
      uVar25 = (ulong)uVar23 << 2;
      pvVar3 = *(void **)(in_RSI + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar26;
      uVar26 = Memory::realloc_static(*(void **)in_RSI,uVar25,false);
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
          uVar39 = uVar25 & 0xffffffff;
          uVar37 = (undefined4)uVar25;
          uVar41 = 0;
          uVar23 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar25 * 4) * 4);
          uVar33 = (ulong)uVar23;
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar36 = CONCAT44(0,uVar40);
          lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar33 * lVar28;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar36;
          lVar29 = SUB168(auVar6 * auVar14,8) * 4;
          iVar31 = SUB164(auVar6 * auVar14,8);
          puVar42 = (uint *)(lVar4 + lVar29);
          uVar1 = *puVar42;
          if (uVar1 == 0) {
            lVar28 = uVar25 * 4;
          }
          else {
            do {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar1 * lVar28;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar36;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)((uVar40 + iVar31) - SUB164(auVar7 * auVar15,8)) * lVar28;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar36;
              local_98 = SUB164(auVar8 * auVar16,8);
              if (local_98 < uVar41) {
                *(int *)(lVar5 + uVar39 * 4) = iVar31;
                uVar23 = *puVar42;
                *puVar42 = (uint)uVar33;
                uVar1 = *(uint *)(lVar29 + lVar27);
                uVar33 = (ulong)uVar23;
                *(uint *)(lVar29 + lVar27) = (uint)uVar39;
                uVar39 = (ulong)uVar1;
                uVar41 = local_98;
              }
              uVar37 = (undefined4)uVar39;
              uVar23 = (uint)uVar33;
              uVar41 = uVar41 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar31 + 1) * lVar28;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar36;
              lVar29 = SUB168(auVar9 * auVar17,8) * 4;
              iVar31 = SUB164(auVar9 * auVar17,8);
              puVar42 = (uint *)(lVar4 + lVar29);
              uVar1 = *puVar42;
            } while (uVar1 != 0);
            lVar28 = uVar39 << 2;
          }
          *puVar42 = uVar23;
          uVar25 = uVar25 + 1;
          *(int *)(lVar5 + lVar28) = iVar31;
          *(undefined4 *)(lVar27 + lVar29) = uVar37;
        } while ((uint)uVar25 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(pvVar3,false);
      uVar40 = *in_RDX;
      uVar1 = *(uint *)(in_RSI + 0x24);
    }
    uVar23 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
    uVar41 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
    uVar23 = uVar41 ^ uVar41 >> 0x10;
    if (uVar41 == uVar41 >> 0x10) {
      uVar25 = 1;
      uVar23 = 1;
    }
    else {
      uVar25 = (ulong)uVar23;
    }
    uVar35 = 0;
    local_78 = *(long *)in_RSI;
    *(uint *)(local_78 + (ulong)uVar1 * 4) = uVar40;
    lVar4 = *(long *)(in_RSI + 0x18);
    lVar5 = *(long *)(in_RSI + 8);
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
    uVar33 = CONCAT44(0,uVar40);
    lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
    lVar28 = *(long *)(in_RSI + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar25 * lVar29;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    lVar27 = SUB168(auVar10 * auVar18,8) * 4;
    iVar31 = SUB164(auVar10 * auVar18,8);
    puVar42 = (uint *)(lVar4 + lVar27);
    uVar1 = *puVar42;
    uVar41 = *(uint *)(in_RSI + 0x24);
    while (uVar1 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar1 * lVar29;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar33;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)((uVar40 + iVar31) - SUB164(auVar11 * auVar19,8)) * lVar29;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar33;
      local_98 = SUB164(auVar12 * auVar20,8);
      uVar34 = uVar23;
      uVar38 = uVar41;
      if (local_98 < uVar35) {
        puVar30 = (uint *)(lVar27 + lVar5);
        *(int *)(lVar28 + (ulong)uVar41 * 4) = iVar31;
        uVar34 = *puVar42;
        *puVar42 = uVar23;
        uVar38 = *puVar30;
        *puVar30 = uVar41;
        uVar35 = local_98;
      }
      uVar35 = uVar35 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)(iVar31 + 1) * lVar29;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar33;
      lVar27 = SUB168(auVar13 * auVar21,8) * 4;
      iVar31 = SUB164(auVar13 * auVar21,8);
      puVar42 = (uint *)(lVar4 + lVar27);
      uVar41 = uVar38;
      uVar23 = uVar34;
      uVar1 = *puVar42;
    }
    *puVar42 = uVar23;
    *(int *)(lVar28 + (ulong)uVar41 * 4) = iVar31;
    *(uint *)(lVar5 + lVar27) = uVar41;
    wVar24 = *(wchar32 *)(in_RSI + 0x24);
    wVar32 = wVar24 + L'\x01';
    *(wchar32 *)(in_RSI + 0x24) = wVar32;
  }
  else {
    wVar32 = *(wchar32 *)(in_RSI + 0x24);
    local_78 = *(long *)in_RSI;
    wVar24 = local_44;
  }
LAB_00115483:
  param_1[2] = wVar32;
  *(long *)param_1 = local_78;
  param_1[3] = wVar24;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable
   create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>(DynamicFontImportSettingsDialog*,
   char const*, void (DynamicFontImportSettingsDialog::*)()) */

DynamicFontImportSettingsDialog *
create_custom_callable_function_pointer<DynamicFontImportSettingsDialog>
          (DynamicFontImportSettingsDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012a2a0;
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



/* DynamicFontImportSettingsDialog::_notificationv(int, bool) */

void __thiscall
DynamicFontImportSettingsDialog::_notificationv
          (DynamicFontImportSettingsDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  _notification((int)this);
  return;
}



/* void Ref<FontFile>::instantiate<>() */

void __thiscall Ref<FontFile>::instantiate<>(Ref<FontFile> *this)

{
  char cVar1;
  FontFile *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (FontFile *)operator_new(0x340,"");
  FontFile::FontFile(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (FontFile *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (FontFile *)pOVar3) goto LAB_00115785;
    *(FontFile **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00115785;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (FontFile *)0x0) {
    return;
  }
LAB_00115785:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<ConfigFile>::instantiate<>() */

void __thiscall Ref<ConfigFile>::instantiate<>(Ref<ConfigFile> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  pRVar3 = this_00;
  for (lVar2 = 0x36; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00129dc8;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_001158e5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_001158e5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_001158e5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<DynamicFontImportSettingsDialog, String
   const&>(DynamicFontImportSettingsDialog*, char const*, void
   (DynamicFontImportSettingsDialog::*)(String const&)) */

DynamicFontImportSettingsDialog *
create_custom_callable_function_pointer<DynamicFontImportSettingsDialog,String_const&>
          (DynamicFontImportSettingsDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012a330;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
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



/* WARNING: Removing unreachable block (ram,0x00115c68) */
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00130068 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_00130060 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001161b8) */
/* String vformat<unsigned int>(String const&, unsigned int const) */

String * vformat<unsigned_int>(String *param_1,uint param_2)

{
  char cVar1;
  Variant *this;
  uint in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x001164f0) */
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



/* WARNING: Removing unreachable block (ram,0x00116798) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x00116ae0) */
/* String vformat<Variant::Type, PropertyHint, char const*>(String const&, Variant::Type const,
   PropertyHint const, char const* const) */

undefined8 *
vformat<Variant::Type,PropertyHint,char_const*>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,char *param_5)

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



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
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



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void>::call
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00116faf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00116faf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00117071;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00116faf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC54,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117071:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001172e0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_001172e0;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC55;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC56;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC57;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00117268:
          uVar3 = _LC58;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_00117268;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001172b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_001173db;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001172e0:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC54,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001173db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&>::call
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
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
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC59;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_001174ae;
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
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC54,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_001174ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if ((code *)PTR__bind_methods_00130070 != Object::_bind_methods) {
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



/* DynamicFontImportSettingsData::_initialize_classv() */

void DynamicFontImportSettingsData::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_00130070 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "DynamicFontImportSettingsData";
    local_60 = 0;
    local_40 = 0x1d;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00130068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00130078 !=
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
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00130080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfirmationDialog::_initialize_classv() */

void ConfirmationDialog::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00130068 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Viewport");
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_58 = "Viewport";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Window";
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
      local_70 = 0;
      local_50 = 0xc;
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
      AcceptDialog::_bind_methods();
      if ((code *)PTR__bind_compatibility_methods_00130088 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfirmationDialog";
    local_70 = 0;
    local_50 = 0x12;
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
    if ((code *)PTR__bind_methods_00130090 != AcceptDialog::_bind_methods) {
      ConfirmationDialog::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00130068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00130078 !=
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
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_00130080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00130068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00130078 !=
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
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "SplitContainer";
      local_70 = 0;
      local_50 = 0xe;
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
      if ((code *)PTR__bind_methods_00130098 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HSplitContainer";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DynamicFontImportSettingsDialog::_initialize_classv() */

void DynamicFontImportSettingsDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        if (Window::initialize_class()::initialized == '\0') {
          if (Viewport::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00130068 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Viewport");
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
            Viewport::_bind_methods();
            Viewport::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Viewport");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Window");
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
          Window::_bind_methods();
          Window::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Window";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "AcceptDialog";
        local_70 = 0;
        local_50 = 0xc;
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00130088 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ConfirmationDialog";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code *)PTR__bind_methods_00130090 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "DynamicFontImportSettingsDialog";
    local_70 = 0;
    local_50 = 0x1f;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011984f;
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
LAB_0011984f:
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
    if (cVar6 != '\0') goto LAB_00119903;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
      if (cVar6 != '\0') goto LAB_00119903;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00119903:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsData::is_class(String const&) const */

undefined8 __thiscall
DynamicFontImportSettingsData::is_class(DynamicFontImportSettingsData *this,String *param_1)

{
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00119a7f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00119a7f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00119b33;
  }
  cVar5 = String::operator==(param_1,"DynamicFontImportSettingsData");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00119b33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

{
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00119bff;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00119bff:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00119cb3;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00119cb3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00119d7f;
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
LAB_00119d7f:
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
    if (cVar6 != '\0') goto LAB_00119e33;
  }
  cVar6 = String::operator==(param_1,"Node");
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
      if (cVar6 != '\0') goto LAB_00119e33;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00119e33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00119faf;
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
LAB_00119faf:
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
    if (cVar6 != '\0') goto LAB_0011a063;
  }
  cVar6 = String::operator==(param_1,"Window");
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
      if (cVar6 != '\0') goto LAB_0011a063;
    }
    cVar6 = String::operator==(param_1,"Viewport");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0011a16e;
    }
  }
LAB_0011a063:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a16e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011a1ef;
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
LAB_0011a1ef:
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
    if (cVar6 != '\0') goto LAB_0011a2a3;
  }
  cVar6 = String::operator==(param_1,"ConfirmationDialog");
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
      if (cVar6 != '\0') goto LAB_0011a2a3;
    }
    cVar6 = String::operator==(param_1,"AcceptDialog");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Window::is_class((Window *)this,param_1);
        return uVar8;
      }
      goto LAB_0011a3ae;
    }
  }
LAB_0011a2a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a3ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::is_class(String const&) const */

undefined8 __thiscall
DynamicFontImportSettingsDialog::is_class(DynamicFontImportSettingsDialog *this,String *param_1)

{
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0011a42f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011a42f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011a4e3;
  }
  cVar5 = String::operator==(param_1,"DynamicFontImportSettingsDialog");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011a4e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011a5af;
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
LAB_0011a5af:
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
    if (cVar6 != '\0') goto LAB_0011a663;
  }
  cVar6 = String::operator==(param_1,"Container");
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
      if (cVar6 != '\0') goto LAB_0011a663;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_0011a663;
      }
      cVar6 = String::operator==(param_1,"CanvasItem");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Node::is_class((Node *)this,param_1);
          return uVar8;
        }
        goto LAB_0011a7fe;
      }
    }
  }
LAB_0011a663:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a7fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011a87f;
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
LAB_0011a87f:
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
    if (cVar6 != '\0') goto LAB_0011a933;
  }
  cVar6 = String::operator==(param_1,"HSplitContainer");
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
      if (cVar6 != '\0') goto LAB_0011a933;
    }
    cVar6 = String::operator==(param_1,"SplitContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011aa3e;
    }
  }
LAB_0011a933:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011aa3e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporter::ImportOption::~ImportOption() */

void __thiscall ResourceImporter::ImportOption::~ImportOption(ImportOption *this)

{
  long *plVar1;
  long lVar2;
  
  if (Variant::needs_deinit[*(int *)(this + 0x30)] != '\0') {
    Variant::_clear_internal();
  }
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
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
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
        if (pvVar5 == (void *)0x0) goto LAB_0011ac05;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011ac05:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011accf;
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
LAB_0011accf:
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
    if (cVar6 != '\0') goto LAB_0011ad83;
  }
  cVar6 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar6 != '\0') goto LAB_0011ad83;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011ae8e;
    }
  }
LAB_0011ad83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ae8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0011af0f;
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
LAB_0011af0f:
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
    if (cVar6 != '\0') goto LAB_0011afc3;
  }
  cVar6 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar6 != '\0') goto LAB_0011afc3;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011b0ce;
    }
  }
LAB_0011afc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011b0ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_0011b23c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b23c:
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC60;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC60;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
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
      goto LAB_0011b48c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b48c:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_0011b6f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b6f1:
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
  StringName::StringName((StringName *)&local_78,"Viewport",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
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
      goto LAB_0011b9a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b9a1:
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
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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



/* DynamicFontImportSettingsData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
DynamicFontImportSettingsData::_get_property_listv
          (DynamicFontImportSettingsData *this,List *param_1,bool param_2)

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
  local_78 = "DynamicFontImportSettingsData";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DynamicFontImportSettingsData";
  local_98 = 0;
  local_70 = 0x1d;
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
      goto LAB_0011bc51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bc51:
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
  StringName::StringName((StringName *)&local_78,"DynamicFontImportSettingsData",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
      goto LAB_0011bf11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bf11:
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001300a0 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_0011c1e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c1e1:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001300a8 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
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
      goto LAB_0011c4b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c4b1:
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
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ConfirmationDialog::_get_property_listv(ConfirmationDialog *this,List *param_1,bool param_2)

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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfirmationDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfirmationDialog";
  local_98 = 0;
  local_70 = 0x12;
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
      goto LAB_0011c761;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c761:
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
  StringName::StringName((StringName *)&local_78,"ConfirmationDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
DynamicFontImportSettingsDialog::_get_property_listv
          (DynamicFontImportSettingsDialog *this,List *param_1,bool param_2)

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
    ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "DynamicFontImportSettingsDialog";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DynamicFontImportSettingsDialog";
  local_98 = 0;
  local_70 = 0x1f;
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
      goto LAB_0011ca11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ca11:
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
  StringName::StringName((StringName *)&local_78,"DynamicFontImportSettingsDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_0011ccc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ccc1:
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
  if ((code *)PTR__get_property_list_001300b0 != CanvasItem::_get_property_list) {
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
      goto LAB_0011cf91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cf91:
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



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

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
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
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
      goto LAB_0011d241;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d241:
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
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_0011d4f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d4f1:
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
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_0011d7a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d7a1:
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
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
  local_98 = 0;
  local_70 = 0xe;
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
      goto LAB_0011da51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011da51:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
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
      goto LAB_0011dd01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011dd01:
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::~List
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this)

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



/* DynamicFontImportSettingsData::~DynamicFontImportSettingsData() */

void __thiscall
DynamicFontImportSettingsData::~DynamicFontImportSettingsData(DynamicFontImportSettingsData *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_001299f0;
  if (*(long *)(this + 0x240) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x240);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pvVar5 = *(void **)(this + 0x218);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x23c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x238) * 4) != 0) {
        memset(*(void **)(this + 0x230),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x238) * 4) << 2);
      }
      *(undefined4 *)(this + 0x23c) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x228),false);
    Memory::free_static(*(void **)(this + 0x220),false);
    Memory::free_static(*(void **)(this + 0x230),false);
  }
  pvVar5 = *(void **)(this + 0x1f0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4) != 0) {
        memset(*(void **)(this + 0x208),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4) << 2);
      }
      *(undefined4 *)(this + 0x214) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x200),false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
    Memory::free_static(*(void **)(this + 0x208),false);
  }
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0x1e0));
  pvVar5 = *(void **)(this + 0x1b8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1dc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1c0) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1b8);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011e1b2;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
LAB_0011e1b2:
  pvVar5 = *(void **)(this + 0x188);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 400) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011e286;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0011e286:
  *(undefined ***)this = &PTR__initialize_classv_00128f28;
  Object::~Object((Object *)this);
  return;
}



/* DynamicFontImportSettingsData::~DynamicFontImportSettingsData() */

void __thiscall
DynamicFontImportSettingsData::~DynamicFontImportSettingsData(DynamicFontImportSettingsData *this)

{
  ~DynamicFontImportSettingsData(this);
  operator_delete(this,0x248);
  return;
}



/* DynamicFontImportSettingsDialog::~DynamicFontImportSettingsDialog() */

void __thiscall
DynamicFontImportSettingsDialog::~DynamicFontImportSettingsDialog
          (DynamicFontImportSettingsDialog *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00129b50;
  if (*(long *)(this + 0xec8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xec8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xec0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xec0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xe98) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xe98);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xe90));
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xdd0));
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xdc8));
  if (*(long *)(this + 0xdc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdb8));
  *(undefined ***)this = &PTR__initialize_classv_00129778;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* DynamicFontImportSettingsDialog::~DynamicFontImportSettingsDialog() */

void __thiscall
DynamicFontImportSettingsDialog::~DynamicFontImportSettingsDialog
          (DynamicFontImportSettingsDialog *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00129b50;
  if (*(long *)(this + 0xec8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xec8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xec0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xec0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xe98) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xe98);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xe90));
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xdd0));
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)(this + 0xdc8));
  if (*(long *)(this + 0xdc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdb8));
  *(undefined ***)this = &PTR__initialize_classv_00129778;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xed0);
  return;
}



/* List<ResourceImporter::ImportOption,
   DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<ResourceImporter::ImportOption,
   DefaultAllocator> const&) */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::operator=
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this,List *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)this;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*puVar8;
      if (pvVar1 == (void *)0x0) goto LAB_0011e7d0;
      if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar8) {
        *puVar8 = *(undefined8 *)((long)pvVar1 + 0x48);
        if (pvVar1 == (void *)puVar8[1]) {
          puVar8[1] = *(undefined8 *)((long)pvVar1 + 0x50);
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
        *(int *)(puVar8 + 2) = *(int *)(puVar8 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar8 = *(undefined8 **)this;
    } while (*(int *)(puVar8 + 2) != 0);
    Memory::free_static(puVar8,false);
    *(undefined8 *)this = 0;
  }
  puVar8 = (undefined8 *)0x0;
LAB_0011e7d0:
  if ((*(undefined8 **)param_1 != (undefined8 *)0x0) &&
     (puVar7 = (undefined4 *)**(undefined8 **)param_1, puVar7 != (undefined4 *)0x0)) {
    if (puVar8 == (undefined8 *)0x0) {
      pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar5;
      *(undefined4 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar6 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar6 + 0xe) = (undefined1  [16])0x0;
        lVar4 = *(long *)(puVar7 + 2);
        *puVar6 = 0;
        puVar6[6] = 0;
        puVar6[10] = 6;
        puVar6[0xc] = 0;
        *(undefined8 *)(puVar6 + 0x16) = 0;
        *(undefined1 (*) [16])(puVar6 + 0x12) = (undefined1  [16])0x0;
        *puVar6 = *puVar7;
        if (lVar4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar7 + 2));
        }
        StringName::operator=((StringName *)(puVar6 + 4),(StringName *)(puVar7 + 4));
        puVar6[6] = puVar7[6];
        if (*(long *)(puVar6 + 8) != *(long *)(puVar7 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)(puVar7 + 8));
        }
        puVar6[10] = puVar7[10];
        Variant::operator=((Variant *)(puVar6 + 0xc),(Variant *)(puVar7 + 0xc));
        uVar2 = *(undefined8 *)(*(long *)this + 8);
        *(long *)(puVar6 + 0x16) = *(long *)this;
        plVar3 = *(long **)this;
        *(undefined8 *)(puVar6 + 0x12) = 0;
        *(undefined8 *)(puVar6 + 0x14) = uVar2;
        if (plVar3[1] != 0) {
          *(undefined4 **)(plVar3[1] + 0x48) = puVar6;
        }
        plVar3[1] = (long)puVar6;
        if (*plVar3 == 0) break;
        puVar7 = *(undefined4 **)(puVar7 + 0x12);
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        if (puVar7 == (undefined4 *)0x0) {
          return;
        }
      }
      *plVar3 = (long)puVar6;
      puVar7 = *(undefined4 **)(puVar7 + 0x12);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    } while (puVar7 != (undefined4 *)0x0);
  }
  return;
}



/* Ref<TextServer>::unref() */

void __thiscall Ref<TextServer>::unref(Ref<TextServer> *this)

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



/* Ref<ConfigFile>::unref() */

void __thiscall Ref<ConfigFile>::unref(Ref<ConfigFile> *this)

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
    goto LAB_0011f120;
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
    if ((float)uVar26 * __LC27 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar26 = *(uint *)(this + 0x28);
      if (uVar26 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_e0 = (Variant *)0x18;
        goto LAB_0011f10b;
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
LAB_0011f10b:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011f120:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DynamicFontImportSettingsData::_setv(StringName const&, Variant const&) */

void __thiscall
DynamicFontImportSettingsData::_setv
          (DynamicFontImportSettingsData *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* DynamicFontImportSettingsData::_getv(StringName const&, Variant&) const */

void __thiscall
DynamicFontImportSettingsData::_getv
          (DynamicFontImportSettingsData *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* Ref<DynamicFontImportSettingsData>::unref() */

void __thiscall Ref<DynamicFontImportSettingsData>::unref(Ref<DynamicFontImportSettingsData> *this)

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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
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
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001249f1;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_001249f1:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00129dc8;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00124b01;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00124b01:
  *(undefined ***)this = &PTR__initialize_classv_00128f28;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00129dc8;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00124bf1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00124bf1:
  *(undefined ***)this = &PTR__initialize_classv_00128f28;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicFontImportSettingsData::_set(StringName const&, Variant const&) */

void DynamicFontImportSettingsData::_GLOBAL__sub_I__set(void)

{
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
  }
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
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    EditorFileDialog::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
  _DAT_0010f708 = 0;
  _unicode_ranges = _LC223;
  String::parse_utf32((String *)&DAT_0010f708,L"Basic Latin");
  DAT_0010f718 = 0;
  _DAT_0010f710 = _LC225;
  String::parse_utf32((String *)&DAT_0010f718,L"Latin-1 Supplement");
  _DAT_0010f728 = 0;
  _DAT_0010f720 = _LC227;
  String::parse_utf32((String *)&DAT_0010f728,L"Latin Extended-A");
  _DAT_0010f738 = 0;
  _DAT_0010f730 = _LC229;
  String::parse_utf32((String *)&DAT_0010f738,L"Latin Extended-B");
  _DAT_0010f748 = 0;
  _DAT_0010f740 = _LC231;
  String::parse_utf32((String *)&DAT_0010f748,L"IPA Extensions");
  _DAT_0010f758 = 0;
  _DAT_0010f750 = _LC233;
  String::parse_utf32((String *)&DAT_0010f758,L"Spacing Modifier Letters");
  _DAT_0010f768 = 0;
  _DAT_0010f760 = _LC235;
  String::parse_utf32((String *)&DAT_0010f768,L"Combining Diacritical Marks");
  _DAT_0010f778 = 0;
  _DAT_0010f770 = _LC237;
  String::parse_utf32((String *)&DAT_0010f778,L"Greek and Coptic");
  _DAT_0010f788 = 0;
  _DAT_0010f780 = _LC239;
  String::parse_utf32((String *)&DAT_0010f788,L"Cyrillic");
  _DAT_0010f798 = 0;
  _DAT_0010f790 = _LC241;
  String::parse_utf32((String *)&DAT_0010f798,L"Cyrillic Supplement");
  _DAT_0010f7a8 = 0;
  _DAT_0010f7a0 = _LC243;
  String::parse_utf32((String *)&DAT_0010f7a8,L"Armenian");
  _DAT_0010f7b8 = 0;
  _DAT_0010f7b0 = _LC245;
  String::parse_utf32((String *)&DAT_0010f7b8,L"Hebrew");
  _DAT_0010f7c8 = 0;
  _DAT_0010f7c0 = _LC247;
  String::parse_utf32((String *)&DAT_0010f7c8,L"Arabic");
  _DAT_0010f7d8 = 0;
  _DAT_0010f7d0 = _LC249;
  String::parse_utf32((String *)&DAT_0010f7d8,L"Syriac");
  _DAT_0010f7e8 = 0;
  _DAT_0010f7e0 = _LC251;
  String::parse_utf32((String *)&DAT_0010f7e8,L"Arabic Supplement");
  _DAT_0010f7f8 = 0;
  _DAT_0010f7f0 = _LC253;
  String::parse_utf32((String *)&DAT_0010f7f8,L"Thaana");
  _DAT_0010f808 = 0;
  _DAT_0010f800 = _LC255;
  String::parse_utf32((String *)&DAT_0010f808,L"NKo");
  _DAT_0010f818 = 0;
  _DAT_0010f810 = _LC257;
  String::parse_utf32((String *)&DAT_0010f818,L"Samaritan");
  _DAT_0010f828 = 0;
  _DAT_0010f820 = _LC259;
  String::parse_utf32((String *)&DAT_0010f828,L"Mandaic");
  _DAT_0010f838 = 0;
  _DAT_0010f830 = _LC261;
  String::parse_utf32((String *)&DAT_0010f838,L"Syriac Supplement");
  _DAT_0010f848 = 0;
  _DAT_0010f840 = _LC263;
  String::parse_utf32((String *)&DAT_0010f848,L"Arabic Extended-B");
  _DAT_0010f858 = 0;
  _DAT_0010f850 = _LC265;
  String::parse_utf32((String *)&DAT_0010f858,L"Arabic Extended-A");
  _DAT_0010f868 = 0;
  _DAT_0010f860 = _LC267;
  String::parse_utf32((String *)&DAT_0010f868,L"Devanagari");
  _DAT_0010f878 = 0;
  _DAT_0010f870 = _LC269;
  String::parse_utf32((String *)&DAT_0010f878,L"Bengali");
  _DAT_0010f888 = 0;
  _DAT_0010f880 = _LC271;
  String::parse_utf32((String *)&DAT_0010f888,L"Gurmukhi");
  _DAT_0010f898 = 0;
  _DAT_0010f890 = _LC273;
  String::parse_utf32((String *)&DAT_0010f898,L"Gujarati");
  _DAT_0010f8a8 = 0;
  _DAT_0010f8a0 = _LC275;
  String::parse_utf32((String *)&DAT_0010f8a8,L"Oriya");
  _DAT_0010f8b8 = 0;
  _DAT_0010f8b0 = _LC277;
  String::parse_utf32((String *)&DAT_0010f8b8,L"Tamil");
  _DAT_0010f8c8 = 0;
  _DAT_0010f8c0 = _LC279;
  String::parse_utf32((String *)&DAT_0010f8c8,L"Telugu");
  _DAT_0010f8d8 = 0;
  _DAT_0010f8d0 = _LC281;
  String::parse_utf32((String *)&DAT_0010f8d8,L"Kannada");
  _DAT_0010f8e8 = 0;
  _DAT_0010f8e0 = _LC283;
  String::parse_utf32((String *)&DAT_0010f8e8,L"Malayalam");
  _DAT_0010f8f8 = 0;
  _DAT_0010f8f0 = _LC285;
  String::parse_utf32((String *)&DAT_0010f8f8,L"Sinhala");
  _DAT_0010f908 = 0;
  _DAT_0010f900 = _LC287;
  String::parse_utf32((String *)&DAT_0010f908,L"Thai");
  _DAT_0010f918 = 0;
  _DAT_0010f910 = _LC289;
  String::parse_utf32((String *)&DAT_0010f918,L"Lao");
  _DAT_0010f928 = 0;
  _DAT_0010f920 = _LC291;
  String::parse_utf32((String *)&DAT_0010f928,L"Tibetan");
  _DAT_0010f938 = 0;
  _DAT_0010f930 = _LC293;
  String::parse_utf32((String *)&DAT_0010f938,L"Myanmar");
  _DAT_0010f948 = 0;
  _DAT_0010f940 = _LC295;
  String::parse_utf32((String *)&DAT_0010f948,L"Georgian");
  _DAT_0010f958 = 0;
  _DAT_0010f950 = _LC297;
  String::parse_utf32((String *)&DAT_0010f958,L"Hangul Jamo");
  _DAT_0010f968 = 0;
  _DAT_0010f960 = _LC299;
  String::parse_utf32((String *)&DAT_0010f968,L"Ethiopic");
  _DAT_0010f978 = 0;
  _DAT_0010f970 = _LC301;
  String::parse_utf32((String *)&DAT_0010f978,L"Ethiopic Supplement");
  _DAT_0010f988 = 0;
  _DAT_0010f980 = _LC303;
  String::parse_utf32((String *)&DAT_0010f988,L"Cherokee");
  _DAT_0010f998 = 0;
  _DAT_0010f990 = _LC305;
  String::parse_utf32((String *)&DAT_0010f998,L"Unified Canadian Aboriginal Syllabics");
  _DAT_0010f9a8 = 0;
  _DAT_0010f9a0 = _LC307;
  String::parse_utf32((String *)&DAT_0010f9a8,L"Ogham");
  _DAT_0010f9b8 = 0;
  _DAT_0010f9b0 = _LC309;
  String::parse_utf32((String *)&DAT_0010f9b8,L"Runic");
  _DAT_0010f9c8 = 0;
  _DAT_0010f9c0 = _LC311;
  String::parse_utf32((String *)&DAT_0010f9c8,L"Tagalog");
  _DAT_0010f9d8 = 0;
  _DAT_0010f9d0 = _LC313;
  String::parse_utf32((String *)&DAT_0010f9d8,L"Hanunoo");
  _DAT_0010f9e8 = 0;
  _DAT_0010f9e0 = _LC315;
  String::parse_utf32((String *)&DAT_0010f9e8,L"Buhid");
  _DAT_0010f9f8 = 0;
  _DAT_0010f9f0 = _LC317;
  String::parse_utf32((String *)&DAT_0010f9f8,L"Tagbanwa");
  _DAT_0010fa08 = 0;
  _DAT_0010fa00 = _LC319;
  String::parse_utf32((String *)&DAT_0010fa08,L"Khmer");
  _DAT_0010fa18 = 0;
  _DAT_0010fa10 = _LC321;
  String::parse_utf32((String *)&DAT_0010fa18,L"Mongolian");
  _DAT_0010fa28 = 0;
  _DAT_0010fa20 = _LC323;
  String::parse_utf32((String *)&DAT_0010fa28,L"Unified Canadian Aboriginal Syllabics Extended");
  _DAT_0010fa38 = 0;
  _DAT_0010fa30 = _LC325;
  String::parse_utf32((String *)&DAT_0010fa38,L"Limbu");
  _DAT_0010fa48 = 0;
  _DAT_0010fa40 = _LC327;
  String::parse_utf32((String *)&DAT_0010fa48,L"Tai Le");
  _DAT_0010fa58 = 0;
  _DAT_0010fa50 = _LC329;
  String::parse_utf32((String *)&DAT_0010fa58,L"New Tai Lue");
  _DAT_0010fa68 = 0;
  _DAT_0010fa60 = _LC331;
  String::parse_utf32((String *)&DAT_0010fa68,L"Khmer Symbols");
  _DAT_0010fa78 = 0;
  _DAT_0010fa70 = _LC333;
  String::parse_utf32((String *)&DAT_0010fa78,L"Buginese");
  _DAT_0010fa88 = 0;
  _DAT_0010fa80 = _LC335;
  String::parse_utf32((String *)&DAT_0010fa88,L"Tai Tham");
  _DAT_0010fa98 = 0;
  _DAT_0010fa90 = _LC337;
  String::parse_utf32((String *)&DAT_0010fa98,L"Combining Diacritical Marks Extended");
  _DAT_0010faa8 = 0;
  _DAT_0010faa0 = _LC339;
  String::parse_utf32((String *)&DAT_0010faa8,L"Balinese");
  _DAT_0010fab8 = 0;
  _DAT_0010fab0 = _LC341;
  String::parse_utf32((String *)&DAT_0010fab8,L"Sundanese");
  _DAT_0010fac8 = 0;
  _DAT_0010fac0 = _LC343;
  String::parse_utf32((String *)&DAT_0010fac8,L"Batak");
  _DAT_0010fad8 = 0;
  _DAT_0010fad0 = _LC345;
  String::parse_utf32((String *)&DAT_0010fad8,L"Lepcha");
  _DAT_0010fae8 = 0;
  _DAT_0010fae0 = _LC347;
  String::parse_utf32((String *)&DAT_0010fae8,L"Ol Chiki");
  _DAT_0010faf8 = 0;
  _DAT_0010faf0 = _LC349;
  String::parse_utf32((String *)&DAT_0010faf8,L"Cyrillic Extended-C");
  _DAT_0010fb08 = 0;
  _DAT_0010fb00 = _LC351;
  String::parse_utf32((String *)&DAT_0010fb08,L"Georgian Extended");
  _DAT_0010fb18 = 0;
  _DAT_0010fb10 = _LC353;
  String::parse_utf32((String *)&DAT_0010fb18,L"Sundanese Supplement");
  _DAT_0010fb28 = 0;
  _DAT_0010fb20 = _LC355;
  String::parse_utf32((String *)&DAT_0010fb28,L"Vedic Extensions");
  _DAT_0010fb38 = 0;
  _DAT_0010fb30 = _LC357;
  String::parse_utf32((String *)&DAT_0010fb38,L"Phonetic Extensions");
  _DAT_0010fb48 = 0;
  _DAT_0010fb40 = _LC359;
  String::parse_utf32((String *)&DAT_0010fb48,L"Phonetic Extensions Supplement");
  _DAT_0010fb58 = 0;
  _DAT_0010fb50 = _LC361;
  String::parse_utf32((String *)&DAT_0010fb58,L"Combining Diacritical Marks Supplement");
  _DAT_0010fb68 = 0;
  _DAT_0010fb60 = _LC363;
  String::parse_utf32((String *)&DAT_0010fb68,L"Latin Extended Additional");
  _DAT_0010fb78 = 0;
  _DAT_0010fb70 = _LC365;
  String::parse_utf32((String *)&DAT_0010fb78,L"Greek Extended");
  _DAT_0010fb88 = 0;
  _DAT_0010fb80 = _LC367;
  String::parse_utf32((String *)&DAT_0010fb88,L"General Punctuation");
  _DAT_0010fb98 = 0;
  _DAT_0010fb90 = _LC369;
  String::parse_utf32((String *)&DAT_0010fb98,L"Superscripts and Subscripts");
  _DAT_0010fba8 = 0;
  _DAT_0010fba0 = _LC371;
  String::parse_utf32((String *)&DAT_0010fba8,L"Currency Symbols");
  _DAT_0010fbb8 = 0;
  _DAT_0010fbb0 = _LC373;
  String::parse_utf32((String *)&DAT_0010fbb8,L"Combining Diacritical Marks for Symbols");
  _DAT_0010fbc8 = 0;
  _DAT_0010fbc0 = _LC375;
  String::parse_utf32((String *)&DAT_0010fbc8,L"Letterlike Symbols");
  _DAT_0010fbd8 = 0;
  _DAT_0010fbd0 = _LC377;
  String::parse_utf32((String *)&DAT_0010fbd8,L"Number Forms");
  _DAT_0010fbe8 = 0;
  _DAT_0010fbe0 = _LC379;
  String::parse_utf32((String *)&DAT_0010fbe8,L"Arrows");
  _DAT_0010fbf8 = 0;
  _DAT_0010fbf0 = _LC381;
  String::parse_utf32((String *)&DAT_0010fbf8,L"Mathematical Operators");
  _DAT_0010fc08 = 0;
  _DAT_0010fc00 = _LC383;
  String::parse_utf32((String *)&DAT_0010fc08,L"Miscellaneous Technical");
  _DAT_0010fc18 = 0;
  _DAT_0010fc10 = _LC385;
  String::parse_utf32((String *)&DAT_0010fc18,L"Control Pictures");
  _DAT_0010fc28 = 0;
  _DAT_0010fc20 = _LC387;
  String::parse_utf32((String *)&DAT_0010fc28,L"Optical Character Recognition");
  _DAT_0010fc38 = 0;
  _DAT_0010fc30 = _LC389;
  String::parse_utf32((String *)&DAT_0010fc38,L"Enclosed Alphanumerics");
  _DAT_0010fc48 = 0;
  _DAT_0010fc40 = _LC391;
  String::parse_utf32((String *)&DAT_0010fc48,L"Box Drawing");
  _DAT_0010fc58 = 0;
  _DAT_0010fc50 = _LC393;
  String::parse_utf32((String *)&DAT_0010fc58,L"Block Elements");
  _DAT_0010fc68 = 0;
  _DAT_0010fc60 = _LC395;
  String::parse_utf32((String *)&DAT_0010fc68,L"Geometric Shapes");
  _DAT_0010fc78 = 0;
  _DAT_0010fc70 = _LC397;
  String::parse_utf32((String *)&DAT_0010fc78,L"Miscellaneous Symbols");
  _DAT_0010fc88 = 0;
  _DAT_0010fc80 = _LC399;
  String::parse_utf32((String *)&DAT_0010fc88,L"Dingbats");
  _DAT_0010fc98 = 0;
  _DAT_0010fc90 = _LC401;
  String::parse_utf32((String *)&DAT_0010fc98,L"Miscellaneous Mathematical Symbols-A");
  _DAT_0010fca8 = 0;
  _DAT_0010fca0 = _LC403;
  String::parse_utf32((String *)&DAT_0010fca8,L"Supplemental Arrows-A");
  _DAT_0010fcb8 = 0;
  _DAT_0010fcb0 = _LC405;
  String::parse_utf32((String *)&DAT_0010fcb8,L"Braille Patterns");
  _DAT_0010fcc8 = 0;
  _DAT_0010fcc0 = _LC407;
  String::parse_utf32((String *)&DAT_0010fcc8,L"Supplemental Arrows-B");
  _DAT_0010fcd8 = 0;
  _DAT_0010fcd0 = _LC409;
  String::parse_utf32((String *)&DAT_0010fcd8,L"Miscellaneous Mathematical Symbols-B");
  _DAT_0010fce8 = 0;
  _DAT_0010fce0 = _LC411;
  String::parse_utf32((String *)&DAT_0010fce8,L"Supplemental Mathematical Operators");
  _DAT_0010fcf8 = 0;
  _DAT_0010fcf0 = _LC413;
  String::parse_utf32((String *)&DAT_0010fcf8,L"Miscellaneous Symbols and Arrows");
  _DAT_0010fd08 = 0;
  _DAT_0010fd00 = _LC415;
  String::parse_utf32((String *)&DAT_0010fd08,L"Glagolitic");
  _DAT_0010fd18 = 0;
  _DAT_0010fd10 = _LC417;
  String::parse_utf32((String *)&DAT_0010fd18,L"Latin Extended-C");
  _DAT_0010fd28 = 0;
  _DAT_0010fd20 = _LC419;
  String::parse_utf32((String *)&DAT_0010fd28,L"Coptic");
  _DAT_0010fd38 = 0;
  _DAT_0010fd30 = _LC421;
  String::parse_utf32((String *)&DAT_0010fd38,L"Georgian Supplement");
  _DAT_0010fd48 = 0;
  _DAT_0010fd40 = _LC423;
  String::parse_utf32((String *)&DAT_0010fd48,L"Tifinagh");
  _DAT_0010fd58 = 0;
  _DAT_0010fd50 = _LC425;
  String::parse_utf32((String *)&DAT_0010fd58,L"Ethiopic Extended");
  _DAT_0010fd68 = 0;
  _DAT_0010fd60 = _LC427;
  String::parse_utf32((String *)&DAT_0010fd68,L"Cyrillic Extended-A");
  _DAT_0010fd78 = 0;
  _DAT_0010fd70 = _LC429;
  String::parse_utf32((String *)&DAT_0010fd78,L"Supplemental Punctuation");
  _DAT_0010fd88 = 0;
  _DAT_0010fd80 = _LC431;
  String::parse_utf32((String *)&DAT_0010fd88,L"CJK Radicals Supplement");
  _DAT_0010fd98 = 0;
  _DAT_0010fd90 = _LC433;
  String::parse_utf32((String *)&DAT_0010fd98,L"Kangxi Radicals");
  _DAT_0010fda8 = 0;
  _DAT_0010fda0 = _LC435;
  String::parse_utf32((String *)&DAT_0010fda8,L"Ideographic Description Characters");
  _DAT_0010fdb8 = 0;
  _DAT_0010fdb0 = _LC437;
  String::parse_utf32((String *)&DAT_0010fdb8,L"CJK Symbols and Punctuation");
  _DAT_0010fdc8 = 0;
  _DAT_0010fdc0 = _LC439;
  String::parse_utf32((String *)&DAT_0010fdc8,L"Hiragana");
  _DAT_0010fdd8 = 0;
  _DAT_0010fdd0 = _LC441;
  String::parse_utf32((String *)&DAT_0010fdd8,L"Katakana");
  _DAT_0010fde8 = 0;
  _DAT_0010fde0 = _LC443;
  String::parse_utf32((String *)&DAT_0010fde8,L"Bopomofo");
  _DAT_0010fdf8 = 0;
  _DAT_0010fdf0 = _LC445;
  String::parse_utf32((String *)&DAT_0010fdf8,L"Hangul Compatibility Jamo");
  _DAT_0010fe08 = 0;
  _DAT_0010fe00 = _LC447;
  String::parse_utf32((String *)&DAT_0010fe08,L"Kanbun");
  _DAT_0010fe18 = 0;
  _DAT_0010fe10 = _LC449;
  String::parse_utf32((String *)&DAT_0010fe18,L"Bopomofo Extended");
  _DAT_0010fe28 = 0;
  _DAT_0010fe20 = _LC451;
  String::parse_utf32((String *)&DAT_0010fe28,L"CJK Strokes");
  _DAT_0010fe38 = 0;
  _DAT_0010fe30 = _LC453;
  String::parse_utf32((String *)&DAT_0010fe38,L"Katakana Phonetic Extensions");
  _DAT_0010fe48 = 0;
  _DAT_0010fe40 = _LC455;
  String::parse_utf32((String *)&DAT_0010fe48,L"Enclosed CJK Letters and Months");
  _DAT_0010fe58 = 0;
  _DAT_0010fe50 = _LC457;
  String::parse_utf32((String *)&DAT_0010fe58,L"CJK Compatibility");
  _DAT_0010fe68 = 0;
  _DAT_0010fe60 = _LC459;
  String::parse_utf32((String *)&DAT_0010fe68,L"CJK Unified Ideographs Extension A");
  _DAT_0010fe78 = 0;
  _DAT_0010fe70 = _LC461;
  String::parse_utf32((String *)&DAT_0010fe78,L"Yijing Hexagram Symbols");
  _DAT_0010fe88 = 0;
  _DAT_0010fe80 = _LC463;
  String::parse_utf32((String *)&DAT_0010fe88,L"CJK Unified Ideographs");
  _DAT_0010fe98 = 0;
  _DAT_0010fe90 = _LC465;
  String::parse_utf32((String *)&DAT_0010fe98,L"Yi Syllables");
  _DAT_0010fea8 = 0;
  _DAT_0010fea0 = _LC467;
  String::parse_utf32((String *)&DAT_0010fea8,L"Yi Radicals");
  _DAT_0010feb8 = 0;
  _DAT_0010feb0 = _LC469;
  String::parse_utf32((String *)&DAT_0010feb8,L"Lisu");
  _DAT_0010fec8 = 0;
  _DAT_0010fec0 = _LC471;
  String::parse_utf32((String *)&DAT_0010fec8,L"Vai");
  _DAT_0010fed8 = 0;
  _DAT_0010fed0 = _LC473;
  String::parse_utf32((String *)&DAT_0010fed8,L"Cyrillic Extended-B");
  _DAT_0010fee8 = 0;
  _DAT_0010fee0 = _LC475;
  String::parse_utf32((String *)&DAT_0010fee8,L"Bamum");
  _DAT_0010fef8 = 0;
  _DAT_0010fef0 = _LC477;
  String::parse_utf32((String *)&DAT_0010fef8,L"Modifier Tone Letters");
  _DAT_0010ff08 = 0;
  _DAT_0010ff00 = _LC479;
  String::parse_utf32((String *)&DAT_0010ff08,L"Latin Extended-D");
  _DAT_0010ff18 = 0;
  _DAT_0010ff10 = _LC481;
  String::parse_utf32((String *)&DAT_0010ff18,L"Syloti Nagri");
  _DAT_0010ff28 = 0;
  _DAT_0010ff20 = _LC483;
  String::parse_utf32((String *)&DAT_0010ff28,L"Common Indic Number Forms");
  _DAT_0010ff38 = 0;
  _DAT_0010ff30 = _LC485;
  String::parse_utf32((String *)&DAT_0010ff38,L"Phags-pa");
  _DAT_0010ff48 = 0;
  _DAT_0010ff40 = _LC487;
  String::parse_utf32((String *)&DAT_0010ff48,L"Saurashtra");
  _DAT_0010ff58 = 0;
  _DAT_0010ff50 = _LC489;
  String::parse_utf32((String *)&DAT_0010ff58,L"Devanagari Extended");
  _DAT_0010ff68 = 0;
  _DAT_0010ff60 = _LC491;
  String::parse_utf32((String *)&DAT_0010ff68,L"Kayah Li");
  _DAT_0010ff78 = 0;
  _DAT_0010ff70 = _LC493;
  String::parse_utf32((String *)&DAT_0010ff78,L"Rejang");
  _DAT_0010ff88 = 0;
  _DAT_0010ff80 = _LC495;
  String::parse_utf32((String *)&DAT_0010ff88,L"Hangul Jamo Extended-A");
  _DAT_0010ff98 = 0;
  _DAT_0010ff90 = _LC497;
  String::parse_utf32((String *)&DAT_0010ff98,L"Javanese");
  _DAT_0010ffa8 = 0;
  _DAT_0010ffa0 = _LC499;
  String::parse_utf32((String *)&DAT_0010ffa8,L"Myanmar Extended-B");
  _DAT_0010ffb8 = 0;
  _DAT_0010ffb0 = _LC501;
  String::parse_utf32((String *)&DAT_0010ffb8,L"Cham");
  _DAT_0010ffc8 = 0;
  _DAT_0010ffc0 = _LC503;
  String::parse_utf32((String *)&DAT_0010ffc8,L"Myanmar Extended-A");
  _DAT_0010ffd8 = 0;
  _DAT_0010ffd0 = _LC505;
  String::parse_utf32((String *)&DAT_0010ffd8,L"Tai Viet");
  _DAT_0010ffe8 = 0;
  _DAT_0010ffe0 = _LC507;
  String::parse_utf32((String *)&DAT_0010ffe8,L"Meetei Mayek Extensions");
  _DAT_0010fff8 = 0;
  _DAT_0010fff0 = _LC509;
  String::parse_utf32((String *)&DAT_0010fff8,L"Ethiopic Extended-A");
  _DAT_00110008 = 0;
  _DAT_00110000 = _LC511;
  String::parse_utf32((String *)&DAT_00110008,L"Latin Extended-E");
  _DAT_00110018 = 0;
  _DAT_00110010 = _LC513;
  String::parse_utf32((String *)&DAT_00110018,L"Cherokee Supplement");
  _DAT_00110028 = 0;
  _DAT_00110020 = _LC515;
  String::parse_utf32((String *)&DAT_00110028,L"Meetei Mayek");
  _DAT_00110038 = 0;
  _DAT_00110030 = _LC517;
  String::parse_utf32((String *)&DAT_00110038,L"Hangul Syllables");
  _DAT_00110048 = 0;
  _DAT_00110040 = _LC519;
  String::parse_utf32((String *)&DAT_00110048,L"Hangul Jamo Extended-B");
  _DAT_00110058 = 0;
  _DAT_00110050 = _LC521;
  String::parse_utf32((String *)&DAT_00110058,L"Private Use Area");
  _DAT_00110068 = 0;
  _DAT_00110060 = _LC523;
  String::parse_utf32((String *)&DAT_00110068,L"CJK Compatibility Ideographs");
  _DAT_00110078 = 0;
  _DAT_00110070 = _LC525;
  String::parse_utf32((String *)&DAT_00110078,L"Alphabetic Presentation Forms");
  _DAT_00110088 = 0;
  _DAT_00110080 = _LC527;
  String::parse_utf32((String *)&DAT_00110088,L"Arabic Presentation Forms-A");
  _DAT_00110098 = 0;
  _DAT_00110090 = _LC529;
  String::parse_utf32((String *)&DAT_00110098,L"Vertical Forms");
  _DAT_001100a8 = 0;
  _DAT_001100a0 = _LC531;
  String::parse_utf32((String *)&DAT_001100a8,L"Combining Half Marks");
  _DAT_001100b8 = 0;
  _DAT_001100b0 = _LC533;
  String::parse_utf32((String *)&DAT_001100b8,L"CJK Compatibility Forms");
  _DAT_001100c8 = 0;
  _DAT_001100c0 = _LC535;
  String::parse_utf32((String *)&DAT_001100c8,L"Small Form Variants");
  _DAT_001100d8 = 0;
  _DAT_001100d0 = _LC537;
  String::parse_utf32((String *)&DAT_001100d8,L"Arabic Presentation Forms-B");
  _DAT_001100e8 = 0;
  _DAT_001100e0 = _LC539;
  String::parse_utf32((String *)&DAT_001100e8,L"Halfwidth and Fullwidth Forms");
  _DAT_001100f8 = 0;
  _DAT_001100f0 = _LC541;
  String::parse_utf32((String *)&DAT_001100f8,L"Linear B Syllabary");
  _DAT_00110108 = 0;
  _DAT_00110100 = _LC543;
  String::parse_utf32((String *)&DAT_00110108,L"Linear B Ideograms");
  _DAT_00110118 = 0;
  _DAT_00110110 = _LC545;
  String::parse_utf32((String *)&DAT_00110118,L"Aegean Numbers");
  _DAT_00110128 = 0;
  _DAT_00110120 = _LC547;
  String::parse_utf32((String *)&DAT_00110128,L"Ancient Greek Numbers");
  _DAT_00110138 = 0;
  _DAT_00110130 = _LC549;
  String::parse_utf32((String *)&DAT_00110138,L"Ancient Symbols");
  _DAT_00110148 = 0;
  _DAT_00110140 = _LC551;
  String::parse_utf32((String *)&DAT_00110148,L"Phaistos Disc");
  _DAT_00110158 = 0;
  _DAT_00110150 = _LC553;
  String::parse_utf32((String *)&DAT_00110158,L"Lycian");
  _DAT_00110168 = 0;
  _DAT_00110160 = _LC555;
  String::parse_utf32((String *)&DAT_00110168,L"Carian");
  _DAT_00110178 = 0;
  _DAT_00110170 = _LC557;
  String::parse_utf32((String *)&DAT_00110178,L"Coptic Epact Numbers");
  _DAT_00110188 = 0;
  _DAT_00110180 = _LC559;
  String::parse_utf32((String *)&DAT_00110188,L"Old Italic");
  _DAT_00110198 = 0;
  _DAT_00110190 = _LC561;
  String::parse_utf32((String *)&DAT_00110198,L"Gothic");
  _DAT_001101a8 = 0;
  _DAT_001101a0 = _LC563;
  String::parse_utf32((String *)&DAT_001101a8,L"Old Permic");
  _DAT_001101b8 = 0;
  _DAT_001101b0 = _LC565;
  String::parse_utf32((String *)&DAT_001101b8,L"Ugaritic");
  _DAT_001101c8 = 0;
  _DAT_001101c0 = _LC567;
  String::parse_utf32((String *)&DAT_001101c8,L"Old Persian");
  _DAT_001101d8 = 0;
  _DAT_001101d0 = _LC569;
  String::parse_utf32((String *)&DAT_001101d8,L"Deseret");
  _DAT_001101e8 = 0;
  _DAT_001101e0 = _LC571;
  String::parse_utf32((String *)&DAT_001101e8,L"Shavian");
  _DAT_001101f8 = 0;
  _DAT_001101f0 = _LC573;
  String::parse_utf32((String *)&DAT_001101f8,L"Osmanya");
  _DAT_00110208 = 0;
  _DAT_00110200 = _LC575;
  String::parse_utf32((String *)&DAT_00110208,L"Osage");
  _DAT_00110218 = 0;
  _DAT_00110210 = _LC577;
  String::parse_utf32((String *)&DAT_00110218,L"Elbasan");
  _DAT_00110228 = 0;
  _DAT_00110220 = _LC579;
  String::parse_utf32((String *)&DAT_00110228,L"Caucasian Albanian");
  _DAT_00110238 = 0;
  _DAT_00110230 = _LC581;
  String::parse_utf32((String *)&DAT_00110238,L"Vithkuqi");
  _DAT_00110248 = 0;
  _DAT_00110240 = _LC583;
  String::parse_utf32((String *)&DAT_00110248,L"Todhri");
  _DAT_00110258 = 0;
  _DAT_00110250 = _LC585;
  String::parse_utf32((String *)&DAT_00110258,L"Linear A");
  _DAT_00110268 = 0;
  _DAT_00110260 = _LC587;
  String::parse_utf32((String *)&DAT_00110268,L"Latin Extended-F");
  _DAT_00110278 = 0;
  _DAT_00110270 = _LC589;
  String::parse_utf32((String *)&DAT_00110278,L"Cypriot Syllabary");
  _DAT_00110288 = 0;
  _DAT_00110280 = _LC591;
  String::parse_utf32((String *)&DAT_00110288,L"Imperial Aramaic");
  _DAT_00110298 = 0;
  _DAT_00110290 = _LC593;
  String::parse_utf32((String *)&DAT_00110298,L"Palmyrene");
  _DAT_001102a8 = 0;
  _DAT_001102a0 = _LC595;
  String::parse_utf32((String *)&DAT_001102a8,L"Nabataean");
  _DAT_001102b8 = 0;
  _DAT_001102b0 = _LC597;
  String::parse_utf32((String *)&DAT_001102b8,L"Hatran");
  _DAT_001102c8 = 0;
  _DAT_001102c0 = _LC599;
  String::parse_utf32((String *)&DAT_001102c8,L"Phoenician");
  _DAT_001102d8 = 0;
  _DAT_001102d0 = _LC601;
  String::parse_utf32((String *)&DAT_001102d8,L"Lydian");
  _DAT_001102e8 = 0;
  _DAT_001102e0 = _LC603;
  String::parse_utf32((String *)&DAT_001102e8,L"Meroitic Hieroglyphs");
  _DAT_001102f8 = 0;
  _DAT_001102f0 = _LC605;
  String::parse_utf32((String *)&DAT_001102f8,L"Meroitic Cursive");
  _DAT_00110308 = 0;
  _DAT_00110300 = _LC607;
  String::parse_utf32((String *)&DAT_00110308,L"Kharoshthi");
  _DAT_00110318 = 0;
  _DAT_00110310 = _LC609;
  String::parse_utf32((String *)&DAT_00110318,L"Old South Arabian");
  _DAT_00110328 = 0;
  _DAT_00110320 = _LC611;
  String::parse_utf32((String *)&DAT_00110328,L"Old North Arabian");
  _DAT_00110338 = 0;
  _DAT_00110330 = _LC613;
  String::parse_utf32((String *)&DAT_00110338,L"Manichaean");
  _DAT_00110348 = 0;
  _DAT_00110340 = _LC615;
  String::parse_utf32((String *)&DAT_00110348,L"Avestan");
  _DAT_00110358 = 0;
  _DAT_00110350 = _LC617;
  String::parse_utf32((String *)&DAT_00110358,L"Inscriptional Parthian");
  _DAT_00110368 = 0;
  _DAT_00110360 = _LC619;
  String::parse_utf32((String *)&DAT_00110368,L"Inscriptional Pahlavi");
  _DAT_00110378 = 0;
  _DAT_00110370 = _LC621;
  String::parse_utf32((String *)&DAT_00110378,L"Psalter Pahlavi");
  _DAT_00110388 = 0;
  _DAT_00110380 = _LC623;
  String::parse_utf32((String *)&DAT_00110388,L"Old Turkic");
  _DAT_00110398 = 0;
  _DAT_00110390 = _LC625;
  String::parse_utf32((String *)&DAT_00110398,L"Old Hungarian");
  _DAT_001103a8 = 0;
  _DAT_001103a0 = _LC627;
  String::parse_utf32((String *)&DAT_001103a8,L"Hanifi Rohingya");
  _DAT_001103b8 = 0;
  _DAT_001103b0 = _LC629;
  String::parse_utf32((String *)&DAT_001103b8,L"Garay");
  _DAT_001103c8 = 0;
  _DAT_001103c0 = _LC631;
  String::parse_utf32((String *)&DAT_001103c8,L"Rumi Numeral Symbols");
  _DAT_001103d8 = 0;
  _DAT_001103d0 = _LC633;
  String::parse_utf32((String *)&DAT_001103d8,L"Yezidi");
  _DAT_001103e8 = 0;
  _DAT_001103e0 = _LC635;
  String::parse_utf32((String *)&DAT_001103e8,L"Arabic Extended-C");
  _DAT_001103f8 = 0;
  _DAT_001103f0 = _LC637;
  String::parse_utf32((String *)&DAT_001103f8,L"Old Sogdian");
  _DAT_00110408 = 0;
  _DAT_00110400 = _LC639;
  String::parse_utf32((String *)&DAT_00110408,L"Sogdian");
  _DAT_00110418 = 0;
  _DAT_00110410 = _LC641;
  String::parse_utf32((String *)&DAT_00110418,L"Old Uyghur");
  _DAT_00110428 = 0;
  _DAT_00110420 = _LC643;
  String::parse_utf32((String *)&DAT_00110428,L"Chorasmian");
  _DAT_00110438 = 0;
  _DAT_00110430 = _LC645;
  String::parse_utf32((String *)&DAT_00110438,L"Elymaic");
  _DAT_00110448 = 0;
  _DAT_00110440 = _LC647;
  String::parse_utf32((String *)&DAT_00110448,L"Brahmi");
  _DAT_00110458 = 0;
  _DAT_00110450 = _LC649;
  String::parse_utf32((String *)&DAT_00110458,L"Kaithi");
  _DAT_00110468 = 0;
  _DAT_00110460 = _LC651;
  String::parse_utf32((String *)&DAT_00110468,L"Sora Sompeng");
  _DAT_00110478 = 0;
  _DAT_00110470 = _LC653;
  String::parse_utf32((String *)&DAT_00110478,L"Chakma");
  _DAT_00110488 = 0;
  _DAT_00110480 = _LC655;
  String::parse_utf32((String *)&DAT_00110488,L"Mahajani");
  _DAT_00110498 = 0;
  _DAT_00110490 = _LC657;
  String::parse_utf32((String *)&DAT_00110498,L"Sharada");
  _DAT_001104a8 = 0;
  _DAT_001104a0 = _LC659;
  String::parse_utf32((String *)&DAT_001104a8,L"Sinhala Archaic Numbers");
  _DAT_001104b8 = 0;
  _DAT_001104b0 = _LC661;
  String::parse_utf32((String *)&DAT_001104b8,L"Khojki");
  _DAT_001104c8 = 0;
  _DAT_001104c0 = _LC663;
  String::parse_utf32((String *)&DAT_001104c8,L"Multani");
  _DAT_001104d8 = 0;
  _DAT_001104d0 = _LC665;
  String::parse_utf32((String *)&DAT_001104d8,L"Khudawadi");
  _DAT_001104e8 = 0;
  _DAT_001104e0 = _LC667;
  String::parse_utf32((String *)&DAT_001104e8,L"Grantha");
  _DAT_001104f8 = 0;
  _DAT_001104f0 = _LC669;
  String::parse_utf32((String *)&DAT_001104f8,L"Tulu-Tigalari");
  _DAT_00110508 = 0;
  _DAT_00110500 = _LC671;
  String::parse_utf32((String *)&DAT_00110508,L"Newa");
  _DAT_00110518 = 0;
  _DAT_00110510 = _LC673;
  String::parse_utf32((String *)&DAT_00110518,L"Tirhuta");
  _DAT_00110528 = 0;
  _DAT_00110520 = _LC675;
  String::parse_utf32((String *)&DAT_00110528,L"Siddham");
  _DAT_00110538 = 0;
  _DAT_00110530 = _LC677;
  String::parse_utf32((String *)&DAT_00110538,L"Modi");
  _DAT_00110548 = 0;
  _DAT_00110540 = _LC679;
  String::parse_utf32((String *)&DAT_00110548,L"Mongolian Supplement");
  _DAT_00110558 = 0;
  _DAT_00110550 = _LC681;
  String::parse_utf32((String *)&DAT_00110558,L"Takri");
  _DAT_00110568 = 0;
  _DAT_00110560 = _LC683;
  String::parse_utf32((String *)&DAT_00110568,L"Myanmar Extended-C");
  _DAT_00110578 = 0;
  _DAT_00110570 = _LC685;
  String::parse_utf32((String *)&DAT_00110578,L"Ahom");
  _DAT_00110588 = 0;
  _DAT_00110580 = _LC687;
  String::parse_utf32((String *)&DAT_00110588,L"Dogra");
  _DAT_00110598 = 0;
  _DAT_00110590 = _LC689;
  String::parse_utf32((String *)&DAT_00110598,L"Warang Citi");
  _DAT_001105a8 = 0;
  _DAT_001105a0 = _LC691;
  String::parse_utf32((String *)&DAT_001105a8,L"Dives Akuru");
  _DAT_001105b8 = 0;
  _DAT_001105b0 = _LC693;
  String::parse_utf32((String *)&DAT_001105b8,L"Nandinagari");
  _DAT_001105c8 = 0;
  _DAT_001105c0 = _LC695;
  String::parse_utf32((String *)&DAT_001105c8,L"Zanabazar Square");
  _DAT_001105d8 = 0;
  _DAT_001105d0 = _LC697;
  String::parse_utf32((String *)&DAT_001105d8,L"Soyombo");
  _DAT_001105e8 = 0;
  _DAT_001105e0 = _LC699;
  String::parse_utf32((String *)&DAT_001105e8,L"Unified Canadian Aboriginal Syllabics Extended-A");
  _DAT_001105f8 = 0;
  _DAT_001105f0 = _LC701;
  String::parse_utf32((String *)&DAT_001105f8,L"Pau Cin Hau");
  _DAT_00110608 = 0;
  _DAT_00110600 = _LC703;
  String::parse_utf32((String *)&DAT_00110608,L"Devanagari Extended-A");
  _DAT_00110618 = 0;
  _DAT_00110610 = _LC705;
  String::parse_utf32((String *)&DAT_00110618,L"Sunuwar");
  _DAT_00110628 = 0;
  _DAT_00110620 = _LC707;
  String::parse_utf32((String *)&DAT_00110628,L"Bhaiksuki");
  _DAT_00110638 = 0;
  _DAT_00110630 = _LC709;
  String::parse_utf32((String *)&DAT_00110638,L"Marchen");
  _DAT_00110648 = 0;
  _DAT_00110640 = _LC711;
  String::parse_utf32((String *)&DAT_00110648,L"Masaram Gondi");
  _DAT_00110658 = 0;
  _DAT_00110650 = _LC713;
  String::parse_utf32((String *)&DAT_00110658,L"Gunjala Gondi");
  _DAT_00110668 = 0;
  _DAT_00110660 = _LC715;
  String::parse_utf32((String *)&DAT_00110668,L"Makasar");
  _DAT_00110678 = 0;
  _DAT_00110670 = _LC717;
  String::parse_utf32((String *)&DAT_00110678,L"Kawi");
  _DAT_00110688 = 0;
  _DAT_00110680 = _LC719;
  String::parse_utf32((String *)&DAT_00110688,L"Lisu Supplement");
  _DAT_00110698 = 0;
  _DAT_00110690 = _LC721;
  String::parse_utf32((String *)&DAT_00110698,L"Tamil Supplement");
  _DAT_001106a8 = 0;
  _DAT_001106a0 = _LC723;
  String::parse_utf32((String *)&DAT_001106a8,L"Cuneiform");
  _DAT_001106b8 = 0;
  _DAT_001106b0 = _LC725;
  String::parse_utf32((String *)&DAT_001106b8,L"Cuneiform Numbers and Punctuation");
  _DAT_001106c8 = 0;
  _DAT_001106c0 = _LC727;
  String::parse_utf32((String *)&DAT_001106c8,L"Early Dynastic Cuneiform");
  _DAT_001106d8 = 0;
  _DAT_001106d0 = _LC729;
  String::parse_utf32((String *)&DAT_001106d8,L"Cypro-Minoan");
  _DAT_001106e8 = 0;
  _DAT_001106e0 = _LC731;
  String::parse_utf32((String *)&DAT_001106e8,L"Egyptian Hieroglyphs");
  _DAT_001106f8 = 0;
  _DAT_001106f0 = _LC733;
  String::parse_utf32((String *)&DAT_001106f8,L"Egyptian Hieroglyph Format Controls");
  _DAT_00110708 = 0;
  _DAT_00110700 = _LC735;
  String::parse_utf32((String *)&DAT_00110708,L"Egyptian Hieroglyphs Extended-A");
  _DAT_00110718 = 0;
  _DAT_00110710 = _LC737;
  String::parse_utf32((String *)&DAT_00110718,L"Anatolian Hieroglyphs");
  _DAT_00110728 = 0;
  _DAT_00110720 = _LC739;
  String::parse_utf32((String *)&DAT_00110728,L"Gurung Khema");
  _DAT_00110738 = 0;
  _DAT_00110730 = _LC741;
  String::parse_utf32((String *)&DAT_00110738,L"Bamum Supplement");
  _DAT_00110748 = 0;
  _DAT_00110740 = _LC743;
  String::parse_utf32((String *)&DAT_00110748,L"Mro");
  _DAT_00110758 = 0;
  _DAT_00110750 = _LC745;
  String::parse_utf32((String *)&DAT_00110758,L"Tangsa");
  _DAT_00110768 = 0;
  _DAT_00110760 = _LC747;
  String::parse_utf32((String *)&DAT_00110768,L"Bassa Vah");
  _DAT_00110778 = 0;
  _DAT_00110770 = _LC749;
  String::parse_utf32((String *)&DAT_00110778,L"Pahawh Hmong");
  _DAT_00110788 = 0;
  _DAT_00110780 = _LC751;
  String::parse_utf32((String *)&DAT_00110788,L"Kirat Rai");
  _DAT_00110798 = 0;
  _DAT_00110790 = _LC753;
  String::parse_utf32((String *)&DAT_00110798,L"Medefaidrin");
  _DAT_001107a8 = 0;
  _DAT_001107a0 = _LC755;
  String::parse_utf32((String *)&DAT_001107a8,L"Miao");
  _DAT_001107b8 = 0;
  _DAT_001107b0 = _LC757;
  String::parse_utf32((String *)&DAT_001107b8,L"Ideographic Symbols and Punctuation");
  _DAT_001107c8 = 0;
  _DAT_001107c0 = _LC759;
  String::parse_utf32((String *)&DAT_001107c8,L"Tangut");
  _DAT_001107d8 = 0;
  _DAT_001107d0 = _LC761;
  String::parse_utf32((String *)&DAT_001107d8,L"Tangut Components");
  _DAT_001107e8 = 0;
  _DAT_001107e0 = _LC763;
  String::parse_utf32((String *)&DAT_001107e8,L"Khitan Small Script");
  _DAT_001107f8 = 0;
  _DAT_001107f0 = _LC765;
  String::parse_utf32((String *)&DAT_001107f8,L"Tangut Supplement");
  _DAT_00110808 = 0;
  _DAT_00110800 = _LC767;
  String::parse_utf32((String *)&DAT_00110808,L"Kana Extended-B");
  _DAT_00110818 = 0;
  _DAT_00110810 = _LC769;
  String::parse_utf32((String *)&DAT_00110818,L"Kana Supplement");
  _DAT_00110828 = 0;
  _DAT_00110820 = _LC771;
  String::parse_utf32((String *)&DAT_00110828,L"Kana Extended-A");
  _DAT_00110838 = 0;
  _DAT_00110830 = _LC773;
  String::parse_utf32((String *)&DAT_00110838,L"Small Kana Extension");
  _DAT_00110848 = 0;
  _DAT_00110840 = _LC775;
  String::parse_utf32((String *)&DAT_00110848,L"Nushu");
  _DAT_00110858 = 0;
  _DAT_00110850 = _LC777;
  String::parse_utf32((String *)&DAT_00110858,L"Duployan");
  _DAT_00110868 = 0;
  _DAT_00110860 = _LC779;
  String::parse_utf32((String *)&DAT_00110868,L"Shorthand Format Controls");
  _DAT_00110878 = 0;
  _DAT_00110870 = _LC781;
  String::parse_utf32((String *)&DAT_00110878,L"Symbols for Legacy Computing Supplement");
  _DAT_00110888 = 0;
  _DAT_00110880 = _LC783;
  String::parse_utf32((String *)&DAT_00110888,L"Znamenny Musical Notation");
  _DAT_00110898 = 0;
  _DAT_00110890 = _LC785;
  String::parse_utf32((String *)&DAT_00110898,L"Byzantine Musical Symbols");
  _DAT_001108a8 = 0;
  _DAT_001108a0 = _LC787;
  String::parse_utf32((String *)&DAT_001108a8,L"Musical Symbols");
  _DAT_001108b8 = 0;
  _DAT_001108b0 = _LC789;
  String::parse_utf32((String *)&DAT_001108b8,L"Ancient Greek Musical Notation");
  _DAT_001108c8 = 0;
  _DAT_001108c0 = _LC791;
  String::parse_utf32((String *)&DAT_001108c8,L"Kaktovik Numerals");
  _DAT_001108d8 = 0;
  _DAT_001108d0 = _LC793;
  String::parse_utf32((String *)&DAT_001108d8,L"Mayan Numerals");
  _DAT_001108e8 = 0;
  _DAT_001108e0 = _LC795;
  String::parse_utf32((String *)&DAT_001108e8,L"Tai Xuan Jing Symbols");
  _DAT_001108f8 = 0;
  _DAT_001108f0 = _LC797;
  String::parse_utf32((String *)&DAT_001108f8,L"Counting Rod Numerals");
  _DAT_00110908 = 0;
  _DAT_00110900 = _LC799;
  String::parse_utf32((String *)&DAT_00110908,L"Mathematical Alphanumeric Symbols");
  _DAT_00110918 = 0;
  _DAT_00110910 = _LC801;
  String::parse_utf32((String *)&DAT_00110918,L"Sutton SignWriting");
  _DAT_00110928 = 0;
  _DAT_00110920 = _LC803;
  String::parse_utf32((String *)&DAT_00110928,L"Latin Extended-G");
  _DAT_00110938 = 0;
  _DAT_00110930 = _LC805;
  String::parse_utf32((String *)&DAT_00110938,L"Glagolitic Supplement");
  _DAT_00110948 = 0;
  _DAT_00110940 = _LC807;
  String::parse_utf32((String *)&DAT_00110948,L"Cyrillic Extended-D");
  _DAT_00110958 = 0;
  _DAT_00110950 = _LC809;
  String::parse_utf32((String *)&DAT_00110958,L"Nyiakeng Puachue Hmong");
  _DAT_00110968 = 0;
  _DAT_00110960 = _LC811;
  String::parse_utf32((String *)&DAT_00110968,L"Toto");
  _DAT_00110978 = 0;
  _DAT_00110970 = _LC813;
  String::parse_utf32((String *)&DAT_00110978,L"Wancho");
  _DAT_00110988 = 0;
  _DAT_00110980 = _LC815;
  String::parse_utf32((String *)&DAT_00110988,L"Nag Mundari");
  _DAT_00110998 = 0;
  _DAT_00110990 = _LC817;
  String::parse_utf32((String *)&DAT_00110998,L"Ol Onal");
  _DAT_001109a8 = 0;
  _DAT_001109a0 = _LC819;
  String::parse_utf32((String *)&DAT_001109a8,L"Ethiopic Extended-B");
  _DAT_001109b8 = 0;
  _DAT_001109b0 = _LC821;
  String::parse_utf32((String *)&DAT_001109b8,L"Mende Kikakui");
  _DAT_001109c8 = 0;
  _DAT_001109c0 = _LC823;
  String::parse_utf32((String *)&DAT_001109c8,L"Adlam");
  _DAT_001109d8 = 0;
  _DAT_001109d0 = _LC825;
  String::parse_utf32((String *)&DAT_001109d8,L"Indic Siyaq Numbers");
  _DAT_001109e8 = 0;
  _DAT_001109e0 = _LC827;
  String::parse_utf32((String *)&DAT_001109e8,L"Ottoman Siyaq Numbers");
  _DAT_001109f8 = 0;
  _DAT_001109f0 = _LC829;
  String::parse_utf32((String *)&DAT_001109f8,L"Arabic Mathematical Alphabetic Symbols");
  _DAT_00110a08 = 0;
  _DAT_00110a00 = _LC831;
  String::parse_utf32((String *)&DAT_00110a08,L"Mahjong Tiles");
  _DAT_00110a18 = 0;
  _DAT_00110a10 = _LC833;
  String::parse_utf32((String *)&DAT_00110a18,L"Domino Tiles");
  _DAT_00110a28 = 0;
  _DAT_00110a20 = _LC835;
  String::parse_utf32((String *)&DAT_00110a28,L"Playing Cards");
  _DAT_00110a38 = 0;
  _DAT_00110a30 = _LC837;
  String::parse_utf32((String *)&DAT_00110a38,L"Enclosed Alphanumeric Supplement");
  _DAT_00110a48 = 0;
  _DAT_00110a40 = _LC839;
  String::parse_utf32((String *)&DAT_00110a48,L"Enclosed Ideographic Supplement");
  _DAT_00110a58 = 0;
  _DAT_00110a50 = _LC841;
  String::parse_utf32((String *)&DAT_00110a58,L"Miscellaneous Symbols and Pictographs");
  _DAT_00110a68 = 0;
  _DAT_00110a60 = _LC843;
  String::parse_utf32((String *)&DAT_00110a68,L"Emoticons");
  _DAT_00110a78 = 0;
  _DAT_00110a70 = _LC845;
  String::parse_utf32((String *)&DAT_00110a78,L"Ornamental Dingbats");
  _DAT_00110a88 = 0;
  _DAT_00110a80 = _LC847;
  String::parse_utf32((String *)&DAT_00110a88,L"Transport and Map Symbols");
  _DAT_00110a98 = 0;
  _DAT_00110a90 = _LC849;
  String::parse_utf32((String *)&DAT_00110a98,L"Alchemical Symbols");
  _DAT_00110aa8 = 0;
  _DAT_00110aa0 = _LC851;
  String::parse_utf32((String *)&DAT_00110aa8,L"Geometric Shapes Extended");
  _DAT_00110ab8 = 0;
  _DAT_00110ab0 = _LC853;
  String::parse_utf32((String *)&DAT_00110ab8,L"Supplemental Arrows-C");
  _DAT_00110ac8 = 0;
  _DAT_00110ac0 = _LC855;
  String::parse_utf32((String *)&DAT_00110ac8,L"Supplemental Symbols and Pictographs");
  _DAT_00110ad8 = 0;
  _DAT_00110ad0 = _LC857;
  String::parse_utf32((String *)&DAT_00110ad8,L"Chess Symbols");
  _DAT_00110ae8 = 0;
  _DAT_00110ae0 = _LC859;
  String::parse_utf32((String *)&DAT_00110ae8,L"Symbols and Pictographs Extended-A");
  _DAT_00110af8 = 0;
  _DAT_00110af0 = _LC861;
  String::parse_utf32((String *)&DAT_00110af8,L"Symbols for Legacy Computing");
  _DAT_00110b08 = 0;
  _DAT_00110b00 = _LC863;
  String::parse_utf32((String *)&DAT_00110b08,L"CJK Unified Ideographs Extension B");
  _DAT_00110b18 = 0;
  _DAT_00110b10 = _LC865;
  String::parse_utf32((String *)&DAT_00110b18,L"CJK Unified Ideographs Extension C");
  _DAT_00110b28 = 0;
  _DAT_00110b20 = _LC867;
  String::parse_utf32((String *)&DAT_00110b28,L"CJK Unified Ideographs Extension D");
  _DAT_00110b38 = 0;
  _DAT_00110b30 = _LC869;
  String::parse_utf32((String *)&DAT_00110b38,L"CJK Unified Ideographs Extension E");
  _DAT_00110b48 = 0;
  _DAT_00110b40 = _LC871;
  String::parse_utf32((String *)&DAT_00110b48,L"CJK Unified Ideographs Extension F");
  _DAT_00110b58 = 0;
  _DAT_00110b50 = _LC873;
  String::parse_utf32((String *)&DAT_00110b58,L"CJK Unified Ideographs Extension I");
  _DAT_00110b68 = 0;
  _DAT_00110b60 = _LC875;
  String::parse_utf32((String *)&DAT_00110b68,L"CJK Compatibility Ideographs Supplement");
  _DAT_00110b78 = 0;
  _DAT_00110b70 = _LC877;
  String::parse_utf32((String *)&DAT_00110b78,L"CJK Unified Ideographs Extension G");
  _DAT_00110b88 = 0;
  _DAT_00110b80 = _LC879;
  String::parse_utf32((String *)&DAT_00110b88,L"CJK Unified Ideographs Extension H");
  _DAT_00110b98 = 0;
  _DAT_00110b90 = _LC881;
  String::parse_utf32((String *)&DAT_00110b98,L"Supplementary Private Use Area-A");
  DAT_00110ba8 = 0;
  _DAT_00110ba0 = _LC883;
  String::parse_utf32((String *)&DAT_00110ba8,L"Supplementary Private Use Area-B");
  DAT_00110bb8 = 0;
  _DAT_00110bb0 = _LC885;
  __cxa_atexit(__tcf_0,0,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* DynamicFontImportSettingsDialog::~DynamicFontImportSettingsDialog() */

void __thiscall
DynamicFontImportSettingsDialog::~DynamicFontImportSettingsDialog
          (DynamicFontImportSettingsDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DynamicFontImportSettingsData::~DynamicFontImportSettingsData() */

void __thiscall
DynamicFontImportSettingsData::~DynamicFontImportSettingsData(DynamicFontImportSettingsData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::~List
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this)

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
/* ResourceImporter::ImportOption::~ImportOption() */

void __thiscall ResourceImporter::ImportOption::~ImportOption(ImportOption *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DynamicFontImportSettingsDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DynamicFontImportSettingsDialog,void,Object*,int,int,MouseButton>
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
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


