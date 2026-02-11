
/* GraphEditArranger::_calculate_inner_shifts(Dictionary&, Dictionary const&, Dictionary const&,
   Dictionary const&, HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   > const&, HashMap<StringName, Pair<int, int>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Pair<int,
   int> > > > const&) */

void __thiscall
GraphEditArranger::_calculate_inner_shifts
          (GraphEditArranger *this,Dictionary *param_1,Dictionary *param_2,Dictionary *param_3,
          Dictionary *param_4,HashSet *param_5,HashMap *param_6)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcVar15;
  undefined1 auVar16 [16];
  char *pcVar17;
  uint uVar18;
  Variant *pVVar19;
  Object *pOVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float local_134;
  Object *local_130;
  StringName *local_e8;
  int local_e0;
  char *local_d8;
  char *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  size_t local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar3 = *(int *)(param_5 + 0x24);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 == 0) {
LAB_00100051:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_e8 = *(StringName **)param_5;
  local_e0 = 0;
  do {
    StringName::StringName((StringName *)&local_d8,local_e8);
    Variant::Variant((Variant *)local_58,(StringName *)&local_d8);
    Dictionary::operator[]((Variant *)param_4);
    Variant::operator_cast_to_StringName((Variant *)&local_d0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_134 = 0.0;
    if (local_d0 != local_d8) {
      do {
        Variant::Variant((Variant *)local_58,(StringName *)&local_d8);
        Dictionary::operator[]((Variant *)param_2);
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        pcVar17 = local_a8;
        pcVar5 = local_d0;
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (pcVar17 == pcVar5) break;
        if (local_d0 == (char *)0x0) {
LAB_00100a2c:
          local_b0 = 0;
        }
        else {
          pcVar5 = *(char **)(local_d0 + 8);
          local_b0 = 0;
          if (pcVar5 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(local_d0 + 0x10) + -0x10);
            if (*(long *)(local_d0 + 0x10) == 0) goto LAB_00100a2c;
            do {
              lVar6 = *plVar1;
              if (lVar6 == 0) goto LAB_00100a2c;
              LOCK();
              lVar22 = *plVar1;
              bVar26 = lVar6 == lVar22;
              if (bVar26) {
                *plVar1 = lVar6 + 1;
                lVar22 = lVar6;
              }
              UNLOCK();
            } while (!bVar26);
            if (lVar22 != -1) {
              local_b0 = *(long *)(local_d0 + 0x10);
            }
          }
          else {
            local_a0 = strlen(pcVar5);
            local_a8 = pcVar5;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        local_b8 = 0;
        local_a8 = " ";
        local_a0 = 1;
        String::parse_latin1((StrRange *)&local_b8);
        if (local_d8 == (char *)0x0) {
LAB_00100a0c:
          local_c0 = 0;
        }
        else {
          pcVar5 = *(char **)(local_d8 + 8);
          local_c0 = 0;
          if (pcVar5 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(local_d8 + 0x10) + -0x10);
            if (*(long *)(local_d8 + 0x10) == 0) goto LAB_00100a0c;
            do {
              lVar6 = *plVar1;
              if (lVar6 == 0) goto LAB_00100a0c;
              LOCK();
              lVar22 = *plVar1;
              bVar26 = lVar6 == lVar22;
              if (bVar26) {
                *plVar1 = lVar6 + 1;
                lVar22 = lVar6;
              }
              UNLOCK();
            } while (!bVar26);
            if (lVar22 != -1) {
              local_c0 = *(long *)(local_d8 + 0x10);
            }
          }
          else {
            local_a0 = strlen(pcVar5);
            local_a8 = pcVar5;
            String::parse_latin1((StrRange *)&local_c0);
          }
        }
        String::operator+((String *)&local_a8,(String *)&local_c0);
        String::operator+((String *)&local_c8,(String *)&local_a8);
        pcVar5 = local_a8;
        if (local_a8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
        lVar6 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar6 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar6 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        Variant::Variant((Variant *)local_58,(StringName *)&local_d8);
        pVVar19 = (Variant *)Dictionary::operator[]((Variant *)param_3);
        local_130 = Variant::operator_cast_to_Object_(pVVar19);
        if (local_130 != (Object *)0x0) {
          local_130 = (Object *)__dynamic_cast(local_130,&Object::typeinfo,&GraphNode::typeinfo,0);
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(StringName *)&local_d0);
        pVVar19 = (Variant *)Dictionary::operator[]((Variant *)param_3);
        pOVar20 = Variant::operator_cast_to_Object_(pVVar19);
        if (pOVar20 != (Object *)0x0) {
          pOVar20 = (Object *)__dynamic_cast(pOVar20,&Object::typeinfo,&GraphNode::typeinfo,0);
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
        if ((*(long *)(param_6 + 8) == 0) || (*(int *)(param_6 + 0x2c) == 0)) {
LAB_001009d0:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_6 + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_6 + 0x28) * 8);
        if (local_a8 == (char *)0x0) {
          uVar18 = StringName::get_empty_hash();
        }
        else {
          uVar18 = *(uint *)(local_a8 + 0x20);
        }
        if (uVar18 == 0) {
          uVar18 = 1;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)uVar18 * lVar6;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar25;
        lVar22 = SUB168(auVar7 * auVar11,8);
        iVar21 = SUB164(auVar7 * auVar11,8);
        uVar23 = *(uint *)(*(long *)(param_6 + 0x10) + lVar22 * 4);
        if (uVar23 == 0) goto LAB_001009d0;
        uVar24 = 0;
        while ((uVar23 != uVar18 ||
               (*(char **)(*(long *)(*(long *)(param_6 + 8) + lVar22 * 8) + 0x10) != local_a8))) {
          uVar24 = uVar24 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar21 + 1) * lVar6;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar25;
          lVar22 = SUB168(auVar8 * auVar12,8);
          uVar23 = *(uint *)(*(long *)(param_6 + 0x10) + lVar22 * 4);
          iVar21 = SUB164(auVar8 * auVar12,8);
          if ((uVar23 == 0) ||
             (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar23 * lVar6, auVar13._8_8_ = 0,
             auVar13._0_8_ = uVar25, auVar10._8_8_ = 0,
             auVar10._0_8_ = (ulong)((uVar4 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar6,
             auVar14._8_8_ = 0, auVar14._0_8_ = uVar25, SUB164(auVar10 * auVar14,8) < uVar24))
          goto LAB_001009d0;
        }
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
        fVar27 = (float)GraphEdit::get_zoom();
        GraphNode::get_output_port_position((int)local_130);
        fVar28 = (float)GraphEdit::get_zoom();
        GraphNode::get_input_port_position((int)pOVar20);
        Variant::Variant((Variant *)local_58,(StringName *)&local_d8);
        pVVar19 = (Variant *)Dictionary::operator[]((Variant *)param_1);
        fVar29 = Variant::operator_cast_to_float(pVVar19);
        fVar30 = (float)GraphEdit::get_zoom();
        fVar29 = fVar29 + (fVar27 * extraout_XMM0_Db - fVar28 * extraout_XMM0_Db_00) / fVar30;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,fVar29);
        Variant::Variant((Variant *)local_78,(StringName *)&local_d0);
        pVVar19 = (Variant *)Dictionary::operator[]((Variant *)param_1);
        if (pVVar19 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar19] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar19 = 0;
          *(int *)pVVar19 = local_58[0];
          *(undefined8 *)(pVVar19 + 8) = local_50;
          *(undefined8 *)(pVVar19 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (fVar29 <= local_134) {
          local_134 = fVar29;
        }
        StringName::operator=((StringName *)&local_d8,(StringName *)&local_d0);
        Variant::Variant((Variant *)local_58,(StringName *)&local_d0);
        Dictionary::operator[]((Variant *)param_4);
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        if (local_d0 == local_a8) {
          if ((StringName::configured == '\0') || (local_a8 == (char *)0x0)) goto LAB_00100766;
          StringName::unref();
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        else {
          StringName::unref();
          local_d0 = local_a8;
LAB_00100766:
          cVar2 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar2 != '\0') {
          Variant::_clear_internal();
        }
        lVar6 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
      } while (local_d8 != local_d0);
    }
    StringName::operator=((StringName *)&local_d8,local_e8);
    do {
      while( true ) {
        Variant::Variant((Variant *)local_78,(StringName *)&local_d8);
        pVVar19 = (Variant *)Dictionary::operator[]((Variant *)param_1);
        fVar27 = Variant::operator_cast_to_float(pVVar19);
        Variant::Variant((Variant *)local_58,fVar27 - local_134);
        Variant::Variant((Variant *)local_98,(StringName *)&local_d8);
        pVVar19 = (Variant *)Dictionary::operator[]((Variant *)param_1);
        if (pVVar19 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar19] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar19 = 0;
          *(int *)pVVar19 = local_58[0];
          auVar16._8_8_ = uStack_48;
          auVar16._0_8_ = local_50;
          *(undefined1 (*) [16])(pVVar19 + 8) = auVar16;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(StringName *)&local_d8);
        Dictionary::operator[]((Variant *)param_4);
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        if (local_d8 != local_a8) break;
        if ((StringName::configured == '\0') || (local_a8 == (char *)0x0)) goto LAB_00100808;
        StringName::unref();
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010081b;
LAB_00100952:
        Variant::_clear_internal();
        if (local_d8 == *(char **)local_e8) goto LAB_00100970;
      }
      StringName::unref();
      local_d8 = local_a8;
LAB_00100808:
      if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_00100952;
LAB_0010081b:
    } while (local_d8 != *(char **)local_e8);
LAB_00100970:
    if ((StringName::configured != '\0') &&
       (((local_d0 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_d8 != (char *)0x0)))) {
      StringName::unref();
    }
    local_e0 = local_e0 + 1;
    if (iVar3 <= local_e0) goto LAB_00100051;
    local_e8 = local_e8 + 8;
  } while( true );
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



/* GraphEditArranger::_split(Vector<StringName> const&, HashMap<StringName, Dictionary,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Dictionary> > > const&) */

Vector * GraphEditArranger::_split(Vector *param_1,HashMap *param_2)

{
  StringName *pSVar1;
  StringName *pSVar2;
  uint uVar3;
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
  code *pcVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  Variant *pVVar25;
  long in_RCX;
  uint uVar26;
  long in_RDX;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  Vector<StringName> local_88 [8];
  undefined8 local_80;
  Vector<StringName> local_78 [8];
  long local_70;
  long local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RDX + 8) == 0) || (lVar28 = *(long *)(*(long *)(in_RDX + 8) + -8), lVar28 == 0))
  {
    *(undefined8 *)(param_1 + 8) = 0;
LAB_00100eb5:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar21 = Math::random(0,(int)lVar28 + -1);
  lVar24 = (long)iVar21;
  lVar28 = *(long *)(in_RDX + 8);
  if (lVar24 < 0) {
    if (lVar28 != 0) {
      lVar27 = *(long *)(lVar28 + -8);
      goto LAB_00101326;
    }
  }
  else if (lVar28 != 0) {
    lVar27 = *(long *)(lVar28 + -8);
    if (lVar24 < lVar27) {
      pSVar1 = (StringName *)(lVar28 + lVar24 * 8);
      lVar24 = 0;
      local_80 = 0;
      local_70 = 0;
      while (lVar24 < lVar27) {
        pSVar2 = (StringName *)(lVar28 + lVar24 * 8);
        lVar27 = *(long *)pSVar1;
        if (lVar27 != *(long *)pSVar2) {
          if ((*(long *)(in_RCX + 8) == 0) || (*(int *)(in_RCX + 0x2c) == 0)) {
LAB_00101220:
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4);
          uVar31 = CONCAT44(0,uVar3);
          lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RCX + 0x28) * 8);
          if (lVar27 == 0) {
            uVar23 = StringName::get_empty_hash();
          }
          else {
            uVar23 = *(uint *)(lVar27 + 0x20);
          }
          if (uVar23 == 0) {
            uVar23 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar23 * lVar28;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar31;
          lVar27 = SUB168(auVar4 * auVar12,8);
          uVar29 = *(uint *)(*(long *)(in_RCX + 0x10) + lVar27 * 4);
          uVar26 = SUB164(auVar4 * auVar12,8);
          if (uVar29 == 0) goto LAB_00101220;
          uVar30 = 0;
          while ((uVar23 != uVar29 ||
                 (*(long *)(*(long *)(*(long *)(in_RCX + 8) + lVar27 * 8) + 0x10) != *(long *)pSVar1
                 ))) {
            uVar30 = uVar30 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(uVar26 + 1) * lVar28;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar31;
            lVar27 = SUB168(auVar5 * auVar13,8);
            uVar29 = *(uint *)(*(long *)(in_RCX + 0x10) + lVar27 * 4);
            uVar26 = SUB164(auVar5 * auVar13,8);
            if ((uVar29 == 0) ||
               (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar29 * lVar28, auVar14._8_8_ = 0,
               auVar14._0_8_ = uVar31, auVar7._8_8_ = 0,
               auVar7._0_8_ = (ulong)((uVar3 + uVar26) - SUB164(auVar6 * auVar14,8)) * lVar28,
               auVar15._8_8_ = 0, auVar15._0_8_ = uVar31, SUB164(auVar7 * auVar15,8) < uVar30))
            goto LAB_00101220;
          }
          lVar28 = *(long *)(*(long *)(in_RCX + 8) + (ulong)uVar26 * 8);
          Variant::Variant((Variant *)local_58,pSVar2);
          pVVar25 = (Variant *)Dictionary::operator[]((Variant *)(lVar28 + 0x18));
          iVar21 = Variant::operator_cast_to_int(pVVar25);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((*(long *)(in_RCX + 8) == 0) || (*(int *)(in_RCX + 0x2c) == 0)) goto LAB_00101220;
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4);
          uVar31 = CONCAT44(0,uVar3);
          lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RCX + 0x28) * 8);
          if (*(long *)pSVar2 == 0) {
            uVar23 = StringName::get_empty_hash();
          }
          else {
            uVar23 = *(uint *)(*(long *)pSVar2 + 0x20);
          }
          if (uVar23 == 0) {
            uVar23 = 1;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar23 * lVar28;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar31;
          lVar27 = SUB168(auVar8 * auVar16,8);
          uVar29 = *(uint *)(*(long *)(in_RCX + 0x10) + lVar27 * 4);
          uVar26 = SUB164(auVar8 * auVar16,8);
          if (uVar29 == 0) goto LAB_00101220;
          uVar30 = 0;
          while ((uVar23 != uVar29 ||
                 (*(long *)(*(long *)(*(long *)(in_RCX + 8) + lVar27 * 8) + 0x10) != *(long *)pSVar2
                 ))) {
            uVar30 = uVar30 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar26 + 1) * lVar28;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar31;
            lVar27 = SUB168(auVar9 * auVar17,8);
            uVar29 = *(uint *)(*(long *)(in_RCX + 0x10) + lVar27 * 4);
            uVar26 = SUB164(auVar9 * auVar17,8);
            if ((uVar29 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar29 * lVar28, auVar18._8_8_ = 0,
               auVar18._0_8_ = uVar31, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar3 + uVar26) - SUB164(auVar10 * auVar18,8)) * lVar28,
               auVar19._8_8_ = 0, auVar19._0_8_ = uVar31, SUB164(auVar11 * auVar19,8) < uVar30))
            goto LAB_00101220;
          }
          lVar28 = *(long *)(*(long *)(in_RCX + 8) + (ulong)uVar26 * 8);
          Variant::Variant((Variant *)local_58,pSVar1);
          pVVar25 = (Variant *)Dictionary::operator[]((Variant *)(lVar28 + 0x18));
          iVar22 = Variant::operator_cast_to_int(pVVar25);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (iVar22 < iVar21) {
            StringName::StringName((StringName *)&local_68,pSVar2);
            Vector<StringName>::push_back(local_88,(StringName *)&local_68);
          }
          else {
            StringName::StringName((StringName *)&local_68,pSVar2);
            Vector<StringName>::push_back(local_78,(StringName *)&local_68);
          }
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          lVar28 = *(long *)(in_RDX + 8);
        }
        lVar24 = lVar24 + 1;
        if (lVar28 == 0) break;
        lVar27 = *(long *)(lVar28 + -8);
      }
      StringName::StringName((StringName *)&local_68,pSVar1);
      Vector<StringName>::push_back(local_88,(StringName *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      local_60 = 0;
      if (local_70 != 0) {
        CowData<StringName>::_ref((CowData<StringName> *)&local_60,(CowData *)&local_70);
      }
      Vector<StringName>::append_array(local_88,(StringName *)&local_68);
      CowData<StringName>::_unref((CowData<StringName> *)&local_60);
      *(undefined8 *)(param_1 + 8) = local_80;
      CowData<StringName>::_unref((CowData<StringName> *)&local_70);
      goto LAB_00100eb5;
    }
    goto LAB_00101326;
  }
  lVar27 = 0;
LAB_00101326:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar27,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar20 = (code *)invalidInstructionException();
  (*pcVar20)();
}



/* GraphEditArranger::_set_operations(GraphEditArranger::SET_OPERATIONS, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> >&, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> > const&) */

uint __thiscall
GraphEditArranger::_set_operations(undefined8 param_1,uint param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
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
  uint uVar59;
  uint uVar60;
  ulong uVar61;
  long lVar62;
  uint *puVar63;
  int iVar64;
  int iVar65;
  long lVar66;
  long lVar67;
  ulong uVar68;
  ulong uVar69;
  uint uVar70;
  ulong uVar71;
  uint *puVar72;
  uint *puVar73;
  uint uVar74;
  ulong uVar75;
  int iVar76;
  StringName *pSVar77;
  long lVar78;
  long in_FS_OFFSET;
  long *local_a0;
  long *local_90;
  long local_60;
  Vector<StringName> local_58 [8];
  long *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 2) {
    local_50[0] = (long *)0x0;
    iVar65 = *(int *)((long)param_3 + 0x24);
    if (iVar65 != 0) {
      pSVar77 = (StringName *)*param_3;
      iVar76 = 1;
      do {
        if ((*param_4 != 0) && (*(int *)((long)param_4 + 0x24) != 0)) {
          uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 4) * 4);
          uVar61 = CONCAT44(0,uVar59);
          lVar62 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 4) * 8);
          if (*(long *)pSVar77 == 0) {
            uVar60 = StringName::get_empty_hash();
          }
          else {
            uVar60 = *(uint *)(*(long *)pSVar77 + 0x20);
          }
          if (uVar60 == 0) {
            uVar60 = 1;
          }
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (ulong)uVar60 * lVar62;
          auVar45._8_8_ = 0;
          auVar45._0_8_ = uVar61;
          lVar66 = SUB168(auVar19 * auVar45,8);
          uVar70 = *(uint *)(param_4[3] + lVar66 * 4);
          iVar64 = SUB164(auVar19 * auVar45,8);
          if (uVar70 != 0) {
            uVar74 = 0;
            while ((uVar60 != uVar70 ||
                   (*(long *)(*param_4 + (ulong)*(uint *)(param_4[1] + lVar66 * 4) * 8) !=
                    *(long *)pSVar77))) {
              uVar74 = uVar74 + 1;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)(iVar64 + 1) * lVar62;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = uVar61;
              lVar66 = SUB168(auVar20 * auVar46,8);
              uVar70 = *(uint *)(param_4[3] + lVar66 * 4);
              iVar64 = SUB164(auVar20 * auVar46,8);
              if ((uVar70 == 0) ||
                 (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar70 * lVar62, auVar47._8_8_ = 0,
                 auVar47._0_8_ = uVar61, auVar22._8_8_ = 0,
                 auVar22._0_8_ = (ulong)((uVar59 + iVar64) - SUB164(auVar21 * auVar47,8)) * lVar62,
                 auVar48._8_8_ = 0, auVar48._0_8_ = uVar61, SUB164(auVar22 * auVar48,8) < uVar74))
              goto LAB_00101938;
            }
            StringName::StringName((StringName *)&local_60,pSVar77);
            Vector<StringName>::push_back(local_58,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
          }
        }
LAB_00101938:
        if (iVar65 <= iVar76) break;
        iVar76 = iVar76 + 1;
        pSVar77 = pSVar77 + 8;
      } while( true );
    }
    CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50);
    local_a0 = local_50[0];
    CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50);
    local_90 = local_50[0];
    if (local_50[0] != (long *)0x0) {
      local_90 = local_50[0] + local_50[0][-1];
    }
    uVar59 = *(uint *)((long)param_3 + 0x24);
    uVar61 = (ulong)uVar59;
    if (local_a0 != local_90) {
      do {
        if ((*param_3 != 0) && ((int)uVar61 != 0)) {
          uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 4) * 4);
          lVar62 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 4) * 8);
          if (*local_a0 == 0) {
            uVar60 = StringName::get_empty_hash();
          }
          else {
            uVar60 = *(uint *)(*local_a0 + 0x20);
          }
          uVar61 = CONCAT44(0,uVar59);
          lVar66 = param_3[3];
          if (uVar60 == 0) {
            uVar60 = 1;
          }
          uVar74 = 0;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = (ulong)uVar60 * lVar62;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = uVar61;
          lVar78 = SUB168(auVar23 * auVar49,8);
          uVar70 = *(uint *)(lVar66 + lVar78 * 4);
          iVar65 = SUB164(auVar23 * auVar49,8);
          if (uVar70 != 0) {
LAB_00101a82:
            if (uVar60 != uVar70) goto LAB_00101a30;
            lVar5 = param_3[1];
            lVar67 = *param_3;
            uVar70 = *(uint *)(lVar5 + lVar78 * 4);
            uVar75 = (ulong)uVar70;
            if (*(long *)(lVar67 + uVar75 * 8) != *local_a0) goto LAB_00101a30;
            lVar78 = param_3[2];
            uVar59 = *(uint *)(lVar78 + uVar75 * 4);
            uVar61 = (ulong)uVar59;
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 4) * 8);
            uVar60 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 4) * 4);
            uVar69 = CONCAT44(0,uVar60);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = (ulong)(uVar59 + 1) * lVar6;
            auVar53._8_8_ = 0;
            auVar53._0_8_ = uVar69;
            lVar62 = SUB168(auVar27 * auVar53,8) * 4;
            uVar59 = SUB164(auVar27 * auVar53,8);
            puVar73 = (uint *)(lVar66 + lVar62);
            if ((*puVar73 != 0) &&
               (auVar28._8_8_ = 0, auVar28._0_8_ = (ulong)*puVar73 * lVar6, auVar54._8_8_ = 0,
               auVar54._0_8_ = uVar69, auVar29._8_8_ = 0,
               auVar29._0_8_ = (ulong)((uVar60 + uVar59) - SUB164(auVar28 * auVar54,8)) * lVar6,
               auVar55._8_8_ = 0, auVar55._0_8_ = uVar69, uVar68 = (ulong)uVar59, uVar71 = uVar61,
               SUB164(auVar29 * auVar55,8) != 0)) {
              while( true ) {
                uVar61 = uVar68;
                puVar63 = (uint *)(lVar62 + lVar5);
                puVar1 = (uint *)(lVar5 + uVar71 * 4);
                puVar72 = (uint *)(uVar71 * 4 + lVar66);
                puVar2 = (undefined4 *)(lVar78 + (ulong)*puVar63 * 4);
                puVar3 = (undefined4 *)(lVar78 + (ulong)*puVar1 * 4);
                uVar4 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar4;
                uVar59 = *puVar73;
                *puVar73 = *puVar72;
                *puVar72 = uVar59;
                uVar59 = *puVar63;
                *puVar63 = *puVar1;
                *puVar1 = uVar59;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = (ulong)((int)uVar61 + 1) * lVar6;
                auVar58._8_8_ = 0;
                auVar58._0_8_ = uVar69;
                uVar68 = SUB168(auVar32 * auVar58,8);
                lVar62 = uVar68 * 4;
                puVar73 = (uint *)(lVar66 + lVar62);
                if ((*puVar73 == 0) ||
                   (auVar30._8_8_ = 0, auVar30._0_8_ = (ulong)*puVar73 * lVar6, auVar56._8_8_ = 0,
                   auVar56._0_8_ = uVar69, auVar31._8_8_ = 0,
                   auVar31._0_8_ =
                        (ulong)((SUB164(auVar32 * auVar58,8) + uVar60) - SUB164(auVar30 * auVar56,8)
                               ) * lVar6, auVar57._8_8_ = 0, auVar57._0_8_ = uVar69,
                   SUB164(auVar31 * auVar57,8) == 0)) break;
                uVar68 = uVar68 & 0xffffffff;
                uVar71 = uVar61;
              }
            }
            *(undefined4 *)(lVar66 + uVar61 * 4) = 0;
            if ((StringName::configured != '\0') && (*(long *)(lVar67 + uVar75 * 8) != 0)) {
              StringName::unref();
            }
            uVar59 = *(int *)((long)param_3 + 0x24) - 1;
            uVar61 = (ulong)uVar59;
            *(uint *)((long)param_3 + 0x24) = uVar59;
            if (uVar70 < uVar59) {
              StringName::StringName
                        ((StringName *)(*param_3 + uVar75 * 8),(StringName *)(*param_3 + uVar61 * 8)
                        );
              uVar61 = (ulong)*(uint *)((long)param_3 + 0x24);
              if ((StringName::configured != '\0') && (*(long *)(*param_3 + uVar61 * 8) != 0)) {
                StringName::unref();
                uVar61 = (ulong)*(uint *)((long)param_3 + 0x24);
              }
              lVar62 = param_3[2];
              *(undefined4 *)(lVar62 + uVar75 * 4) = *(undefined4 *)(lVar62 + uVar61 * 4);
              *(uint *)(param_3[1] +
                       (ulong)*(uint *)(lVar62 + (ulong)*(uint *)((long)param_3 + 0x24) * 4) * 4) =
                   uVar70;
              goto LAB_00101c90;
            }
            goto LAB_00101bf6;
          }
LAB_00101c90:
          uVar61 = (ulong)*(uint *)((long)param_3 + 0x24);
        }
LAB_00101bf6:
        uVar59 = (uint)uVar61;
        local_a0 = local_a0 + 1;
      } while (local_90 != local_a0);
    }
    CowData<StringName>::_unref((CowData<StringName> *)local_50);
  }
  else if (param_2 < 3) {
    if (param_2 == 0) {
      iVar65 = *(int *)((long)param_3 + 0x24);
      if (iVar65 == 0) {
LAB_001017c6:
        uVar59 = (uint)(*(int *)((long)param_4 + 0x24) == iVar65);
        goto LAB_001013f8;
      }
      lVar62 = *param_3;
      lVar66 = *param_4;
      lVar78 = 0;
      while ((lVar66 != 0 && (*(int *)((long)param_4 + 0x24) != 0))) {
        uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 4) * 4);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 4) * 8);
        lVar66 = *(long *)(lVar62 + lVar78 * 8);
        if (lVar66 == 0) {
          uVar60 = StringName::get_empty_hash();
        }
        else {
          uVar60 = *(uint *)(lVar66 + 0x20);
        }
        uVar61 = CONCAT44(0,uVar59);
        if (uVar60 == 0) {
          uVar60 = 1;
        }
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar60 * lVar5;
        auVar41._8_8_ = 0;
        auVar41._0_8_ = uVar61;
        lVar67 = SUB168(auVar15 * auVar41,8);
        uVar70 = *(uint *)(param_4[3] + lVar67 * 4);
        iVar76 = SUB164(auVar15 * auVar41,8);
        if (uVar70 == 0) break;
        uVar74 = 0;
        while ((uVar60 != uVar70 ||
               (lVar66 = *param_4,
               *(long *)(lVar66 + (ulong)*(uint *)(param_4[1] + lVar67 * 4) * 8) !=
               *(long *)(lVar62 + lVar78 * 8)))) {
          uVar74 = uVar74 + 1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (ulong)(iVar76 + 1) * lVar5;
          auVar42._8_8_ = 0;
          auVar42._0_8_ = uVar61;
          lVar67 = SUB168(auVar16 * auVar42,8);
          uVar70 = *(uint *)(param_4[3] + lVar67 * 4);
          iVar76 = SUB164(auVar16 * auVar42,8);
          if ((uVar70 == 0) ||
             (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar70 * lVar5, auVar43._8_8_ = 0,
             auVar43._0_8_ = uVar61, auVar18._8_8_ = 0,
             auVar18._0_8_ = (ulong)((uVar59 + iVar76) - SUB164(auVar17 * auVar43,8)) * lVar5,
             auVar44._8_8_ = 0, auVar44._0_8_ = uVar61, SUB164(auVar18 * auVar44,8) < uVar74))
          goto LAB_00101690;
        }
        if (iVar65 <= (int)lVar78 + 1) {
          iVar65 = *(int *)((long)param_3 + 0x24);
          goto LAB_001017c6;
        }
        lVar78 = lVar78 + 1;
      }
    }
    else {
      iVar65 = *(int *)((long)param_3 + 0x24);
      if (iVar65 == 0) {
LAB_001013ed:
        uVar59 = 1;
        goto LAB_001013f8;
      }
      lVar78 = 0;
      lVar62 = *param_3;
      lVar66 = *param_4;
      while ((lVar66 != 0 && (*(int *)((long)param_4 + 0x24) != 0))) {
        uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 4) * 4);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 4) * 8);
        lVar66 = *(long *)(lVar62 + lVar78 * 8);
        if (lVar66 == 0) {
          uVar60 = StringName::get_empty_hash();
        }
        else {
          uVar60 = *(uint *)(lVar66 + 0x20);
        }
        uVar61 = CONCAT44(0,uVar59);
        if (uVar60 == 0) {
          uVar60 = 1;
        }
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar60 * lVar5;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar61;
        lVar67 = SUB168(auVar11 * auVar37,8);
        uVar70 = *(uint *)(param_4[3] + lVar67 * 4);
        iVar76 = SUB164(auVar11 * auVar37,8);
        if (uVar70 == 0) break;
        uVar74 = 0;
        while ((uVar60 != uVar70 ||
               (lVar66 = *param_4,
               *(long *)(lVar66 + (ulong)*(uint *)(param_4[1] + lVar67 * 4) * 8) !=
               *(long *)(lVar62 + lVar78 * 8)))) {
          uVar74 = uVar74 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar76 + 1) * lVar5;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = uVar61;
          lVar67 = SUB168(auVar12 * auVar38,8);
          uVar70 = *(uint *)(param_4[3] + lVar67 * 4);
          iVar76 = SUB164(auVar12 * auVar38,8);
          if ((uVar70 == 0) ||
             (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar70 * lVar5, auVar39._8_8_ = 0,
             auVar39._0_8_ = uVar61, auVar14._8_8_ = 0,
             auVar14._0_8_ = (ulong)((uVar59 + iVar76) - SUB164(auVar13 * auVar39,8)) * lVar5,
             auVar40._8_8_ = 0, auVar40._0_8_ = uVar61, SUB164(auVar14 * auVar40,8) < uVar74))
          goto LAB_00101690;
        }
        if (iVar65 <= (int)lVar78 + 1) goto LAB_001013ed;
        lVar78 = lVar78 + 1;
      }
    }
LAB_00101690:
    uVar59 = 0;
  }
  else {
    uVar59 = 0xffffffff;
    if (param_2 == 3) {
      iVar65 = *(int *)((long)param_4 + 0x24);
      if (iVar65 != 0) {
        param_4 = (long *)*param_4;
        iVar76 = 1;
        if (*param_3 == 0) goto LAB_00101558;
        do {
          if (*(int *)((long)param_3 + 0x24) == 0) goto LAB_00101558;
          uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 4) * 4);
          lVar62 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 4) * 8);
          if (*param_4 == 0) {
            uVar60 = StringName::get_empty_hash();
          }
          else {
            uVar60 = *(uint *)(*param_4 + 0x20);
          }
          uVar61 = CONCAT44(0,uVar59);
          if (uVar60 == 0) {
            uVar60 = 1;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)uVar60 * lVar62;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar61;
          lVar66 = SUB168(auVar7 * auVar33,8);
          uVar70 = *(uint *)(param_3[3] + lVar66 * 4);
          iVar64 = SUB164(auVar7 * auVar33,8);
          if (uVar70 == 0) goto LAB_00101558;
          uVar74 = 0;
          while ((uVar60 != uVar70 ||
                 (*(long *)(*param_3 + (ulong)*(uint *)(param_3[1] + lVar66 * 4) * 8) != *param_4)))
          {
            uVar74 = uVar74 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar64 + 1) * lVar62;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar61;
            lVar66 = SUB168(auVar8 * auVar34,8);
            uVar70 = *(uint *)(param_3[3] + lVar66 * 4);
            iVar64 = SUB164(auVar8 * auVar34,8);
            if (uVar70 == 0) goto LAB_00101558;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar70 * lVar62;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar61;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar59 + iVar64) - SUB164(auVar9 * auVar35,8)) * lVar62;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = uVar61;
            if (SUB164(auVar10 * auVar36,8) < uVar74) goto LAB_00101558;
          }
          while( true ) {
            if (iVar65 <= iVar76) goto LAB_00101571;
            iVar76 = iVar76 + 1;
            param_4 = param_4 + 1;
            if (*param_3 != 0) break;
LAB_00101558:
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                      (local_58);
          }
        } while( true );
      }
LAB_00101571:
      uVar59 = *(uint *)((long)param_3 + 0x24);
    }
  }
LAB_001013f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar59;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101a30:
  uVar74 = uVar74 + 1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (ulong)(iVar65 + 1) * lVar62;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar61;
  lVar78 = SUB168(auVar24 * auVar50,8);
  uVar70 = *(uint *)(lVar66 + lVar78 * 4);
  iVar65 = SUB164(auVar24 * auVar50,8);
  if ((uVar70 == 0) ||
     (auVar25._8_8_ = 0, auVar25._0_8_ = (ulong)uVar70 * lVar62, auVar51._8_8_ = 0,
     auVar51._0_8_ = uVar61, auVar26._8_8_ = 0,
     auVar26._0_8_ = (ulong)((uVar59 + iVar65) - SUB164(auVar25 * auVar51,8)) * lVar62,
     auVar52._8_8_ = 0, auVar52._0_8_ = uVar61, SUB164(auVar26 * auVar52,8) < uVar74))
  goto LAB_00101c90;
  goto LAB_00101a82;
}



/* CowData<Ref<GraphEdit::Connection> >::_ref(CowData<Ref<GraphEdit::Connection> > const&) [clone
   .part.0] [clone .constprop.0] */

void __thiscall
CowData<Ref<GraphEdit::Connection>>::_ref
          (CowData<Ref<GraphEdit::Connection>> *this,CowData *param_1)

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



/* GraphEditArranger::_calculate_threshold(StringName const&, StringName const&, Dictionary const&,
   HashMap<int, Vector<StringName>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > > > const&, Dictionary const&,
   Dictionary const&, Dictionary const&, float, HashMap<StringName, Vector2, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Vector2> >
   > const&) */

float __thiscall
GraphEditArranger::_calculate_threshold
          (GraphEditArranger *this,StringName *param_1,StringName *param_2,Dictionary *param_3,
          HashMap *param_4,Dictionary *param_5,Dictionary *param_6,Dictionary *param_7,float param_8
          ,HashMap *param_9)

{
  long *plVar1;
  float fVar2;
  ulong uVar3;
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
  code *pcVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  Variant *pVVar25;
  Object *pOVar26;
  StringName *pSVar27;
  Object *pOVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  long *plVar33;
  int iVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  long in_FS_OFFSET;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  long *local_140;
  float local_130;
  int local_12c;
  Object *local_f8;
  uint local_b0;
  uint local_ac;
  long local_a8;
  long local_a0 [2];
  long *local_90;
  long local_88;
  long *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_12c = 0x7fffffff;
  local_130 = param_8;
  if (*(long *)param_2 == *(long *)param_1) {
    lVar23 = GraphEdit::get_connections();
    local_90 = (long *)0x0;
    if (((*(long *)(lVar23 + 8) == 0) ||
        (CowData<Ref<GraphEdit::Connection>>::_ref
                   ((CowData<Ref<GraphEdit::Connection>> *)&local_90,(CowData *)(lVar23 + 8)),
        local_90 == (long *)0x0)) || (plVar1 = local_90 + local_90[-1], local_90 == plVar1)) {
      local_12c = 0x7fffffff;
    }
    else {
      local_f8 = (Object *)0x0;
      iVar34 = 0x7fffffff;
      plVar33 = local_90;
      do {
        pOVar26 = (Object *)*plVar33;
        pOVar28 = local_f8;
        if (*(long *)param_2 == *(long *)(pOVar26 + 0x188)) {
          if (*(uint *)(param_4 + 0x2c) == 0) {
LAB_001028e8:
            if ((local_12c < iVar34) && (iVar34 = local_12c, local_f8 != pOVar26)) {
              cVar21 = RefCounted::reference();
              if (cVar21 == '\0') {
                pOVar26 = (Object *)0x0;
              }
              pOVar28 = pOVar26;
              if (((local_f8 != (Object *)0x0) &&
                  (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
                 (cVar21 = predelete_handler(local_f8), cVar21 != '\0')) {
                (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
                Memory::free_static(local_f8,false);
              }
            }
          }
          else {
            lVar23 = *(long *)(param_4 + 8);
            if (lVar23 == 0) goto LAB_001020c0;
            uVar30 = 0;
            uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_4 + 0x28) * 4));
            uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
            do {
              uVar37 = (uint)uVar30;
              uVar22 = ((uint)(uVar30 >> 0x10) ^ uVar37) * -0x7a143595;
              uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
              uVar32 = uVar22 ^ uVar22 >> 0x10;
              if (uVar22 == uVar22 >> 0x10) {
                uVar32 = 1;
                uVar30 = uVar3;
              }
              else {
                uVar30 = uVar32 * uVar3;
              }
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar36;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar30;
              lVar31 = SUB168(auVar8 * auVar16,8);
              uVar22 = *(uint *)(*(long *)(param_4 + 0x10) + lVar31 * 4);
              uVar29 = SUB164(auVar8 * auVar16,8);
              if (uVar22 == 0) goto LAB_001020c0;
              uVar35 = 0;
              while ((uVar22 != uVar32 ||
                     (uVar37 != *(uint *)(*(long *)(lVar23 + lVar31 * 8) + 0x10)))) {
                uVar35 = uVar35 + 1;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (uVar29 + 1) * uVar3;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar36;
                lVar31 = SUB168(auVar9 * auVar17,8);
                uVar22 = *(uint *)(*(long *)(param_4 + 0x10) + lVar31 * 4);
                uVar29 = SUB164(auVar9 * auVar17,8);
                if ((uVar22 == 0) ||
                   (auVar10._8_8_ = 0, auVar10._0_8_ = uVar22 * uVar3, auVar18._8_8_ = 0,
                   auVar18._0_8_ = uVar36, auVar11._8_8_ = 0,
                   auVar11._0_8_ =
                        ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4) +
                         uVar29) - SUB164(auVar10 * auVar18,8)) * uVar3, auVar19._8_8_ = 0,
                   auVar19._0_8_ = uVar36, SUB164(auVar11 * auVar19,8) < uVar35)) goto LAB_001020c0;
              }
              lVar31 = *(long *)(*(long *)(lVar23 + (ulong)uVar29 * 8) + 0x20);
              if ((lVar31 != 0) && (0 < *(long *)(lVar31 + -8))) {
                lVar24 = 0;
                do {
                  if (*(long *)(pOVar26 + 0x180) == *(long *)(lVar31 + lVar24 * 8)) {
                    local_12c = (int)lVar24;
                    if (0 < local_12c) goto LAB_001028e8;
                    break;
                  }
                  lVar24 = lVar24 + 1;
                } while (*(long *)(lVar31 + -8) != lVar24);
              }
              uVar30 = (ulong)(uVar37 + 1);
            } while (uVar37 + 1 != *(uint *)(param_4 + 0x2c));
            local_12c = 0x7fffffff;
          }
        }
        local_f8 = pOVar28;
        plVar33 = plVar33 + 1;
      } while (plVar1 != plVar33);
      if (local_f8 != (Object *)0x0) {
        pSVar27 = (StringName *)(local_f8 + 0x180);
        Variant::Variant((Variant *)local_58,pSVar27);
        pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_3);
        pOVar26 = Variant::operator_cast_to_Object_(pVVar25);
        if (pOVar26 != (Object *)0x0) {
          pOVar26 = (Object *)__dynamic_cast(pOVar26,&Object::typeinfo,&GraphNode::typeinfo,0);
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(StringName *)param_2);
        pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_3);
        pOVar28 = Variant::operator_cast_to_Object_(pVVar25);
        if (pOVar28 != (Object *)0x0) {
          pOVar28 = (Object *)__dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        fVar38 = (float)GraphEdit::get_zoom();
        GraphNode::get_output_port_position((int)pOVar26);
        fVar39 = (float)GraphEdit::get_zoom();
        GraphNode::get_input_port_position((int)pOVar28);
        cVar21 = GraphElement::is_selected();
        if (cVar21 != '\0') {
          Variant::Variant((Variant *)local_78,pSVar27);
          Dictionary::operator[]((Variant *)param_5);
          Variant::operator_cast_to_StringName((Variant *)&local_a8);
          local_b0 = 0;
          cVar21 = HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                   ::_lookup_pos((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                  *)param_9,(Variant *)&local_a8,&local_b0);
          if (cVar21 == '\0') goto LAB_001020c0;
          fVar2 = *(float *)(*(long *)(*(long *)(param_9 + 8) + (ulong)local_b0 * 8) + 0x1c);
          if ((StringName::configured != '\0') && (local_a8 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (fVar2 != _LC28) {
            Variant::Variant((Variant *)local_78,pSVar27);
            pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_7);
            fVar40 = Variant::operator_cast_to_float(pVVar25);
            Variant::Variant((Variant *)local_58,(StringName *)param_2);
            pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_7);
            fVar41 = Variant::operator_cast_to_float(pVVar25);
            local_130 = (((fVar2 + fVar40) - fVar41) + fVar38 * extraout_XMM0_Db_01) -
                        fVar39 * extraout_XMM0_Db_02;
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        CowData<Ref<GraphEdit::Connection>>::_unref
                  ((CowData<Ref<GraphEdit::Connection>> *)&local_90);
        cVar21 = RefCounted::unreference();
        if ((cVar21 != '\0') && (cVar21 = predelete_handler(local_f8), cVar21 != '\0')) {
          (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
          Memory::free_static(local_f8,false);
        }
        goto LAB_00101dce;
      }
    }
    CowData<Ref<GraphEdit::Connection>>::_unref((CowData<Ref<GraphEdit::Connection>> *)&local_90);
  }
LAB_00101dce:
  if (local_130 == _LC29) {
    Variant::Variant((Variant *)local_58,(StringName *)param_2);
    Dictionary::operator[]((Variant *)param_6);
    Variant::operator_cast_to_StringName((Variant *)&local_88);
    lVar23 = *(long *)param_1;
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_88 == lVar23) {
      lVar23 = GraphEdit::get_connections();
      local_80 = (long *)0x0;
      if (((*(long *)(lVar23 + 8) != 0) &&
          (CowData<Ref<GraphEdit::Connection>>::_ref
                     ((CowData<Ref<GraphEdit::Connection>> *)&local_80,(CowData *)(lVar23 + 8)),
          local_80 != (long *)0x0)) && (plVar1 = local_80 + local_80[-1], plVar1 != local_80)) {
        local_140 = local_80;
        iVar34 = 0x7fffffff;
        local_f8 = (Object *)0x0;
        do {
          pOVar26 = (Object *)*local_140;
          pOVar28 = local_f8;
          if (*(long *)(pOVar26 + 0x180) == *(long *)param_2) {
            if (*(uint *)(param_4 + 0x2c) == 0) {
LAB_00102697:
              if ((local_12c < iVar34) && (iVar34 = local_12c, local_f8 != pOVar26)) {
                cVar21 = RefCounted::reference();
                if (cVar21 == '\0') {
                  pOVar26 = (Object *)0x0;
                }
                pOVar28 = pOVar26;
                if (((local_f8 != (Object *)0x0) &&
                    (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
                   (cVar21 = predelete_handler(local_f8), cVar21 != '\0')) {
                  (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
                  Memory::free_static(local_f8,false);
                }
              }
            }
            else {
              lVar23 = *(long *)(param_4 + 8);
              if (lVar23 == 0) goto LAB_001020c0;
              uVar30 = 0;
              uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(param_4 + 0x28) * 4));
              uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
              do {
                uVar37 = (uint)uVar30;
                uVar22 = ((uint)(uVar30 >> 0x10) ^ uVar37) * -0x7a143595;
                uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
                uVar32 = uVar22 ^ uVar22 >> 0x10;
                if (uVar22 == uVar22 >> 0x10) {
                  uVar32 = 1;
                  uVar30 = uVar3;
                }
                else {
                  uVar30 = uVar32 * uVar3;
                }
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar36;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar30;
                lVar31 = SUB168(auVar4 * auVar12,8);
                uVar22 = *(uint *)(*(long *)(param_4 + 0x10) + lVar31 * 4);
                uVar30 = (ulong)uVar22;
                uVar29 = SUB164(auVar4 * auVar12,8);
                if (uVar22 == 0) goto LAB_001020c0;
                uVar22 = 0;
                while (((uint)uVar30 != uVar32 ||
                       (uVar37 != *(uint *)(*(long *)(lVar23 + lVar31 * 8) + 0x10)))) {
                  uVar22 = uVar22 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (uVar29 + 1) * uVar3;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = uVar36;
                  lVar31 = SUB168(auVar5 * auVar13,8);
                  uVar35 = *(uint *)(*(long *)(param_4 + 0x10) + lVar31 * 4);
                  uVar30 = (ulong)uVar35;
                  uVar29 = SUB164(auVar5 * auVar13,8);
                  if ((uVar35 == 0) ||
                     (auVar6._8_8_ = 0, auVar6._0_8_ = uVar30 * uVar3, auVar14._8_8_ = 0,
                     auVar14._0_8_ = uVar36, auVar7._8_8_ = 0,
                     auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(param_4 + 0x28) * 4) + uVar29) -
                                    SUB164(auVar6 * auVar14,8)) * uVar3, auVar15._8_8_ = 0,
                     auVar15._0_8_ = uVar36, SUB164(auVar7 * auVar15,8) < uVar22))
                  goto LAB_001020c0;
                }
                lVar31 = *(long *)(*(long *)(lVar23 + (ulong)uVar29 * 8) + 0x20);
                if ((lVar31 != 0) && (0 < *(long *)(lVar31 + -8))) {
                  lVar24 = 0;
                  do {
                    if (*(long *)(pOVar26 + 0x188) == *(long *)(lVar31 + lVar24 * 8)) {
                      local_12c = (int)lVar24;
                      if (0 < local_12c) goto LAB_00102697;
                      break;
                    }
                    lVar24 = lVar24 + 1;
                  } while (*(long *)(lVar31 + -8) != lVar24);
                }
                uVar30 = (ulong)(uVar37 + 1);
              } while (*(uint *)(param_4 + 0x2c) != uVar37 + 1);
              local_12c = 0x7fffffff;
            }
          }
          local_f8 = pOVar28;
          local_140 = local_140 + 1;
        } while (plVar1 != local_140);
        if (local_f8 != (Object *)0x0) {
          Variant::Variant((Variant *)local_58,(StringName *)param_2);
          pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_3);
          pOVar26 = Variant::operator_cast_to_Object_(pVVar25);
          if (pOVar26 != (Object *)0x0) {
            pOVar26 = (Object *)__dynamic_cast(pOVar26,&Object::typeinfo,&GraphNode::typeinfo,0);
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          pSVar27 = (StringName *)(local_f8 + 0x188);
          Variant::Variant((Variant *)local_58,pSVar27);
          pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_3);
          pOVar28 = Variant::operator_cast_to_Object_(pVVar25);
          if (pOVar28 != (Object *)0x0) {
            pOVar28 = (Object *)__dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          fVar38 = (float)GraphEdit::get_zoom();
          GraphNode::get_output_port_position((int)pOVar26);
          fVar39 = (float)GraphEdit::get_zoom();
          GraphNode::get_input_port_position((int)pOVar28);
          cVar21 = GraphElement::is_selected();
          if (cVar21 != '\0') {
            Variant::Variant((Variant *)local_58,pSVar27);
            Dictionary::operator[]((Variant *)param_5);
            Variant::operator_cast_to_StringName((Variant *)local_a0);
            local_ac = 0;
            cVar21 = HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                     ::_lookup_pos((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                    *)param_9,(Variant *)local_a0,&local_ac);
            if (cVar21 == '\0') {
LAB_001020c0:
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar20 = (code *)invalidInstructionException();
              (*pcVar20)();
            }
            fVar2 = *(float *)(*(long *)(*(long *)(param_9 + 8) + (ulong)local_ac * 8) + 0x1c);
            if ((StringName::configured != '\0') && (local_a0[0] != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (fVar2 != _LC28) {
              Variant::Variant((Variant *)local_78,pSVar27);
              pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_7);
              fVar40 = Variant::operator_cast_to_float(pVVar25);
              Variant::Variant((Variant *)local_58,(StringName *)param_2);
              pVVar25 = (Variant *)Dictionary::operator[]((Variant *)param_7);
              fVar41 = Variant::operator_cast_to_float(pVVar25);
              local_130 = (((fVar2 + fVar40) - fVar41) + fVar38 * extraout_XMM0_Db) -
                          fVar39 * extraout_XMM0_Db_00;
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
          }
          CowData<Ref<GraphEdit::Connection>>::_unref
                    ((CowData<Ref<GraphEdit::Connection>> *)&local_80);
          cVar21 = RefCounted::unreference();
          if ((cVar21 != '\0') && (cVar21 = predelete_handler(local_f8), cVar21 != '\0')) {
            (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
            Memory::free_static(local_f8,false);
          }
          goto LAB_00101ddf;
        }
      }
      CowData<Ref<GraphEdit::Connection>>::_unref((CowData<Ref<GraphEdit::Connection>> *)&local_80);
    }
  }
LAB_00101ddf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GraphEditArranger::_place_block(StringName const&, float, HashMap<int, Vector<StringName>,
   HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   Vector<StringName> > > > const&, Dictionary const&, Dictionary const&, Dictionary const&,
   Dictionary const&, Dictionary&, Dictionary&, HashMap<StringName, Vector2, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Vector2> >
   >&) */

void __thiscall
GraphEditArranger::_place_block
          (GraphEditArranger *this,StringName *param_1,float param_2,HashMap *param_3,
          Dictionary *param_4,Dictionary *param_5,Dictionary *param_6,Dictionary *param_7,
          Dictionary *param_8,Dictionary *param_9,HashMap *param_10)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
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
  char cVar19;
  uint uVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  Variant *pVVar24;
  Object *pOVar25;
  Variant *pVVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  long in_FS_OFFSET;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float extraout_XMM0_Db;
  float local_dc;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  local_c0 = 0;
  puVar21 = (ulong *)HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                     ::operator[]((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                   *)param_10,param_1);
  uVar2 = *puVar21;
  local_a0._4_4_ = (float)(uVar2 >> 0x20);
  bVar3 = local_a0._4_4_ == _LC28;
  local_a0 = uVar2;
  if (bVar3) {
    local_a0 = uVar2 & 0xffffffff;
    StringName::StringName((StringName *)&local_b8,(StringName *)param_1);
    local_dc = _LC29;
LAB_00102d50:
    if (*(int *)(param_3 + 0x2c) != 0) {
      uVar33 = 0;
      do {
        lVar23 = *(long *)(param_3 + 8);
        if (lVar23 == 0) goto LAB_001033f0;
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
        uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
        uVar20 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
        uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
        uVar37 = uVar20 ^ uVar20 >> 0x10;
        if (uVar20 == uVar20 >> 0x10) {
          uVar37 = 1;
          uVar27 = uVar2;
        }
        else {
          uVar27 = uVar37 * uVar2;
        }
        uVar35 = CONCAT44(0,uVar1);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar35;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar27;
        lVar31 = SUB168(auVar4 * auVar11,8);
        lVar28 = *(long *)(param_3 + 0x10);
        uVar20 = *(uint *)(lVar28 + lVar31 * 4);
        if (uVar20 == 0) goto LAB_001033f0;
        uVar29 = SUB164(auVar4 * auVar11,8);
        uVar36 = 0;
        lVar32 = lVar31;
        uVar30 = uVar29;
        uVar34 = uVar20;
        while ((uVar34 != uVar37 || (uVar33 != *(uint *)(*(long *)(lVar23 + lVar32 * 8) + 0x10)))) {
          uVar36 = uVar36 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar30 + 1) * uVar2;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar35;
          lVar32 = SUB168(auVar5 * auVar12,8);
          uVar34 = *(uint *)(lVar28 + lVar32 * 4);
          uVar30 = SUB164(auVar5 * auVar12,8);
          if ((uVar34 == 0) ||
             (auVar6._8_8_ = 0, auVar6._0_8_ = uVar34 * uVar2, auVar13._8_8_ = 0,
             auVar13._0_8_ = uVar35, auVar7._8_8_ = 0,
             auVar7._0_8_ = ((uVar1 + uVar30) - SUB164(auVar6 * auVar13,8)) * uVar2,
             auVar14._8_8_ = 0, auVar14._0_8_ = uVar35, SUB164(auVar7 * auVar14,8) < uVar36))
          goto LAB_001033f0;
        }
        lVar32 = *(long *)(*(long *)(lVar23 + (ulong)uVar30 * 8) + 0x20);
        if ((lVar32 != 0) && (0 < *(long *)(lVar32 + -8))) {
          lVar22 = 0;
          do {
            if (local_b8 == *(long *)(lVar32 + lVar22 * 8)) {
              if (0 < (int)lVar22) {
                uVar34 = 0;
                uVar27 = (ulong)uVar20;
                goto LAB_001034b2;
              }
              break;
            }
            lVar22 = lVar22 + 1;
          } while (*(long *)(lVar32 + -8) != lVar22);
        }
        if (local_c8 != 0) {
          StringName::unref();
          local_c8 = 0;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < *(uint *)(param_3 + 0x2c));
    }
    goto joined_r0x00103504;
  }
LAB_00102c9d:
  if (StringName::configured == '\0') goto LAB_00102ce1;
LAB_00102ca8:
  if (((local_c0 == 0) || (StringName::unref(), StringName::configured != '\0')) && (local_c8 != 0))
  {
    StringName::unref();
  }
LAB_00102ce1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001034b2:
  if ((uVar37 == (uint)uVar27) && (uVar33 == *(uint *)(*(long *)(lVar23 + lVar31 * 8) + 0x10)))
  goto code_r0x001034c0;
  uVar34 = uVar34 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar29 + 1) * uVar2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar35;
  lVar31 = SUB168(auVar8 * auVar15,8);
  uVar20 = *(uint *)(lVar28 + lVar31 * 4);
  uVar27 = (ulong)uVar20;
  uVar29 = SUB164(auVar8 * auVar15,8);
  if ((uVar20 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = uVar27 * uVar2, auVar16._8_8_ = 0, auVar16._0_8_ = uVar35,
     auVar10._8_8_ = 0, auVar10._0_8_ = ((uVar1 + uVar29) - SUB164(auVar9 * auVar16,8)) * uVar2,
     auVar17._8_8_ = 0, auVar17._0_8_ = uVar35, SUB164(auVar10 * auVar17,8) < uVar34)) {
LAB_001033f0:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar18 = (code *)invalidInstructionException();
    (*pcVar18)();
  }
  goto LAB_001034b2;
code_r0x001033a0:
  HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
  ::insert((Variant *)&local_a8,(Vector2 *)param_10,SUB81(param_1,0));
  if (StringName::configured == '\0') goto LAB_00102ce1;
  if (local_b8 != 0) {
    StringName::unref();
    goto LAB_00102c9d;
  }
  goto LAB_00102ca8;
code_r0x001034c0:
  lVar23 = *(long *)(*(long *)(lVar23 + (ulong)uVar29 * 8) + 0x20);
  lVar28 = (long)((int)lVar22 + -1);
  if (lVar23 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = *(long *)(lVar23 + -8);
    if (lVar28 < lVar31) {
      StringName::operator=((StringName *)&local_c8,(StringName *)(lVar23 + lVar28 * 8));
joined_r0x00103504:
      if (local_c8 != 0) {
        Variant::Variant((Variant *)local_58,(StringName *)&local_c8);
        Dictionary::operator[]((Variant *)param_4);
        Variant::operator_cast_to_StringName((Variant *)&local_b0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        _place_block(this,(Variant *)&local_b0,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8,param_9,param_10);
        local_dc = (float)_calculate_threshold
                                    (this,param_1,(StringName *)&local_b8,param_6,param_3,param_4,
                                     param_5,param_7,local_dc,param_10);
        Variant::Variant((Variant *)local_58,(StringName *)param_1);
        Dictionary::operator[]((Variant *)param_8);
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        lVar28 = local_a8;
        lVar23 = *(long *)param_1;
        if ((StringName::configured != '\0') && (local_a8 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (lVar28 == lVar23) {
          Variant::Variant((Variant *)local_58,(StringName *)&local_b0);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_8);
          Variant::Variant((Variant *)local_78,(StringName *)param_1);
          pVVar26 = (Variant *)Dictionary::operator[]((Variant *)param_8);
          Variant::operator=(pVVar26,pVVar24);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        lVar23 = HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                 ::operator[]((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                               *)param_10,(Variant *)&local_b0);
        fVar40 = *(float *)(lVar23 + 4);
        Variant::Variant((Variant *)local_58,(StringName *)&local_c8);
        pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_6);
        pOVar25 = Variant::operator_cast_to_Object_(pVVar24);
        if (pOVar25 != (Object *)0x0) {
          __dynamic_cast(pOVar25,&Object::typeinfo,&GraphNode::typeinfo,0);
        }
        Control::get_size();
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(StringName *)&local_b0);
        pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_8);
        Variant::Variant((Variant *)local_78,(StringName *)param_1);
        pVVar26 = (Variant *)Dictionary::operator[]((Variant *)param_8);
        cVar19 = Variant::operator!=(pVVar26,pVVar24);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        fVar41 = local_a0._4_4_;
        if (cVar19 == '\0') {
          Variant::Variant((Variant *)local_78,(StringName *)&local_c8);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_7);
          fVar38 = Variant::operator_cast_to_float(pVVar24);
          Variant::Variant((Variant *)local_58,(StringName *)&local_b8);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_7);
          fVar39 = Variant::operator_cast_to_float(pVVar24);
          fVar40 = ((fVar38 + fVar40 + extraout_XMM0_Db) - fVar39) + param_2;
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (fVar40 <= local_dc) {
            fVar40 = local_dc;
          }
          if (fVar41 <= fVar40) {
            fVar41 = fVar40;
          }
          local_a0 = CONCAT44(fVar41,(undefined4)local_a0);
        }
        else {
          Variant::Variant((Variant *)local_78,(StringName *)&local_b8);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_7);
          fVar38 = Variant::operator_cast_to_float(pVVar24);
          Variant::Variant((Variant *)local_58,(StringName *)&local_c8);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_7);
          fVar39 = Variant::operator_cast_to_float(pVVar24);
          fVar40 = ((((fVar38 + fVar41) - fVar40) - fVar39) - extraout_XMM0_Db) - param_2;
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_78,(StringName *)&local_b0);
          Dictionary::operator[]((Variant *)param_8);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_9);
          fVar41 = Variant::operator_cast_to_float(pVVar24);
          if (fVar41 <= fVar40) {
            fVar40 = fVar41;
          }
          Variant::Variant((Variant *)local_58,fVar40);
          Variant::Variant((Variant *)local_98,(StringName *)&local_b0);
          Dictionary::operator[]((Variant *)param_8);
          pVVar24 = (Variant *)Dictionary::operator[]((Variant *)param_9);
          if (pVVar24 != (Variant *)local_58) {
            if (Variant::needs_deinit[*(int *)pVVar24] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar24 = 0;
            *(int *)pVVar24 = local_58[0];
            *(undefined8 *)(pVVar24 + 8) = local_50;
            *(undefined8 *)(pVVar24 + 0x10) = uStack_48;
            local_58[0] = 0;
          }
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
      }
      local_dc = (float)_calculate_threshold
                                  (this,param_1,(StringName *)&local_b8,param_6,param_3,param_4,
                                   param_5,param_7,local_dc,param_10);
      Variant::Variant((Variant *)local_58,(StringName *)&local_b8);
      Dictionary::operator[]((Variant *)param_5);
      Variant::operator_cast_to_StringName((Variant *)&local_a8);
      if (local_b8 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_b8 = local_a8;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_b8 == *(long *)param_1) goto code_r0x001033a0;
      goto LAB_00102d50;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar28,lVar31,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar18 = (code *)invalidInstructionException();
  (*pcVar18)();
}



/* GraphEditArranger::_layering(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&, HashMap<StringName, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > > > const&) */

HashSet * GraphEditArranger::_layering(HashSet *param_1,HashMap *param_2)

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
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  StringName *pSVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long in_RCX;
  uint uVar36;
  long *in_RDX;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  long lVar46;
  long in_FS_OFFSET;
  StringName *local_1d8;
  undefined1 *local_1b0;
  StringName *local_168;
  uint local_154;
  int local_150 [2];
  int local_148 [2];
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  uVar39 = _LC30;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  *(ulong *)(param_1 + 0x28) = uVar39;
  local_108 = in_RDX[4];
  local_128 = (undefined1  [16])0x0;
  uVar31 = (uint)(local_108 >> 0x20);
  local_118 = (undefined1  [16])0x0;
  if (uVar31 == 0) {
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = local_108;
  }
  else {
    uVar43 = *(uint *)(hash_table_size_primes + (local_108 & 0xffffffff) * 4);
    lVar34 = 0;
    uVar39 = (ulong)uVar43 * 4;
    lVar38 = Memory::alloc_static(uVar39,false);
    local_118._8_8_ = lVar38;
    pSVar32 = (StringName *)Memory::alloc_static((ulong)uVar43 * 8,false);
    local_128._0_8_ = pSVar32;
    lVar37 = Memory::alloc_static(uVar39,false);
    local_118._0_8_ = lVar37;
    lVar33 = Memory::alloc_static(uVar39,false);
    local_128._8_8_ = lVar33;
    do {
      StringName::StringName(pSVar32,(StringName *)(*in_RDX + lVar34 * 2));
      *(undefined4 *)(lVar37 + lVar34) = *(undefined4 *)(in_RDX[2] + lVar34);
      lVar34 = lVar34 + 4;
      pSVar32 = pSVar32 + 8;
    } while ((ulong)uVar31 << 2 != lVar34);
    if (uVar43 != 0) {
      lVar37 = in_RDX[3];
      lVar34 = in_RDX[1];
      uVar35 = 0;
      do {
        *(undefined4 *)(lVar38 + uVar35) = *(undefined4 *)(lVar37 + uVar35);
        *(undefined4 *)(lVar33 + uVar35) = *(undefined4 *)(lVar34 + uVar35);
        uVar35 = uVar35 + 4;
      } while (uVar35 != uVar39);
    }
    local_d8 = in_RDX[4];
    local_f8 = (undefined1  [16])0x0;
    uVar31 = (uint)(local_d8 >> 0x20);
    local_e8 = (undefined1  [16])0x0;
    if (uVar31 != 0) {
      lVar34 = 0;
      uVar43 = *(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4);
      uVar39 = (ulong)uVar43 * 4;
      lVar38 = Memory::alloc_static(uVar39,false);
      local_e8._8_8_ = lVar38;
      pSVar32 = (StringName *)Memory::alloc_static((ulong)uVar43 * 8,false);
      local_f8._0_8_ = pSVar32;
      lVar37 = Memory::alloc_static(uVar39,false);
      local_e8._0_8_ = lVar37;
      lVar33 = Memory::alloc_static(uVar39,false);
      local_f8._8_8_ = lVar33;
      do {
        StringName::StringName(pSVar32,(StringName *)(*in_RDX + lVar34 * 2));
        *(undefined4 *)(lVar37 + lVar34) = *(undefined4 *)(in_RDX[2] + lVar34);
        lVar34 = lVar34 + 4;
        pSVar32 = pSVar32 + 8;
      } while ((ulong)uVar31 << 2 != lVar34);
      if (uVar43 != 0) {
        lVar37 = in_RDX[3];
        lVar34 = in_RDX[1];
        uVar35 = 0;
        do {
          *(undefined4 *)(lVar38 + uVar35) = *(undefined4 *)(lVar37 + uVar35);
          *(undefined4 *)(lVar33 + uVar35) = *(undefined4 *)(lVar34 + uVar35);
          uVar35 = uVar35 + 4;
        } while (uVar35 != uVar39);
      }
    }
  }
  local_154 = 0;
  local_a8 = _LC30;
  local_78 = _LC30;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
LAB_00103894:
  iVar29 = _set_operations((GraphEditArranger *)param_2,0,local_f8,local_c8);
  if (iVar29 == 0) {
    _set_operations((GraphEditArranger *)param_2,2,local_128,local_c8);
    iVar29 = local_108._4_4_;
    if (local_108._4_4_ != 0) {
      iVar45 = 1;
      bVar26 = false;
      local_168 = (StringName *)local_128._0_8_;
      local_1d8 = (StringName *)local_128._0_8_;
      do {
        if ((*(long *)(in_RCX + 8) == 0) || (*(int *)(in_RCX + 0x2c) == 0)) {
LAB_00103c38:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar25 = (code *)invalidInstructionException();
          (*pcVar25)();
        }
        uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4);
        lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RCX + 0x28) * 8);
        if (*(long *)local_1d8 == 0) {
          uVar43 = StringName::get_empty_hash();
        }
        else {
          uVar43 = *(uint *)(*(long *)local_1d8 + 0x20);
        }
        uVar39 = CONCAT44(0,uVar31);
        if (uVar43 == 0) {
          uVar43 = 1;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (ulong)uVar43 * lVar38;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar39;
        lVar37 = SUB168(auVar1 * auVar13,8);
        uVar44 = *(uint *)(*(long *)(in_RCX + 0x10) + lVar37 * 4);
        uVar36 = SUB164(auVar1 * auVar13,8);
        if (uVar44 == 0) goto LAB_00103c38;
        uVar42 = 0;
        while ((uVar43 != uVar44 ||
               (*(long *)(*(long *)(*(long *)(in_RCX + 8) + lVar37 * 8) + 0x10) !=
                *(long *)local_1d8))) {
          uVar42 = uVar42 + 1;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)(uVar36 + 1) * lVar38;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar39;
          lVar37 = SUB168(auVar2 * auVar14,8);
          uVar44 = *(uint *)(*(long *)(in_RCX + 0x10) + lVar37 * 4);
          uVar36 = SUB164(auVar2 * auVar14,8);
          if ((uVar44 == 0) ||
             (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar44 * lVar38, auVar15._8_8_ = 0,
             auVar15._0_8_ = uVar39, auVar4._8_8_ = 0,
             auVar4._0_8_ = (ulong)((uVar31 + uVar36) - SUB164(auVar3 * auVar15,8)) * lVar38,
             auVar16._8_8_ = 0, auVar16._0_8_ = uVar39, SUB164(auVar4 * auVar16,8) < uVar42))
          goto LAB_00103c38;
        }
        lVar38 = *(long *)(*(long *)(in_RCX + 8) + (ulong)uVar36 * 8);
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        local_48 = *(ulong *)(lVar38 + 0x38);
        uVar31 = (uint)(local_48 >> 0x20);
        if (uVar31 != 0) {
          lVar46 = 0;
          uVar43 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
          uVar39 = (ulong)uVar43 * 4;
          lVar37 = Memory::alloc_static(uVar39,false);
          local_58._8_8_ = lVar37;
          pSVar32 = (StringName *)Memory::alloc_static((ulong)uVar43 * 8,false);
          local_68._0_8_ = pSVar32;
          lVar33 = Memory::alloc_static(uVar39,false);
          local_58._0_8_ = lVar33;
          lVar34 = Memory::alloc_static(uVar39,false);
          local_68._8_8_ = lVar34;
          do {
            StringName::StringName(pSVar32,(StringName *)(*(long *)(lVar38 + 0x18) + lVar46 * 2));
            *(undefined4 *)(lVar33 + lVar46) = *(undefined4 *)(*(long *)(lVar38 + 0x28) + lVar46);
            lVar46 = lVar46 + 4;
            pSVar32 = pSVar32 + 8;
          } while ((ulong)uVar31 << 2 != lVar46);
          if (uVar43 != 0) {
            lVar33 = *(long *)(lVar38 + 0x30);
            lVar38 = *(long *)(lVar38 + 0x20);
            uVar35 = 0;
            do {
              *(undefined4 *)(lVar37 + uVar35) = *(undefined4 *)(lVar33 + uVar35);
              *(undefined4 *)(lVar34 + uVar35) = *(undefined4 *)(lVar38 + uVar35);
              uVar35 = uVar35 + 4;
            } while (uVar35 != uVar39);
          }
        }
        iVar30 = _set_operations((GraphEditArranger *)param_2,1,local_68);
        if (iVar30 != 0) {
          local_140 = 0;
          StringName::StringName((StringName *)&local_138,local_1d8);
          Vector<StringName>::push_back((Vector<StringName> *)local_148,(StringName *)&local_138);
          if ((StringName::configured != '\0') && (local_138 != 0)) {
            StringName::unref();
          }
          if ((*(long *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
            uVar39 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
            uVar31 = (local_154 >> 0x10 ^ local_154) * -0x7a143595;
            uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
            uVar43 = uVar31 ^ uVar31 >> 0x10;
            if (uVar31 == uVar31 >> 0x10) {
              uVar43 = 1;
              uVar35 = uVar39;
            }
            else {
              uVar35 = uVar43 * uVar39;
            }
            uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_1 + 0x28) * 4));
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar41;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar35;
            lVar38 = SUB168(auVar5 * auVar17,8);
            iVar30 = SUB164(auVar5 * auVar17,8);
            uVar31 = *(uint *)(*(long *)(param_1 + 0x10) + lVar38 * 4);
            if (uVar31 != 0) {
              uVar44 = 0;
              do {
                if ((uVar31 == uVar43) &&
                   (local_154 == *(uint *)(*(long *)(*(long *)(param_1 + 8) + lVar38 * 8) + 0x10)))
                goto LAB_00103e44;
                uVar44 = uVar44 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (iVar30 + 1) * uVar39;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar41;
                lVar38 = SUB168(auVar6 * auVar18,8);
                uVar31 = *(uint *)(*(long *)(param_1 + 0x10) + lVar38 * 4);
                iVar30 = SUB164(auVar6 * auVar18,8);
              } while ((uVar31 != 0) &&
                      (auVar7._8_8_ = 0, auVar7._0_8_ = uVar31 * uVar39, auVar19._8_8_ = 0,
                      auVar19._0_8_ = uVar41, auVar8._8_8_ = 0,
                      auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(param_1 + 0x28) * 4) + iVar30) -
                                     SUB164(auVar7 * auVar19,8)) * uVar39, auVar20._8_8_ = 0,
                      auVar20._0_8_ = uVar41, uVar44 <= SUB164(auVar8 * auVar20,8)));
            }
          }
          local_130 = 0;
          HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
          ::insert(local_150,(Vector *)param_1,SUB81(&local_154,0));
          CowData<StringName>::_unref((CowData<StringName> *)&local_130);
LAB_00103e44:
          lVar38 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                   ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                                 *)param_1,(int *)&local_154);
          local_130 = 0;
          if (*(long *)(lVar38 + 8) != 0) {
            CowData<StringName>::_ref((CowData<StringName> *)&local_130,(CowData *)(lVar38 + 8));
          }
          Vector<StringName>::append_array((Vector<StringName> *)local_148,(StringName *)&local_138)
          ;
          CowData<StringName>::_unref((CowData<StringName> *)&local_130);
          HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
          ::insert((int *)&local_138,(Vector *)param_1,SUB81(&local_154,0));
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)&local_138);
          CowData<StringName>::_unref((CowData<StringName> *)&local_140);
          bVar26 = true;
        }
        uVar27 = local_68._0_8_;
        if ((long *)local_68._0_8_ != (long *)0x0) {
          uVar39 = (ulong)local_48._4_4_;
          uVar28 = local_58._8_8_;
          if (local_48._4_4_ != 0) {
            if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
              memset((void *)local_58._8_8_,0,
                     (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) << 2);
            }
            plVar40 = (long *)uVar27;
            do {
              if ((StringName::configured != '\0') && (*plVar40 != 0)) {
                StringName::unref();
              }
              plVar40 = plVar40 + 1;
            } while ((long *)(uVar27 + uVar39 * 8) != plVar40);
          }
          Memory::free_static((void *)uVar27,false);
          Memory::free_static((void *)local_58._0_8_,false);
          Memory::free_static((void *)local_68._8_8_,false);
          Memory::free_static((void *)uVar28,false);
        }
        if (iVar29 <= iVar45) goto code_r0x00103c1d;
        iVar45 = iVar45 + 1;
        local_1d8 = local_1d8 + 8;
      } while( true );
    }
    iVar45 = -1;
    local_168 = (StringName *)0x0;
    goto LAB_00103eec;
  }
  goto LAB_0010437f;
code_r0x00103c1d:
  if (bVar26) goto LAB_00103894;
  iVar45 = 0;
LAB_00103eec:
  local_1b0 = local_98;
  local_154 = local_154 + 1;
  iVar30 = local_78._4_4_;
  _set_operations((GraphEditArranger *)param_2,3,local_1b0,local_c8);
  if (local_78._4_4_ == iVar30) goto code_r0x00103f23;
  goto LAB_00103894;
code_r0x00103f23:
  _err_print_error("_layering","scene/gui/graph_edit_arranger.cpp",0x10e,
                   "Graph contains cycle(s). The cycle(s) will not be rearranged accurately.",0,1);
  local_130 = 0;
  if ((*(long *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar43 = 0;
    uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4));
    uVar39 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar39;
    lVar38 = SUB168(auVar9 * auVar21,8);
    uVar31 = *(uint *)(*(long *)(param_1 + 0x10) + lVar38 * 4);
    iVar30 = SUB164(auVar9 * auVar21,8);
    if (uVar31 != 0) {
      while ((uVar31 != 1 || (*(int *)(*(long *)(*(long *)(param_1 + 8) + lVar38 * 8) + 0x10) != 0))
            ) {
        uVar43 = uVar43 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (iVar30 + 1) * uVar39;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar35;
        lVar38 = SUB168(auVar10 * auVar22,8);
        uVar31 = *(uint *)(*(long *)(param_1 + 0x10) + lVar38 * 4);
        iVar30 = SUB164(auVar10 * auVar22,8);
        if ((uVar31 == 0) ||
           (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar39, auVar23._8_8_ = 0,
           auVar23._0_8_ = uVar35, auVar12._8_8_ = 0,
           auVar12._0_8_ =
                ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) + iVar30)
                - SUB164(auVar11 * auVar23,8)) * uVar39, auVar24._8_8_ = 0, auVar24._0_8_ = uVar35,
           SUB164(auVar12 * auVar24,8) < uVar43)) goto LAB_0010408c;
      }
      local_148[0] = 0;
      lVar38 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
               ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                             *)param_1,local_148);
      local_68._8_8_ = 0;
      if (*(long *)(lVar38 + 8) != 0) {
        CowData<StringName>::_ref((CowData<StringName> *)(local_68 + 8),(CowData *)(lVar38 + 8));
      }
      Vector<StringName>::append_array((Vector<StringName> *)&local_138,local_68);
      CowData<StringName>::_unref((CowData<StringName> *)(local_68 + 8));
    }
  }
LAB_0010408c:
  if ((iVar45 != -1) || (local_168 != (StringName *)0x0)) {
    local_168 = local_168 + (long)iVar45 * 8;
    while( true ) {
      StringName::StringName((StringName *)local_68,local_168);
      Vector<StringName>::push_back((Vector<StringName> *)&local_138,(StringName *)local_68);
      if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
        StringName::unref();
      }
      iVar45 = iVar45 + 1;
      if (iVar29 <= iVar45) break;
      local_168 = local_168 + 8;
    }
  }
  local_148[0] = 0;
  HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
  ::insert((int *)local_68,(Vector *)param_1,SUB81(local_148,0));
  CowData<StringName>::_unref((CowData<StringName> *)&local_130);
LAB_0010437f:
  uVar27 = local_98._0_8_;
  if ((long *)local_98._0_8_ != (long *)0x0) {
    uVar39 = (ulong)local_78._4_4_;
    uVar28 = local_88._8_8_;
    if (local_78._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_78 & 0xffffffff) * 4) != 0) {
        memset((void *)local_88._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_78 & 0xffffffff) * 4) * 4);
      }
      plVar40 = (long *)uVar27;
      do {
        if ((StringName::configured != '\0') && (*plVar40 != 0)) {
          StringName::unref();
        }
        plVar40 = plVar40 + 1;
      } while (plVar40 != (long *)(uVar27 + uVar39 * 8));
    }
    Memory::free_static((void *)uVar27,false);
    Memory::free_static((void *)local_88._0_8_,false);
    Memory::free_static((void *)local_98._8_8_,false);
    Memory::free_static((void *)uVar28,false);
  }
  uVar27 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    uVar39 = (ulong)local_a8._4_4_;
    uVar28 = local_b8._8_8_;
    if (local_a8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_a8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_b8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_a8 & 0xffffffff) * 4) * 4);
      }
      plVar40 = (long *)uVar27;
      do {
        if ((StringName::configured != '\0') && (*plVar40 != 0)) {
          StringName::unref();
        }
        plVar40 = plVar40 + 1;
      } while ((long *)(uVar27 + uVar39 * 8) != plVar40);
    }
    Memory::free_static((void *)uVar27,false);
    Memory::free_static((void *)local_b8._0_8_,false);
    Memory::free_static((void *)local_c8._8_8_,false);
    Memory::free_static((void *)uVar28,false);
  }
  uVar27 = local_f8._0_8_;
  if ((long *)local_f8._0_8_ != (long *)0x0) {
    uVar39 = (ulong)local_d8._4_4_;
    uVar28 = local_e8._8_8_;
    if (local_d8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_e8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4) * 4);
      }
      plVar40 = (long *)uVar27;
      do {
        if ((StringName::configured != '\0') && (*plVar40 != 0)) {
          StringName::unref();
        }
        plVar40 = plVar40 + 1;
      } while ((long *)(uVar27 + uVar39 * 8) != plVar40);
    }
    Memory::free_static((void *)uVar27,false);
    Memory::free_static((void *)local_e8._0_8_,false);
    Memory::free_static((void *)local_f8._8_8_,false);
    Memory::free_static((void *)uVar28,false);
  }
  uVar27 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    uVar39 = (ulong)local_108._4_4_;
    uVar28 = local_118._8_8_;
    if (local_108._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_108 & 0xffffffff) * 4) != 0) {
        memset((void *)local_118._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_108 & 0xffffffff) * 4) * 4);
      }
      plVar40 = (long *)uVar27;
      do {
        if ((StringName::configured != '\0') && (*plVar40 != 0)) {
          StringName::unref();
        }
        plVar40 = plVar40 + 1;
      } while (plVar40 != (long *)(uVar27 + uVar39 * 8));
    }
    Memory::free_static((void *)uVar27,false);
    Memory::free_static((void *)local_118._0_8_,false);
    Memory::free_static((void *)local_128._8_8_,false);
    Memory::free_static((void *)uVar28,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GraphEditArranger::_crossing_minimisation(HashMap<int, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > >
   >&, HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > > > const&)
   [clone .part.0] */

void __thiscall
GraphEditArranger::_crossing_minimisation(GraphEditArranger *this,HashMap *param_1,HashMap *param_2)

{
  int *piVar1;
  uint uVar2;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  code *pcVar36;
  long lVar37;
  StringName *pSVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  uint uVar41;
  long lVar42;
  Variant *pVVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  uint uVar48;
  long lVar49;
  uint uVar50;
  ulong uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  int *piVar55;
  uint uVar56;
  long in_FS_OFFSET;
  long local_158;
  StringName *local_150;
  StringName *local_138;
  uint local_100;
  uint local_e4;
  Dictionary local_e0 [16];
  long local_d0 [2];
  StringName *local_c0;
  Vector local_b8 [8];
  CowData<StringName> local_b0 [8];
  uint local_a8 [2];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < *(uint *)(param_1 + 0x2c)) {
    uVar56 = 1;
    do {
      local_a8[0] = uVar56 - 1;
      lVar42 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
               ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                             *)param_1,(int *)local_a8);
      local_d0[0] = 0;
      if (*(long *)(lVar42 + 8) != 0) {
        CowData<StringName>::_ref((CowData<StringName> *)local_d0,(CowData *)(lVar42 + 8));
      }
      local_a8[0] = uVar56;
      lVar42 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
               ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                             *)param_1,(int *)local_a8);
      local_c0 = (StringName *)0x0;
      if (*(long *)(lVar42 + 8) == 0) {
LAB_00104dc3:
        local_90 = (undefined1  [16])0x0;
        local_a0 = (undefined1  [16])0x0;
        local_80 = _LC30;
        _split(local_b8,(HashMap *)this);
        local_e4 = uVar56;
        HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
        ::insert((int *)local_e0,(Vector *)param_1,SUB81(&local_e4,0));
        CowData<StringName>::_unref(local_b0);
      }
      else {
        CowData<StringName>::_ref((CowData<StringName> *)&local_c0,(CowData *)(lVar42 + 8));
        pSVar38 = local_c0;
        local_a0 = (undefined1  [16])0x0;
        local_80 = _LC30;
        local_90 = (undefined1  [16])0x0;
        if (local_c0 == (StringName *)0x0) goto LAB_00104dc3;
        local_138 = local_c0;
        for (lVar42 = 0; lVar42 < *(long *)(pSVar38 + -8); lVar42 = lVar42 + 1) {
          Dictionary::Dictionary(local_e0);
          if (0 < *(long *)(pSVar38 + -8)) {
            lVar53 = 0;
            local_150 = pSVar38;
            do {
              lVar37 = local_d0[0];
              if (((int)lVar53 != (int)lVar42) && (local_d0[0] != 0)) {
                local_158 = 1;
                lVar49 = *(long *)(local_d0[0] + -8);
                local_100 = 0;
LAB_001047fb:
                if (local_158 < lVar49) {
                  if ((*(long *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x2c) == 0)) {
LAB_00104c30:
                    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                     "FATAL: Condition \"!exists\" is true.",0,0);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar36 = (code *)invalidInstructionException();
                    (*pcVar36)();
                  }
                  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
                  lVar49 = *(long *)(hash_table_size_primes_inv +
                                    (ulong)*(uint *)(param_2 + 0x28) * 8);
                  if (*(long *)local_138 == 0) {
                    uVar41 = StringName::get_empty_hash();
                  }
                  else {
                    uVar41 = *(uint *)(*(long *)local_138 + 0x20);
                  }
                  uVar51 = CONCAT44(0,uVar2);
                  if (uVar41 == 0) {
                    uVar41 = 1;
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar41 * lVar49;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar51;
                  lVar45 = SUB168(auVar4 * auVar20,8);
                  uVar48 = *(uint *)(*(long *)(param_2 + 0x10) + lVar45 * 4);
                  uVar50 = SUB164(auVar4 * auVar20,8);
                  if (uVar48 == 0) goto LAB_00104c30;
                  uVar52 = 0;
                  while ((uVar41 != uVar48 ||
                         (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar45 * 8) + 0x10) !=
                          *(long *)local_138))) {
                    uVar52 = uVar52 + 1;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (ulong)(uVar50 + 1) * lVar49;
                    auVar21._8_8_ = 0;
                    auVar21._0_8_ = uVar51;
                    lVar45 = SUB168(auVar5 * auVar21,8);
                    uVar48 = *(uint *)(*(long *)(param_2 + 0x10) + lVar45 * 4);
                    uVar50 = SUB164(auVar5 * auVar21,8);
                    if ((uVar48 == 0) ||
                       (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar48 * lVar49, auVar22._8_8_ = 0,
                       auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                       auVar7._0_8_ = (ulong)((uVar2 + uVar50) - SUB164(auVar6 * auVar22,8)) *
                                      lVar49, auVar23._8_8_ = 0, auVar23._0_8_ = uVar51,
                       SUB164(auVar7 * auVar23,8) < uVar52)) goto LAB_00104c30;
                  }
                  lVar45 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar50 * 8);
                  lVar49 = *(long *)(lVar37 + -8);
                  lVar46 = local_158;
                  if (lVar49 <= local_158) {
LAB_00104e84:
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,lVar46,lVar49,"p_index",
                               "size()","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar36 = (code *)invalidInstructionException();
                    (*pcVar36)();
                  }
                  if ((*(long *)(lVar45 + 0x18) != 0) && (*(int *)(lVar45 + 0x3c) != 0)) {
                    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar45 + 0x38) * 4);
                    uVar51 = CONCAT44(0,uVar2);
                    lVar49 = *(long *)(hash_table_size_primes_inv +
                                      (ulong)*(uint *)(lVar45 + 0x38) * 8);
                    lVar46 = *(long *)(lVar37 + local_158 * 8);
                    if (lVar46 == 0) {
                      uVar41 = StringName::get_empty_hash();
                    }
                    else {
                      uVar41 = *(uint *)(lVar46 + 0x20);
                    }
                    if (uVar41 == 0) {
                      uVar41 = 1;
                    }
                    uVar50 = 0;
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = (ulong)uVar41 * lVar49;
                    auVar24._8_8_ = 0;
                    auVar24._0_8_ = uVar51;
                    lVar46 = SUB168(auVar8 * auVar24,8);
                    uVar48 = *(uint *)(*(long *)(lVar45 + 0x30) + lVar46 * 4);
                    iVar44 = SUB164(auVar8 * auVar24,8);
                    if (uVar48 != 0) {
                      do {
                        if ((uVar41 == uVar48) &&
                           (*(long *)(*(long *)(lVar45 + 0x18) +
                                     (ulong)*(uint *)(*(long *)(lVar45 + 0x20) + lVar46 * 4) * 8) ==
                            *(long *)(lVar37 + local_158 * 8))) {
                          lVar46 = 0;
                          goto LAB_00104a10;
                        }
                        uVar50 = uVar50 + 1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = (ulong)(iVar44 + 1) * lVar49;
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ = uVar51;
                        lVar46 = SUB168(auVar9 * auVar25,8);
                        uVar48 = *(uint *)(*(long *)(lVar45 + 0x30) + lVar46 * 4);
                        iVar44 = SUB164(auVar9 * auVar25,8);
                      } while ((uVar48 != 0) &&
                              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar48 * lVar49,
                              auVar26._8_8_ = 0, auVar26._0_8_ = uVar51, auVar11._8_8_ = 0,
                              auVar11._0_8_ =
                                   (ulong)((uVar2 + iVar44) - SUB164(auVar10 * auVar26,8)) * lVar49,
                              auVar27._8_8_ = 0, auVar27._0_8_ = uVar51,
                              uVar50 <= SUB164(auVar11 * auVar27,8)));
                    }
                    goto LAB_00104c18;
                  }
                  goto LAB_00104c21;
                }
                goto LAB_00104c68;
              }
              local_100 = 0;
LAB_00104c68:
              Variant::Variant((Variant *)local_58,local_100);
              Variant::Variant((Variant *)local_78,local_150);
              pVVar43 = (Variant *)Dictionary::operator[]((Variant *)local_e0);
              if (pVVar43 != (Variant *)local_58) {
                if (Variant::needs_deinit[*(int *)pVVar43] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar43 = 0;
                *(int *)pVVar43 = local_58[0];
                local_58[0] = 0;
                *(undefined8 *)(pVVar43 + 8) = local_50;
                *(undefined8 *)(pVVar43 + 0x10) = uStack_48;
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_150 = local_150 + 8;
              lVar53 = lVar53 + 1;
            } while (lVar53 < *(long *)(pSVar38 + -8));
          }
          HashMap<StringName,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Dictionary>>>
          ::insert(local_b8,(Dictionary *)local_a8,SUB81(local_138,0));
          Dictionary::~Dictionary(local_e0);
          local_138 = local_138 + 8;
        }
        uVar39 = local_a0._0_8_;
        _split(local_b8,(HashMap *)this);
        local_e4 = uVar56;
        HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
        ::insert((int *)local_e0,(Vector *)param_1,SUB81(&local_e4,0));
        CowData<StringName>::_unref(local_b0);
        if ((undefined8 *)uVar39 != (undefined8 *)0x0) {
          uVar40 = local_a0._8_8_;
          if ((local_80._4_4_ != 0) &&
             (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
            piVar1 = (int *)(local_a0._8_8_ +
                            (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) *
                            4);
            puVar54 = (undefined8 *)uVar39;
            piVar55 = (int *)local_a0._8_8_;
            do {
              if (*piVar55 != 0) {
                pvVar3 = (void *)*puVar54;
                *piVar55 = 0;
                Dictionary::~Dictionary((Dictionary *)((long)pvVar3 + 0x18));
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
                  StringName::unref();
                }
                Memory::free_static(pvVar3,false);
                *puVar54 = 0;
              }
              piVar55 = piVar55 + 1;
              puVar54 = puVar54 + 1;
            } while (piVar55 != piVar1);
          }
          Memory::free_static((void *)uVar39,false);
          Memory::free_static((void *)uVar40,false);
        }
      }
      uVar56 = uVar56 + 1;
      CowData<StringName>::_unref((CowData<StringName> *)&local_c0);
      CowData<StringName>::_unref((CowData<StringName> *)local_d0);
    } while (uVar56 < *(uint *)(param_1 + 0x2c));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00104a10:
  do {
    if ((*(long *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x2c) == 0)) goto LAB_00104c30;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    if (*(long *)local_150 == 0) {
      uVar41 = StringName::get_empty_hash();
    }
    else {
      uVar41 = *(uint *)(*(long *)local_150 + 0x20);
    }
    uVar51 = CONCAT44(0,uVar2);
    if (uVar41 == 0) {
      uVar41 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar41 * lVar49;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar51;
    lVar45 = SUB168(auVar12 * auVar28,8);
    uVar48 = *(uint *)(*(long *)(param_2 + 0x10) + lVar45 * 4);
    uVar50 = SUB164(auVar12 * auVar28,8);
    if (uVar48 == 0) goto LAB_00104c30;
    uVar52 = 0;
    while ((uVar41 != uVar48 ||
           (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar45 * 8) + 0x10) != *(long *)local_150))
          ) {
      uVar52 = uVar52 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)(uVar50 + 1) * lVar49;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar51;
      lVar45 = SUB168(auVar13 * auVar29,8);
      uVar48 = *(uint *)(*(long *)(param_2 + 0x10) + lVar45 * 4);
      uVar50 = SUB164(auVar13 * auVar29,8);
      if ((uVar48 == 0) ||
         (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar48 * lVar49, auVar30._8_8_ = 0,
         auVar30._0_8_ = uVar51, auVar15._8_8_ = 0,
         auVar15._0_8_ = (ulong)((uVar2 + uVar50) - SUB164(auVar14 * auVar30,8)) * lVar49,
         auVar31._8_8_ = 0, auVar31._0_8_ = uVar51, SUB164(auVar15 * auVar31,8) < uVar52))
      goto LAB_00104c30;
    }
    lVar45 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar50 * 8);
    lVar49 = *(long *)(lVar37 + -8);
    if (lVar49 <= lVar46) goto LAB_00104e84;
    if ((*(long *)(lVar45 + 0x18) != 0) && (*(int *)(lVar45 + 0x3c) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar45 + 0x38) * 4);
      uVar51 = CONCAT44(0,uVar2);
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar45 + 0x38) * 8);
      lVar47 = *(long *)(lVar37 + lVar46 * 8);
      if (lVar47 == 0) {
        uVar41 = StringName::get_empty_hash();
      }
      else {
        uVar41 = *(uint *)(lVar47 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar41 * lVar49;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar51;
      lVar47 = SUB168(auVar16 * auVar32,8);
      uVar48 = *(uint *)(*(long *)(lVar45 + 0x30) + lVar47 * 4);
      iVar44 = SUB164(auVar16 * auVar32,8);
      if (uVar48 != 0) {
        uVar50 = 0;
        while ((uVar41 != uVar48 ||
               (*(long *)(*(long *)(lVar45 + 0x18) +
                         (ulong)*(uint *)(*(long *)(lVar45 + 0x20) + lVar47 * 4) * 8) !=
                *(long *)(lVar37 + lVar46 * 8)))) {
          uVar50 = uVar50 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(iVar44 + 1) * lVar49;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar51;
          lVar47 = SUB168(auVar17 * auVar33,8);
          uVar48 = *(uint *)(*(long *)(lVar45 + 0x30) + lVar47 * 4);
          iVar44 = SUB164(auVar17 * auVar33,8);
          if ((uVar48 == 0) ||
             (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar48 * lVar49, auVar34._8_8_ = 0,
             auVar34._0_8_ = uVar51, auVar19._8_8_ = 0,
             auVar19._0_8_ = (ulong)((uVar2 + iVar44) - SUB164(auVar18 * auVar34,8)) * lVar49,
             auVar35._8_8_ = 0, auVar35._0_8_ = uVar51, SUB164(auVar19 * auVar35,8) < uVar50))
          goto LAB_00104bfb;
        }
        local_100 = local_100 + 1;
      }
    }
LAB_00104bfb:
    lVar46 = lVar46 + 1;
  } while (lVar46 != local_158);
LAB_00104c18:
  lVar49 = *(long *)(lVar37 + -8);
LAB_00104c21:
  local_158 = local_158 + 1;
  goto LAB_001047fb;
}



/* GraphEditArranger::_crossing_minimisation(HashMap<int, Vector<StringName>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > >
   >&, HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > > > const&) */

void __thiscall
GraphEditArranger::_crossing_minimisation(GraphEditArranger *this,HashMap *param_1,HashMap *param_2)

{
  if (*(int *)(param_1 + 0x2c) != 1) {
    _crossing_minimisation(this,param_1,param_2);
    return;
  }
  return;
}



/* CowData<Pair<int, StringName> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Pair<int,StringName>>::_copy_on_write(CowData<Pair<int,StringName>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  puVar8 = puVar3 + 2;
  if (lVar1 != 0) {
    do {
      lVar7 = lVar6 + 1;
      puVar4 = (undefined4 *)(lVar6 * 0x10 + *(long *)this);
      *(undefined4 *)puVar8 = *puVar4;
      StringName::StringName((StringName *)(puVar8 + 1),(StringName *)(puVar4 + 2));
      lVar6 = lVar7;
      puVar8 = puVar8 + 2;
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* GraphEditArranger::_horizontal_alignment(Dictionary&, Dictionary&, HashMap<int,
   Vector<StringName>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > > > const&, HashMap<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > > > > const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&) */

void __thiscall
GraphEditArranger::_horizontal_alignment
          (GraphEditArranger *this,Dictionary *param_1,Dictionary *param_2,HashMap *param_3,
          HashMap *param_4,HashSet *param_5)

{
  int iVar1;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  code *pcVar34;
  uint uVar35;
  Variant *pVVar36;
  Variant *pVVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  StringName *pSVar43;
  long lVar44;
  undefined4 *puVar45;
  uint uVar46;
  uint uVar47;
  StringName *pSVar48;
  long lVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  int iVar53;
  ulong uVar54;
  uint uVar55;
  long in_FS_OFFSET;
  long local_100;
  long local_f0;
  long local_b0 [2];
  StringName *local_a0 [2];
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar1 = *(int *)(param_5 + 0x24);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 != 0) {
    pSVar43 = *(StringName **)param_5;
    iVar53 = 1;
    while( true ) {
      Variant::Variant((Variant *)local_58,pSVar43);
      Variant::Variant((Variant *)local_78,pSVar43);
      pVVar36 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar36 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar36] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar36 = 0;
        *(int *)pVVar36 = local_58[0];
        *(undefined8 *)(pVVar36 + 8) = local_50;
        *(undefined8 *)(pVVar36 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,pSVar43);
      Variant::Variant((Variant *)local_78,pSVar43);
      pVVar36 = (Variant *)Dictionary::operator[]((Variant *)param_2);
      if (pVVar36 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar36] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar36 = 0;
        *(int *)pVVar36 = local_58[0];
        *(undefined8 *)(pVVar36 + 8) = local_50;
        *(undefined8 *)(pVVar36 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar1 <= iVar53) break;
      iVar53 = iVar53 + 1;
      pSVar43 = pSVar43 + 8;
    }
  }
  uVar55 = 1;
  if (1 < *(uint *)(param_3 + 0x2c)) {
    do {
      lVar44 = *(long *)(param_3 + 8);
      if (lVar44 == 0) {
LAB_001058d0:
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar34 = (code *)invalidInstructionException();
        (*pcVar34)();
      }
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4));
      uVar54 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      uVar35 = (uVar55 >> 0x10 ^ uVar55) * -0x7a143595;
      uVar35 = (uVar35 ^ uVar35 >> 0xd) * -0x3d4d51cb;
      uVar46 = uVar35 ^ uVar35 >> 0x10;
      if (uVar35 == uVar35 >> 0x10) {
        uVar46 = 1;
        uVar39 = uVar54;
      }
      else {
        uVar39 = uVar46 * uVar54;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar52;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar39;
      lVar38 = SUB168(auVar2 * auVar18,8);
      uVar47 = SUB164(auVar2 * auVar18,8);
      uVar35 = *(uint *)(*(long *)(param_3 + 0x10) + lVar38 * 4);
      if (uVar35 == 0) goto LAB_001058d0;
      uVar50 = 0;
      while ((uVar35 != uVar46 || (uVar55 != *(uint *)(*(long *)(lVar44 + lVar38 * 8) + 0x10)))) {
        uVar50 = uVar50 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (uVar47 + 1) * uVar54;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar52;
        lVar38 = SUB168(auVar3 * auVar19,8);
        uVar35 = *(uint *)(*(long *)(param_3 + 0x10) + lVar38 * 4);
        uVar47 = SUB164(auVar3 * auVar19,8);
        if ((uVar35 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = uVar35 * uVar54, auVar20._8_8_ = 0,
           auVar20._0_8_ = uVar52, auVar5._8_8_ = 0,
           auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4)
                           + uVar47) - SUB164(auVar4 * auVar20,8)) * uVar54, auVar21._8_8_ = 0,
           auVar21._0_8_ = uVar52, SUB164(auVar5 * auVar21,8) < uVar50)) goto LAB_001058d0;
      }
      local_b0[0] = 0;
      lVar38 = *(long *)(lVar44 + (ulong)uVar47 * 8);
      if (*(long *)(lVar38 + 0x20) != 0) {
        CowData<StringName>::_ref((CowData<StringName> *)local_b0,(CowData *)(lVar38 + 0x20));
        lVar44 = *(long *)(param_3 + 8);
        if (lVar44 == 0) goto LAB_001058d0;
      }
      if (*(int *)(param_3 + 0x2c) == 0) goto LAB_001058d0;
      uVar35 = uVar55 - 1;
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4));
      uVar54 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      uVar46 = (uVar35 >> 0x10 ^ uVar35) * -0x7a143595;
      uVar46 = (uVar46 ^ uVar46 >> 0xd) * -0x3d4d51cb;
      uVar47 = uVar46 ^ uVar46 >> 0x10;
      if (uVar46 == uVar46 >> 0x10) {
        uVar47 = 1;
        uVar39 = uVar54;
      }
      else {
        uVar39 = uVar47 * uVar54;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar52;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar39;
      lVar38 = SUB168(auVar6 * auVar22,8);
      uVar50 = SUB164(auVar6 * auVar22,8);
      uVar46 = *(uint *)(*(long *)(param_3 + 0x10) + lVar38 * 4);
      if (uVar46 == 0) goto LAB_001058d0;
      uVar51 = 0;
      while ((uVar47 != uVar46 || (uVar35 != *(uint *)(*(long *)(lVar44 + lVar38 * 8) + 0x10)))) {
        uVar51 = uVar51 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (uVar50 + 1) * uVar54;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar52;
        lVar38 = SUB168(auVar7 * auVar23,8);
        uVar46 = *(uint *)(*(long *)(param_3 + 0x10) + lVar38 * 4);
        uVar50 = SUB164(auVar7 * auVar23,8);
        if ((uVar46 == 0) ||
           (auVar8._8_8_ = 0, auVar8._0_8_ = uVar46 * uVar54, auVar24._8_8_ = 0,
           auVar24._0_8_ = uVar52, auVar9._8_8_ = 0,
           auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4)
                           + uVar50) - SUB164(auVar8 * auVar24,8)) * uVar54, auVar25._8_8_ = 0,
           auVar25._0_8_ = uVar52, SUB164(auVar9 * auVar25,8) < uVar51)) goto LAB_001058d0;
      }
      local_a0[0] = (StringName *)0x0;
      lVar44 = *(long *)(lVar44 + (ulong)uVar50 * 8);
      if (*(long *)(lVar44 + 0x20) != 0) {
        CowData<StringName>::_ref((CowData<StringName> *)local_a0,(CowData *)(lVar44 + 0x20));
      }
      lVar44 = local_b0[0];
      local_100 = 0;
      iVar1 = -1;
      if (local_b0[0] != 0) {
        for (; pSVar43 = local_a0[0], local_100 < *(long *)(lVar44 + -8); local_100 = local_100 + 1)
        {
          local_90 = 0;
          if (local_a0[0] == (StringName *)0x0) {
LAB_00105de2:
            iVar42 = 1;
            lVar38 = 0;
            iVar53 = 0;
          }
          else {
            pSVar48 = local_a0[0];
            for (local_f0 = 0; local_f0 < *(long *)(pSVar43 + -8); local_f0 = local_f0 + 1) {
              if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0))
              goto LAB_001058d0;
              uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
              uVar54 = CONCAT44(0,uVar35);
              lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
              lVar40 = *(long *)(lVar44 + local_100 * 8);
              if (lVar40 == 0) {
                uVar46 = StringName::get_empty_hash();
              }
              else {
                uVar46 = *(uint *)(lVar40 + 0x20);
              }
              if (uVar46 == 0) {
                uVar46 = 1;
              }
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)uVar46 * lVar38;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = uVar54;
              lVar40 = SUB168(auVar10 * auVar26,8);
              uVar47 = *(uint *)(*(long *)(param_4 + 0x10) + lVar40 * 4);
              uVar50 = SUB164(auVar10 * auVar26,8);
              if (uVar47 == 0) goto LAB_001058d0;
              uVar51 = 0;
              while ((uVar46 != uVar47 ||
                     (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar40 * 8) + 0x10) !=
                      *(long *)(lVar44 + local_100 * 8)))) {
                uVar51 = uVar51 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(uVar50 + 1) * lVar38;
                auVar27._8_8_ = 0;
                auVar27._0_8_ = uVar54;
                lVar40 = SUB168(auVar11 * auVar27,8);
                uVar47 = *(uint *)(*(long *)(param_4 + 0x10) + lVar40 * 4);
                uVar50 = SUB164(auVar11 * auVar27,8);
                if ((uVar47 == 0) ||
                   (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar47 * lVar38, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar54, auVar13._8_8_ = 0,
                   auVar13._0_8_ = (ulong)((uVar35 + uVar50) - SUB164(auVar12 * auVar28,8)) * lVar38
                   , auVar29._8_8_ = 0, auVar29._0_8_ = uVar54, SUB164(auVar13 * auVar29,8) < uVar51
                   )) goto LAB_001058d0;
              }
              lVar38 = *(long *)(*(long *)(param_4 + 8) + (ulong)uVar50 * 8);
              if ((*(long *)(lVar38 + 0x18) != 0) && (*(int *)(lVar38 + 0x3c) != 0)) {
                uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar38 + 0x38) * 4);
                uVar54 = CONCAT44(0,uVar35);
                lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar38 + 0x38) * 8)
                ;
                if (*(long *)pSVar48 == 0) {
                  uVar46 = StringName::get_empty_hash();
                }
                else {
                  uVar46 = *(uint *)(*(long *)pSVar48 + 0x20);
                }
                if (uVar46 == 0) {
                  uVar46 = 1;
                }
                auVar14._8_8_ = 0;
                auVar14._0_8_ = (ulong)uVar46 * lVar40;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar54;
                lVar41 = SUB168(auVar14 * auVar30,8);
                uVar47 = *(uint *)(*(long *)(lVar38 + 0x30) + lVar41 * 4);
                iVar53 = SUB164(auVar14 * auVar30,8);
                if (uVar47 != 0) {
                  uVar50 = 0;
                  while ((uVar47 != uVar46 ||
                         (*(long *)(*(long *)(lVar38 + 0x18) +
                                   (ulong)*(uint *)(*(long *)(lVar38 + 0x20) + lVar41 * 4) * 8) !=
                          *(long *)pSVar48))) {
                    uVar50 = uVar50 + 1;
                    auVar15._8_8_ = 0;
                    auVar15._0_8_ = (ulong)(iVar53 + 1) * lVar40;
                    auVar31._8_8_ = 0;
                    auVar31._0_8_ = uVar54;
                    lVar41 = SUB168(auVar15 * auVar31,8);
                    uVar47 = *(uint *)(*(long *)(lVar38 + 0x30) + lVar41 * 4);
                    iVar53 = SUB164(auVar15 * auVar31,8);
                    if ((uVar47 == 0) ||
                       (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar47 * lVar40, auVar32._8_8_ = 0
                       , auVar32._0_8_ = uVar54, auVar17._8_8_ = 0,
                       auVar17._0_8_ =
                            (ulong)((uVar35 + iVar53) - SUB164(auVar16 * auVar32,8)) * lVar40,
                       auVar33._8_8_ = 0, auVar33._0_8_ = uVar54,
                       SUB164(auVar17 * auVar33,8) < uVar50)) goto LAB_001058b8;
                  }
                  local_88 = (undefined4)local_f0;
                  StringName::StringName((StringName *)&local_80,pSVar48);
                  if (local_90 == 0) {
                    lVar38 = 1;
                  }
                  else {
                    lVar38 = *(long *)(local_90 + -8) + 1;
                  }
                  iVar53 = CowData<Pair<int,StringName>>::resize<false>
                                     ((CowData<Pair<int,StringName>> *)&local_90,lVar38);
                  if (iVar53 == 0) {
                    if (local_90 == 0) {
                      lVar40 = -1;
                      lVar38 = 0;
                    }
                    else {
                      lVar38 = *(long *)(local_90 + -8);
                      lVar40 = lVar38 + -1;
                      if (-1 < lVar40) {
                        CowData<Pair<int,StringName>>::_copy_on_write
                                  ((CowData<Pair<int,StringName>> *)&local_90);
                        puVar45 = (undefined4 *)(lVar40 * 0x10 + local_90);
                        *puVar45 = local_88;
                        StringName::operator=((StringName *)(puVar45 + 2),(StringName *)&local_80);
                        goto LAB_00105897;
                      }
                    }
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar40,lVar38,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    _err_print_error("push_back","./core/templates/vector.h",0x142,
                                     "Condition \"err\" is true. Returning: true",0,0);
                  }
LAB_00105897:
                  if ((StringName::configured != '\0') && (local_80 != 0)) {
                    StringName::unref();
                  }
                }
              }
LAB_001058b8:
              pSVar48 = pSVar48 + 8;
            }
            if (local_90 == 0) goto LAB_00105de2;
            lVar38 = *(long *)(local_90 + -8) + -1;
            iVar53 = (int)(lVar38 / 2);
            iVar42 = iVar53 + ((uint)lVar38 & 1);
            lVar38 = local_90;
          }
          lVar40 = (long)iVar53;
          pSVar43 = (StringName *)(lVar44 + local_100 * 8);
          pSVar48 = (StringName *)(lVar38 + 8 + lVar40 * 0x10);
          do {
            Variant::Variant((Variant *)local_58,pSVar43);
            Dictionary::operator[]((Variant *)param_2);
            Variant::operator_cast_to_StringName((Variant *)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (CONCAT44(uStack_84,local_88) == *(long *)(lVar44 + local_100 * 8)) {
              lVar41 = lVar40;
              if (lVar40 < 0) {
                if (lVar38 == 0) {
                  lVar49 = 0;
                  goto LAB_00105d0a;
                }
              }
              else {
                if (lVar38 == 0) {
                  lVar49 = 0;
                  goto LAB_00105d0a;
                }
                if (lVar40 < *(long *)(lVar38 + -8)) {
                  if (iVar1 < *(int *)(pSVar48 + -8)) {
                    lVar49 = *(long *)(lVar44 + -8);
                    lVar41 = local_100;
                    if (lVar49 <= local_100) goto LAB_00105d0a;
                    Variant::Variant((Variant *)local_58,pSVar43);
                    lVar49 = *(long *)(lVar38 + -8);
                    lVar41 = lVar40;
                    if (lVar49 <= lVar40) goto LAB_00105d0a;
                    Variant::Variant((Variant *)local_78,pSVar48);
                    pVVar36 = (Variant *)Dictionary::operator[]((Variant *)param_2);
                    if (pVVar36 != (Variant *)local_58) {
                      if (Variant::needs_deinit[*(int *)pVVar36] != '\0') {
                        Variant::_clear_internal();
                      }
                      *(undefined4 *)pVVar36 = 0;
                      *(int *)pVVar36 = local_58[0];
                      *(undefined8 *)(pVVar36 + 8) = local_50;
                      *(undefined8 *)(pVVar36 + 0x10) = uStack_48;
                      local_58[0] = 0;
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    lVar49 = *(long *)(lVar38 + -8);
                    if (lVar49 <= lVar40) goto LAB_00105d0a;
                    Variant::Variant((Variant *)local_58,pSVar48);
                    pVVar36 = (Variant *)Dictionary::operator[]((Variant *)param_1);
                    Variant::Variant((Variant *)local_78,pSVar43);
                    pVVar37 = (Variant *)Dictionary::operator[]((Variant *)param_1);
                    Variant::operator=(pVVar37,pVVar36);
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    lVar49 = *(long *)(lVar38 + -8);
                    if (lVar49 <= lVar40) goto LAB_00105d0a;
                    Variant::Variant((Variant *)local_58,pSVar48);
                    pVVar36 = (Variant *)Dictionary::operator[]((Variant *)param_1);
                    Variant::Variant((Variant *)local_78,pSVar43);
                    pVVar37 = (Variant *)Dictionary::operator[]((Variant *)param_2);
                    Variant::operator=(pVVar37,pVVar36);
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    lVar49 = *(long *)(lVar38 + -8);
                    if (lVar49 <= lVar40) goto LAB_00105d0a;
                    iVar1 = *(int *)(pSVar48 + -8);
                  }
                  goto LAB_00105a10;
                }
              }
              lVar49 = *(long *)(lVar38 + -8);
LAB_00105d0a:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar41,lVar49,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar34 = (code *)invalidInstructionException();
              (*pcVar34)();
            }
LAB_00105a10:
            if ((StringName::configured != '\0') && (CONCAT44(uStack_84,local_88) != 0)) {
              StringName::unref();
            }
            lVar40 = lVar40 + 1;
            pSVar48 = pSVar48 + 0x10;
          } while ((int)lVar40 <= iVar42);
          CowData<Pair<int,StringName>>::_unref((CowData<Pair<int,StringName>> *)&local_90);
        }
      }
      uVar55 = uVar55 + 1;
      CowData<StringName>::_unref((CowData<StringName> *)local_a0);
      CowData<StringName>::_unref((CowData<StringName> *)local_b0);
    } while (uVar55 < *(uint *)(param_3 + 0x2c));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GraphEditArranger::arrange_nodes() */

void __thiscall GraphEditArranger::arrange_nodes(GraphEditArranger *this)

{
  long *plVar1;
  int *piVar2;
  float fVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char cVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  Object *pOVar28;
  Variant *pVVar29;
  long lVar30;
  undefined8 *puVar31;
  uint uVar32;
  long lVar33;
  int *piVar34;
  ulong uVar35;
  uint uVar36;
  void *pvVar37;
  uint uVar38;
  long *plVar39;
  long *plVar40;
  void *pvVar41;
  StringName *pSVar42;
  StringName *pSVar43;
  long lVar44;
  long in_FS_OFFSET;
  bool bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float extraout_XMM0_Db;
  StringName *local_288;
  int local_278;
  byte local_270;
  long *local_268;
  int local_204;
  Dictionary local_200 [8];
  Dictionary local_1f8 [8];
  Dictionary local_1f0 [8];
  Dictionary local_1e8 [8];
  long local_1e0;
  long local_1d8;
  ulong local_1d0 [2];
  long *local_1c0;
  ulong local_1b8;
  long local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  HashSet local_148 [8];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  HashMap local_118 [8];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  char *local_e8;
  void *local_e0;
  void *local_d8;
  undefined1 local_d0 [16];
  uint local_c0;
  uint local_bc;
  long *local_b8;
  void *pvStack_b0;
  void *local_a8;
  void *pvStack_a0;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined8 local_80;
  int local_78;
  float local_74;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("arrange_nodes","scene/gui/graph_edit_arranger.cpp",0x24,
                       "Parameter \"graph_edit\" is null.",0,0);
      return;
    }
    goto LAB_001080e7;
  }
  if (this[0x188] == (GraphEditArranger)0x0) {
    this[0x188] = (GraphEditArranger)0x1;
    Dictionary::Dictionary(local_200);
    local_1a8 = (undefined1  [16])0x0;
    local_188 = _LC30;
    local_198 = (undefined1  [16])0x0;
    iVar23 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0x180),0));
    local_270 = 1;
    iVar23 = iVar23 + -1;
    if (-1 < iVar23) {
      do {
        lVar27 = Node::get_child((int)*(undefined8 *)(this + 0x180),SUB41(iVar23,0));
        if ((lVar27 != 0) &&
           (pOVar28 = (Object *)__dynamic_cast(lVar27,&Object::typeinfo,&GraphNode::typeinfo,0),
           pOVar28 != (Object *)0x0)) {
          Variant::Variant((Variant *)&local_58,pOVar28);
          Node::get_name();
          Variant::Variant((Variant *)&local_78,(StringName *)&local_b8);
          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
          if (pVVar29 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar29] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar29 = 0;
            *(int *)pVVar29 = (int)local_58;
            *(undefined8 *)(pVVar29 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar29 + 0x10) = local_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b8 != (long *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          cVar21 = GraphElement::is_selected();
          if (cVar21 != '\0') {
            local_270 = 0;
          }
        }
        bVar45 = iVar23 != 0;
        iVar23 = iVar23 + -1;
      } while (bVar45);
    }
    local_140 = (undefined1  [16])0x0;
    local_120 = _LC30;
    local_f0 = _LC30;
    local_130 = (undefined1  [16])0x0;
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    lVar27 = GraphEdit::get_connections();
    local_1c0 = (long *)0x0;
    if (*(long *)(lVar27 + 8) != 0) {
      CowData<Ref<GraphEdit::Connection>>::_ref
                ((CowData<Ref<GraphEdit::Connection>> *)&local_1c0,(CowData *)(lVar27 + 8));
    }
    iVar24 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0x180),0));
    iVar23 = iVar24 + -1;
    if (iVar24 + -1 < 0) {
      this[0x188] = (GraphEditArranger)0x0;
      CowData<Ref<GraphEdit::Connection>>::_unref((CowData<Ref<GraphEdit::Connection>> *)&local_1c0)
      ;
    }
    else {
LAB_00106190:
      do {
        local_278 = iVar23;
        lVar27 = Node::get_child((int)*(undefined8 *)(this + 0x180),SUB41(local_278,0));
        if (((lVar27 != 0) &&
            (lVar27 = __dynamic_cast(lVar27,&Object::typeinfo,&GraphNode::typeinfo,0), lVar27 != 0))
           && ((cVar21 = GraphElement::is_selected(), cVar21 != '\0' || (local_270 != 0)))) {
          Node::get_name();
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)&local_b8);
          if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
            StringName::unref();
          }
          local_b8 = (long *)0x0;
          pvStack_b0 = (void *)0x0;
          local_98 = (uint)_LC30;
          uStack_94 = (uint)(_LC30 >> 0x20);
          local_a8 = (void *)0x0;
          pvStack_a0 = (void *)0x0;
          if ((local_1c0 == (long *)0x0) ||
             (plVar40 = local_1c0 + local_1c0[-1], local_1c0 == plVar40)) {
            Node::get_name();
            HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
            ::insert((String *)&local_e8,local_148,SUB81(local_178,0));
            if ((StringName::configured != '\0') && (local_178._0_8_ != 0)) {
              StringName::unref();
            }
          }
          else {
            local_268 = (long *)0x0;
            plVar39 = local_1c0;
            do {
              while( true ) {
                Variant::Variant((Variant *)&local_58,(StringName *)(*plVar39 + 0x180));
                pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
                pOVar28 = Variant::operator_cast_to_Object_(pVVar29);
                if (pOVar28 == (Object *)0x0) break;
                lVar27 = __dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if (lVar27 != 0) {
                  Node::get_name();
                  if (*(char **)(*plVar39 + 0x188) == local_e8) {
                    bVar22 = GraphElement::is_selected();
                    bVar22 = bVar22 | local_270;
                    if ((bVar22 != 0) &&
                       (*(long *)(*plVar39 + 0x188) != *(long *)(*plVar39 + 0x180))) {
                      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
                        StringName::unref();
                      }
                      Node::get_name();
                      if ((local_268 == (long *)0x0) || (uStack_94 == 0)) {
joined_r0x00106e27:
                        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
                          StringName::unref();
                        }
LAB_00106e3e:
                        Node::get_name();
                        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                        ::insert((String *)&local_e8);
                        if ((StringName::configured != '\0') && (local_178._0_8_ != 0)) {
                          StringName::unref();
                        }
                        lVar27 = *(long *)(*plVar39 + 0x188);
                        if (lVar27 == 0) goto LAB_0010717c;
LAB_00106e90:
                        uVar18 = local_178._8_8_;
                        pcVar4 = *(char **)(lVar27 + 8);
                        auVar15._8_8_ = 0;
                        auVar15._0_8_ = local_178._8_8_;
                        local_178 = auVar15 << 0x40;
                        if (pcVar4 == (char *)0x0) {
                          plVar1 = (long *)(*(long *)(lVar27 + 0x10) + -0x10);
                          if (*(long *)(lVar27 + 0x10) != 0) {
                            do {
                              lVar33 = *plVar1;
                              if (lVar33 == 0) goto LAB_00106ed0;
                              LOCK();
                              lVar30 = *plVar1;
                              bVar45 = lVar33 == lVar30;
                              if (bVar45) {
                                *plVar1 = lVar33 + 1;
                                lVar30 = lVar33;
                              }
                              UNLOCK();
                            } while (!bVar45);
                            if (lVar30 != -1) {
                              local_178._0_8_ = *(undefined8 *)(lVar27 + 0x10);
                              local_178 = CONCAT88(uVar18,local_178._0_8_);
                            }
                          }
                        }
                        else {
                          local_e0 = (void *)strlen(pcVar4);
                          local_e8 = pcVar4;
                          String::parse_latin1((StrRange *)local_178);
                        }
                      }
                      else {
                        uVar32 = *(uint *)(hash_table_size_primes + (ulong)local_98 * 4);
                        lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)local_98 * 8);
                        if (local_e8 == (char *)0x0) {
                          uVar25 = StringName::get_empty_hash();
                        }
                        else {
                          uVar25 = *(uint *)(local_e8 + 0x20);
                        }
                        uVar35 = CONCAT44(0,uVar32);
                        if (uVar25 == 0) {
                          uVar25 = 1;
                        }
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = (ulong)uVar25 * lVar27;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar35;
                        lVar33 = SUB168(auVar5 * auVar9,8);
                        uVar36 = *(uint *)((long)pvStack_a0 + lVar33 * 4);
                        iVar23 = SUB164(auVar5 * auVar9,8);
                        if (uVar36 == 0) goto joined_r0x00106e27;
                        uVar38 = 0;
                        do {
                          if ((uVar25 == uVar36) &&
                             ((char *)local_268[*(uint *)((long)pvStack_b0 + lVar33 * 4)] ==
                              local_e8)) goto LAB_00107146;
                          uVar38 = uVar38 + 1;
                          auVar6._8_8_ = 0;
                          auVar6._0_8_ = (ulong)(iVar23 + 1) * lVar27;
                          auVar10._8_8_ = 0;
                          auVar10._0_8_ = uVar35;
                          lVar33 = SUB168(auVar6 * auVar10,8);
                          uVar36 = *(uint *)((long)pvStack_a0 + lVar33 * 4);
                          iVar23 = SUB164(auVar6 * auVar10,8);
                        } while ((uVar36 != 0) &&
                                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar36 * lVar27,
                                auVar11._8_8_ = 0, auVar11._0_8_ = uVar35, auVar8._8_8_ = 0,
                                auVar8._0_8_ = (ulong)((uVar32 + iVar23) -
                                                      SUB164(auVar7 * auVar11,8)) * lVar27,
                                auVar12._8_8_ = 0, auVar12._0_8_ = uVar35,
                                uVar38 <= SUB164(auVar8 * auVar12,8)));
                        bVar22 = 0;
LAB_00107146:
                        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
                          StringName::unref();
                        }
                        if (bVar22 == 0) goto LAB_00106e3e;
                        lVar27 = *(long *)(*plVar39 + 0x188);
                        if (lVar27 != 0) goto LAB_00106e90;
LAB_0010717c:
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = local_178._8_8_;
                        local_178 = auVar16 << 0x40;
                      }
LAB_00106ed0:
                      local_e8 = " ";
                      local_1b8 = 0;
                      local_e0 = (void *)0x1;
                      String::parse_latin1((StrRange *)&local_1b8);
                      Node::get_name();
                      if (local_1d8 == 0) {
LAB_001071ac:
                        local_1d0[0] = 0;
                      }
                      else {
                        pcVar4 = *(char **)(local_1d8 + 8);
                        local_1d0[0] = 0;
                        if (pcVar4 == (char *)0x0) {
                          plVar1 = (long *)(*(long *)(local_1d8 + 0x10) + -0x10);
                          if (*(long *)(local_1d8 + 0x10) == 0) goto LAB_001071ac;
                          do {
                            lVar27 = *plVar1;
                            if (lVar27 == 0) goto LAB_001071ac;
                            LOCK();
                            lVar33 = *plVar1;
                            bVar45 = lVar27 == lVar33;
                            if (bVar45) {
                              *plVar1 = lVar27 + 1;
                              lVar33 = lVar27;
                            }
                            UNLOCK();
                          } while (!bVar45);
                          if (lVar33 != -1) {
                            local_1d0[0] = *(ulong *)(local_1d8 + 0x10);
                          }
                        }
                        else {
                          local_e0 = (void *)strlen(pcVar4);
                          local_e8 = pcVar4;
                          String::parse_latin1((StrRange *)local_1d0);
                        }
                      }
                      String::operator+((String *)&local_e8,(String *)local_1d0);
                      String::operator+((String *)&local_1e0,(String *)&local_e8);
                      pcVar4 = local_e8;
                      if (local_e8 != (char *)0x0) {
                        LOCK();
                        plVar1 = (long *)(local_e8 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_e8 = (char *)0x0;
                          Memory::free_static(pcVar4 + -0x10,false);
                        }
                      }
                      uVar35 = local_1d0[0];
                      if (local_1d0[0] != 0) {
                        LOCK();
                        plVar1 = (long *)(local_1d0[0] - 0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_1d0[0] = 0;
                          Memory::free_static((void *)(uVar35 - 0x10),false);
                        }
                      }
                      if ((StringName::configured != '\0') && (local_1d8 != 0)) {
                        StringName::unref();
                      }
                      uVar35 = local_1b8;
                      if (local_1b8 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_1b8 - 0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_1b8 = 0;
                          Memory::free_static((void *)(uVar35 - 0x10),false);
                        }
                      }
                      uVar18 = local_178._0_8_;
                      if (local_178._0_8_ != 0) {
                        LOCK();
                        plVar1 = (long *)(local_178._0_8_ + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          auVar14._8_8_ = 0;
                          auVar14._0_8_ = local_178._8_8_;
                          local_178 = auVar14 << 0x40;
                          Memory::free_static((void *)(uVar18 + -0x10),false);
                        }
                      }
                      StringName::StringName((StringName *)&local_1b8,(String *)&local_1e0,false);
                      local_178._0_8_ = *(undefined8 *)(*plVar39 + 400);
                      HashMap<StringName,Pair<int,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int,int>>>>
                      ::insert((String *)&local_e8,(Pair *)local_118,SUB81((StrRange *)&local_1b8,0)
                              );
                      if ((StringName::configured != '\0') && (local_1b8 != 0)) {
                        StringName::unref();
                      }
                      lVar27 = local_1e0;
                      if (local_1e0 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_1e0 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          local_1e0 = 0;
                          Memory::free_static((void *)(lVar27 + -0x10),false);
                        }
                      }
                      local_268 = local_b8;
                      goto LAB_00106344;
                    }
                  }
                  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
                    StringName::unref();
                  }
                }
LAB_00106344:
                plVar39 = plVar39 + 1;
                if (plVar40 == plVar39) goto LAB_001063b0;
              }
              if (Variant::needs_deinit[(int)local_58] == '\0') goto LAB_00106344;
              plVar39 = plVar39 + 1;
              Variant::_clear_internal();
            } while (plVar40 != plVar39);
LAB_001063b0:
            Node::get_name();
            HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
            ::insert((String *)&local_e8,local_148,SUB81((StrRange *)local_178,0));
            if ((StringName::configured != '\0') && (local_178._0_8_ != 0)) {
              StringName::unref();
            }
            pvVar37 = pvStack_a0;
            if (local_268 != (long *)0x0) {
              uVar35 = (ulong)uStack_94;
              if (uStack_94 != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)local_98 * 4) != 0) {
                  memset(pvStack_a0,0,
                         (ulong)*(uint *)(hash_table_size_primes + (ulong)local_98 * 4) * 4);
                }
                plVar40 = local_268;
                do {
                  if ((StringName::configured != '\0') && (*plVar40 != 0)) {
                    StringName::unref();
                  }
                  plVar40 = plVar40 + 1;
                } while (local_268 + uVar35 != plVar40);
              }
              Memory::free_static(local_268,false);
              Memory::free_static(local_a8,false);
              Memory::free_static(pvStack_b0,false);
              Memory::free_static(pvVar37,false);
              iVar23 = local_278 + -1;
              if (local_278 == 0) break;
              goto LAB_00106190;
            }
          }
        }
        iVar23 = local_278 + -1;
      } while (local_278 != 0);
      local_278 = local_278 + -1;
      iVar23 = local_188._4_4_;
      if (local_188._4_4_ != 0) {
        _layering((HashSet *)&local_e8,(HashMap *)this);
        if (local_bc != 1) {
          _crossing_minimisation(this,(HashMap *)&local_e8,(HashMap *)local_148);
        }
        Dictionary::Dictionary(local_1f8);
        Dictionary::Dictionary(local_1f0);
        Dictionary::Dictionary(local_1e8);
        Dictionary::Dictionary((Dictionary *)&local_1e0);
        iVar24 = 1;
        _horizontal_alignment
                  (this,local_1f8,local_1f0,(HashMap *)&local_e8,(HashMap *)local_148,
                   (HashSet *)local_1a8);
        pvStack_b0 = (void *)0x0;
        local_a8 = (void *)0x0;
        local_90 = _LC30;
        local_80 = CONCAT44(_UNK_0010cd94,_LC28);
        pvStack_a0 = (void *)0x0;
        local_98 = 0;
        uStack_94 = 0;
        Dictionary::Dictionary((Dictionary *)&local_1d8);
        local_178 = (undefined1  [16])0x0;
        local_158 = _LC30;
        local_168 = (undefined1  [16])0x0;
        pSVar42 = (StringName *)local_1a8._0_8_;
        while( true ) {
          Variant::Variant((Variant *)&local_58,0.0);
          Variant::Variant((Variant *)&local_78,pSVar42);
          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)&local_1d8);
          if (pVVar29 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar29] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar29 = 0;
            *(int *)pVVar29 = (int)local_58;
            *(undefined8 *)(pVVar29 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar29 + 0x10) = local_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,pSVar42);
          Variant::Variant((Variant *)&local_78,pSVar42);
          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_1e8);
          if (pVVar29 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar29] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar29 = 0;
            *(int *)pVVar29 = (int)local_58;
            *(undefined8 *)(pVVar29 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar29 + 0x10) = local_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,_LC28);
          Variant::Variant((Variant *)&local_78,pSVar42);
          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)&local_1e0);
          if (pVVar29 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar29] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar29 = 0;
            *(int *)pVVar29 = (int)local_58;
            *(undefined1 (*) [16])(pVVar29 + 8) = local_50;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
          ::insert((Variant *)&local_1b8,(Vector2 *)&local_b8,SUB81(pSVar42,0));
          Variant::Variant((Variant *)&local_58,pSVar42);
          Dictionary::operator[]((Variant *)local_1f8);
          Variant::operator_cast_to_StringName((Variant *)&local_1b8);
          uVar17 = local_1b8;
          uVar35 = *(ulong *)pSVar42;
          if ((StringName::configured != '\0') && (local_1b8 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if (uVar17 == uVar35) {
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                      ((Variant *)&local_1b8);
          }
          if (iVar23 <= iVar24) break;
          iVar24 = iVar24 + 1;
          pSVar42 = pSVar42 + 8;
        }
        _calculate_inner_shifts
                  (this,(Dictionary *)&local_1d8,local_1f8,local_200,local_1f0,(HashSet *)local_178,
                   local_118);
        iVar23 = local_158._4_4_;
        local_288 = (StringName *)0x0;
        if (local_158._4_4_ != 0) {
          local_288 = (StringName *)local_178._0_8_;
          pSVar43 = (StringName *)local_178._0_8_;
          for (iVar24 = 1;
              _place_block(this,pSVar43,_LC35,(HashMap *)&local_e8,local_1f8,local_1f0,local_200,
                           (Dictionary *)&local_1d8,local_1e8,(Dictionary *)&local_1e0,
                           (HashMap *)&local_b8), iVar24 < iVar23; iVar24 = iVar24 + 1) {
            pSVar43 = pSVar43 + 8;
          }
          local_278 = 0;
        }
        local_204 = 0;
        lVar27 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                 ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                               *)&local_e8,&local_204);
        pSVar42 = *(StringName **)(lVar27 + 8);
        if (pSVar42 != (StringName *)0x0) {
          lVar27 = *(long *)(pSVar42 + -8);
          if (lVar27 < 1) goto LAB_00107480;
          Variant::Variant((Variant *)&local_78,pSVar42);
          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
          pOVar28 = Variant::operator_cast_to_Object_(pVVar29);
          if (pOVar28 != (Object *)0x0) {
            __dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo);
          }
          GraphElement::get_position_offset();
          local_1d0[0] = local_1d0[0] & 0xffffffff00000000;
          lVar27 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                   ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                                 *)&local_e8,(int *)local_1d0);
          pSVar43 = *(StringName **)(lVar27 + 8);
          if (pSVar43 != (StringName *)0x0) {
            lVar27 = *(long *)(pSVar43 + -8);
            if (lVar27 < 1) goto LAB_00107480;
            lVar27 = HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                     ::operator[]((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                   *)&local_b8,pSVar43);
            fVar48 = *(float *)(lVar27 + 4);
            local_1b8 = local_1b8 & 0xffffffff00000000;
            lVar27 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                     ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                                   *)&local_e8,(int *)&local_1b8);
            pSVar42 = *(StringName **)(lVar27 + 8);
            if (pSVar42 != (StringName *)0x0) {
              lVar27 = *(long *)(pSVar42 + -8);
              if (lVar27 < 1) goto LAB_00107480;
              Variant::Variant((Variant *)&local_58,pSVar42);
              pVVar29 = (Variant *)Dictionary::operator[]((Variant *)&local_1d8);
              fVar46 = Variant::operator_cast_to_float(pVVar29);
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78] != '\0') {
                Variant::_clear_internal();
              }
              local_1b8 = local_1b8 & 0xffffffff00000000;
              lVar27 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                       ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                                     *)&local_e8,(int *)&local_1b8);
              pSVar42 = *(StringName **)(lVar27 + 8);
              if (pSVar42 != (StringName *)0x0) {
                lVar27 = *(long *)(pSVar42 + -8);
                if (lVar27 < 1) goto LAB_00107480;
                Variant::Variant((Variant *)&local_58,pSVar42);
                pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
                pOVar28 = Variant::operator_cast_to_Object_(pVVar29);
                if (pOVar28 != (Object *)0x0) {
                  __dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
                }
                fVar47 = (float)GraphElement::get_position_offset();
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if ((local_288 != (StringName *)0x0) || (local_278 != -1)) {
                  pSVar42 = (StringName *)(local_288 + (long)local_278 * 8);
                  do {
                    StringName::StringName((StringName *)local_1d0,pSVar42);
                    lVar27 = HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                             ::operator[]((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                           *)&local_b8,pSVar42);
                    fVar3 = *(float *)(lVar27 + 4);
                    do {
                      while( true ) {
                        local_78 = 0;
                        Variant::Variant((Variant *)&local_58,(StringName *)local_1d0);
                        pVVar29 = (Variant *)Dictionary::operator[]((Variant *)&local_1d8);
                        local_74 = Variant::operator_cast_to_float(pVVar29);
                        local_74 = local_74 + (extraout_XMM0_Db - (fVar46 + fVar48)) + fVar3;
                        if (Variant::needs_deinit[(int)local_58] != '\0') {
                          Variant::_clear_internal();
                        }
                        HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                        ::insert((Variant *)&local_1b8,(Vector2 *)&local_b8,
                                 SUB81((StringName *)local_1d0,0));
                        Variant::Variant((Variant *)&local_58,(StringName *)local_1d0);
                        Dictionary::operator[]((Variant *)local_1f0);
                        Variant::operator_cast_to_StringName((Variant *)&local_1b8);
                        if (local_1d0[0] != local_1b8) break;
                        if ((StringName::configured == '\0') || (local_1b8 == 0)) goto LAB_00106b38;
                        StringName::unref();
                        if (Variant::needs_deinit[(int)local_58] == '\0') goto LAB_00106b4b;
LAB_00106c29:
                        Variant::_clear_internal();
                        if (local_1d0[0] == *(ulong *)pSVar42) goto LAB_00106c48;
                      }
                      StringName::unref();
                      local_1d0[0] = local_1b8;
LAB_00106b38:
                      if (Variant::needs_deinit[(int)local_58] != '\0') goto LAB_00106c29;
LAB_00106b4b:
                    } while (local_1d0[0] != *(ulong *)pSVar42);
LAB_00106c48:
                    if ((local_1d0[0] != 0) && (StringName::configured != '\0')) {
                      StringName::unref();
                    }
                    local_278 = local_278 + 1;
                    if (iVar23 <= local_278) break;
                    pSVar42 = pSVar42 + 8;
                  } while( true );
                }
                uVar32 = 0;
                if (local_bc != 0) {
                  do {
                    local_1d0[0] = CONCAT44(local_1d0[0]._4_4_,uVar32);
                    lVar27 = HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                             ::operator[]((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                                           *)&local_e8,(int *)local_1d0);
                    local_1b0 = 0;
                    fVar48 = _LC35;
                    if ((*(long *)(lVar27 + 8) != 0) &&
                       (CowData<StringName>::_ref
                                  ((CowData<StringName> *)&local_1b0,(CowData *)(lVar27 + 8)),
                       lVar33 = local_1b0, fVar48 = _LC35, local_1b0 != 0)) {
                      if (*(long *)(local_1b0 + -8) < 1) {
                        local_288._0_4_ = 0.0;
                      }
                      else {
                        local_288._0_4_ = 0.0;
                        lVar27 = 0;
                        do {
                          Variant::Variant((Variant *)&local_58,(StringName *)(lVar33 + lVar27 * 8))
                          ;
                          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
                          pOVar28 = Variant::operator_cast_to_Object_(pVVar29);
                          if (pOVar28 != (Object *)0x0) {
                            __dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
                          }
                          fVar48 = (float)Control::get_size();
                          if (Variant::needs_deinit[(int)local_58] != '\0') {
                            Variant::_clear_internal();
                          }
                          lVar30 = *(long *)(lVar33 + -8);
                          lVar27 = lVar27 + 1;
                          if (local_288._0_4_ <= fVar48) {
                            local_288._0_4_ = fVar48;
                          }
                        } while (lVar27 < lVar30);
                        for (lVar44 = 0; lVar44 < lVar30; lVar44 = lVar44 + 1) {
                          pSVar42 = (StringName *)(lVar33 + lVar44 * 8);
                          Variant::Variant((Variant *)&local_58,pSVar42);
                          pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
                          pOVar28 = Variant::operator_cast_to_Object_(pVVar29);
                          if (pOVar28 != (Object *)0x0) {
                            __dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
                          }
                          fVar48 = (float)Control::get_size();
                          if (Variant::needs_deinit[(int)local_58] != '\0') {
                            Variant::_clear_internal();
                          }
                          lVar27 = *(long *)(lVar33 + -8);
                          if (lVar27 <= lVar44) goto LAB_0010749d;
                          puVar31 = (undefined8 *)
                                    HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                    ::operator[]((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                                  *)&local_b8,pSVar42);
                          fVar46 = fVar47;
                          if ((fVar48 != local_288._0_4_) && (fVar48 < _LC39 * local_288._0_4_)) {
                            if (uVar32 == 0 && (int)lVar44 == 0) {
                              fVar46 = fVar47 - (local_288._0_4_ - fVar48);
                            }
                            fVar47 = (fVar46 + local_288._0_4_) - fVar48;
                          }
                          lVar27 = *(long *)(lVar33 + -8);
                          local_58 = CONCAT44((int)((ulong)*puVar31 >> 0x20),fVar47);
                          if (lVar27 <= lVar44) goto LAB_0010749d;
                          HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                          ::insert((StringName *)local_1d0,(Vector2 *)&local_b8,SUB81(pSVar42,0));
                          lVar30 = *(long *)(lVar33 + -8);
                          fVar47 = fVar46;
                        }
                      }
                      fVar48 = local_288._0_4_ + _LC35;
                    }
                    fVar47 = fVar48 + fVar47;
                    CowData<StringName>::_unref((CowData<StringName> *)&local_1b0);
                    uVar32 = uVar32 + 1;
                  } while (uVar32 < local_bc);
                }
                plVar40 = *(long **)(this + 0x180);
                if ((arrange_nodes()::{lambda()#1}::operator()()::sname == '\0') &&
                   (iVar23 = __cxa_guard_acquire(&arrange_nodes()::{lambda()#1}::operator()()::sname
                                                ), iVar23 != 0)) {
                  _scs_create((char *)&arrange_nodes()::{lambda()#1}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &arrange_nodes()::{lambda()#1}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&arrange_nodes()::{lambda()#1}::operator()()::sname);
                }
                local_58 = 0;
                local_50 = (undefined1  [16])0x0;
                (**(code **)(*plVar40 + 0xd0))
                          (plVar40,&arrange_nodes()::{lambda()#1}::operator()()::sname,0,0);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                iVar23 = local_188._4_4_;
                if (local_188._4_4_ != 0) {
                  iVar24 = 1;
                  pSVar42 = (StringName *)local_1a8._0_8_;
                  while( true ) {
                    Variant::Variant((Variant *)&local_58,pSVar42);
                    pVVar29 = (Variant *)Dictionary::operator[]((Variant *)local_200);
                    pOVar28 = Variant::operator_cast_to_Object_(pVVar29);
                    if (pOVar28 != (Object *)0x0) {
                      pOVar28 = (Object *)
                                __dynamic_cast(pOVar28,&Object::typeinfo,&GraphNode::typeinfo,0);
                    }
                    if (Variant::needs_deinit[(int)local_58] != '\0') {
                      Variant::_clear_internal();
                    }
                    GraphElement::set_drag(SUB81(pOVar28,0));
                    puVar31 = (undefined8 *)
                              HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                              ::operator[]((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                                            *)&local_b8,pSVar42);
                    local_58 = *puVar31;
                    cVar21 = GraphEdit::is_snapping_enabled();
                    if (cVar21 != '\0') {
                      iVar26 = GraphEdit::get_snapping_distance();
                      local_58 = Vector2::snappedf((float)iVar26);
                    }
                    GraphElement::set_position_offset((Vector2 *)pOVar28);
                    GraphElement::set_drag(SUB81(pOVar28,0));
                    if (iVar23 <= iVar24) break;
                    iVar24 = iVar24 + 1;
                    pSVar42 = pSVar42 + 8;
                  }
                }
                plVar40 = *(long **)(this + 0x180);
                if ((arrange_nodes()::{lambda()#2}::operator()()::sname == '\0') &&
                   (iVar23 = __cxa_guard_acquire(&arrange_nodes()::{lambda()#2}::operator()()::sname
                                                ), iVar23 != 0)) {
                  _scs_create((char *)&arrange_nodes()::{lambda()#2}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &arrange_nodes()::{lambda()#2}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&arrange_nodes()::{lambda()#2}::operator()()::sname);
                }
                local_58 = 0;
                local_50 = (undefined1  [16])0x0;
                (**(code **)(*plVar40 + 0xd0))
                          (plVar40,&arrange_nodes()::{lambda()#2}::operator()()::sname,0,0);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                this[0x188] = (GraphEditArranger)0x0;
                HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                ~HashSet((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                          *)local_178);
                Dictionary::~Dictionary((Dictionary *)&local_1d8);
                if (pvStack_b0 != (void *)0x0) {
                  pvVar37 = pvStack_b0;
                  if (local_90._4_4_ != 0) {
                    uVar32 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
                    if (uVar32 == 0) {
                      local_90 = local_90 & 0xffffffff;
                      pvStack_a0 = (void *)0x0;
                      local_98 = 0;
                      uStack_94 = 0;
                    }
                    else {
                      lVar27 = 0;
                      do {
                        if (*(int *)((long)local_a8 + lVar27) != 0) {
                          bVar45 = StringName::configured != '\0';
                          *(int *)((long)local_a8 + lVar27) = 0;
                          pvVar37 = *(void **)((long)pvVar37 + lVar27 * 2);
                          if ((bVar45) && (*(long *)((long)pvVar37 + 0x10) != 0)) {
                            StringName::unref();
                          }
                          Memory::free_static(pvVar37,false);
                          *(undefined8 *)((long)pvStack_b0 + lVar27 * 2) = 0;
                          pvVar37 = pvStack_b0;
                        }
                        lVar27 = lVar27 + 4;
                      } while (lVar27 != (ulong)uVar32 * 4);
                      local_90 = local_90 & 0xffffffff;
                      pvStack_a0 = (void *)0x0;
                      local_98 = 0;
                      uStack_94 = 0;
                      if (pvVar37 == (void *)0x0) goto LAB_00107ddc;
                    }
                  }
                  Memory::free_static(pvVar37,false);
                  Memory::free_static(local_a8,false);
                }
LAB_00107ddc:
                Dictionary::~Dictionary((Dictionary *)&local_1e0);
                Dictionary::~Dictionary(local_1e8);
                Dictionary::~Dictionary(local_1f0);
                Dictionary::~Dictionary(local_1f8);
                if (local_e0 != (void *)0x0) {
                  pvVar37 = local_e0;
                  if (local_bc != 0) {
                    uVar32 = *(uint *)(hash_table_size_primes + (ulong)local_c0 * 4);
                    if (uVar32 == 0) {
                      local_bc = 0;
                      local_d0 = (undefined1  [16])0x0;
                    }
                    else {
                      lVar27 = 0;
                      do {
                        if (*(int *)((long)local_d8 + lVar27) != 0) {
                          pvVar37 = *(void **)((long)pvVar37 + lVar27 * 2);
                          *(int *)((long)local_d8 + lVar27) = 0;
                          CowData<StringName>::_unref((CowData<StringName> *)((long)pvVar37 + 0x20))
                          ;
                          Memory::free_static(pvVar37,false);
                          *(undefined8 *)((long)local_e0 + lVar27 * 2) = 0;
                          pvVar37 = local_e0;
                        }
                        lVar27 = lVar27 + 4;
                      } while ((ulong)uVar32 * 4 - lVar27 != 0);
                      local_bc = 0;
                      local_d0 = (undefined1  [16])0x0;
                      if (pvVar37 == (void *)0x0) goto LAB_00107eb3;
                    }
                  }
                  Memory::free_static(pvVar37,false);
                  Memory::free_static(local_d8,false);
                }
LAB_00107eb3:
                CowData<Ref<GraphEdit::Connection>>::_unref
                          ((CowData<Ref<GraphEdit::Connection>> *)&local_1c0);
                uVar18 = local_110._0_8_;
                if ((undefined8 *)local_110._0_8_ != (undefined8 *)0x0) {
                  uVar19 = local_110._8_8_;
                  if ((local_f0._4_4_ != 0) &&
                     (*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4) != 0)) {
                    piVar2 = (int *)(local_110._8_8_ +
                                    (ulong)*(uint *)(hash_table_size_primes +
                                                    (local_f0 & 0xffffffff) * 4) * 4);
                    piVar34 = (int *)local_110._8_8_;
                    puVar31 = (undefined8 *)local_110._0_8_;
                    do {
                      if (*piVar34 != 0) {
                        bVar45 = StringName::configured != '\0';
                        pvVar37 = (void *)*puVar31;
                        *piVar34 = 0;
                        if ((bVar45) && (*(long *)((long)pvVar37 + 0x10) != 0)) {
                          StringName::unref();
                        }
                        Memory::free_static(pvVar37,false);
                        *puVar31 = 0;
                      }
                      piVar34 = piVar34 + 1;
                      puVar31 = puVar31 + 1;
                    } while (piVar2 != piVar34);
                  }
                  Memory::free_static((void *)uVar18,false);
                  Memory::free_static((void *)uVar19,false);
                }
                HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                ::~HashMap((HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                            *)local_148);
                goto LAB_00107832;
              }
            }
          }
        }
        lVar27 = 0;
LAB_00107480:
        lVar44 = 0;
LAB_0010749d:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar44,lVar27,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      uVar19 = local_110._0_8_;
      uVar18 = local_140._0_8_;
      this[0x188] = (GraphEditArranger)0x0;
      CowData<Ref<GraphEdit::Connection>>::_unref((CowData<Ref<GraphEdit::Connection>> *)&local_1c0)
      ;
      if ((undefined8 *)uVar19 != (undefined8 *)0x0) {
        uVar20 = local_110._8_8_;
        if ((local_f0._4_4_ != 0) &&
           (*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4) != 0)) {
          piVar2 = (int *)(local_110._8_8_ +
                          (ulong)*(uint *)(hash_table_size_primes + (local_f0 & 0xffffffff) * 4) * 4
                          );
          piVar34 = (int *)local_110._8_8_;
          puVar31 = (undefined8 *)uVar19;
          do {
            if (*piVar34 != 0) {
              bVar45 = StringName::configured != '\0';
              pvVar37 = (void *)*puVar31;
              *piVar34 = 0;
              if ((bVar45) && (*(long *)((long)pvVar37 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar37,false);
              *puVar31 = 0;
            }
            piVar34 = piVar34 + 1;
            puVar31 = puVar31 + 1;
          } while (piVar2 != piVar34);
        }
        Memory::free_static((void *)uVar19,false);
        Memory::free_static((void *)uVar20,false);
      }
      if ((undefined8 *)uVar18 != (undefined8 *)0x0) {
        uVar19 = local_140._8_8_;
        if ((local_120._4_4_ != 0) &&
           (*(uint *)(hash_table_size_primes + (local_120 & 0xffffffff) * 4) != 0)) {
          piVar2 = (int *)(local_140._8_8_ +
                          (ulong)*(uint *)(hash_table_size_primes + (local_120 & 0xffffffff) * 4) *
                          4);
          piVar34 = (int *)local_140._8_8_;
          puVar31 = (undefined8 *)uVar18;
          do {
            if (*piVar34 != 0) {
              pvVar37 = (void *)*puVar31;
              *piVar34 = 0;
              pvVar41 = *(void **)((long)pvVar37 + 0x18);
              if (pvVar41 != (void *)0x0) {
                if ((*(int *)((long)pvVar37 + 0x3c) != 0) &&
                   ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar37 + 0x38) * 4)
                     == 0 || (memset(*(void **)((long)pvVar37 + 0x30),0,
                                     (ulong)*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)((long)pvVar37 + 0x38) * 4) * 4
                                    ), *(int *)((long)pvVar37 + 0x3c) != 0)))) {
                  lVar27 = 0;
                  do {
                    if ((StringName::configured != '\0') &&
                       (*(long *)((long)pvVar41 + lVar27 * 8) != 0)) {
                      StringName::unref();
                      pvVar41 = *(void **)((long)pvVar37 + 0x18);
                    }
                    lVar27 = lVar27 + 1;
                  } while ((uint)lVar27 < *(uint *)((long)pvVar37 + 0x3c));
                  *(undefined4 *)((long)pvVar37 + 0x3c) = 0;
                  if (pvVar41 == (void *)0x0) goto LAB_001077d3;
                }
                Memory::free_static(pvVar41,false);
                Memory::free_static(*(void **)((long)pvVar37 + 0x28),false);
                Memory::free_static(*(void **)((long)pvVar37 + 0x20),false);
                Memory::free_static(*(void **)((long)pvVar37 + 0x30),false);
              }
LAB_001077d3:
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar37 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar37,false);
              *puVar31 = 0;
            }
            piVar34 = piVar34 + 1;
            puVar31 = puVar31 + 1;
          } while (piVar34 != piVar2);
        }
        Memory::free_static((void *)uVar18,false);
        Memory::free_static((void *)uVar19,false);
      }
    }
LAB_00107832:
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               local_1a8);
    Dictionary::~Dictionary(local_200);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001080e7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar1 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
        StringName::unref();
        pvVar2 = *(void **)this;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar2,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::~HashMap() */

void __thiscall
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::~HashMap(HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar5) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar5 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar5) = 0;
          pvVar4 = *(void **)((long)pvVar3 + 0x18);
          if (pvVar4 != (void *)0x0) {
            if ((*(int *)((long)pvVar3 + 0x3c) != 0) &&
               ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar3 + 0x38) * 4) == 0
                || (memset(*(void **)((long)pvVar3 + 0x30),0,
                           (ulong)*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)((long)pvVar3 + 0x38) * 4) << 2),
                   *(int *)((long)pvVar3 + 0x3c) != 0)))) {
              lVar2 = 0;
              do {
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + lVar2 * 8) != 0))
                {
                  StringName::unref();
                  pvVar4 = *(void **)((long)pvVar3 + 0x18);
                }
                lVar2 = lVar2 + 1;
              } while ((uint)lVar2 < *(uint *)((long)pvVar3 + 0x3c));
              *(undefined4 *)((long)pvVar3 + 0x3c) = 0;
              if (pvVar4 == (void *)0x0) goto LAB_00108495;
            }
            Memory::free_static(pvVar4,false);
            Memory::free_static(*(void **)((long)pvVar3 + 0x28),false);
            Memory::free_static(*(void **)((long)pvVar3 + 0x20),false);
            Memory::free_static(*(void **)((long)pvVar3 + 0x30),false);
          }
LAB_00108495:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
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
    if (*in_RSI != 0) goto LAB_0010865c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010865c:
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
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00108aa8;
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
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC5) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00108985;
LAB_00108ae6:
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
      goto LAB_00108aa8;
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
    if (lVar30 == 0) goto LAB_00108ae6;
LAB_00108985:
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
LAB_00108aa8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Pair<int, int>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Pair<int, int> > > >::insert(StringName const&,
   Pair<int, int> const&, bool) */

StringName *
HashMap<StringName,Pair<int,int>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Pair<int,int>>>>
::insert(StringName *param_1,Pair *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long *plVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long lVar34;
  void *pvVar35;
  long *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  StringName *pSVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  long *plVar47;
  long in_FS_OFFSET;
  bool bVar48;
  long *local_b0;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar30;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar30 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar4 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar4,0,uVar32);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_00108cc8;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_00108df0;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00108cd4;
LAB_00108e16:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (long *)0x0;
      goto LAB_00108da9;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar3 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar4 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar34 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar31);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar30 * lVar38;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar39 = SUB168(auVar9 * auVar21,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar9 * auVar21,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar44 * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar10 * auVar22,8)) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar46 = SUB164(auVar11 * auVar23,8);
            uVar42 = uVar33;
            if (uVar46 < uVar43) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar39 = SUB168(auVar12 * auVar24,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar12 * auVar24,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar3 != uVar32);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
LAB_00108cc8:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_00108cd4:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar46 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar31 * lVar34;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      lVar38 = SUB168(auVar5 * auVar17,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar43 = SUB164(auVar5 * auVar17,8);
      if (uVar44 != 0) {
        do {
          if ((uVar31 == uVar44) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            local_b0[3] = *in_RCX;
            goto LAB_00108da9;
          }
          uVar46 = uVar46 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar32;
          lVar38 = SUB168(auVar6 * auVar18,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar6 * auVar18,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar34, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar43) - SUB164(auVar7 * auVar19,8)) * lVar34,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar32, uVar46 <= SUB164(auVar8 * auVar20,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_00108df0:
    if ((float)uVar30 * __LC5 < (float)(iVar36 + 1)) goto LAB_00108e16;
  }
  StringName::StringName((StringName *)&local_58,pSVar37);
  local_50 = *in_RCX;
  local_b0 = (long *)operator_new(0x20,"");
  *local_b0 = 0;
  local_b0[1] = 0;
  StringName::StringName((StringName *)(local_b0 + 2),(StringName *)&local_58);
  bVar48 = StringName::configured != '\0';
  local_b0[3] = local_50;
  if ((bVar48) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_b0;
    *(long **)(param_2 + 0x20) = local_b0;
LAB_001090b7:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_001090c3;
LAB_001091c4:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar34 = *(long *)(param_2 + 0x18);
      *(long **)(lVar34 + 8) = local_b0;
      *local_b0 = lVar34;
      *(long **)(param_2 + 0x18) = local_b0;
      goto LAB_001090b7;
    }
    *puVar2 = local_b0;
    local_b0[1] = (long)puVar2;
    lVar34 = *(long *)pSVar37;
    *(long **)(param_2 + 0x20) = local_b0;
    if (lVar34 == 0) goto LAB_001091c4;
LAB_001090c3:
    uVar30 = *(uint *)(lVar34 + 0x20);
  }
  lVar34 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar44 = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar3);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar32 * lVar38;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar45;
  lVar40 = SUB168(auVar13 * auVar25,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar13 * auVar25,8);
  uVar31 = *puVar1;
  plVar29 = local_b0;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar3 + iVar36) - SUB164(auVar14 * auVar26,8)) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    uVar30 = SUB164(auVar15 * auVar27,8);
    plVar47 = plVar29;
    if (uVar30 < uVar44) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar2 = (undefined8 *)(lVar39 + lVar40 * 8);
      plVar47 = (long *)*puVar2;
      *puVar2 = plVar29;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar44 = uVar44 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    lVar40 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar16 * auVar28,8);
    plVar29 = plVar47;
    uVar31 = *puVar1;
  }
  *(long **)(lVar39 + lVar40 * 8) = plVar29;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00108da9:
  *(long **)param_1 = local_b0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::insert(StringName const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&, bool) */

StringName *
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::insert(StringName *param_1,HashSet *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
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
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long *plVar34;
  ulong uVar35;
  void *pvVar36;
  long lVar37;
  long *in_RCX;
  int iVar38;
  undefined7 in_register_00000011;
  StringName *pSVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  undefined8 uVar44;
  long lVar45;
  char in_R8B;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  long *plVar49;
  long in_FS_OFFSET;
  long local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  pSVar39 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar43 = (ulong)uVar30;
    uVar32 = uVar43 * 4;
    uVar35 = uVar43 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar36 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 8) = pvVar36;
    if (uVar30 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)pvVar36 + uVar35)) && (pvVar36 < (void *)((long)pvVar5 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar36 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar43 != uVar32);
      }
      else {
        memset(pvVar5,0,uVar32);
        memset(pvVar36,0,uVar35);
      }
      goto LAB_00109386;
    }
    iVar38 = *(int *)(param_2 + 0x2c);
    if (pvVar36 == (void *)0x0) goto LAB_00109537;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00109392;
LAB_0010955d:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      plVar34 = (long *)0x0;
      goto LAB_001099e7;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar43 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar36 = *(void **)(param_2 + 8);
    uVar32 = uVar43 * 4;
    uVar35 = uVar43 * 8;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar43 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar35);
      }
    }
    if (uVar3 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar5 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar45 = *(long *)(param_2 + 0x10);
          uVar46 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar35 = CONCAT44(0,uVar31);
          lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar30 * lVar40;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar35;
          lVar41 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar45 + lVar41 * 4);
          iVar38 = SUB164(auVar10 * auVar22,8);
          uVar47 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar36 + uVar32 * 8);
          while (uVar47 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar47 * lVar40;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar35;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar31 + iVar38) - SUB164(auVar11 * auVar23,8)) * lVar40;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar35;
            uVar48 = SUB164(auVar12 * auVar24,8);
            uVar44 = uVar33;
            if (uVar48 < uVar46) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar41 * 8);
              uVar44 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar47;
              uVar46 = uVar48;
            }
            uVar46 = uVar46 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar38 + 1) * lVar40;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar35;
            lVar41 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar45 + lVar41 * 4);
            iVar38 = SUB164(auVar13 * auVar25,8);
            uVar33 = uVar44;
            uVar47 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar41 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar3);
      Memory::free_static(pvVar36,false);
      Memory::free_static(pvVar5,false);
    }
  }
  else {
LAB_00109386:
    iVar38 = *(int *)(param_2 + 0x2c);
    if (iVar38 != 0) {
LAB_00109392:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar39 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar39 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar48 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar31 * lVar45;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar32;
      lVar40 = SUB168(auVar6 * auVar18,8);
      uVar47 = *(uint *)(*(long *)(param_2 + 0x10) + lVar40 * 4);
      uVar46 = SUB164(auVar6 * auVar18,8);
      if (uVar47 != 0) {
        do {
          uVar35 = (ulong)uVar46;
          if ((uVar31 == uVar47) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar40 * 8) + 0x10) == *(long *)pSVar39))
          {
            plVar4 = *(long **)(*(long *)(param_2 + 8) + uVar35 * 8);
            plVar34 = plVar4;
            if (in_RCX == plVar4 + 3) goto LAB_001099e7;
            pvVar36 = (void *)plVar4[3];
            if (pvVar36 == (void *)0x0) goto LAB_001094fe;
            if ((*(int *)((long)plVar4 + 0x3c) == 0) ||
               ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar4 + 7) * 4) != 0 &&
                (memset((void *)plVar4[6],0,
                        (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar4 + 7) * 4)
                        * 4), *(int *)((long)plVar4 + 0x3c) == 0)))) goto LAB_00109c95;
            lVar45 = 0;
            do {
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar36 + lVar45 * 8) != 0))
              {
                StringName::unref();
                pvVar36 = (void *)plVar4[3];
              }
              lVar45 = lVar45 + 1;
            } while ((uint)lVar45 < *(uint *)((long)plVar4 + 0x3c));
            *(undefined4 *)((long)plVar4 + 0x3c) = 0;
            if (pvVar36 != (void *)0x0) {
LAB_00109c95:
              Memory::free_static(pvVar36,false);
              Memory::free_static((void *)plVar4[5],false);
              Memory::free_static((void *)plVar4[4],false);
              Memory::free_static((void *)plVar4[6],false);
              *(undefined1 (*) [16])(plVar4 + 3) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(plVar4 + 5) = (undefined1  [16])0x0;
            }
LAB_001094fe:
            uVar32 = in_RCX[4];
            plVar4[7] = uVar32;
            if ((int)(uVar32 >> 0x20) == 0) {
              plVar34 = *(long **)(*(long *)(param_2 + 8) + uVar35 * 8);
            }
            else {
              uVar30 = *(uint *)(hash_table_size_primes + (uVar32 & 0xffffffff) * 4);
              uVar32 = (ulong)uVar30 * 4;
              lVar45 = Memory::alloc_static(uVar32,false);
              lVar40 = 0;
              plVar4[6] = lVar45;
              lVar45 = Memory::alloc_static((ulong)uVar30 * 8,false);
              plVar4[3] = lVar45;
              lVar45 = Memory::alloc_static(uVar32,false);
              plVar4[5] = lVar45;
              lVar45 = Memory::alloc_static(uVar32,false);
              plVar4[4] = lVar45;
              if (*(int *)((long)plVar4 + 0x3c) != 0) {
                do {
                  StringName::StringName
                            ((StringName *)(lVar40 * 8 + plVar4[3]),
                             (StringName *)(*in_RCX + lVar40 * 8));
                  *(undefined4 *)(plVar4[5] + lVar40 * 4) = *(undefined4 *)(in_RCX[2] + lVar40 * 4);
                  lVar40 = lVar40 + 1;
                } while ((uint)lVar40 < *(uint *)((long)plVar4 + 0x3c));
              }
              plVar34 = *(long **)(*(long *)(param_2 + 8) + uVar35 * 8);
              if (uVar30 != 0) {
                lVar45 = in_RCX[3];
                lVar40 = plVar4[6];
                lVar37 = 0;
                lVar41 = in_RCX[1];
                lVar42 = plVar4[4];
                do {
                  *(undefined4 *)(lVar40 + lVar37) = *(undefined4 *)(lVar45 + lVar37);
                  *(undefined4 *)(lVar42 + lVar37) = *(undefined4 *)(lVar41 + lVar37);
                  lVar37 = lVar37 + 4;
                } while (uVar32 - lVar37 != 0);
              }
            }
            goto LAB_001099e7;
          }
          uVar48 = uVar48 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar46 + 1) * lVar45;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar32;
          lVar40 = SUB168(auVar7 * auVar19,8);
          uVar47 = *(uint *)(*(long *)(param_2 + 0x10) + lVar40 * 4);
          uVar46 = SUB164(auVar7 * auVar19,8);
        } while ((uVar47 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar47 * lVar45, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar32, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar3 + uVar46) - SUB164(auVar8 * auVar20,8)) * lVar45,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar32, uVar48 <= SUB164(auVar9 * auVar21,8)));
      }
      iVar38 = *(int *)(param_2 + 0x2c);
    }
LAB_00109537:
    if ((float)uVar30 * __LC5 < (float)(iVar38 + 1)) goto LAB_0010955d;
  }
  StringName::StringName((StringName *)&local_78,pSVar39);
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = in_RCX[4];
  if ((int)(local_50 >> 0x20) != 0) {
    uVar30 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
    uVar32 = (ulong)uVar30 * 4;
    uVar33 = Memory::alloc_static(uVar32,false);
    lVar45 = 0;
    local_60._8_8_ = uVar33;
    uVar33 = Memory::alloc_static((ulong)uVar30 * 8,false);
    local_70._0_8_ = uVar33;
    local_60._0_8_ = Memory::alloc_static(uVar32,false);
    uVar33 = Memory::alloc_static(uVar32,false);
    local_70._8_8_ = uVar33;
    if (local_50._4_4_ != 0) {
      do {
        StringName::StringName
                  ((StringName *)(lVar45 * 8 + local_70._0_8_),(StringName *)(*in_RCX + lVar45 * 8))
        ;
        *(undefined4 *)(local_60._0_8_ + lVar45 * 4) = *(undefined4 *)(in_RCX[2] + lVar45 * 4);
        lVar45 = lVar45 + 1;
      } while ((uint)lVar45 < local_50._4_4_);
    }
    if (uVar30 != 0) {
      lVar45 = in_RCX[3];
      lVar40 = in_RCX[1];
      lVar41 = 0;
      do {
        *(undefined4 *)(local_60._8_8_ + lVar41) = *(undefined4 *)(lVar45 + lVar41);
        *(undefined4 *)(local_70._8_8_ + lVar41) = *(undefined4 *)(lVar40 + lVar41);
        lVar41 = lVar41 + 4;
      } while (uVar32 - lVar41 != 0);
    }
  }
  plVar34 = (long *)operator_new(0x40,"");
  *plVar34 = 0;
  plVar34[1] = 0;
  StringName::StringName((StringName *)(plVar34 + 2),(StringName *)&local_78);
  plVar34[7] = 0;
  *(undefined1 (*) [16])(plVar34 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar34 + 5) = (undefined1  [16])0x0;
  plVar34[7] = local_50;
  if ((int)(local_50 >> 0x20) != 0) {
    uVar30 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
    uVar32 = (ulong)uVar30 * 4;
    lVar45 = Memory::alloc_static(uVar32,false);
    lVar40 = 0;
    plVar34[6] = lVar45;
    lVar45 = Memory::alloc_static((ulong)uVar30 * 8,false);
    plVar34[3] = lVar45;
    lVar45 = Memory::alloc_static(uVar32,false);
    plVar34[5] = lVar45;
    lVar45 = Memory::alloc_static(uVar32,false);
    plVar34[4] = lVar45;
    if (*(int *)((long)plVar34 + 0x3c) != 0) {
      do {
        StringName::StringName
                  ((StringName *)(lVar40 * 8 + plVar34[3]),
                   (StringName *)(local_70._0_8_ + lVar40 * 8));
        *(undefined4 *)(plVar34[5] + lVar40 * 4) = *(undefined4 *)(local_60._0_8_ + lVar40 * 4);
        lVar40 = lVar40 + 1;
      } while ((uint)lVar40 < *(uint *)((long)plVar34 + 0x3c));
    }
    if (uVar30 != 0) {
      lVar45 = plVar34[6];
      uVar35 = 0;
      lVar40 = plVar34[4];
      do {
        *(undefined4 *)(lVar45 + uVar35) = *(undefined4 *)(local_60._8_8_ + uVar35);
        *(undefined4 *)(lVar40 + uVar35) = *(undefined4 *)(local_70._8_8_ + uVar35);
        uVar35 = uVar35 + 4;
      } while (uVar35 != uVar32);
    }
  }
  pvVar36 = (void *)local_70._0_8_;
  if ((void *)local_70._0_8_ != (void *)0x0) {
    if (local_50._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0) {
        memset((void *)local_60._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
        if (local_50._4_4_ == 0) goto LAB_00109c30;
      }
      lVar45 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar36 + lVar45 * 8) != 0)) {
          StringName::unref();
          pvVar36 = (void *)local_70._0_8_;
        }
        lVar45 = lVar45 + 1;
      } while ((uint)lVar45 < local_50._4_4_);
      local_50 = local_50 & 0xffffffff;
      if (pvVar36 == (void *)0x0) goto LAB_001098af;
    }
LAB_00109c30:
    Memory::free_static(pvVar36,false);
    Memory::free_static((void *)local_60._0_8_,false);
    Memory::free_static((void *)local_70._8_8_,false);
    Memory::free_static((void *)local_60._8_8_,false);
  }
LAB_001098af:
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar34;
    *(long **)(param_2 + 0x20) = plVar34;
LAB_001098eb:
    lVar45 = *(long *)pSVar39;
    if (lVar45 != 0) goto LAB_001098fc;
LAB_00109c20:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar2 = plVar34;
      plVar34[1] = (long)puVar2;
      *(long **)(param_2 + 0x20) = plVar34;
      goto LAB_001098eb;
    }
    lVar45 = *(long *)(param_2 + 0x18);
    *(long **)(lVar45 + 8) = plVar34;
    *plVar34 = lVar45;
    *(long **)(param_2 + 0x18) = plVar34;
    lVar45 = *(long *)pSVar39;
    if (lVar45 == 0) goto LAB_00109c20;
LAB_001098fc:
    uVar30 = *(uint *)(lVar45 + 0x20);
  }
  lVar45 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar47 = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar35 = CONCAT44(0,uVar3);
  lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar32 * lVar40;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar35;
  lVar42 = SUB168(auVar14 * auVar26,8);
  lVar41 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar45 + lVar42 * 4);
  iVar38 = SUB164(auVar14 * auVar26,8);
  uVar31 = *puVar1;
  plVar4 = plVar34;
  while (uVar31 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar31 * lVar40;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar35;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar3 + iVar38) - SUB164(auVar15 * auVar27,8)) * lVar40;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar35;
    uVar30 = SUB164(auVar16 * auVar28,8);
    plVar49 = plVar4;
    if (uVar30 < uVar47) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar2 = (undefined8 *)(lVar41 + lVar42 * 8);
      plVar49 = (long *)*puVar2;
      *puVar2 = plVar4;
      uVar47 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar47 = uVar47 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar38 + 1) * lVar40;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar35;
    lVar42 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar45 + lVar42 * 4);
    iVar38 = SUB164(auVar17 * auVar29,8);
    plVar4 = plVar49;
    uVar31 = *puVar1;
  }
  *(long **)(lVar41 + lVar42 * 8) = plVar4;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001099e7:
  *(long **)param_1 = plVar34;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Dictionary, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Dictionary> > >::insert(StringName const&,
   Dictionary const&, bool) */

StringName *
HashMap<StringName,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Dictionary>>>
::insert(StringName *param_1,Dictionary *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long *plVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long lVar34;
  void *pvVar35;
  Dictionary *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  StringName *pSVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  long *plVar47;
  long in_FS_OFFSET;
  long *local_b0;
  long local_58;
  Dictionary local_50 [16];
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar30;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar30 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar4 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar4,0,uVar32);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_00109f45;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_0010a047;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00109f51;
LAB_0010a06d:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (long *)0x0;
      goto LAB_0010a3fc;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar3 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar4 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar34 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar31);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar30 * lVar38;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar39 = SUB168(auVar9 * auVar21,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar9 * auVar21,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar44 * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar10 * auVar22,8)) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar46 = SUB164(auVar11 * auVar23,8);
            uVar42 = uVar33;
            if (uVar46 < uVar43) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar39 = SUB168(auVar12 * auVar24,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar12 * auVar24,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar3 != uVar32);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
LAB_00109f45:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_00109f51:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar46 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar31 * lVar34;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      lVar38 = SUB168(auVar5 * auVar17,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar43 = SUB164(auVar5 * auVar17,8);
      if (uVar44 != 0) {
        do {
          if ((uVar31 == uVar44) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            Dictionary::operator=
                      ((Dictionary *)(*(long *)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8) + 0x18),
                       in_RCX);
            local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            goto LAB_0010a3fc;
          }
          uVar46 = uVar46 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar32;
          lVar38 = SUB168(auVar6 * auVar18,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar6 * auVar18,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar34, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar43) - SUB164(auVar7 * auVar19,8)) * lVar34,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar32, uVar46 <= SUB164(auVar8 * auVar20,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_0010a047:
    if ((float)uVar30 * __LC5 < (float)(iVar36 + 1)) goto LAB_0010a06d;
  }
  StringName::StringName((StringName *)&local_58,pSVar37);
  Dictionary::Dictionary(local_50,in_RCX);
  local_b0 = (long *)operator_new(0x20,"");
  *local_b0 = 0;
  local_b0[1] = 0;
  StringName::StringName((StringName *)(local_b0 + 2),(StringName *)&local_58);
  Dictionary::Dictionary((Dictionary *)(local_b0 + 3),local_50);
  Dictionary::~Dictionary(local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_b0;
    *(long **)(param_2 + 0x20) = local_b0;
LAB_0010a314:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_0010a320;
LAB_0010a460:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar2 = local_b0;
      local_b0[1] = (long)puVar2;
      *(long **)(param_2 + 0x20) = local_b0;
      goto LAB_0010a314;
    }
    lVar34 = *(long *)(param_2 + 0x18);
    *(long **)(lVar34 + 8) = local_b0;
    *local_b0 = lVar34;
    lVar34 = *(long *)pSVar37;
    *(long **)(param_2 + 0x18) = local_b0;
    if (lVar34 == 0) goto LAB_0010a460;
LAB_0010a320:
    uVar30 = *(uint *)(lVar34 + 0x20);
  }
  lVar34 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar44 = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar3);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar32 * lVar38;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar45;
  lVar40 = SUB168(auVar13 * auVar25,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar13 * auVar25,8);
  uVar31 = *puVar1;
  plVar29 = local_b0;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar3 + iVar36) - SUB164(auVar14 * auVar26,8)) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    uVar30 = SUB164(auVar15 * auVar27,8);
    plVar47 = plVar29;
    if (uVar30 < uVar44) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar2 = (undefined8 *)(lVar39 + lVar40 * 8);
      plVar47 = (long *)*puVar2;
      *puVar2 = plVar29;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar44 = uVar44 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    lVar40 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar16 * auVar28,8);
    plVar29 = plVar47;
    uVar31 = *puVar1;
  }
  *(long **)(lVar39 + lVar40 * 8) = plVar29;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010a3fc:
  *(long **)param_1 = local_b0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, Vector2, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Vector2> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
::_lookup_pos(HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Pair<int, StringName> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Pair<int,StringName>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0010ab60:
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
  if (lVar8 == 0) goto LAB_0010ab60;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010aa3a:
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
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010aa3a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0010aa07;
  }
  if (lVar8 == lVar5) {
LAB_0010aadb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010aa07:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010aabb;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010aadb;
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
LAB_0010aabb:
  puVar7[-1] = param_1;
  return 0;
}



/* Vector<StringName>::append_array(Vector<StringName>) */

void __thiscall Vector<StringName>::append_array(Vector<StringName> *this,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  StringName *this_00;
  long lVar6;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar1 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar5 = 0;
      lVar4 = lVar1;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar1 + lVar5;
    }
    CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar4);
    if (0 < lVar1) {
      lVar5 = lVar5 << 3;
      lVar4 = 0;
      do {
        lVar2 = *(long *)(param_2 + 8);
        if (lVar2 == 0) {
          lVar6 = 0;
LAB_0010ac80:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar6 = *(long *)(lVar2 + -8);
        if (lVar6 <= lVar4) goto LAB_0010ac80;
        lVar6 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        this_00 = (StringName *)(*(long *)(this + 8) + lVar5);
        lVar5 = lVar5 + 8;
        StringName::operator=(this_00,(StringName *)(lVar2 + lVar6));
      } while (lVar4 != lVar1);
    }
  }
  return;
}



/* CowData<Ref<GraphEdit::Connection> >::_unref() */

void __thiscall
CowData<Ref<GraphEdit::Connection>>::_unref(CowData<Ref<GraphEdit::Connection>> *this)

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
LAB_0010ad5d:
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
            goto LAB_0010ad5d;
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



/* HashMap<StringName, Vector2, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Vector2> > >::_resize_and_rehash(unsigned int)
    */

void __thiscall
HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
::_resize_and_rehash
          (HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
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
/* HashMap<StringName, Vector2, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Vector2> > >::insert(StringName const&, Vector2
   const&, bool) */

StringName *
HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
::insert(StringName *param_1,Vector2 *param_2,bool param_3)

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
  long *in_RCX;
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
  bool bVar37;
  long *local_80;
  long local_58;
  long local_50;
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
      goto LAB_0010b072;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010b199;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010b07e;
LAB_0010b1bb:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_0010b151;
    }
    _resize_and_rehash((HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010b072:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0010b07e:
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
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            local_80[3] = *in_RCX;
            goto LAB_0010b151;
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
LAB_0010b199:
    if ((float)uVar23 * __LC5 < (float)(iVar28 + 1)) goto LAB_0010b1bb;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50 = *in_RCX;
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  bVar37 = StringName::configured != '\0';
  local_80[3] = local_50;
  if ((bVar37) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_0010b274:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_0010b281;
LAB_0010b37d:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar25 = *(long *)(param_2 + 0x18);
      *(long **)(lVar25 + 8) = local_80;
      *local_80 = lVar25;
      *(long **)(param_2 + 0x18) = local_80;
      goto LAB_0010b274;
    }
    *puVar3 = local_80;
    local_80[1] = (long)puVar3;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x20) = local_80;
    if (lVar25 == 0) goto LAB_0010b37d;
LAB_0010b281:
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
    auVar11._0_8_ = (ulong)((uVar2 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar30;
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
LAB_0010b151:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Vector2, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Vector2> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
::operator[](HashMap<StringName,Vector2,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector2>>>
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
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined8 *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  uint local_88;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar31 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar28);
  if (lVar31 == 0) {
LAB_0010b938:
    uVar33 = uVar38 * 4;
    __n = uVar38 * 8;
    uVar32 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar38 != uVar33);
      }
      else {
        memset(__s,0,uVar33);
        memset(__s_00,0,__n);
      }
LAB_0010b621:
      iVar34 = *(int *)(this + 0x2c);
      if (iVar34 != 0) {
LAB_0010b62e:
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar29 = StringName::get_empty_hash();
        }
        else {
          uVar29 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar33 = CONCAT44(0,uVar28);
        if (uVar29 == 0) {
          uVar29 = 1;
        }
        uVar41 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar29 * lVar31;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar33;
        lVar36 = SUB168(auVar8 * auVar20,8);
        uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
        uVar40 = SUB164(auVar8 * auVar20,8);
        if (uVar39 != 0) {
          do {
            if ((uVar29 == uVar39) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar36 * 8) + 0x10) == *(long *)param_1))
            {
              puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar40 * 8);
              puVar30[3] = 0;
              goto LAB_0010b5d3;
            }
            uVar41 = uVar41 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar40 + 1) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar33;
            lVar36 = SUB168(auVar9 * auVar21,8);
            uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
            uVar40 = SUB164(auVar9 * auVar21,8);
          } while ((uVar39 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar39 * lVar31, auVar22._8_8_ = 0,
                  auVar22._0_8_ = uVar33, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar28 + uVar40) - SUB164(auVar10 * auVar22,8)) * lVar31,
                  auVar23._8_8_ = 0, auVar23._0_8_ = uVar33, uVar41 <= SUB164(auVar11 * auVar23,8)))
          ;
        }
        iVar34 = *(int *)(this + 0x2c);
      }
      goto LAB_0010b71b;
    }
    iVar34 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010b71b;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010b62e;
LAB_0010b73d:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar30 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010b5d3;
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
      auVar16._0_8_ = uVar38;
      lVar35 = SUB168(auVar4 * auVar16,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar40 = SUB164(auVar4 * auVar16,8);
      if (uVar39 != 0) {
        uVar41 = 0;
        do {
          if ((uVar29 == uVar39) &&
             (*(long *)(*(long *)(lVar31 + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            puVar30 = *(undefined8 **)(lVar31 + (ulong)uVar40 * 8);
            goto LAB_0010b5d3;
          }
          uVar41 = uVar41 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar36;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar38;
          lVar35 = SUB168(auVar5 * auVar17,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar39 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar39 * lVar36, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar38, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar28) - SUB164(auVar6 * auVar18,8)) * lVar36,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar38, uVar41 <= SUB164(auVar7 * auVar19,8)));
      }
      uVar38 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar31 == 0) goto LAB_0010b938;
      goto LAB_0010b621;
    }
    iVar34 = 0;
LAB_0010b71b:
    if ((float)uVar38 * __LC5 < (float)(iVar34 + 1)) goto LAB_0010b73d;
  }
  StringName::StringName((StringName *)&local_58,(StringName *)param_1);
  local_50 = 0;
  puVar30 = (undefined8 *)operator_new(0x20,"");
  *puVar30 = 0;
  puVar30[1] = 0;
  StringName::StringName((StringName *)(puVar30 + 2),(StringName *)&local_58);
  bVar43 = StringName::configured != '\0';
  puVar30[3] = local_50;
  if ((bVar43) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar30;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 == 0) goto LAB_0010b90e;
LAB_0010b7e9:
    uVar28 = *(uint *)(lVar31 + 0x20);
  }
  else {
    *puVar3 = puVar30;
    puVar30[1] = puVar3;
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 != 0) goto LAB_0010b7e9;
LAB_0010b90e:
    uVar28 = StringName::get_empty_hash();
  }
  lVar31 = *(long *)(this + 0x10);
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar38 = (ulong)uVar28;
  uVar40 = 0;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar29);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar38 * lVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar33;
  lVar37 = SUB168(auVar12 * auVar24,8);
  lVar35 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar31 + lVar37 * 4);
  iVar34 = SUB164(auVar12 * auVar24,8);
  uVar39 = *puVar1;
  puVar3 = puVar30;
  while (uVar39 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar39 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar33;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar29 + iVar34) - SUB164(auVar13 * auVar25,8)) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar33;
    local_88 = SUB164(auVar14 * auVar26,8);
    puVar42 = puVar3;
    if (local_88 < uVar40) {
      *puVar1 = (uint)uVar38;
      uVar38 = (ulong)uVar39;
      puVar2 = (undefined8 *)(lVar35 + lVar37 * 8);
      puVar42 = (undefined8 *)*puVar2;
      *puVar2 = puVar3;
      uVar40 = local_88;
    }
    uVar28 = (uint)uVar38;
    uVar40 = uVar40 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar34 + 1) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar33;
    lVar37 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar31 + lVar37 * 4);
    iVar34 = SUB164(auVar15 * auVar27,8);
    puVar3 = puVar42;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar35 + lVar37 * 8) = puVar3;
  *puVar1 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010b5d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar30 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, Vector<StringName>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > > >::_resize_and_rehash(unsigned
   int) */

void __thiscall
HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
::_resize_and_rehash
          (HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
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
/* HashMap<int, Vector<StringName>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
::operator[](HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
             *this,int *param_1)

{
  uint *puVar1;
  ulong uVar2;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  undefined8 uVar34;
  void *__s_00;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  undefined1 (*pauVar46) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  int local_58;
  undefined8 local_48;
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  uVar32 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  uVar31 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar42 = CONCAT44(0,uVar31);
  if (__s_00 == (void *)0x0) {
    local_70 = 0;
    uVar39 = uVar42 * 4;
    uVar2 = uVar42 * 8;
    uVar34 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar31 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar42 != uVar39);
        uVar32 = *param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar2);
        uVar32 = *param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
LAB_0010c177:
      if (iVar40 == 0) goto LAB_0010c0cc;
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar45 = *(long *)(this + 0x10);
      goto LAB_0010bde5;
    }
    uVar32 = *param_1;
    iVar40 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_0010c177;
  }
  else {
    iVar40 = *(int *)(this + 0x2c);
    if (iVar40 == 0) {
      local_70 = 0;
LAB_0010c0cc:
      iVar40 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar30 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar43 = 1;
        uVar36 = uVar2;
      }
      else {
        uVar36 = uVar43 * uVar2;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar42;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar36;
      lVar37 = SUB168(auVar5 * auVar17,8);
      lVar45 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar5 * auVar17,8);
      uVar30 = *(uint *)(lVar45 + lVar37 * 4);
      if (uVar30 != 0) {
        uVar41 = 0;
        do {
          if ((uVar30 == uVar43) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10))) {
            pauVar33 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar44 * 8);
            goto LAB_0010bdab;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar44 + 1) * uVar2;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar37 = SUB168(auVar6 * auVar18,8);
          uVar30 = *(uint *)(lVar45 + lVar37 * 4);
          uVar44 = SUB164(auVar6 * auVar18,8);
        } while ((uVar30 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar30 * uVar2, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar44 + uVar31) - SUB164(auVar7 * auVar19,8)) * uVar2,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
      local_70 = 0;
LAB_0010bde5:
      uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar31 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar30 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar30 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar30 * uVar2;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar36;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar35;
      lVar37 = SUB168(auVar9 * auVar21,8);
      uVar31 = *(uint *)(lVar45 + lVar37 * 4);
      uVar43 = SUB164(auVar9 * auVar21,8);
      if (uVar31 != 0) {
        uVar44 = 0;
        do {
          if ((uVar31 == uVar30) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10))) {
            lVar45 = *(long *)((long)__s_00 + (ulong)uVar43 * 8);
            if (*(long *)(lVar45 + 0x20) != 0) {
              CowData<StringName>::_ref((CowData<StringName> *)(lVar45 + 0x20),(CowData *)&local_70)
              ;
            }
            pauVar33 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar43 * 8);
            goto LAB_0010c0a6;
          }
          uVar44 = uVar44 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar43 + 1) * uVar2;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar36;
          lVar37 = SUB168(auVar10 * auVar22,8);
          uVar31 = *(uint *)(lVar45 + lVar37 * 4);
          uVar43 = SUB164(auVar10 * auVar22,8);
        } while ((uVar31 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar36, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar43) -
                     SUB164(auVar11 * auVar23,8)) * uVar2, auVar24._8_8_ = 0, auVar24._0_8_ = uVar36
                , uVar44 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar42 * __LC5 < (float)(iVar40 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar33 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010c0a6;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  local_48 = 0;
  iVar40 = *param_1;
  local_58 = iVar40;
  pauVar33 = (undefined1 (*) [16])operator_new(0x28,"");
  *(int *)pauVar33[1] = iVar40;
  *(undefined8 *)pauVar33[2] = 0;
  *pauVar33 = (undefined1  [16])0x0;
  CowData<StringName>::_unref((CowData<StringName> *)&local_48);
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar33;
  }
  else {
    *puVar3 = pauVar33;
    *(undefined8 **)(*pauVar33 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar33;
  uVar32 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar31 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
  uVar32 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar39 = 1;
    uVar32 = 1;
  }
  else {
    uVar39 = (ulong)uVar32;
  }
  uVar43 = 0;
  lVar45 = *(long *)(this + 0x10);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar31);
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar39 * lVar37;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar42;
  lVar38 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar38 * 4);
  iVar40 = SUB164(auVar13 * auVar25,8);
  uVar30 = *puVar1;
  pauVar29 = pauVar33;
  while (uVar30 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar30 * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar42;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar31 + iVar40) - SUB164(auVar14 * auVar26,8)) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar42;
    uVar44 = SUB164(auVar15 * auVar27,8);
    pauVar46 = pauVar29;
    if (uVar44 < uVar43) {
      *puVar1 = uVar32;
      puVar3 = (undefined8 *)(lVar4 + lVar38 * 8);
      pauVar46 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar29;
      uVar32 = uVar30;
      uVar43 = uVar44;
    }
    uVar43 = uVar43 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar40 + 1) * lVar37;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar42;
    lVar38 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar45 + lVar38 * 4);
    iVar40 = SUB164(auVar16 * auVar28,8);
    pauVar29 = pauVar46;
    uVar30 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar4 + lVar38 * 8) = pauVar29;
  *puVar1 = uVar32;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010c0a6:
  CowData<StringName>::_unref((CowData<StringName> *)&local_70);
LAB_0010bdab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar33[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Vector<StringName>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<StringName> > > >::insert(int const&,
   Vector<StringName> const&, bool) */

int * HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
      ::insert(int *param_1,Vector *param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
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
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  void *__s_00;
  long in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  char in_R8B;
  ulong uVar33;
  uint uVar34;
  undefined1 (*pauVar35) [16];
  long in_FS_OFFSET;
  undefined1 (*local_90) [16];
  undefined1 (*pauStack_70) [16];
  long local_48;
  long local_40;
  
  puVar27 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar28 = (ulong)uVar22;
    uVar31 = uVar28 * 4;
    uVar33 = uVar28 * 8;
    uVar25 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar28 != uVar31);
        goto LAB_0010c2b9;
      }
      memset(__s,0,uVar31);
      memset(__s_00,0,uVar33);
      iVar26 = *(int *)(param_2 + 0x2c);
      uVar23 = *puVar27;
      goto LAB_0010c2c4;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    uVar23 = *puVar27;
    if (__s_00 != (void *)0x0) goto LAB_0010c2c4;
  }
  else {
LAB_0010c2b9:
    iVar26 = *(int *)(param_2 + 0x2c);
    uVar23 = *puVar27;
LAB_0010c2c4:
    if (iVar26 != 0) {
      uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      uVar31 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar21 = (uVar23 >> 0x10 ^ uVar23) * -0x7a143595;
      uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
      uVar32 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
        uVar32 = 1;
        uVar28 = uVar31;
      }
      else {
        uVar28 = uVar32 * uVar31;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar33;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28;
      lVar29 = SUB168(auVar4 * auVar12,8);
      uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
      uVar24 = SUB164(auVar4 * auVar12,8);
      if (uVar21 != 0) {
        uVar34 = 0;
        do {
          if ((uVar32 == uVar21) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == uVar23)) {
            lVar29 = *(long *)((long)__s_00 + (ulong)uVar24 * 8);
            if (*(long *)(lVar29 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<StringName>::_ref
                        ((CowData<StringName> *)(lVar29 + 0x20),(CowData *)(in_RCX + 8));
            }
            local_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar24 * 8);
            goto LAB_0010c5eb;
          }
          uVar34 = uVar34 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar24 + 1) * uVar31;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar33;
          lVar29 = SUB168(auVar5 * auVar13,8);
          uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
          uVar24 = SUB164(auVar5 * auVar13,8);
        } while ((uVar21 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar21 * uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar33, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar24) -
                               SUB164(auVar6 * auVar14,8)) * uVar31, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar33, uVar34 <= SUB164(auVar7 * auVar15,8)));
      }
    }
  }
  if ((float)uVar22 * __LC5 < (float)(iVar26 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined1 (*) [16])0x0;
      goto LAB_0010c5eb;
    }
    _resize_and_rehash((HashMap<int,Vector<StringName>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<StringName>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_48 = 0;
  uVar22 = *puVar27;
  if (*(long *)(in_RCX + 8) == 0) {
    pauStack_70 = (undefined1 (*) [16])operator_new(0x28,"");
    *(uint *)pauStack_70[1] = uVar22;
    *(undefined8 *)pauStack_70[2] = 0;
    *pauStack_70 = (undefined1  [16])0x0;
  }
  else {
    CowData<StringName>::_ref((CowData<StringName> *)&local_48,(CowData *)(in_RCX + 8));
    lVar29 = local_48;
    pauStack_70 = (undefined1 (*) [16])operator_new(0x28,"");
    *(uint *)pauStack_70[1] = uVar22;
    *(undefined8 *)pauStack_70[2] = 0;
    *(undefined8 *)*pauStack_70 = 0;
    *(undefined8 *)(*pauStack_70 + 8) = 0;
    if (lVar29 != 0) {
      CowData<StringName>::_ref((CowData<StringName> *)(pauStack_70 + 2),(CowData *)&local_48);
    }
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_48);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_70;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_70;
  }
  else if (in_R8B == '\0') {
    *puVar1 = pauStack_70;
    *(undefined8 **)(*pauStack_70 + 8) = puVar1;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_70;
  }
  else {
    lVar29 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar29 + 8) = pauStack_70;
    *(long *)*pauStack_70 = lVar29;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_70;
  }
  uVar22 = (*puVar27 >> 0x10 ^ *puVar27) * -0x7a143595;
  uVar23 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
  uVar22 = uVar23 ^ uVar23 >> 0x10;
  if (uVar23 == uVar23 >> 0x10) {
    uVar31 = 1;
    uVar22 = 1;
  }
  else {
    uVar31 = (ulong)uVar22;
  }
  lVar29 = *(long *)(param_2 + 0x10);
  uVar32 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar33 = CONCAT44(0,uVar23);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar31 * lVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar33;
  lVar30 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar27 = (uint *)(lVar29 + lVar30 * 4);
  iVar26 = SUB164(auVar8 * auVar16,8);
  uVar21 = *puVar27;
  pauVar20 = pauStack_70;
  while (uVar21 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar21 * lVar2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar33;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar23 + iVar26) - SUB164(auVar9 * auVar17,8)) * lVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    uVar24 = SUB164(auVar10 * auVar18,8);
    pauVar35 = pauVar20;
    if (uVar24 < uVar32) {
      *puVar27 = uVar22;
      puVar1 = (undefined8 *)(lVar3 + lVar30 * 8);
      pauVar35 = (undefined1 (*) [16])*puVar1;
      *puVar1 = pauVar20;
      uVar22 = uVar21;
      uVar32 = uVar24;
    }
    uVar32 = uVar32 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar26 + 1) * lVar2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar33;
    lVar30 = SUB168(auVar11 * auVar19,8);
    puVar27 = (uint *)(lVar29 + lVar30 * 4);
    iVar26 = SUB164(auVar11 * auVar19,8);
    pauVar20 = pauVar35;
    uVar21 = *puVar27;
  }
  *(undefined1 (**) [16])(lVar3 + lVar30 * 8) = pauVar20;
  *puVar27 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  local_90 = pauStack_70;
LAB_0010c5eb:
  *(undefined1 (**) [16])param_1 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Pair<int, StringName> >::_unref() */

void __thiscall CowData<Pair<int,StringName>>::_unref(CowData<Pair<int,StringName>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar4 = (long *)(*(long *)this + -0x10);
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    lVar1 = *(long *)this;
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + -8);
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        plVar4 = (long *)(lVar1 + 8);
        lVar5 = 0;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 2;
        } while (lVar2 != lVar5);
      }
      Memory::free_static((void *)(lVar1 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Pair<int, StringName> >::_realloc(long) */

undefined8 __thiscall
CowData<Pair<int,StringName>>::_realloc(CowData<Pair<int,StringName>> *this,long param_1)

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
/* Error CowData<Pair<int, StringName> >::resize<false>(long) */

undefined8 __thiscall
CowData<Pair<int,StringName>>::resize<false>(CowData<Pair<int,StringName>> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
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
    lVar7 = lVar5 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010cb60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_0010cb60;
  if (param_1 <= lVar5) {
    lVar5 = *(long *)this;
    uVar8 = param_1;
    while (lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar8) {
LAB_0010ca2a:
        if (lVar9 != lVar7) {
          uVar2 = _realloc(this,lVar9);
          if ((int)uVar2 != 0) {
            return uVar2;
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
      while ((StringName::configured == '\0' || (*(long *)(uVar8 * 0x10 + lVar5 + 8) == 0))) {
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar5 + -8) <= uVar8) goto LAB_0010ca2a;
      }
      uVar8 = uVar8 + 1;
      StringName::unref();
      lVar5 = *(long *)this;
    }
    goto LAB_0010c9f6;
  }
  if (lVar9 == lVar7) {
LAB_0010cad3:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010c9f6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_0010cab7;
  }
  else {
    if (lVar5 != 0) {
      uVar2 = _realloc(this,lVar9);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010cad3;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar3 = puVar6 + lVar5 * 2;
  do {
    *(undefined4 *)puVar3 = 0;
    puVar4 = puVar3 + 2;
    puVar3[1] = 0;
    puVar3 = puVar4;
  } while (puVar4 != puVar6 + param_1 * 2);
LAB_0010cab7:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::~HashMap() */

void __thiscall
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::~HashMap(HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

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


