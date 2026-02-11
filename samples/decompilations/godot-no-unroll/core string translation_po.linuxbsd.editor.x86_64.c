
/* TranslationPO::get_plural_forms() const */

undefined4 __thiscall TranslationPO::get_plural_forms(TranslationPO *this)

{
  return *(undefined4 *)(this + 0x2d8);
}



/* TranslationPO::get_message_count() const */

int __thiscall TranslationPO::get_message_count(TranslationPO *this)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined8 **)(this + 0x2c0); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    iVar2 = iVar2 + *(int *)((long)puVar1 + 0x44);
  }
  return iVar2;
}



/* TranslationPO::get_message_list(List<StringName, DefaultAllocator>*) const */

void __thiscall TranslationPO::get_message_list(TranslationPO *this,List *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  StringName *this_00;
  StringName *pSVar5;
  long *plVar6;
  
  for (puVar1 = *(undefined8 **)(this + 0x2c0); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if ((puVar1[2] == 0) && (plVar6 = (long *)puVar1[6], plVar6 != (long *)0x0)) {
      pSVar5 = (StringName *)(plVar6 + 2);
      if (*(long *)param_1 == 0) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar4;
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
      }
      while( true ) {
        this_00 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(this_00,pSVar5);
        plVar2 = *(long **)param_1;
        lVar3 = plVar2[1];
        *(undefined8 *)(this_00 + 8) = 0;
        *(long **)(this_00 + 0x18) = plVar2;
        *(long *)(this_00 + 0x10) = lVar3;
        if (lVar3 != 0) {
          *(StringName **)(lVar3 + 8) = this_00;
        }
        plVar2[1] = (long)this_00;
        if (*plVar2 == 0) {
          *plVar2 = (long)this_00;
        }
        plVar6 = (long *)*plVar6;
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        if (plVar6 == (long *)0x0) break;
        pSVar5 = (StringName *)(plVar6 + 2);
      }
    }
  }
  return;
}



/* TranslationPO::_get_messages() const */

Dictionary * TranslationPO::_get_messages(void)

{
  undefined8 *puVar1;
  Variant *pVVar2;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  long *local_98;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  local_98 = *(long **)(in_RSI + 0x2c0);
  if (local_98 != (long *)0x0) {
    do {
      Dictionary::Dictionary(local_80);
      for (puVar1 = (undefined8 *)local_98[6]; puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        Variant::Variant((Variant *)local_58,(Vector *)(puVar1 + 3));
        Variant::Variant((Variant *)local_78,(StringName *)(puVar1 + 2));
        pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
        if (pVVar2 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar2 = 0;
          *(int *)pVVar2 = local_58[0];
          *(undefined8 *)(pVVar2 + 8) = local_50;
          *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Variant::Variant((Variant *)local_58,local_80);
      Variant::Variant((Variant *)local_78,(StringName *)(local_98 + 2));
      pVVar2 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar2 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar2 = 0;
        *(int *)pVVar2 = local_58[0];
        *(undefined8 *)(pVVar2 + 8) = local_50;
        *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary(local_80);
      local_98 = (long *)*local_98;
    } while (local_98 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
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



/* TranslationPO::get_plural_rule() const */

void TranslationPO::get_plural_rule(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x2e0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x2e0));
  }
  return;
}



/* TranslationPO::_find_unquoted(String const&, char32_t) const */

ulong __thiscall TranslationPO::_find_unquoted(TranslationPO *this,String *param_1,wchar32 param_2)

{
  ulong uVar1;
  wchar32 wVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  
  if (*(long *)param_1 == 0) {
    return 0xffffffff;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)param_1 + -8);
  if (((iVar5 != 0) && (iVar5 != 1)) && (lVar3 = String::get_data(), 0 < iVar5 + -1)) {
    uVar6 = (ulong)(iVar5 - 2);
    bVar8 = false;
    uVar4 = 0;
    do {
      while (wVar2 = *(wchar32 *)(lVar3 + uVar4 * 4), !bVar8) {
        while (wVar2 != L'(') {
          if (param_2 == wVar2) {
            return uVar4 & 0xffffffff;
          }
          if (uVar6 == uVar4) {
            return 0xffffffff;
          }
          wVar2 = *(wchar32 *)(lVar3 + (uVar4 + 1) * 4);
          uVar4 = uVar4 + 1;
        }
        uVar1 = uVar4 + 1;
        if (uVar6 == uVar4) {
          return 0xffffffff;
        }
        bVar8 = *(int *)(lVar3 + uVar1 * 4) != 0x29;
        uVar4 = uVar4 + 2;
        if (uVar6 == uVar1) {
          return 0xffffffff;
        }
      }
      bVar8 = wVar2 != L')';
      bVar7 = uVar6 != uVar4;
      uVar4 = uVar4 + 1;
    } while (bVar7);
  }
  return 0xffffffff;
}



/* TranslationPO::_eq_test(Ref<TranslationPO::EQNode> const&, Variant const&) const */

int __thiscall TranslationPO::_eq_test(TranslationPO *this,Ref *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar7 = Variant::operator_cast_to_int(param_2);
      return iVar7;
    }
  }
  else {
    iVar7 = Expression::parse(*(String **)(this + 0x300),(Vector *)(*(long *)param_1 + 0x180));
    if (iVar7 == 0) {
      Expression::execute((Array *)local_38,*(Object **)(this + 0x300),(bool)((char)this + '\b'),
                          false);
      cVar5 = Expression::has_execute_failed();
      if (cVar5 == '\0') {
        bVar6 = Variant::operator_cast_to_bool((Variant *)local_38);
        if (bVar6) {
          iVar7 = _eq_test(this,(Ref *)(*(long *)param_1 + 0x188),(Variant *)local_38);
        }
        else {
          iVar7 = _eq_test(this,(Ref *)(*(long *)param_1 + 400),(Variant *)local_38);
        }
      }
      else {
        local_50 = 0;
        lVar2 = *(long *)param_1;
        lVar3 = *(long *)(lVar2 + 0x180);
        plVar1 = (long *)(lVar3 + -0x10);
        if (lVar3 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001007da;
            LOCK();
            lVar8 = *plVar1;
            bVar6 = lVar3 == lVar8;
            if (bVar6) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar6);
          if (lVar8 != -1) {
            local_50 = *(long *)(lVar2 + 0x180);
          }
        }
LAB_001007da:
        local_58 = 0;
        local_40 = 0x20;
        local_48 = "Cannot evaluate expression \"%s\".";
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,(StrRange *)&local_58,&local_50);
        _err_print_error("_eq_test","core/string/translation_po.cpp",0x98,
                         "Condition \"expr->has_execute_failed()\" is true. Returning: 0",&local_48,
                         0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
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
        iVar7 = 0;
      }
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      Expression::get_error_text();
      lVar2 = *(long *)param_1;
      local_50 = 0;
      lVar3 = *(long *)(lVar2 + 0x180);
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00100656;
          LOCK();
          lVar8 = *plVar1;
          bVar6 = lVar3 == lVar8;
          if (bVar6) {
            *plVar1 = lVar3 + 1;
            lVar8 = lVar3;
          }
          UNLOCK();
        } while (!bVar6);
        if (lVar8 != -1) {
          local_50 = *(long *)(lVar2 + 0x180);
        }
      }
LAB_00100656:
      local_58 = 0;
      local_40 = 0x27;
      local_48 = "Cannot parse expression \"%s\". Error: %s";
      String::parse_latin1((StrRange *)&local_58);
      vformat<String,String>(&local_48,(StrRange *)&local_58,&local_50,&local_60);
      _err_print_error("_eq_test","core/string/translation_po.cpp",0x95,
                       "Condition \"err != OK\" is true. Returning: 0",&local_48,0,0);
      pcVar4 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
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
      iVar7 = 0;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::_get_plural_index(int) const */

ulong __thiscall TranslationPO::_get_plural_index(TranslationPO *this,int param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::clear();
  Variant::Variant((Variant *)local_48,param_1);
  Array::push_back((Variant *)(this + 0x308));
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,0);
  uVar1 = _eq_test(this,(Ref *)(this + 0x2e8),(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
    uVar1 = uVar1 & 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::get_message(StringName const&, StringName const&) const */

StringName * TranslationPO::get_message(StringName *param_1,StringName *param_2)

{
  long *plVar1;
  uint uVar2;
  StringName *pSVar3;
  char *pcVar4;
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  code *pcVar61;
  uint uVar62;
  long *in_RCX;
  int iVar63;
  long *in_RDX;
  long lVar64;
  long lVar65;
  uint uVar66;
  ulong uVar67;
  long lVar68;
  uint uVar69;
  uint uVar70;
  long in_FS_OFFSET;
  bool bVar71;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
    lVar68 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
    if (*in_RCX == 0) {
      uVar62 = StringName::get_empty_hash();
    }
    else {
      uVar62 = *(uint *)(*in_RCX + 0x20);
    }
    uVar67 = CONCAT44(0,uVar2);
    lVar65 = *(long *)(param_2 + 0x2b8);
    if (uVar62 == 0) {
      uVar62 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar62 * lVar68;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar67;
    lVar64 = SUB168(auVar5 * auVar33,8);
    uVar66 = *(uint *)(lVar65 + lVar64 * 4);
    iVar63 = SUB164(auVar5 * auVar33,8);
    if (uVar66 != 0) {
      uVar69 = 0;
      do {
        if ((uVar66 == uVar62) &&
           (lVar64 = *(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar64 * 8) + 0x10),
           lVar64 == *in_RCX)) {
          if ((*(long *)(param_2 + 0x2b0) == 0) || (*(int *)(param_2 + 0x2d4) == 0))
          goto LAB_00101208;
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
          uVar67 = CONCAT44(0,uVar2);
          lVar68 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
          if (lVar64 == 0) {
            uVar62 = StringName::get_empty_hash();
            lVar65 = *(long *)(param_2 + 0x2b8);
          }
          else {
            uVar62 = *(uint *)(lVar64 + 0x20);
          }
          if (uVar62 == 0) {
            uVar62 = 1;
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar62 * lVar68;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = uVar67;
          lVar64 = SUB168(auVar9 * auVar37,8);
          uVar66 = *(uint *)(lVar65 + lVar64 * 4);
          uVar69 = SUB164(auVar9 * auVar37,8);
          if (uVar66 == 0) goto LAB_00101208;
          uVar70 = 0;
          goto LAB_00100b9a;
        }
        uVar69 = uVar69 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar63 + 1) * lVar68;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar67;
        lVar64 = SUB168(auVar6 * auVar34,8);
        uVar66 = *(uint *)(lVar65 + lVar64 * 4);
        iVar63 = SUB164(auVar6 * auVar34,8);
      } while ((uVar66 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar66 * lVar68, auVar35._8_8_ = 0,
              auVar35._0_8_ = uVar67, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar2 + iVar63) - SUB164(auVar7 * auVar35,8)) * lVar68,
              auVar36._8_8_ = 0, auVar36._0_8_ = uVar67, uVar69 <= SUB164(auVar8 * auVar36,8)));
    }
  }
  goto LAB_001011d0;
  while( true ) {
    uVar70 = uVar70 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(uVar69 + 1) * lVar68;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar67;
    lVar64 = SUB168(auVar10 * auVar38,8);
    uVar66 = *(uint *)(lVar65 + lVar64 * 4);
    uVar69 = SUB164(auVar10 * auVar38,8);
    if ((uVar66 == 0) ||
       (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar66 * lVar68, auVar39._8_8_ = 0,
       auVar39._0_8_ = uVar67, auVar12._8_8_ = 0,
       auVar12._0_8_ = (ulong)((uVar2 + uVar69) - SUB164(auVar11 * auVar39,8)) * lVar68,
       auVar40._8_8_ = 0, auVar40._0_8_ = uVar67, SUB164(auVar12 * auVar40,8) < uVar70)) break;
LAB_00100b9a:
    if ((uVar66 == uVar62) &&
       (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar64 * 8) + 0x10) == *in_RCX)) {
      lVar68 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar69 * 8);
      if ((*(long *)(lVar68 + 0x20) == 0) || (*(int *)(lVar68 + 0x44) == 0)) goto LAB_001011d0;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar68 + 0x40) * 4);
      uVar67 = CONCAT44(0,uVar2);
      lVar65 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar68 + 0x40) * 8);
      if (*in_RDX == 0) {
        uVar62 = StringName::get_empty_hash();
      }
      else {
        uVar62 = *(uint *)(*in_RDX + 0x20);
      }
      if (uVar62 == 0) {
        uVar62 = 1;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar62 * lVar65;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar67;
      lVar64 = SUB168(auVar13 * auVar41,8);
      uVar66 = *(uint *)(*(long *)(lVar68 + 0x28) + lVar64 * 4);
      iVar63 = SUB164(auVar13 * auVar41,8);
      if (uVar66 == 0) goto LAB_001011d0;
      uVar69 = 0;
      goto LAB_00100c8a;
    }
  }
  goto LAB_00101208;
  while( true ) {
    uVar69 = uVar69 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar63 + 1) * lVar65;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar67;
    lVar64 = SUB168(auVar14 * auVar42,8);
    uVar66 = *(uint *)(*(long *)(lVar68 + 0x28) + lVar64 * 4);
    iVar63 = SUB164(auVar14 * auVar42,8);
    if ((uVar66 == 0) ||
       (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar66 * lVar65, auVar43._8_8_ = 0,
       auVar43._0_8_ = uVar67, auVar16._8_8_ = 0,
       auVar16._0_8_ = (ulong)((uVar2 + iVar63) - SUB164(auVar15 * auVar43,8)) * lVar65,
       auVar44._8_8_ = 0, auVar44._0_8_ = uVar67, SUB164(auVar16 * auVar44,8) < uVar69)) break;
LAB_00100c8a:
    if ((uVar66 == uVar62) &&
       (*(long *)(*(long *)(*(long *)(lVar68 + 0x20) + lVar64 * 8) + 0x10) == *in_RDX)) {
      if ((*(long *)(param_2 + 0x2b0) == 0) || (*(int *)(param_2 + 0x2d4) == 0)) goto LAB_00101208;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
      uVar67 = CONCAT44(0,uVar2);
      lVar68 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
      if (*in_RCX == 0) {
        uVar62 = StringName::get_empty_hash();
      }
      else {
        uVar62 = *(uint *)(*in_RCX + 0x20);
      }
      if (uVar62 == 0) {
        uVar62 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar62 * lVar68;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar67;
      lVar65 = SUB168(auVar17 * auVar45,8);
      uVar66 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar65 * 4);
      uVar69 = SUB164(auVar17 * auVar45,8);
      if (uVar66 == 0) goto LAB_00101208;
      uVar70 = 0;
      goto LAB_00100d7a;
    }
  }
  goto LAB_001011d0;
LAB_00100d7a:
  if ((uVar62 == uVar66) &&
     (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar65 * 8) + 0x10) == *in_RCX)) {
    lVar68 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar69 * 8);
    if ((*(long *)(lVar68 + 0x20) != 0) && (*(int *)(lVar68 + 0x44) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar68 + 0x40) * 4);
      uVar67 = CONCAT44(0,uVar2);
      lVar65 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar68 + 0x40) * 8);
      if (*in_RDX == 0) {
        uVar62 = StringName::get_empty_hash();
      }
      else {
        uVar62 = *(uint *)(*in_RDX + 0x20);
      }
      uVar66 = 1;
      if (uVar62 != 0) {
        uVar66 = uVar62;
      }
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)uVar66 * lVar65;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar67;
      lVar64 = SUB168(auVar21 * auVar49,8);
      uVar62 = *(uint *)(*(long *)(lVar68 + 0x28) + lVar64 * 4);
      uVar69 = SUB164(auVar21 * auVar49,8);
      if (uVar62 != 0) {
        uVar70 = 0;
        goto LAB_00100e6a;
      }
    }
    goto LAB_00101208;
  }
  uVar70 = uVar70 + 1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = (ulong)(uVar69 + 1) * lVar68;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar67;
  lVar65 = SUB168(auVar18 * auVar46,8);
  uVar66 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar65 * 4);
  uVar69 = SUB164(auVar18 * auVar46,8);
  if ((uVar66 == 0) ||
     (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar66 * lVar68, auVar47._8_8_ = 0,
     auVar47._0_8_ = uVar67, auVar20._8_8_ = 0,
     auVar20._0_8_ = (ulong)((uVar2 + uVar69) - SUB164(auVar19 * auVar47,8)) * lVar68,
     auVar48._8_8_ = 0, auVar48._0_8_ = uVar67, SUB164(auVar20 * auVar48,8) < uVar70))
  goto LAB_00101208;
  goto LAB_00100d7a;
LAB_00100e6a:
  if (uVar66 == uVar62) {
    lVar64 = *(long *)(*(long *)(*(long *)(lVar68 + 0x20) + lVar64 * 8) + 0x10);
    if (lVar64 == *in_RDX) {
      if (*(long *)(*(long *)(*(long *)(lVar68 + 0x20) + (ulong)uVar69 * 8) + 0x20) == 0) {
        if (lVar64 == 0) goto LAB_001012e3;
        pcVar4 = *(char **)(lVar64 + 8);
        local_68 = 0;
        if (pcVar4 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar64 + 0x10) + -0x10);
          if (*(long *)(lVar64 + 0x10) == 0) goto LAB_001012e3;
          goto LAB_001012ff;
        }
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_68);
        goto LAB_001010e3;
      }
      if ((*(long *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
        uVar67 = CONCAT44(0,uVar2);
        lVar68 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
        if (*in_RCX == 0) {
          uVar62 = StringName::get_empty_hash();
        }
        else {
          uVar62 = *(uint *)(*in_RCX + 0x20);
        }
        if (uVar62 == 0) {
          uVar62 = 1;
        }
        auVar25._8_8_ = 0;
        auVar25._0_8_ = (ulong)uVar62 * lVar68;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = uVar67;
        lVar65 = SUB168(auVar25 * auVar53,8);
        uVar66 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar65 * 4);
        uVar69 = SUB164(auVar25 * auVar53,8);
        if (uVar66 != 0) {
          uVar70 = 0;
          goto LAB_00100f6a;
        }
      }
      goto LAB_00101208;
    }
  }
  uVar70 = uVar70 + 1;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = (ulong)(uVar69 + 1) * lVar65;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar67;
  lVar64 = SUB168(auVar22 * auVar50,8);
  uVar62 = *(uint *)(*(long *)(lVar68 + 0x28) + lVar64 * 4);
  uVar69 = SUB164(auVar22 * auVar50,8);
  if ((uVar62 == 0) ||
     (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)uVar62 * lVar65, auVar51._8_8_ = 0,
     auVar51._0_8_ = uVar67, auVar24._8_8_ = 0,
     auVar24._0_8_ = (ulong)((uVar2 + uVar69) - SUB164(auVar23 * auVar51,8)) * lVar65,
     auVar52._8_8_ = 0, auVar52._0_8_ = uVar67, SUB164(auVar24 * auVar52,8) < uVar70))
  goto LAB_00101208;
  goto LAB_00100e6a;
LAB_00100f6a:
  if ((uVar62 == uVar66) &&
     (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar65 * 8) + 0x10) == *in_RCX)) {
    lVar68 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar69 * 8);
    if ((*(long *)(lVar68 + 0x20) != 0) && (*(int *)(lVar68 + 0x44) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar68 + 0x40) * 4);
      uVar67 = CONCAT44(0,uVar2);
      lVar65 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar68 + 0x40) * 8);
      if (*in_RDX == 0) {
        uVar62 = StringName::get_empty_hash();
      }
      else {
        uVar62 = *(uint *)(*in_RDX + 0x20);
      }
      if (uVar62 == 0) {
        uVar62 = 1;
      }
      auVar29._8_8_ = 0;
      auVar29._0_8_ = (ulong)uVar62 * lVar65;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar67;
      lVar64 = SUB168(auVar29 * auVar57,8);
      uVar66 = *(uint *)(*(long *)(lVar68 + 0x28) + lVar64 * 4);
      uVar69 = SUB164(auVar29 * auVar57,8);
      if (uVar66 != 0) {
        uVar70 = 0;
        goto LAB_0010105a;
      }
    }
    goto LAB_00101208;
  }
  uVar70 = uVar70 + 1;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = (ulong)(uVar69 + 1) * lVar68;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar67;
  lVar65 = SUB168(auVar26 * auVar54,8);
  uVar66 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar65 * 4);
  uVar69 = SUB164(auVar26 * auVar54,8);
  if ((uVar66 == 0) ||
     (auVar27._8_8_ = 0, auVar27._0_8_ = (ulong)uVar66 * lVar68, auVar55._8_8_ = 0,
     auVar55._0_8_ = uVar67, auVar28._8_8_ = 0,
     auVar28._0_8_ = (ulong)((uVar2 + uVar69) - SUB164(auVar27 * auVar55,8)) * lVar68,
     auVar56._8_8_ = 0, auVar56._0_8_ = uVar67, SUB164(auVar28 * auVar56,8) < uVar70))
  goto LAB_00101208;
  goto LAB_00100f6a;
  while( true ) {
    uVar70 = uVar70 + 1;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = (ulong)(uVar69 + 1) * lVar65;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar67;
    lVar64 = SUB168(auVar30 * auVar58,8);
    uVar66 = *(uint *)(*(long *)(lVar68 + 0x28) + lVar64 * 4);
    uVar69 = SUB164(auVar30 * auVar58,8);
    if ((uVar66 == 0) ||
       (auVar31._8_8_ = 0, auVar31._0_8_ = (ulong)uVar66 * lVar65, auVar59._8_8_ = 0,
       auVar59._0_8_ = uVar67, auVar32._8_8_ = 0,
       auVar32._0_8_ = (ulong)((uVar2 + uVar69) - SUB164(auVar31 * auVar59,8)) * lVar65,
       auVar60._8_8_ = 0, auVar60._0_8_ = uVar67, SUB164(auVar32 * auVar60,8) < uVar70)) break;
LAB_0010105a:
    if ((uVar62 == uVar66) &&
       (*(long *)(*(long *)(*(long *)(lVar68 + 0x20) + lVar64 * 8) + 0x10) == *in_RDX)) {
      pSVar3 = *(StringName **)(*(long *)(*(long *)(lVar68 + 0x20) + (ulong)uVar69 * 8) + 0x20);
      if (pSVar3 == (StringName *)0x0) {
        lVar68 = 0;
      }
      else {
        lVar68 = *(long *)(pSVar3 + -8);
        if (0 < lVar68) {
          StringName::StringName(param_1,pSVar3);
          goto LAB_001011dc;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar68,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar61 = (code *)invalidInstructionException();
      (*pcVar61)();
    }
  }
LAB_00101208:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar61 = (code *)invalidInstructionException();
  (*pcVar61)();
  while( true ) {
    LOCK();
    lVar65 = *plVar1;
    bVar71 = lVar68 == lVar65;
    if (bVar71) {
      *plVar1 = lVar68 + 1;
      lVar65 = lVar68;
    }
    UNLOCK();
    if (bVar71) break;
LAB_001012ff:
    lVar68 = *plVar1;
    if (lVar68 == 0) goto LAB_001012e3;
  }
  if (lVar65 == -1) {
LAB_001012e3:
    local_68 = 0;
  }
  else {
    local_68 = *(long *)(lVar64 + 0x10);
  }
LAB_001010e3:
  local_60 = 0;
  local_58 = 
  "Source text \"%s\" is registered but doesn\'t have a translation. Please report this bug.";
  local_50 = 0x56;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>(&local_58,(StrRange *)&local_60,&local_68);
  _err_print_error("get_message","core/string/translation_po.cpp",0x11b,
                   "Condition \"translation_map[p_context][p_src_text].is_empty()\" is true. Returning: StringName()"
                   ,&local_58,0,0);
  pcVar4 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar68 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar68 + -0x10),false);
    }
  }
  lVar68 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar68 + -0x10),false);
    }
  }
LAB_001011d0:
  *(undefined8 *)param_1 = 0;
LAB_001011dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* TranslationPO::get_plural_message(StringName const&, StringName const&, int, StringName const&)
   const */

StringName *
TranslationPO::get_plural_message
          (StringName *param_1,StringName *param_2,int param_3,StringName *param_4)

{
  long *plVar1;
  uint uVar2;
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  code *pcVar91;
  int iVar92;
  uint uVar93;
  char *pcVar94;
  undefined4 in_register_00000014;
  StringName *pSVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  undefined8 uVar99;
  uint uVar100;
  int in_R8D;
  ulong uVar101;
  char *pcVar102;
  StringName *in_R9;
  uint uVar103;
  uint uVar104;
  long in_FS_OFFSET;
  bool bVar105;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  pSVar95 = (StringName *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < in_R8D) {
    if (((*(int *)(param_2 + 800) == in_R8D) &&
        (lVar98 = *(long *)in_R9, *(long *)(param_2 + 0x318) == lVar98)) &&
       (*(long *)pSVar95 == *(long *)(param_2 + 0x310))) {
      if ((*(long *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
        uVar101 = CONCAT44(0,uVar2);
        lVar97 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
        if (lVar98 == 0) {
          uVar93 = StringName::get_empty_hash();
        }
        else {
          uVar93 = *(uint *)(lVar98 + 0x20);
        }
        if (uVar93 == 0) {
          uVar93 = 1;
        }
        auVar39._8_8_ = 0;
        auVar39._0_8_ = (ulong)uVar93 * lVar97;
        auVar83._8_8_ = 0;
        auVar83._0_8_ = uVar101;
        lVar98 = SUB168(auVar39 * auVar83,8);
        uVar100 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar98 * 4);
        uVar103 = SUB164(auVar39 * auVar83,8);
        if (uVar100 != 0) {
          uVar104 = 0;
          while ((uVar100 != uVar93 ||
                 (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar98 * 8) + 0x10) !=
                  *(long *)in_R9))) {
            uVar104 = uVar104 + 1;
            auVar40._8_8_ = 0;
            auVar40._0_8_ = (ulong)(uVar103 + 1) * lVar97;
            auVar84._8_8_ = 0;
            auVar84._0_8_ = uVar101;
            lVar98 = SUB168(auVar40 * auVar84,8);
            uVar100 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar98 * 4);
            uVar103 = SUB164(auVar40 * auVar84,8);
            if ((uVar100 == 0) ||
               (auVar41._8_8_ = 0, auVar41._0_8_ = (ulong)uVar100 * lVar97, auVar85._8_8_ = 0,
               auVar85._0_8_ = uVar101, auVar42._8_8_ = 0,
               auVar42._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar41 * auVar85,8)) * lVar97,
               auVar86._8_8_ = 0, auVar86._0_8_ = uVar101, SUB164(auVar42 * auVar86,8) < uVar104))
            goto LAB_00101e38;
          }
          lVar98 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar103 * 8);
          if ((*(long *)(lVar98 + 0x20) != 0) && (*(int *)(lVar98 + 0x44) != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar98 + 0x40) * 4);
            uVar101 = CONCAT44(0,uVar2);
            lVar97 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar98 + 0x40) * 8);
            if (*(long *)pSVar95 == 0) {
              uVar93 = StringName::get_empty_hash();
            }
            else {
              uVar93 = *(uint *)(*(long *)pSVar95 + 0x20);
            }
            if (uVar93 == 0) {
              uVar93 = 1;
            }
            auVar43._8_8_ = 0;
            auVar43._0_8_ = (ulong)uVar93 * lVar97;
            auVar87._8_8_ = 0;
            auVar87._0_8_ = uVar101;
            lVar96 = SUB168(auVar43 * auVar87,8);
            uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
            uVar103 = SUB164(auVar43 * auVar87,8);
            if (uVar100 != 0) {
              uVar104 = 0;
              goto LAB_00102039;
            }
          }
        }
      }
      goto LAB_00101e38;
    }
    if ((*(long *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
      lVar98 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
      if (*(long *)in_R9 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)in_R9 + 0x20);
      }
      uVar101 = CONCAT44(0,uVar2);
      lVar97 = *(long *)(param_2 + 0x2b8);
      if (uVar93 == 0) {
        uVar93 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar93 * lVar98;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar101;
      lVar96 = SUB168(auVar3 * auVar47,8);
      uVar100 = *(uint *)(lVar97 + lVar96 * 4);
      iVar92 = SUB164(auVar3 * auVar47,8);
      if (uVar100 != 0) {
        uVar103 = 0;
        do {
          if ((uVar100 == uVar93) &&
             (lVar96 = *(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar96 * 8) + 0x10),
             lVar96 == *(long *)in_R9)) {
            if ((*(long *)(param_2 + 0x2b0) == 0) || (*(int *)(param_2 + 0x2d4) == 0))
            goto LAB_00101e38;
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
            uVar101 = CONCAT44(0,uVar2);
            lVar98 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
            if (lVar96 == 0) {
              uVar93 = StringName::get_empty_hash();
              lVar97 = *(long *)(param_2 + 0x2b8);
            }
            else {
              uVar93 = *(uint *)(lVar96 + 0x20);
            }
            if (uVar93 == 0) {
              uVar93 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar93 * lVar98;
            auVar51._8_8_ = 0;
            auVar51._0_8_ = uVar101;
            lVar96 = SUB168(auVar7 * auVar51,8);
            uVar100 = *(uint *)(lVar97 + lVar96 * 4);
            uVar103 = SUB164(auVar7 * auVar51,8);
            if (uVar100 == 0) goto LAB_00101e38;
            uVar104 = 0;
            goto LAB_0010155a;
          }
          uVar103 = uVar103 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar92 + 1) * lVar98;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = uVar101;
          lVar96 = SUB168(auVar4 * auVar48,8);
          uVar100 = *(uint *)(lVar97 + lVar96 * 4);
          iVar92 = SUB164(auVar4 * auVar48,8);
        } while ((uVar100 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar100 * lVar98, auVar49._8_8_ = 0,
                auVar49._0_8_ = uVar101, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar2 + iVar92) - SUB164(auVar5 * auVar49,8)) * lVar98,
                auVar50._8_8_ = 0, auVar50._0_8_ = uVar101, uVar103 <= SUB164(auVar6 * auVar50,8)));
      }
    }
    goto LAB_00101e00;
  }
  pcVar102 = 
  "N passed into translation to get a plural message should not be negative. For negative numbers, use singular translation please. Search \"gettext PO Plural Forms\" online for the documentation on translating negative numbers."
  ;
  uVar99 = 0x121;
  pcVar94 = "Condition \"p_n < 0\" is true. Returning: StringName()";
  goto LAB_001020ec;
  while( true ) {
    uVar104 = uVar104 + 1;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = (ulong)(uVar103 + 1) * lVar97;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar101;
    lVar96 = SUB168(auVar44 * auVar88,8);
    uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
    uVar103 = SUB164(auVar44 * auVar88,8);
    if ((uVar100 == 0) ||
       (auVar45._8_8_ = 0, auVar45._0_8_ = (ulong)uVar100 * lVar97, auVar89._8_8_ = 0,
       auVar89._0_8_ = uVar101, auVar46._8_8_ = 0,
       auVar46._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar45 * auVar89,8)) * lVar97,
       auVar90._8_8_ = 0, auVar90._0_8_ = uVar101, SUB164(auVar46 * auVar90,8) < uVar104)) break;
LAB_00102039:
    if ((uVar93 == uVar100) &&
       (*(long *)(*(long *)(*(long *)(lVar98 + 0x20) + lVar96 * 8) + 0x10) == *(long *)pSVar95)) {
      lVar97 = (long)*(int *)(param_2 + 0x324);
      lVar98 = *(long *)(*(long *)(*(long *)(lVar98 + 0x20) + (ulong)uVar103 * 8) + 0x20);
      if (lVar97 < 0) {
        if (lVar98 == 0) goto LAB_001021af;
      }
      else {
        if (lVar98 == 0) goto LAB_001021af;
        if (lVar97 < *(long *)(lVar98 + -8)) goto LAB_00101cbb;
      }
      lVar96 = *(long *)(lVar98 + -8);
      goto LAB_0010207e;
    }
  }
  goto LAB_00101e38;
  while( true ) {
    uVar103 = uVar103 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar92 + 1) * lVar97;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar101;
    lVar96 = SUB168(auVar12 * auVar56,8);
    uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
    iVar92 = SUB164(auVar12 * auVar56,8);
    if ((uVar100 == 0) ||
       (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar100 * lVar97, auVar57._8_8_ = 0,
       auVar57._0_8_ = uVar101, auVar14._8_8_ = 0,
       auVar14._0_8_ = (ulong)((uVar2 + iVar92) - SUB164(auVar13 * auVar57,8)) * lVar97,
       auVar58._8_8_ = 0, auVar58._0_8_ = uVar101, SUB164(auVar14 * auVar58,8) < uVar103)) break;
LAB_00101652:
    if ((uVar100 == uVar93) &&
       (*(long *)(*(long *)(*(long *)(lVar98 + 0x20) + lVar96 * 8) + 0x10) == *(long *)pSVar95)) {
      if ((*(long *)(param_2 + 0x2b0) == 0) || (*(int *)(param_2 + 0x2d4) == 0)) goto LAB_00101e38;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
      uVar101 = CONCAT44(0,uVar2);
      lVar98 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
      if (*(long *)in_R9 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)in_R9 + 0x20);
      }
      if (uVar93 == 0) {
        uVar93 = 1;
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar93 * lVar98;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar101;
      lVar97 = SUB168(auVar15 * auVar59,8);
      uVar100 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar97 * 4);
      uVar103 = SUB164(auVar15 * auVar59,8);
      if (uVar100 == 0) goto LAB_00101e38;
      uVar104 = 0;
      goto LAB_00101742;
    }
  }
  goto LAB_00101e00;
LAB_00101742:
  if ((uVar100 == uVar93) &&
     (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar97 * 8) + 0x10) == *(long *)in_R9)) {
    lVar98 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar103 * 8);
    if ((*(long *)(lVar98 + 0x20) != 0) && (*(int *)(lVar98 + 0x44) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar98 + 0x40) * 4);
      uVar101 = CONCAT44(0,uVar2);
      lVar97 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar98 + 0x40) * 8);
      if (*(long *)pSVar95 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)pSVar95 + 0x20);
      }
      if (uVar93 == 0) {
        uVar93 = 1;
      }
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar93 * lVar97;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar101;
      lVar96 = SUB168(auVar19 * auVar63,8);
      uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
      uVar103 = SUB164(auVar19 * auVar63,8);
      if (uVar100 != 0) {
        uVar104 = 0;
        goto LAB_00101842;
      }
    }
    goto LAB_00101e38;
  }
  uVar104 = uVar104 + 1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar103 + 1) * lVar98;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar101;
  lVar97 = SUB168(auVar16 * auVar60,8);
  uVar100 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar97 * 4);
  uVar103 = SUB164(auVar16 * auVar60,8);
  if ((uVar100 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar100 * lVar98, auVar61._8_8_ = 0,
     auVar61._0_8_ = uVar101, auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar17 * auVar61,8)) * lVar98,
     auVar62._8_8_ = 0, auVar62._0_8_ = uVar101, SUB164(auVar18 * auVar62,8) < uVar104))
  goto LAB_00101e38;
  goto LAB_00101742;
LAB_00101842:
  if (uVar100 == uVar93) {
    lVar96 = *(long *)(*(long *)(*(long *)(lVar98 + 0x20) + lVar96 * 8) + 0x10);
    if (lVar96 == *(long *)pSVar95) {
      if (*(long *)(*(long *)(*(long *)(lVar98 + 0x20) + (ulong)uVar103 * 8) + 0x20) == 0) {
        if (lVar96 == 0) goto LAB_001021cd;
        pcVar94 = *(char **)(lVar96 + 8);
        local_68 = 0;
        if (pcVar94 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar96 + 0x10) + -0x10);
          if (*(long *)(lVar96 + 0x10) == 0) goto LAB_001021cd;
          goto LAB_001021e9;
        }
        local_50 = strlen(pcVar94);
        local_58 = pcVar94;
        String::parse_latin1((StrRange *)&local_68);
        goto LAB_00101d14;
      }
      iVar92 = _get_plural_index((TranslationPO *)param_2,in_R8D);
      if (iVar92 < 0) goto LAB_0010214d;
      if ((*(long *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
        uVar101 = CONCAT44(0,uVar2);
        lVar98 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
        if (*(long *)in_R9 == 0) {
          uVar93 = StringName::get_empty_hash();
        }
        else {
          uVar93 = *(uint *)(*(long *)in_R9 + 0x20);
        }
        uVar100 = 1;
        if (uVar93 != 0) {
          uVar100 = uVar93;
        }
        auVar23._8_8_ = 0;
        auVar23._0_8_ = (ulong)uVar100 * lVar98;
        auVar67._8_8_ = 0;
        auVar67._0_8_ = uVar101;
        lVar97 = SUB168(auVar23 * auVar67,8);
        uVar93 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar97 * 4);
        uVar103 = SUB164(auVar23 * auVar67,8);
        if (uVar93 != 0) {
          uVar104 = 0;
          goto LAB_0010195a;
        }
      }
      goto LAB_00101e38;
    }
  }
  uVar104 = uVar104 + 1;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = (ulong)(uVar103 + 1) * lVar97;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = uVar101;
  lVar96 = SUB168(auVar20 * auVar64,8);
  uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
  uVar103 = SUB164(auVar20 * auVar64,8);
  if ((uVar100 == 0) ||
     (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar100 * lVar97, auVar65._8_8_ = 0,
     auVar65._0_8_ = uVar101, auVar22._8_8_ = 0,
     auVar22._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar21 * auVar65,8)) * lVar97,
     auVar66._8_8_ = 0, auVar66._0_8_ = uVar101, SUB164(auVar22 * auVar66,8) < uVar104))
  goto LAB_00101e38;
  goto LAB_00101842;
  while( true ) {
    LOCK();
    lVar97 = *plVar1;
    bVar105 = lVar98 == lVar97;
    if (bVar105) {
      *plVar1 = lVar98 + 1;
      lVar97 = lVar98;
    }
    UNLOCK();
    if (bVar105) break;
LAB_001021e9:
    lVar98 = *plVar1;
    if (lVar98 == 0) goto LAB_001021cd;
  }
  if (lVar97 == -1) {
LAB_001021cd:
    local_68 = 0;
  }
  else {
    local_68 = *(long *)(lVar96 + 0x10);
  }
LAB_00101d14:
  local_60 = 0;
  local_58 = 
  "Source text \"%s\" is registered but doesn\'t have a translation. Please report this bug.";
  local_50 = 0x56;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>(&local_58,(StrRange *)&local_60,&local_68);
  _err_print_error("get_plural_message","core/string/translation_po.cpp",299,
                   "Condition \"translation_map[p_context][p_src_text].is_empty()\" is true. Returning: StringName()"
                   ,&local_58,0,0);
  pcVar94 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar94 + -0x10,false);
    }
  }
  lVar98 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar98 + -0x10),false);
    }
  }
  lVar98 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar98 + -0x10),false);
    }
  }
LAB_00101e00:
  *(undefined8 *)param_1 = 0;
  goto LAB_00101e0c;
LAB_0010195a:
  if ((uVar100 == uVar93) &&
     (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar97 * 8) + 0x10) == *(long *)in_R9)) {
    lVar98 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar103 * 8);
    if ((*(long *)(lVar98 + 0x20) != 0) && (*(int *)(lVar98 + 0x44) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar98 + 0x40) * 4);
      uVar101 = CONCAT44(0,uVar2);
      lVar97 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar98 + 0x40) * 8);
      if (*(long *)pSVar95 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)pSVar95 + 0x20);
      }
      uVar100 = 1;
      if (uVar93 != 0) {
        uVar100 = uVar93;
      }
      auVar27._8_8_ = 0;
      auVar27._0_8_ = (ulong)uVar100 * lVar97;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = uVar101;
      lVar96 = SUB168(auVar27 * auVar71,8);
      uVar103 = SUB164(auVar27 * auVar71,8);
      uVar93 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
      if (uVar93 != 0) {
        uVar104 = 0;
        goto LAB_00101a5a;
      }
    }
    goto LAB_00101e38;
  }
  uVar104 = uVar104 + 1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (ulong)(uVar103 + 1) * lVar98;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = uVar101;
  lVar97 = SUB168(auVar24 * auVar68,8);
  uVar93 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar97 * 4);
  uVar103 = SUB164(auVar24 * auVar68,8);
  if ((uVar93 == 0) ||
     (auVar25._8_8_ = 0, auVar25._0_8_ = (ulong)uVar93 * lVar98, auVar69._8_8_ = 0,
     auVar69._0_8_ = uVar101, auVar26._8_8_ = 0,
     auVar26._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar25 * auVar69,8)) * lVar98,
     auVar70._8_8_ = 0, auVar70._0_8_ = uVar101, SUB164(auVar26 * auVar70,8) < uVar104))
  goto LAB_00101e38;
  goto LAB_0010195a;
LAB_00101a5a:
  if ((uVar100 == uVar93) &&
     (*(long *)(*(long *)(*(long *)(lVar98 + 0x20) + lVar96 * 8) + 0x10) == *(long *)pSVar95)) {
    lVar98 = *(long *)(*(long *)(*(long *)(lVar98 + 0x20) + (ulong)uVar103 * 8) + 0x20);
    if ((lVar98 == 0) || (*(long *)(lVar98 + -8) < (long)(iVar92 + 1))) goto LAB_0010214d;
    StringName::operator=(param_2 + 0x310,pSVar95);
    StringName::operator=(param_2 + 0x318,in_R9);
    *(int *)(param_2 + 800) = in_R8D;
    *(int *)(param_2 + 0x324) = iVar92;
    if ((*(long *)(param_2 + 0x2b0) != 0) && (*(int *)(param_2 + 0x2d4) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x2d0) * 4);
      uVar101 = CONCAT44(0,uVar2);
      lVar98 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x2d0) * 8);
      if (*(long *)in_R9 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)in_R9 + 0x20);
      }
      if (uVar93 == 0) {
        uVar93 = 1;
      }
      auVar31._8_8_ = 0;
      auVar31._0_8_ = (ulong)uVar93 * lVar98;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = uVar101;
      lVar97 = SUB168(auVar31 * auVar75,8);
      uVar100 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar97 * 4);
      uVar103 = SUB164(auVar31 * auVar75,8);
      if (uVar100 != 0) {
        uVar104 = 0;
        goto LAB_00101b9a;
      }
    }
    goto LAB_00101e38;
  }
  uVar104 = uVar104 + 1;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = (ulong)(uVar103 + 1) * lVar97;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = uVar101;
  lVar96 = SUB168(auVar28 * auVar72,8);
  uVar93 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
  uVar103 = SUB164(auVar28 * auVar72,8);
  if ((uVar93 == 0) ||
     (auVar29._8_8_ = 0, auVar29._0_8_ = (ulong)uVar93 * lVar97, auVar73._8_8_ = 0,
     auVar73._0_8_ = uVar101, auVar30._8_8_ = 0,
     auVar30._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar29 * auVar73,8)) * lVar97,
     auVar74._8_8_ = 0, auVar74._0_8_ = uVar101, SUB164(auVar30 * auVar74,8) < uVar104))
  goto LAB_00101e38;
  goto LAB_00101a5a;
LAB_00101b9a:
  if ((uVar93 == uVar100) &&
     (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar97 * 8) + 0x10) == *(long *)in_R9)) {
    lVar98 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar103 * 8);
    if ((*(long *)(lVar98 + 0x20) != 0) && (*(int *)(lVar98 + 0x44) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar98 + 0x40) * 4);
      uVar101 = CONCAT44(0,uVar2);
      lVar97 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar98 + 0x40) * 8);
      if (*(long *)pSVar95 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)pSVar95 + 0x20);
      }
      if (uVar93 == 0) {
        uVar93 = 1;
      }
      auVar35._8_8_ = 0;
      auVar35._0_8_ = (ulong)uVar93 * lVar97;
      auVar79._8_8_ = 0;
      auVar79._0_8_ = uVar101;
      lVar96 = SUB168(auVar35 * auVar79,8);
      uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
      uVar103 = SUB164(auVar35 * auVar79,8);
      if (uVar100 != 0) {
        uVar104 = 0;
        goto LAB_00101c82;
      }
    }
    goto LAB_00101e38;
  }
  uVar104 = uVar104 + 1;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = (ulong)(uVar103 + 1) * lVar98;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = uVar101;
  lVar97 = SUB168(auVar32 * auVar76,8);
  uVar100 = *(uint *)(*(long *)(param_2 + 0x2b8) + lVar97 * 4);
  uVar103 = SUB164(auVar32 * auVar76,8);
  if ((uVar100 == 0) ||
     (auVar33._8_8_ = 0, auVar33._0_8_ = (ulong)uVar100 * lVar98, auVar77._8_8_ = 0,
     auVar77._0_8_ = uVar101, auVar34._8_8_ = 0,
     auVar34._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar33 * auVar77,8)) * lVar98,
     auVar78._8_8_ = 0, auVar78._0_8_ = uVar101, SUB164(auVar34 * auVar78,8) < uVar104))
  goto LAB_00101e38;
  goto LAB_00101b9a;
LAB_00101c82:
  if ((uVar93 != uVar100) ||
     (*(long *)(*(long *)(*(long *)(lVar98 + 0x20) + lVar96 * 8) + 0x10) != *(long *)pSVar95)) {
    uVar104 = uVar104 + 1;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = (ulong)(uVar103 + 1) * lVar97;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar101;
    lVar96 = SUB168(auVar36 * auVar80,8);
    uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
    uVar103 = SUB164(auVar36 * auVar80,8);
    if ((uVar100 == 0) ||
       (auVar37._8_8_ = 0, auVar37._0_8_ = (ulong)uVar100 * lVar97, auVar81._8_8_ = 0,
       auVar81._0_8_ = uVar101, auVar38._8_8_ = 0,
       auVar38._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar37 * auVar81,8)) * lVar97,
       auVar82._8_8_ = 0, auVar82._0_8_ = uVar101, SUB164(auVar38 * auVar82,8) < uVar104))
    goto LAB_00101e38;
    goto LAB_00101c82;
  }
  lVar97 = (long)iVar92;
  lVar98 = *(long *)(*(long *)(*(long *)(lVar98 + 0x20) + (ulong)uVar103 * 8) + 0x20);
  if (lVar98 == 0) goto LAB_001021af;
  lVar96 = *(long *)(lVar98 + -8);
  if (lVar96 <= lVar97) goto LAB_0010207e;
LAB_00101cbb:
  StringName::StringName(param_1,(StringName *)(lVar98 + lVar97 * 8));
  goto LAB_00101e0c;
LAB_001021af:
  lVar96 = 0;
LAB_0010207e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar97,lVar96,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar91 = (code *)invalidInstructionException();
  (*pcVar91)();
  while( true ) {
    uVar104 = uVar104 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(uVar103 + 1) * lVar98;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar101;
    lVar96 = SUB168(auVar8 * auVar52,8);
    uVar100 = *(uint *)(lVar97 + lVar96 * 4);
    uVar103 = SUB164(auVar8 * auVar52,8);
    if ((uVar100 == 0) ||
       (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar100 * lVar98, auVar53._8_8_ = 0,
       auVar53._0_8_ = uVar101, auVar10._8_8_ = 0,
       auVar10._0_8_ = (ulong)((uVar2 + uVar103) - SUB164(auVar9 * auVar53,8)) * lVar98,
       auVar54._8_8_ = 0, auVar54._0_8_ = uVar101, SUB164(auVar10 * auVar54,8) < uVar104)) break;
LAB_0010155a:
    if ((uVar100 == uVar93) &&
       (*(long *)(*(long *)(*(long *)(param_2 + 0x2b0) + lVar96 * 8) + 0x10) == *(long *)in_R9)) {
      lVar98 = *(long *)(*(long *)(param_2 + 0x2b0) + (ulong)uVar103 * 8);
      if ((*(long *)(lVar98 + 0x20) == 0) || (*(int *)(lVar98 + 0x44) == 0)) goto LAB_00101e00;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar98 + 0x40) * 4);
      lVar97 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar98 + 0x40) * 8);
      if (*(long *)pSVar95 == 0) {
        uVar93 = StringName::get_empty_hash();
      }
      else {
        uVar93 = *(uint *)(*(long *)pSVar95 + 0x20);
      }
      uVar101 = CONCAT44(0,uVar2);
      if (uVar93 == 0) {
        uVar93 = 1;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar93 * lVar97;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar101;
      lVar96 = SUB168(auVar11 * auVar55,8);
      uVar100 = *(uint *)(*(long *)(lVar98 + 0x28) + lVar96 * 4);
      iVar92 = SUB164(auVar11 * auVar55,8);
      if (uVar100 == 0) goto LAB_00101e00;
      uVar103 = 0;
      goto LAB_00101652;
    }
  }
LAB_00101e38:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar91 = (code *)invalidInstructionException();
  (*pcVar91)();
LAB_0010214d:
  pcVar102 = 
  "Plural index returned or number of plural translations is not valid. Please report this bug.";
  uVar99 = 0x12e;
  pcVar94 = 
  "Condition \"plural_index < 0 || translation_map[p_context][p_src_text].size() < plural_index + 1\" is true. Returning: StringName()"
  ;
LAB_001020ec:
  _err_print_error("get_plural_message","core/string/translation_po.cpp",uVar99,pcVar94,pcVar102,0,0
                  );
  *(undefined8 *)param_1 = 0;
LAB_00101e0c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* TranslationPO::_cache_plural_tests(String const&, Ref<TranslationPO::EQNode>&) */

void __thiscall TranslationPO::_cache_plural_tests(TranslationPO *this,String *param_1,Ref *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_0010227e;
      LOCK();
      lVar7 = *plVar1;
      bVar12 = lVar3 == lVar7;
      if (bVar12) {
        *plVar1 = lVar3 + 1;
        lVar7 = lVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar7 != -1) {
      local_58 = *(long *)param_1;
    }
  }
LAB_0010227e:
  cVar5 = String::begins_with((char *)&local_58);
  iVar10 = (int)(String *)&local_58;
  lVar3 = local_58;
  if ((cVar5 != '\0') &&
     (cVar5 = String::ends_with((char *)&local_58), lVar3 = local_58, cVar5 != '\0')) {
    if (local_58 != 0) {
      lVar7 = *(long *)(local_58 + -8);
      if ((int)lVar7 != 0) {
        iVar11 = (int)lVar7 + -2;
        iVar6 = 0;
        for (lVar8 = 1; (int)lVar8 < iVar11; lVar8 = lVar8 + 1) {
          if (iVar6 == -1) goto LAB_001022b2;
          while (lVar7 != lVar8) {
            if (lVar7 <= lVar8) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            iVar2 = *(int *)(local_58 + lVar8 * 4);
            if (iVar2 != 0x28) {
              iVar6 = iVar6 - (uint)(iVar2 == 0x29);
              break;
            }
            lVar8 = lVar8 + 1;
            iVar6 = iVar6 + 1;
            if (iVar11 <= (int)lVar8) goto LAB_001022b2;
          }
        }
        if (iVar6 != 0) goto LAB_001022b2;
      }
    }
    String::substr((int)&local_48,iVar10);
    lVar8 = local_48;
    lVar7 = local_58;
    if (local_58 == local_48) {
      lVar3 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
          lVar3 = local_58;
        }
      }
    }
    else {
      lVar3 = local_48;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar3 = local_48;
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
          lVar3 = local_48;
        }
      }
    }
  }
LAB_001022b2:
  local_58 = lVar3;
  iVar6 = _find_unquoted(this,(String *)&local_58,L'?');
  _find_unquoted(this,(String *)&local_58,L':');
  bVar12 = SUB81((String *)&local_48,0);
  if (iVar6 == -1) {
    String::strip_edges(bVar12,SUB81((String *)&local_58,0));
    lVar8 = local_48;
    lVar3 = *(long *)param_2;
    lVar7 = *(long *)(lVar3 + 0x180);
    if (lVar7 == local_48) {
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *(long *)(lVar3 + 0x180);
          *(undefined8 *)(lVar3 + 0x180) = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      *(long *)(lVar3 + 0x180) = local_48;
    }
    goto LAB_00102575;
  }
  iVar6 = (int)&local_50;
  String::substr(iVar6,iVar10);
  bVar9 = SUB81(&local_50,0);
  String::strip_edges(bVar12,bVar9);
  lVar8 = local_48;
  lVar3 = *(long *)param_2;
  lVar7 = *(long *)(lVar3 + 0x180);
  if (lVar7 == local_48) {
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  else {
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(lVar3 + 0x180);
        *(undefined8 *)(lVar3 + 0x180) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
        *(long *)(lVar3 + 0x180) = local_48;
        goto LAB_001023ee;
      }
    }
    *(long *)(lVar3 + 0x180) = local_48;
  }
LAB_001023ee:
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
  Ref<TranslationPO::EQNode>::instantiate<>
            ((Ref<TranslationPO::EQNode> *)(*(long *)param_2 + 0x188));
  lVar3 = *(long *)param_2;
  String::substr(iVar6,iVar10);
  String::strip_edges(bVar12,bVar9);
  _cache_plural_tests(this,(String *)&local_48,(Ref *)(lVar3 + 0x188));
  lVar3 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
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
  Ref<TranslationPO::EQNode>::instantiate<>((Ref<TranslationPO::EQNode> *)(*(long *)param_2 + 400));
  lVar3 = *(long *)param_2;
  String::substr(iVar6,iVar10);
  String::strip_edges(bVar12,bVar9);
  _cache_plural_tests(this,(String *)&local_48,(Ref *)(lVar3 + 400));
  lVar3 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
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
LAB_00102575:
  lVar3 = local_58;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* CowData<StringName>::_ref(CowData<StringName> const&) [clone .part.0] */

void __thiscall CowData<StringName>::_ref(CowData<StringName> *this,CowData *param_1)

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



/* TranslationPO::_bind_methods() */

void TranslationPO::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_58 [2];
  CowData<StringName> local_48 [16];
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_58,(char ***)"get_plural_forms",0);
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  pMVar1 = create_method_bind<TranslationPO,int>(get_plural_forms);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_58,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_48);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_58,(char ***)"get_plural_rule",0);
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  pMVar1 = create_method_bind<TranslationPO,String>(get_plural_rule);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_58,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_48);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

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
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* TranslationPO::_get_message_list() const */

void TranslationPO::_get_message_list(void)

{
  long *plVar1;
  char *__s;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar6;
  long *local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (long *)0x0;
  (**(code **)(*in_RSI + 0x208))();
  *(undefined8 *)(in_RDI + 8) = 0;
  if ((local_68 != (long *)0x0) && (plVar5 = (long *)*local_68, plVar5 != (long *)0x0)) {
    do {
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        local_60 = 0;
      }
      else {
        __s = *(char **)(lVar2 + 8);
        local_60 = 0;
        if (__s == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
          if (*(long *)(lVar2 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_00102e4f;
              LOCK();
              lVar4 = *plVar1;
              bVar6 = lVar3 == lVar4;
              if (bVar6) {
                *plVar1 = lVar3 + 1;
                lVar4 = lVar3;
              }
              UNLOCK();
            } while (!bVar6);
            if (lVar4 != -1) {
              local_60 = *(long *)(lVar2 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(__s);
          local_58 = __s;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00102e4f:
      Vector<String>::push_back();
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
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TranslationPO::set_plural_rule(String const&) */

void __thiscall TranslationPO::set_plural_rule(TranslationPO *this,String *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  Object *pOVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  RefCounted *this_00;
  wchar32 wVar8;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  wVar8 = (wchar32)param_1;
  String::find_char(wVar8,0x3b);
  String::find_char(wVar8,0x3d);
  String::find_char(wVar8,0x3d);
  String::substr((int)&local_48,wVar8);
  uVar7 = String::to_int();
  puVar2 = local_48;
  *(undefined4 *)(this + 0x2d8) = uVar7;
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
  String::find_char(wVar8,0x3d);
  String::rfind_char(wVar8,0x3b);
  String::substr((int)(StrRange *)&local_50,wVar8);
  String::strip_edges(SUB81(&local_48,0),SUB81((StrRange *)&local_50,0));
  puVar5 = local_48;
  puVar2 = *(undefined **)(this + 0x2e0);
  if (puVar2 == local_48) {
    if (puVar2 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (undefined *)0x0;
        Memory::free_static(puVar5 + -0x10,false);
      }
    }
  }
  else {
    if (puVar2 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x2e0);
        *(undefined8 *)(this + 0x2e0) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(undefined **)(this + 0x2e0) = local_48;
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
  Ref<TranslationPO::EQNode>::instantiate<>((Ref<TranslationPO::EQNode> *)(this + 0x2e8));
  _cache_plural_tests(this,(String *)(this + 0x2e0),(Ref *)(this + 0x2e8));
  this_00 = (RefCounted *)operator_new(0x1e8,"");
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(code **)this_00 = Dictionary::get_key_list;
  *(undefined4 *)(this_00 + 400) = 0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  this_00[0x1a0] = (RefCounted)0x0;
  *(undefined4 *)(this_00 + 0x1a4) = 0;
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  this_00[0x1b8] = (RefCounted)0x1;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  this_00[0x1e0] = (RefCounted)0x0;
  *(undefined1 (*) [16])(this_00 + 0x1c0) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar6 = RefCounted::init_ref();
  pOVar4 = *(Object **)(this + 0x300);
  if (cVar6 == '\0') {
    if (pOVar4 == (Object *)0x0) goto LAB_0010314a;
    *(undefined8 *)(this + 0x300) = 0;
    cVar6 = RefCounted::unreference();
    if (cVar6 == '\0') goto LAB_0010314a;
    this_00 = (RefCounted *)0x0;
    cVar6 = predelete_handler(pOVar4);
    if (cVar6 == '\0') goto LAB_0010314a;
LAB_00103312:
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    if (this_00 == (RefCounted *)0x0) goto LAB_0010314a;
  }
  else if (pOVar4 != (Object *)this_00) {
    *(RefCounted **)(this + 0x300) = this_00;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      *(undefined8 *)(this + 0x300) = 0;
      if (pOVar4 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
joined_r0x001032f3:
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar4), cVar6 != '\0'))
        goto LAB_00103312;
      }
    }
    else if (pOVar4 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      goto joined_r0x001032f3;
    }
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)this_00), cVar6 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
LAB_0010314a:
  local_50 = 0;
  local_48 = &_LC55;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_50);
  Vector<String>::push_back((Vector<String> *)(this + 0x2f0));
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::get_translated_message_list() const */

void TranslationPO::get_translated_message_list(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *__s;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_RSI;
  long in_RDI;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long *local_70;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = *(long **)(in_RSI + 0x2c0);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (local_70 != (long *)0x0) {
    do {
      if (local_70[2] == 0) {
        for (puVar3 = (undefined8 *)local_70[6]; puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          plVar7 = (long *)puVar3[4];
          if (plVar7 != (long *)0x0) {
            plVar2 = plVar7 + plVar7[-1];
            for (; plVar2 != plVar7; plVar7 = plVar7 + 1) {
              lVar4 = *plVar7;
              if (lVar4 == 0) {
                local_60 = 0;
              }
              else {
                __s = *(char **)(lVar4 + 8);
                local_60 = 0;
                if (__s == (char *)0x0) {
                  plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
                  if (*(long *)(lVar4 + 0x10) != 0) {
                    do {
                      lVar5 = *plVar1;
                      if (lVar5 == 0) goto LAB_00103440;
                      LOCK();
                      lVar6 = *plVar1;
                      bVar8 = lVar5 == lVar6;
                      if (bVar8) {
                        *plVar1 = lVar5 + 1;
                        lVar6 = lVar5;
                      }
                      UNLOCK();
                    } while (!bVar8);
                    if (lVar6 != -1) {
                      local_60 = *(long *)(lVar4 + 0x10);
                    }
                  }
                }
                else {
                  local_50 = strlen(__s);
                  local_58 = __s;
                  String::parse_latin1((StrRange *)&local_60);
                }
              }
LAB_00103440:
              Vector<String>::push_back();
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
            }
          }
        }
      }
      local_70 = (long *)*local_70;
    } while (local_70 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::add_message(StringName const&, StringName const&, StringName const&) */

void __thiscall
TranslationPO::add_message
          (TranslationPO *this,StringName *param_1,StringName *param_2,StringName *param_3)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
  *this_00;
  long lVar13;
  Vector<StringName> *pVVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
             *)HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
               ::operator[]((HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                             *)(this + 0x2a8),param_3);
  if ((*(long *)(this_00 + 8) != 0) && (*(int *)(this_00 + 0x2c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_00 + 0x28) * 4);
    lVar13 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_00 + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar19 = CONCAT44(0,uVar2);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar12 * lVar13;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar18 = *(uint *)(*(long *)(this_00 + 0x10) + lVar17 * 4);
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar18 != 0) {
      uVar20 = 0;
      do {
        if ((uVar12 == uVar18) &&
           (*(long *)(*(long *)(*(long *)(this_00 + 8) + lVar17 * 8) + 0x10) == *(long *)param_1)) {
          local_68 = 0;
          plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
          if (*(long *)(this + 0x240) == 0) goto LAB_00103685;
          goto LAB_00103660;
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar16 + 1) * lVar13;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar18 = *(uint *)(*(long *)(this_00 + 0x10) + lVar17 * 4);
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar18 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar13, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar6 * auVar10,8)) * lVar13,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  pVVar14 = (Vector<StringName> *)
            HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
            ::operator[](this_00,param_1);
  StringName::StringName((StringName *)&local_58,param_2);
  Vector<StringName>::push_back(pVVar14,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  goto LAB_001038fb;
  while( true ) {
    LOCK();
    lVar17 = *plVar1;
    bVar21 = lVar13 == lVar17;
    if (bVar21) {
      *plVar1 = lVar13 + 1;
      lVar17 = lVar13;
    }
    UNLOCK();
    if (bVar21) break;
LAB_00103660:
    lVar13 = *plVar1;
    if (lVar13 == 0) goto LAB_00103685;
  }
  if (lVar17 != -1) {
    local_68 = *(long *)(this + 0x240);
  }
LAB_00103685:
  lVar13 = *(long *)param_3;
  if (lVar13 == 0) {
LAB_00103941:
    local_70 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar13 + 8);
    local_70 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar13 + 0x10) + -0x10);
      if (*(long *)(lVar13 + 0x10) != 0) {
        do {
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_00103941;
          LOCK();
          lVar15 = *plVar1;
          bVar21 = lVar17 == lVar15;
          if (bVar21) {
            *plVar1 = lVar17 + 1;
            lVar15 = lVar17;
          }
          UNLOCK();
        } while (!bVar21);
        if (lVar15 != -1) {
          local_70 = *(long *)(lVar13 + 0x10);
          goto LAB_001036ce;
        }
      }
      goto LAB_00103941;
    }
    local_50 = strlen(pcVar3);
    local_58 = pcVar3;
    String::parse_latin1((StrRange *)&local_70);
  }
LAB_001036ce:
  lVar13 = *(long *)param_1;
  if (lVar13 == 0) {
LAB_00103929:
    local_78 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar13 + 8);
    local_78 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar13 + 0x10) + -0x10);
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00103929;
      do {
        lVar17 = *plVar1;
        if (lVar17 == 0) goto LAB_00103929;
        LOCK();
        lVar15 = *plVar1;
        bVar21 = lVar17 == lVar15;
        if (bVar21) {
          *plVar1 = lVar17 + 1;
          lVar15 = lVar17;
        }
        UNLOCK();
      } while (!bVar21);
      if (lVar15 != -1) {
        local_78 = *(long *)(lVar13 + 0x10);
      }
    }
    else {
      local_50 = strlen(pcVar3);
      local_58 = pcVar3;
      String::parse_latin1((StrRange *)&local_78);
    }
  }
  local_60 = 0;
  local_58 = 
  "Double translations for \"%s\" under the same context \"%s\" for locale \"%s\".\nThere should only be one unique translation for a given string under the same context."
  ;
  local_50 = 0xa0;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String,String,String>(&local_58,(StrRange *)&local_60,&local_78,&local_70);
  _err_print_error("add_message","core/string/translation_po.cpp",0xf9,&local_58,0,1);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar13 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar13 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar13 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar13 = HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
           ::operator[](this_00,param_1);
  if (*(long *)(lVar13 + 8) == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar13 + 8) + -8);
    if (0 < lVar17) {
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(lVar13 + 8));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        StringName::operator=(*(StringName **)(lVar13 + 8),param_2);
        return;
      }
      goto LAB_00103a3b;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,0,lVar17,"p_index","size()","",false,false);
LAB_001038fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103a3b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::add_plural_message(StringName const&, Vector<String> const&, StringName const&) */

void __thiscall
TranslationPO::add_plural_message
          (TranslationPO *this,StringName *param_1,Vector *param_2,StringName *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char *pcVar12;
  uint uVar13;
  HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
  *this_00;
  long lVar14;
  Vector<StringName> *pVVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 8) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(param_2 + 8) + -8);
  }
  if (*(int *)(this + 0x2d8) != lVar14) {
    local_68 = 0;
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    if (*(long *)(this + 0x240) != 0) {
      do {
        lVar14 = *plVar1;
        if (lVar14 == 0) goto LAB_00103e1e;
        LOCK();
        lVar17 = *plVar1;
        bVar22 = lVar14 == lVar17;
        if (bVar22) {
          *plVar1 = lVar14 + 1;
          lVar17 = lVar14;
        }
        UNLOCK();
      } while (!bVar22);
      if (lVar17 != -1) {
        local_68 = *(long *)(this + 0x240);
      }
    }
LAB_00103e1e:
    local_60 = 0;
    local_50 = 0x60;
    local_58 = 
    "Trying to add plural texts that don\'t match the required number of plural forms for locale \"%s\"."
    ;
    String::parse_latin1((StrRange *)&local_60);
    vformat<String>(&local_58,(StrRange *)&local_60,&local_68);
    _err_print_error("add_plural_message","core/string/translation_po.cpp",0x101,
                     "Condition \"p_plural_xlated_texts.size() != plural_forms\" is true.",&local_58
                     ,0);
    pcVar12 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar12 + -0x10,false);
      }
    }
    lVar14 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    goto LAB_00103ed0;
  }
  this_00 = (HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
             *)HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
               ::operator[]((HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                             *)(this + 0x2a8),param_3);
  if ((*(long *)(this_00 + 8) != 0) && (*(int *)(this_00 + 0x2c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_00 + 0x28) * 4);
    lVar14 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_00 + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar19 = CONCAT44(0,uVar2);
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar14;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar19;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar18 = *(uint *)(*(long *)(this_00 + 0x10) + lVar17 * 4);
    iVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar18 != 0) {
      uVar21 = 0;
      do {
        if ((uVar13 == uVar18) &&
           (*(long *)(*(long *)(*(long *)(this_00 + 8) + lVar17 * 8) + 0x10) == *(long *)param_1)) {
          local_78 = 0;
          plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
          if (*(long *)(this + 0x240) == 0) goto LAB_00103bdb;
          goto LAB_00103bb2;
        }
        uVar21 = uVar21 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar19;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(*(long *)(this_00 + 0x10) + lVar17 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
      } while ((uVar18 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar14, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar14,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar19, uVar21 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  goto LAB_00103d02;
LAB_00103bb2:
  do {
    lVar14 = *plVar1;
    if (lVar14 == 0) goto LAB_00103bdb;
    LOCK();
    lVar17 = *plVar1;
    bVar22 = lVar14 == lVar17;
    if (bVar22) {
      *plVar1 = lVar14 + 1;
      lVar17 = lVar14;
    }
    UNLOCK();
  } while (!bVar22);
  if (lVar17 != -1) {
    local_78 = *(long *)(this + 0x240);
  }
LAB_00103bdb:
  StringName::StringName((StringName *)&local_60,param_3);
  StringName::StringName((StringName *)&local_68,param_1);
  local_70 = 0;
  local_58 = 
  "Double translations for \"%s\" under the same context \"%s\" for locale %s.\nThere should only be one unique translation for a given string under the same context."
  ;
  local_50 = 0x9e;
  String::parse_latin1((StrRange *)&local_70);
  vformat<StringName,StringName,String>
            (&local_58,(StrRange *)&local_70,(StringName *)&local_68,(StringName *)&local_60);
  _err_print_error("add_plural_message","core/string/translation_po.cpp",0x106,&local_58,0,1);
  pcVar12 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar12 + -0x10,false);
    }
  }
  lVar14 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') &&
     (((local_68 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_60 != 0)))
     ) {
    StringName::unref();
  }
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_78 + -0x10),false);
    }
  }
  lVar14 = HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
           ::operator[](this_00,param_1);
  if ((*(long *)(lVar14 + 8) != 0) && (*(long *)(*(long *)(lVar14 + 8) + -8) != 0)) {
    CowData<StringName>::_unref((CowData<StringName> *)(lVar14 + 8));
  }
LAB_00103d02:
  lVar14 = *(long *)(param_2 + 8);
  if (lVar14 != 0) {
    lVar17 = 0;
    do {
      if (*(long *)(lVar14 + -8) <= lVar17) break;
      pVVar15 = (Vector<StringName> *)
                HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                ::operator[](this_00,param_1);
      lVar14 = *(long *)(param_2 + 8);
      if (lVar14 == 0) {
        lVar20 = 0;
LAB_00103d90:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar20,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      lVar20 = *(long *)(lVar14 + -8);
      if (lVar20 <= lVar17) goto LAB_00103d90;
      StringName::StringName((StringName *)&local_58,(String *)(lVar14 + lVar17 * 8),false);
      Vector<StringName>::push_back(pVVar15,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar14 = *(long *)(param_2 + 8);
      lVar17 = lVar17 + 1;
    } while (lVar14 != 0);
  }
LAB_00103ed0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TranslationPO::erase_message(StringName const&, StringName const&) */

void __thiscall
TranslationPO::erase_message(TranslationPO *this,StringName *param_1,StringName *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  long *plVar44;
  ulong uVar45;
  uint uVar46;
  uint uVar47;
  
  if (*(long *)(this + 0x2b0) == 0) {
    return;
  }
  if (*(int *)(this + 0x2d4) == 0) {
    return;
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2d0) * 4);
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x2d0) * 8);
  if (*(long *)param_2 == 0) {
    uVar38 = StringName::get_empty_hash();
  }
  else {
    uVar38 = *(uint *)(*(long *)param_2 + 0x20);
  }
  uVar45 = CONCAT44(0,uVar6);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)uVar38 * lVar39;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar45;
  lVar42 = SUB168(auVar10 * auVar24,8);
  uVar41 = *(uint *)(*(long *)(this + 0x2b8) + lVar42 * 4);
  iVar40 = SUB164(auVar10 * auVar24,8);
  if (uVar41 == 0) {
    return;
  }
  uVar47 = 0;
  while ((uVar38 != uVar41 ||
         (*(long *)(*(long *)(*(long *)(this + 0x2b0) + lVar42 * 8) + 0x10) != *(long *)param_2))) {
    uVar47 = uVar47 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar40 + 1) * lVar39;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar45;
    lVar42 = SUB168(auVar11 * auVar25,8);
    uVar41 = *(uint *)(*(long *)(this + 0x2b8) + lVar42 * 4);
    iVar40 = SUB164(auVar11 * auVar25,8);
    if (uVar41 == 0) {
      return;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar41 * lVar39;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar6 + iVar40) - SUB164(auVar12 * auVar26,8)) * lVar39;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    if (SUB164(auVar13 * auVar27,8) < uVar47) {
      return;
    }
  }
  lVar39 = HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
           ::operator[]((HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                         *)(this + 0x2a8),param_2);
  if (*(long *)(lVar39 + 8) == 0) {
    return;
  }
  if (*(int *)(lVar39 + 0x2c) == 0) {
    return;
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar39 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar6);
  lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar39 + 0x28) * 8);
  if (*(long *)param_1 == 0) {
    uVar38 = StringName::get_empty_hash();
  }
  else {
    uVar38 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar7 = *(long *)(lVar39 + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)uVar38 * lVar42;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar45;
  lVar43 = SUB168(auVar14 * auVar28,8);
  uVar41 = *(uint *)(lVar7 + lVar43 * 4);
  uVar47 = SUB164(auVar14 * auVar28,8);
  if (uVar41 == 0) {
    return;
  }
  uVar46 = 0;
  while ((uVar38 != uVar41 ||
         (lVar8 = *(long *)(lVar39 + 8),
         *(long *)(*(long *)(lVar8 + lVar43 * 8) + 0x10) != *(long *)param_1))) {
    uVar46 = uVar46 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(uVar47 + 1) * lVar42;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar45;
    lVar43 = SUB168(auVar15 * auVar29,8);
    uVar41 = *(uint *)(lVar7 + lVar43 * 4);
    uVar47 = SUB164(auVar15 * auVar29,8);
    if (uVar41 == 0) {
      return;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar41 * lVar42;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar6 + uVar47) - SUB164(auVar16 * auVar30,8)) * lVar42;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    if (SUB164(auVar17 * auVar31,8) < uVar46) {
      return;
    }
  }
  lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar39 + 0x28) * 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar39 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar6);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = (ulong)(uVar47 + 1) * lVar42;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar45;
  lVar43 = SUB168(auVar18 * auVar32,8);
  puVar1 = (uint *)(lVar7 + lVar43 * 4);
  uVar41 = SUB164(auVar18 * auVar32,8);
  uVar38 = *puVar1;
  if (uVar38 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar38 * lVar42;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar6 + uVar41) - SUB164(auVar19 * auVar33,8)) * lVar42;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar45;
    iVar40 = SUB164(auVar20 * auVar34,8);
    while (uVar46 = uVar41, iVar40 != 0) {
      puVar2 = (uint *)(lVar7 + (ulong)uVar47 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar8 + lVar43 * 8);
      *puVar2 = uVar38;
      puVar4 = (undefined8 *)(lVar8 + (ulong)uVar47 * 8);
      uVar9 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar9;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = (ulong)(uVar46 + 1) * lVar42;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar45;
      lVar43 = SUB168(auVar23 * auVar37,8);
      puVar1 = (uint *)(lVar7 + lVar43 * 4);
      uVar41 = SUB164(auVar23 * auVar37,8);
      uVar38 = *puVar1;
      uVar47 = uVar46;
      if (uVar38 == 0) break;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)uVar38 * lVar42;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar45;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = (ulong)((uVar41 + uVar6) - SUB164(auVar21 * auVar35,8)) * lVar42;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar45;
      iVar40 = SUB164(auVar22 * auVar36,8);
    }
  }
  uVar45 = (ulong)uVar47;
  plVar5 = (long *)(lVar8 + uVar45 * 8);
  *(undefined4 *)(lVar7 + uVar45 * 4) = 0;
  plVar44 = (long *)*plVar5;
  if (*(long **)(lVar39 + 0x18) == plVar44) {
    *(long *)(lVar39 + 0x18) = *plVar44;
    plVar44 = (long *)*plVar5;
  }
  if (*(long **)(lVar39 + 0x20) == plVar44) {
    *(long *)(lVar39 + 0x20) = plVar44[1];
    plVar44 = (long *)*plVar5;
  }
  if ((long *)plVar44[1] != (long *)0x0) {
    *(long *)plVar44[1] = *plVar44;
    plVar44 = (long *)*plVar5;
  }
  if (*plVar44 != 0) {
    *(long *)(*plVar44 + 8) = plVar44[1];
    plVar44 = (long *)*plVar5;
  }
  CowData<StringName>::_unref((CowData<StringName> *)(plVar44 + 4));
  if ((StringName::configured != '\0') && (plVar44[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar44,false);
  *(undefined8 *)(*(long *)(lVar39 + 8) + uVar45 * 8) = 0;
  *(int *)(lVar39 + 0x2c) = *(int *)(lVar39 + 0x2c) + -1;
  return;
}



/* TranslationPO::_set_messages(Dictionary const&) */

void __thiscall TranslationPO::_set_messages(TranslationPO *this,Dictionary *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
  *pHVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_f0;
  long *local_b8;
  Variant local_b0 [8];
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  HashMap local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (long *)0x0;
  Dictionary::get_key_list((List *)param_1);
  if ((local_b8 != (long *)0x0) && (local_f0 = *local_b8, local_f0 != 0)) {
    do {
      Dictionary::operator[]((Variant *)param_1);
      Variant::operator_cast_to_Dictionary(local_b0);
      local_a8 = (long *)0x0;
      local_60 = _LC63;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      Dictionary::get_key_list((List *)local_b0);
      if ((local_a8 == (long *)0x0) || (lVar8 = *local_a8, lVar8 == 0)) {
        Variant::operator_cast_to_StringName((Variant *)&local_98);
        pHVar5 = (HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                  *)HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                    ::operator[]((HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                                  *)(this + 0x2a8),(StringName *)&local_98);
        HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
        ::operator=(pHVar5,local_88);
        if ((StringName::configured != '\0') && (puVar9 = (undefined8 *)0x0, local_98 != 0))
        goto LAB_001045cb;
        List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_a8);
      }
      else {
        do {
          Variant::operator_cast_to_StringName((Variant *)&local_a0);
          Variant::Variant((Variant *)local_58,(StringName *)&local_a0);
          Dictionary::operator[](local_b0);
          Variant::operator_cast_to_Vector((Variant *)&local_98);
          lVar4 = HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                  ::operator[]((HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                                *)local_88,(StringName *)&local_a0);
          if (*(long *)(lVar4 + 8) != local_90) {
            CowData<StringName>::_unref((CowData<StringName> *)(lVar4 + 8));
            *(long *)(lVar4 + 8) = local_90;
            local_90 = 0;
          }
          CowData<StringName>::_unref((CowData<StringName> *)&local_90);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
          lVar8 = *(long *)(lVar8 + 0x18);
        } while (lVar8 != 0);
        puVar9 = (undefined8 *)local_80._0_8_;
        Variant::operator_cast_to_StringName((Variant *)&local_98);
        pHVar5 = (HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                  *)HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                    ::operator[]((HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
                                  *)(this + 0x2a8),(StringName *)&local_98);
        HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
        ::operator=(pHVar5,local_88);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
LAB_001045cb:
          StringName::unref();
        }
        List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_a8);
        if (puVar9 != (undefined8 *)0x0) {
          uVar3 = local_80._8_8_;
          if ((local_60._4_4_ != 0) &&
             (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
            piVar1 = (int *)(local_80._8_8_ +
                            (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) *
                            4);
            puVar6 = puVar9;
            piVar7 = (int *)local_80._8_8_;
            do {
              if (*piVar7 != 0) {
                pvVar2 = (void *)*puVar6;
                *piVar7 = 0;
                CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar2 + 0x20));
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
                  StringName::unref();
                }
                Memory::free_static(pvVar2,false);
                *puVar6 = 0;
              }
              piVar7 = piVar7 + 1;
              puVar6 = puVar6 + 1;
            } while (piVar7 != piVar1);
          }
          Memory::free_static(puVar9,false);
          Memory::free_static((void *)uVar3,false);
        }
      }
      Dictionary::~Dictionary((Dictionary *)local_b0);
      local_f0 = *(long *)(local_f0 + 0x18);
    } while (local_f0 != 0);
  }
  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_b8);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* TranslationPO::is_class_ptr(void*) const */

uint __thiscall TranslationPO::is_class_ptr(TranslationPO *this,void *param_1)

{
  return (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &Translation::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TranslationPO::_getv(StringName const&, Variant&) const */

undefined8 TranslationPO::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TranslationPO::_setv(StringName const&, Variant const&) */

undefined8 TranslationPO::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TranslationPO::_validate_propertyv(PropertyInfo&) const */

void TranslationPO::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* TranslationPO::_property_can_revertv(StringName const&) const */

undefined8 TranslationPO::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TranslationPO::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TranslationPO::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TranslationPO::_notificationv(int, bool) */

void TranslationPO::_notificationv(int param_1,bool param_2)

{
  return;
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ce88;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ce88;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d378;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d378;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d3d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d3d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Translation::get_save_class() const */

Translation * __thiscall Translation::get_save_class(Translation *this)

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



/* Translation::get_base_extension() const */

Translation * __thiscall Translation::get_base_extension(Translation *this)

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



/* TranslationPO::_get_class_namev() const */

undefined8 * TranslationPO::_get_class_namev(void)

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
LAB_00104bc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104bc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TranslationPO");
      goto LAB_00104c2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TranslationPO");
LAB_00104c2e:
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
LAB_00104ca3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104ca3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00104d0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00104d0e:
  return &_get_class_namev()::_class_name_static;
}



/* TranslationPO::get_class() const */

void TranslationPO::get_class(void)

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



/* TranslationPO::EQNode::~EQNode() */

void __thiscall TranslationPO::EQNode::~EQNode(EQNode *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010cfe8;
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
  if (*(long *)(this + 0x188) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x188);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010ce88;
  Object::~Object((Object *)this);
  return;
}



/* TranslationPO::EQNode::~EQNode() */

void __thiscall TranslationPO::EQNode::~EQNode(EQNode *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010cfe8;
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
  if (*(long *)(this + 0x188) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x188);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010ce88;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
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
  local_48 = &_LC4;
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
      goto joined_r0x0010524c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010524c:
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
  local_48 = &_LC4;
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
      goto joined_r0x001053cc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001053cc:
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
LAB_00105728:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105728;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105746;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105746:
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
            if (lVar5 == 0) goto LAB_00105a1f;
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
LAB_00105a1f:
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
    if (cVar6 != '\0') goto LAB_00105ad3;
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
              if (lVar5 == 0) goto LAB_00105b83;
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
LAB_00105b83:
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
      if (cVar6 != '\0') goto LAB_00105ad3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00105ad3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::is_class(String const&) const */

undefined8 __thiscall TranslationPO::is_class(TranslationPO *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00105caf;
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
LAB_00105caf:
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
    if (cVar6 != '\0') goto LAB_00105d63;
  }
  cVar6 = String::operator==(param_1,"TranslationPO");
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
              if (lVar5 == 0) goto LAB_00105e4b;
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
LAB_00105e4b:
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
      if (cVar6 != '\0') goto LAB_00105d63;
    }
    cVar6 = String::operator==(param_1,"Translation");
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
                if (lVar5 == 0) goto LAB_00105f2b;
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
LAB_00105f2b:
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
        if (cVar6 != '\0') goto LAB_00105d63;
      }
      cVar6 = String::operator==(param_1,"Resource");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
          return uVar7;
        }
        goto LAB_00105fd4;
      }
    }
  }
LAB_00105d63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105fd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
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
LAB_00106158:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106158;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106175;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106175:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* Translation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Translation::_get_property_listv(Translation *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Translation";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Translation";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_001065a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001065a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001065c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001065c5:
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
  StringName::StringName((StringName *)&local_78,"Translation",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TranslationPO::_get_property_listv(TranslationPO *this,List *param_1,bool param_2)

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
    Translation::_get_property_listv((Translation *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TranslationPO";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TranslationPO";
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
  if (local_90 == 0) {
LAB_001069f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001069f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106a15;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106a15:
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
  StringName::StringName((StringName *)&local_78,"TranslationPO",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Translation::_get_property_listv((Translation *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Removing unreachable block (ram,0x00107160) */
/* WARNING: Removing unreachable block (ram,0x00107290) */
/* WARNING: Removing unreachable block (ram,0x00107409) */
/* WARNING: Removing unreachable block (ram,0x0010729c) */
/* WARNING: Removing unreachable block (ram,0x001072a6) */
/* WARNING: Removing unreachable block (ram,0x001073eb) */
/* WARNING: Removing unreachable block (ram,0x001072b2) */
/* WARNING: Removing unreachable block (ram,0x001072bc) */
/* WARNING: Removing unreachable block (ram,0x001073cd) */
/* WARNING: Removing unreachable block (ram,0x001072c8) */
/* WARNING: Removing unreachable block (ram,0x001072d2) */
/* WARNING: Removing unreachable block (ram,0x001073af) */
/* WARNING: Removing unreachable block (ram,0x001072de) */
/* WARNING: Removing unreachable block (ram,0x001072e8) */
/* WARNING: Removing unreachable block (ram,0x00107391) */
/* WARNING: Removing unreachable block (ram,0x001072f4) */
/* WARNING: Removing unreachable block (ram,0x001072fe) */
/* WARNING: Removing unreachable block (ram,0x00107373) */
/* WARNING: Removing unreachable block (ram,0x00107306) */
/* WARNING: Removing unreachable block (ram,0x00107310) */
/* WARNING: Removing unreachable block (ram,0x00107358) */
/* WARNING: Removing unreachable block (ram,0x00107318) */
/* WARNING: Removing unreachable block (ram,0x0010732e) */
/* WARNING: Removing unreachable block (ram,0x0010733a) */
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



/* WARNING: Removing unreachable block (ram,0x00107548) */
/* WARNING: Removing unreachable block (ram,0x00107678) */
/* WARNING: Removing unreachable block (ram,0x00107840) */
/* WARNING: Removing unreachable block (ram,0x00107684) */
/* WARNING: Removing unreachable block (ram,0x0010768e) */
/* WARNING: Removing unreachable block (ram,0x00107820) */
/* WARNING: Removing unreachable block (ram,0x0010769a) */
/* WARNING: Removing unreachable block (ram,0x001076a4) */
/* WARNING: Removing unreachable block (ram,0x00107800) */
/* WARNING: Removing unreachable block (ram,0x001076b0) */
/* WARNING: Removing unreachable block (ram,0x001076ba) */
/* WARNING: Removing unreachable block (ram,0x001077e0) */
/* WARNING: Removing unreachable block (ram,0x001076c6) */
/* WARNING: Removing unreachable block (ram,0x001076d0) */
/* WARNING: Removing unreachable block (ram,0x001077c0) */
/* WARNING: Removing unreachable block (ram,0x001076dc) */
/* WARNING: Removing unreachable block (ram,0x001076e6) */
/* WARNING: Removing unreachable block (ram,0x001077a0) */
/* WARNING: Removing unreachable block (ram,0x001076f2) */
/* WARNING: Removing unreachable block (ram,0x001076fc) */
/* WARNING: Removing unreachable block (ram,0x00107780) */
/* WARNING: Removing unreachable block (ram,0x00107704) */
/* WARNING: Removing unreachable block (ram,0x0010771a) */
/* WARNING: Removing unreachable block (ram,0x00107726) */
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



/* void Ref<TranslationPO::EQNode>::instantiate<>() */

void __thiscall Ref<TranslationPO::EQNode>::instantiate<>(Ref<TranslationPO::EQNode> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x198,"");
  pRVar3 = this_00;
  for (lVar2 = 0x33; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010cfe8;
  *(undefined8 *)(this_00 + 400) = 0;
  *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
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
    if (this_00 == (RefCounted *)pOVar5) goto LAB_00108045;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00108045;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00108045:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108228) */
/* WARNING: Removing unreachable block (ram,0x00108358) */
/* WARNING: Removing unreachable block (ram,0x001084d0) */
/* WARNING: Removing unreachable block (ram,0x00108364) */
/* WARNING: Removing unreachable block (ram,0x0010836e) */
/* WARNING: Removing unreachable block (ram,0x001084b2) */
/* WARNING: Removing unreachable block (ram,0x0010837a) */
/* WARNING: Removing unreachable block (ram,0x00108384) */
/* WARNING: Removing unreachable block (ram,0x00108494) */
/* WARNING: Removing unreachable block (ram,0x00108390) */
/* WARNING: Removing unreachable block (ram,0x0010839a) */
/* WARNING: Removing unreachable block (ram,0x00108476) */
/* WARNING: Removing unreachable block (ram,0x001083a6) */
/* WARNING: Removing unreachable block (ram,0x001083b0) */
/* WARNING: Removing unreachable block (ram,0x00108458) */
/* WARNING: Removing unreachable block (ram,0x001083bc) */
/* WARNING: Removing unreachable block (ram,0x001083c6) */
/* WARNING: Removing unreachable block (ram,0x0010843a) */
/* WARNING: Removing unreachable block (ram,0x001083ce) */
/* WARNING: Removing unreachable block (ram,0x001083d8) */
/* WARNING: Removing unreachable block (ram,0x0010841f) */
/* WARNING: Removing unreachable block (ram,0x001083e0) */
/* WARNING: Removing unreachable block (ram,0x001083f5) */
/* WARNING: Removing unreachable block (ram,0x00108401) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
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
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00108658) */
/* WARNING: Removing unreachable block (ram,0x00108788) */
/* WARNING: Removing unreachable block (ram,0x00108900) */
/* WARNING: Removing unreachable block (ram,0x00108794) */
/* WARNING: Removing unreachable block (ram,0x0010879e) */
/* WARNING: Removing unreachable block (ram,0x001088e2) */
/* WARNING: Removing unreachable block (ram,0x001087aa) */
/* WARNING: Removing unreachable block (ram,0x001087b4) */
/* WARNING: Removing unreachable block (ram,0x001088c4) */
/* WARNING: Removing unreachable block (ram,0x001087c0) */
/* WARNING: Removing unreachable block (ram,0x001087ca) */
/* WARNING: Removing unreachable block (ram,0x001088a6) */
/* WARNING: Removing unreachable block (ram,0x001087d6) */
/* WARNING: Removing unreachable block (ram,0x001087e0) */
/* WARNING: Removing unreachable block (ram,0x00108888) */
/* WARNING: Removing unreachable block (ram,0x001087ec) */
/* WARNING: Removing unreachable block (ram,0x001087f6) */
/* WARNING: Removing unreachable block (ram,0x0010886a) */
/* WARNING: Removing unreachable block (ram,0x001087fe) */
/* WARNING: Removing unreachable block (ram,0x00108808) */
/* WARNING: Removing unreachable block (ram,0x0010884f) */
/* WARNING: Removing unreachable block (ram,0x00108810) */
/* WARNING: Removing unreachable block (ram,0x00108825) */
/* WARNING: Removing unreachable block (ram,0x00108831) */
/* String vformat<StringName, StringName, String>(String const&, StringName const, StringName const,
   String const) */

undefined8 *
vformat<StringName,StringName,String>
          (undefined8 *param_1,bool *param_2,StringName *param_3,StringName *param_4,String *param_5
          )

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
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
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBind* create_method_bind<TranslationPO, int>(int (TranslationPO::*)() const) */

MethodBind * create_method_bind<TranslationPO,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010d378;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TranslationPO";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<TranslationPO, String>(String (TranslationPO::*)() const) */

MethodBind * create_method_bind<TranslationPO,String>(_func_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010d3d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "TranslationPO";
  local_30 = 0xd;
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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* TranslationPO::_initialize_classv() */

void TranslationPO::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Translation::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
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
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
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
          if ((code *)PTR__bind_methods_00110010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
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
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Translation";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      if ((code *)PTR__bind_methods_00110008 != Resource::_bind_methods) {
        Translation::_bind_methods();
      }
      Translation::initialize_class()::initialized = '\x01';
    }
    local_58 = "Translation";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "TranslationPO";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TranslationPO::~TranslationPO() */

void __thiscall TranslationPO::~TranslationPO(TranslationPO *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  Object *pOVar4;
  char cVar5;
  int *piVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  bool bVar11;
  
  bVar11 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010d148;
  if (bVar11) {
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001092cd;
    }
    if (*(long *)(this + 0x310) != 0) {
      StringName::unref();
    }
  }
LAB_001092cd:
  Array::~Array((Array *)(this + 0x308));
  if (*(long *)(this + 0x300) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x300);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0x2f8));
  if (*(long *)(this + 0x2e8) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x2e8);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (*(long *)(this + 0x2e0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 0x2e0);
      *(undefined8 *)(this + 0x2e0) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  pvVar9 = *(void **)(this + 0x2b0);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x2d4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2d0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x2d4) = 0;
        *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2b8) + lVar7) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x2b8) + lVar7) = 0;
            pvVar8 = *(void **)((long)pvVar9 + 0x20);
            if (pvVar8 != (void *)0x0) {
              if (*(int *)((long)pvVar9 + 0x44) != 0) {
                uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar9 + 0x40) * 4
                                 );
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar10 = 0;
                  do {
                    piVar6 = (int *)(*(long *)((long)pvVar9 + 0x28) + lVar10);
                    if (*piVar6 != 0) {
                      pvVar8 = *(void **)((long)pvVar8 + lVar10 * 2);
                      *piVar6 = 0;
                      CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar8 + 0x20));
                      if ((StringName::configured != '\0') && (*(long *)((long)pvVar8 + 0x10) != 0))
                      {
                        StringName::unref();
                      }
                      Memory::free_static(pvVar8,false);
                      pvVar8 = *(void **)((long)pvVar9 + 0x20);
                      *(undefined8 *)((long)pvVar8 + lVar10 * 2) = 0;
                    }
                    lVar10 = lVar10 + 4;
                  } while ((ulong)uVar3 * 4 != lVar10);
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar8 == (void *)0x0) goto LAB_0010946b;
                }
              }
              Memory::free_static(pvVar8,false);
              Memory::free_static(*(void **)((long)pvVar9 + 0x28),false);
            }
LAB_0010946b:
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x2b0);
            *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 * 4 != lVar7);
        *(undefined4 *)(this + 0x2d4) = 0;
        *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_001094cf;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x2b8),false);
  }
LAB_001094cf:
  bVar11 = StringName::configured != '\0';
  *(code **)this = Memory::realloc_static;
  if (bVar11) {
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109517;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
    }
  }
LAB_00109517:
  pvVar9 = *(void **)(this + 0x250);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x274) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 600) + lVar7) != 0) {
            bVar11 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 600) + lVar7) = 0;
            pvVar9 = *(void **)((long)pvVar9 + lVar7 * 2);
            if (bVar11) {
              if (*(long *)((long)pvVar9 + 0x18) != 0) {
                StringName::unref();
                if (StringName::configured == '\0') goto LAB_001095ad;
              }
              if (*(long *)((long)pvVar9 + 0x10) != 0) {
                StringName::unref();
              }
            }
LAB_001095ad:
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x250);
            *(undefined8 *)((long)pvVar9 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_001095e9;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 600),false);
  }
LAB_001095e9:
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* TranslationPO::~TranslationPO() */

void __thiscall TranslationPO::~TranslationPO(TranslationPO *this)

{
  ~TranslationPO(this);
  operator_delete(this,0x328);
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
LAB_00109b40:
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
  if (lVar8 == 0) goto LAB_00109b40;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_00109a1a:
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
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_00109a1a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_001099e7;
  }
  if (lVar8 == lVar5) {
LAB_00109abb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001099e7:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00109a9b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_00109abb;
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
LAB_00109a9b:
  puVar7[-1] = param_1;
  return 0;
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
LAB_00109e80:
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
  if (lVar10 == 0) goto LAB_00109e80;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00109d59:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00109d59;
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
    goto LAB_00109ed6;
  }
  if (lVar10 == lVar7) {
LAB_00109dff:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00109ed6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00109dea;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00109dff;
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
LAB_00109dea:
  puVar9[-1] = param_1;
  return 0;
}



/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::_resize_and_rehash
          (HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
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
/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::operator[](HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong __n;
  undefined8 *puVar3;
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
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  void *__s_00;
  ulong uVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  long in_FS_OFFSET;
  uint local_98;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58 [2];
  long local_48;
  long local_40;
  
  lVar31 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar28);
  if (lVar31 == 0) {
LAB_0010a678:
    local_70 = 0;
    uVar33 = uVar41 * 4;
    __n = uVar41 * 8;
    uVar32 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar41 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar41 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,__n);
      }
LAB_0010a309:
      iVar34 = *(int *)(this + 0x2c);
      if (iVar34 != 0) {
LAB_0010a315:
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar33 = CONCAT44(0,uVar28);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar29 = StringName::get_empty_hash();
        }
        else {
          uVar29 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar29 == 0) {
          uVar29 = 1;
        }
        uVar40 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar29 * lVar31;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar33;
        lVar36 = SUB168(auVar8 * auVar20,8);
        uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
        uVar39 = SUB164(auVar8 * auVar20,8);
        if (uVar38 != 0) {
          do {
            if ((uVar29 == uVar38) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar36 * 8) + 0x10) == *(long *)param_1))
            {
              puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar39 * 8);
              if (puVar30[4] != 0) {
                CowData<StringName>::_ref((CowData<StringName> *)(puVar30 + 4),(CowData *)&local_70)
                ;
                puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar39 * 8);
              }
              goto LAB_0010a5fa;
            }
            uVar40 = uVar40 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar39 + 1) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar33;
            lVar36 = SUB168(auVar9 * auVar21,8);
            uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
            uVar39 = SUB164(auVar9 * auVar21,8);
          } while ((uVar38 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar38 * lVar31, auVar22._8_8_ = 0,
                  auVar22._0_8_ = uVar33, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar28 + uVar39) - SUB164(auVar10 * auVar22,8)) * lVar31,
                  auVar23._8_8_ = 0, auVar23._0_8_ = uVar33, uVar40 <= SUB164(auVar11 * auVar23,8)))
          ;
        }
        iVar34 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a41c;
    }
    iVar34 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010a41c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010a315;
LAB_0010a43e:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar30 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a5fa;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar29 = StringName::get_empty_hash();
        lVar31 = *(long *)(this + 8);
      }
      else {
        uVar29 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar29 == 0) {
        uVar29 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar36;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar41;
      lVar35 = SUB168(auVar4 * auVar16,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar39 = SUB164(auVar4 * auVar16,8);
      if (uVar38 != 0) {
        uVar40 = 0;
        do {
          if ((uVar38 == uVar29) &&
             (*(long *)(*(long *)(lVar31 + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            puVar30 = *(undefined8 **)(lVar31 + (ulong)uVar39 * 8);
            goto LAB_0010a2bc;
          }
          uVar40 = uVar40 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar39 + 1) * lVar36;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar35 = SUB168(auVar5 * auVar17,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar39 = SUB164(auVar5 * auVar17,8);
        } while ((uVar38 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar38 * lVar36, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar39 + uVar28) - SUB164(auVar6 * auVar18,8)) * lVar36,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar41, uVar40 <= SUB164(auVar7 * auVar19,8)));
      }
      local_70 = 0;
      uVar41 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar31 == 0) goto LAB_0010a678;
      goto LAB_0010a309;
    }
    local_70 = 0;
    iVar34 = 0;
LAB_0010a41c:
    if ((float)uVar41 * __LC56 < (float)(iVar34 + 1)) goto LAB_0010a43e;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)local_58,param_1);
  local_48 = 0;
  puVar30 = (undefined8 *)operator_new(0x28,"");
  *puVar30 = local_68._0_8_;
  puVar30[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar30 + 2),(StringName *)local_58);
  puVar30[4] = 0;
  if (local_48 != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)(puVar30 + 4),(CowData *)&local_48);
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_48);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar30;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 == 0) goto LAB_0010a64d;
LAB_0010a508:
    uVar28 = *(uint *)(lVar31 + 0x20);
  }
  else {
    *puVar3 = puVar30;
    puVar30[1] = puVar3;
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 != 0) goto LAB_0010a508;
LAB_0010a64d:
    uVar28 = StringName::get_empty_hash();
  }
  lVar31 = *(long *)(this + 0x10);
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar41 = (ulong)uVar28;
  uVar39 = 0;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar29);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar41 * lVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar33;
  lVar37 = SUB168(auVar12 * auVar24,8);
  lVar35 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar31 + lVar37 * 4);
  iVar34 = SUB164(auVar12 * auVar24,8);
  uVar38 = *puVar1;
  puVar3 = puVar30;
  while (uVar38 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar38 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar33;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar29 + iVar34) - SUB164(auVar13 * auVar25,8)) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar33;
    local_98 = SUB164(auVar14 * auVar26,8);
    puVar42 = puVar3;
    if (local_98 < uVar39) {
      *puVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar38;
      puVar2 = (undefined8 *)(lVar35 + lVar37 * 8);
      puVar42 = (undefined8 *)*puVar2;
      *puVar2 = puVar3;
      uVar39 = local_98;
    }
    uVar28 = (uint)uVar41;
    uVar39 = uVar39 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar34 + 1) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    lVar37 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar31 + lVar37 * 4);
    iVar34 = SUB164(auVar15 * auVar27,8);
    puVar3 = puVar42;
    uVar38 = *puVar1;
  }
  *(undefined8 **)(lVar35 + lVar37 * 8) = puVar3;
  *puVar1 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a5fa:
  CowData<StringName>::_unref((CowData<StringName> *)&local_70);
LAB_0010a2bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar30 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::insert(StringName const&, Vector<StringName> const&, bool) */

StringName *
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::insert(StringName *param_1,Vector *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
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
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  long in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  long *local_80;
  long local_58 [2];
  long local_48;
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_0010a7c2;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010a8e1;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010a7ce;
LAB_0010a903:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_0010aacb;
    }
    _resize_and_rehash((HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010a7c2:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0010a7ce:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            if (local_80[4] != *(long *)(in_RCX + 8)) {
              CowData<StringName>::_ref
                        ((CowData<StringName> *)(local_80 + 4),(CowData *)(in_RCX + 8));
              local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            }
            goto LAB_0010aacb;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_0010a8e1:
    if ((float)uVar23 * __LC56 < (float)(iVar28 + 1)) goto LAB_0010a903;
  }
  StringName::StringName((StringName *)local_58,pSVar29);
  local_48 = 0;
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)&local_48,(CowData *)(in_RCX + 8));
  }
  local_80 = (long *)operator_new(0x28,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)local_58);
  local_80[4] = 0;
  if (local_48 != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)(local_80 + 4),(CowData *)&local_48);
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_48);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_0010a9ef:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_0010a9fc;
LAB_0010ab21:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar3 = local_80;
      local_80[1] = (long)puVar3;
      *(long **)(param_2 + 0x20) = local_80;
      goto LAB_0010a9ef;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = local_80;
    *local_80 = lVar25;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x18) = local_80;
    if (lVar25 == 0) goto LAB_0010ab21;
LAB_0010a9fc:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = local_80;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar28 + uVar2) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar31 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar36;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar31 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010aacb:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, Vector<StringName>,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Vector<StringName> > > > const&) */

void __thiscall
HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
::operator=(HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
               *)param_1) {
    uVar4 = *(uint *)(this + 0x28);
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar1 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 != lVar6);
        uVar4 = *(uint *)(this + 0x28);
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar2 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar4 != 0x1c) {
        uVar3 = (ulong)uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar3 * 4)) {
            if (uVar2 != uVar4) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar2;
              }
              else {
                _resize_and_rehash(this,uVar2);
              }
            }
            goto LAB_0010ad69;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0010ad69:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(Vector *)this,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashMap<StringName, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<StringName> > > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, Vector<StringName>,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Vector<StringName> > > > > >
   >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
::operator[](HashMap<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>>>>
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
  int iVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 *puVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  long *plVar55;
  long in_FS_OFFSET;
  undefined8 *local_f8;
  StringName local_c0 [8];
  HashMap local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  lVar42 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar42 == 0) {
LAB_0010b752:
    local_90 = 2;
    local_a0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    uVar44 = uVar39 * 4;
    uVar49 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = pvVar43;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar49)) && (pvVar43 < (void *)((long)pvVar3 + uVar44))
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
        memset(pvVar43,0,uVar49);
      }
      goto LAB_0010b01a;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0010b11f;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010b026;
LAB_0010b145:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_f8 = (undefined8 *)0x18;
      goto LAB_0010afbc;
    }
    uVar39 = (ulong)(uVar37 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar49 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar49 * 4;
    uVar44 = uVar49 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar49 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar38 != 0) {
      uVar39 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + uVar39 * 4);
        if (uVar37 != 0) {
          lVar42 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar52);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar47;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar44;
          lVar46 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar42 + lVar46 * 4);
          iVar45 = SUB164(auVar12 * auVar28,8);
          uVar53 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar53 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar53 * lVar47;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar44;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((iVar45 + uVar52) - SUB164(auVar13 * auVar29,8)) * lVar47;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar44;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar51 = uVar40;
            if (uVar36 < uVar54) {
              *puVar1 = uVar37;
              puVar41 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar51 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar53;
              uVar54 = uVar36;
            }
            uVar54 = uVar54 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar44;
            lVar46 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar42 + lVar46 * 4);
            iVar45 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar38);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_90 = 2;
      local_b0 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_a0 = (undefined1  [16])0x0;
    }
    else {
      lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar42 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar47;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar53 = SUB164(auVar4 * auVar20,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar52 == uVar38) &&
             (*(long *)(*(long *)(lVar42 + lVar46 * 8) + 0x10) == *(long *)param_1)) {
            local_f8 = (undefined8 *)(*(long *)(lVar42 + (ulong)uVar53 * 8) + 0x18);
            goto LAB_0010afbc;
          }
          uVar54 = uVar54 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar53 + 1) * lVar47;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar53 = SUB164(auVar5 * auVar21,8);
        } while ((uVar52 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar52 * lVar47, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar53 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar47,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar54 <= SUB164(auVar7 * auVar23,8)));
      }
      local_90 = 2;
      local_b0 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_a0 = (undefined1  [16])0x0;
      if (lVar42 == 0) goto LAB_0010b752;
    }
LAB_0010b01a:
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
LAB_0010b026:
      uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      uVar44 = CONCAT44(0,uVar37);
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      uVar54 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar38 * lVar42;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar44;
      lVar47 = SUB168(auVar8 * auVar24,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar8 * auVar24,8);
      if (uVar52 != 0) {
        do {
          if ((uVar52 == uVar38) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
            ::operator=((HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
                         *)(*(long *)(*(long *)(this + 8) + (ulong)uVar53 * 8) + 0x18),local_b8);
            local_f8 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar53 * 8) + 0x18);
            goto LAB_0010afbc;
          }
          uVar54 = uVar54 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar53 + 1) * lVar42;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar44;
          lVar47 = SUB168(auVar9 * auVar25,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar9 * auVar25,8);
        } while ((uVar52 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar52 * lVar42, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar44, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar37 + uVar53) - SUB164(auVar10 * auVar26,8)) * lVar42,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar44, uVar54 <= SUB164(auVar11 * auVar27,8)));
      }
      iVar45 = *(int *)(this + 0x2c);
    }
LAB_0010b11f:
    if ((float)uVar39 * __LC56 < (float)(iVar45 + 1)) goto LAB_0010b145;
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
      goto LAB_0010b3da;
    }
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x1d);
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010b3da:
  puVar41 = (undefined8 *)operator_new(0x48,"");
  *puVar41 = local_88._0_8_;
  puVar41[1] = local_88._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)local_78);
  puVar41[8] = 0;
  uVar37 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
  *(undefined1 (*) [16])(puVar41 + 4) = (undefined1  [16])0x0;
  lVar42 = 1;
  *(undefined1 (*) [16])(puVar41 + 6) = (undefined1  [16])0x0;
  if (5 < uVar37) {
    do {
      if (uVar37 <= *(uint *)(hash_table_size_primes + lVar42 * 4)) {
        *(int *)(puVar41 + 8) = (int)lVar42;
        goto LAB_0010b488;
      }
      lVar42 = lVar42 + 1;
    } while (lVar42 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010b488:
  pvVar43 = (void *)local_68._0_8_;
  if (local_48._4_4_ == 0) {
    if ((void *)local_68._0_8_ != (void *)0x0) goto LAB_0010b702;
  }
  else if ((long *)local_58._0_8_ == (long *)0x0) {
    if ((void *)local_68._0_8_ != (void *)0x0) {
      uVar37 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar37 != 0) goto LAB_0010b51a;
LAB_0010b93a:
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      pvVar43 = (void *)local_68._0_8_;
      goto LAB_0010b702;
    }
  }
  else {
    plVar55 = (long *)local_58._0_8_;
    do {
      HashMap<StringName,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<StringName>>>>
      ::insert(local_c0,(Vector *)(puVar41 + 3),(bool)((char)plVar55 + '\x10'));
      plVar55 = (long *)*plVar55;
    } while (plVar55 != (long *)0x0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      pvVar43 = (void *)local_68._0_8_;
      if (local_48._4_4_ != 0) {
        uVar37 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
        if (uVar37 == 0) goto LAB_0010b93a;
LAB_0010b51a:
        lVar42 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar42) != 0) {
            pvVar43 = *(void **)((long)pvVar43 + lVar42 * 2);
            *(int *)(local_68._8_8_ + lVar42) = 0;
            CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar43 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar43 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar43,false);
            *(undefined8 *)(local_68._0_8_ + lVar42 * 2) = 0;
            pvVar43 = (void *)local_68._0_8_;
          }
          lVar42 = lVar42 + 4;
        } while ((ulong)uVar37 * 4 != lVar42);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar43 == (void *)0x0) goto LAB_0010b5ba;
      }
LAB_0010b702:
      Memory::free_static(pvVar43,false);
      Memory::free_static((void *)local_68._8_8_,false);
    }
  }
LAB_0010b5ba:
  local_f8 = puVar41 + 3;
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  puVar50 = *(undefined8 **)(this + 0x20);
  if (puVar50 == (undefined8 *)0x0) {
    lVar42 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar41;
    *(undefined8 **)(this + 0x20) = puVar41;
    if (lVar42 != 0) goto LAB_0010b5fb;
LAB_0010b814:
    uVar37 = StringName::get_empty_hash();
  }
  else {
    *puVar50 = puVar41;
    puVar41[1] = puVar50;
    lVar42 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar41;
    if (lVar42 == 0) goto LAB_0010b814;
LAB_0010b5fb:
    uVar37 = *(uint *)(lVar42 + 0x20);
  }
  lVar42 = *(long *)(this + 0x10);
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar53 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar44 = CONCAT44(0,uVar38);
  lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar47;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar44;
  lVar48 = SUB168(auVar16 * auVar32,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lVar48 * 4);
  iVar45 = SUB164(auVar16 * auVar32,8);
  uVar52 = *puVar1;
  while (uVar52 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar52 * lVar47;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar44;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar17 * auVar33,8)) * lVar47;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar44;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar50 = puVar41;
    if (uVar37 < uVar53) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar46 + lVar48 * 8);
      puVar50 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar53 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar53 = uVar53 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar44;
    lVar48 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar42 + lVar48 * 4);
    iVar45 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar50;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar48 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010afbc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f8;
}



/* WARNING: Removing unreachable block (ram,0x0010ba78) */
/* WARNING: Removing unreachable block (ram,0x0010bba8) */
/* WARNING: Removing unreachable block (ram,0x0010bd70) */
/* WARNING: Removing unreachable block (ram,0x0010bbb4) */
/* WARNING: Removing unreachable block (ram,0x0010bbbe) */
/* WARNING: Removing unreachable block (ram,0x0010bd50) */
/* WARNING: Removing unreachable block (ram,0x0010bbca) */
/* WARNING: Removing unreachable block (ram,0x0010bbd4) */
/* WARNING: Removing unreachable block (ram,0x0010bd30) */
/* WARNING: Removing unreachable block (ram,0x0010bbe0) */
/* WARNING: Removing unreachable block (ram,0x0010bbea) */
/* WARNING: Removing unreachable block (ram,0x0010bd10) */
/* WARNING: Removing unreachable block (ram,0x0010bbf6) */
/* WARNING: Removing unreachable block (ram,0x0010bc00) */
/* WARNING: Removing unreachable block (ram,0x0010bcf0) */
/* WARNING: Removing unreachable block (ram,0x0010bc0c) */
/* WARNING: Removing unreachable block (ram,0x0010bc16) */
/* WARNING: Removing unreachable block (ram,0x0010bcd0) */
/* WARNING: Removing unreachable block (ram,0x0010bc22) */
/* WARNING: Removing unreachable block (ram,0x0010bc2c) */
/* WARNING: Removing unreachable block (ram,0x0010bcb0) */
/* WARNING: Removing unreachable block (ram,0x0010bc34) */
/* WARNING: Removing unreachable block (ram,0x0010bc4a) */
/* WARNING: Removing unreachable block (ram,0x0010bc56) */
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
      _err_print_error(&_LC73,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010bf80;
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
      (*(code *)pVVar4)((String *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010bf80:
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
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10bd98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c2c1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar3 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar3 + -2,false);
    }
  }
LAB_0010c2c1:
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
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10bd98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c4fe;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_0010c4fe:
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
  long lVar2;
  char *pcVar3;
  int iVar4;
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
      _err_print_error(&_LC73,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010c760;
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
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0010c760:
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
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c9c4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_0010c9c4:
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
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cbc3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar3;
LAB_0010cbc3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TranslationPO::~TranslationPO() */

void __thiscall TranslationPO::~TranslationPO(TranslationPO *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TranslationPO::EQNode::~EQNode() */

void __thiscall TranslationPO::EQNode::~EQNode(EQNode *this)

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
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

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


