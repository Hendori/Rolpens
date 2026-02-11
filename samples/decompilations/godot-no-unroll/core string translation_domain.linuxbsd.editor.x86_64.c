
/* TranslationDomain::is_pseudolocalization_enabled() const */

TranslationDomain __thiscall
TranslationDomain::is_pseudolocalization_enabled(TranslationDomain *this)

{
  return this[0x1a8];
}



/* TranslationDomain::set_pseudolocalization_enabled(bool) */

void __thiscall
TranslationDomain::set_pseudolocalization_enabled(TranslationDomain *this,bool param_1)

{
  this[0x1a8] = (TranslationDomain)param_1;
  return;
}



/* TranslationDomain::is_pseudolocalization_accents_enabled() const */

TranslationDomain __thiscall
TranslationDomain::is_pseudolocalization_accents_enabled(TranslationDomain *this)

{
  return this[0x1a9];
}



/* TranslationDomain::set_pseudolocalization_accents_enabled(bool) */

void __thiscall
TranslationDomain::set_pseudolocalization_accents_enabled(TranslationDomain *this,bool param_1)

{
  this[0x1a9] = (TranslationDomain)param_1;
  return;
}



/* TranslationDomain::is_pseudolocalization_double_vowels_enabled() const */

TranslationDomain __thiscall
TranslationDomain::is_pseudolocalization_double_vowels_enabled(TranslationDomain *this)

{
  return this[0x1aa];
}



/* TranslationDomain::set_pseudolocalization_double_vowels_enabled(bool) */

void __thiscall
TranslationDomain::set_pseudolocalization_double_vowels_enabled
          (TranslationDomain *this,bool param_1)

{
  this[0x1aa] = (TranslationDomain)param_1;
  return;
}



/* TranslationDomain::is_pseudolocalization_fake_bidi_enabled() const */

TranslationDomain __thiscall
TranslationDomain::is_pseudolocalization_fake_bidi_enabled(TranslationDomain *this)

{
  return this[0x1ab];
}



/* TranslationDomain::set_pseudolocalization_fake_bidi_enabled(bool) */

void __thiscall
TranslationDomain::set_pseudolocalization_fake_bidi_enabled(TranslationDomain *this,bool param_1)

{
  this[0x1ab] = (TranslationDomain)param_1;
  return;
}



/* TranslationDomain::is_pseudolocalization_override_enabled() const */

TranslationDomain __thiscall
TranslationDomain::is_pseudolocalization_override_enabled(TranslationDomain *this)

{
  return this[0x1ac];
}



/* TranslationDomain::set_pseudolocalization_override_enabled(bool) */

void __thiscall
TranslationDomain::set_pseudolocalization_override_enabled(TranslationDomain *this,bool param_1)

{
  this[0x1ac] = (TranslationDomain)param_1;
  return;
}



/* TranslationDomain::is_pseudolocalization_skip_placeholders_enabled() const */

TranslationDomain __thiscall
TranslationDomain::is_pseudolocalization_skip_placeholders_enabled(TranslationDomain *this)

{
  return this[0x1ad];
}



/* TranslationDomain::set_pseudolocalization_skip_placeholders_enabled(bool) */

void __thiscall
TranslationDomain::set_pseudolocalization_skip_placeholders_enabled
          (TranslationDomain *this,bool param_1)

{
  this[0x1ad] = (TranslationDomain)param_1;
  return;
}



/* TranslationDomain::get_pseudolocalization_expansion_ratio() const */

undefined4 __thiscall
TranslationDomain::get_pseudolocalization_expansion_ratio(TranslationDomain *this)

{
  return *(undefined4 *)(this + 0x1b0);
}



/* TranslationDomain::set_pseudolocalization_expansion_ratio(float) */

void __thiscall
TranslationDomain::set_pseudolocalization_expansion_ratio(TranslationDomain *this,float param_1)

{
  *(float *)(this + 0x1b0) = param_1;
  return;
}



/* TranslationDomain::clear() */

void __thiscall TranslationDomain::clear(TranslationDomain *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x180);
  if ((lVar5 == 0) || (*(int *)(this + 0x1a4) == 0)) {
    return;
  }
  if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) != 0) &&
     (memset(*(void **)(this + 0x198),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) << 2),
     *(int *)(this + 0x1a4) == 0)) {
LAB_001001a0:
    *(undefined4 *)(this + 0x1a4) = 0;
    return;
  }
  lVar4 = 0;
  do {
    plVar1 = (long *)(lVar5 + lVar4 * 8);
    if ((*plVar1 == 0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) {
LAB_00100140:
      if (*(uint *)(this + 0x1a4) <= (int)lVar4 + 1U) goto LAB_001001a0;
    }
    else {
      pOVar2 = (Object *)*plVar1;
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 == '\0') goto LAB_00100140;
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      if (*(uint *)(this + 0x1a4) <= (int)lVar4 + 1U) goto LAB_001001a0;
    }
    lVar4 = lVar4 + 1;
    lVar5 = *(long *)(this + 0x180);
  } while( true );
}



/* TranslationDomain::remove_translation(Ref<Translation> const&) */

void __thiscall TranslationDomain::remove_translation(TranslationDomain *this,Ref *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Object *pOVar10;
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
  char cVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  uint *puVar40;
  long *plVar41;
  ulong uVar42;
  uint *puVar43;
  ulong uVar44;
  ulong uVar45;
  uint uVar46;
  
  lVar5 = *(long *)(this + 0x180);
  if ((lVar5 != 0) && (*(int *)(this + 0x1a4) != 0)) {
    lVar6 = *(long *)(this + 0x198);
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
    uVar44 = CONCAT44(0,uVar32);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar33 = *(long *)param_1 * 0x3ffff - 1;
    uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
    uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
    uVar33 = uVar33 >> 0x16 ^ uVar33;
    uVar42 = uVar33 & 0xffffffff;
    if ((int)uVar33 == 0) {
      uVar42 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar42 * lVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar44;
    lVar38 = SUB168(auVar11 * auVar21,8);
    uVar46 = *(uint *)(lVar6 + lVar38 * 4);
    iVar36 = SUB164(auVar11 * auVar21,8);
    if (uVar46 != 0) {
      uVar34 = 0;
      do {
        if (uVar46 == (uint)uVar42) {
          lVar8 = *(long *)(this + 0x188);
          uVar46 = *(uint *)(lVar8 + lVar38 * 4);
          uVar33 = (ulong)uVar46;
          if (*(long *)param_1 == *(long *)(lVar5 + uVar33 * 8)) {
            lVar9 = *(long *)(this + 400);
            uVar34 = *(uint *)(lVar9 + uVar33 * 4);
            uVar42 = (ulong)uVar34;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar34 + 1) * lVar7;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar44;
            lVar38 = SUB168(auVar15 * auVar25,8) * 4;
            uVar37 = SUB164(auVar15 * auVar25,8);
            uVar45 = (ulong)uVar37;
            puVar40 = (uint *)(lVar6 + lVar38);
            if ((*puVar40 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar40 * lVar7, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar44, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar37 + uVar32) - SUB164(auVar16 * auVar26,8)) * lVar7,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar44, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar45 = (ulong)uVar34;
            }
            else {
              while( true ) {
                puVar35 = (uint *)(lVar38 + lVar8);
                puVar3 = (uint *)(lVar8 + uVar42 * 4);
                puVar43 = (uint *)(uVar42 * 4 + lVar6);
                puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar35 * 4);
                puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
                uVar4 = *puVar2;
                *puVar2 = *puVar1;
                *puVar1 = uVar4;
                uVar34 = *puVar40;
                *puVar40 = *puVar43;
                *puVar43 = uVar34;
                uVar34 = *puVar35;
                *puVar35 = *puVar3;
                *puVar3 = uVar34;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar45 + 1) * lVar7;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar44;
                uVar39 = SUB168(auVar20 * auVar30,8);
                lVar38 = uVar39 * 4;
                puVar40 = (uint *)(lVar6 + lVar38);
                if ((*puVar40 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar40 * lVar7, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar44, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar32) - SUB164(auVar18 * auVar28,8)
                               ) * lVar7, auVar29._8_8_ = 0, auVar29._0_8_ = uVar44,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar42 = uVar45;
                uVar45 = uVar39 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar6 + uVar45 * 4) = 0;
            plVar41 = (long *)(lVar5 + uVar33 * 8);
            if ((*plVar41 != 0) && (cVar31 = RefCounted::unreference(), cVar31 != '\0')) {
              pOVar10 = (Object *)*plVar41;
              cVar31 = predelete_handler(pOVar10);
              if (cVar31 != '\0') {
                (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                Memory::free_static(pOVar10,false);
              }
            }
            uVar32 = *(int *)(this + 0x1a4) - 1;
            uVar42 = (ulong)uVar32;
            *(uint *)(this + 0x1a4) = uVar32;
            if (uVar32 <= uVar46) {
              return;
            }
            lVar5 = *(long *)(this + 0x180);
            plVar41 = (long *)(uVar33 * 8 + lVar5);
            *plVar41 = 0;
            lVar5 = *(long *)(lVar5 + uVar42 * 8);
            if (lVar5 != 0) {
              *plVar41 = lVar5;
              cVar31 = RefCounted::reference();
              if (cVar31 == '\0') {
                *plVar41 = 0;
              }
              uVar42 = (ulong)*(uint *)(this + 0x1a4);
              plVar41 = (long *)(*(long *)(this + 0x180) + uVar42 * 8);
              if (*plVar41 != 0) {
                cVar31 = RefCounted::unreference();
                if (cVar31 != '\0') {
                  pOVar10 = (Object *)*plVar41;
                  cVar31 = predelete_handler(pOVar10);
                  if (cVar31 != '\0') {
                    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                    Memory::free_static(pOVar10,false);
                    uVar42 = (ulong)*(uint *)(this + 0x1a4);
                    goto LAB_001004bf;
                  }
                }
                uVar42 = (ulong)*(uint *)(this + 0x1a4);
              }
            }
LAB_001004bf:
            lVar5 = *(long *)(this + 400);
            *(undefined4 *)(lVar5 + uVar33 * 4) = *(undefined4 *)(lVar5 + uVar42 * 4);
            *(uint *)(*(long *)(this + 0x188) +
                     (ulong)*(uint *)(lVar5 + (ulong)*(uint *)(this + 0x1a4) * 4) * 4) = uVar46;
            return;
          }
        }
        uVar34 = uVar34 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar36 + 1) * lVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar44;
        lVar38 = SUB168(auVar12 * auVar22,8);
        uVar46 = *(uint *)(lVar6 + lVar38 * 4);
        iVar36 = SUB164(auVar12 * auVar22,8);
      } while ((uVar46 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar46 * lVar7, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar44, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar32 + iVar36) - SUB164(auVar13 * auVar23,8)) * lVar7,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar44, uVar34 <= SUB164(auVar14 * auVar24,8)));
    }
  }
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



/* TranslationDomain::set_pseudolocalization_prefix(String const&) */

void __thiscall
TranslationDomain::set_pseudolocalization_prefix(TranslationDomain *this,String *param_1)

{
  if (*(long *)(this + 0x1b8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b8),(CowData *)param_1);
    return;
  }
  return;
}



/* TranslationDomain::set_pseudolocalization_suffix(String const&) */

void __thiscall
TranslationDomain::set_pseudolocalization_suffix(TranslationDomain *this,String *param_1)

{
  if (*(long *)(this + 0x1c0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1c0),(CowData *)param_1);
    return;
  }
  return;
}



/* TranslationDomain::get_pseudolocalization_suffix() const */

void TranslationDomain::get_pseudolocalization_suffix(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1c0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1c0));
  }
  return;
}



/* TranslationDomain::get_pseudolocalization_prefix() const */

void TranslationDomain::get_pseudolocalization_prefix(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1b8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1b8));
  }
  return;
}



/* TranslationDomain::get_translation_object(String const&) const */

String * TranslationDomain::get_translation_object(String *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
  String *pSVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  String *in_RDX;
  long lVar11;
  long lVar12;
  long in_RSI;
  int iVar13;
  long in_FS_OFFSET;
  bool bVar14;
  long *plVar15;
  long local_48;
  long local_40;
  
  iVar2 = *(int *)(in_RSI + 0x1a4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if (iVar2 == 0) {
LAB_00100832:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  plVar3 = *(long **)(in_RSI + 0x180);
  lVar12 = 0;
  iVar13 = 0;
  plVar15 = &local_48;
  lVar11 = *plVar3;
  if (lVar11 == 0) goto LAB_00100872;
  do {
    pSVar7 = TranslationServer::singleton;
    local_48 = 0;
    plVar1 = (long *)(*(long *)(lVar11 + 0x240) + -0x10);
    if (*(long *)(lVar11 + 0x240) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_0010079d;
        LOCK();
        lVar10 = *plVar1;
        bVar14 = lVar4 == lVar10;
        if (bVar14) {
          *plVar1 = lVar4 + 1;
          lVar10 = lVar4;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar10 != -1) {
        local_48 = *(long *)(lVar11 + 0x240);
      }
    }
LAB_0010079d:
    iVar9 = TranslationServer::compare_locales(pSVar7,in_RDX);
    lVar11 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    if ((0 < iVar9) && (iVar13 <= iVar9)) {
      pOVar5 = (Object *)plVar3[lVar12];
      pOVar6 = *(Object **)param_1;
      if (pOVar5 != pOVar6) {
        *(Object **)param_1 = pOVar5;
        if ((pOVar5 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          *(undefined8 *)param_1 = 0;
        }
        if (((pOVar6 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(pOVar6), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      iVar13 = iVar9;
      if (iVar9 == 10) goto LAB_00100832;
    }
    while( true ) {
      if (iVar2 <= (int)lVar12 + 1) goto LAB_00100832;
      lVar12 = lVar12 + 1;
      lVar11 = plVar3[lVar12];
      if (lVar11 != 0) break;
LAB_00100872:
      _err_print_error("get_translation_object","core/string/translation_domain.cpp",0x107,
                       "Condition \"E.is_null()\" is true. Continuing.",0,0,plVar15);
    }
  } while( true );
}



/* TranslationDomain::_add_padding(String const&, int) const */

String * TranslationDomain::_add_padding(String *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC7;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::repeat((int)(String *)&local_70);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::operator+((String *)&local_68,(String *)(CONCAT44(in_register_00000034,param_2) + 0x1b8));
  String::operator+((String *)&local_60,(String *)&local_70);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+(param_1,(String *)&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationDomain::_get_accented_version(char32_t) const */

undefined * __thiscall
TranslationDomain::_get_accented_version(TranslationDomain *this,wchar32 param_1)

{
  uint uVar1;
  ulong uVar2;
  wchar32 *pwVar3;
  
  if ((uint)((param_1 & 0xffffffdfU) - 0x41U) < 0x1a) {
    uVar2 = 0;
    pwVar3 = &_character_to_accented;
    do {
      if (param_1 == *pwVar3) {
        return (&PTR_DAT_00111ce8)[uVar2 * 2];
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      pwVar3 = pwVar3 + 4;
    } while (uVar1 != 0x34);
  }
  return (undefined *)0x0;
}



/* TranslationDomain::_is_placeholder(String const&, int) const */

ulong __thiscall
TranslationDomain::_is_placeholder(TranslationDomain *this,String *param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  
  lVar1 = *(long *)param_1;
  if (lVar1 == 0) {
    if (-2 < param_2) {
      return 0;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = *(ulong *)(lVar1 + -8);
    if ((int)uVar6 != 0) {
      if ((int)uVar6 + -2 <= param_2) {
        return 0;
      }
      uVar4 = (ulong)param_2;
      if (uVar6 == uVar4) {
        piVar5 = (int *)&String::_null;
      }
      else {
        if (((long)uVar4 < 0) || ((long)uVar6 <= (long)uVar4)) goto LAB_00100b6b;
        piVar5 = (int *)(lVar1 + uVar4 * 4);
      }
      uVar4 = 0;
      if (*piVar5 == 0x25) {
        uVar4 = (ulong)(param_2 + 1);
        if (uVar4 == uVar6) {
          iVar3 = (int)String::_null;
          if (((int)String::_null - 0x58U < 0x21) &&
             (uVar4 = 1,
             (0xfffffffef77fe7feU >> ((ulong)((int)String::_null - 0x58U) & 0x3f) & 1) == 0))
          goto LAB_00100bd7;
        }
        else {
          if ((param_2 + 1 < 0) || ((long)uVar6 <= (long)uVar4)) goto LAB_00100b86;
          iVar3 = *(int *)(lVar1 + uVar4 * 4);
          if ((iVar3 - 0x58U < 0x21) &&
             ((0xfffffffef77fe7feU >> ((ulong)(iVar3 - 0x58U) & 0x3f) & 1) == 0)) {
            uVar4 = 1;
            goto LAB_00100bd7;
          }
        }
        uVar4 = CONCAT71((int7)(uVar4 >> 8),iVar3 == 0x66);
      }
LAB_00100bd7:
      return uVar4 & 0xffffffff;
    }
    if (-2 < param_2) {
      return 0;
    }
  }
LAB_00100b6b:
  uVar4 = (ulong)param_2;
LAB_00100b86:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar4,uVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* TranslationDomain::_get_override_string(String const&) const */

String * TranslationDomain::_get_override_string(String *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  wchar32 *pwVar5;
  long lVar6;
  String *in_RDX;
  int iVar7;
  TranslationDomain *in_RSI;
  long lVar8;
  
  iVar7 = 0;
  *(undefined8 *)param_1 = 0;
  do {
    if (*(long *)in_RDX == 0) {
      if (-1 < iVar7) {
        return param_1;
      }
    }
    else {
      iVar3 = (int)*(undefined8 *)(*(long *)in_RDX + -8);
      if ((int)(iVar3 + -1 + (uint)(iVar3 == 0)) <= iVar7) {
        return param_1;
      }
    }
    if ((in_RSI[0x1ad] == (TranslationDomain)0x0) ||
       (cVar2 = _is_placeholder(in_RSI,in_RDX,iVar7), cVar2 == '\0')) {
      String::operator+=(param_1,L'*');
    }
    else {
      lVar4 = *(long *)in_RDX;
      lVar6 = (long)iVar7;
      if (lVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar4 + -8);
      }
      if (lVar6 == lVar8) {
        String::operator+=(param_1,(wchar32)String::_null);
        lVar4 = *(long *)in_RDX;
        lVar6 = (long)(iVar7 + 1);
        if (lVar4 != 0) goto LAB_00100d49;
        lVar8 = 0;
      }
      else {
        if ((iVar7 < 0) || (lVar8 <= lVar6)) goto LAB_00100dd0;
        String::operator+=(param_1,*(wchar32 *)(lVar4 + lVar6 * 4));
        lVar4 = *(long *)in_RDX;
        lVar6 = (long)(iVar7 + 1);
        if (lVar4 == 0) {
          lVar8 = 0;
          goto LAB_00100dd0;
        }
LAB_00100d49:
        lVar8 = *(long *)(lVar4 + -8);
      }
      iVar7 = iVar7 + 1;
      if (lVar8 == lVar6) {
        pwVar5 = (wchar32 *)&String::_null;
      }
      else {
        if ((lVar8 <= lVar6) || (iVar7 < 0)) {
LAB_00100dd0:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pwVar5 = (wchar32 *)(lVar4 + lVar6 * 4);
      }
      String::operator+=(param_1,*pwVar5);
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



/* TranslationDomain::_double_vowels(String const&) const */

String * TranslationDomain::_double_vowels(String *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  wchar32 *pwVar5;
  String *in_RDX;
  int iVar6;
  long lVar7;
  wchar32 wVar8;
  TranslationDomain *in_RSI;
  long lVar9;
  
  iVar6 = 0;
  *(undefined8 *)param_1 = 0;
  lVar4 = *(long *)in_RDX;
  if (lVar4 == 0) goto LAB_00100f4b;
LAB_00100e8d:
  iVar3 = (int)*(undefined8 *)(lVar4 + -8);
  if (iVar3 == 0) {
    if (iVar6 < 0) {
LAB_00100ea1:
      lVar7 = (long)iVar6;
      if (in_RSI[0x1ad] != (TranslationDomain)0x0) goto LAB_00100fc0;
LAB_00100eb2:
      lVar9 = *(long *)(lVar4 + -8);
      do {
        if (lVar9 == lVar7) {
          pwVar5 = (wchar32 *)&String::_null;
        }
        else {
          if ((lVar9 <= lVar7) || (iVar6 < 0)) goto LAB_00100f5f;
          pwVar5 = (wchar32 *)(lVar4 + lVar7 * 4);
        }
        String::operator+=(param_1,*pwVar5);
        lVar4 = *(long *)in_RDX;
        if (lVar4 == 0) {
          if (iVar6 != 0) {
LAB_00100f5c:
            lVar9 = 0;
LAB_00100f5f:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
LAB_00101080:
          wVar8 = (wchar32)String::_null;
          if ((wchar32)String::_null == L'a') goto LAB_00100f30;
LAB_00100f03:
          if ((((((wVar8 == L'e') || (wVar8 == L'i')) || (wVar8 == L'o')) ||
               ((wVar8 == L'u' || (wVar8 == L'A')))) ||
              ((wVar8 == L'E' || ((wVar8 == L'I' || (wVar8 == L'O')))))) || (wVar8 == L'U'))
          goto LAB_00100f30;
        }
        else {
          lVar9 = *(long *)(lVar4 + -8);
          if (lVar9 == lVar7) goto LAB_00101080;
          if ((lVar9 <= lVar7) || (iVar6 < 0)) goto LAB_00100f5f;
          wVar8 = *(wchar32 *)(lVar4 + lVar7 * 4);
          if (wVar8 != L'a') goto LAB_00100f03;
LAB_00100f30:
          String::operator+=(param_1,wVar8);
          lVar4 = *(long *)in_RDX;
        }
        while( true ) {
          iVar6 = iVar6 + 1;
          if (lVar4 != 0) goto LAB_00100e8d;
LAB_00100f4b:
          if (-1 < iVar6) {
            return param_1;
          }
          lVar7 = (long)iVar6;
          if (in_RSI[0x1ad] == (TranslationDomain)0x0) goto LAB_00100f5c;
LAB_00100fc0:
          cVar2 = _is_placeholder(in_RSI,in_RDX,iVar6);
          if (cVar2 == '\0') break;
          lVar4 = *(long *)in_RDX;
          if (lVar4 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(long *)(lVar4 + -8);
          }
          if (lVar9 == lVar7) {
            lVar7 = (long)(iVar6 + 1);
            String::operator+=(param_1,(wchar32)String::_null);
            lVar4 = *(long *)in_RDX;
            if (lVar4 != 0) goto LAB_00101017;
            lVar9 = 0;
          }
          else {
            if ((lVar9 <= lVar7) || (iVar6 < 0)) goto LAB_00100f5f;
            lVar9 = lVar7 * 4;
            lVar7 = (long)(iVar6 + 1);
            String::operator+=(param_1,*(wchar32 *)(lVar4 + lVar9));
            lVar4 = *(long *)in_RDX;
            if (lVar4 == 0) goto LAB_00100f5c;
LAB_00101017:
            lVar9 = *(long *)(lVar4 + -8);
          }
          iVar6 = iVar6 + 1;
          if (lVar9 == lVar7) {
            pwVar5 = (wchar32 *)&String::_null;
          }
          else {
            if ((lVar9 <= lVar7) || (iVar6 < 0)) goto LAB_00100f5f;
            pwVar5 = (wchar32 *)(lVar4 + lVar7 * 4);
          }
          String::operator+=(param_1,*pwVar5);
          lVar4 = *(long *)in_RDX;
        }
        lVar4 = *(long *)in_RDX;
        if (lVar4 != 0) goto LAB_00100eb2;
        lVar9 = 0;
      } while( true );
    }
  }
  else if (iVar6 < iVar3 + -1) goto LAB_00100ea1;
  return param_1;
}



/* TranslationDomain::_replace_with_accented_string(String const&) const */

String * TranslationDomain::_replace_with_accented_string(String *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  String *in_RDX;
  wchar32 *pwVar6;
  wchar32 wVar7;
  TranslationDomain *in_RSI;
  long lVar8;
  long lVar9;
  int iVar10;
  
  iVar10 = 0;
  *(undefined8 *)param_1 = 0;
  lVar4 = *(long *)in_RDX;
  if (lVar4 == 0) goto LAB_001011c1;
LAB_00101118:
  iVar5 = (int)*(undefined8 *)(lVar4 + -8);
  if (iVar5 == 0) {
    if (-1 < iVar10) {
      return param_1;
    }
  }
  else if (iVar5 + -1 <= iVar10) {
    return param_1;
  }
  lVar9 = (long)iVar10;
  if (in_RSI[0x1ad] != (TranslationDomain)0x0) goto LAB_00101220;
LAB_0010113d:
  lVar8 = *(long *)(lVar4 + -8);
LAB_00101141:
  wVar7 = (wchar32)String::_null;
  if (lVar8 != lVar9) {
    if ((iVar10 < 0) || (lVar8 <= lVar9)) goto LAB_001011d9;
    wVar7 = *(wchar32 *)(lVar4 + lVar9 * 4);
  }
  if ((uint)((wVar7 & 0xffffffdfU) - 0x41U) < 0x1a) {
    pwVar6 = &_character_to_accented;
    uVar3 = 0;
    do {
      if (wVar7 == *pwVar6) {
        if ((wchar32 *)(&PTR_DAT_00111ce8)[(ulong)uVar3 * 2] != (wchar32 *)0x0) {
          String::operator+=(param_1,(wchar32 *)(&PTR_DAT_00111ce8)[(ulong)uVar3 * 2]);
          goto LAB_001011b1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      pwVar6 = pwVar6 + 4;
    } while (uVar3 != 0x34);
    if (lVar8 != lVar9) {
      if ((iVar10 < 0) || (lVar8 <= lVar9)) {
LAB_001011d9:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      iVar10 = iVar10 + 1;
      String::operator+=(param_1,wVar7);
      lVar4 = *(long *)in_RDX;
      if (lVar4 == 0) {
        return param_1;
      }
      goto LAB_00101118;
    }
  }
  String::operator+=(param_1,wVar7);
LAB_001011b1:
  do {
    lVar4 = *(long *)in_RDX;
    iVar10 = iVar10 + 1;
    if (lVar4 != 0) goto LAB_00101118;
LAB_001011c1:
    if (-1 < iVar10) {
      return param_1;
    }
    lVar9 = (long)iVar10;
    if (in_RSI[0x1ad] == (TranslationDomain)0x0) {
LAB_001011d6:
      lVar8 = 0;
      goto LAB_001011d9;
    }
LAB_00101220:
    cVar2 = _is_placeholder(in_RSI,in_RDX,iVar10);
    lVar4 = *(long *)in_RDX;
    if (cVar2 == '\0') break;
    if (lVar4 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar4 + -8);
    }
    if (lVar8 == lVar9) {
      lVar9 = (long)(iVar10 + 1);
      String::operator+=(param_1,(wchar32)String::_null);
      lVar4 = *(long *)in_RDX;
      if (lVar4 != 0) goto LAB_001012ec;
      lVar8 = 0;
    }
    else {
      if ((lVar8 <= lVar9) || (iVar10 < 0)) goto LAB_001011d9;
      lVar8 = lVar9 * 4;
      lVar9 = (long)(iVar10 + 1);
      String::operator+=(param_1,*(wchar32 *)(lVar4 + lVar8));
      lVar4 = *(long *)in_RDX;
      if (lVar4 == 0) goto LAB_001011d6;
LAB_001012ec:
      lVar8 = *(long *)(lVar4 + -8);
    }
    iVar10 = iVar10 + 1;
    if (lVar9 == lVar8) {
      pwVar6 = (wchar32 *)&String::_null;
    }
    else {
      if ((iVar10 < 0) || (lVar8 <= lVar9)) goto LAB_001011d9;
      pwVar6 = (wchar32 *)(lVar4 + lVar9 * 4);
    }
    String::operator+=(param_1,*pwVar6);
  } while( true );
  if (lVar4 != 0) goto LAB_0010113d;
  lVar8 = 0;
  goto LAB_00101141;
}



/* TranslationDomain::_wrap_with_fakebidi_characters(String const&) const */

String * TranslationDomain::_wrap_with_fakebidi_characters(String *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  wchar32 *pwVar4;
  long lVar5;
  String *in_RDX;
  int *piVar6;
  long lVar7;
  TranslationDomain *in_RSI;
  long lVar8;
  int iVar9;
  
  iVar9 = 0;
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,L'\x202e');
  lVar5 = *(long *)in_RDX;
  do {
    if (lVar5 == 0) {
      if (iVar9 < 0) {
        lVar8 = 0;
LAB_001013cb:
        lVar7 = (long)iVar9;
LAB_001013e6:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_001015d0:
      String::operator+=(param_1,L'\x202c');
      return param_1;
    }
    lVar8 = *(long *)(lVar5 + -8);
    if ((int)lVar8 == 0) {
      if (iVar9 < 0) goto LAB_001013cb;
      goto LAB_001015d0;
    }
    if ((int)lVar8 + -1 <= iVar9) goto LAB_001015d0;
    lVar7 = (long)iVar9;
    if (lVar8 == lVar7) {
      piVar6 = (int *)&String::_null;
    }
    else {
      if ((lVar8 <= lVar7) || (lVar7 < 0)) goto LAB_001013cb;
      piVar6 = (int *)(lVar5 + lVar7 * 4);
    }
    if (*piVar6 == 10) {
      String::operator+=(param_1,L'\x202c');
      lVar5 = *(long *)in_RDX;
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar5 + -8);
      }
      if (lVar8 == lVar7) {
LAB_001015c0:
        pwVar4 = (wchar32 *)&String::_null;
      }
      else {
        if ((lVar8 <= lVar7) || (lVar7 < 0)) goto LAB_001013e6;
LAB_0010158a:
        pwVar4 = (wchar32 *)(lVar5 + lVar7 * 4);
      }
      String::operator+=(param_1,*pwVar4);
      String::operator+=(param_1,L'\x202e');
    }
    else {
      if (in_RSI[0x1ad] == (TranslationDomain)0x0) {
LAB_0010144a:
        lVar1 = lVar7 - lVar8;
        if (lVar7 != lVar8) goto LAB_0010144f;
LAB_001014c0:
        pwVar4 = (wchar32 *)&String::_null;
      }
      else {
        cVar3 = _is_placeholder(in_RSI,in_RDX,iVar9);
        if (cVar3 != '\0') {
          String::operator+=(param_1,L'\x202c');
          lVar5 = *(long *)in_RDX;
          if (lVar5 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(lVar5 + -8);
          }
          if (lVar8 == lVar7) {
            pwVar4 = (wchar32 *)&String::_null;
          }
          else {
            if ((lVar8 <= lVar7) || (lVar7 < 0)) goto LAB_001013e6;
            pwVar4 = (wchar32 *)(lVar5 + lVar7 * 4);
          }
          iVar9 = iVar9 + 1;
          lVar7 = (long)iVar9;
          String::operator+=(param_1,*pwVar4);
          lVar5 = *(long *)in_RDX;
          if (lVar5 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(lVar5 + -8);
          }
          if (lVar7 == lVar8) goto LAB_001015c0;
          if ((lVar7 < lVar8) && (-1 < iVar9)) goto LAB_0010158a;
          goto LAB_001013e6;
        }
        lVar5 = *(long *)in_RDX;
        lVar8 = 0;
        if (lVar5 == 0) goto LAB_0010144a;
        lVar8 = *(long *)(lVar5 + -8);
        lVar1 = lVar7 - lVar8;
        if (lVar1 == 0) goto LAB_001014c0;
LAB_0010144f:
        if ((SBORROW8(lVar7,lVar8) == lVar1 < 0) || (lVar7 < 0)) goto LAB_001013e6;
        pwVar4 = (wchar32 *)(lVar5 + lVar7 * 4);
      }
      String::operator+=(param_1,*pwVar4);
    }
    lVar5 = *(long *)in_RDX;
    iVar9 = iVar9 + 1;
  } while( true );
}



/* TranslationDomain::get_message_from_translations(String const&, StringName const&, StringName
   const&) const */

String * TranslationDomain::get_message_from_translations
                   (String *param_1,StringName *param_2,StringName *param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  String *pSVar5;
  int iVar6;
  long lVar7;
  undefined8 in_RCX;
  long lVar8;
  long lVar9;
  undefined8 in_R8;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_48;
  long local_40;
  
  iVar2 = *(int *)(param_2 + 0x1a4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if (iVar2 == 0) {
LAB_00101783:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  plVar3 = *(long **)(param_2 + 0x180);
  lVar9 = 0;
  iVar10 = 0;
  lVar8 = *plVar3;
  if (lVar8 == 0) goto LAB_001017c1;
  do {
    pSVar5 = TranslationServer::singleton;
    local_48 = 0;
    plVar1 = (long *)(*(long *)(lVar8 + 0x240) + -0x10);
    if (*(long *)(lVar8 + 0x240) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_001016d5;
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar4 == lVar7;
        if (bVar11) {
          *plVar1 = lVar4 + 1;
          lVar7 = lVar4;
        }
        UNLOCK();
      } while (!bVar11);
      if (lVar7 != -1) {
        local_48 = *(long *)(lVar8 + 0x240);
      }
    }
LAB_001016d5:
    iVar6 = TranslationServer::compare_locales(pSVar5,(String *)param_3);
    lVar8 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if (((0 < iVar6) && (iVar10 <= iVar6)) &&
       ((**(code **)(*(long *)plVar3[lVar9] + 0x1f0))
                  ((StringName *)&local_48,(long *)plVar3[lVar9],in_RCX,in_R8), local_48 != 0)) {
      if ((*(long *)(local_48 + 8) == 0) &&
         ((*(long *)(local_48 + 0x10) == 0 || (*(uint *)(*(long *)(local_48 + 0x10) + -8) < 2)))) {
        if (StringName::configured != '\0') {
          StringName::unref();
        }
      }
      else {
        StringName::operator=((StringName *)param_1,(StringName *)&local_48);
        if (iVar6 == 10) {
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          goto LAB_00101783;
        }
        iVar10 = iVar6;
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
      }
    }
    while( true ) {
      if (iVar2 <= (int)lVar9 + 1) goto LAB_00101783;
      lVar9 = lVar9 + 1;
      lVar8 = plVar3[lVar9];
      if (lVar8 != 0) break;
LAB_001017c1:
      _err_print_error("get_message_from_translations","core/string/translation_domain.cpp",0xcd,
                       "Condition \"E.is_null()\" is true. Continuing.",0,0);
    }
  } while( true );
}



/* TranslationDomain::get_message_from_translations(String const&, StringName const&, StringName
   const&, int, StringName const&) const */

String * TranslationDomain::get_message_from_translations
                   (String *param_1,StringName *param_2,StringName *param_3,int param_4,
                   StringName *param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  String *pSVar5;
  int iVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined4 in_R9D;
  long in_FS_OFFSET;
  bool bVar11;
  undefined8 in_stack_00000008;
  long local_48;
  long local_40;
  
  iVar2 = *(int *)(param_2 + 0x1a4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if (iVar2 == 0) {
LAB_001019d6:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return param_1;
  }
  plVar3 = *(long **)(param_2 + 0x180);
  lVar10 = 0;
  iVar9 = 0;
  lVar8 = *plVar3;
  if (lVar8 == 0) goto LAB_00101a12;
  do {
    pSVar5 = TranslationServer::singleton;
    local_48 = 0;
    plVar1 = (long *)(*(long *)(lVar8 + 0x240) + -0x10);
    if (*(long *)(lVar8 + 0x240) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_0010191d;
        LOCK();
        lVar7 = *plVar1;
        bVar11 = lVar4 == lVar7;
        if (bVar11) {
          *plVar1 = lVar4 + 1;
          lVar7 = lVar4;
        }
        UNLOCK();
      } while (!bVar11);
      if (lVar7 != -1) {
        local_48 = *(long *)(lVar8 + 0x240);
      }
    }
LAB_0010191d:
    iVar6 = TranslationServer::compare_locales(pSVar5,(String *)param_3);
    lVar8 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    if (((0 < iVar6) && (iVar9 <= iVar6)) &&
       ((**(code **)(*(long *)plVar3[lVar10] + 0x1f8))
                  ((StringName *)&local_48,(long *)plVar3[lVar10],
                   CONCAT44(in_register_0000000c,param_4),param_5,in_R9D,in_stack_00000008),
       local_48 != 0)) {
      if ((*(long *)(local_48 + 8) == 0) &&
         ((*(long *)(local_48 + 0x10) == 0 || (*(uint *)(*(long *)(local_48 + 0x10) + -8) < 2)))) {
        if (StringName::configured != '\0') {
          StringName::unref();
        }
      }
      else {
        StringName::operator=((StringName *)param_1,(StringName *)&local_48);
        if (iVar6 == 10) {
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          goto LAB_001019d6;
        }
        iVar9 = iVar6;
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
      }
    }
    while( true ) {
      if (iVar2 <= (int)lVar10 + 1) goto LAB_001019d6;
      lVar10 = lVar10 + 1;
      lVar8 = plVar3[lVar10];
      if (lVar8 != 0) break;
LAB_00101a12:
      _err_print_error("get_message_from_translations","core/string/translation_domain.cpp",0xe4,
                       "Condition \"E.is_null()\" is true. Continuing.",0,0);
    }
  } while( true );
}



/* TranslationDomain::translate_plural(StringName const&, StringName const&, int, StringName const&)
   const */

TranslationDomain * __thiscall
TranslationDomain::translate_plural
          (TranslationDomain *this,StringName *param_1,StringName *param_2,int param_3,
          StringName *param_4)

{
  long *plVar1;
  undefined4 in_register_0000000c;
  StringName *pSVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  pSVar2 = (StringName *)CONCAT44(in_register_0000000c,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TranslationServer::get_locale();
  get_message_from_translations
            ((String *)&local_58,param_1,(StringName *)&local_60,(int)param_2,pSVar2);
  TranslationServer::get_fallback_locale();
  if (local_58 == 0) {
    if ((local_50 != 0) && (2 < *(int *)(local_50 + -8))) {
LAB_00101c80:
      get_message_from_translations
                ((String *)&local_48,param_1,(StringName *)&local_50,(int)param_2,pSVar2);
      if (local_58 == local_48) {
        if (StringName::configured != '\0') {
          if (local_58 == 0) goto LAB_00101c41;
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_58 = local_48;
      }
      if (local_58 != 0) {
LAB_00101c23:
        if (*(long *)(local_58 + 8) != 0) goto LAB_00101b48;
LAB_00101c2e:
        lVar3 = *(long *)(local_58 + 0x10);
        if (lVar3 != 0) goto LAB_00101c37;
      }
    }
LAB_00101c41:
    if ((int)param_4 == 1) {
      StringName::StringName((StringName *)this,param_2);
    }
    else {
      StringName::StringName((StringName *)this,pSVar2);
    }
  }
  else {
    if (*(long *)(local_58 + 8) == 0) {
      lVar3 = *(long *)(local_58 + 0x10);
      if (lVar3 == 0) {
        if (local_50 == 0) goto LAB_00101c41;
LAB_00101c1d:
        if (2 < *(int *)(local_50 + -8)) goto LAB_00101c80;
        goto LAB_00101c23;
      }
      if (*(uint *)(lVar3 + -8) < 2) {
        if (local_50 != 0) goto LAB_00101c1d;
        goto LAB_00101c2e;
      }
LAB_00101c37:
      if (*(uint *)(lVar3 + -8) < 2) goto LAB_00101c41;
    }
LAB_00101b48:
    *(long *)this = local_58;
    local_58 = 0;
  }
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
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* TranslationDomain::TranslationDomain() */

void __thiscall TranslationDomain::TranslationDomain(TranslationDomain *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00111530;
  *(undefined2 *)(this + 0x1ac) = 0x100;
  *(undefined8 *)(this + 0x1a0) = 2;
  *(undefined4 *)(this + 0x1a8) = 0x100;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  String::parse_latin1((StrRange *)(this + 0x1b8));
  *(undefined8 *)(this + 0x1c0) = 0;
  String::parse_latin1((StrRange *)(this + 0x1c0));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationDomain::add_translation(Ref<Translation> const&) */

void TranslationDomain::add_translation(Ref *param_1)

{
  long in_FS_OFFSET;
  Ref aRStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  HashSet<Ref<Translation>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Translation>>>::insert
            (aRStack_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationDomain::pseudolocalize(StringName const&) const */

StringName * TranslationDomain::pseudolocalize(StringName *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  StringName *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  bool bVar7;
  char *local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = StringName::is_empty();
  if (cVar5 != '\0') {
    StringName::StringName(param_1,in_RDX);
    goto LAB_00101fa9;
  }
  lVar2 = *(long *)in_RDX;
  if (lVar2 == 0) {
LAB_00101fd9:
    local_50 = (char *)0x0;
LAB_00101fe3:
    if (*(char *)(in_RSI + 0x1ac) == '\0') goto LAB_00101f0e;
LAB_00101ff3:
    _get_override_string((String *)&local_48);
    if (local_50 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = local_48;
      local_48 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (*(char *)(in_RSI + 0x1aa) != '\0') goto LAB_0010203d;
LAB_00101f1b:
    if (*(char *)(in_RSI + 0x1a9) == '\0') goto LAB_00101f28;
LAB_00102087:
    _replace_with_accented_string((String *)&local_48);
    if (local_50 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = local_48;
      local_48 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    cVar5 = *(char *)(in_RSI + 0x1ab);
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    local_50 = (char *)0x0;
    if (pcVar3 == (char *)0x0) {
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_00101fd9;
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00101ee8;
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
        local_50 = *(char **)(lVar2 + 0x10);
      }
    }
    else {
      local_40 = strlen(pcVar3);
      local_48 = pcVar3;
      String::parse_latin1((StrRange *)&local_50);
    }
LAB_00101ee8:
    if ((local_50 == (char *)0x0) || ((int)*(undefined8 *)(local_50 + -8) == 0)) goto LAB_00101fe3;
    if (*(char *)(in_RSI + 0x1ac) != '\0') goto LAB_00101ff3;
LAB_00101f0e:
    if (*(char *)(in_RSI + 0x1aa) == '\0') goto LAB_00101f1b;
LAB_0010203d:
    _double_vowels((String *)&local_48);
    if (local_50 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = local_48;
      local_48 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (*(char *)(in_RSI + 0x1a9) != '\0') goto LAB_00102087;
LAB_00101f28:
    cVar5 = *(char *)(in_RSI + 0x1ab);
  }
  if (cVar5 != '\0') {
    _wrap_with_fakebidi_characters((String *)&local_48);
    if (local_50 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = local_48;
      local_48 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  _add_padding((String *)&local_48,(int)in_RSI);
  StringName::StringName(param_1,(String *)&local_48,false);
  pcVar3 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  pcVar3 = local_50;
  if (local_50 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
LAB_00101fa9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationDomain::translate(StringName const&, StringName const&) const */

TranslationDomain * __thiscall
TranslationDomain::translate(TranslationDomain *this,StringName *param_1,StringName *param_2)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TranslationServer::get_locale();
  get_message_from_translations((String *)&local_58,param_1,(StringName *)&local_60);
  TranslationServer::get_fallback_locale();
  if (local_58 == 0) {
    if ((local_50 != 0) && (2 < *(int *)(local_50 + -8))) {
LAB_00102370:
      get_message_from_translations((String *)&local_48,param_1,(StringName *)&local_50);
      if (local_58 == local_48) {
        if (StringName::configured != '\0') {
          if (local_58 == 0) goto LAB_00102331;
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_58 = local_48;
      }
      if (local_58 != 0) {
LAB_00102313:
        if (*(long *)(local_58 + 8) != 0) goto LAB_00102228;
LAB_0010231e:
        lVar2 = *(long *)(local_58 + 0x10);
        if (lVar2 != 0) goto LAB_00102327;
      }
    }
LAB_00102331:
    if (param_1[0x1a8] == (StringName)0x0) {
      StringName::StringName((StringName *)this,param_2);
    }
    else {
      pseudolocalize((StringName *)this);
    }
  }
  else {
    if (*(long *)(local_58 + 8) == 0) {
      lVar2 = *(long *)(local_58 + 0x10);
      if (lVar2 == 0) {
        if (local_50 == 0) goto LAB_00102331;
LAB_0010230d:
        if (2 < *(int *)(local_50 + -8)) goto LAB_00102370;
        goto LAB_00102313;
      }
      if (*(uint *)(lVar2 + -8) < 2) {
        if (local_50 != 0) goto LAB_0010230d;
        goto LAB_0010231e;
      }
LAB_00102327:
      if (*(uint *)(lVar2 + -8) < 2) goto LAB_00102331;
    }
LAB_00102228:
    if (param_1[0x1a8] == (StringName)0x0) {
      StringName::StringName((StringName *)this,(StringName *)&local_58);
    }
    else {
      pseudolocalize((StringName *)this);
    }
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
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* TranslationDomain::_bind_methods() */

void TranslationDomain::_bind_methods(void)

{
  char cVar1;
  undefined *puVar2;
  MethodBind *pMVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined8 local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  Variant *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar2 = PTR__LC27_00112020;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  local_d8 = "locale";
  uVar4 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)&local_108,(char ***)"get_translation_object",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,Ref<Translation>,String_const&>
                     (get_translation_object);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_d8 = "translation";
  local_d0 = 0;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)&local_108,(char ***)"add_translation",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,Ref<Translation>const&>(add_translation);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_d8 = "translation";
  local_d0 = 0;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)&local_108,(char ***)"remove_translation",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,Ref<Translation>const&>(remove_translation);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"clear",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain>(clear);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_118 = (char *)0x0;
  local_b8 = 0;
  local_c8 = (Variant *)puVar2;
  pcStack_c0 = "context";
  auStack_70._0_8_ = &pcStack_c0;
  local_78 = &local_c8;
  D_METHODP((char *)&local_108,(char ***)"translate",uVar4);
  Variant::Variant((Variant *)&local_78,(StringName *)&local_118);
  local_58 = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_c8 = (Variant *)&local_78;
  pMVar3 = create_method_bind<TranslationDomain,StringName,StringName_const&,StringName_const&>
                     (translate);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,&local_c8,1);
  if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_118 = (char *)0x0;
  local_a8 = (Variant *)puVar2;
  pcStack_a0 = "message_plural";
  local_98 = &_LC30;
  pcStack_90 = "context";
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &pcStack_a0;
  local_88 = 0;
  local_78 = &local_a8;
  ppcStack_60 = &pcStack_90;
  D_METHODP((char *)&local_108,(char ***)"translate_plural",uVar4);
  Variant::Variant((Variant *)&local_78,(StringName *)&local_118);
  local_58 = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_a8 = (Variant *)&local_78;
  pMVar3 = create_method_bind<TranslationDomain,StringName,StringName_const&,StringName_const&,int,StringName_const&>
                     (translate_plural);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,&local_a8,1);
  if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_108,(char ***)"is_pseudolocalization_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(is_pseudolocalization_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_a8 = (Variant *)0x105fc0;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_enabled",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(set_pseudolocalization_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"is_pseudolocalization_accents_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(is_pseudolocalization_accents_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_a8 = (Variant *)0x105fc0;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_accents_enabled",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(set_pseudolocalization_accents_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"is_pseudolocalization_double_vowels_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(is_pseudolocalization_double_vowels_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_a8 = (Variant *)0x105fc0;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_double_vowels_enabled",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(set_pseudolocalization_double_vowels_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"is_pseudolocalization_fake_bidi_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(is_pseudolocalization_fake_bidi_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_a8 = (Variant *)0x105fc0;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_fake_bidi_enabled",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(set_pseudolocalization_fake_bidi_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"is_pseudolocalization_override_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(is_pseudolocalization_override_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_a8 = (Variant *)0x105fc0;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_override_enabled",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>(set_pseudolocalization_override_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"is_pseudolocalization_skip_placeholders_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>
                     (is_pseudolocalization_skip_placeholders_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  local_a8 = (Variant *)0x105fc0;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_skip_placeholders_enabled",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,bool>
                     (set_pseudolocalization_skip_placeholders_enabled);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"get_pseudolocalization_expansion_ratio",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,float>(get_pseudolocalization_expansion_ratio);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x105fc8;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_expansion_ratio",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,float>(set_pseudolocalization_expansion_ratio);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"get_pseudolocalization_prefix",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,String>(get_pseudolocalization_prefix);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x105fec;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_prefix",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,String_const&>(set_pseudolocalization_prefix);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  D_METHODP((char *)&local_108,(char ***)"get_pseudolocalization_suffix",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,String>(get_pseudolocalization_suffix);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x10602f;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"set_pseudolocalization_suffix",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,String_const&>(set_pseudolocalization_suffix);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  pcStack_a0 = (char *)0x0;
  local_a8 = (Variant *)0x105f2a;
  local_78 = &local_a8;
  D_METHODP((char *)&local_108,(char ***)"pseudolocalize",uVar4);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar3 = create_method_bind<TranslationDomain,StringName,StringName_const&>(pseudolocalize);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_108);
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_enabled";
  local_100 = 0x1a;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_0010340b:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_0010340b;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_accents_enabled";
  local_100 = 0x22;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_0010367b:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_0010367b;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_double_vowels_enabled";
  local_100 = 0x28;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_001038eb:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_001038eb;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_fake_bidi_enabled";
  local_100 = 0x24;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_00103b5b:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_00103b5b;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (((StringName::configured != '\0') &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_120 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_override_enabled";
  local_100 = 0x23;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_00103dcb:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_00103dcb;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_skip_placeholders_enabled";
  local_100 = 0x2c;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,1);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_0010403b:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_0010403b;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_expansion_ratio";
  local_100 = 0x22;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,3);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_001042ab:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_001042ab;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_prefix";
  local_100 = 0x19;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,4);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 == 0) {
LAB_0010451b:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_0010451b;
    StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
    if (local_f8 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_118;
    }
  }
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if (((StringName::configured != '\0') &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_120 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_120,true);
  _scs_create((char *)&local_128,true);
  local_108 = "";
  local_130 = 0;
  local_138 = 0;
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_138);
  local_140 = 0;
  local_108 = "pseudolocalization_suffix";
  local_100 = 0x19;
  String::parse_latin1((StrRange *)&local_140);
  local_108 = (char *)CONCAT44(local_108._4_4_,4);
  local_100 = 0;
  if (local_140 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_140);
  }
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_138);
    local_e0 = 6;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)&local_118,(String *)&local_e8,false);
      if (local_f8 == local_118) {
        if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f8 = local_118;
      }
      goto LAB_001047a0;
    }
  }
  local_e0 = 6;
  StringName::operator=((StringName *)&local_f8,(StringName *)&local_130);
LAB_001047a0:
  local_148 = 0;
  local_118 = "TranslationDomain";
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_118,(String *)&local_148,false);
  ClassDB::add_property
            ((StringName *)&local_118,(PropertyInfo *)&local_108,(StringName *)&local_128,
             (StringName *)&local_120,-1);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((((StringName::configured != '\0') &&
       ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_120 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* TranslationDomain::get_loaded_locales() const */

void TranslationDomain::get_loaded_locales(void)

{
  long *plVar1;
  CowData<char32_t> *this;
  int iVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long in_RSI;
  long lVar7;
  long in_RDI;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_50;
  long local_48;
  long local_40;
  
  iVar2 = *(int *)(in_RSI + 0x1a4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (iVar2 == 0) {
LAB_00104f0d:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  plVar3 = *(long **)(in_RSI + 0x180);
  lVar8 = 0;
  lVar7 = *plVar3;
  if (lVar7 == 0) goto LAB_00104f49;
  do {
    local_50 = 0;
    plVar1 = (long *)(*(long *)(lVar7 + 0x240) + -0x10);
    if (*(long *)(lVar7 + 0x240) != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00104dbe;
        LOCK();
        lVar9 = *plVar1;
        bVar10 = lVar6 == lVar9;
        if (bVar10) {
          *plVar1 = lVar6 + 1;
          lVar9 = lVar6;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar9 != -1) {
        local_50 = *(long *)(lVar7 + 0x240);
      }
    }
LAB_00104dbe:
    lVar7 = *(long *)(in_RDI + 8);
    if ((lVar7 != 0) && (lVar6 = *(long *)(lVar7 + -8), lVar6 != 0)) {
      lVar9 = 0;
      while (lVar9 < lVar6) {
        cVar4 = String::operator==((String *)(lVar7 + lVar9 * 8),(String *)&local_50);
        if (cVar4 != '\0') goto LAB_00104ed8;
        lVar7 = *(long *)(in_RDI + 8);
        lVar9 = lVar9 + 1;
        if (lVar7 == 0) break;
        lVar6 = *(long *)(lVar7 + -8);
      }
    }
    local_48 = 0;
    plVar1 = (long *)(local_50 + -0x10);
    if (local_50 == 0) {
LAB_00104e48:
      lVar6 = local_50;
      if (lVar7 != 0) goto LAB_00104e51;
LAB_00104f82:
      lVar7 = 1;
    }
    else {
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) goto LAB_00104f70;
        LOCK();
        lVar6 = *plVar1;
        bVar10 = lVar7 == lVar6;
        if (bVar10) {
          *plVar1 = lVar7 + 1;
          lVar6 = lVar7;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar6 != -1) {
        lVar7 = *(long *)(in_RDI + 8);
        local_48 = local_50;
        goto LAB_00104e48;
      }
LAB_00104f70:
      lVar7 = *(long *)(in_RDI + 8);
      lVar6 = 0;
      if (lVar7 == 0) goto LAB_00104f82;
LAB_00104e51:
      lVar7 = *(long *)(lVar7 + -8) + 1;
    }
    iVar5 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar7);
    if (iVar5 == 0) {
      if (*(long *)(in_RDI + 8) == 0) {
        lVar9 = -1;
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(*(long *)(in_RDI + 8) + -8);
        lVar9 = lVar7 + -1;
        if (-1 < lVar9) {
          CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
          this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar9 * 8);
          if (lVar6 != *(long *)this) {
            CowData<char32_t>::_ref(this,(CowData *)&local_48);
          }
          goto LAB_00104eb8;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar7,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_00104eb8:
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_48 + -0x10),false);
      }
    }
LAB_00104ed8:
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    while( true ) {
      if (iVar2 <= (int)lVar8 + 1) goto LAB_00104f0d;
      lVar8 = lVar8 + 1;
      lVar7 = plVar3[lVar8];
      if (lVar7 != 0) break;
LAB_00104f49:
      _err_print_error("get_loaded_locales","core/string/translation_domain.cpp",0xf9,
                       "Condition \"E.is_null()\" is true. Continuing.",0,0);
    }
  } while( true );
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1120,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1120,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* TranslationDomain::is_class_ptr(void*) const */

uint __thiscall TranslationDomain::is_class_ptr(TranslationDomain *this,void *param_1)

{
  return (uint)CONCAT71(0x1120,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1120,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1120,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TranslationDomain::_getv(StringName const&, Variant&) const */

undefined8 TranslationDomain::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TranslationDomain::_setv(StringName const&, Variant const&) */

undefined8 TranslationDomain::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TranslationDomain::_validate_propertyv(PropertyInfo&) const */

void TranslationDomain::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* TranslationDomain::_property_can_revertv(StringName const&) const */

undefined8 TranslationDomain::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TranslationDomain::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TranslationDomain::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TranslationDomain::_notificationv(int, bool) */

void TranslationDomain::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<StringName, StringName const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<StringName,StringName_const&>::_gen_argument_type(int param_1)

{
  return 0x15;
}



/* MethodBindTRC<StringName, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<StringName,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
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



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::
_gen_argument_type(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>
                   *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x15;
  if (param_1 == 2) {
    uVar1 = 2;
  }
  return uVar1;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::
get_argument_meta(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>
                  *this,int param_1)

{
  return (param_1 == 2) * '\x03';
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<StringName,StringName_const&,StringName_const&>::_gen_argument_type(int param_1)

{
  return 0x15;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::get_argument_meta(int) const */

undefined8
MethodBindTRC<StringName,StringName_const&,StringName_const&>::get_argument_meta(int param_1)

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



/* MethodBindT<Ref<Translation> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Translation>const&>::_gen_argument_type
          (MethodBindT<Ref<Translation>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Translation> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Translation>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<Translation>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<Translation>,String_const&>::_gen_argument_type
          (MethodBindTRC<Ref<Translation>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTRC<Ref<Translation>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Translation>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<Translation>, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Translation>,String_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<Translation>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111690;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Translation>, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Translation>,String_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<Translation>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111690;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001116f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001116f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111750;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111750;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001117b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001117b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          )

{
  *(undefined ***)this = &PTR__gen_argument_type_00111810;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          )

{
  *(undefined ***)this = &PTR__gen_argument_type_00111810;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111870;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111870;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001118d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001118d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111930;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111930;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111990;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111990;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001119f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001119f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111a50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111a50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111ab0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001113d0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001113d0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* TranslationDomain::_get_class_namev() const */

undefined8 * TranslationDomain::_get_class_namev(void)

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
LAB_001057e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001057e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TranslationDomain");
      goto LAB_0010584e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TranslationDomain");
LAB_0010584e:
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
LAB_001058c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001058c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010592e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010592e:
  return &_get_class_namev()::_class_name_static;
}



/* TranslationDomain::get_class() const */

void TranslationDomain::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010618f;
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
LAB_0010618f:
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
    if (cVar6 != '\0') goto LAB_00106243;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_001062f3;
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
LAB_001062f3:
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
      if (cVar6 != '\0') goto LAB_00106243;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106243:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationDomain::is_class(String const&) const */

undefined8 __thiscall TranslationDomain::is_class(TranslationDomain *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010641f;
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
LAB_0010641f:
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
    if (cVar5 != '\0') goto LAB_001064d3;
  }
  cVar5 = String::operator==(param_1,"TranslationDomain");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001064d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  local_48 = &_LC6;
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
      goto joined_r0x0010666c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010666c:
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



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
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
      goto joined_r0x001067ec;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001067ec:
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
  local_48 = &_LC6;
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
      goto joined_r0x0010696c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010696c:
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



/* TranslationDomain::~TranslationDomain() */

void __thiscall TranslationDomain::~TranslationDomain(TranslationDomain *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00111530;
  if (*(long *)(this + 0x1c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x1c0);
      *(undefined8 *)(this + 0x1c0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pvVar5 = *(void **)(this + 0x180);
  if (pvVar5 == (void *)0x0) goto LAB_00106aeb;
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) != 0) {
      memset(*(void **)(this + 0x198),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) << 2);
      if (*(int *)(this + 0x1a4) == 0) goto LAB_00106ab7;
    }
    lVar4 = 0;
    do {
      plVar1 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar1 != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = (Object *)*plVar1;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        pvVar5 = *(void **)(this + 0x180);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_00106aeb;
  }
LAB_00106ab7:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 400),false);
  Memory::free_static(*(void **)(this + 0x188),false);
  Memory::free_static(*(void **)(this + 0x198),false);
LAB_00106aeb:
  *(undefined ***)this = &PTR__initialize_classv_001113d0;
  Object::~Object((Object *)this);
  return;
}



/* TranslationDomain::~TranslationDomain() */

void __thiscall TranslationDomain::~TranslationDomain(TranslationDomain *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00111530;
  if (*(long *)(this + 0x1c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x1c0);
      *(undefined8 *)(this + 0x1c0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pvVar5 = *(void **)(this + 0x180);
  if (pvVar5 == (void *)0x0) goto LAB_00106c9b;
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) != 0) {
      memset(*(void **)(this + 0x198),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) << 2);
      if (*(int *)(this + 0x1a4) == 0) goto LAB_00106c67;
    }
    lVar4 = 0;
    do {
      plVar1 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar1 != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = (Object *)*plVar1;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        pvVar5 = *(void **)(this + 0x180);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_00106c9b;
  }
LAB_00106c67:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 400),false);
  Memory::free_static(*(void **)(this + 0x188),false);
  Memory::free_static(*(void **)(this + 0x198),false);
LAB_00106c9b:
  *(undefined ***)this = &PTR__initialize_classv_001113d0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
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
  if (local_90 == 0) {
LAB_00107028:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107028;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107046;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107046:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationDomain::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
TranslationDomain::_get_property_listv(TranslationDomain *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TranslationDomain";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TranslationDomain";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_00107428:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107428;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107445;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107445:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"TranslationDomain",false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<Translation>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Translation> >
   >::insert(Ref<Translation> const&) */

undefined1  [16]
HashSet<Ref<Translation>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Translation>>>::insert
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
    if (lVar35 != 0) goto LAB_00107928;
  }
  else {
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
LAB_00107928:
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
            if (*(long *)(lVar35 + uStack_98 * 8) == lVar36) goto LAB_00107a3a;
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
  if ((float)uVar33 * __LC21 < (float)(uVar3 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      lVar35 = *in_RSI;
      uVar45 = 0xffffffff;
      uVar3 = *(uint *)((long)in_RSI + 0x24);
      goto LAB_00107a3a;
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
LAB_00107a3a:
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



/* MethodBindT<Ref<Translation> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Translation>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107fc9;
  local_78 = 0;
  local_68 = "Translation";
  local_80 = 0;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108185:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00108185;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00107fc9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00108239;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108335:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108335;
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
LAB_00108239:
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
  if (in_EDX != 0) goto LAB_001084a9;
  local_78 = 0;
  local_68 = &_LC6;
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
LAB_001085a5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001085a5;
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
LAB_001084a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<TranslationDomain, Ref<Translation>, String
   const&>(Ref<Translation> (TranslationDomain::*)(String const&) const) */

MethodBind *
create_method_bind<TranslationDomain,Ref<Translation>,String_const&>(_func_Ref_String_ptr *param_1)

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
  *(_func_Ref_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111690;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, Ref<Translation> const&>(void
   (TranslationDomain::*)(Ref<Translation> const&)) */

MethodBind *
create_method_bind<TranslationDomain,Ref<Translation>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001116f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain>(void (TranslationDomain::*)()) */

MethodBind * create_method_bind<TranslationDomain>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00111750;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, StringName, StringName const&, StringName
   const&>(StringName (TranslationDomain::*)(StringName const&, StringName const&) const) */

MethodBind *
create_method_bind<TranslationDomain,StringName,StringName_const&,StringName_const&>
          (_func_StringName_StringName_ptr_StringName_ptr *param_1)

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
  *(_func_StringName_StringName_ptr_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001117b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, StringName, StringName const&, StringName
   const&, int, StringName const&>(StringName (TranslationDomain::*)(StringName const&, StringName
   const&, int, StringName const&) const) */

MethodBind *
create_method_bind<TranslationDomain,StringName,StringName_const&,StringName_const&,int,StringName_const&>
          (_func_StringName_StringName_ptr_StringName_ptr_int_StringName_ptr *param_1)

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
  *(_func_StringName_StringName_ptr_StringName_ptr_int_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111810;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, bool>(bool (TranslationDomain::*)() const) */

MethodBind * create_method_bind<TranslationDomain,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00111870;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, bool>(void (TranslationDomain::*)(bool)) */

MethodBind * create_method_bind<TranslationDomain,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001118d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, float>(float (TranslationDomain::*)() const) */

MethodBind * create_method_bind<TranslationDomain,float>(_func_float *param_1)

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
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111930;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, float>(void (TranslationDomain::*)(float)) */

MethodBind * create_method_bind<TranslationDomain,float>(_func_void_float *param_1)

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
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111990;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, String>(String (TranslationDomain::*)() const)
    */

MethodBind * create_method_bind<TranslationDomain,String>(_func_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001119f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, String const&>(void
   (TranslationDomain::*)(String const&)) */

MethodBind * create_method_bind<TranslationDomain,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111a50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<TranslationDomain, StringName, StringName const&>(StringName
   (TranslationDomain::*)(StringName const&) const) */

MethodBind *
create_method_bind<TranslationDomain,StringName,StringName_const&>
          (_func_StringName_StringName_ptr *param_1)

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
  *(_func_StringName_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00111ab0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "TranslationDomain";
  local_30 = 0x11;
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



/* TranslationDomain::_initialize_classv() */

void TranslationDomain::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "TranslationDomain";
    local_60 = 0;
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
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
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00109bd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar10 == 0) goto LAB_00109bd0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00109aa9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00109aa9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00109c26;
  }
  if (lVar10 == lVar7) {
LAB_00109b4f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00109c26:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00109b3a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00109b4f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_00109b3a:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00109dc8) */
/* WARNING: Removing unreachable block (ram,0x00109f5d) */
/* WARNING: Removing unreachable block (ram,0x00109f69) */
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



/* MethodBindTRC<StringName, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::validated_call
          (MethodBindTRC<StringName,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a112;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010a112:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::ptrcall
          (MethodBindTRC<StringName,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a33c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010a33c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a6e4;
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
                    /* WARNING: Could not recover jumptable at 0x0010a54d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010a6e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a8e2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010a8e2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010aa50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar4)((CowData<char32_t> *)&local_58);
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
LAB_0010aa50:
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
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      local_48 = (Variant **)0x109fb8;
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
      goto LAB_0010ad01;
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
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_0010ad01:
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
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x109fb8;
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
      goto LAB_0010aeee;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0010aeee:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b242;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010b0ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b242:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b44c;
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
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0010b2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b44c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar7;
  long local_68;
  long local_60;
  char *local_58;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b520;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      fVar7 = (float)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,fVar7);
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
LAB_0010b520:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b788;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0010b788:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b987;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar4;
LAB_0010b987:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bd14;
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
                    /* WARNING: Could not recover jumptable at 0x0010bb7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010bd14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bf12;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bd7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010bf12:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bfe0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_0010bfe0:
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
  long lVar1;
  Variant VVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c242;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar2;
LAB_0010c242:
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
  long lVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
    if (local_48 == (char *)*plVar4) {
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
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c421;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar2;
LAB_0010c421:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::validated_call
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          ,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010c63e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,
            *(undefined4 *)(param_2[2] + 8),param_2[3] + 8);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010c63e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::ptrcall
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          ,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c84e;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],*param_2[2]
            ,param_2[3]);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010c84e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::validated_call
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ca5a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010ca5a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::ptrcall
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cc80;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010cc80:
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
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cf40;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar4)();
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
LAB_0010cf40:
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d33b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010d33b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d52b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010d52b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Translation> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Translation>const&>::validated_call
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
      local_58 = (Object *)0x109fb8;
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
      goto LAB_0010d628;
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
LAB_0010d5e6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Translation::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010d5e6;
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
LAB_0010d628:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Translation> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Translation>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x109fb8;
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
      goto LAB_0010d8ec;
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
LAB_0010d8c8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010d8c8;
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
LAB_0010d8ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Translation>, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Translation>,String_const&>::ptrcall
          (MethodBindTRC<Ref<Translation>,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
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
      local_48 = (Object *)0x109fb8;
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
      goto LAB_0010db57;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010db57;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010dba1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010dba1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010dba1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010db57;
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
LAB_0010db57:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<StringName,StringName_const&,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  bool bVar16;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010df60;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010dfa8;
      pVVar13 = *(Variant **)param_4;
LAB_0010dfbd:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar7) {
LAB_0010dfa8:
        uVar8 = 4;
        goto LAB_0010df95;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010e090;
        pVVar13 = pVVar14 + lVar10 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010dfbd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010e090:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0x15);
    uVar4 = _LC97;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_70);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x15);
    uVar4 = _LC98;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar15)((StringName *)&local_78,(Variant *)((long)plVar11 + (long)pVVar1),
                       (Variant *)&local_68,(Variant *)&local_70);
    Variant::Variant((Variant *)local_58,(StringName *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar16 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (bVar16) {
      if (local_78 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010df60;
      }
      if (local_68 != (char *)0x0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010df60;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    uVar8 = 3;
LAB_0010df95:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010df60:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<StringName,StringName_const&>::call
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
  long local_70;
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
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e3a0;
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
      if (in_R8D != 1) goto LAB_0010e3f0;
LAB_0010e3e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e3f0:
        uVar6 = 4;
        goto LAB_0010e395;
      }
      if (in_R8D == 1) goto LAB_0010e3e0;
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
    uVar4 = _LC98;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar11)((StringName *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(StringName *)&local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar12 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar12) &&
       (((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_68 != (char *)0x0)))) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0010e395:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010e3a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Translation>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<Translation>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
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
  long local_78;
  Object *local_70;
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
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e780;
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
      if (in_R8D != 1) goto LAB_0010e7d0;
LAB_0010e7c0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e7d0:
        uVar7 = 4;
        goto LAB_0010e775;
      }
      if (in_R8D == 1) goto LAB_0010e7c0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC100;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar12)(&local_70,(Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (((local_70 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010e775:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010e780:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
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
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eaf0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010eb40;
LAB_0010eb30:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010eb40:
        uVar7 = 4;
        goto LAB_0010eae5;
      }
      if (in_R8D == 1) goto LAB_0010eb30;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC100;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_0010eae5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010eaf0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 == (long *)0x0) || (plVar13[1] == 0)) || (*(char *)(plVar13[1] + 0x2e) == '\0')) {
LAB_0010edae:
    pVVar15 = param_2[0xb];
    pVVar1 = param_2[0xc];
    if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant *)0x0) {
        iVar7 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(pVVar2 + -8);
        iVar7 = (int)lVar14;
      }
      if ((int)(4 - in_R8D) <= iVar7) {
        lVar9 = 0;
        do {
          if ((int)lVar9 < (int)in_R8D) {
            pVVar12 = *(Variant **)(param_4 + lVar9 * 8);
          }
          else {
            uVar11 = iVar7 + -4 + (int)lVar9;
            if (lVar14 <= (int)uVar11) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                         "size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pVVar12 = pVVar2 + (ulong)uVar11 * 0x18;
          }
          local_68[lVar9] = pVVar12;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 4);
        *in_R9 = 0;
        if (((ulong)pVVar15 & 1) != 0) {
          pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],0x15);
        uVar4 = _LC101;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
        uVar4 = _LC102;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(local_68[2]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0x15);
        uVar4 = _LC97;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_a0);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x15);
        uVar4 = _LC98;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_98);
        (*(code *)pVVar15)((StringName *)&local_b0,(Variant *)((long)plVar13 + (long)pVVar1),
                           (Variant *)&local_98,(Variant *)&local_a0,iVar7,(Variant *)&local_a8);
        Variant::Variant((Variant *)local_88,(StringName *)&local_b0);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        bVar16 = StringName::configured == '\0';
        *(undefined4 *)param_1 = local_88[0];
        *(undefined8 *)(param_1 + 8) = local_80;
        *(undefined8 *)(param_1 + 0x10) = uStack_78;
        if (bVar16) goto LAB_0010f000;
        if (local_b0 != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010f000;
        }
        if (local_98 != (char *)0x0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010f000;
        }
        if (local_a0 != 0) {
          StringName::unref();
          goto LAB_0010efb3;
        }
        goto LAB_0010efbc;
      }
      uVar8 = 4;
    }
    else {
      uVar8 = 3;
    }
    *in_R9 = uVar8;
    in_R9[2] = 4;
  }
  else {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 != (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010edae;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_a0 = 0;
    local_90 = 0x35;
    String::parse_latin1((StrRange *)&local_a0);
    vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
    _err_print_error(&_LC95,"./core/object/method_bind.h",0x267,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                     ,(StringName *)&local_98,0);
    pcVar5 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar13 = (long *)(local_98 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar14 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar13 = (long *)(local_a0 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
LAB_0010efb3:
    if (StringName::configured == '\0') goto LAB_0010f000;
LAB_0010efbc:
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_0010f000:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Translation> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Translation>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
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
  long local_58;
  undefined8 local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x109fb8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f400;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010f3f5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010f400;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010f450;
LAB_0010f440:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f450:
      uVar7 = 4;
      goto LAB_0010f3f5;
    }
    if (in_R8D == 1) goto LAB_0010f440;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC103;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0010f56d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Translation::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010f56d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0010f400:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Translation>, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<Translation>,String_const&>::validated_call
          (MethodBindTRC<Ref<Translation>,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_0010f71d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
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
LAB_0010f71d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_0010f9dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010fa40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010fa40:
      uVar6 = 4;
LAB_0010f9dd:
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
      goto LAB_0010f95b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010f95b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC104;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0010f9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010faa6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var4,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010faa6:
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
    goto LAB_0010fdad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010fe10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010fe10:
      uVar6 = 4;
LAB_0010fdad:
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
      goto LAB_0010fd2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010fd2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC105;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010fd87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC95,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010fe76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010fe76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_001100b7;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001101b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001101b5;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_001100b7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRC<StringName,StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00110454;
  }
  local_70 = 0;
  local_68 = &_LC6;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0x15;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00110487:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00110487;
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
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110454:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<StringName,StringName_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00110595;
  }
  local_70 = 0;
  local_68 = &_LC6;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x15;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001106a7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001106a7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110595:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<StringName const&, StringName const&, int, StringName
   const&>(int, PropertyInfo&) */

void call_get_argument_type_info<StringName_const&,StringName_const&,int,StringName_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_9c;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_9c,param_2);
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_9c,param_2);
  iVar3 = local_9c;
  if (param_1 != local_9c) goto LAB_0011075a;
  local_88 = 0;
  local_78 = &_LC6;
  local_90 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00110875:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00110875;
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
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar4 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  if (*(long *)(param_2 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  *(int *)(param_2 + 0x18) = local_60;
  if (*(long *)(param_2 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(param_2 + 0x20) = lVar5;
  }
  *(undefined4 *)(param_2 + 0x28) = local_50;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
LAB_0011075a:
  local_9c = iVar3 + 1;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_9c,param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::
_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<StringName_const&,StringName_const&,int,StringName_const&>
              (in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00110a29;
  }
  local_70 = 0;
  local_68 = &_LC6;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x15;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00110b37:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00110b37;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110a29:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00110bb7;
  local_78 = 0;
  local_68 = &_LC6;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110cb5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110cb5;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00110bb7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Ref<Translation>, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Translation>,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
    goto LAB_00110e75;
  }
  local_70 = 0;
  local_68 = "Translation";
  local_78 = 0;
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar3[10] = 6;
LAB_00110f87:
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(char **)(puVar3 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar3 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_78);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) goto LAB_00110f87;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_70);
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110e75:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* TranslationDomain::~TranslationDomain() */

void __thiscall TranslationDomain::~TranslationDomain(TranslationDomain *this)

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
/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

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
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

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
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this)

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
/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Translation>, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Translation>,String_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<Translation>,String_const&> *this)

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


