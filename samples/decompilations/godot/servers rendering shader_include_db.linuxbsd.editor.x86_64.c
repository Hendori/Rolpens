
/* ShaderIncludeDB::has_built_in_include_file(String const&) */

undefined8 ShaderIncludeDB::has_built_in_include_file(String *param_1)

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
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  if ((built_in_includes._8_8_ != 0) && (built_in_includes._44_4_ != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)built_in_includes._40_4_ * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)built_in_includes._40_4_ * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(built_in_includes._16_8_ + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      lVar16 = built_in_includes._16_8_;
      do {
        if ((uVar13 == uVar11) &&
           (uVar12 = String::operator==((String *)
                                        (*(long *)(built_in_includes._8_8_ + lVar15 * 8) + 0x10),
                                        param_1), lVar16 = built_in_includes._16_8_,
           (char)uVar12 != '\0')) {
          return uVar12;
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar16 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
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



/* ShaderIncludeDB::get_built_in_include_file(String const&) */

ShaderIncludeDB * __thiscall
ShaderIncludeDB::get_built_in_include_file(ShaderIncludeDB *this,String *param_1)

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
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  if ((built_in_includes._8_8_ != 0) && (built_in_includes._44_4_ != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)built_in_includes._40_4_ * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)built_in_includes._40_4_ * 8);
    uVar12 = String::hash();
    uVar17 = CONCAT44(0,uVar1);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(built_in_includes._16_8_ + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      lVar16 = built_in_includes._16_8_;
      do {
        if ((uVar13 == uVar12) &&
           (cVar11 = String::operator==((String *)
                                        (*(long *)(built_in_includes._8_8_ + lVar15 * 8) + 0x10),
                                        param_1), lVar16 = built_in_includes._16_8_, cVar11 != '\0')
           ) {
          lVar2 = *(long *)(built_in_includes._8_8_ + (ulong)uVar14 * 8);
          *(undefined8 *)this = 0;
          if (*(long *)(lVar2 + 0x18) == 0) {
            return this;
          }
          CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(lVar2 + 0x18));
          return this;
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar16 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar12 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar12 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  *(undefined8 *)this = 0;
  return this;
}



/* ShaderIncludeDB::_bind_methods() */

void ShaderIncludeDB::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_90;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_88,(char ***)"list_built_in_include_files",0);
  StringName::StringName((StringName *)&local_90,"ShaderIncludeDB",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00103808;
  *(code **)(pMVar4 + 0x58) = list_built_in_include_files;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "filename";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"has_built_in_include_file",(uint)&local_58);
  StringName::StringName((StringName *)&local_90,"ShaderIncludeDB",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00103868;
  *(undefined8 *)(pMVar4 + 0x58) = 0x100000;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "filename";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"get_built_in_include_file",(uint)&local_58);
  StringName::StringName((StringName *)&local_90,"ShaderIncludeDB",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_001038c8;
  *(code **)(pMVar4 + 0x58) = get_built_in_include_file;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderIncludeDB::register_built_in_include_file(String const&, String const&) */

void ShaderIncludeDB::register_built_in_include_file(String *param_1,String *param_2)

{
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)
         HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       *)built_in_includes,param_1);
  if (*(long *)this != *(long *)param_2) {
    CowData<char32_t>::_ref(this,(CowData *)param_2);
    return;
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



/* ShaderIncludeDB::parse_include_files(String const&) */

ShaderIncludeDB * __thiscall
ShaderIncludeDB::parse_include_files(ShaderIncludeDB *this,String *param_1)

{
  String *pSVar1;
  long *plVar2;
  CowData<char32_t> *this_00;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  wchar32 wVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  ulong local_c8;
  long local_90;
  long local_88;
  int *local_80;
  long local_78;
  long local_70;
  char local_68 [8];
  long local_60;
  int *local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = String::find((char *)param_1,0x101f86);
  if (iVar7 == -1) {
    *(undefined8 *)this = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
    }
  }
  else {
    local_58 = (int *)0x101f86;
    local_90 = 0;
    local_50[0] = 9;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 0;
    String::split(local_68,SUB81(param_1,0),0x101f90);
    if ((local_60 != 0) && (0 < (int)*(ulong *)(local_60 + -8))) {
      uVar12 = 0;
      local_c8 = *(ulong *)(local_60 + -8) & 0xffffffff;
      do {
        uVar11 = uVar12;
        if (local_60 == 0) {
          lVar14 = 0;
LAB_00100de1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar14,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar14 = *(long *)(local_60 + -8);
        if (lVar14 <= (long)uVar12) goto LAB_00100de1;
        pSVar1 = (String *)(local_60 + uVar12 * 8);
        cVar6 = String::begins_with(pSVar1);
        local_70 = 0;
        if (cVar6 == '\0') {
          local_58 = (int *)&_LC27;
          local_50[0] = 1;
          String::parse_latin1((StrRange *)&local_70);
          String::operator+((String *)&local_58,pSVar1);
          String::operator+=((String *)&local_88,(String *)&local_58);
          piVar4 = local_58;
          if (local_58 != (int *)0x0) {
            LOCK();
            plVar13 = (long *)(local_58 + -4);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_58 = (int *)0x0;
              Memory::free_static(piVar4 + -4,false);
            }
          }
          lVar14 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar13 = (long *)(local_70 + -0x10);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
        }
        else {
          local_50[0] = 0;
          local_58 = (int *)&_LC0;
          String::parse_latin1((StrRange *)&local_70);
          String::replace((String *)&local_58,pSVar1);
          String::strip_edges(SUB81((String *)&local_80,0),SUB81((String *)&local_58,0));
          piVar4 = local_58;
          if (local_58 != (int *)0x0) {
            LOCK();
            plVar13 = (long *)(local_58 + -4);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_58 = (int *)0x0;
              Memory::free_static(piVar4 + -4,false);
            }
          }
          lVar14 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar13 = (long *)(local_70 + -0x10);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar14 + -0x10),false);
            }
          }
          if ((local_80 == (int *)0x0) || (lVar14 = *(long *)(local_80 + -2), lVar14 == 0))
          goto LAB_00100bef;
          if (lVar14 < 1) {
            uVar11 = 0;
            goto LAB_00100de1;
          }
          if (*local_80 == 0x22) {
            wVar15 = (wchar32)(String *)&local_80;
            iVar7 = String::find_char(wVar15,0x22);
            if (iVar7 < 0) goto LAB_00100bef;
            String::substr((int)(String *)&local_58,wVar15);
            piVar5 = local_58;
            piVar4 = local_80;
            if (local_80 == local_58) {
              if (local_80 != (int *)0x0) {
                LOCK();
                plVar13 = (long *)(local_80 + -4);
                *plVar13 = *plVar13 + -1;
                UNLOCK();
                if (*plVar13 == 0) {
                  local_58 = (int *)0x0;
                  Memory::free_static(piVar5 + -4,false);
                }
              }
            }
            else {
              if (local_80 != (int *)0x0) {
                LOCK();
                plVar13 = (long *)(local_80 + -4);
                *plVar13 = *plVar13 + -1;
                UNLOCK();
                if (*plVar13 == 0) {
                  local_80 = (int *)0x0;
                  Memory::free_static(piVar4 + -4,false);
                }
              }
              local_80 = local_58;
            }
            get_built_in_include_file((ShaderIncludeDB *)&local_78,(String *)&local_80);
            if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
              local_70 = 0;
              local_58 = (int *)&_LC27;
              local_50[0] = 1;
              String::parse_latin1((StrRange *)&local_70);
              String::operator+((String *)&local_58,pSVar1);
              String::operator+=((String *)&local_88,(String *)&local_58);
              piVar4 = local_58;
              if (local_58 != (int *)0x0) {
                LOCK();
                plVar13 = (long *)(local_58 + -4);
                *plVar13 = *plVar13 + -1;
                UNLOCK();
                if (*plVar13 == 0) {
                  local_58 = (int *)0x0;
                  Memory::free_static(piVar4 + -4,false);
                }
              }
              lVar14 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar13 = (long *)(local_70 + -0x10);
                *plVar13 = *plVar13 + -1;
                UNLOCK();
                if (*plVar13 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
            }
            else {
              String::split((char *)&local_58,SUB81((ShaderIncludeDB *)&local_78,0),0x101f90);
              if ((local_50[0] != 0) && (uVar9 = *(int *)(local_50[0] + -8) - 1, -1 < (int)uVar9)) {
                uVar16 = (ulong)((int)uVar12 + 1);
                uVar11 = (ulong)uVar9;
                do {
                  if (local_50[0] == 0) {
                    lVar14 = 0;
                    goto LAB_00100de1;
                  }
                  lVar14 = *(long *)(local_50[0] + -8);
                  if (lVar14 <= (long)uVar11) goto LAB_00100de1;
                  local_70 = 0;
                  plVar2 = (long *)(local_50[0] + uVar11 * 8);
                  lVar14 = *plVar2;
                  plVar13 = (long *)(lVar14 + -0x10);
                  if (lVar14 != 0) {
                    do {
                      lVar14 = *plVar13;
                      if (lVar14 == 0) goto LAB_00101158;
                      LOCK();
                      lVar8 = *plVar13;
                      bVar18 = lVar14 == lVar8;
                      if (bVar18) {
                        *plVar13 = lVar14 + 1;
                        lVar8 = lVar14;
                      }
                      UNLOCK();
                    } while (!bVar18);
                    if (lVar8 != -1) {
                      local_70 = *plVar2;
                    }
                  }
LAB_00101158:
                  if (local_60 == 0) {
                    lVar14 = 1;
LAB_00101257:
                    _err_print_index_error
                              ("insert","./core/templates/cowdata.h",0xf0,uVar16,lVar14,"p_pos",
                               "new_size","",false,false);
                    lVar14 = local_70;
                  }
                  else {
                    uVar17 = *(ulong *)(local_60 + -8);
                    lVar14 = uVar17 + 1;
                    if (lVar14 <= (long)uVar16) goto LAB_00101257;
                    iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_60,lVar14);
                    if (iVar7 == 0) {
                      CowData<String>::_copy_on_write((CowData<String> *)&local_60);
                      lVar8 = local_60;
                      plVar13 = (long *)(local_60 + uVar17 * 8);
                      if ((long)uVar16 < (long)uVar17) {
                        do {
                          lVar14 = *plVar13;
                          lVar10 = plVar13[-1];
                          if (lVar14 != lVar10) {
                            if (lVar14 != 0) {
                              LOCK();
                              plVar2 = (long *)(lVar14 + -0x10);
                              *plVar2 = *plVar2 + -1;
                              UNLOCK();
                              if (*plVar2 == 0) {
                                lVar14 = *plVar13;
                                *plVar13 = 0;
                                Memory::free_static((void *)(lVar14 + -0x10),false);
                              }
                              lVar10 = plVar13[-1];
                            }
                            *plVar13 = lVar10;
                            plVar13[-1] = 0;
                          }
                          uVar17 = uVar17 - 1;
                          plVar13 = plVar13 + -1;
                        } while (uVar16 != uVar17);
                      }
                      lVar14 = local_70;
                      this_00 = (CowData<char32_t> *)(lVar8 + uVar16 * 8);
                      if (*(long *)this_00 != local_70) {
                        CowData<char32_t>::_ref(this_00,(CowData *)&local_70);
                      }
                    }
                    else {
                      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                                       "Condition \"err\" is true. Returning: err",0,0);
                      lVar14 = local_70;
                    }
                  }
                  if (lVar14 != 0) {
                    LOCK();
                    plVar13 = (long *)(lVar14 + -0x10);
                    *plVar13 = *plVar13 + -1;
                    UNLOCK();
                    if (*plVar13 == 0) {
                      Memory::free_static((void *)(local_70 + -0x10),false);
                    }
                  }
                  uVar11 = uVar11 - 1;
                } while (-1 < (int)uVar11);
              }
              if (local_60 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (uint)*(undefined8 *)(local_60 + -8);
              }
              local_c8 = (ulong)uVar9;
              CowData<String>::_unref((CowData<String> *)local_50);
            }
            lVar14 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar13 = (long *)(local_78 + -0x10);
              *plVar13 = *plVar13 + -1;
              UNLOCK();
              if (*plVar13 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
LAB_00100bef:
            local_70 = 0;
            local_58 = (int *)&_LC27;
            local_50[0] = 1;
            String::parse_latin1((StrRange *)&local_70);
            String::operator+((String *)&local_58,pSVar1);
            String::operator+=((String *)&local_88,(String *)&local_58);
            piVar4 = local_58;
            if (local_58 != (int *)0x0) {
              LOCK();
              plVar13 = (long *)(local_58 + -4);
              *plVar13 = *plVar13 + -1;
              UNLOCK();
              if (*plVar13 == 0) {
                local_58 = (int *)0x0;
                Memory::free_static(piVar4 + -4,false);
              }
            }
            lVar14 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar13 = (long *)(local_70 + -0x10);
              *plVar13 = *plVar13 + -1;
              UNLOCK();
              if (*plVar13 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          piVar4 = local_80;
          if (local_80 != (int *)0x0) {
            LOCK();
            plVar13 = (long *)(local_80 + -4);
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
              local_80 = (int *)0x0;
              Memory::free_static(piVar4 + -4,false);
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)local_c8);
    }
    lVar14 = local_88;
    local_88 = 0;
    *(long *)this = lVar14;
    CowData<String>::_unref((CowData<String> *)&local_60);
    lVar14 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar13 = (long *)(local_88 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar13 = (long *)(local_90 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ShaderIncludeDB::list_built_in_include_files() */

ShaderIncludeDB * __thiscall ShaderIncludeDB::list_built_in_include_files(ShaderIncludeDB *this)

{
  CowData<String> *this_00;
  long *plVar1;
  CowData<char32_t> *this_01;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_48;
  long local_40;
  
  plVar5 = (long *)built_in_includes._24_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  if (plVar5 != (long *)0x0) {
    this_00 = (CowData<String> *)(this + 8);
    do {
      lVar4 = plVar5[2];
      local_48 = 0;
      if (lVar4 == 0) {
LAB_00101378:
        lVar3 = *(long *)(this + 8);
        lVar6 = lVar4;
        if (lVar3 == 0) goto LAB_0010144c;
LAB_00101386:
        iVar2 = CowData<String>::resize<false>(this_00,*(long *)(lVar3 + -8) + 1);
        if (iVar2 != 0) goto LAB_00101468;
LAB_0010139e:
        if (*(long *)(this + 8) == 0) {
          lVar6 = -1;
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(*(long *)(this + 8) + -8);
          lVar6 = lVar3 + -1;
          if (-1 < lVar6) {
            CowData<String>::_copy_on_write(this_00);
            this_01 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar6 * 8);
            if (lVar4 != *(long *)this_01) {
              CowData<char32_t>::_ref(this_01,(CowData *)&local_48);
            }
            goto LAB_001013db;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar3,"p_index","size()","",false,
                   false);
      }
      else {
        plVar1 = (long *)(lVar4 + -0x10);
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_0010143a;
          LOCK();
          lVar3 = *plVar1;
          bVar7 = lVar4 == lVar3;
          if (bVar7) {
            *plVar1 = lVar4 + 1;
            lVar3 = lVar4;
          }
          UNLOCK();
        } while (!bVar7);
        if (lVar3 != -1) {
          lVar4 = plVar5[2];
          local_48 = lVar4;
          goto LAB_00101378;
        }
LAB_0010143a:
        lVar3 = *(long *)(this + 8);
        lVar4 = local_48;
        lVar6 = 0;
        if (lVar3 != 0) goto LAB_00101386;
LAB_0010144c:
        iVar2 = CowData<String>::resize<false>(this_00,1);
        lVar4 = lVar6;
        if (iVar2 == 0) goto LAB_0010139e;
LAB_00101468:
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_001013db:
      if (lVar4 != 0) {
        LOCK();
        plVar1 = (long *)(lVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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



/* MethodBindTRS<String, String const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRS<String,String_const&>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRS<String, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<String,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<bool, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRS<bool,String_const&>::_gen_argument_type
          (MethodBindTRS<bool,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 1;
}



/* MethodBindTRS<bool, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<bool,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<bool,String_const&>::validated_call
          (MethodBindTRS<bool,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  
  VVar1 = (Variant)(**(code **)(this + 0x58))(*param_2 + 8);
  param_3[8] = VVar1;
  return;
}



/* MethodBindTRS<bool, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<bool,String_const&>::ptrcall
          (MethodBindTRS<bool,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this + 0x58))(*param_2);
  *(undefined1 *)param_3 = uVar1;
  return;
}



/* MethodBindTRS<Vector<String>>::_gen_argument_type(int) const */

undefined8 MethodBindTRS<Vector<String>>::_gen_argument_type(int param_1)

{
  return 0x22;
}



/* MethodBindTRS<Vector<String>>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Vector<String>>::~MethodBindTRS() */

void __thiscall MethodBindTRS<Vector<String>>::~MethodBindTRS(MethodBindTRS<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00103808;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Vector<String>>::~MethodBindTRS() */

void __thiscall MethodBindTRS<Vector<String>>::~MethodBindTRS(MethodBindTRS<Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00103808;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<bool, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<bool,String_const&>::~MethodBindTRS(MethodBindTRS<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00103868;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<bool, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<bool,String_const&>::~MethodBindTRS(MethodBindTRS<bool,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00103868;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<String, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<String,String_const&>::~MethodBindTRS(MethodBindTRS<String,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001038c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<String, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<String,String_const&>::~MethodBindTRS(MethodBindTRS<String,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001038c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (*(long *)((long)pvVar5 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x18);
              *(undefined8 *)((long)pvVar5 + 0x18) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
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
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* MethodBindTRS<String, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<String,String_const&>::ptrcall
          (MethodBindTRS<String,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2,0);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_28) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_28);
  }
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<String, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<String,String_const&>::validated_call
          (MethodBindTRS<String,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2 + 8,param_2,0);
  if (*(long *)(param_3 + 8) != local_28) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_28);
  }
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Vector<String>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Vector<String>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x22;
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
      goto joined_r0x00101a8c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00101a8c:
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



/* MethodBindTRS<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRS<bool,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00101cc8;
LAB_00101c40:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar10 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00101cc8:
        uVar8 = 4;
        goto LAB_00101c55;
      }
      if (in_R8D == 1) goto LAB_00101c40;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar5 = _LC5;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_String((Variant *)&local_50);
    bVar7 = (bool)(*(code *)pVVar2)((Variant *)&local_50);
    Variant::Variant((Variant *)local_48,bVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_50;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar8 = 3;
LAB_00101c55:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRS<String, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRS<String,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00101ed8;
LAB_00101e58:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar9 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00101ed8:
        uVar7 = 4;
        goto LAB_00101e65;
      }
      if (in_R8D == 1) goto LAB_00101e58;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar9 = pVVar9 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar9,4);
    uVar5 = _LC5;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_String((Variant *)&local_50);
    (*(code *)pVVar2)(&local_58,(Variant *)&local_50);
    Variant::Variant((Variant *)local_48,(String *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_58;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar7 = 3;
LAB_00101e65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ShaderIncludeDB::_bind_methods() [clone .cold] */

void ShaderIncludeDB::_bind_methods(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char cVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  undefined8 uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00102764:
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar51)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar45 != uVar38);
      }
      else {
        memset(pvVar2,0,uVar38);
        memset(pvVar41,0,uVar51);
      }
LAB_00102644:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_00102650:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar53 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar50 != 0) {
          uVar37 = uVar50;
        }
        uVar54 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar50 = *(uint *)(lVar53 + lVar43 * 4);
        uVar49 = SUB164(auVar15 * auVar31,8);
        if (uVar50 != 0) {
          do {
            if (uVar50 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                if (*(long *)(local_a0[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_a0[1] + 8),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_00102510;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar50 = *(uint *)(lVar53 + lVar43 * 4);
            uVar49 = SUB164(auVar16 * auVar32,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar49) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar54 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar55;
      goto LAB_00102110;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_00102110;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00102650;
LAB_00102136:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_00102510;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar55 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar55 * lVar53;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar51;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar50 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar50 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar50 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar51;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            uVar54 = SUB164(auVar5 * auVar21,8);
            uVar47 = uVar39;
            if (uVar54 < uVar49) {
              *puVar46 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar47;
            uVar50 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar36 != uVar38);
      Memory::free_static(pvVar41,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar38 = CONCAT44(0,uVar55);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar53 + lVar43 * 4);
      uVar50 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_00102510;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar50 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar53 + lVar43 * 4);
          uVar50 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar49 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar52 == 0) goto LAB_00102764;
      goto LAB_00102644;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_00102110:
    if ((float)uVar45 * __LC13 < (float)(iVar42 + 1)) goto LAB_00102136;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_00102815:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_001023da;
LAB_00102831:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_58[1] = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_00102815;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined8 *)(local_a0[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_70;
    if (puVar40 == (undefined8 *)0x0) goto LAB_00102831;
LAB_001023da:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar53 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar36 != 0) {
    uVar55 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar55 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar52 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar53 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar57 = local_a0;
  if (uVar37 != 0) {
    uVar50 = 0;
    pauVar56 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar42) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25,8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
        *puVar46 = uVar55;
        puVar40 = (undefined8 *)(lVar52 + lVar44 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar56;
        uVar50 = uVar49;
        uVar55 = uVar37;
      }
      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar53 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar52 + lVar44 * 8) = pauVar57;
  *puVar46 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_00102510:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
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



/* MethodBindTRS<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Vector<String>>::ptrcall
          (MethodBindTRS<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(auStack_38,param_1,0);
  if (*(long *)((long)param_3 + 8) != local_30[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_30);
  }
  CowData<String>::_unref((CowData<String> *)local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<Vector<String>>::validated_call
          (MethodBindTRS<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(auStack_28,param_1,0);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_20[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_20);
  }
  CowData<String>::_unref((CowData<String> *)local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRS<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Vector aVStack_48 [8];
  CowData<String> local_40 [8];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      (*(code *)pVVar1)(aVStack_48);
      Variant::Variant((Variant *)local_38,aVStack_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_38[0];
      *(undefined8 *)(param_1 + 8) = local_30;
      *(undefined8 *)(param_1 + 0x10) = uStack_28;
      CowData<String>::_unref(local_40);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00102f40:
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
  if (lVar10 == 0) goto LAB_00102f40;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00102e19:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00102e19;
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
    goto LAB_00102f96;
  }
  if (lVar10 == lVar7) {
LAB_00102ebf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00102f96:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00102eaa;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00102ebf;
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
LAB_00102eaa:
  puVar9[-1] = param_1;
  return 0;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
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
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_00103025;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00103118:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00103118;
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
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_00103025:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<bool, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<bool,String_const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00103385;
  }
  local_70 = 0;
  local_68 = &_LC0;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00103497:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00103497;
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
LAB_00103385:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<String, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<String,String_const&>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00103585;
  }
  local_70 = 0;
  local_68 = &_LC0;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00103697:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00103697;
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
LAB_00103585:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderIncludeDB::built_in_includes */

void ShaderIncludeDB::_GLOBAL__sub_I_built_in_includes(void)

{
  built_in_includes._40_8_ = 2;
  built_in_includes._8_16_ = (undefined1  [16])0x0;
  built_in_includes._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               ::~HashMap,built_in_includes,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<String, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<String,String_const&>::~MethodBindTRS(MethodBindTRS<String,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<bool, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<bool,String_const&>::~MethodBindTRS(MethodBindTRS<bool,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Vector<String>>::~MethodBindTRS() */

void __thiscall MethodBindTRS<Vector<String>>::~MethodBindTRS(MethodBindTRS<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


