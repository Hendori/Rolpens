
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



/* ShaderTypes::get_functions(RenderingServer::ShaderMode) const */

long __thiscall ShaderTypes::get_functions(ShaderTypes *this,uint param_2)

{
  long lVar1;
  ulong uVar2;
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
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar1 = *(long *)(this + 8);
  if ((lVar1 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar18 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar12 = (param_2 >> 0x10 ^ param_2) * -0x7a143595;
    uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
    uVar16 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar16 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar16 * uVar2;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar17 = 0;
      do {
        if ((uVar16 == uVar12) && (*(uint *)(*(long *)(lVar1 + lVar15 * 8) + 0x10) == param_2)) {
          return *(long *)(lVar1 + (ulong)uVar13 * 8) + 0x18;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar12 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar12 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar13) -
                             SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* ShaderTypes::get_modes(RenderingServer::ShaderMode) const */

long __thiscall ShaderTypes::get_modes(ShaderTypes *this,uint param_2)

{
  long lVar1;
  ulong uVar2;
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
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar1 = *(long *)(this + 8);
  if ((lVar1 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar18 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar12 = (param_2 >> 0x10 ^ param_2) * -0x7a143595;
    uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
    uVar16 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar16 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar16 * uVar2;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar17 = 0;
      do {
        if ((uVar16 == uVar12) && (*(uint *)(*(long *)(lVar1 + lVar15 * 8) + 0x10) == param_2)) {
          return *(long *)(lVar1 + (ulong)uVar13 * 8) + 0x48;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar12 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar12 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar13) -
                             SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* ShaderTypes::get_types() const */

ShaderTypes * __thiscall ShaderTypes::get_types(ShaderTypes *this)

{
  return this + 0x30;
}



/* ShaderTypes::get_types_list() const */

ShaderTypes * __thiscall ShaderTypes::get_types_list(ShaderTypes *this)

{
  return this + 0x58;
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



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref(CowData<ShaderLanguage::StageFunctionInfo::Argument>
   const&) [clone .part.0] */

void __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this,CowData *param_1)

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



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::_copy_on_write
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  StringName *pSVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  StringName *this_00;
  
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
    *puVar3 = 1;
    puVar3[1] = lVar1;
    lVar6 = 0;
    this_00 = (StringName *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        lVar7 = lVar6 + 1;
        pSVar4 = (StringName *)(lVar6 * 0x10 + *(long *)this);
        StringName::StringName(this_00,pSVar4);
        *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pSVar4 + 8);
        lVar6 = lVar7;
        this_00 = this_00 + 0x10;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<ShaderLanguage::ModeInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ShaderLanguage::ModeInfo>::_copy_on_write(CowData<ShaderLanguage::ModeInfo> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  StringName *pSVar4;
  ulong uVar5;
  long lVar6;
  StringName *this_00;
  
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
  if (lVar1 * 0x18 != 0) {
    uVar5 = lVar1 * 0x18 - 1;
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
    this_00 = (StringName *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pSVar4 = this_00 + *(long *)this + (-0x10 - (long)puVar3);
        StringName::StringName(this_00,pSVar4);
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pSVar4 + 0x10) != 0) {
          CowData<StringName>::_ref
                    ((CowData<StringName> *)(this_00 + 0x10),(CowData *)(pSVar4 + 0x10));
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ShaderLanguage::FunctionInfo::TEMPNAMEPLACEHOLDERVALUE(ShaderLanguage::FunctionInfo const&)
   [clone .isra.0] */

void __thiscall ShaderLanguage::FunctionInfo::operator=(FunctionInfo *this,FunctionInfo *param_1)

{
  HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
  *this_00;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  ulong uVar4;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != this) {
    uVar5 = *(uint *)(this + 0x28);
    uVar3 = (&hash_table_size_primes)[uVar5];
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar7 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 * 4 - lVar7 != 0);
        uVar5 = *(uint *)(this + 0x28);
        uVar3 = (&hash_table_size_primes)[uVar5];
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar3 < (uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)]) {
      if (uVar5 != 0x1c) {
        uVar4 = (ulong)uVar5;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if ((uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)] <=
              (uint)(&hash_table_size_primes)[uVar4]) {
            if (uVar3 != uVar5) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar3;
              }
              else {
                HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                ::_resize_and_rehash
                          ((HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                            *)this,uVar3);
              }
            }
            goto LAB_00100902;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00100902:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar6 = *(long **)(param_1 + 0x18), plVar6 != (long *)0x0)) {
      do {
        HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
        ::insert(local_48,(BuiltInInfo *)this,(bool)((char)plVar6 + '\x10'));
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  this_00 = (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
             *)(this + 0x30);
  if (this_00 !=
      (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
       *)(param_1 + 0x30)) {
    uVar5 = *(uint *)(this + 0x58);
    uVar3 = (&hash_table_size_primes)[uVar5];
    if ((*(int *)(this + 0x5c) != 0) && (*(long *)(this + 0x38) != 0)) {
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x40) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x40) + lVar7) = 0;
            pvVar1 = *(void **)(*(long *)(this + 0x38) + lVar7 * 2);
            if (*(long *)((long)pvVar1 + 0x30) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar1 + 0x30) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar2 = *(long *)((long)pvVar1 + 0x30);
                *(undefined8 *)((long)pvVar1 + 0x30) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
                      ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)((long)pvVar1 + 0x20)
                      );
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 0x38) + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar3 * 4);
        uVar5 = *(uint *)(this + 0x58);
        uVar3 = (&hash_table_size_primes)[uVar5];
      }
      *(undefined4 *)(this + 0x5c) = 0;
      *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
    }
    if (uVar3 < (uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x58)]) {
      if (uVar5 != 0x1c) {
        uVar4 = (ulong)uVar5;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if ((uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x58)] <=
              (uint)(&hash_table_size_primes)[uVar4]) {
            if (uVar3 != uVar5) {
              if (*(long *)(this + 0x38) == 0) {
                *(uint *)(this + 0x58) = uVar3;
              }
              else {
                HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                ::_resize_and_rehash(this_00,uVar3);
              }
            }
            goto LAB_001009c1;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_001009c1:
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar6 = *(long **)(param_1 + 0x48), plVar6 != (long *)0x0)) {
      do {
        HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
        ::insert(local_48,(StageFunctionInfo *)this_00,(bool)((char)plVar6 + '\x10'));
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  *(undefined2 *)(this + 0x60) = *(undefined2 *)(param_1 + 0x60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<ShaderLanguage::ModeInfo>::push_back(ShaderLanguage::ModeInfo) [clone .isra.0] */

void __thiscall
Vector<ShaderLanguage::ModeInfo>::push_back
          (Vector<ShaderLanguage::ModeInfo> *this,StringName *param_2)

{
  StringName *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<ShaderLanguage::ModeInfo>::resize<false>
                    ((CowData<ShaderLanguage::ModeInfo> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<ShaderLanguage::ModeInfo>::_copy_on_write
                  ((CowData<ShaderLanguage::ModeInfo> *)(this + 8));
        this_00 = (StringName *)(*(long *)(this + 8) + lVar3 * 0x18);
        StringName::operator=(this_00,param_2);
        if (*(long *)(this_00 + 0x10) == *(long *)(param_2 + 0x10)) {
          return;
        }
        CowData<StringName>::_ref
                  ((CowData<StringName> *)(this_00 + 0x10),(CowData *)(param_2 + 0x10));
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



/* Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back(ShaderLanguage::StageFunctionInfo::Argument)
   [clone .isra.0] */

void __thiscall
Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
          (Vector<ShaderLanguage::StageFunctionInfo::Argument> *this,StringName *param_2)

{
  int iVar1;
  long lVar2;
  StringName *this_00;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<ShaderLanguage::StageFunctionInfo::Argument>::resize<false>
                    ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<ShaderLanguage::StageFunctionInfo::Argument>::_copy_on_write
                  ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(this + 8));
        this_00 = (StringName *)(lVar2 * 0x10 + *(long *)(this + 8));
        StringName::operator=(this_00,param_2);
        *(undefined4 *)(this_00 + 8) = *(undefined4 *)(param_2 + 8);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* ShaderTypes::ShaderTypes() */

void __thiscall ShaderTypes::ShaderTypes(ShaderTypes *this)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
  *pHVar4;
  HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
  *pHVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  CowData<char32_t> *pCVar9;
  long *plVar10;
  undefined1 (*pauVar11) [16];
  long in_FS_OFFSET;
  bool bVar12;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  long local_50 [2];
  long local_40;
  
  uVar1 = _LC29;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  local_80 = 0;
  singleton = this;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EXPOSURE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PI",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TAU",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"E",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"OUTPUT_IS_SRGB",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CLIP_SPACE_FAR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TANGENT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"BINORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV2",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POINT_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INSTANCE_ID",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INSTANCE_CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VERTEX_ID",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ROUGHNESS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"BONE_INDICES",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xc;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"BONE_WEIGHTS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM0",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM1",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM2",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM3",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"vertex",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x60) = 0;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"vertex",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODEL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODEL_NORMAL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x12;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INV_VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PROJECTION_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INV_PROJECTION_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODELVIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODELVIEW_NORMAL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x12;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEWPORT_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MAIN_CAM_INV_VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NODE_POSITION_WORLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CAMERA_POSITION_WORLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CAMERA_DIRECTION_WORLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CAMERA_VISIBLE_LAYERS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NODE_POSITION_VIEW",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_INDEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_MONO_LEFT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_RIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EYE_OFFSET",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FRAGCOORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FRONT_FACING",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TANGENT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"BINORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL_MAP",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL_MAP_DEPTH",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV2",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALBEDO",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PREMUL_ALPHA_FACTOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"METALLIC",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SPECULAR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ROUGHNESS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RIM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RIM_TINT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CLEARCOAT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CLEARCOAT_ROUGHNESS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ANISOTROPY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ANISOTROPY_FLOW",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SSS_STRENGTH",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SSS_TRANSMITTANCE_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SSS_TRANSMITTANCE_DEPTH",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SSS_TRANSMITTANCE_BOOST",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"BACKLIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AO",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AO_LIGHT_AFFECT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EMISSION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"DEPTH",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POINT_COORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NODE_POSITION_WORLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CAMERA_POSITION_WORLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CAMERA_DIRECTION_WORLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CAMERA_VISIBLE_LAYERS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NODE_POSITION_VIEW",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_INDEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_MONO_LEFT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_RIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EYE_OFFSET",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODEL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODEL_NORMAL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x12;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INV_VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PROJECTION_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INV_PROJECTION_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEWPORT_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FOG",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RADIANCE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"IRRADIANCE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x60) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA_SCISSOR_THRESHOLD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA_HASH_SCALE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA_ANTIALIASING_EDGE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA_TEXTURE_COORDINATE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODEL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INV_VIEW_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PROJECTION_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INV_PROJECTION_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEWPORT_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FRAGCOORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV2",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VIEW",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SPECULAR_AMOUNT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_IS_DIRECTIONAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ATTENUATION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALBEDO",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"BACKLIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"METALLIC",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ROUGHNESS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"DIFFUSE_LIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SPECULAR_LIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x60) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_ac = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(ShaderMode *)&local_ac);
  StringName::StringName((StringName *)&local_a8,"blend",false);
  StringName::StringName((StringName *)&local_a0,"mix",false);
  StringName::StringName((StringName *)&local_98,"add",false);
  StringName::StringName((StringName *)&local_90,"sub",false);
  StringName::StringName((StringName *)&local_88,"mul",false);
  StringName::StringName((StringName *)&local_80,"premul_alpha",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_a8);
  local_58 = 0;
  StringName::StringName((StringName *)&local_78,(StringName *)&local_a0);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_98);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_90);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_88);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_80);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((((((StringName::configured != '\0') &&
         ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
        ((CONCAT44(uStack_7c,local_80) == 0 || (StringName::unref(), StringName::configured != '\0')
         ))) && (((CONCAT44(uStack_84,local_88) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')) &&
                 ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))))) &&
      (((local_98 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
       ((CONCAT44(uStack_9c,local_a0) == 0 || (StringName::unref(), StringName::configured != '\0'))
       )))) && (CONCAT44(uStack_a4,local_a8) != 0)) {
    StringName::unref();
  }
  local_a0 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_a0);
  StringName::StringName((StringName *)&local_98,"depth_draw",false);
  StringName::StringName((StringName *)&local_90,"opaque",false);
  StringName::StringName((StringName *)&local_88,"always",false);
  StringName::StringName((StringName *)&local_80,"never",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_98);
  local_58 = 0;
  StringName::StringName((StringName *)&local_78,(StringName *)&local_90);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_88);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_80);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((CONCAT44(uStack_7c,local_80) == 0 || (StringName::unref(), StringName::configured != '\0'))
      && ((((CONCAT44(uStack_84,local_88) == 0 ||
            (StringName::unref(), StringName::configured != '\0')) &&
           ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
          (local_98 != 0)))))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"depth_prepass_alpha",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"depth_test_disabled",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sss_mode_skin",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_a0 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_a0);
  StringName::StringName((StringName *)&local_98,"cull",false);
  StringName::StringName((StringName *)&local_90,"back",false);
  StringName::StringName((StringName *)&local_88,"front",false);
  StringName::StringName((StringName *)&local_80,"disabled",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_98);
  local_58 = 0;
  StringName::StringName((StringName *)&local_78,(StringName *)&local_90);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_88);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_80);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((((StringName::configured != '\0') &&
       ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((CONCAT44(uStack_7c,local_80) == 0 || (StringName::unref(), StringName::configured != '\0')))
      ) && ((((CONCAT44(uStack_84,local_88) == 0 ||
              (StringName::unref(), StringName::configured != '\0')) &&
             ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
            (local_98 != 0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"unshaded",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"wireframe",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_a8);
  StringName::StringName((StringName *)&local_a0,"diffuse",false);
  StringName::StringName((StringName *)&local_98,"lambert",false);
  StringName::StringName((StringName *)&local_90,"lambert_wrap",false);
  StringName::StringName((StringName *)&local_88,"burley",false);
  StringName::StringName((StringName *)&local_80,"toon",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_a0);
  local_58 = 0;
  StringName::StringName((StringName *)&local_78,(StringName *)&local_98);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_90);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_88);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_80);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((((StringName::configured != '\0') &&
       ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((CONCAT44(uStack_7c,local_80) == 0 || (StringName::unref(), StringName::configured != '\0')))
      ) && ((((CONCAT44(uStack_84,local_88) == 0 ||
              (StringName::unref(), StringName::configured != '\0')) &&
             ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
            (((local_98 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
             (CONCAT44(uStack_9c,local_a0) != 0)))))) {
    StringName::unref();
  }
  local_a0 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_a0);
  StringName::StringName((StringName *)&local_98,"specular",false);
  StringName::StringName((StringName *)&local_90,"schlick_ggx",false);
  StringName::StringName((StringName *)&local_88,"toon",false);
  StringName::StringName((StringName *)&local_80,"disabled",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_98);
  local_58 = 0;
  StringName::StringName((StringName *)&local_78,(StringName *)&local_90);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_88);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_80);
  Vector<StringName>::push_back((Vector<StringName> *)&local_60,(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((((StringName::configured != '\0') &&
       ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((CONCAT44(uStack_7c,local_80) == 0 || (StringName::unref(), StringName::configured != '\0')))
      ) && ((((CONCAT44(uStack_84,local_88) == 0 ||
              (StringName::unref(), StringName::configured != '\0')) &&
             ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
            (local_98 != 0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"skip_vertex_transform",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"world_vertex_coords",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"ensure_correct_normals",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"shadows_disabled",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"ambient_light_disabled",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"shadow_to_opacity",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex_lighting",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"particle_trails",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"alpha_to_coverage",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"alpha_to_coverage_and_one",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"debug_shadow_splits",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog_disabled",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PI",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TAU",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"E",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POINT_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MODEL_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CANVAS_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_MATRIX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INSTANCE_CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INSTANCE_ID",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VERTEX_ID",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 5;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AT_LIGHT_PASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TEXTURE_PIXEL_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM0",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"vertex",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM1",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"vertex",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x60) = 0;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"vertex",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SHADOW_VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FRAGCOORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL_MAP",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL_MAP_DEPTH",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TEXTURE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x14;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TEXTURE_PIXEL_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL_TEXTURE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x14;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SPECULAR_SHININESS_TEXTURE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x14;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SPECULAR_SHININESS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_PIXEL_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POINT_COORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fragment",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AT_LIGHT_PASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x60) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_78 = "vertex";
  local_58 = local_58 & 0xffffffff00000000;
  local_50[0] = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)local_50);
  StringName::StringName((StringName *)&local_80,"sdf_pos",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,0xe);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if ((StringName::configured != '\0') &&
     (((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (CONCAT44(uStack_7c,local_80) != 0)))) {
    StringName::unref();
  }
  local_58 = CONCAT44(local_58._4_4_,0xd);
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"texture_sdf",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"texture_sdf",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_58 = CONCAT44(local_58._4_4_,0xe);
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sdf_to_screen_uv",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if ((StringName::configured != '\0') &&
     (((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (CONCAT44(uStack_7c,local_80) != 0)))) {
    StringName::unref();
  }
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sdf_to_screen_uv",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"texture_sdf_normal",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"texture_sdf_normal",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if ((StringName::configured != '\0') &&
     (((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (CONCAT44(uStack_7c,local_80) != 0)))) {
    StringName::unref();
  }
  lVar7 = local_50[0];
  if (local_50[0] != 0) {
    LOCK();
    plVar10 = (long *)(local_50[0] + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_60);
  local_78 = "vertex";
  local_60 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  local_50[0] = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)local_50);
  StringName::StringName((StringName *)&local_80,"uv",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,0xe);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_58 = CONCAT44(local_58._4_4_,0xe);
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"fragment",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"screen_uv_to_sdf",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_88 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"screen_uv_to_sdf",false);
  lVar7 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  if (*(long *)(lVar7 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar7 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_58;
  if (*(long *)(lVar7 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar7 + 0x18),(CowData *)local_50);
  }
  if ((StringName::configured != '\0') &&
     (((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (CONCAT44(uStack_7c,local_80) != 0)))) {
    StringName::unref();
  }
  lVar7 = local_50[0];
  if (local_50[0] != 0) {
    LOCK();
    plVar10 = (long *)(local_50[0] + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_60);
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FRAGCOORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SPECULAR_SHININESS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_DIRECTION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_ENERGY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_IS_DIRECTIONAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT_VERTEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SHADOW_MODULATE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TEXTURE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x14;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TEXTURE_PIXEL_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POINT_COORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x60) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"light",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"skip_vertex_transform",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_ac = 1;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(ShaderMode *)&local_ac);
  StringName::StringName((StringName *)&local_a8,"blend",false);
  StringName::StringName((StringName *)&local_a0,"mix",false);
  StringName::StringName((StringName *)&local_98,"add",false);
  StringName::StringName((StringName *)&local_90,"sub",false);
  StringName::StringName((StringName *)&local_88,"mul",false);
  StringName::StringName((StringName *)&local_80,"premul_alpha",false);
  StringName::StringName((StringName *)&local_78,"disabled",false);
  ShaderLanguage::ModeInfo::ModeInfo
            ((ModeInfo *)&local_68,(StringName *)&local_a8,(StringName *)&local_a0,
             (StringName *)&local_98,(StringName *)&local_90,(StringName *)&local_88,
             (StringName *)&local_80,(StringName *)&local_78);
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((((StringName::configured != '\0') &&
        ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
       ((((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
         (((CONCAT44(uStack_7c,local_80) == 0 ||
           (StringName::unref(), StringName::configured != '\0')) &&
          ((CONCAT44(uStack_84,local_88) == 0 ||
           (StringName::unref(), StringName::configured != '\0')))))) &&
        ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))))) &&
      ((local_98 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((CONCAT44(uStack_9c,local_a0) == 0 || (StringName::unref(), StringName::configured != '\0'))
      && (CONCAT44(uStack_a4,local_a8) != 0)))) {
    StringName::unref();
  }
  local_80 = 1;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"unshaded",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"light_only",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 1;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"world_vertex_coords",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PI",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TAU",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"E",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ACTIVE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA1",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA2",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA3",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA4",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA5",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA6",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TRANSFORM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIFETIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"DELTA",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NUMBER",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INDEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EMISSION_TRANSFORM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EMITTER_VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INTERPOLATE_TO_END",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RANDOM_SEED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_ROT_SCALE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RESTART_POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RESTART_ROT_SCALE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RESTART_VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RESTART_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RESTART_CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"start",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AMOUNT_RATIO",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,2);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"start",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"MASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ACTIVE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RESTART",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA1",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA2",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA3",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA4",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA5",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"USERDATA6",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TRANSFORM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIFETIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"DELTA",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"NUMBER",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INDEX",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EMISSION_TRANSFORM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x13;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EMITTER_VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"INTERPOLATE_TO_END",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RANDOM_SEED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_ROT_SCALE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_VELOCITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FLAG_EMIT_CUSTOM",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 9;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLLIDED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLLISION_NORMAL",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLLISION_DEPTH",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ATTRACTOR_FORCE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"process",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AMOUNT_RATIO",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,2);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"process",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  local_50[0] = 0;
  StringName::StringName((StringName *)&local_80,"xform",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,0x13);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_80,"velocity",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,0xf);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if ((StringName::configured != '\0') &&
     (((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (CONCAT44(uStack_7c,local_80) != 0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_80,"color",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,0x10);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_80,"custom",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,0x10);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_80,"flags",false);
  local_78 = (char *)0x0;
  StringName::operator=((StringName *)&local_78,(StringName *)&local_80);
  local_70 = CONCAT44(local_70._4_4_,9);
  Vector<ShaderLanguage::StageFunctionInfo::Argument>::push_back
            ((Vector<ShaderLanguage::StageFunctionInfo::Argument> *)&local_68,
             (StringName *)&local_78);
  if ((StringName::configured != '\0') &&
     (((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (CONCAT44(uStack_7c,local_80) != 0)))) {
    StringName::unref();
  }
  local_58 = CONCAT44(local_58._4_4_,1);
  local_88 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"start",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"emit_subparticle",false);
  lVar8 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar7 + 0x30),(StringName *)&local_78);
  lVar7 = local_60;
  if (*(long *)(lVar8 + 8) != local_60) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar8 + 8),
               (CowData *)&local_60);
  }
  lVar3 = local_50[0];
  *(undefined4 *)(lVar8 + 0x10) = 1;
  if (*(long *)(lVar8 + 0x18) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar8 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  local_88 = 2;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_88);
  StringName::StringName((StringName *)&local_80,"process",false);
  lVar8 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"emit_subparticle",false);
  lVar8 = HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
          ::operator[]((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)(lVar8 + 0x30),(StringName *)&local_78);
  if (lVar7 != *(long *)(lVar8 + 8)) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar8 + 8),
               (CowData *)&local_60);
  }
  *(undefined4 *)(lVar8 + 0x10) = 1;
  if (lVar3 != *(long *)(lVar8 + 0x18)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar8 + 0x18),(CowData *)local_50);
  }
  if (((StringName::configured != '\0') &&
      ((local_78 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (CONCAT44(uStack_7c,local_80) != 0)) {
    StringName::unref();
  }
  if (lVar3 != 0) {
    LOCK();
    plVar10 = (long *)(lVar3 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      Memory::free_static((void *)(local_50[0] + -0x10),false);
    }
  }
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_60);
  local_80 = 2;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"collision_use_scale",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 2;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"disable_force",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"disable_velocity",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 2;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"keep_data",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PI",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TAU",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"E",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"RADIANCE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x1d;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AT_HALF_RES_PASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AT_QUARTER_RES_PASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"AT_CUBEMAP_PASS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT0_ENABLED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT0_DIRECTION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT0_ENERGY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT0_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT0_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT1_ENABLED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT1_DIRECTION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT1_ENERGY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT1_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT1_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT2_ENABLED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT2_DIRECTION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT2_ENERGY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT2_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT2_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT3_ENABLED",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 1;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT3_DIRECTION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT3_ENERGY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT3_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"LIGHT3_SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALPHA",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EYEDIR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SCREEN_UV",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FRAGCOORD",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SKY_COORDS",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xe;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"HALF_RES_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"QUARTER_RES_COLOR",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"sky",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"FOG",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0x10;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"sky",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"use_half_res_pass",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 3;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"use_quarter_res_pass",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"disable_fog",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if (((StringName::configured != '\0') &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 3;
  lVar7 = HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
          ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                        *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"use_debanding",false);
  StringName::StringName((StringName *)&local_68,(StringName *)&local_78);
  local_58 = 0;
  Vector<ShaderLanguage::ModeInfo>::push_back
            ((Vector<ShaderLanguage::ModeInfo> *)(lVar7 + 0x30),(StringName *)&local_68);
  CowData<StringName>::_unref((CowData<StringName> *)&local_58);
  if ((StringName::configured != '\0') &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"global",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TIME",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"PI",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"TAU",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"constants",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"E",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"WORLD_POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"OBJECT_POSITION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"UVW",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SIZE",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 1;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"SDF",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 1;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"ALBEDO",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"DENSITY",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xd;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (((bVar12) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 4;
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_80);
  StringName::StringName((StringName *)&local_78,"fog",false);
  pHVar5 = (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
            *)HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::operator[](pHVar4,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"EMISSION",false);
  puVar6 = (undefined4 *)
           HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
           ::operator[](pHVar5,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *puVar6 = 0xf;
  *(undefined1 *)(puVar6 + 1) = 0;
  if ((bVar12) &&
     (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_78 != (char *)0x0)))) {
    StringName::unref();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,4);
  pHVar4 = (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
            *)HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
              ::operator[]((HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
                            *)this,(StringName *)&local_78);
  StringName::StringName((StringName *)&local_68,"fog",false);
  lVar7 = HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
          ::operator[](pHVar4,(StringName *)&local_68);
  bVar12 = StringName::configured != '\0';
  *(undefined1 *)(lVar7 + 0x61) = 1;
  if ((bVar12) && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = (char *)0x0;
  local_68 = "spatial";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  if (*(long *)(this + 0x58) == 0) {
    pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x58) = pauVar11;
    *(undefined4 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
  }
  pCVar9 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar9 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar9 + 0x10) = (undefined1  [16])0x0;
  if (local_78 != (char *)0x0) {
    CowData<char32_t>::_ref(pCVar9,(CowData *)&local_78);
  }
  pcVar2 = local_78;
  plVar10 = *(long **)(this + 0x58);
  lVar7 = plVar10[1];
  *(undefined8 *)(pCVar9 + 8) = 0;
  *(long **)(pCVar9 + 0x18) = plVar10;
  *(long *)(pCVar9 + 0x10) = lVar7;
  if (lVar7 != 0) {
    *(CowData<char32_t> **)(lVar7 + 8) = pCVar9;
  }
  plVar10[1] = (long)pCVar9;
  if (*plVar10 == 0) {
    *plVar10 = (long)pCVar9;
  }
  *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)((long)local_78 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar2 + -0x10),false);
    }
  }
  local_78 = (char *)0x0;
  local_68 = "canvas_item";
  local_60 = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  if (*(long *)(this + 0x58) == 0) {
    pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x58) = pauVar11;
    *(undefined4 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
  }
  pCVar9 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar9 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar9 + 0x10) = (undefined1  [16])0x0;
  if (local_78 != (char *)0x0) {
    CowData<char32_t>::_ref(pCVar9,(CowData *)&local_78);
  }
  pcVar2 = local_78;
  plVar10 = *(long **)(this + 0x58);
  lVar7 = plVar10[1];
  *(undefined8 *)(pCVar9 + 8) = 0;
  *(long **)(pCVar9 + 0x18) = plVar10;
  *(long *)(pCVar9 + 0x10) = lVar7;
  if (lVar7 != 0) {
    *(CowData<char32_t> **)(lVar7 + 8) = pCVar9;
  }
  plVar10[1] = (long)pCVar9;
  if (*plVar10 == 0) {
    *plVar10 = (long)pCVar9;
  }
  *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)((long)local_78 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar2 + -0x10),false);
    }
  }
  local_78 = (char *)0x0;
  local_68 = "particles";
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_78);
  if (*(long *)(this + 0x58) == 0) {
    pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x58) = pauVar11;
    *(undefined4 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
  }
  pCVar9 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar9 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar9 + 0x10) = (undefined1  [16])0x0;
  if (local_78 != (char *)0x0) {
    CowData<char32_t>::_ref(pCVar9,(CowData *)&local_78);
  }
  pcVar2 = local_78;
  plVar10 = *(long **)(this + 0x58);
  lVar7 = plVar10[1];
  *(undefined8 *)(pCVar9 + 8) = 0;
  *(long **)(pCVar9 + 0x18) = plVar10;
  *(long *)(pCVar9 + 0x10) = lVar7;
  if (lVar7 != 0) {
    *(CowData<char32_t> **)(lVar7 + 8) = pCVar9;
  }
  plVar10[1] = (long)pCVar9;
  if (*plVar10 == 0) {
    *plVar10 = (long)pCVar9;
  }
  *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)((long)local_78 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar2 + -0x10),false);
    }
  }
  local_78 = (char *)0x0;
  local_68 = "sky";
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_78);
  if (*(long *)(this + 0x58) == 0) {
    pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x58) = pauVar11;
    *(undefined4 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
  }
  pCVar9 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar9 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar9 + 0x10) = (undefined1  [16])0x0;
  if (local_78 != (char *)0x0) {
    CowData<char32_t>::_ref(pCVar9,(CowData *)&local_78);
  }
  pcVar2 = local_78;
  plVar10 = *(long **)(this + 0x58);
  lVar7 = plVar10[1];
  *(undefined8 *)(pCVar9 + 8) = 0;
  *(long **)(pCVar9 + 0x18) = plVar10;
  *(long *)(pCVar9 + 0x10) = lVar7;
  if (lVar7 != 0) {
    *(CowData<char32_t> **)(lVar7 + 8) = pCVar9;
  }
  plVar10[1] = (long)pCVar9;
  if (*plVar10 == 0) {
    *plVar10 = (long)pCVar9;
  }
  *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)((long)local_78 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar2 + -0x10),false);
    }
  }
  local_78 = (char *)0x0;
  local_68 = "fog";
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_78);
  if (*(long *)(this + 0x58) == 0) {
    pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x58) = pauVar11;
    *(undefined4 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
  }
  pCVar9 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar9 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar9 + 0x10) = (undefined1  [16])0x0;
  if (local_78 != (char *)0x0) {
    CowData<char32_t>::_ref(pCVar9,(CowData *)&local_78);
  }
  pcVar2 = local_78;
  plVar10 = *(long **)(this + 0x58);
  lVar7 = plVar10[1];
  *(long **)(pCVar9 + 0x18) = plVar10;
  *(undefined8 *)(pCVar9 + 8) = 0;
  *(long *)(pCVar9 + 0x10) = lVar7;
  if (lVar7 != 0) {
    *(CowData<char32_t> **)(lVar7 + 8) = pCVar9;
  }
  plVar10[1] = (long)pCVar9;
  if (*plVar10 == 0) {
    *plVar10 = (long)pCVar9;
  }
  *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar10 = (long *)((long)local_78 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar2 + -0x10),false);
    }
    plVar10 = *(long **)(this + 0x58);
    if (plVar10 == (long *)0x0) goto LAB_0010ed47;
  }
  for (lVar7 = *plVar10; lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
    HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
              ((String *)&local_68);
  }
LAB_0010ed47:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
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
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010fdfc;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_0010fdfc:
    if (iVar37 != 0) {
      uVar30 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_00110179;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC3 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00110179;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = (&hash_table_size_primes)[uVar32];
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_00110179:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
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



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<ShaderLanguage::StageFunctionInfo::Argument>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ShaderLanguage::ModeInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ShaderLanguage::ModeInfo>::_copy_on_write(void)

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
LAB_00110890:
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
  if (lVar8 == 0) goto LAB_00110890;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0011076a:
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
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0011076a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00110737;
  }
  if (lVar8 == lVar5) {
LAB_0011080b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00110737:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001107eb;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0011080b;
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
LAB_001107eb:
  puVar7[-1] = param_1;
  return 0;
}



/* ShaderLanguage::ModeInfo::ModeInfo(StringName const&, StringName const&, StringName const&,
   StringName const&, StringName const&, StringName const&, StringName const&) */

void __thiscall
ShaderLanguage::ModeInfo::ModeInfo
          (ModeInfo *this,StringName *param_1,StringName *param_2,StringName *param_3,
          StringName *param_4,StringName *param_5,StringName *param_6,StringName *param_7)

{
  Vector<StringName> *pVVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  pVVar1 = (Vector<StringName> *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)this,param_1);
  *(undefined8 *)(this + 0x10) = 0;
  StringName::StringName((StringName *)&local_48,param_2);
  Vector<StringName>::push_back(pVVar1,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_48,param_3);
  Vector<StringName>::push_back(pVVar1,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_48,param_4);
  Vector<StringName>::push_back(pVVar1,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_48,param_5);
  Vector<StringName>::push_back(pVVar1,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_48,param_6);
  Vector<StringName>::push_back(pVVar1,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_48,param_7);
  Vector<StringName>::push_back(pVVar1,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
::_resize_and_rehash
          (HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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



/* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
::_resize_and_rehash
          (HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
/* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
::operator[](HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
             *this,StringName *param_1)

{
  undefined8 *puVar1;
  ulong __n;
  uint *puVar2;
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
  bool bVar43;
  uint local_88;
  long local_58;
  undefined4 local_50;
  uint uStack_4c;
  long local_40;
  
  lVar31 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar41 = CONCAT44(0,uVar28);
  if (lVar31 == 0) {
LAB_001113c0:
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
        goto LAB_00111288;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,__n);
      iVar34 = *(int *)(this + 0x2c);
LAB_0011128c:
      if (iVar34 != 0) {
LAB_00111294:
        uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
        uVar40 = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar29 * lVar31;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar33;
        lVar37 = SUB168(auVar12 * auVar24,8);
        uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
        uVar39 = SUB164(auVar12 * auVar24,8);
        if (uVar38 != 0) {
          do {
            if ((uVar29 == uVar38) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10) == *(long *)param_1))
            {
              puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar39 * 8);
              *(undefined4 *)(puVar30 + 3) = 0;
              *(undefined1 *)((long)puVar30 + 0x1c) = 0;
              goto LAB_00111074;
            }
            uVar40 = uVar40 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(uVar39 + 1) * lVar31;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar33;
            lVar37 = SUB168(auVar13 * auVar25,8);
            uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
            uVar39 = SUB164(auVar13 * auVar25,8);
          } while ((uVar38 != 0) &&
                  (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar31, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar33, auVar15._8_8_ = 0,
                  auVar15._0_8_ = (ulong)((uVar28 + uVar39) - SUB164(auVar14 * auVar26,8)) * lVar31,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar33, uVar40 <= SUB164(auVar15 * auVar27,8)))
          ;
        }
        iVar34 = *(int *)(this + 0x2c);
      }
      goto LAB_001110ab;
    }
    iVar34 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001110ab;
    if (iVar34 != 0) goto LAB_00111294;
LAB_001110cd:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar30 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00111074;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar34 = *(int *)(this + 0x2c);
    if (iVar34 != 0) {
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
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
      auVar4._0_8_ = (ulong)uVar29 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar41;
      lVar35 = SUB168(auVar4 * auVar16,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar39 = SUB164(auVar4 * auVar16,8);
      if (uVar38 != 0) {
        uVar40 = 0;
        do {
          if ((uVar29 == uVar38) &&
             (*(long *)(*(long *)(lVar31 + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            puVar30 = *(undefined8 **)(lVar31 + (ulong)uVar39 * 8);
            goto LAB_00111074;
          }
          uVar40 = uVar40 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar39 + 1) * lVar37;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar35 = SUB168(auVar5 * auVar17,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar39 = SUB164(auVar5 * auVar17,8);
        } while ((uVar38 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar38 * lVar37, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar39 + uVar28) - SUB164(auVar6 * auVar18,8)) * lVar37,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar41, uVar40 <= SUB164(auVar7 * auVar19,8)));
      }
      uVar41 = (ulong)(uint)(&hash_table_size_primes)[*(uint *)(this + 0x28)];
      if (lVar31 == 0) goto LAB_001113c0;
LAB_00111288:
      iVar34 = *(int *)(this + 0x2c);
      goto LAB_0011128c;
    }
LAB_001110ab:
    if ((float)uVar41 * __LC3 < (float)(iVar34 + 1)) goto LAB_001110cd;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  uStack_4c = uStack_4c & 0xffffff00;
  local_50 = 0;
  puVar30 = (undefined8 *)operator_new(0x20,"");
  *puVar30 = 0;
  puVar30[1] = 0;
  StringName::StringName((StringName *)(puVar30 + 2),(StringName *)&local_58);
  bVar43 = StringName::configured != '\0';
  puVar30[3] = CONCAT44(uStack_4c,local_50);
  if ((bVar43) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar30;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 == 0) goto LAB_0011139d;
LAB_0011117b:
    uVar28 = *(uint *)(lVar31 + 0x20);
  }
  else {
    *puVar3 = puVar30;
    puVar30[1] = puVar3;
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 != 0) goto LAB_0011117b;
LAB_0011139d:
    uVar28 = StringName::get_empty_hash();
  }
  lVar31 = *(long *)(this + 0x10);
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar41 = (ulong)uVar28;
  uVar39 = 0;
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar33 = CONCAT44(0,uVar29);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar41 * lVar37;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar33;
  lVar36 = SUB168(auVar8 * auVar20,8);
  lVar35 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar31 + lVar36 * 4);
  iVar34 = SUB164(auVar8 * auVar20,8);
  uVar38 = *puVar2;
  puVar3 = puVar30;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar37;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar33;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar29 + iVar34) - SUB164(auVar9 * auVar21,8)) * lVar37;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar33;
    local_88 = SUB164(auVar10 * auVar22,8);
    puVar42 = puVar3;
    if (local_88 < uVar39) {
      *puVar2 = (uint)uVar41;
      uVar41 = (ulong)uVar38;
      puVar1 = (undefined8 *)(lVar35 + lVar36 * 8);
      puVar42 = (undefined8 *)*puVar1;
      *puVar1 = puVar3;
      uVar39 = local_88;
    }
    uVar28 = (uint)uVar41;
    uVar39 = uVar39 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar37;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar33;
    lVar36 = SUB168(auVar11 * auVar23,8);
    puVar2 = (uint *)(lVar31 + lVar36 * 4);
    iVar34 = SUB164(auVar11 * auVar23,8);
    puVar3 = puVar42;
    uVar38 = *puVar2;
  }
  *(undefined8 **)(lVar35 + lVar36 * 8) = puVar3;
  *puVar2 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00111074:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar30 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref() */

void __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this)

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
          plVar4 = plVar4 + 2;
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



/* KeyValue<StringName, ShaderLanguage::FunctionInfo>::~KeyValue() */

void __thiscall
KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
          (KeyValue<StringName,ShaderLanguage::FunctionInfo> *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  pvVar5 = *(void **)(this + 0x40);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 100) != 0) {
      uVar2 = (&hash_table_size_primes)[*(uint *)(this + 0x60)];
      if (uVar2 == 0) {
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x48) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x48) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x30) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x30) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x30);
                *(undefined8 *)((long)pvVar5 + 0x30) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
                      ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)((long)pvVar5 + 0x20)
                      );
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar2 << 2 != lVar4);
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00111647;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x48),false);
  }
LAB_00111647:
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x34) != 0) {
      uVar2 = (&hash_table_size_primes)[*(uint *)(this + 0x30)];
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x18) + lVar4) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x18) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if ((bVar6) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001116ea;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x18),false);
  }
LAB_001116ea:
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
::_resize_and_rehash
          (HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
/* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
::operator[](HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
             *this,StringName *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong __n;
  undefined8 *puVar4;
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
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  undefined1 local_78 [16];
  long local_68 [2];
  long local_58;
  undefined4 local_50;
  long local_48;
  long local_40;
  
  lVar32 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar42 = CONCAT44(0,uVar29);
  if (lVar32 == 0) {
LAB_00111f3a:
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    uVar34 = uVar42 * 4;
    __n = uVar42 * 8;
    uVar33 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar42 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar42 != uVar34);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,__n);
      }
      goto LAB_00111b32;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00111c67;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00111b3e;
LAB_00111c89:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar31 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00111c49;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_88 = 0;
      local_90 = 0;
      local_80 = 0;
      uVar42 = (ulong)(uint)(&hash_table_size_primes)[*(uint *)(this + 0x28)];
    }
    else {
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar30 = StringName::get_empty_hash();
        lVar32 = *(long *)(this + 8);
      }
      else {
        uVar30 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar42;
      lVar36 = SUB168(auVar5 * auVar17,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
      uVar40 = SUB164(auVar5 * auVar17,8);
      if (uVar39 != 0) {
        uVar41 = 0;
        do {
          if ((uVar39 == uVar30) &&
             (*(long *)(*(long *)(lVar32 + lVar36 * 8) + 0x10) == *(long *)param_1)) {
            puVar31 = *(undefined8 **)(lVar32 + (ulong)uVar40 * 8);
            goto LAB_00111acc;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar40 + 1) * lVar37;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar36 = SUB168(auVar6 * auVar18,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
          uVar40 = SUB164(auVar6 * auVar18,8);
        } while ((uVar39 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar39 * lVar37, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar40 + uVar29) - SUB164(auVar7 * auVar19,8)) * lVar37,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
      local_88 = 0;
      local_90 = 0;
      local_80 = 0;
      uVar42 = (ulong)(uint)(&hash_table_size_primes)[*(uint *)(this + 0x28)];
      if (lVar32 == 0) goto LAB_00111f3a;
    }
LAB_00111b32:
    iVar35 = *(int *)(this + 0x2c);
    if (iVar35 != 0) {
LAB_00111b3e:
      uVar29 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      uVar34 = CONCAT44(0,uVar29);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
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
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar30 * lVar32;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar37 = SUB168(auVar9 * auVar21,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
      uVar40 = SUB164(auVar9 * auVar21,8);
      if (uVar39 != 0) {
        do {
          if ((uVar30 == uVar39) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10) == *(long *)param_1)) {
            lVar32 = *(long *)(*(long *)(this + 8) + (ulong)uVar40 * 8);
            if (*(long *)(lVar32 + 0x20) != 0) {
              CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
                        ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar32 + 0x20),
                         (CowData *)&local_90);
            }
            *(undefined4 *)(lVar32 + 0x28) = 0;
            if (*(long *)(lVar32 + 0x30) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar32 + 0x30),(CowData *)&local_80);
            }
            puVar31 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar40 * 8);
            goto LAB_00111c49;
          }
          uVar41 = uVar41 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar40 + 1) * lVar32;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar34;
          lVar37 = SUB168(auVar10 * auVar22,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
          uVar40 = SUB164(auVar10 * auVar22,8);
        } while ((uVar39 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar39 * lVar32, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar34, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar29 + uVar40) - SUB164(auVar11 * auVar23,8)) * lVar32,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar34, uVar41 <= SUB164(auVar12 * auVar24,8)));
      }
      iVar35 = *(int *)(this + 0x2c);
    }
LAB_00111c67:
    if ((float)uVar42 * __LC3 < (float)(iVar35 + 1)) goto LAB_00111c89;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)local_68,param_1);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  puVar31 = (undefined8 *)operator_new(0x38,"");
  *puVar31 = local_78._0_8_;
  puVar31[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar31 + 2),(StringName *)local_68);
  puVar31[4] = 0;
  if (local_58 != 0) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(puVar31 + 4),
               (CowData *)&local_58);
  }
  puVar31[6] = 0;
  *(undefined4 *)(puVar31 + 5) = local_50;
  if ((local_48 == 0) ||
     (CowData<char32_t>::_ref((CowData<char32_t> *)(puVar31 + 6),(CowData *)&local_48),
     lVar32 = local_48, local_48 == 0)) {
    local_a8 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar32 + -0x10),false);
    }
    local_a8 = local_80;
  }
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar32 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar31;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar32 == 0) goto LAB_00111ff5;
LAB_00111dbd:
    uVar29 = *(uint *)(lVar32 + 0x20);
  }
  else {
    *puVar4 = puVar31;
    puVar31[1] = puVar4;
    lVar32 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar31;
    if (lVar32 != 0) goto LAB_00111dbd;
LAB_00111ff5:
    uVar29 = StringName::get_empty_hash();
  }
  lVar32 = *(long *)(this + 0x10);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar42 = (ulong)uVar29;
  uVar40 = 0;
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar30 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar34 = CONCAT44(0,uVar30);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar42 * lVar37;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar34;
  lVar38 = SUB168(auVar13 * auVar25,8);
  lVar36 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar32 + lVar38 * 4);
  iVar35 = SUB164(auVar13 * auVar25,8);
  uVar39 = *puVar2;
  puVar4 = puVar31;
  while (uVar39 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar39 * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar34;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar30 + iVar35) - SUB164(auVar14 * auVar26,8)) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar34;
    uVar29 = SUB164(auVar15 * auVar27,8);
    puVar43 = puVar4;
    if (uVar29 < uVar40) {
      *puVar2 = (uint)uVar42;
      uVar42 = (ulong)uVar39;
      puVar3 = (undefined8 *)(lVar36 + lVar38 * 8);
      puVar43 = (undefined8 *)*puVar3;
      *puVar3 = puVar4;
      uVar40 = uVar29;
    }
    uVar29 = (uint)uVar42;
    uVar40 = uVar40 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar35 + 1) * lVar37;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar34;
    lVar38 = SUB168(auVar16 * auVar28,8);
    puVar2 = (uint *)(lVar32 + lVar38 * 4);
    iVar35 = SUB164(auVar16 * auVar28,8);
    puVar4 = puVar43;
    uVar39 = *puVar2;
  }
  *(undefined8 **)(lVar36 + lVar38 * 8) = puVar4;
  *puVar2 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_80 + -0x10),false);
    }
  }
LAB_00111c49:
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_90);
LAB_00111acc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar31 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ShaderLanguage::ModeInfo>::_unref() */

void __thiscall CowData<ShaderLanguage::ModeInfo>::_unref(CowData<ShaderLanguage::ModeInfo> *this)

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
          CowData<StringName>::_unref((CowData<StringName> *)(plVar4 + 2));
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 3;
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



/* CowData<ShaderLanguage::ModeInfo>::_ref(CowData<ShaderLanguage::ModeInfo> const&) [clone .part.0]
    */

void __thiscall
CowData<ShaderLanguage::ModeInfo>::_ref(CowData<ShaderLanguage::ModeInfo> *this,CowData *param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderLanguage::BuiltInInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::BuiltInInfo> > >::insert(StringName const&, ShaderLanguage::BuiltInInfo const&,
   bool) */

StringName *
HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
::insert(StringName *param_1,BuiltInInfo *param_2,bool param_3)

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
  uint uVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  long *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  long *plVar29;
  long lVar30;
  long lVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  bool bVar37;
  long local_58;
  long local_50;
  long local_40;
  
  plVar29 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar22;
    uVar35 = uVar21 * 4;
    uVar33 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar21 != uVar35);
      }
      else {
        memset(__s,0,uVar35);
        memset(__s_00,0,uVar33);
      }
      goto LAB_001121f0;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00112310;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001121fc;
LAB_00112332:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar24 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001122d1;
    }
    _resize_and_rehash((HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_001121f0:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_001121fc:
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
      uVar35 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*plVar29 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*plVar29 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar34 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar23 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar35;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar32 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar32 != 0) {
        do {
          if ((uVar23 == uVar32) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *plVar29)) {
            plVar24 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            *(int *)(plVar24 + 3) = (int)*in_RCX;
            *(undefined1 *)((long)plVar24 + 0x1c) = *(undefined1 *)((long)in_RCX + 4);
            goto LAB_001122d1;
          }
          uVar34 = uVar34 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar32 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar32 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar35, uVar34 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_00112310:
    if ((float)uVar22 * __LC3 < (float)(iVar28 + 1)) goto LAB_00112332;
  }
  StringName::StringName((StringName *)&local_58,(StringName *)plVar29);
  local_50 = *in_RCX;
  plVar24 = (long *)operator_new(0x20,"");
  *plVar24 = 0;
  plVar24[1] = 0;
  StringName::StringName((StringName *)(plVar24 + 2),(StringName *)&local_58);
  bVar37 = StringName::configured != '\0';
  plVar24[3] = local_50;
  if ((bVar37) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar24;
    *(long **)(param_2 + 0x20) = plVar24;
LAB_001123de:
    lVar25 = *plVar29;
    if (lVar25 != 0) goto LAB_001123eb;
LAB_001124f8:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar25 = *(long *)(param_2 + 0x18);
      *(long **)(lVar25 + 8) = plVar24;
      *plVar24 = lVar25;
      *(long **)(param_2 + 0x18) = plVar24;
      goto LAB_001123de;
    }
    *puVar3 = plVar24;
    plVar24[1] = (long)puVar3;
    lVar25 = *plVar29;
    *(long **)(param_2 + 0x20) = plVar24;
    if (lVar25 == 0) goto LAB_001124f8;
LAB_001123eb:
    uVar22 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar35 = (ulong)uVar22;
  uVar32 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar33 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar35 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar33;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar23 = *puVar1;
  plVar29 = plVar24;
  while (uVar23 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar23 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar33;
    uVar22 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar29;
    if (uVar22 < uVar32) {
      *puVar1 = (uint)uVar35;
      uVar35 = (ulong)uVar23;
      puVar3 = (undefined8 *)(lVar4 + lVar31 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar29;
      uVar32 = uVar22;
    }
    uVar22 = (uint)uVar35;
    uVar32 = uVar32 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar33;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    plVar29 = plVar36;
    uVar23 = *puVar1;
  }
  *(long **)(lVar4 + lVar31 * 8) = plVar29;
  *puVar1 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001122d1:
  *(long **)param_1 = plVar24;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderLanguage::StageFunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::StageFunctionInfo> > >::insert(StringName const&,
   ShaderLanguage::StageFunctionInfo const&, bool) */

StringName *
HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
::insert(StringName *param_1,StageFunctionInfo *param_2,bool param_3)

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
  uint uVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  long in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  long *plVar29;
  long lVar30;
  long lVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  long local_68 [2];
  long local_58;
  undefined4 local_50;
  long local_48;
  long local_40;
  
  plVar29 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar22;
    uVar35 = uVar21 * 4;
    uVar33 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar21 != uVar35);
      }
      else {
        memset(__s,0,uVar35);
        memset(__s_00,0,uVar33);
      }
      goto LAB_00112680;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001127a8;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011268c;
LAB_001127ca:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar24 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112a06;
    }
    _resize_and_rehash((HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00112680:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0011268c:
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
      uVar35 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*plVar29 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*plVar29 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar34 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar23 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar35;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar32 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar32 != 0) {
        do {
          if ((uVar32 == uVar23) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *plVar29)) {
            lVar25 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            if (*(long *)(lVar25 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
                        ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(lVar25 + 0x20),
                         (CowData *)(in_RCX + 8));
            }
            *(undefined4 *)(lVar25 + 0x28) = *(undefined4 *)(in_RCX + 0x10);
            if (*(long *)(lVar25 + 0x30) != *(long *)(in_RCX + 0x18)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(lVar25 + 0x30),(CowData *)(in_RCX + 0x18));
            }
            plVar24 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            goto LAB_00112a06;
          }
          uVar34 = uVar34 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar32 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar32 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar35, uVar34 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_001127a8:
    if ((float)uVar22 * __LC3 < (float)(iVar28 + 1)) goto LAB_001127ca;
  }
  StringName::StringName((StringName *)local_68,(StringName *)plVar29);
  local_58 = 0;
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_58,
               (CowData *)(in_RCX + 8));
  }
  local_50 = *(undefined4 *)(in_RCX + 0x10);
  local_48 = 0;
  if (*(long *)(in_RCX + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(in_RCX + 0x18));
  }
  plVar24 = (long *)operator_new(0x38,"");
  *plVar24 = 0;
  plVar24[1] = 0;
  StringName::StringName((StringName *)(plVar24 + 2),(StringName *)local_68);
  plVar24[4] = 0;
  if (local_58 != 0) {
    CowData<ShaderLanguage::StageFunctionInfo::Argument>::_ref
              ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)(plVar24 + 4),
               (CowData *)&local_58);
  }
  plVar24[6] = 0;
  *(undefined4 *)(plVar24 + 5) = local_50;
  if ((local_48 != 0) &&
     (CowData<char32_t>::_ref((CowData<char32_t> *)(plVar24 + 6),(CowData *)&local_48),
     lVar25 = local_48, local_48 != 0)) {
    LOCK();
    plVar36 = (long *)(local_48 + -0x10);
    *plVar36 = *plVar36 + -1;
    UNLOCK();
    if (*plVar36 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
  CowData<ShaderLanguage::StageFunctionInfo::Argument>::_unref
            ((CowData<ShaderLanguage::StageFunctionInfo::Argument> *)&local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar24;
    *(long **)(param_2 + 0x20) = plVar24;
LAB_0011290b:
    lVar25 = *plVar29;
    if (lVar25 != 0) goto LAB_00112918;
LAB_00112a5c:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar3 = plVar24;
      plVar24[1] = (long)puVar3;
      *(long **)(param_2 + 0x20) = plVar24;
      goto LAB_0011290b;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = plVar24;
    *plVar24 = lVar25;
    lVar25 = *plVar29;
    *(long **)(param_2 + 0x18) = plVar24;
    if (lVar25 == 0) goto LAB_00112a5c;
LAB_00112918:
    uVar22 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar35 = (ulong)uVar22;
  uVar32 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar33 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar35 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar33;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar23 = *puVar1;
  plVar29 = plVar24;
  while (uVar23 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar23 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar33;
    uVar22 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar29;
    if (uVar22 < uVar32) {
      *puVar1 = (uint)uVar35;
      uVar35 = (ulong)uVar23;
      puVar3 = (undefined8 *)(lVar4 + lVar31 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar29;
      uVar32 = uVar22;
    }
    uVar22 = (uint)uVar35;
    uVar32 = uVar32 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar33;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    plVar29 = plVar36;
    uVar23 = *puVar1;
  }
  *(long **)(lVar4 + lVar31 * 8) = plVar29;
  *puVar1 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00112a06:
  *(long **)param_1 = plVar24;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
::operator[](HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
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
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 uVar33;
  void *__s_00;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  long *plVar43;
  undefined8 *puVar44;
  long in_FS_OFFSET;
  undefined8 *local_150;
  StringName local_140 [8];
  FunctionInfo local_138 [8];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  StringName local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined2 local_50;
  long local_40;
  
  lVar32 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar30 = CONCAT44(0,uVar28);
  if (lVar32 == 0) {
LAB_00112cf0:
    local_d8 = 0;
    local_130 = (undefined1  [16])0x0;
    local_110 = _LC29;
    local_e0 = _LC29;
    local_120 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    if (lVar32 != 0) goto LAB_00112d3d;
    uVar42 = (ulong)uVar28;
    uVar30 = uVar42 * 4;
    uVar39 = uVar42 * 8;
    uVar33 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar28 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar30))) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)__s + uVar30 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar42 != uVar30);
      }
      else {
        memset(__s,0,uVar30);
        memset(__s_00,0,uVar39);
      }
      goto LAB_00112d3d;
    }
    iVar34 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00112e4b;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00112d4d;
LAB_00112e6d:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_150 = (undefined8 *)0x18;
      goto LAB_00112cbd;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar27 = StringName::get_empty_hash();
        lVar32 = *(long *)(this + 8);
      }
      else {
        uVar27 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar27 == 0) {
        uVar27 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar27 * lVar36;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar30;
      lVar35 = SUB168(auVar3 * auVar15,8);
      uVar38 = SUB164(auVar3 * auVar15,8);
      uVar29 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      if (uVar29 != 0) {
        uVar40 = 0;
        do {
          if ((uVar27 == uVar29) &&
             (*(long *)(*(long *)(lVar32 + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            local_150 = (undefined8 *)(*(long *)(lVar32 + (ulong)uVar38 * 8) + 0x18);
            goto LAB_00112cbd;
          }
          uVar40 = uVar40 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar38 + 1) * lVar36;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar30;
          lVar35 = SUB168(auVar4 * auVar16,8);
          uVar29 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar38 = SUB164(auVar4 * auVar16,8);
        } while ((uVar29 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar29 * lVar36, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar30, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar28 + uVar38) - SUB164(auVar5 * auVar17,8)) * lVar36,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar30, uVar40 <= SUB164(auVar6 * auVar18,8)));
      }
      goto LAB_00112cf0;
    }
    local_110 = _LC29;
    local_d8 = 0;
    local_130 = (undefined1  [16])0x0;
    local_120 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    local_e0 = local_110;
LAB_00112d3d:
    iVar34 = *(int *)(this + 0x2c);
    if (iVar34 != 0) {
LAB_00112d4d:
      uVar27 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      uVar30 = CONCAT44(0,uVar27);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar29 = StringName::get_empty_hash();
      }
      else {
        uVar29 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar29 == 0) {
        uVar29 = 1;
      }
      uVar41 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar29 * lVar32;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar40 = SUB164(auVar7 * auVar19,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
      if (uVar38 != 0) {
        do {
          if ((uVar29 == uVar38) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar36 * 8) + 0x10) == *(long *)param_1)) {
            ShaderLanguage::FunctionInfo::operator=
                      ((FunctionInfo *)(*(long *)(*(long *)(this + 8) + (ulong)uVar40 * 8) + 0x18),
                       local_138);
            local_150 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar40 * 8) + 0x18);
            goto LAB_00112cbd;
          }
          uVar41 = uVar41 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar40 + 1) * lVar32;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar30;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar36 * 4);
          uVar40 = SUB164(auVar8 * auVar20,8);
        } while ((uVar38 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar38 * lVar32, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar30, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar27 + uVar40) - SUB164(auVar9 * auVar21,8)) * lVar32,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar30, uVar41 <= SUB164(auVar10 * auVar22,8)));
      }
      iVar34 = *(int *)(this + 0x2c);
    }
    uVar42 = (ulong)uVar28;
LAB_00112e4b:
    if ((float)uVar42 * __LC3 < (float)(iVar34 + 1)) goto LAB_00112e6d;
  }
  local_c8 = (undefined1  [16])0x0;
  StringName::StringName(local_b8,param_1);
  uVar30 = 1;
  local_88 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar30]) {
      local_88 = uVar30 & 0xffffffff;
      goto LAB_00112f1b;
    }
    uVar30 = uVar30 + 1;
  } while (uVar30 != 0x1d);
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00112f1b:
  local_58 = 0;
  uVar30 = 1;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar30]) {
      local_58 = uVar30 & 0xffffffff;
      goto LAB_00112f83;
    }
    uVar30 = uVar30 + 1;
  } while (uVar30 != 0x1d);
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00112f83:
  local_50 = 0;
  puVar31 = (undefined8 *)operator_new(0x80,"");
  *puVar31 = local_c8._0_8_;
  puVar31[1] = local_c8._8_8_;
  StringName::StringName((StringName *)(puVar31 + 2),local_b8);
  puVar31[8] = 0;
  *(undefined1 (*) [16])(puVar31 + 4) = (undefined1  [16])0x0;
  uVar28 = (&hash_table_size_primes)[local_88 & 0xffffffff];
  *(undefined1 (*) [16])(puVar31 + 6) = (undefined1  [16])0x0;
  lVar32 = 1;
  if (5 < uVar28) {
    do {
      if (uVar28 <= (uint)(&hash_table_size_primes)[lVar32]) {
        *(int *)(puVar31 + 8) = (int)lVar32;
        goto LAB_00113031;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00113031:
  if ((local_88._4_4_ != 0) && ((long *)local_98._0_8_ != (long *)0x0)) {
    plVar43 = (long *)local_98._0_8_;
    do {
      HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
      ::insert(local_140,(BuiltInInfo *)(puVar31 + 3),(bool)((char)plVar43 + '\x10'));
      plVar43 = (long *)*plVar43;
    } while (plVar43 != (long *)0x0);
  }
  local_150 = puVar31 + 3;
  puVar31[0xe] = 0;
  *(undefined1 (*) [16])(puVar31 + 10) = (undefined1  [16])0x0;
  uVar28 = (&hash_table_size_primes)[local_58 & 0xffffffff];
  *(undefined1 (*) [16])(puVar31 + 0xc) = (undefined1  [16])0x0;
  lVar32 = 1;
  if (5 < uVar28) {
    do {
      if (uVar28 <= (uint)(&hash_table_size_primes)[lVar32]) {
        *(int *)(puVar31 + 0xe) = (int)lVar32;
        goto LAB_001130f0;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001130f0:
  if ((local_58._4_4_ != 0) && ((long *)local_68._0_8_ != (long *)0x0)) {
    plVar43 = (long *)local_68._0_8_;
    do {
      HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
      ::insert(local_140,(StageFunctionInfo *)(puVar31 + 9),(bool)((char)plVar43 + '\x10'));
      plVar43 = (long *)*plVar43;
    } while (plVar43 != (long *)0x0);
  }
  *(undefined2 *)(puVar31 + 0xf) = local_50;
  KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
            ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)local_b8);
  puVar44 = *(undefined8 **)(this + 0x20);
  if (puVar44 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar31;
  }
  else {
    *puVar44 = puVar31;
    puVar31[1] = puVar44;
  }
  *(undefined8 **)(this + 0x20) = puVar31;
  if (*(long *)param_1 == 0) {
    uVar28 = StringName::get_empty_hash();
  }
  else {
    uVar28 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar30 = (ulong)uVar28;
  uVar38 = 0;
  lVar32 = *(long *)(this + 0x10);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar27 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar39 = CONCAT44(0,uVar27);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar30 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar39;
  lVar37 = SUB168(auVar11 * auVar23,8);
  lVar35 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar32 + lVar37 * 4);
  iVar34 = SUB164(auVar11 * auVar23,8);
  uVar29 = *puVar1;
  while (uVar29 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar29 * lVar36;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar39;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar27 + iVar34) - SUB164(auVar12 * auVar24,8)) * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar39;
    uVar28 = SUB164(auVar13 * auVar25,8);
    puVar44 = puVar31;
    if (uVar28 < uVar38) {
      puVar2 = (undefined8 *)(lVar35 + lVar37 * 8);
      *puVar1 = (uint)uVar30;
      uVar30 = (ulong)uVar29;
      puVar44 = (undefined8 *)*puVar2;
      *puVar2 = puVar31;
      uVar38 = uVar28;
    }
    uVar28 = (uint)uVar30;
    uVar38 = uVar38 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar34 + 1) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar39;
    lVar37 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar32 + lVar37 * 4);
    iVar34 = SUB164(auVar14 * auVar26,8);
    puVar31 = puVar44;
    uVar29 = *puVar1;
  }
  *(undefined8 **)(lVar35 + lVar37 * 8) = puVar31;
  *puVar1 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00112cbd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_150;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderLanguage::FunctionInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::FunctionInfo> > >::insert(StringName const&, ShaderLanguage::FunctionInfo const&,
   bool) */

StringName *
HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
::insert(StringName *param_1,FunctionInfo *param_2,bool param_3)

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
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  void *__s_00;
  FunctionInfo *in_RCX;
  uint uVar28;
  int iVar29;
  undefined7 in_register_00000011;
  long *plVar30;
  long lVar31;
  long lVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  StringName local_d0 [8];
  undefined1 local_c8 [16];
  StringName local_b8 [8];
  BuiltInInfo local_b0 [8];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  StageFunctionInfo local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined2 local_50;
  long local_40;
  
  plVar30 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar22;
    uVar24 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar27 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar21 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar34);
      }
      goto LAB_001134a9;
    }
    iVar29 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001135a1;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001134b5;
LAB_001135c3:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar25 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00113a36;
    }
    _resize_and_rehash((HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_001134a9:
    iVar29 = *(int *)(param_2 + 0x2c);
    if (iVar29 != 0) {
LAB_001134b5:
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
      uVar24 = CONCAT44(0,uVar2);
      lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*plVar30 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*plVar30 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar23 * lVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar24;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar28 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar23) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10) == *plVar30)) {
            ShaderLanguage::FunctionInfo::operator=
                      ((FunctionInfo *)
                       (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8) + 0x18),in_RCX);
            plVar25 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
            goto LAB_00113a36;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar28 + 1) * lVar26;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar24;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar28 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar26, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar24, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar28) - SUB164(auVar7 * auVar15,8)) * lVar26,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar24, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar29 = *(int *)(param_2 + 0x2c);
    }
LAB_001135a1:
    if ((float)uVar22 * __LC3 < (float)(iVar29 + 1)) goto LAB_001135c3;
  }
  local_c8 = (undefined1  [16])0x0;
  StringName::StringName(local_b8,(StringName *)plVar30);
  local_88 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  uVar24 = 1;
  if (5 < (uint)(&hash_table_size_primes)[*(uint *)(in_RCX + 0x28)]) {
    do {
      if ((uint)(&hash_table_size_primes)[*(uint *)(in_RCX + 0x28)] <=
          (uint)(&hash_table_size_primes)[uVar24]) {
        iVar29 = *(int *)(in_RCX + 0x2c);
        local_88 = uVar24 & 0xffffffff;
        goto joined_r0x00113b0e;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar29 = *(int *)(in_RCX + 0x2c);
joined_r0x00113b0e:
  if ((iVar29 != 0) && (plVar25 = *(long **)(in_RCX + 0x18), plVar25 != (long *)0x0)) {
    do {
      HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
      ::insert(local_d0,local_b0,(bool)((char)plVar25 + '\x10'));
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  local_58 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  uVar24 = 1;
  if (5 < (uint)(&hash_table_size_primes)[*(uint *)(in_RCX + 0x58)]) {
    do {
      if ((uint)(&hash_table_size_primes)[*(uint *)(in_RCX + 0x58)] <=
          (uint)(&hash_table_size_primes)[uVar24]) {
        iVar29 = *(int *)(in_RCX + 0x5c);
        local_58 = uVar24 & 0xffffffff;
        goto joined_r0x00113aae;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar29 = *(int *)(in_RCX + 0x5c);
joined_r0x00113aae:
  if ((iVar29 != 0) && (plVar25 = *(long **)(in_RCX + 0x48), plVar25 != (long *)0x0)) {
    do {
      HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
      ::insert(local_d0,local_80,(bool)((char)plVar25 + '\x10'));
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  local_50 = *(undefined2 *)(in_RCX + 0x60);
  plVar25 = (long *)operator_new(0x80,"");
  *plVar25 = local_c8._0_8_;
  plVar25[1] = local_c8._8_8_;
  StringName::StringName((StringName *)(plVar25 + 2),local_b8);
  plVar25[8] = 0;
  *(undefined1 (*) [16])(plVar25 + 4) = (undefined1  [16])0x0;
  uVar22 = (&hash_table_size_primes)[local_88 & 0xffffffff];
  *(undefined1 (*) [16])(plVar25 + 6) = (undefined1  [16])0x0;
  lVar26 = 1;
  if (5 < uVar22) {
    do {
      if (uVar22 <= (uint)(&hash_table_size_primes)[lVar26]) {
        *(int *)(plVar25 + 8) = (int)lVar26;
        goto joined_r0x00113acc;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
joined_r0x00113acc:
  if ((local_88._4_4_ != 0) && ((long *)local_98._0_8_ != (long *)0x0)) {
    plVar36 = (long *)local_98._0_8_;
    do {
      HashMap<StringName,ShaderLanguage::BuiltInInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::BuiltInInfo>>>
      ::insert(local_d0,(BuiltInInfo *)(plVar25 + 3),(bool)((char)plVar36 + '\x10'));
      plVar36 = (long *)*plVar36;
    } while (plVar36 != (long *)0x0);
  }
  plVar25[0xe] = 0;
  *(undefined1 (*) [16])(plVar25 + 10) = (undefined1  [16])0x0;
  uVar22 = (&hash_table_size_primes)[local_58 & 0xffffffff];
  *(undefined1 (*) [16])(plVar25 + 0xc) = (undefined1  [16])0x0;
  lVar26 = 1;
  if (5 < uVar22) {
    do {
      if (uVar22 <= (uint)(&hash_table_size_primes)[lVar26]) {
        *(int *)(plVar25 + 0xe) = (int)lVar26;
        goto joined_r0x00113aec;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
joined_r0x00113aec:
  if ((local_58._4_4_ != 0) && ((long *)local_68._0_8_ != (long *)0x0)) {
    plVar36 = (long *)local_68._0_8_;
    do {
      HashMap<StringName,ShaderLanguage::StageFunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::StageFunctionInfo>>>
      ::insert(local_d0,(StageFunctionInfo *)(plVar25 + 9),(bool)((char)plVar36 + '\x10'));
      plVar36 = (long *)*plVar36;
    } while (plVar36 != (long *)0x0);
  }
  *(undefined2 *)(plVar25 + 0xf) = local_50;
  KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
            ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)local_b8);
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar25;
    *(long **)(param_2 + 0x20) = plVar25;
LAB_00113940:
    lVar26 = *plVar30;
    if (lVar26 != 0) goto LAB_00113950;
LAB_00113a8f:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar3 = plVar25;
      plVar25[1] = (long)puVar3;
      *(long **)(param_2 + 0x20) = plVar25;
      goto LAB_00113940;
    }
    lVar26 = *(long *)(param_2 + 0x18);
    *(long **)(lVar26 + 8) = plVar25;
    *plVar25 = lVar26;
    *(long **)(param_2 + 0x18) = plVar25;
    lVar26 = *plVar30;
    if (lVar26 == 0) goto LAB_00113a8f;
LAB_00113950:
    uVar22 = *(uint *)(lVar26 + 0x20);
  }
  lVar26 = *(long *)(param_2 + 0x10);
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar24 = (ulong)uVar22;
  uVar33 = 0;
  lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar24 * lVar31;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar26 + lVar32 * 4);
  iVar29 = SUB164(auVar9 * auVar17,8);
  uVar23 = *puVar1;
  plVar30 = plVar25;
  while (uVar23 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar23 * lVar31;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar29 + uVar2) - SUB164(auVar10 * auVar18,8)) * lVar31;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar22 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar30;
    if (uVar22 < uVar33) {
      *puVar1 = (uint)uVar24;
      uVar24 = (ulong)uVar23;
      puVar3 = (undefined8 *)(lVar4 + lVar32 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar30;
      uVar33 = uVar22;
    }
    uVar22 = (uint)uVar24;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar29 + 1) * lVar31;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar26 + lVar32 * 4);
    iVar29 = SUB164(auVar12 * auVar20,8);
    plVar30 = plVar36;
    uVar23 = *puVar1;
  }
  *(long **)(lVar4 + lVar32 * 8) = plVar30;
  *puVar1 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00113a36:
  *(long **)param_1 = plVar25;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00114348) */
/* WARNING: Removing unreachable block (ram,0x00114357) */
/* WARNING: Removing unreachable block (ram,0x00114369) */
/* WARNING: Removing unreachable block (ram,0x00114380) */
/* WARNING: Removing unreachable block (ram,0x00114387) */
/* WARNING: Removing unreachable block (ram,0x001143ad) */
/* WARNING: Removing unreachable block (ram,0x001143ba) */
/* WARNING: Removing unreachable block (ram,0x001143c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RenderingServer::ShaderMode, ShaderTypes::Type, HashMapHasherDefault,
   HashMapComparatorDefault<RenderingServer::ShaderMode>,
   DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode, ShaderTypes::Type> >
   >::operator[](RenderingServer::ShaderMode const&) */

undefined1 * __thiscall
HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
::operator[](HashMap<RenderingServer::ShaderMode,ShaderTypes::Type,HashMapHasherDefault,HashMapComparatorDefault<RenderingServer::ShaderMode>,DefaultTypedAllocator<HashMapElement<RenderingServer::ShaderMode,ShaderTypes::Type>>>
             *this,ShaderMode *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *__s;
  void *pvVar4;
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
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  long lVar43;
  int *piVar44;
  ulong uVar45;
  int iVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  int *piVar58;
  undefined8 *puVar59;
  undefined1 (*pauVar60) [16];
  long in_FS_OFFSET;
  void *local_108;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_48;
  long local_40;
  
  local_108 = *(void **)(this + 8);
  uVar39 = *(uint *)param_1;
  uVar52 = (ulong)uVar39;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar57 = (&hash_table_size_primes)[uVar40];
  uVar51 = CONCAT44(0,uVar57);
  if (local_108 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar52 = uVar51 * 8;
    local_a0 = 0;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_108 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = local_108;
    if (uVar57 == 0) {
      uVar52 = (ulong)*(uint *)param_1;
      iVar46 = *(int *)(this + 0x2c);
      if (local_108 == (void *)0x0) goto LAB_00113de6;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_108 + uVar52)) &&
         (local_108 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_108 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        uVar52 = (ulong)*(uint *)param_1;
        iVar46 = *(int *)(this + 0x2c);
      }
      else {
        memset(pvVar4,0,uVar40);
        memset(local_108,0,uVar52);
        uVar52 = (ulong)*(uint *)param_1;
        iVar46 = *(int *)(this + 0x2c);
      }
    }
    if (iVar46 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar43 = *(long *)(this + 0x10);
      goto LAB_00114403;
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 == 0) {
      local_a0 = 0;
    }
    else {
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar38 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar56 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar56 = 1;
        uVar47 = uVar3;
      }
      else {
        uVar47 = uVar56 * uVar3;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar51;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar47;
      lVar48 = SUB168(auVar5 * auVar21,8);
      lVar43 = *(long *)(this + 0x10);
      uVar54 = SUB164(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar43 + lVar48 * 4);
      if (uVar38 != 0) {
        uVar55 = 0;
        do {
          if ((uVar56 == uVar38) &&
             (uVar39 == *(uint *)(*(long *)((long)local_108 + lVar48 * 8) + 0x10))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_108 + (ulong)uVar54 * 8);
            goto LAB_00113d8b;
          }
          uVar55 = uVar55 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar54 + 1) * uVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar51;
          lVar48 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar43 + lVar48 * 4);
          uVar54 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar51, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar54 + uVar57) - SUB164(auVar7 * auVar23,8)) * uVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar51, uVar55 <= SUB164(auVar8 * auVar24,8)));
      }
      local_a0 = 0;
LAB_00114403:
      uVar47 = CONCAT44(0,(&hash_table_size_primes)[uVar40]);
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = ((uint)(uVar52 >> 0x10) ^ (uint)uVar52) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar57 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar57 = 1;
        uVar45 = uVar3;
      }
      else {
        uVar45 = uVar57 * uVar3;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar47;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar45;
      lVar48 = SUB168(auVar17 * auVar33,8);
      uVar39 = *(uint *)(lVar43 + lVar48 * 4);
      uVar38 = SUB164(auVar17 * auVar33,8);
      if (uVar39 != 0) {
        uVar56 = 0;
        do {
          if ((uVar57 == uVar39) &&
             (*(uint *)(*(long *)((long)local_108 + lVar48 * 8) + 0x10) == (uint)uVar52)) {
            lVar43 = *(long *)((long)local_108 + (ulong)uVar38 * 8);
            uVar39 = *(uint *)(lVar43 + 0x40);
            uVar57 = (&hash_table_size_primes)[uVar39];
            if ((*(int *)(lVar43 + 0x44) == 0) || (*(long *)(lVar43 + 0x20) == 0))
            goto LAB_001144f2;
            lVar48 = 0;
            if (uVar57 != 0) goto LAB_001147a0;
            *(undefined4 *)(lVar43 + 0x44) = 0;
            *(undefined1 (*) [16])(lVar43 + 0x30) = (undefined1  [16])0x0;
            goto LAB_001144f7;
          }
          uVar56 = uVar56 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar38 + 1) * uVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar47;
          lVar48 = SUB168(auVar18 * auVar34,8);
          uVar39 = *(uint *)(lVar43 + lVar48 * 4);
          uVar38 = SUB164(auVar18 * auVar34,8);
        } while ((uVar39 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar39 * uVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar47, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (((&hash_table_size_primes)[uVar40] + uVar38) - SUB164(auVar19 * auVar35,8)) *
                     uVar3, auVar36._8_8_ = 0, auVar36._0_8_ = uVar47,
                uVar56 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00113de6:
  if ((float)uVar51 * __LC3 < (float)(iVar46 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011432e;
    }
    uVar40 = (ulong)(uVar39 + 1);
    uVar57 = (&hash_table_size_primes)[uVar39];
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar39 + 1 < 2) {
      uVar40 = 2;
    }
    uVar39 = (&hash_table_size_primes)[uVar40];
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar51 = (ulong)uVar39;
    uVar40 = uVar51 * 4;
    uVar52 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar51);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar52);
      }
    }
    uVar40 = 0;
    if (uVar57 != 0) {
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar39 != 0) {
          uVar54 = 0;
          lVar43 = *(long *)(this + 0x10);
          uVar38 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar52 = CONCAT44(0,uVar38);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar48;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar52;
          lVar49 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar49 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar56 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_108 + uVar40 * 8);
          while (uVar56 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar56 * lVar48;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar38 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar48;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            uVar55 = SUB164(auVar11 * auVar27,8);
            uVar53 = uVar41;
            if (uVar55 < uVar54) {
              *puVar1 = uVar39;
              puVar59 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar59;
              *puVar59 = uVar41;
              uVar39 = uVar56;
              uVar54 = uVar55;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            lVar49 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar49 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar53;
            uVar56 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar41;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar57 != uVar40);
      Memory::free_static(local_108,false);
      Memory::free_static(pvVar4,false);
    }
  }
  local_58 = 0;
  local_98 = (undefined1  [16])0x0;
  uVar2 = *(undefined4 *)param_1;
  local_78 = (undefined1  [16])0x0;
  uVar40 = 1;
  local_68 = (undefined1  [16])0x0;
  do {
    local_88 = uVar2;
    if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) {
      local_58 = uVar40 & 0xffffffff;
      uVar40 = uVar40 & 0xffffffff;
      goto LAB_00114094;
    }
    uVar40 = uVar40 + 1;
  } while (uVar40 != 0x1d);
  uVar40 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00114094:
  local_48 = 0;
  pauVar42 = (undefined1 (*) [16])operator_new(0x58,"");
  *(undefined4 *)pauVar42[1] = uVar2;
  *(undefined8 *)pauVar42[4] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  pauVar42[2] = (undefined1  [16])0x0;
  pauVar42[3] = (undefined1  [16])0x0;
  lVar43 = 1;
  if (5 < (uint)(&hash_table_size_primes)[uVar40]) {
    do {
      if ((uint)(&hash_table_size_primes)[uVar40] <= (uint)(&hash_table_size_primes)[lVar43]) {
        *(int *)pauVar42[4] = (int)lVar43;
        goto LAB_00114130;
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00114130:
  *(undefined8 *)pauVar42[5] = 0;
  CowData<ShaderLanguage::ModeInfo>::_unref((CowData<ShaderLanguage::ModeInfo> *)&local_48);
  uVar41 = local_78._0_8_;
  if ((undefined8 *)local_78._0_8_ != (undefined8 *)0x0) {
    uVar53 = local_78._8_8_;
    if ((local_58._4_4_ != 0) && ((&hash_table_size_primes)[local_58 & 0xffffffff] != 0)) {
      piVar44 = (int *)(local_78._8_8_ +
                       (ulong)(uint)(&hash_table_size_primes)[local_58 & 0xffffffff] * 4);
      piVar58 = (int *)local_78._8_8_;
      puVar59 = (undefined8 *)local_78._0_8_;
      do {
        if (*piVar58 != 0) {
          pvVar4 = (void *)*puVar59;
          *piVar58 = 0;
          KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
                    ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *puVar59 = 0;
        }
        piVar58 = piVar58 + 1;
        puVar59 = puVar59 + 1;
      } while (piVar58 != piVar44);
    }
    Memory::free_static((void *)uVar41,false);
    Memory::free_static((void *)uVar53,false);
  }
  puVar59 = *(undefined8 **)(this + 0x20);
  if (puVar59 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar59 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar59;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar39 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar57 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar57 ^ uVar57 >> 0x10;
  if (uVar57 == uVar57 >> 0x10) {
    uVar40 = 1;
    uVar39 = 1;
  }
  else {
    uVar40 = (ulong)uVar39;
  }
  uVar56 = 0;
  lVar43 = *(long *)(this + 0x10);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar57 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar52 = CONCAT44(0,uVar57);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar48;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  lVar50 = SUB168(auVar13 * auVar29,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar50 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar38 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar38 * lVar48;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar46 + uVar57) - SUB164(auVar14 * auVar30,8)) * lVar48;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    uVar54 = SUB164(auVar15 * auVar31,8);
    pauVar60 = pauVar37;
    if (uVar54 < uVar56) {
      *puVar1 = uVar39;
      puVar59 = (undefined8 *)(lVar49 + lVar50 * 8);
      pauVar60 = (undefined1 (*) [16])*puVar59;
      *puVar59 = pauVar37;
      uVar39 = uVar38;
      uVar56 = uVar54;
    }
    uVar56 = uVar56 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar52;
    lVar50 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar50 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar60;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar49 + lVar50 * 8) = pauVar37;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011432e:
  CowData<ShaderLanguage::ModeInfo>::_unref((CowData<ShaderLanguage::ModeInfo> *)&local_a0);
LAB_00113d8b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar42[1] + 8;
LAB_001147a0:
  do {
    piVar44 = (int *)(*(long *)(lVar43 + 0x28) + lVar48);
    if (*piVar44 != 0) {
      *piVar44 = 0;
      pvVar4 = *(void **)(*(long *)(lVar43 + 0x20) + lVar48 * 2);
      KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
                ((KeyValue<StringName,ShaderLanguage::FunctionInfo> *)((long)pvVar4 + 0x10));
      Memory::free_static(pvVar4,false);
      *(undefined8 *)(*(long *)(lVar43 + 0x20) + lVar48 * 2) = 0;
    }
    lVar48 = lVar48 + 4;
  } while ((ulong)uVar57 << 2 != lVar48);
  uVar39 = *(uint *)(lVar43 + 0x40);
  *(undefined4 *)(lVar43 + 0x44) = 0;
  *(undefined1 (*) [16])(lVar43 + 0x30) = (undefined1  [16])0x0;
  uVar57 = (&hash_table_size_primes)[uVar39];
LAB_001144f2:
  if (uVar57 < 0x17) {
LAB_001144f7:
    if (uVar39 != 0x1c) {
      uVar40 = (ulong)uVar39;
      do {
        uVar57 = (int)uVar40 + 1;
        uVar40 = (ulong)uVar57;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) {
          if (uVar39 != uVar57) {
            if (*(long *)(lVar43 + 0x20) == 0) {
              *(uint *)(lVar43 + 0x40) = uVar57;
            }
            else {
              HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
              ::_resize_and_rehash
                        ((HashMap<StringName,ShaderLanguage::FunctionInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderLanguage::FunctionInfo>>>
                          *)(lVar43 + 0x18),uVar57);
            }
          }
          goto LAB_00114549;
        }
      } while (uVar57 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00114549:
  if (*(long *)(lVar43 + 0x50) != 0) {
    CowData<ShaderLanguage::ModeInfo>::_ref
              ((CowData<ShaderLanguage::ModeInfo> *)(lVar43 + 0x50),(CowData *)&local_a0);
  }
  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar38 * 8);
  goto LAB_0011432e;
}



/* CowData<ShaderLanguage::ModeInfo>::_realloc(long) */

undefined8 __thiscall
CowData<ShaderLanguage::ModeInfo>::_realloc(CowData<ShaderLanguage::ModeInfo> *this,long param_1)

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
/* Error CowData<ShaderLanguage::ModeInfo>::resize<false>(long) */

undefined8 __thiscall
CowData<ShaderLanguage::ModeInfo>::resize<false>
          (CowData<ShaderLanguage::ModeInfo> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
    lVar6 = 0;
    lVar8 = 0;
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
    lVar8 = lVar6 * 0x18;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00114b70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x18 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00114b70;
  uVar10 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar10) {
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      plVar1 = (long *)(lVar6 + uVar10 * 0x18);
      CowData<StringName>::_unref((CowData<StringName> *)(plVar1 + 2));
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      uVar10 = uVar10 + 1;
    }
    goto LAB_00114bc6;
  }
  if (lVar11 == lVar8) {
LAB_00114adb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00114bc6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_00114a28;
  }
  else {
    if (lVar6 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00114adb;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  puVar3 = puVar7 + lVar6 * 3;
  do {
    *puVar3 = 0;
    puVar4 = puVar3 + 3;
    puVar3[2] = 0;
    puVar3 = puVar4;
  } while (puVar4 != puVar7 + param_1 * 3);
LAB_00114a28:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<ShaderLanguage::StageFunctionInfo::Argument>::_realloc(long) */

undefined8 __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::_realloc
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this,long param_1)

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
/* Error CowData<ShaderLanguage::StageFunctionInfo::Argument>::resize<false>(long) */

undefined8 __thiscall
CowData<ShaderLanguage::StageFunctionInfo::Argument>::resize<false>
          (CowData<ShaderLanguage::StageFunctionInfo::Argument> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  StringName *this_00;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    uVar2 = 0x1f;
    goto LAB_00114d97;
  }
  if (*(long *)this == 0) {
    if (param_1 != 0) {
      _copy_on_write(this);
      lVar7 = 0;
      lVar4 = 0;
LAB_00114ce2:
      if (param_1 * 0x10 == 0) {
LAB_00114f40:
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
      }
      else {
        uVar5 = param_1 * 0x10 - 1;
        uVar5 = uVar5 >> 1 | uVar5;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = uVar5 | uVar5 >> 0x20;
        lVar8 = uVar5 + 1;
        if (lVar8 == 0) goto LAB_00114f40;
        if (param_1 <= lVar7) {
          lVar7 = *(long *)this;
          uVar5 = param_1;
          while (lVar7 != 0) {
            if (*(ulong *)(lVar7 + -8) <= uVar5) {
LAB_00114dca:
              if (lVar8 != lVar4) {
                uVar2 = _realloc(this,lVar8);
                if ((int)uVar2 != 0) goto LAB_00114d97;
                lVar7 = *(long *)this;
                if (lVar7 == 0) goto LAB_00114def;
              }
              *(long *)(lVar7 + -8) = param_1;
              goto LAB_00114d95;
            }
            while ((StringName::configured == '\0' || (*(long *)(uVar5 * 0x10 + lVar7) == 0))) {
              uVar5 = uVar5 + 1;
              if (*(ulong *)(lVar7 + -8) <= uVar5) goto LAB_00114dca;
            }
            StringName::unref();
            uVar5 = uVar5 + 1;
            lVar7 = *(long *)this;
          }
          goto LAB_00114d81;
        }
        if (lVar8 == lVar4) {
LAB_00114ebb:
          puVar6 = *(undefined8 **)this;
          if (puVar6 == (undefined8 *)0x0) {
LAB_00114d81:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar7 = puVar6[-1];
          if (lVar7 < param_1) goto LAB_00114e40;
LAB_00114e99:
          puVar6[-1] = param_1;
          goto LAB_00114d95;
        }
        if (lVar7 != 0) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) goto LAB_00114d97;
          goto LAB_00114ebb;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
        if (puVar3 != (undefined8 *)0x0) {
          puVar6 = puVar3 + 2;
          *puVar3 = 1;
          puVar3[1] = 0;
          *(undefined8 **)this = puVar6;
          lVar7 = 0;
LAB_00114e40:
          do {
            local_38 = 0;
            this_00 = (StringName *)(puVar6 + lVar7 * 2);
            *(undefined8 *)this_00 = 0;
            StringName::operator=(this_00,(StringName *)&local_38);
            bVar9 = StringName::configured != '\0';
            *(undefined4 *)(this_00 + 8) = 0;
            if ((bVar9) && (local_38 != 0)) {
              StringName::unref();
            }
            lVar7 = lVar7 + 1;
            puVar6 = *(undefined8 **)this;
          } while (param_1 != lVar7);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00114def:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          goto LAB_00114e99;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      uVar2 = 6;
      goto LAB_00114d97;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 != lVar7) {
      if (param_1 != 0) {
        _copy_on_write(this);
        lVar4 = lVar7 * 0x10;
        if (lVar4 != 0) {
          uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
          uVar5 = uVar5 | uVar5 >> 2;
          uVar5 = uVar5 | uVar5 >> 4;
          uVar5 = uVar5 | uVar5 >> 8;
          uVar5 = uVar5 | uVar5 >> 0x10;
          lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
        }
        goto LAB_00114ce2;
      }
      _unref(this);
    }
  }
LAB_00114d95:
  uVar2 = 0;
LAB_00114d97:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* KeyValue<StringName, ShaderLanguage::FunctionInfo>::~KeyValue() */

void __thiscall
KeyValue<StringName,ShaderLanguage::FunctionInfo>::~KeyValue
          (KeyValue<StringName,ShaderLanguage::FunctionInfo> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderLanguage::ModeInfo::ModeInfo(StringName const&, StringName const&, StringName const&,
   StringName const&, StringName const&, StringName const&, StringName const&) */

void __thiscall
ShaderLanguage::ModeInfo::ModeInfo
          (ModeInfo *this,StringName *param_1,StringName *param_2,StringName *param_3,
          StringName *param_4,StringName *param_5,StringName *param_6,StringName *param_7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


