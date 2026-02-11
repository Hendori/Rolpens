
/* is_valid_rename_target(lsp::DocumentSymbol const*) */

undefined8 is_valid_rename_target(DocumentSymbol *param_1)

{
  long lVar1;
  
  if ((param_1 != (DocumentSymbol *)0x0) &&
     (((*(long *)(param_1 + 0x18) == 0 || (*(uint *)(*(long *)(param_1 + 0x18) + -8) < 2)) &&
      (lVar1 = *(long *)(param_1 + 0x50), lVar1 != 0)))) {
    return CONCAT71((int7)((ulong)lVar1 >> 8),1 < *(uint *)(lVar1 + -8));
  }
  return 0;
}



/* GDScriptWorkspace::get_native_symbol(String const&, String const&) const */

String * __thiscall
GDScriptWorkspace::get_native_symbol(GDScriptWorkspace *this,String *param_1,String *param_2)

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
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  String *this_00;
  long in_FS_OFFSET;
  String *local_58;
  String *local_50;
  String *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,param_1,false);
  local_50 = (String *)0x0;
  this_00 = local_58;
  if (local_58 != (String *)0x0) {
LAB_00100099:
    if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      uVar18 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
      if (local_58 == (String *)0x0) {
        uVar12 = StringName::get_empty_hash();
      }
      else {
        uVar12 = *(uint *)(local_58 + 0x20);
      }
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar16 = *(uint *)(*(long *)(this + 400) + lVar14 * 4);
      uVar13 = SUB164(auVar3 * auVar7,8);
      if (uVar16 != 0) {
        uVar17 = 0;
        do {
          if (uVar12 == uVar16) {
            if (*(String **)(*(long *)(*(long *)(this + 0x188) + lVar14 * 8) + 0x10) == local_58) {
              lVar2 = *(long *)(*(long *)(this + 0x188) + (ulong)uVar13 * 8);
              if (lVar2 != 0) {
                this_00 = (String *)(lVar2 + 0x18);
                if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2))
                goto LAB_00100230;
                lVar14 = *(long *)(lVar2 + 0x78);
                if (lVar14 != 0) {
                  lVar15 = 0;
                  lVar19 = 0;
                  goto LAB_001001c0;
                }
              }
              break;
            }
          }
          uVar17 = uVar17 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar18;
          lVar14 = SUB168(auVar4 * auVar8,8);
          uVar16 = *(uint *)(*(long *)(this + 400) + lVar14 * 4);
          uVar13 = SUB164(auVar4 * auVar8,8);
          if ((uVar16 == 0) ||
             (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
             auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
             auVar6._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
             auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, SUB164(auVar6 * auVar10,8) < uVar17)) break;
        } while( true );
      }
    }
    goto LAB_001001f0;
  }
LAB_0010024b:
  if (StringName::configured == '\0') goto LAB_00100267;
LAB_00100256:
  if (local_58 != (String *)0x0) {
    StringName::unref();
  }
LAB_00100267:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    this_00 = (String *)(lVar14 + lVar15);
    cVar11 = String::operator==(this_00,param_2);
    if (cVar11 != '\0') goto LAB_00100230;
    lVar14 = *(long *)(lVar2 + 0x78);
    lVar19 = lVar19 + 1;
    lVar15 = lVar15 + 0x68;
    if (lVar14 == 0) break;
LAB_001001c0:
    if (*(long *)(lVar14 + -8) <= lVar19) break;
  }
LAB_001001f0:
  ClassDB::get_parent_class((StringName *)&local_48);
  if (local_58 == local_48) {
    if ((StringName::configured != '\0') && (local_58 != (String *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_58 = local_48;
  }
  if (local_50 == local_58) goto code_r0x0010022c;
  goto LAB_00100099;
code_r0x0010022c:
  this_00 = (String *)0x0;
LAB_00100230:
  if (StringName::configured == '\0') goto LAB_00100267;
  if (local_50 != (String *)0x0) {
    StringName::unref();
    goto LAB_0010024b;
  }
  goto LAB_00100256;
}



/* GDScriptWorkspace::get_script_symbol(String const&) const */

long __thiscall GDScriptWorkspace::get_script_symbol(GDScriptWorkspace *this,String *param_1)

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
  
  if ((*(long *)(this + 0x1c8) != 0) && (*(int *)(this + 0x1ec) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
    uVar12 = String::hash();
    uVar17 = CONCAT44(0,uVar1);
    lVar16 = *(long *)(this + 0x1d0);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(lVar16 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      while( true ) {
        if (uVar13 == uVar12) {
          cVar11 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x1c8) + lVar15 * 8) + 0x10),
                                      param_1);
          if (cVar11 != '\0') {
            lVar2 = *(long *)(*(long *)(this + 0x1c8) + (ulong)uVar14 * 8);
            if (lVar2 == 0) {
              return 0;
            }
            return *(long *)(lVar2 + 0x18) + 0xa40;
          }
          lVar16 = *(long *)(this + 0x1d0);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar16 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
        if (uVar12 == 0) break;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar12 * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar17;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar17;
        if (SUB164(auVar6 * auVar10,8) < uVar18) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* GDScriptWorkspace::get_parameter_symbol(lsp::DocumentSymbol const*, String const&) */

String * __thiscall
GDScriptWorkspace::get_parameter_symbol
          (GDScriptWorkspace *this,DocumentSymbol *param_1,String *param_2)

{
  String *this_00;
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      while( true ) {
        if (*(long *)(lVar2 + -8) <= lVar4) {
          return (String *)0x0;
        }
        this_00 = (String *)(lVar2 + lVar3);
        if ((*(long *)(this_00 + 8) == 0) || (*(uint *)(*(long *)(this_00 + 8) + -8) < 2)) break;
        cVar1 = String::operator==(this_00,param_2);
        if (cVar1 != '\0') {
          return this_00;
        }
        lVar2 = *(long *)(param_1 + 0x60);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x68;
        if (lVar2 == 0) {
          return (String *)0x0;
        }
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x68;
    } while (lVar2 != 0);
  }
  return (String *)0x0;
}



/* GDScriptWorkspace::get_local_symbol_at(ExtendGDScriptParser const*, String const&, lsp::Position)
    */

String * __thiscall
GDScriptWorkspace::get_local_symbol_at
          (undefined8 param_1_00,long param_1,String *param_2,undefined8 param_4)

{
  String *pSVar1;
  char cVar2;
  String *this;
  int iVar3;
  int iVar4;
  String *pSVar5;
  
  pSVar5 = (String *)0x0;
  this = (String *)(param_1 + 0xa40);
  while( true ) {
    cVar2 = String::operator==(this,param_2);
    iVar3 = (int)param_4;
    iVar4 = (int)((ulong)param_4 >> 0x20);
    if ((((((cVar2 != '\0') && (pSVar5 = this, *(int *)(this + 0x38) <= iVar3)) &&
          (iVar3 <= *(int *)(this + 0x40))) &&
         ((iVar3 != *(int *)(this + 0x38) || (*(int *)(this + 0x3c) <= iVar4)))) &&
        ((iVar3 != *(int *)(this + 0x40) || (iVar4 <= *(int *)(this + 0x44))))) ||
       ((this = *(String **)(this + 0x60), this == (String *)0x0 ||
        (pSVar1 = this + *(long *)(this + -8) * 0x68, pSVar1 == this)))) break;
    while (((iVar3 < *(int *)(this + 0x28) ||
            ((*(int *)(this + 0x30) < iVar3 ||
             ((iVar3 == *(int *)(this + 0x28) && (iVar4 < *(int *)(this + 0x2c))))))) ||
           ((iVar3 == *(int *)(this + 0x30) && (*(int *)(this + 0x34) < iVar4))))) {
      this = this + 0x68;
      if (pSVar1 == this) {
        return pSVar5;
      }
    }
  }
  return pSVar5;
}



/* GDScriptWorkspace::resolve_native_symbol(lsp::NativeSymbolInspectParams const&) */

String * __thiscall
GDScriptWorkspace::resolve_native_symbol(GDScriptWorkspace *this,NativeSymbolInspectParams *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  String *pSVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,(String *)param_1,false);
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    uVar21 = CONCAT44(0,uVar1);
    lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    if (local_48 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(local_48 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar12 * lVar18;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar21;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar17 = *(uint *)(*(long *)(this + 400) + lVar14 * 4);
    uVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      do {
        if (uVar12 == uVar17) {
          if (*(long *)(*(long *)(*(long *)(this + 0x188) + lVar14 * 8) + 0x10) == local_48) {
            lVar18 = *(long *)(*(long *)(this + 0x188) + (ulong)uVar13 * 8);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            if (lVar18 == 0) goto LAB_0010074b;
            pSVar16 = (String *)(lVar18 + 0x18);
            if ((*(long *)(param_1 + 8) == 0) || (*(uint *)(*(long *)(param_1 + 8) + -8) < 2))
            goto LAB_00100701;
            cVar11 = String::operator==((String *)(param_1 + 8),pSVar16);
            if (cVar11 != '\0') goto LAB_00100701;
            lVar14 = *(long *)(lVar18 + 0x78);
            if (lVar14 == 0) goto LAB_0010074b;
            lVar15 = 0;
            lVar20 = 0;
            goto LAB_00100788;
          }
        }
        uVar19 = uVar19 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar13 + 1) * lVar18;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar21;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar17 = *(uint *)(*(long *)(this + 400) + lVar14 * 4);
        uVar13 = SUB164(auVar3 * auVar7,8);
      } while ((uVar17 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar17 * lVar18, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar21, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar4 * auVar8,8)) * lVar18,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar21, uVar19 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
LAB_0010074b:
  pSVar16 = (String *)0x0;
  goto LAB_00100701;
  while( true ) {
    cVar11 = String::operator==((String *)(lVar14 + lVar15),(String *)(param_1 + 8));
    lVar14 = *(long *)(lVar18 + 0x78);
    if (cVar11 != '\0') {
      if (lVar14 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(lVar14 + -8);
        if (lVar20 < lVar18) {
          pSVar16 = (String *)(lVar15 + lVar14);
          goto LAB_00100701;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar20,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    lVar20 = lVar20 + 1;
    lVar15 = lVar15 + 0x68;
    if (lVar14 == 0) break;
LAB_00100788:
    if (*(long *)(lVar14 + -8) <= lVar20) goto LAB_0010074b;
  }
  pSVar16 = (String *)0x0;
LAB_00100701:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::GDScriptWorkspace() */

void __thiscall GDScriptWorkspace::GDScriptWorkspace(GDScriptWorkspace *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  this[0x17c] = (GDScriptWorkspace)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0011b210;
  uVar1 = _LC25;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined8 *)(this + 0x1e8) = uVar1;
  *(undefined8 *)(this + 0x218) = uVar1;
  *(undefined8 *)(this + 0x248) = uVar1;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  ProjectSettings::get_resource_path();
  CowData<char32_t>::_unref(aCStack_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* GDScriptWorkspace::get_file_uri(String const&) const */

String * GDScriptWorkspace::get_file_uri(String *param_1)

{
  undefined *puVar1;
  CowData *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  undefined8 local_60;
  String local_58 [8];
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_1,in_RDX);
  }
  local_60 = 0;
  local_48 = &_LC38;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+(local_58,(String *)(in_RSI + 0x1b8));
  local_48 = &_LC39;
  local_50 = 0;
  local_40 = 6;
  String::parse_latin1((StrRange *)&local_50);
  String::replace((String *)&local_48,param_1);
  if (*(undefined **)param_1 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_1);
    puVar1 = local_48;
    local_48 = (undefined *)0x0;
    *(undefined **)param_1 = puVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::get_file_path(String const&) const */

String * GDScriptWorkspace::get_file_path(String *param_1)

{
  undefined *puVar1;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::uri_decode();
  String::uri_decode();
  local_60 = 0;
  local_58 = &_LC39;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = &_LC38;
  local_70 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::operator+(local_68,(String *)aCStack_78);
  String::replacen((String *)&local_58,param_1);
  if (*(undefined **)param_1 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_1);
    puVar1 = local_58;
    local_58 = (undefined *)0x0;
    *(undefined **)param_1 = puVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(aCStack_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::list_script_files(String const&, List<String, DefaultAllocator>&) */

void __thiscall
GDScriptWorkspace::list_script_files(GDScriptWorkspace *this,String *param_1,List *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  int local_6c;
  Object *local_68;
  char *local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::open((String *)&local_68,param_1);
  pOVar4 = local_68;
  if (local_6c == 0) {
    pcVar1 = *(code **)(*(long *)local_68 + 0x1d0);
    local_60 = (char *)0x0;
    local_50 = 9;
    local_58 = ".gdignore";
    String::parse_latin1((StrRange *)&local_60);
    cVar5 = (*pcVar1)(pOVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar5 != '\0') goto LAB_00100d02;
    (**(code **)(*(long *)local_68 + 0x160))();
    (**(code **)(*(long *)local_68 + 0x168))((StrRange *)&local_60);
    while ((local_60 != (char *)0x0 && (1 < *(uint *)(local_60 + -8)))) {
      cVar5 = (**(code **)(*(long *)local_68 + 0x170))();
      if ((cVar5 == '\0') ||
         (((cVar5 = String::operator!=((String *)&local_60,"."), cVar5 == '\0' ||
           (cVar5 = String::operator!=((String *)&local_60,".."), cVar5 == '\0')) ||
          (cVar5 = String::operator!=((String *)&local_60,"./"), cVar5 == '\0')))) {
        cVar5 = String::ends_with((char *)&local_60);
        if (cVar5 != '\0') {
          String::path_join((String *)&local_58);
          if (*(long *)param_2 == 0) {
            pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_2 = pauVar6;
            *(undefined4 *)pauVar6[1] = 0;
            *pauVar6 = (undefined1  [16])0x0;
          }
          this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
          CowData<char32_t>::_ref(this_00,(CowData *)&local_58);
          plVar2 = *(long **)param_2;
          lVar3 = plVar2[1];
          *(undefined8 *)(this_00 + 8) = 0;
          *(long **)(this_00 + 0x18) = plVar2;
          *(long *)(this_00 + 0x10) = lVar3;
          if (lVar3 != 0) {
            *(CowData<char32_t> **)(lVar3 + 8) = this_00;
          }
          plVar2[1] = (long)this_00;
          if (*plVar2 == 0) {
            *plVar2 = (long)this_00;
          }
          *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        }
      }
      else {
        String::path_join((String *)&local_58);
        list_script_files(this,(String *)&local_58,param_2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      (**(code **)(*(long *)local_68 + 0x168))((CowData<char32_t> *)&local_58);
      if (local_60 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        local_60 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_68 == (Object *)0x0) goto LAB_00100d19;
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
  }
  else {
LAB_00100d02:
    if (local_68 == (Object *)0x0) goto LAB_00100d19;
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
  }
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar4), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_00100d19:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::publish_diagnostics(String const&) */

void __thiscall GDScriptWorkspace::publish_diagnostics(GDScriptWorkspace *this,String *param_1)

{
  long lVar1;
  String *pSVar2;
  char cVar3;
  Variant *pVVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  Dictionary local_a0 [8];
  Array local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_a0);
  Array::Array(local_98);
  local_88 = (char *)((ulong)local_88._4_4_ << 0x20);
  cVar3 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
          ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                         *)(this + 0x1f0),param_1,(uint *)&local_88);
  if ((cVar3 != '\0') &&
     (lVar1 = *(long *)(*(long *)(this + 0x1f8) + ((ulong)local_88 & 0xffffffff) * 8), lVar1 != 0))
  {
    lVar1 = *(long *)(lVar1 + 0x18);
    iVar7 = (int)local_98;
    Array::resize(iVar7);
    lVar6 = *(long *)(lVar1 + 0xab0);
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        if (*(long *)(lVar6 + -8) <= lVar5) break;
        lsp::Diagnostic::to_json();
        Variant::Variant((Variant *)local_58,(Dictionary *)&local_88);
        pVVar4 = (Variant *)Array::operator[](iVar7);
        if (pVVar4 == (Variant *)local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar4 = 0;
          *(int *)pVVar4 = local_58[0];
          *(undefined8 *)(pVVar4 + 8) = local_50;
          *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        }
        lVar5 = lVar5 + 1;
        Dictionary::~Dictionary((Dictionary *)&local_88);
        lVar6 = *(long *)(lVar1 + 0xab0);
      } while (lVar6 != 0);
    }
  }
  Variant::Variant((Variant *)local_58,local_98);
  Variant::Variant((Variant *)local_78,"diagnostics");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar3 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  get_file_uri((String *)&local_88);
  Variant::Variant((Variant *)local_58,(String *)&local_88);
  Variant::Variant((Variant *)local_78,"uri");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar3 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar2 = GDScriptLanguageProtocol::singleton;
  Variant::Variant((Variant *)local_58,local_a0);
  local_88 = "textDocument/publishDiagnostics";
  local_90 = 0;
  local_80 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  GDScriptLanguageProtocol::notify_client(pSVar2,(Variant *)&local_90,(int)(Variant *)local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_98);
  Dictionary::~Dictionary(local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, ExtendGDScriptParser*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, ExtendGDScriptParser*> > >::erase(String const&)
   [clone .isra.0] */

void __thiscall
HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
::erase(HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
        *this,String *param_1)

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
  cVar26 = _lookup_pos(this,param_1,&local_44);
  if (cVar26 == '\0') goto LAB_001015d7;
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
    if (*(long **)(this + 0x20) != plVar31) goto LAB_0010158e;
LAB_00101600:
    *(long *)(this + 0x20) = plVar31[1];
    plVar31 = (long *)*plVar5;
    plVar12 = (long *)plVar31[1];
  }
  else {
    if (*(long **)(this + 0x20) == plVar31) goto LAB_00101600;
LAB_0010158e:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar31 + 2));
  Memory::free_static(plVar31,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar30 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
LAB_001015d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptWorkspace::_get_owners(EditorFileSystemDirectory*, String, List<String,
   DefaultAllocator>&) [clone .part.0] */

void __thiscall
GDScriptWorkspace::_get_owners(GDScriptWorkspace *this,int param_2,CowData *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar6) [16];
  int iVar7;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_40;
  
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar4) {
    do {
      local_58 = 0;
      if (*(long *)param_3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,param_3);
      }
      lVar5 = EditorFileSystemDirectory::get_subdir(param_2);
      if (lVar5 != 0) {
        _get_owners(this,lVar5,(CowData<char32_t> *)&local_58,param_4);
      }
      iVar7 = iVar7 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      iVar4 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar7 < iVar4);
  }
  iVar7 = 0;
  iVar4 = EditorFileSystemDirectory::get_file_count();
  if (0 < iVar4) {
    do {
      lVar5 = 0;
      EditorFileSystemDirectory::get_file_deps((int)&local_58);
      if (local_50[0] != 0) {
        while (lVar5 < *(long *)(local_50[0] + -8)) {
          cVar3 = String::operator==((String *)(local_50[0] + lVar5 * 8),(String *)param_3);
          if (cVar3 != '\0') {
            EditorFileSystemDirectory::get_file_path((int)(CowData *)&local_60);
            if (*param_4 == 0) {
              pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *param_4 = (long)pauVar6;
              *(undefined4 *)pauVar6[1] = 0;
              *pauVar6 = (undefined1  [16])0x0;
            }
            this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
            if (local_60 != 0) {
              CowData<char32_t>::_ref(this_00,(CowData *)&local_60);
            }
            lVar2 = local_60;
            plVar1 = (long *)*param_4;
            lVar5 = plVar1[1];
            *(undefined8 *)(this_00 + 8) = 0;
            *(long **)(this_00 + 0x18) = plVar1;
            *(long *)(this_00 + 0x10) = lVar5;
            if (lVar5 != 0) {
              *(CowData<char32_t> **)(lVar5 + 8) = this_00;
            }
            plVar1[1] = (long)this_00;
            if (*plVar1 == 0) {
              *plVar1 = (long)this_00;
            }
            *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
                CowData<String>::_unref((CowData<String> *)local_50);
                goto LAB_00101741;
              }
            }
            break;
          }
          lVar5 = lVar5 + 1;
          if (local_50[0] == 0) break;
        }
      }
      CowData<String>::_unref((CowData<String> *)local_50);
LAB_00101741:
      iVar7 = iVar7 + 1;
      iVar4 = EditorFileSystemDirectory::get_file_count();
    } while (iVar7 < iVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::_get_owners(EditorFileSystemDirectory*, String, List<String,
   DefaultAllocator>&) */

void GDScriptWorkspace::_get_owners(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _get_owners();
    return;
  }
  return;
}



/* GDScriptWorkspace::_get_owner_scene_node(String) */

undefined8 __thiscall
GDScriptWorkspace::_get_owner_scene_node(GDScriptWorkspace *this,CowData *param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  undefined8 uVar6;
  String *pSVar7;
  long in_FS_OFFSET;
  List<String,DefaultAllocator> *local_80;
  long *local_78;
  NodePath local_70 [8];
  Object *local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (long *)0x0;
  local_58 = (undefined *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,param_2);
  }
  lVar4 = EditorFileSystem::get_filesystem();
  if (lVar4 != 0) {
    _get_owners(this,lVar4,(CowData<char32_t> *)&local_58);
  }
  local_80 = (List<String,DefaultAllocator> *)&local_78;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((local_78 != (long *)0x0) && (pSVar7 = (String *)*local_78, pSVar7 != (String *)0x0)) {
    do {
      NodePath::NodePath(local_70,pSVar7);
      local_58 = &_LC20;
      local_60 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      NodePath::operator_cast_to_String((NodePath *)&local_58);
      ResourceLoader::load(&local_68,(CowData<char32_t> *)&local_58,(StrRange *)&local_60,1,0);
      puVar2 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar2 + -0x10,false);
        }
      }
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
      if (local_68 != (Object *)0x0) {
        pOVar5 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&PackedScene::typeinfo,0);
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::init_ref();
          if (cVar3 == '\0') {
            pOVar5 = (Object *)0x0;
          }
          uVar6 = PackedScene::instantiate();
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))();
            Memory::free_static(pOVar5,false);
          }
          if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
            (**(code **)(*(long *)local_68 + 0x140))(local_68);
            Memory::free_static(local_68,false);
          }
          NodePath::~NodePath(local_70);
          goto LAB_00101a72;
        }
        cVar3 = RefCounted::unreference();
        pOVar5 = local_68;
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))();
          Memory::free_static(pOVar5,false);
        }
      }
      NodePath::~NodePath(local_70);
      pSVar7 = *(String **)(pSVar7 + 8);
    } while (pSVar7 != (String *)0x0);
  }
  uVar6 = 0;
LAB_00101a72:
  List<String,DefaultAllocator>::~List(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] [clone .constprop.0] */

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



/* GDScriptWorkspace::_bind_methods() */

void GDScriptWorkspace::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  long local_98 [2];
  CowData<StringName> local_88 [16];
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_98,(char ***)"apply_new_signal",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,Object*,String,Vector<String>>(apply_new_signal);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_98,(char ***)"didDeleteFiles",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,Dictionary_const&>(did_delete_files);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  local_68 = 0;
  local_78 = &_LC59;
  pcStack_70 = "content";
  auStack_50._0_8_ = &pcStack_70;
  uVar2 = (uint)&local_58;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"parse_script",uVar2);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,Error,String_const&,String_const&>(parse_script);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  local_78 = &_LC59;
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"parse_local_script",uVar2);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,Error,String_const&>(parse_local_script);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pcStack_70 = (char *)0x0;
  local_78 = &_LC5;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"get_file_path",uVar2);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,String,String_const&>(get_file_path);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  local_78 = &_LC59;
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"get_file_uri",uVar2);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,String,String_const&>(get_file_uri);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  local_78 = &_LC59;
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"publish_diagnostics",uVar2);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,String_const&>(publish_diagnostics);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  local_78 = &_LC59;
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)local_98,(char ***)"generate_script_api",uVar2);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<GDScriptWorkspace,Dictionary,String_const&>(generate_script_api);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DocData::MethodDoc>::_ref(CowData<DocData::MethodDoc> const&) [clone .part.0] [clone
   .constprop.0] */

void __thiscall
CowData<DocData::MethodDoc>::_ref(CowData<DocData::MethodDoc> *this,CowData *param_1)

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



/* CowData<lsp::TextEdit>::_ref(CowData<lsp::TextEdit> const&) [clone .part.0] */

void __thiscall CowData<lsp::TextEdit>::_ref(CowData<lsp::TextEdit> *this,CowData *param_1)

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



/* CowData<lsp::TextEdit>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<lsp::TextEdit>::_copy_on_write(CowData<lsp::TextEdit> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar8 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar8 = lVar1 * 0x18 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar8,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar10 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar1;
    puVar9 = puVar6 + 2;
    if (lVar1 != 0) {
      do {
        puVar7 = (undefined8 *)((long)puVar9 + *(long *)this + (-0x10 - (long)puVar6));
        uVar4 = *puVar7;
        uVar5 = puVar7[1];
        puVar9[2] = 0;
        lVar2 = puVar7[2];
        *puVar9 = uVar4;
        puVar9[1] = uVar5;
        if (lVar2 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)(puVar7 + 2));
        }
        lVar10 = lVar10 + 1;
        puVar9 = puVar9 + 3;
      } while (lVar1 != lVar10);
    }
    _unref(this);
    *(undefined8 **)this = puVar6 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDScriptWorkspace::remove_cache_parser(String const&) */

void __thiscall GDScriptWorkspace::remove_cache_parser(GDScriptWorkspace *this,String *param_1)

{
  long lVar1;
  ExtendGDScriptParser *pEVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
  *this_00;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  this_00 = (HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
             *)(this + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar3 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
          ::_lookup_pos(this_00,param_1,&local_44);
  if (cVar3 == '\0') {
    local_44 = 0;
    cVar3 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
            ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                           *)(this + 0x1c0),param_1,&local_44);
    if (cVar3 != '\0') {
      lVar4 = *(long *)(*(long *)(this + 0x1c8) + (ulong)local_44 * 8);
LAB_00102454:
      if (lVar4 != 0) {
        memdelete<ExtendGDScriptParser>(*(ExtendGDScriptParser **)(lVar4 + 0x18));
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102476;
        goto LAB_001024d5;
      }
    }
  }
  else {
    uVar5 = (ulong)local_44;
    local_44 = 0;
    lVar1 = *(long *)(*(long *)(this + 0x1f8) + uVar5 * 8);
    cVar3 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
            ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                           *)(this + 0x1c0),param_1,&local_44);
    if (cVar3 != '\0') {
      lVar4 = *(long *)(*(long *)(this + 0x1c8) + (ulong)local_44 * 8);
      if (lVar1 == 0) goto LAB_00102454;
      if (lVar4 == 0) goto LAB_001023e8;
      pEVar2 = *(ExtendGDScriptParser **)(lVar4 + 0x18);
      if ((pEVar2 == (ExtendGDScriptParser *)0x0) ||
         (pEVar2 != *(ExtendGDScriptParser **)(lVar1 + 0x18))) {
        memdelete<ExtendGDScriptParser>(pEVar2);
        memdelete<ExtendGDScriptParser>(*(ExtendGDScriptParser **)(lVar1 + 0x18));
      }
      else {
        memdelete<ExtendGDScriptParser>(pEVar2);
      }
      HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
      ::erase(this_00,param_1);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102476;
LAB_001024d5:
      this_00 = (HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                 *)(this + 0x1c0);
LAB_00102407:
      HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
      ::erase(this_00,param_1);
      return;
    }
    if (lVar1 != 0) {
LAB_001023e8:
      memdelete<ExtendGDScriptParser>(*(ExtendGDScriptParser **)(lVar1 + 0x18));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102407;
      goto LAB_00102476;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102476:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::parse_script(String const&, String const&) */

int __thiscall
GDScriptWorkspace::parse_script(GDScriptWorkspace *this,String *param_1,String *param_2)

{
  HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
  *this_00;
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  GDScriptParser *this_01;
  undefined8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar6 = 0;
  this_00 = (HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
             *)(this + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_01 = (GDScriptParser *)operator_new(0xb28,"");
  GDScriptParser::GDScriptParser(this_01);
  *(undefined2 *)(this_01 + 0xa64) = 0;
  uVar2 = _LC25;
  *(undefined8 *)(this_01 + 0xa28) = 0;
  *(undefined8 *)(this_01 + 0xae8) = uVar2;
  *(undefined8 *)(this_01 + 0xb18) = uVar2;
  *(undefined8 *)(this_01 + 0xa58) = 0;
  *(undefined4 *)(this_01 + 0xa60) = 1;
  *(undefined8 *)(this_01 + 0xaa0) = 0;
  *(undefined1 (*) [16])(this_01 + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xaf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0xb08) = (undefined1  [16])0x0;
  Array::Array((Array *)(this_01 + 0xb20));
  iVar4 = ExtendGDScriptParser::parse((String *)this_01,param_2);
  local_44 = 0;
  cVar3 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
          ::_lookup_pos(this_00,param_1,&local_44);
  if (cVar3 != '\0') {
    lVar6 = *(long *)(*(long *)(this + 0x1f8) + (ulong)local_44 * 8);
  }
  local_44 = 0;
  cVar3 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
          ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                         *)(this + 0x1c0),param_1,&local_44);
  if (cVar3 == '\0') {
    if (iVar4 == 0) {
LAB_001026e0:
      remove_cache_parser(this,param_1);
      puVar5 = (undefined8 *)
               HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
               ::operator[](this_00,param_1);
      *puVar5 = this_01;
      puVar5 = (undefined8 *)
               HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
               ::operator[]((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                             *)(this + 0x1c0),param_1);
      *puVar5 = this_01;
      goto LAB_00102683;
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x1c8) + (ulong)local_44 * 8);
    if (iVar4 == 0) goto LAB_001026e0;
    if (((lVar1 != 0) && (lVar6 != 0)) &&
       (*(ExtendGDScriptParser **)(lVar6 + 0x18) != *(ExtendGDScriptParser **)(lVar1 + 0x18))) {
      memdelete<ExtendGDScriptParser>(*(ExtendGDScriptParser **)(lVar6 + 0x18));
    }
  }
  puVar5 = (undefined8 *)
           HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
           ::operator[](this_00,param_1);
  *puVar5 = this_01;
LAB_00102683:
  publish_diagnostics(this,param_1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::did_delete_files(Dictionary const&) */

void __thiscall GDScriptWorkspace::did_delete_files(GDScriptWorkspace *this,Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Variant local_90 [8];
  Variant local_88 [8];
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"files");
  Dictionary::operator[]((Variant *)param_1);
  Variant::operator_cast_to_Array(local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar4 = 0;
  while( true ) {
    iVar3 = Array::size();
    if (iVar3 <= iVar4) break;
    Array::operator[]((int)local_90);
    Variant::operator_cast_to_Dictionary(local_88);
    Variant::Variant((Variant *)local_58,"uri");
    Dictionary::operator[](local_88);
    Variant::operator_cast_to_String((Variant *)&local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    get_file_path((String *)&local_78);
    local_68 = &_LC20;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    parse_script(this,(String *)&local_78,(String *)&local_70);
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
    iVar4 = iVar4 + 1;
    Dictionary::~Dictionary((Dictionary *)local_88);
  }
  Array::~Array((Array *)local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::reload_all_workspace_scripts() */

void __thiscall GDScriptWorkspace::reload_all_workspace_scripts(GDScriptWorkspace *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
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
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  String *pSVar20;
  long in_FS_OFFSET;
  int local_74;
  long *local_70;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (long *)0x0;
  local_58 = &_LC39;
  local_60 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_60);
  list_script_files(this,(String *)&local_60,(List *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((local_70 != (long *)0x0) && (pSVar20 = (String *)*local_70, pSVar20 != (String *)0x0)) {
    do {
      FileAccess::get_file_as_string((String *)&local_68,pSVar20);
      if (local_74 == 0) {
        local_74 = parse_script(this,pSVar20,(String *)&local_68);
        if (local_74 != 0) {
          if ((*(long *)(this + 0x1f8) != 0) && (*(int *)(this + 0x21c) != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
            uVar14 = String::hash();
            uVar12 = CONCAT44(0,uVar2);
            lVar19 = *(long *)(this + 0x200);
            uVar15 = 1;
            if (uVar14 != 0) {
              uVar15 = uVar14;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar15 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar12;
            lVar17 = SUB168(auVar4 * auVar8,8);
            uVar14 = *(uint *)(lVar19 + lVar17 * 4);
            uVar16 = SUB164(auVar4 * auVar8,8);
            if (uVar14 != 0) {
              uVar18 = 0;
              do {
                if (uVar15 == uVar14) {
                  cVar13 = String::operator==((String *)
                                              (*(long *)(*(long *)(this + 0x1f8) + lVar17 * 8) +
                                              0x10),pSVar20);
                  if (cVar13 != '\0') {
                    lVar3 = *(long *)(*(long *)(this + 0x1f8) + (ulong)uVar16 * 8);
                    operator+((char *)&local_60,(String *)"Failed parse script ");
                    if (lVar3 != 0) {
                      operator+((char *)&local_58,(String *)&_LC78);
                      String::operator+=((String *)&local_60,(String *)&local_58);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                    }
                    goto joined_r0x00102c77;
                  }
                  lVar19 = *(long *)(this + 0x200);
                }
                uVar18 = uVar18 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar12;
                lVar17 = SUB168(auVar5 * auVar9,8);
                uVar14 = *(uint *)(lVar19 + lVar17 * 4);
                uVar16 = SUB164(auVar5 * auVar9,8);
              } while ((uVar14 != 0) &&
                      (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
                      auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                      auVar7._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
                      auVar11._8_8_ = 0, auVar11._0_8_ = uVar12,
                      uVar18 <= SUB164(auVar7 * auVar11,8)));
            }
          }
          operator+((char *)&local_60,(String *)"Failed parse script ");
joined_r0x00102c77:
          if (local_74 != 0) {
            _err_print_error("reload_all_workspace_scripts",
                             "modules/gdscript/language_server/gdscript_workspace.cpp",0xe4,
                             "Condition \"err != OK\" is true. Continuing.",(StrRange *)&local_60,0,
                             0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            goto LAB_00102ce5;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        lVar3 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
        _err_print_error("reload_all_workspace_scripts",
                         "modules/gdscript/language_server/gdscript_workspace.cpp",0xdb,
                         "Condition \"err != OK\" is true. Continuing.",0,0);
LAB_00102ce5:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      pSVar20 = *(String **)(pSVar20 + 8);
    } while (pSVar20 != (String *)0x0);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptWorkspace::parse_local_script(String const&) */

int __thiscall GDScriptWorkspace::parse_local_script(GDScriptWorkspace *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::get_file_as_string((String *)&local_38,param_1);
  if (local_3c == 0) {
    local_3c = parse_script(this,param_1,(String *)&local_38);
  }
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::get_parse_successed_script(String const&) */

undefined8 __thiscall
GDScriptWorkspace::get_parse_successed_script(GDScriptWorkspace *this,String *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  int local_4c;
  uint local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x1c8) != 0) && (*(int *)(this + 0x1ec) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4);
    lVar13 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
    uVar11 = String::hash();
    uVar18 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x1d0);
    uVar14 = 1;
    if (uVar11 != 0) {
      uVar14 = uVar11;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar14 * lVar13;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    lVar16 = SUB168(auVar2 * auVar6,8);
    uVar11 = *(uint *)(lVar17 + lVar16 * 4);
    uVar15 = SUB164(auVar2 * auVar6,8);
    if (uVar11 != 0) {
      uVar19 = 0;
      do {
        if (uVar14 == uVar11) {
          cVar10 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x1c8) + lVar16 * 8) + 0x10),
                                      param_1);
          if (cVar10 != '\0') {
            lVar13 = *(long *)(*(long *)(this + 0x1c8) + (ulong)uVar15 * 8);
            if (lVar13 != 0) goto LAB_00102f4b;
            break;
          }
          lVar17 = *(long *)(this + 0x1d0);
        }
        uVar19 = uVar19 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar15 + 1) * lVar13;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar18;
        lVar16 = SUB168(auVar3 * auVar7,8);
        uVar11 = *(uint *)(lVar17 + lVar16 * 4);
        uVar15 = SUB164(auVar3 * auVar7,8);
        if ((uVar11 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar11 * lVar13, auVar8._8_8_ = 0,
           auVar8._0_8_ = uVar18, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((uVar1 + uVar15) - SUB164(auVar4 * auVar8,8)) * lVar13,
           auVar9._8_8_ = 0, auVar9._0_8_ = uVar18, SUB164(auVar5 * auVar9,8) < uVar19)) break;
      } while( true );
    }
  }
  FileAccess::get_file_as_string((String *)local_48,param_1);
  if (local_4c == 0) {
    parse_script(this,param_1,(String *)local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  local_48[0] = 0;
  cVar10 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
           ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                          *)(this + 0x1c0),param_1,local_48);
  if (cVar10 == '\0') {
    uVar12 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(this + 0x1c8) + (ulong)local_48[0] * 8);
    if (lVar13 == 0) {
      uVar12 = 0;
    }
    else {
LAB_00102f4b:
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::resolve_document_links(String const&, List<lsp::DocumentLink,
   DefaultAllocator>&) */

void __thiscall
GDScriptWorkspace::resolve_document_links(GDScriptWorkspace *this,String *param_1,List *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  long in_FS_OFFSET;
  String aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  get_file_path(aSStack_38);
  lVar2 = get_parse_successed_script(this,aSStack_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_38);
  if (lVar2 != 0) {
    plVar3 = (long *)ExtendGDScriptParser::get_document_links();
    if (((long *)*plVar3 != (long *)0x0) &&
       (puVar5 = *(undefined8 **)*plVar3, puVar5 != (undefined8 *)0x0)) {
      if (*(long *)param_2 == 0) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_2 = pauVar4;
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
      }
      do {
        while( true ) {
          pauVar4 = (undefined1 (*) [16])operator_new(0x30,DefaultAllocator::alloc);
          *pauVar4 = (undefined1  [16])0x0;
          pauVar4[1] = (undefined1  [16])0x0;
          pauVar4[2] = (undefined1  [16])0x0;
          uVar1 = puVar5[1];
          lVar2 = puVar5[2];
          *(undefined8 *)*pauVar4 = *puVar5;
          *(undefined8 *)(*pauVar4 + 8) = uVar1;
          if (lVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar4 + 1),(CowData *)(puVar5 + 2));
          }
          plVar3 = *(long **)param_2;
          lVar2 = plVar3[1];
          *(undefined8 *)(pauVar4[1] + 8) = 0;
          *(long **)(pauVar4[2] + 8) = plVar3;
          *(long *)pauVar4[2] = lVar2;
          if (lVar2 != 0) {
            *(undefined1 (**) [16])(lVar2 + 0x18) = pauVar4;
          }
          plVar3[1] = (long)pauVar4;
          if (*plVar3 != 0) break;
          puVar5 = (undefined8 *)puVar5[3];
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          *plVar3 = (long)pauVar4;
          if (puVar5 == (undefined8 *)0x0) goto LAB_001030e0;
        }
        puVar5 = (undefined8 *)puVar5[3];
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      } while (puVar5 != (undefined8 *)0x0);
    }
  }
LAB_001030e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::generate_script_api(String const&) */

String * GDScriptWorkspace::generate_script_api(String *param_1)

{
  long lVar1;
  String *in_RDX;
  GDScriptWorkspace *in_RSI;
  long in_FS_OFFSET;
  Dictionary aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)param_1);
  lVar1 = get_parse_successed_script(in_RSI,in_RDX);
  if (lVar1 != 0) {
    ExtendGDScriptParser::generate_api();
    Dictionary::operator=((Dictionary *)param_1,aDStack_28);
    Dictionary::~Dictionary(aDStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::get_parse_result(String const&) */

undefined8 __thiscall GDScriptWorkspace::get_parse_result(GDScriptWorkspace *this,String *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  int local_4c;
  uint local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x1f8) != 0) && (*(int *)(this + 0x21c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
    lVar13 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
    uVar11 = String::hash();
    uVar18 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x200);
    uVar14 = 1;
    if (uVar11 != 0) {
      uVar14 = uVar11;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar14 * lVar13;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    lVar16 = SUB168(auVar2 * auVar6,8);
    uVar11 = *(uint *)(lVar17 + lVar16 * 4);
    uVar15 = SUB164(auVar2 * auVar6,8);
    if (uVar11 != 0) {
      uVar19 = 0;
      do {
        if (uVar14 == uVar11) {
          cVar10 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x1f8) + lVar16 * 8) + 0x10),
                                      param_1);
          if (cVar10 != '\0') {
            lVar13 = *(long *)(*(long *)(this + 0x1f8) + (ulong)uVar15 * 8);
            if (lVar13 != 0) goto LAB_0010331b;
            break;
          }
          lVar17 = *(long *)(this + 0x200);
        }
        uVar19 = uVar19 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar15 + 1) * lVar13;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar18;
        lVar16 = SUB168(auVar3 * auVar7,8);
        uVar11 = *(uint *)(lVar17 + lVar16 * 4);
        uVar15 = SUB164(auVar3 * auVar7,8);
        if ((uVar11 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar11 * lVar13, auVar8._8_8_ = 0,
           auVar8._0_8_ = uVar18, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((uVar1 + uVar15) - SUB164(auVar4 * auVar8,8)) * lVar13,
           auVar9._8_8_ = 0, auVar9._0_8_ = uVar18, SUB164(auVar5 * auVar9,8) < uVar19)) break;
      } while( true );
    }
  }
  FileAccess::get_file_as_string((String *)local_48,param_1);
  if (local_4c == 0) {
    parse_script(this,param_1,(String *)local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  local_48[0] = 0;
  cVar10 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
           ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                          *)(this + 0x1f0),param_1,local_48);
  if (cVar10 == '\0') {
    uVar12 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(this + 0x1f8) + (ulong)local_48[0] * 8);
    if (lVar13 == 0) {
      uVar12 = 0;
    }
    else {
LAB_0010331b:
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::completion(lsp::CompletionParams const&,
   List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>*) */

void __thiscall
GDScriptWorkspace::completion(GDScriptWorkspace *this,CompletionParams *param_1,List *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  Object *pOVar5;
  Object *pOVar6;
  Object *pOVar7;
  undefined8 extraout_RDX;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 *puVar9;
  undefined1 local_89;
  long local_88;
  undefined8 local_80;
  Array local_78 [8];
  CowData<char32_t> local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_file_path((String *)&local_88);
  local_89 = 0;
  local_80 = 0;
  lVar3 = get_parse_result(this,(String *)&local_88);
  if (lVar3 == 0) goto LAB_001037ab;
  local_60 = 0;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_88);
  }
  pOVar4 = (Object *)_get_owner_scene_node(this,(CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Array::Array(local_78);
  if (pOVar4 == (Object *)0x0) {
    ExtendGDScriptParser::get_text_for_completion((CowData<char32_t> *)&local_60);
    (**(code **)(*GDScriptLanguage::singleton + 0x220))
              (GDScriptLanguage::singleton,(CowData<char32_t> *)&local_60,(String *)&local_88,0,
               param_2,&local_89,&local_80);
  }
  else {
    Variant::Variant((Variant *)local_58,pOVar4);
    Array::push_back((Variant *)local_78);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pOVar5 = (Object *)0x0;
LAB_001034a0:
    cVar1 = Array::is_empty();
    if (cVar1 == '\0') {
      do {
        Array::pop_back();
        pOVar5 = Variant::operator_cast_to_Object_((Variant *)local_58);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(*(long *)pOVar5 + 0x98))((Variant *)local_58,pOVar5);
        lVar3 = Variant::get_validated_object();
        if (lVar3 == 0) {
LAB_00103800:
          cVar1 = Variant::needs_deinit[local_58[0]];
joined_r0x0010382d:
          if (cVar1 != '\0') {
            Variant::_clear_internal();
          }
          pOVar6 = (Object *)0x0;
        }
        else {
          pOVar6 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&GDScript::typeinfo,0);
          if (pOVar6 == (Object *)0x0) {
            cVar1 = Variant::needs_deinit[local_58[0]];
            goto joined_r0x0010382d;
          }
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') goto LAB_00103800;
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Resource::get_path();
          GDScript::canonicalize_path((String *)&local_60);
          GDScript::canonicalize_path(local_68);
          cVar1 = String::operator==(local_68,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref(local_70);
          if (cVar1 != '\0') {
            cVar1 = RefCounted::unreference();
            if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
            break;
          }
        }
        for (iVar8 = 0; iVar2 = Node::get_child_count(SUB81(pOVar5,0)), iVar8 < iVar2;
            iVar8 = iVar8 + 1) {
          pOVar7 = (Object *)Node::get_child((int)pOVar5,SUB41(iVar8,0));
          Variant::Variant((Variant *)local_58,pOVar7);
          Array::push_back((Variant *)local_78);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (((pOVar6 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
           (cVar1 = predelete_handler(pOVar6), cVar1 == '\0')) goto LAB_001034a0;
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        cVar1 = Array::is_empty();
        if (cVar1 != '\0') break;
      } while( true );
    }
    (**(code **)(*(long *)pOVar5 + 0x98))((Variant *)local_58,pOVar5);
    lVar3 = Variant::get_validated_object();
    if (lVar3 == 0) {
LAB_001036c1:
      cVar1 = Variant::needs_deinit[local_58[0]];
joined_r0x0010394b:
      pOVar5 = pOVar4;
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&GDScript::typeinfo,0);
      if (pOVar6 == (Object *)0x0) {
        cVar1 = Variant::needs_deinit[local_58[0]];
        goto joined_r0x0010394b;
      }
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') goto LAB_001036c1;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Resource::get_path();
      GDScript::canonicalize_path((String *)&local_60);
      GDScript::canonicalize_path(local_68);
      cVar1 = String::operator==(local_68,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref(local_70);
      if (cVar1 == '\0') {
        pOVar5 = pOVar4;
      }
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    ExtendGDScriptParser::get_text_for_completion((CowData<char32_t> *)&local_60);
    puVar9 = &local_80;
    (**(code **)(*GDScriptLanguage::singleton + 0x220))
              (GDScriptLanguage::singleton,(CowData<char32_t> *)&local_60,(String *)&local_88,pOVar5
               ,param_2,&local_89);
    cVar1 = predelete_handler(pOVar4);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4,0x1036f3,extraout_RDX,puVar9);
      Memory::free_static(pOVar4,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Array::~Array(local_78);
LAB_001037ab:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::resolve_symbol(lsp::TextDocumentPositionParams const&, String const&, bool) */

String * GDScriptWorkspace::resolve_symbol
                   (TextDocumentPositionParams *param_1,String *param_2,bool param_3)

{
  code *pcVar1;
  long *plVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  String *pSVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined7 in_register_00000011;
  String *this;
  long in_FS_OFFSET;
  CowData<char32_t> *local_118;
  long local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  char local_c8 [8];
  CowData *local_c0;
  long local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  CowData<char32_t> local_80 [16];
  undefined8 local_70;
  undefined1 local_68;
  CowData<char32_t> local_60 [8];
  Object *pOStack_58;
  ulong local_50;
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_file_path((String *)&local_f0);
  pSVar6 = (String *)get_parse_result((GDScriptWorkspace *)param_1,(String *)&local_f0);
  this = pSVar6;
  if (pSVar6 == (String *)0x0) goto LAB_00103ae8;
  local_e8 = 0;
  if (*(long *)CONCAT71(in_register_00000011,param_3) != 0) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_e8,(CowData *)CONCAT71(in_register_00000011,param_3));
  }
  String::split(local_c8,SUB81((CowData<char32_t> *)&local_e8,0),0x10e80d);
  uVar7 = local_e8;
  if ((local_c0 != (CowData *)0x0) && (lVar8 = *(long *)(local_c0 + -8), lVar8 != 0)) {
    if (lVar8 < 1) {
      lVar9 = 0;
      goto LAB_0010403d;
    }
    uVar7 = *(ulong *)local_c0;
    if (local_e8 != *(ulong *)local_c0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,local_c0);
      uVar7 = local_e8;
    }
  }
  local_d0 = *(undefined8 *)(param_2 + 8);
  if ((uVar7 == 0) || (*(uint *)(uVar7 - 8) < 2)) {
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    ExtendGDScriptParser::get_identifier_under_position
              ((CowData<char32_t> *)&local_d8,(Range *)pSVar6);
    if (local_e8 != local_d8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_d8;
      local_d8 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    local_d0 = CONCAT44(uStack_ac,(undefined4)local_d0);
    if ((local_e8 != 0) && (1 < *(uint *)(local_e8 - 8))) goto LAB_00103b48;
    this = (String *)0x0;
  }
  else {
LAB_00103b48:
    StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
    cVar4 = ScriptServer::is_global_class((StringName *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
    }
    if (cVar4 == '\0') {
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_68 = 0;
      local_50 = 0;
      local_48 = -1;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_a8 = 0;
      local_80[0] = (CowData<char32_t>)0x0;
      local_80[1] = (CowData<char32_t>)0x0;
      local_80[2] = (CowData<char32_t>)0x0;
      local_80[3] = (CowData<char32_t>)0x0;
      local_80[4] = (CowData<char32_t>)0x0;
      local_80[5] = (CowData<char32_t>)0x0;
      local_80[6] = (CowData<char32_t>)0x0;
      local_80[7] = (CowData<char32_t>)0x0;
      local_80[8] = (CowData<char32_t>)0x0;
      local_80[9] = (CowData<char32_t>)0x0;
      local_80[10] = (CowData<char32_t>)0x0;
      local_80[0xb] = (CowData<char32_t>)0x0;
      local_80[0xc] = (CowData<char32_t>)0x0;
      local_80[0xd] = (CowData<char32_t>)0x0;
      local_80[0xe] = (CowData<char32_t>)0x0;
      local_80[0xf] = (CowData<char32_t>)0x0;
      _local_60 = (undefined1  [16])0x0;
      cVar4 = String::operator==((String *)&local_e8,"new");
      if (cVar4 != '\0') {
        lVar9 = (long)*(int *)(param_2 + 8);
        lVar8 = *(long *)(pSVar6 + 0xa38);
        if (lVar9 < 0) {
          if (lVar8 != 0) {
LAB_001040b0:
            lVar8 = *(long *)(lVar8 + -8);
            goto LAB_0010403d;
          }
        }
        else if (lVar8 != 0) {
          if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_001040b0;
          String::replace((char *)&local_e0,(char *)(lVar8 + lVar9 * 8));
          String::replace((char *)&local_d8,(char *)&local_e0);
          iVar5 = String::find((char *)&local_d8,0x10e817);
          if (iVar5 == -1) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          }
          else {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            String::parse_latin1((String *)&local_e8,"_init");
          }
          goto LAB_00103c69;
        }
        lVar8 = 0;
LAB_0010403d:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_00103c69:
      plVar2 = GDScriptLanguage::singleton;
      local_118 = (CowData<char32_t> *)&local_d8;
      pcVar1 = *(code **)(*GDScriptLanguage::singleton + 0x228);
      ExtendGDScriptParser::get_text_for_lookup_symbol(local_118,pSVar6,SUB81(&local_d0,0));
      iVar5 = (*pcVar1)(plVar2,local_118,(CowData<char32_t> *)&local_e8,(String *)&local_f0,0,
                        (StringName *)&local_b8);
      CowData<char32_t>::_unref(local_118);
      if (iVar5 == 0) {
        if (local_48 < 0) {
          local_d8 = 0;
          if ((((local_a8 == 0) ||
               (CowData<char32_t>::_ref(local_118,(CowData *)&local_a8), local_d8 == 0)) ||
              (*(uint *)(local_d8 - 8) < 2)) &&
             ((cVar4 = String::operator!=((String *)&local_e8,(String *)&uStack_b0), cVar4 != '\0'
              && (local_d8 != local_e8)))) {
            CowData<char32_t>::_ref(local_118,(CowData *)&local_e8);
          }
          this = (String *)
                 get_native_symbol((GDScriptWorkspace *)param_1,(String *)&uStack_b0,
                                   (String *)local_118);
          CowData<char32_t>::_unref(local_118);
        }
        else {
          local_e0 = 0;
          if (local_f0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_f0);
          }
          if (pOStack_58 == (Object *)0x0) {
            if (((local_50 != 0) && (1 < *(uint *)(local_50 - 8))) && (local_50 != local_e0)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_50);
            }
          }
          else {
            Resource::get_path();
            if (local_e0 != local_d8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_d8;
              local_d8 = 0;
            }
            CowData<char32_t>::_unref(local_118);
          }
          lVar8 = get_parse_result((GDScriptWorkspace *)param_1,(String *)&local_e0);
          if ((lVar8 == 0) ||
             (this = (String *)
                     ExtendGDScriptParser::get_symbol_defined_at_line
                               ((int)lVar8,(String *)(ulong)(local_48 - 1)), this == (String *)0x0))
          {
            this = (String *)0x0;
          }
          else if ((*(int *)(this + 0x20) == 0xc) &&
                  (cVar4 = String::operator!=(this,(String *)&local_e8), cVar4 != '\0')) {
            this = (String *)
                   get_parameter_symbol
                             ((GDScriptWorkspace *)param_1,(DocumentSymbol *)this,
                              (String *)&local_e8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        }
      }
      else {
        this = (String *)
               get_local_symbol_at((GDScriptWorkspace *)param_1,pSVar6,
                                   (CowData<char32_t> *)&local_e8,*(undefined8 *)(param_2 + 8));
        if (this == (String *)0x0) {
          local_d8 = 0;
          String::parse_latin1((String *)local_118,"");
          this = (String *)ExtendGDScriptParser::get_member_symbol(pSVar6,(String *)&local_e8);
          CowData<char32_t>::_unref(local_118);
        }
      }
      local_118 = (CowData<char32_t> *)&local_50;
      CowData<char32_t>::_unref(local_118);
      if ((pOStack_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        pOVar3 = pOStack_58;
        cVar4 = predelete_handler(pOStack_58);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref(local_80 + 8);
      CowData<char32_t>::_unref(local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_b0);
    }
    else {
      ScriptServer::get_global_class_path((String *)&local_b8);
      local_d8 = local_d8 & 0xffffffff00000000;
      cVar4 = HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
              ::_lookup_pos((HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
                             *)(param_1 + 0x1c0),(String *)&local_b8,(uint *)&local_d8);
      if ((cVar4 == '\0') ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x1c8) + (local_d8 & 0xffffffff) * 8), lVar8 == 0))
      {
        this = (String *)0x0;
      }
      else {
        this = (String *)(*(long *)(lVar8 + 0x18) + 0xa40);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00103ae8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GDScriptWorkspace::resolve_related_symbols(lsp::TextDocumentPositionParams const&,
   List<lsp::DocumentSymbol const*, DefaultAllocator>&) */

void __thiscall
GDScriptWorkspace::resolve_related_symbols
          (GDScriptWorkspace *this,TextDocumentPositionParams *param_1,List *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
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
  code *pcVar38;
  char cVar39;
  uint uVar40;
  uint uVar41;
  Range *pRVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined1 (*pauVar45) [16];
  uint uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  uint uVar51;
  long in_FS_OFFSET;
  String local_70 [8];
  long local_68;
  long local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_file_path(local_70);
  pRVar42 = (Range *)get_parse_result(this,local_70);
  if (pRVar42 != (Range *)0x0) {
    local_58 = (undefined1  [16])0x0;
    local_68 = 0;
    ExtendGDScriptParser::get_identifier_under_position((CowData<char32_t> *)&local_60,pRVar42);
    if (local_68 != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_68 = local_60;
      local_60 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    puVar2 = *(undefined8 **)(this + 0x238);
joined_r0x00104247:
    do {
      if (puVar2 == (undefined8 *)0x0) goto LAB_001045bb;
      if ((*(long *)(this + 0x228) == 0) || (*(int *)(this + 0x24c) == 0)) {
LAB_00104890:
        _err_print_error(&_LC19,"./core/templates/hash_map.h",0x140,
                         "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar38 = (code *)invalidInstructionException();
        (*pcVar38)();
      }
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x248) * 4);
      uVar50 = CONCAT44(0,uVar1);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x248) * 8);
      if (puVar2[2] == 0) {
        uVar41 = StringName::get_empty_hash();
      }
      else {
        uVar41 = *(uint *)(puVar2[2] + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar3;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar50;
      lVar47 = SUB168(auVar6 * auVar22,8);
      uVar40 = *(uint *)(*(long *)(this + 0x230) + lVar47 * 4);
      uVar46 = SUB164(auVar6 * auVar22,8);
      if (uVar40 == 0) goto LAB_00104890;
      uVar51 = 0;
      while ((uVar41 != uVar40 ||
             (*(long *)(*(long *)(*(long *)(this + 0x228) + lVar47 * 8) + 0x10) != puVar2[2]))) {
        uVar51 = uVar51 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar46 + 1) * lVar3;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar50;
        lVar47 = SUB168(auVar7 * auVar23,8);
        uVar40 = *(uint *)(*(long *)(this + 0x230) + lVar47 * 4);
        uVar46 = SUB164(auVar7 * auVar23,8);
        if ((uVar40 == 0) ||
           (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar40 * lVar3, auVar24._8_8_ = 0,
           auVar24._0_8_ = uVar50, auVar9._8_8_ = 0,
           auVar9._0_8_ = (ulong)((uVar1 + uVar46) - SUB164(auVar8 * auVar24,8)) * lVar3,
           auVar25._8_8_ = 0, auVar25._0_8_ = uVar50, SUB164(auVar9 * auVar25,8) < uVar51))
        goto LAB_00104890;
      }
      lVar3 = *(long *)(*(long *)(this + 0x228) + (ulong)uVar46 * 8);
      if ((*(long *)(lVar3 + 0x20) != 0) && (*(int *)(lVar3 + 0x44) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0x40) * 4);
        lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar3 + 0x40) * 8);
        uVar40 = String::hash();
        uVar50 = CONCAT44(0,uVar1);
        uVar41 = 1;
        if (uVar40 != 0) {
          uVar41 = uVar40;
        }
        lVar49 = *(long *)(lVar3 + 0x28);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar41 * lVar47;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar50;
        lVar48 = SUB168(auVar10 * auVar26,8);
        uVar40 = *(uint *)(lVar49 + lVar48 * 4);
        uVar46 = SUB164(auVar10 * auVar26,8);
        if (uVar40 != 0) {
          uVar51 = 0;
          do {
            if (uVar41 == uVar40) {
              cVar39 = String::operator==((String *)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + lVar48 * 8) + 0x10),
                                          (String *)&local_68);
              if (cVar39 != '\0') {
                lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + (ulong)uVar46 * 8);
                if (*(long *)param_2 == 0) {
                  pauVar45 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                  *(undefined1 (**) [16])param_2 = pauVar45;
                  *(undefined4 *)pauVar45[1] = 0;
                  *pauVar45 = (undefined1  [16])0x0;
                }
                puVar44 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
                uVar4 = *(undefined8 *)(lVar3 + 0x18);
                puVar44[1] = 0;
                *puVar44 = uVar4;
                plVar5 = *(long **)param_2;
                lVar3 = plVar5[1];
                puVar44[3] = plVar5;
                puVar44[2] = lVar3;
                if (lVar3 != 0) {
                  *(undefined8 **)(lVar3 + 8) = puVar44;
                }
                plVar5[1] = (long)puVar44;
                if (*plVar5 == 0) {
                  *plVar5 = (long)puVar44;
                }
                *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
                goto LAB_001045a7;
              }
              lVar49 = *(long *)(lVar3 + 0x28);
            }
            uVar51 = uVar51 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(uVar46 + 1) * lVar47;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar50;
            lVar48 = SUB168(auVar11 * auVar27,8);
            uVar40 = *(uint *)(lVar49 + lVar48 * 4);
            uVar46 = SUB164(auVar11 * auVar27,8);
          } while ((uVar40 != 0) &&
                  (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar40 * lVar47, auVar28._8_8_ = 0,
                  auVar28._0_8_ = uVar50, auVar13._8_8_ = 0,
                  auVar13._0_8_ = (ulong)((uVar1 + uVar46) - SUB164(auVar12 * auVar28,8)) * lVar47,
                  auVar29._8_8_ = 0, auVar29._0_8_ = uVar50, uVar51 <= SUB164(auVar13 * auVar29,8)))
          ;
          puVar2 = (undefined8 *)*puVar2;
          goto joined_r0x00104247;
        }
      }
LAB_001045a7:
      puVar2 = (undefined8 *)*puVar2;
    } while( true );
  }
LAB_00104501:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001045bb:
  for (puVar2 = *(undefined8 **)(this + 0x1d8); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    lVar3 = puVar2[3];
    if ((*(long *)(lVar3 + 0xac8) != 0) && (*(int *)(lVar3 + 0xaec) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0xae8) * 4);
      lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar3 + 0xae8) * 8);
      uVar40 = String::hash();
      uVar50 = CONCAT44(0,uVar1);
      lVar49 = *(long *)(lVar3 + 0xad0);
      uVar41 = 1;
      if (uVar40 != 0) {
        uVar41 = uVar40;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar41 * lVar47;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar50;
      lVar48 = SUB168(auVar14 * auVar30,8);
      uVar40 = *(uint *)(lVar49 + lVar48 * 4);
      uVar46 = SUB164(auVar14 * auVar30,8);
      if (uVar40 != 0) {
        uVar51 = 0;
        do {
          if (uVar41 == uVar40) {
            cVar39 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar3 + 0xac8) + lVar48 * 8) + 0x10),
                                        (String *)&local_68);
            if (cVar39 != '\0') {
              lVar47 = *(long *)(*(long *)(lVar3 + 0xac8) + (ulong)uVar46 * 8);
              if (*(long *)param_2 == 0) {
                pauVar45 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined1 (**) [16])param_2 = pauVar45;
                *(undefined4 *)pauVar45[1] = 0;
                *pauVar45 = (undefined1  [16])0x0;
              }
              puVar44 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
              uVar4 = *(undefined8 *)(lVar47 + 0x18);
              puVar44[1] = 0;
              *puVar44 = uVar4;
              plVar5 = *(long **)param_2;
              lVar47 = plVar5[1];
              puVar44[3] = plVar5;
              puVar44[2] = lVar47;
              if (lVar47 != 0) {
                *(undefined8 **)(lVar47 + 8) = puVar44;
              }
              plVar5[1] = (long)puVar44;
              if (*plVar5 == 0) {
                *plVar5 = (long)puVar44;
              }
              *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
              break;
            }
            lVar49 = *(long *)(lVar3 + 0xad0);
          }
          uVar51 = uVar51 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(uVar46 + 1) * lVar47;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar50;
          lVar48 = SUB168(auVar15 * auVar31,8);
          uVar40 = *(uint *)(lVar49 + lVar48 * 4);
          uVar46 = SUB164(auVar15 * auVar31,8);
          if ((uVar40 == 0) ||
             (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar40 * lVar47, auVar32._8_8_ = 0,
             auVar32._0_8_ = uVar50, auVar17._8_8_ = 0,
             auVar17._0_8_ = (ulong)((uVar1 + uVar46) - SUB164(auVar16 * auVar32,8)) * lVar47,
             auVar33._8_8_ = 0, auVar33._0_8_ = uVar50, SUB164(auVar17 * auVar33,8) < uVar51))
          break;
        } while( true );
      }
    }
    for (puVar44 = *(undefined8 **)(lVar3 + 0xb08); puVar44 != (undefined8 *)0x0;
        puVar44 = (undefined8 *)*puVar44) {
      while ((puVar44[4] != 0 && (*(int *)((long)puVar44 + 0x44) != 0))) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar44 + 8) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(puVar44 + 8) * 8);
        uVar40 = String::hash();
        uVar50 = CONCAT44(0,uVar1);
        lVar47 = puVar44[5];
        uVar41 = 1;
        if (uVar40 != 0) {
          uVar41 = uVar40;
        }
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar3;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar50;
        lVar49 = SUB168(auVar18 * auVar34,8);
        uVar40 = *(uint *)(lVar47 + lVar49 * 4);
        uVar46 = SUB164(auVar18 * auVar34,8);
        if (uVar40 == 0) break;
        uVar51 = 0;
        do {
          if (uVar41 == uVar40) {
            cVar39 = String::operator==((String *)(*(long *)(puVar44[4] + lVar49 * 8) + 0x10),
                                        (String *)&local_68);
            if (cVar39 != '\0') {
              lVar3 = *(long *)(puVar44[4] + (ulong)uVar46 * 8);
              if (*(long *)param_2 == 0) {
                pauVar45 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined1 (**) [16])param_2 = pauVar45;
                *(undefined4 *)pauVar45[1] = 0;
                *pauVar45 = (undefined1  [16])0x0;
              }
              puVar43 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
              uVar4 = *(undefined8 *)(lVar3 + 0x18);
              puVar43[1] = 0;
              *puVar43 = uVar4;
              plVar5 = *(long **)param_2;
              lVar3 = plVar5[1];
              puVar43[3] = plVar5;
              puVar43[2] = lVar3;
              if (lVar3 != 0) {
                *(undefined8 **)(lVar3 + 8) = puVar43;
              }
              plVar5[1] = (long)puVar43;
              if (*plVar5 == 0) {
                *plVar5 = (long)puVar43;
              }
              *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
              goto LAB_001044d0;
            }
            lVar47 = puVar44[5];
          }
          uVar51 = uVar51 + 1;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (ulong)(uVar46 + 1) * lVar3;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = uVar50;
          lVar49 = SUB168(auVar19 * auVar35,8);
          uVar40 = *(uint *)(lVar47 + lVar49 * 4);
          uVar46 = SUB164(auVar19 * auVar35,8);
        } while ((uVar40 != 0) &&
                (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar40 * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar50, auVar21._8_8_ = 0,
                auVar21._0_8_ = (ulong)((uVar1 + uVar46) - SUB164(auVar20 * auVar36,8)) * lVar3,
                auVar37._8_8_ = 0, auVar37._0_8_ = uVar50, uVar51 <= SUB164(auVar21 * auVar37,8)));
        puVar44 = (undefined8 *)*puVar44;
        if (puVar44 == (undefined8 *)0x0) goto LAB_001044dc;
      }
LAB_001044d0:
    }
LAB_001044dc:
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  goto LAB_00104501;
}



/* CowData<lsp::DocumentSymbol>::_ref(CowData<lsp::DocumentSymbol> const&) [clone .part.0] */

void __thiscall
CowData<lsp::DocumentSymbol>::_ref(CowData<lsp::DocumentSymbol> *this,CowData *param_1)

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



/* GDScriptWorkspace::can_rename(lsp::TextDocumentPositionParams const&, lsp::DocumentSymbol&,
   lsp::Range&) */

undefined4
GDScriptWorkspace::can_rename
          (TextDocumentPositionParams *param_1,DocumentSymbol *param_2,Range *param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  DocumentSymbol *pDVar8;
  Range *pRVar9;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC20;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  pDVar8 = (DocumentSymbol *)
           resolve_symbol(param_1,(String *)param_2,SUB81((StrRange *)&local_60,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar7 = is_valid_rename_target(pDVar8);
  if ((char)uVar7 != '\0') {
    get_file_path((String *)&local_60);
    pRVar9 = (Range *)get_parse_result((GDScriptWorkspace *)param_1,(String *)&local_60);
    if (pRVar9 == (Range *)0x0) {
      uVar7 = 0;
    }
    else {
      ExtendGDScriptParser::get_identifier_under_position((CowData<char32_t> *)&local_58,pRVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (*(long *)param_3 != *(long *)pDVar8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)pDVar8);
      }
      if (*(long *)(param_3 + 8) != *(long *)(pDVar8 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)(pDVar8 + 8));
      }
      if (*(long *)(param_3 + 0x10) != *(long *)(pDVar8 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 0x10),(CowData *)(pDVar8 + 0x10));
      }
      if (*(long *)(param_3 + 0x18) != *(long *)(pDVar8 + 0x18)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 0x18),(CowData *)(pDVar8 + 0x18));
      }
      uVar3 = *(undefined8 *)(pDVar8 + 0x28);
      uVar4 = *(undefined8 *)(pDVar8 + 0x30);
      uVar5 = *(undefined8 *)(pDVar8 + 0x38);
      uVar6 = *(undefined8 *)(pDVar8 + 0x40);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(pDVar8 + 0x20);
      uVar1 = *(undefined2 *)(pDVar8 + 0x24);
      *(undefined8 *)(param_3 + 0x28) = uVar3;
      *(undefined8 *)(param_3 + 0x30) = uVar4;
      *(undefined2 *)(param_3 + 0x24) = uVar1;
      lVar2 = *(long *)(pDVar8 + 0x48);
      *(undefined8 *)(param_3 + 0x38) = uVar5;
      *(undefined8 *)(param_3 + 0x40) = uVar6;
      if (*(long *)(param_3 + 0x48) != lVar2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 0x48),(CowData *)(pDVar8 + 0x48));
      }
      if (*(long *)(param_3 + 0x50) != *(long *)(pDVar8 + 0x50)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 0x50),(CowData *)(pDVar8 + 0x50));
      }
      if (*(long *)(param_3 + 0x60) != *(long *)(pDVar8 + 0x60)) {
        CowData<lsp::DocumentSymbol>::_ref
                  ((CowData<lsp::DocumentSymbol> *)(param_3 + 0x60),(CowData *)(pDVar8 + 0x60));
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<lsp::DocumentSymbol>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<lsp::DocumentSymbol>::_copy_on_write(CowData<lsp::DocumentSymbol> *this)

{
  DocumentSymbol *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  DocumentSymbol *pDVar5;
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
  if (lVar1 * 0x68 != 0) {
    uVar6 = lVar1 * 0x68 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      do {
        this_00 = (DocumentSymbol *)((long)(puVar3 + 2) + lVar4);
        lVar7 = lVar7 + 1;
        pDVar5 = (DocumentSymbol *)(*(long *)this + lVar4);
        lVar4 = lVar4 + 0x68;
        lsp::DocumentSymbol::DocumentSymbol(this_00,pDVar5);
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDScriptWorkspace::~GDScriptWorkspace() */

void __thiscall GDScriptWorkspace::~GDScriptWorkspace(GDScriptWorkspace *this)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  String *pSVar11;
  String *pSVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  String local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  plVar6 = *(long **)(this + 0x208);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_48 = 2;
  local_58 = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_0011b210;
  if (plVar6 == (long *)0x0) {
    puVar7 = *(undefined8 **)(this + 0x1d8);
    if (puVar7 != (undefined8 *)0x0) goto LAB_00104d78;
  }
  else {
    do {
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_78);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    for (puVar7 = *(undefined8 **)(this + 0x1d8); puVar7 != (undefined8 *)0x0;
        puVar7 = (undefined8 *)*puVar7) {
LAB_00104d78:
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_78);
    }
    local_48._4_4_ = (uint)(local_48 >> 0x20);
    uVar1 = local_48._4_4_;
    uVar13 = (ulong)local_48._4_4_;
    uVar3 = local_68._0_8_;
    if (local_48._4_4_ == 0) {
      pvVar10 = (void *)local_58._8_8_;
      if ((String *)local_68._0_8_ != (String *)0x0) goto LAB_00104e11;
    }
    else {
      pSVar11 = (String *)local_68._0_8_;
      for (iVar5 = 1; remove_cache_parser(this,pSVar11), iVar5 < (int)uVar1; iVar5 = iVar5 + 1) {
        pSVar11 = pSVar11 + 8;
      }
      if ((String *)uVar3 != (String *)0x0) {
        pvVar10 = (void *)local_58._8_8_;
        if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
          memset((void *)local_58._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) * 4);
        }
        pSVar11 = (String *)uVar3;
        do {
          pSVar12 = (String *)((CowData<char32_t> *)pSVar11 + 8);
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar11);
          pSVar11 = pSVar12;
        } while (pSVar12 != (String *)(uVar3 + uVar13 * 8));
LAB_00104e11:
        Memory::free_static((void *)uVar3,false);
        Memory::free_static((void *)local_58._0_8_,false);
        Memory::free_static((void *)local_68._8_8_,false);
        Memory::free_static(pvVar10,false);
      }
    }
  }
  pvVar10 = *(void **)(this + 0x228);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x24c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x248) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x24c) = 0;
        *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
      }
      else {
        lVar14 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x230) + lVar14) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar14 * 2);
            *(int *)(*(long *)(this + 0x230) + lVar14) = 0;
            pvVar9 = *(void **)((long)pvVar10 + 0x20);
            if (pvVar9 != (void *)0x0) {
              if (*(int *)((long)pvVar10 + 0x44) != 0) {
                uVar2 = *(uint *)(hash_table_size_primes +
                                 (ulong)*(uint *)((long)pvVar10 + 0x40) * 4);
                if (uVar2 == 0) {
                  *(undefined4 *)((long)pvVar10 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar10 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar8 = 0;
                  do {
                    piVar4 = (int *)(*(long *)((long)pvVar10 + 0x28) + lVar8);
                    if (*piVar4 != 0) {
                      pvVar9 = *(void **)((long)pvVar9 + lVar8 * 2);
                      *piVar4 = 0;
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar9 + 0x10));
                      Memory::free_static(pvVar9,false);
                      pvVar9 = *(void **)((long)pvVar10 + 0x20);
                      *(undefined8 *)((long)pvVar9 + lVar8 * 2) = 0;
                    }
                    lVar8 = lVar8 + 4;
                  } while ((ulong)uVar2 << 2 != lVar8);
                  *(undefined4 *)((long)pvVar10 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar10 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar9 == (void *)0x0) goto LAB_00104f4b;
                }
              }
              Memory::free_static(pvVar9,false);
              Memory::free_static(*(void **)((long)pvVar10 + 0x28),false);
            }
LAB_00104f4b:
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x228);
            *(undefined8 *)((long)pvVar10 + lVar14 * 2) = 0;
          }
          lVar14 = lVar14 + 4;
        } while ((ulong)uVar1 * 4 != lVar14);
        *(undefined4 *)(this + 0x24c) = 0;
        *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00104fae;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x230),false);
  }
LAB_00104fae:
  pvVar10 = *(void **)(this + 0x1f8);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
      }
      else {
        lVar14 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar14) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar14 * 2);
            *(int *)(*(long *)(this + 0x200) + lVar14) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x1f8);
            *(undefined8 *)((long)pvVar10 + lVar14 * 2) = 0;
          }
          lVar14 = lVar14 + 4;
        } while (lVar14 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105055;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
LAB_00105055:
  pvVar10 = *(void **)(this + 0x1c8);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x1ec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ec) = 0;
        *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
      }
      else {
        lVar14 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1d0) + lVar14) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar14 * 2);
            *(int *)(*(long *)(this + 0x1d0) + lVar14) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x1c8);
            *(undefined8 *)((long)pvVar10 + lVar14 * 2) = 0;
          }
          lVar14 = lVar14 + 4;
        } while (lVar14 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ec) = 0;
        *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_001050fb;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
  }
LAB_001050fb:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1b8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1b0));
  pvVar10 = *(void **)(this + 0x188);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar14 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar14) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar14 * 2);
            *(int *)(*(long *)(this + 400) + lVar14) = 0;
            CowData<lsp::DocumentSymbol>::_unref
                      ((CowData<lsp::DocumentSymbol> *)((long)pvVar10 + 0x78));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x68));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x60));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x30));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar10 + lVar14 * 2) = 0;
          }
          lVar14 = lVar14 + 4;
        } while (lVar14 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00105212;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00105212:
  *(undefined ***)this = &PTR__initialize_classv_0011b0b0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::~Object((Object *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::~GDScriptWorkspace() */

void __thiscall GDScriptWorkspace::~GDScriptWorkspace(GDScriptWorkspace *this)

{
  ~GDScriptWorkspace(this);
  operator_delete(this,0x250);
  return;
}



/* CowData<lsp::Location>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<lsp::Location>::_copy_on_write(CowData<lsp::Location> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  CowData<char32_t> *this_00;
  ulong uVar5;
  CowData *pCVar6;
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
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar1 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar4));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        uVar3 = *(undefined8 *)(pCVar6 + 0x10);
        lVar7 = lVar7 + 1;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar6 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar3;
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<lsp::ParameterInformation>::_ref(CowData<lsp::ParameterInformation> const&) [clone
   .part.0] */

void __thiscall
CowData<lsp::ParameterInformation>::_ref(CowData<lsp::ParameterInformation> *this,CowData *param_1)

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



/* CowData<lsp::ParameterInformation>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<lsp::ParameterInformation>::_copy_on_write(CowData<lsp::ParameterInformation> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_01;
  CowData *pCVar4;
  ulong uVar5;
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
    this_01 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(this_01 + *(long *)this + (-0x10 - (long)puVar3));
        lVar6 = lVar6 + 1;
        *(undefined8 *)this_01 = 0;
        CowData<char32_t>::_ref(this_01,pCVar4);
        *(undefined8 *)(this_01 + 8) = 0;
        CowData<char32_t>::_ref(this_01 + 8,pCVar4 + 8);
        this_00 = this_01 + 0x10;
        *(undefined8 *)(this_01 + 0x10) = 0;
        this_01 = this_01 + 0x18;
        CowData<char32_t>::_ref(this_00,pCVar4 + 0x10);
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<lsp::TextEdit>::push_back(lsp::TextEdit) [clone .isra.0] */

void __thiscall Vector<lsp::TextEdit>::push_back(Vector<lsp::TextEdit> *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(this + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar3 = CowData<lsp::TextEdit>::resize<false>((CowData<lsp::TextEdit> *)(this + 8),lVar4);
  if (iVar3 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar5 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar4 + -1;
      if (-1 < lVar5) {
        CowData<lsp::TextEdit>::_copy_on_write((CowData<lsp::TextEdit> *)(this + 8));
        uVar2 = param_2[1];
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar5 * 0x18);
        lVar4 = param_2[2];
        *puVar1 = *param_2;
        puVar1[1] = uVar2;
        if (puVar1[2] == lVar4) {
          return;
        }
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)(param_2 + 2));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* GDScriptWorkspace::apply_new_signal(Object*, String, Vector<String>) */

void __thiscall
GDScriptWorkspace::apply_new_signal
          (undefined8 param_1_00,long *param_1,undefined8 param_3,long param_4)

{
  int *piVar1;
  void *pvVar2;
  String *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  long in_FS_OFFSET;
  String *local_120;
  undefined4 local_100;
  CowData<char32_t> local_f8 [8];
  String local_f0 [8];
  String local_e8 [8];
  String local_e0 [8];
  Dictionary local_d8 [8];
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x98))((String *)local_58);
  pOVar9 = (Object *)Variant::get_validated_object();
  if (((pOVar9 != (Object *)0x0) &&
      (pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Script::typeinfo,0),
      pOVar9 != (Object *)0x0)) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    pOVar9 = (Object *)0x0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  plVar10 = (long *)(**(code **)(*(long *)pOVar9 + 0x288))(pOVar9);
  (**(code **)(*plVar10 + 0x150))((String *)&local_88,plVar10);
  cVar6 = String::operator!=((String *)&local_88,"GDScript");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar6 == '\0') {
    operator+((char *)local_f8,(String *)"func ");
    (**(code **)(*(long *)pOVar9 + 0x218))(local_f0,pOVar9);
    iVar8 = String::find(local_f0,(int)local_f8);
    if (iVar8 == -1) {
      iVar8 = String::find((char *)local_f0,0x10e870);
      if (iVar8 == -1) {
        String::split((char *)&local_88,SUB81(local_f0,0),0x10e80b);
        if (local_80._0_8_ == 0) {
          local_100 = 0;
        }
        else {
          local_100 = *(undefined4 *)(local_80._0_8_ + -8);
        }
        CowData<String>::_unref((CowData<String> *)local_80);
      }
      else {
        String::substr((int)(CowData<char32_t> *)&local_a8,(int)local_f0);
        String::split((char *)&local_88,SUB81((CowData<char32_t> *)&local_a8,0),0x10e80b);
        if (local_80._0_8_ == 0) {
          local_100 = 0;
        }
        else {
          local_100 = *(undefined4 *)(local_80._0_8_ + -8);
        }
        CowData<String>::_unref((CowData<String> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      local_120 = (String *)&local_a8;
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"(");
      operator+((char *)local_120,(String *)&_LC103);
      String::operator+(local_e8,local_120);
      lVar14 = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      lVar11 = *(long *)(param_4 + 8);
      if ((lVar11 != 0) && (0 < *(long *)(lVar11 + -8))) {
        do {
          String::operator+=(local_e8,(String *)(lVar11 + lVar14 * 8));
          lVar11 = *(long *)(param_4 + 8);
          if (lVar11 == 0) break;
          if (lVar14 < *(long *)(lVar11 + -8) + -1) {
            String::operator+=(local_e8,", ");
            lVar11 = *(long *)(param_4 + 8);
            if (lVar11 == 0) break;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(long *)(lVar11 + -8));
      }
      String::operator+=(local_e8,")");
      EditorSettings::get_singleton();
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"text_editor/completion/add_type_hints");
      EditorSettings::get_setting((String *)local_58);
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (bVar7) {
        String::operator+=(local_e8," -> void");
      }
      String::operator+=(local_e8,":\n\tpass # Replace with function body.\n");
      uStack_c4 = 0;
      uStack_bc = 0;
      local_b8[0] = 0;
      if (iVar8 != -1) {
        String::operator+=(local_e8,"\n\n");
      }
      local_c8 = local_100;
      uStack_c0 = local_100;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)local_e8);
      Resource::get_path();
      get_file_uri(local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_a8 = CONCAT44(uStack_c4,local_c8);
      uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      local_60 = 2;
      local_d0 = 0;
      local_98[0] = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)local_b8);
      Vector<lsp::TextEdit>::push_back((Vector<lsp::TextEdit> *)local_d8,local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      lVar11 = HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
               ::operator[]((HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
                             *)&local_88,local_e0);
      if (*(long *)(lVar11 + 8) != local_d0) {
        CowData<lsp::TextEdit>::_ref((CowData<lsp::TextEdit> *)(lVar11 + 8),(CowData *)&local_d0);
      }
      CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)&local_d0);
      pSVar3 = GDScriptLanguageProtocol::singleton;
      lsp::ApplyWorkspaceEditParams::to_json();
      Variant::Variant((Variant *)local_58,local_d8);
      local_a8 = 0;
      String::parse_latin1(local_120,"workspace/applyEdit");
      GDScriptLanguageProtocol::request_client(pSVar3,(Variant *)local_120,(int)(String *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary(local_d8);
      uVar4 = local_80._0_8_;
      if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
        uVar5 = local_80._8_8_;
        if ((local_60._4_4_ != 0) &&
           (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
          piVar1 = (int *)(local_80._8_8_ +
                          (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4
                          );
          puVar12 = (undefined8 *)local_80._0_8_;
          piVar13 = (int *)local_80._8_8_;
          do {
            if (*piVar13 != 0) {
              pvVar2 = (void *)*puVar12;
              *piVar13 = 0;
              CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)((long)pvVar2 + 0x20));
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
              Memory::free_static(pvVar2,false);
              *puVar12 = 0;
            }
            piVar13 = piVar13 + 1;
            puVar12 = puVar12 + 1;
          } while (piVar1 != piVar13);
        }
        Memory::free_static((void *)uVar4,false);
        Memory::free_static((void *)uVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref(local_f8);
      cVar6 = RefCounted::unreference();
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref(local_f8);
      cVar6 = RefCounted::unreference();
    }
  }
  else {
    cVar6 = RefCounted::unreference();
  }
  if ((cVar6 == '\0') || (cVar6 = predelete_handler(pOVar9), cVar6 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar9,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<lsp::DocumentSymbol>::push_back(lsp::DocumentSymbol) [clone .isra.0] */

void __thiscall
Vector<lsp::DocumentSymbol>::push_back(Vector<lsp::DocumentSymbol> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(this + 8) == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar6 = CowData<lsp::DocumentSymbol>::resize<false>
                    ((CowData<lsp::DocumentSymbol> *)(this + 8),lVar7);
  if (iVar6 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar8 = -1;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 8) + -8);
    lVar8 = lVar7 + -1;
    if (-1 < lVar8) {
      CowData<lsp::DocumentSymbol>::_copy_on_write((CowData<lsp::DocumentSymbol> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar8 * 0x68);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      if (*(long *)(this_00 + 0x18) != *(long *)(param_2 + 0x18)) {
        CowData<char32_t>::_ref(this_00 + 0x18,param_2 + 0x18);
      }
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      uVar1 = *(undefined2 *)(param_2 + 0x24);
      *(undefined8 *)(this_00 + 0x28) = uVar2;
      *(undefined8 *)(this_00 + 0x30) = uVar3;
      *(undefined2 *)(this_00 + 0x24) = uVar1;
      lVar7 = *(long *)(param_2 + 0x48);
      *(undefined8 *)(this_00 + 0x38) = uVar4;
      *(undefined8 *)(this_00 + 0x40) = uVar5;
      if (*(long *)(this_00 + 0x48) != lVar7) {
        CowData<char32_t>::_ref(this_00 + 0x48,param_2 + 0x48);
      }
      if (*(long *)(this_00 + 0x50) != *(long *)(param_2 + 0x50)) {
        CowData<char32_t>::_ref(this_00 + 0x50,param_2 + 0x50);
      }
      if (*(long *)(this_00 + 0x60) == *(long *)(param_2 + 0x60)) {
        return;
      }
      CowData<lsp::DocumentSymbol>::_ref
                ((CowData<lsp::DocumentSymbol> *)(this_00 + 0x60),param_2 + 0x60);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar7,"p_index","size()","",false,false);
  return;
}



/* GDScriptWorkspace::initialize() */

undefined8 __thiscall GDScriptWorkspace::initialize(GDScriptWorkspace *this)

{
  long *plVar1;
  CowData *pCVar2;
  int *piVar3;
  CowData<char32_t> *pCVar4;
  CowData<char32_t> *pCVar5;
  undefined8 *puVar6;
  void *pvVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
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
  undefined1 auVar24 [8];
  char cVar25;
  int iVar26;
  long lVar27;
  CallableCustom *this_00;
  CowData *pCVar28;
  char *pcVar29;
  long lVar30;
  int *piVar31;
  long lVar32;
  undefined1 auVar33 [8];
  long in_FS_OFFSET;
  long local_348;
  CowData<char32_t> *local_340;
  CowData<lsp::DocumentSymbol> *local_338;
  CowData<lsp::DocumentSymbol> *local_330;
  CowData<lsp::DocumentSymbol> *local_320;
  CowData<char32_t> *local_310;
  CowData<char32_t> *local_308;
  CowData<lsp::DocumentSymbol> *local_300;
  CowData<lsp::DocumentSymbol> *local_2f8;
  long *local_2e0;
  long local_2d8;
  long local_2a8;
  int local_29c;
  String *local_278;
  long local_260;
  long local_258;
  long local_250;
  CowData<char32_t> local_248 [8];
  undefined8 local_240;
  String local_238 [8];
  String local_230 [8];
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  long local_210;
  undefined8 local_208;
  long local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  Vector<lsp::DocumentSymbol> local_1a0 [8];
  undefined8 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  Vector<lsp::DocumentSymbol> local_130 [8];
  long local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  long local_b8 [2];
  char *local_a8;
  undefined1 local_a0 [8];
  long lStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x17c] == (GDScriptWorkspace)0x0) {
    lVar27 = EditorHelp::get_doc_data();
    local_2e0 = *(long **)(lVar27 + 0x20);
    if (local_2e0 != (long *)0x0) {
      do {
        local_1e8 = (undefined1  [16])0x0;
        local_1b0 = (undefined1  [16])0x0;
        local_1d8 = 1;
        local_1d4 = 0;
        local_198 = 0;
        local_260 = 0;
        local_1f8 = (undefined1  [16])0x0;
        local_1d0 = (undefined1  [16])0x0;
        local_1c0 = (undefined1  [16])0x0;
        if (local_2e0[2] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_260,(CowData *)(local_2e0 + 2));
          if (local_1f8._0_8_ == local_260) {
          }
          else {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)&local_260);
          }
          if (local_260 != local_1e8._8_8_) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(local_1e8 + 8),(CowData *)&local_260);
          }
        }
        local_1d8 = 5;
        local_a8 = "<Native> class ";
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_118._8_8_;
        local_118 = auVar11 << 0x40;
        local_a0 = (undefined1  [8])0xf;
        String::parse_latin1((StrRange *)local_118);
        String::operator+((String *)&local_a8,(String *)local_118);
        if ((char *)local_1f8._8_8_ != local_a8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_1f8 + 8));
          pcVar29 = local_a8;
          local_a8 = (char *)0x0;
          local_1f8._8_8_ = pcVar29;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
        if ((local_2e0[4] != 0) && (1 < *(uint *)(local_2e0[4] + -8))) {
          operator+((char *)&local_a8,(String *)" extends ");
          String::operator+=((String *)(local_1f8 + 8),(String *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_188._8_8_;
        local_188 = auVar12 << 0x40;
        local_a8 = "\n";
        local_a0 = (undefined1  [8])0x1;
        String::parse_latin1((StrRange *)local_188);
        String::operator+((String *)local_118,(String *)(local_2e0 + 5));
        String::operator+((String *)&local_a8,(String *)local_118);
        if ((char *)local_1e8._0_8_ != local_a8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_1e8);
          pcVar29 = local_a8;
          local_a8 = (undefined *)0x0;
          local_1e8._0_8_ = pcVar29;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
        lVar27 = local_2e0[0x13];
        for (lVar30 = 0; (lVar27 != 0 && (lVar30 < *(long *)(lVar27 + -8))); lVar30 = lVar30 + 1) {
          local_118 = (undefined1  [16])0x0;
          pCVar28 = (CowData *)(lVar27 + lVar30 * 0x60);
          local_108 = (undefined1  [16])0x0;
          local_d0 = (undefined1  [16])0x0;
          local_f8 = 1;
          local_f4 = 0;
          local_b8[0] = 0;
          local_f0 = (undefined1  [16])0x0;
          local_e0 = (undefined1  [16])0x0;
          lVar27 = *(long *)pCVar28;
          if (*(long *)pCVar28 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_118,pCVar28);
            lVar27 = local_108._8_8_;
          }
          pCVar4 = (CowData<char32_t> *)(local_108 + 8);
          if (local_260 != lVar27) {
            CowData<char32_t>::_ref(pCVar4,(CowData *)&local_260);
          }
          local_a8 = ".";
          local_f8 = 0xe;
          local_208 = 0;
          local_a0 = (undefined1  [8])0x1;
          String::parse_latin1((StrRange *)&local_208);
          operator+((char *)&local_210,(String *)"const ");
          String::operator+((String *)local_188,(String *)&local_210);
          String::operator+((String *)&local_a8,(String *)local_188);
          pCVar5 = (CowData<char32_t> *)(local_118 + 8);
          if ((char *)local_118._8_8_ != local_a8) {
            CowData<char32_t>::_unref(pCVar5);
            pcVar29 = local_a8;
            local_a8 = (undefined *)0x0;
            local_118._8_8_ = pcVar29;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
          if ((*(long *)(pCVar28 + 0x20) != 0) && (1 < *(uint *)(*(long *)(pCVar28 + 0x20) + -8))) {
            operator+((char *)&local_a8,(String *)&_LC115);
            String::operator+=((String *)pCVar5,(String *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          operator+((char *)&local_a8,(String *)&_LC116);
          String::operator+=((String *)pCVar5,(String *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (local_108._0_8_ != *(long *)(pCVar28 + 0x30)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_108,pCVar28 + 0x30);
          }
          local_a8 = (undefined *)0x0;
          if (local_118._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_118);
          }
          auVar13._8_8_ = 0;
          auVar13._0_8_ = lStack_98;
          _local_a0 = auVar13 << 0x40;
          auVar24 = (undefined1  [8])0;
          if (local_118._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)pCVar5);
            auVar24 = local_a0;
          }
          local_a0 = auVar24;
          lStack_98 = 0;
          if (local_108._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 8),(CowData *)local_108);
          }
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_90._8_8_;
          local_90 = auVar14 << 0x40;
          if (local_108._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)pCVar4);
          }
          auVar11 = local_90;
          local_60 = 0;
          local_90._8_4_ = local_f8;
          local_80 = local_f0._0_8_;
          uStack_78 = local_f0._8_8_;
          local_90._14_2_ = auVar11._14_2_;
          local_90._12_2_ = local_f4;
          local_70 = local_e0._0_8_;
          uStack_68 = local_e0._8_8_;
          if (local_d0._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_d0);
          }
          local_58[0] = 0;
          if (local_d0._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)(local_d0 + 8));
          }
          local_308 = (CowData<char32_t> *)local_58;
          local_340 = (CowData<char32_t> *)(local_d0 + 8);
          local_48 = 0;
          if (local_b8[0] != 0) {
            CowData<lsp::DocumentSymbol>::_ref
                      ((CowData<lsp::DocumentSymbol> *)&local_48,(CowData *)local_b8);
          }
          local_300 = (CowData<lsp::DocumentSymbol> *)&local_48;
          local_338 = (CowData<lsp::DocumentSymbol> *)local_b8;
          Vector<lsp::DocumentSymbol>::push_back(local_1a0,(String *)&local_a8);
          CowData<lsp::DocumentSymbol>::_unref(local_300);
          CowData<char32_t>::_unref(local_308);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_a0 + 8));
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<lsp::DocumentSymbol>::_unref(local_338);
          CowData<char32_t>::_unref(local_340);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
          CowData<char32_t>::_unref(pCVar4);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref(pCVar5);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
          lVar27 = local_2e0[0x13];
        }
        lVar27 = local_2e0[0x1b];
        if (lVar27 != 0) {
          lVar30 = 0;
          local_340 = (CowData<char32_t> *)0x0;
          do {
            if (*(long *)(lVar27 + -8) <= lVar30) break;
            local_118 = (undefined1  [16])0x0;
            pCVar28 = (CowData *)(lVar27 + (long)local_340);
            local_108 = (undefined1  [16])0x0;
            local_d0 = (undefined1  [16])0x0;
            local_f8 = 1;
            local_f4 = 0;
            local_b8[0] = 0;
            local_f0 = (undefined1  [16])0x0;
            local_e0 = (undefined1  [16])0x0;
            lVar27 = *(long *)pCVar28;
            if (*(long *)pCVar28 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_118,pCVar28);
              lVar27 = local_108._8_8_;
            }
            pCVar4 = (CowData<char32_t> *)(local_108 + 8);
            if (local_260 != lVar27) {
              CowData<char32_t>::_ref(pCVar4,(CowData *)&local_260);
            }
            local_a8 = ".";
            local_f8 = 7;
            local_208 = 0;
            local_a0 = (undefined1  [8])0x1;
            String::parse_latin1((StrRange *)&local_208);
            operator+((char *)&local_210,(String *)&_LC117);
            String::operator+((String *)local_188,(String *)&local_210);
            String::operator+((String *)&local_a8,(String *)local_188);
            pCVar5 = (CowData<char32_t> *)(local_118 + 8);
            if ((char *)local_118._8_8_ != local_a8) {
              CowData<char32_t>::_unref(pCVar5);
              pcVar29 = local_a8;
              local_a8 = (undefined *)0x0;
              local_118._8_8_ = pcVar29;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
            operator+((char *)&local_a8,(String *)&_LC115);
            String::operator+=((String *)pCVar5,(String *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            if (local_108._0_8_ != *(long *)(pCVar28 + 0x20)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_108,pCVar28 + 0x20);
            }
            local_a8 = (undefined *)0x0;
            if (local_118._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_118);
            }
            auVar15._8_8_ = 0;
            auVar15._0_8_ = lStack_98;
            _local_a0 = auVar15 << 0x40;
            auVar24 = (undefined1  [8])0;
            if (local_118._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)pCVar5);
              auVar24 = local_a0;
            }
            local_a0 = auVar24;
            lStack_98 = 0;
            if (local_108._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 8),(CowData *)local_108);
            }
            auVar16._8_8_ = 0;
            auVar16._0_8_ = local_90._8_8_;
            local_90 = auVar16 << 0x40;
            if (local_108._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)pCVar4);
            }
            auVar11 = local_90;
            local_60 = 0;
            local_90._8_4_ = local_f8;
            local_80 = local_f0._0_8_;
            uStack_78 = local_f0._8_8_;
            local_90._14_2_ = auVar11._14_2_;
            local_90._12_2_ = local_f4;
            local_70 = local_e0._0_8_;
            uStack_68 = local_e0._8_8_;
            if (local_d0._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_d0);
            }
            local_58[0] = 0;
            if (local_d0._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)(local_d0 + 8));
            }
            local_300 = (CowData<lsp::DocumentSymbol> *)local_58;
            local_338 = (CowData<lsp::DocumentSymbol> *)(local_d0 + 8);
            local_48 = 0;
            if (local_b8[0] != 0) {
              CowData<lsp::DocumentSymbol>::_ref
                        ((CowData<lsp::DocumentSymbol> *)&local_48,(CowData *)local_b8);
            }
            local_2f8 = (CowData<lsp::DocumentSymbol> *)&local_48;
            local_330 = (CowData<lsp::DocumentSymbol> *)local_b8;
            lVar30 = lVar30 + 1;
            Vector<lsp::DocumentSymbol>::push_back(local_1a0,(String *)&local_a8);
            CowData<lsp::DocumentSymbol>::_unref(local_2f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_300);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)(local_a0 + 8));
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<lsp::DocumentSymbol>::_unref(local_330);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_338);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
            CowData<char32_t>::_unref(pCVar4);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref(pCVar5);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
            local_340 = (CowData<char32_t> *)((long)local_340 + 0x78);
            lVar27 = local_2e0[0x1b];
          } while (lVar27 != 0);
        }
        lVar27 = local_2e0[0x1f];
        if (lVar27 != 0) {
          local_348 = 0;
          do {
            if (*(long *)(lVar27 + -8) <= local_348) break;
            local_118 = (undefined1  [16])0x0;
            local_108 = (undefined1  [16])0x0;
            local_d0 = (undefined1  [16])0x0;
            pCVar28 = (CowData *)(lVar27 + local_348 * 0x50);
            local_f8 = 1;
            local_f4 = 0;
            local_b8[0] = 0;
            local_f0 = (undefined1  [16])0x0;
            local_e0 = (undefined1  [16])0x0;
            lVar27 = *(long *)pCVar28;
            if (*(long *)pCVar28 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_118,pCVar28);
              lVar27 = local_108._8_8_;
            }
            pCVar4 = (CowData<char32_t> *)(local_108 + 8);
            if (local_260 != lVar27) {
              CowData<char32_t>::_ref(pCVar4,(CowData *)&local_260);
            }
            local_a8 = ": ";
            local_f8 = 7;
            local_208 = 0;
            local_a0 = (undefined1  [8])0x2;
            String::parse_latin1((StrRange *)&local_208);
            local_a8 = ".";
            local_220 = 0;
            local_a0 = (undefined1  [8])0x1;
            String::parse_latin1((StrRange *)&local_220);
            operator+((char *)&local_228,(String *)"<Theme> var ");
            String::operator+((String *)&local_218,(String *)&local_228);
            String::operator+((String *)&local_210,(String *)&local_218);
            String::operator+((String *)local_188,(String *)&local_210);
            String::operator+((String *)&local_a8,(String *)local_188);
            pCVar5 = (CowData<char32_t> *)(local_118 + 8);
            if ((char *)local_118._8_8_ != local_a8) {
              CowData<char32_t>::_unref(pCVar5);
              pcVar29 = local_a8;
              local_a8 = (undefined *)0x0;
              local_118._8_8_ = pcVar29;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
            lVar27 = *(long *)(pCVar28 + 0x18);
            if (local_108._0_8_ != *(long *)(pCVar28 + 0x18)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_108,pCVar28 + 0x18);
              lVar27 = local_108._0_8_;
            }
            local_a8 = (undefined *)0x0;
            if (local_118._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_118);
            }
            auVar17._8_8_ = 0;
            auVar17._0_8_ = lStack_98;
            _local_a0 = auVar17 << 0x40;
            auVar24 = (undefined1  [8])0;
            if (local_118._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)pCVar5);
              auVar24 = local_a0;
            }
            local_a0 = auVar24;
            lStack_98 = 0;
            if (lVar27 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 8),(CowData *)local_108);
            }
            auVar18._8_8_ = 0;
            auVar18._0_8_ = local_90._8_8_;
            local_90 = auVar18 << 0x40;
            if (local_108._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)pCVar4);
            }
            auVar11 = local_90;
            local_60 = 0;
            local_90._8_4_ = local_f8;
            local_80 = local_f0._0_8_;
            uStack_78 = local_f0._8_8_;
            local_90._14_2_ = auVar11._14_2_;
            local_90._12_2_ = local_f4;
            local_70 = local_e0._0_8_;
            uStack_68 = local_e0._8_8_;
            if (local_d0._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_d0);
            }
            local_58[0] = 0;
            if (local_d0._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)(local_d0 + 8));
            }
            local_48 = 0;
            if (local_b8[0] != 0) {
              CowData<lsp::DocumentSymbol>::_ref
                        ((CowData<lsp::DocumentSymbol> *)&local_48,(CowData *)local_b8);
            }
            local_300 = (CowData<lsp::DocumentSymbol> *)&local_48;
            local_320 = (CowData<lsp::DocumentSymbol> *)local_b8;
            Vector<lsp::DocumentSymbol>::push_back(local_1a0,(String *)&local_a8);
            CowData<lsp::DocumentSymbol>::_unref(local_300);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)(local_a0 + 8));
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<lsp::DocumentSymbol>::_unref(local_320);
            CowData<char32_t>::_unref((CowData<char32_t> *)(local_d0 + 8));
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
            CowData<char32_t>::_unref(pCVar4);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref(pCVar5);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
            local_348 = local_348 + 1;
            lVar27 = local_2e0[0x1f];
          } while (lVar27 != 0);
        }
        local_200 = 0;
        local_a0 = (undefined1  [8])0x0;
        if (local_2e0[0xb] != 0) {
          CowData<DocData::MethodDoc>::_ref
                    ((CowData<DocData::MethodDoc> *)local_a0,(CowData *)(local_2e0 + 0xb));
        }
        Vector<DocData::MethodDoc>::append_array
                  ((Vector<DocData::MethodDoc> *)&local_208,(String *)&local_a8);
        CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)local_a0);
        local_a0 = (undefined1  [8])0x0;
        if (local_2e0[0xd] != 0) {
          CowData<DocData::MethodDoc>::_ref
                    ((CowData<DocData::MethodDoc> *)local_a0,(CowData *)(local_2e0 + 0xd));
        }
        Vector<DocData::MethodDoc>::append_array
                  ((Vector<DocData::MethodDoc> *)&local_208,(String *)&local_a8);
        CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)local_a0);
        local_a0 = (undefined1  [8])0x0;
        if (local_2e0[0xf] != 0) {
          CowData<DocData::MethodDoc>::_ref
                    ((CowData<DocData::MethodDoc> *)local_a0,(CowData *)(local_2e0 + 0xf));
        }
        Vector<DocData::MethodDoc>::append_array
                  ((Vector<DocData::MethodDoc> *)&local_208,(String *)&local_a8);
        CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)local_a0);
        if (local_200 == 0) {
          local_29c = 0;
        }
        else {
          local_29c = *(int *)(local_200 + -8);
        }
        auVar19._8_8_ = 0;
        auVar19._0_8_ = lStack_98;
        _local_a0 = auVar19 << 0x40;
        if (local_2e0[0x11] != 0) {
          CowData<DocData::MethodDoc>::_ref
                    ((CowData<DocData::MethodDoc> *)local_a0,(CowData *)(local_2e0 + 0x11));
        }
        Vector<DocData::MethodDoc>::append_array((Vector<DocData::MethodDoc> *)&local_208);
        CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)local_a0);
        if (local_200 != 0) {
          local_2a8 = 0;
          local_2d8 = 0;
          do {
            if (*(long *)(local_200 + -8) <= local_2d8) break;
            local_188 = (undefined1  [16])0x0;
            pCVar28 = (CowData *)(local_200 + local_2a8);
            local_178 = (undefined1  [16])0x0;
            local_140 = (undefined1  [16])0x0;
            local_168 = 1;
            local_164 = 0;
            local_128[0] = 0;
            local_160 = (undefined1  [16])0x0;
            local_150 = (undefined1  [16])0x0;
            lVar27 = *(long *)pCVar28;
            if (*(long *)pCVar28 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_188,pCVar28);
              lVar27 = local_178._8_8_;
            }
            pCVar4 = (CowData<char32_t> *)(local_178 + 8);
            if (local_260 != lVar27) {
              CowData<char32_t>::_ref(pCVar4,(CowData *)&local_260);
            }
            local_258 = 0;
            local_a0 = (undefined1  [8])0x0;
            local_168 = 6;
            if (local_29c <= (int)local_2d8) {
              local_168 = 0x18;
            }
            local_a8 = "";
            String::parse_latin1((StrRange *)&local_258);
            lVar27 = *(long *)(pCVar28 + 0x58);
            if (lVar27 != 0) {
              bVar10 = false;
              lVar30 = 0;
              do {
                if (*(long *)(lVar27 + -8) <= lVar30) break;
                pCVar2 = (CowData *)(lVar27 + lVar30 * 0x28);
                local_118 = (undefined1  [16])0x0;
                local_108 = (undefined1  [16])0x0;
                local_d0 = (undefined1  [16])0x0;
                local_f8 = 1;
                local_f4 = 0;
                local_b8[0] = 0;
                local_f0 = (undefined1  [16])0x0;
                local_e0 = (undefined1  [16])0x0;
                lVar27 = *(long *)pCVar2;
                if (*(long *)pCVar2 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_118,pCVar2);
                  lVar27 = local_118._8_8_;
                }
                local_f8 = 0xd;
                if (*(long *)(pCVar2 + 8) != lVar27) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(local_118 + 8),pCVar2 + 8);
                }
                if ((!bVar10) && (*(long *)(pCVar2 + 0x20) != 0)) {
                  bVar10 = 1 < *(uint *)(*(long *)(pCVar2 + 0x20) + -8);
                }
                local_210 = 0;
                local_a8 = ": ";
                local_a0 = (undefined1  [8])0x2;
                String::parse_latin1((StrRange *)&local_210);
                String::operator+((String *)&local_a8,(String *)pCVar2);
                String::operator+((String *)&local_218,(String *)&local_a8);
                pcVar29 = local_a8;
                if (local_a8 != (undefined *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_a8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_a8 = (undefined *)0x0;
                    Memory::free_static(pcVar29 + -0x10,false);
                  }
                }
                lVar27 = local_210;
                if (local_210 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_210 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_210 = 0;
                    Memory::free_static((void *)(lVar27 + -0x10),false);
                  }
                }
                if (bVar10) {
                  operator+((char *)&local_a8,(String *)&_LC116);
                  String::operator+=((String *)&local_218,(String *)&local_a8);
                  pcVar29 = local_a8;
                  if (local_a8 != (undefined *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_a8 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_a8 = (undefined *)0x0;
                      Memory::free_static(pcVar29 + -0x10,false);
                    }
                  }
                }
                if ((*(long *)(pCVar28 + 0x58) != 0) &&
                   (lVar30 < *(long *)(*(long *)(pCVar28 + 0x58) + -8) + -1)) {
                  String::operator+=((String *)&local_218,", ");
                }
                String::operator+=((String *)&local_258,(String *)&local_218);
                local_a8 = (undefined *)0x0;
                if (local_118._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_118);
                }
                auVar20._8_8_ = 0;
                auVar20._0_8_ = lStack_98;
                _local_a0 = auVar20 << 0x40;
                auVar24 = (undefined1  [8])0;
                if (local_118._8_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)(local_118 + 8));
                  auVar24 = local_a0;
                }
                local_a0 = auVar24;
                lStack_98 = 0;
                if (local_108._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 8),(CowData *)local_108);
                }
                auVar21._8_8_ = 0;
                auVar21._0_8_ = local_90._8_8_;
                local_90 = auVar21 << 0x40;
                if (local_108._8_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(local_108 + 8));
                }
                auVar11 = local_90;
                local_60 = 0;
                local_90._8_4_ = local_f8;
                local_80 = local_f0._0_8_;
                uStack_78 = local_f0._8_8_;
                local_90._14_2_ = auVar11._14_2_;
                local_90._12_2_ = local_f4;
                local_70 = local_e0._0_8_;
                uStack_68 = local_e0._8_8_;
                if (local_d0._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_d0);
                }
                local_58[0] = 0;
                if (local_d0._8_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)(local_d0 + 8));
                }
                local_48 = 0;
                if (local_b8[0] != 0) {
                  CowData<lsp::DocumentSymbol>::_ref
                            ((CowData<lsp::DocumentSymbol> *)&local_48,(CowData *)local_b8);
                }
                Vector<lsp::DocumentSymbol>::push_back(local_130);
                CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol> *)&local_48);
                if (local_58[0] != 0) {
                  LOCK();
                  plVar1 = (long *)(local_58[0] + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_58[0] + -0x10),false);
                  }
                }
                if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_60 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_60 + -0x10),false);
                  }
                }
                if (local_90._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_90._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_90._0_8_ + -0x10),false);
                  }
                }
                if (lStack_98 != 0) {
                  LOCK();
                  plVar1 = (long *)(lStack_98 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(lStack_98 + -0x10),false);
                  }
                }
                if (local_a0 != (undefined1  [8])0x0) {
                  LOCK();
                  plVar1 = (long *)((long)local_a0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)((long)local_a0 + -0x10),false);
                  }
                }
                if (local_a8 != (undefined *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_a8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static(local_a8 + -0x10,false);
                  }
                }
                lVar27 = local_218;
                if (local_218 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_218 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_218 = 0;
                    Memory::free_static((void *)(lVar27 + -0x10),false);
                  }
                }
                CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol> *)local_b8);
                if (local_d0._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_d0._8_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_d0._8_8_ + -0x10),false);
                  }
                }
                if (local_d0._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_d0._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_d0._0_8_ + -0x10),false);
                  }
                }
                if (local_108._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_108._8_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_108._8_8_ + -0x10),false);
                  }
                }
                if (local_108._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_108._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_108._0_8_ + -0x10),false);
                  }
                }
                if (local_118._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_118._8_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_118._8_8_ + -0x10),false);
                  }
                }
                if (local_118._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_118._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(local_118._0_8_ + -0x10),false);
                  }
                }
                lVar27 = *(long *)(pCVar28 + 0x58);
                lVar30 = lVar30 + 1;
              } while (lVar27 != 0);
            }
            local_2f8 = (CowData<lsp::DocumentSymbol> *)local_58;
            local_300 = (CowData<lsp::DocumentSymbol> *)&local_60;
            local_308 = (CowData<char32_t> *)local_90;
            local_310 = (CowData<char32_t> *)(local_a0 + 8);
            local_338 = (CowData<lsp::DocumentSymbol> *)&local_48;
            local_340 = (CowData<char32_t> *)&local_210;
            iVar26 = String::find((char *)(pCVar28 + 0x20),0x10e8e1);
            if (iVar26 != -1) {
              pcVar29 = "...";
              if ((local_258 != 0) && (1 < *(uint *)(local_258 + -8))) {
                pcVar29 = ", ...";
              }
              String::operator+=((String *)&local_258,pcVar29);
            }
            local_250 = 0;
            if (((*(long *)(pCVar28 + 8) == 0) ||
                (CowData<char32_t>::_ref((CowData<char32_t> *)&local_250,pCVar28 + 8),
                local_250 == 0)) || (*(uint *)(local_250 + -8) < 2)) {
              local_a0 = (undefined1  [8])0x4;
              local_a8 = "void";
              String::parse_latin1((StrRange *)&local_250);
            }
            local_210 = 0;
            local_a8 = ") -> ";
            local_a0 = (undefined1  [8])0x5;
            String::parse_latin1((StrRange *)local_340);
            local_228 = 0;
            local_a8 = "(";
            local_a0 = (undefined1  [8])0x1;
            String::parse_latin1((StrRange *)&local_228);
            local_240 = 0;
            local_a8 = ".";
            local_a0 = (undefined1  [8])0x1;
            String::parse_latin1((StrRange *)&local_240);
            operator+((char *)local_248,(String *)"func ");
            String::operator+(local_238,(String *)local_248);
            String::operator+(local_230,local_238);
            String::operator+((String *)&local_220,local_230);
            String::operator+((String *)&local_218,(String *)&local_220);
            String::operator+((String *)local_118,(String *)&local_218);
            String::operator+((String *)&local_a8,(String *)local_118);
            pCVar5 = (CowData<char32_t> *)(local_188 + 8);
            if ((char *)local_188._8_8_ != local_a8) {
              CowData<char32_t>::_unref(pCVar5);
              pcVar29 = local_a8;
              local_a8 = (undefined *)0x0;
              local_188._8_8_ = pcVar29;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_230);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
            CowData<char32_t>::_unref(local_248);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
            CowData<char32_t>::_unref(local_340);
            lVar27 = *(long *)(pCVar28 + 0x28);
            if (local_178._0_8_ != *(long *)(pCVar28 + 0x28)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_178,pCVar28 + 0x28);
              lVar27 = local_178._0_8_;
            }
            local_a8 = (undefined *)0x0;
            if (local_188._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_188);
            }
            auVar22._8_8_ = 0;
            auVar22._0_8_ = lStack_98;
            _local_a0 = auVar22 << 0x40;
            auVar24 = (undefined1  [8])0;
            if (local_188._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)pCVar5);
              auVar24 = local_a0;
            }
            local_a0 = auVar24;
            lStack_98 = 0;
            if (lVar27 != 0) {
              CowData<char32_t>::_ref(local_310,(CowData *)local_178);
            }
            auVar23._8_8_ = 0;
            auVar23._0_8_ = local_90._8_8_;
            local_90 = auVar23 << 0x40;
            if (local_178._8_8_ != 0) {
              CowData<char32_t>::_ref(local_308,(CowData *)pCVar4);
            }
            auVar11 = local_90;
            local_60 = 0;
            local_90._8_4_ = local_168;
            local_80 = local_160._0_8_;
            uStack_78 = local_160._8_8_;
            local_90._14_2_ = auVar11._14_2_;
            local_90._12_2_ = local_164;
            local_70 = local_150._0_8_;
            uStack_68 = local_150._8_8_;
            if (local_140._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_300,(CowData *)local_140);
            }
            local_58[0] = 0;
            if (local_140._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_2f8,(CowData *)(local_140 + 8));
            }
            local_48 = 0;
            if (local_128[0] != 0) {
              CowData<lsp::DocumentSymbol>::_ref(local_338,(CowData *)local_128);
            }
            Vector<lsp::DocumentSymbol>::push_back(local_1a0);
            CowData<lsp::DocumentSymbol>::_unref(local_338);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_2f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_300);
            CowData<char32_t>::_unref(local_308);
            CowData<char32_t>::_unref(local_310);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
            CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol> *)local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)(local_140 + 8));
            CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
            CowData<char32_t>::_unref(pCVar4);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
            CowData<char32_t>::_unref(pCVar5);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
            local_2d8 = local_2d8 + 1;
            local_2a8 = local_2a8 + 0x78;
          } while (local_200 != 0);
        }
        StringName::StringName((StringName *)local_118,(String *)&local_260,false);
        HashMap<StringName,lsp::DocumentSymbol,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,lsp::DocumentSymbol>>>
        ::insert((StringName *)&local_a8,(DocumentSymbol *)(this + 0x180),
                 SUB81((StrRange *)local_118,0));
        if ((StringName::configured != '\0') && (local_118._0_8_ != 0)) {
          StringName::unref();
        }
        CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)&local_200);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
        lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol *)local_1f8);
        local_2e0 = (long *)*local_2e0;
      } while (local_2e0 != (long *)0x0);
    }
    local_278 = (String *)local_118;
    reload_all_workspace_scripts(this);
    cVar25 = GDScriptLanguageProtocol::is_smart_resolve_enabled();
    if (cVar25 != '\0') {
      for (puVar6 = *(undefined8 **)(this + 0x198); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        lVar32 = 0;
        lVar30 = 0;
        _local_a0 = (undefined1  [16])0x0;
        local_90 = (undefined1  [16])0x0;
        lVar27 = puVar6[0xf];
        local_80 = _LC25;
        if (lVar27 == 0) {
          HashMap<StringName,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>>>>
          ::insert((StringName *)local_278,(HashMap *)(this + 0x220),(bool)((char)puVar6 + '\x10'));
        }
        else {
          do {
            if (*(long *)(lVar27 + -8) <= lVar30) break;
            lVar27 = lVar27 + lVar32;
            local_188._0_8_ = lVar27;
            lVar30 = lVar30 + 1;
            lVar32 = lVar32 + 0x68;
            HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
            ::insert(local_278,(DocumentSymbol **)&local_a8,SUB81(lVar27,0));
            lVar27 = puVar6[0xf];
          } while (lVar27 != 0);
          auVar24 = local_a0;
          HashMap<StringName,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>>>>
          ::insert((StringName *)local_278,(HashMap *)(this + 0x220),(bool)((char)puVar6 + '\x10'));
          if (auVar24 != (undefined1  [8])0x0) {
            lVar27 = lStack_98;
            if ((local_80._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
              piVar3 = (int *)(lStack_98 +
                              (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4)
                              * 4);
              piVar31 = (int *)lStack_98;
              auVar33 = auVar24;
              do {
                if (*piVar31 != 0) {
                  pvVar7 = *(void **)auVar33;
                  *piVar31 = 0;
                  CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x10));
                  Memory::free_static(pvVar7,false);
                  *(undefined8 *)auVar33 = 0;
                }
                piVar31 = piVar31 + 1;
                auVar33 = (undefined1  [8])((long)auVar33 + 8);
              } while (piVar31 != piVar3);
            }
            Memory::free_static((void *)auVar24,false);
            Memory::free_static((void *)lVar27,false);
          }
        }
      }
      for (puVar6 = *(undefined8 **)(this + 0x1d8); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        ExtendGDScriptParser::get_member_completions();
      }
    }
    plVar1 = EditorNode::singleton;
    pcVar8 = *(code **)(*EditorNode::singleton + 0x108);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC20;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0011b370;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar9 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar9;
    *(code **)(this_00 + 0x38) = apply_new_signal;
    *(GDScriptWorkspace **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "GDScriptWorkspace::apply_new_signal";
    Callable::Callable((Callable *)&local_a8,this_00);
    StringName::StringName((StringName *)local_278,"script_add_function_request",false);
    (*pcVar8)(plVar1,local_278,(Callable *)&local_a8,0);
    if ((StringName::configured != '\0') && (local_118._0_8_ != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_a8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* GDScriptWorkspace::find_usages_in_file(lsp::DocumentSymbol const&, String const&) */

DocumentSymbol * GDScriptWorkspace::find_usages_in_file(DocumentSymbol *param_1,String *param_2)

{
  long *plVar1;
  CowData<char32_t> *this;
  int iVar2;
  long lVar3;
  long lVar4;
  CowData *pCVar5;
  String *in_RCX;
  long lVar6;
  CowData *in_RDX;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined1 local_70 [16];
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  local_a0 = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_RDX);
  }
  lVar3 = get_parse_result((GDScriptWorkspace *)param_2,in_RCX);
  if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0xa38), lVar4 != 0)) {
    lVar8 = 0;
    do {
      if (*(long *)(lVar4 + -8) <= lVar8) break;
      local_98 = 0;
      pCVar5 = (CowData *)(lVar4 + lVar8 * 8);
      if (*(long *)pCVar5 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar5);
      }
      iVar9 = (int)(CowData<char32_t> *)&local_a0;
      iVar2 = String::find((String *)&local_98,iVar9);
      while (-1 < iVar2) {
        local_88 = (undefined *)0x0;
        local_80 = 0;
        local_90 = (undefined *)0x0;
        get_file_uri((String *)&local_58);
        puVar7 = local_58;
        if (local_58 != (undefined *)0x0) {
          local_90 = local_58;
        }
        if (local_58 != local_88) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_90);
        }
        local_78 = 0;
        local_80 = CONCAT44(iVar2,(int)lVar8);
        local_58 = &_LC20;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_78);
        pCVar5 = (CowData *)
                 resolve_symbol((TextDocumentPositionParams *)param_2,(String *)&local_88,
                                SUB81((StrRange *)&local_78,0));
        lVar4 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          puVar7 = local_90;
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
            puVar7 = local_90;
          }
        }
        if (in_RDX == pCVar5) {
          local_78 = 0;
          local_70 = (undefined1  [16])0x0;
          if (puVar7 == (undefined *)0x0) {
            local_70._8_4_ = (undefined4)local_80;
            local_70._0_8_ = local_80;
            lVar4 = 0;
            if (local_a0 != 0) goto LAB_00108707;
            local_70._12_4_ = local_80._4_4_;
            local_58 = (undefined *)0x0;
          }
          else {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_90);
            local_70._8_4_ = (undefined4)local_80;
            local_70._0_8_ = local_80;
            local_70._12_4_ = local_80._4_4_;
            if (local_a0 != 0) {
LAB_00108707:
              iVar2 = (int)*(undefined8 *)(local_a0 + -8);
              local_70._12_4_ = local_80._4_4_;
              if (iVar2 != 0) {
                local_70._12_4_ = local_80._4_4_ + -1 + iVar2;
              }
            }
            lVar4 = local_78;
            local_58 = (undefined *)0x0;
            if (local_78 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_78);
            }
          }
          puVar7 = local_58;
          local_50 = local_70._0_8_;
          uStack_48 = local_70._8_8_;
          if (*(long *)(param_1 + 8) == 0) {
            lVar10 = 1;
          }
          else {
            lVar10 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
          }
          iVar2 = CowData<lsp::Location>::resize<false>
                            ((CowData<lsp::Location> *)(param_1 + 8),lVar10);
          if (iVar2 == 0) {
            if (*(long *)(param_1 + 8) == 0) {
              lVar6 = -1;
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(*(long *)(param_1 + 8) + -8);
              lVar6 = lVar10 + -1;
              if (-1 < lVar6) {
                CowData<lsp::Location>::_copy_on_write((CowData<lsp::Location> *)(param_1 + 8));
                this = (CowData<char32_t> *)(*(long *)(param_1 + 8) + lVar6 * 0x18);
                if (*(undefined **)this != puVar7) {
                  CowData<char32_t>::_ref(this,(CowData *)&local_58);
                }
                *(undefined8 *)(this + 8) = local_50;
                *(undefined8 *)(this + 0x10) = uStack_48;
                goto LAB_001087f7;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar10,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_001087f7:
          if (puVar7 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(puVar7 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            lVar4 = local_78;
            if (*plVar1 == 0) {
              Memory::free_static(local_58 + -0x10,false);
              lVar4 = local_78;
            }
          }
          puVar7 = local_90;
          if (lVar4 != 0) {
            LOCK();
            plVar1 = (long *)(lVar4 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_78 + -0x10),false);
              puVar7 = local_90;
            }
          }
        }
        iVar2 = String::find((String *)&local_98,iVar9);
        if (puVar7 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar7 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_90 + -0x10,false);
          }
        }
        puVar7 = local_88;
        if (local_88 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = (undefined *)0x0;
            Memory::free_static(puVar7 + -0x10,false);
          }
        }
      }
      lVar8 = lVar8 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      lVar4 = *(long *)(lVar3 + 0xa38);
    } while (lVar4 != 0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GDScriptWorkspace::find_all_usages(lsp::DocumentSymbol const&) */

DocumentSymbol * GDScriptWorkspace::find_all_usages(DocumentSymbol *param_1)

{
  long in_RDX;
  String *in_RSI;
  long *plVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  undefined *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RDX + 0x25) == '\0') {
    local_70 = (long *)0x0;
    local_68 = 0;
    local_58 = &_LC39;
    local_50[0] = 6;
    String::parse_latin1((StrRange *)&local_68);
    list_script_files((GDScriptWorkspace *)in_RSI,(String *)&local_68,(List *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    local_60 = (long *)0x0;
    plVar2 = local_70;
    if ((local_70 != (long *)0x0) && (plVar2 = (long *)*local_70, plVar2 != (long *)0x0)) {
      plVar1 = plVar2;
      do {
        find_usages_in_file((DocumentSymbol *)&local_58,in_RSI);
        Vector<lsp::Location>::append_array
                  ((Vector<lsp::Location> *)&local_68,(DocumentSymbol *)&local_58);
        CowData<lsp::Location>::_unref((CowData<lsp::Location> *)local_50);
        plVar1 = *(long **)((long)plVar1 + 8);
        plVar2 = local_60;
      } while (plVar1 != (long *)0x0);
    }
    *(long **)(param_1 + 8) = plVar2;
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_70);
  }
  else {
    find_usages_in_file(param_1,in_RSI);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GDScriptWorkspace::rename(lsp::TextDocumentPositionParams const&, String const&) */

TextDocumentPositionParams *
GDScriptWorkspace::rename(TextDocumentPositionParams *param_1,String *param_2)

{
  uint uVar1;
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
  code *pcVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  uint uVar18;
  DocumentSymbol *pDVar19;
  Variant *pVVar20;
  CowData *in_RCX;
  uint uVar21;
  uint uVar22;
  String *in_RDX;
  long lVar23;
  int *piVar24;
  undefined8 *puVar25;
  long lVar26;
  CowData *pCVar27;
  int *piVar28;
  uint uVar29;
  long in_FS_OFFSET;
  long local_190;
  long *local_188;
  Dictionary *local_140;
  Dictionary local_128 [8];
  CowData *local_120;
  Vector<lsp::TextEdit> local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8 [2];
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8 [2];
  Vector local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_c8 = &_LC20;
  local_80 = 2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_e8._0_8_;
  local_e8 = auVar14 << 0x40;
  uStack_c0 = 0;
  String::parse_latin1((StrRange *)local_e8);
  pDVar19 = (DocumentSymbol *)
            resolve_symbol((TextDocumentPositionParams *)param_2,in_RDX,
                           SUB81((StrRange *)local_e8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  cVar17 = is_valid_rename_target(pDVar19);
  if (cVar17 == '\0') {
    Dictionary::Dictionary((Dictionary *)param_1);
  }
  else {
    find_all_usages((DocumentSymbol *)local_128);
    if (local_120 != (CowData *)0x0) {
      if (0 < *(long *)(local_120 + -8)) {
        local_190 = 0;
        pCVar27 = local_120;
        do {
          local_108 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,pCVar27);
          local_100 = *(undefined8 *)(pCVar27 + 8);
          uStack_f8 = *(undefined8 *)(pCVar27 + 0x10);
          local_d8[0] = 0;
          local_e8 = (undefined1  [16])0x0;
          if (*(long *)in_RCX != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,in_RCX);
          }
          uVar15 = local_a0._0_8_;
          local_e8._8_4_ = (undefined4)local_100;
          local_e8._0_8_ = local_100;
          local_e8._12_4_ = uStack_f8._4_4_;
          if ((local_a0._0_8_ != 0) && (local_80._4_4_ != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
            lVar3 = *(long *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
            uVar18 = String::hash();
            uVar13 = CONCAT44(0,uVar1);
            uVar16 = local_a0._8_8_;
            uVar21 = 1;
            if (uVar18 != 0) {
              uVar21 = uVar18;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar21 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar13;
            lVar23 = SUB168(auVar4 * auVar8,8);
            uVar18 = *(uint *)(local_a0._8_8_ + lVar23 * 4);
            uVar22 = SUB164(auVar4 * auVar8,8);
            if (uVar18 != 0) {
              uVar29 = 0;
              while ((uVar21 != uVar18 ||
                     (cVar17 = String::operator==((String *)(*(long *)(uVar15 + lVar23 * 8) + 0x10),
                                                  (String *)&local_108), cVar17 == '\0'))) {
                uVar29 = uVar29 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(uVar22 + 1) * lVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar13;
                lVar23 = SUB168(auVar5 * auVar9,8);
                uVar18 = *(uint *)(uVar16 + lVar23 * 4);
                uVar22 = SUB164(auVar5 * auVar9,8);
                if ((uVar18 == 0) ||
                   (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar3, auVar10._8_8_ = 0,
                   auVar10._0_8_ = uVar13, auVar7._8_8_ = 0,
                   auVar7._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar6 * auVar10,8)) * lVar3,
                   auVar11._8_8_ = 0, auVar11._0_8_ = uVar13, SUB164(auVar7 * auVar11,8) < uVar29))
                goto LAB_001095fa;
              }
              lVar3 = *(long *)(uVar15 + (ulong)uVar22 * 8);
              if (lVar3 != 0) {
                local_b8[0] = 0;
                local_c8 = (undefined *)local_e8._0_8_;
                uStack_c0 = local_e8._8_8_;
                CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)local_d8);
                Vector<lsp::TextEdit>::push_back
                          ((Vector<lsp::TextEdit> *)(lVar3 + 0x18),(String *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
                goto LAB_00108f71;
              }
            }
          }
LAB_001095fa:
          local_110 = 0;
          local_b8[0] = 0;
          local_c8 = (undefined *)local_e8._0_8_;
          uStack_c0 = local_e8._8_8_;
          CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,(CowData *)local_d8);
          Vector<lsp::TextEdit>::push_back(local_118,(String *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
          ::insert((String *)&local_c8,local_a8,SUB81((CowData<char32_t> *)&local_108,0));
          CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)&local_110);
LAB_00108f71:
          pCVar27 = pCVar27 + 0x18;
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          local_190 = local_190 + 1;
        } while (local_190 < *(long *)(local_120 + -8));
      }
      uVar15 = local_90._0_8_;
      local_188 = (long *)local_90._0_8_;
      CowData<lsp::Location>::_unref((CowData<lsp::Location> *)&local_120);
      Dictionary::Dictionary((Dictionary *)param_1);
      Dictionary::Dictionary(local_128);
      if ((long *)uVar15 != (long *)0x0) {
        do {
          Array::Array((Array *)local_118);
          lVar3 = local_188[4];
          for (lVar23 = 0; (lVar3 != 0 && (lVar23 < *(long *)(lVar3 + -8))); lVar23 = lVar23 + 1) {
            Dictionary::Dictionary((Dictionary *)&local_108);
            lVar3 = local_188[4];
            if (lVar3 == 0) {
LAB_00109680:
              lVar26 = 0;
LAB_00109683:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar23,lVar26,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            lVar26 = *(long *)(lVar3 + -8);
            if (lVar26 <= lVar23) goto LAB_00109683;
            piVar28 = (int *)(lVar3 + lVar23 * 0x18);
            Dictionary::Dictionary((Dictionary *)&local_c8);
            Dictionary::Dictionary((Dictionary *)local_e8);
            Variant::Variant((Variant *)local_58,*piVar28);
            Variant::Variant((Variant *)local_78,"line");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)local_e8);
            if (pVVar20 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_58[0];
              *(undefined8 *)(pVVar20 + 8) = local_50;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] == '\0') {
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            else {
              Variant::_clear_internal();
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar17 != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,piVar28[1]);
            Variant::Variant((Variant *)local_78,"character");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)local_e8);
            if (pVVar20 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_58[0];
              *(undefined8 *)(pVVar20 + 8) = local_50;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_78,(Dictionary *)local_e8);
            Variant::Variant((Variant *)local_58,"start");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)&local_c8);
            if (pVVar20 != (Variant *)local_78) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_78[0];
              *(undefined8 *)(pVVar20 + 8) = local_70;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_68;
              local_78[0] = 0;
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)local_e8);
            Dictionary::Dictionary((Dictionary *)local_e8);
            Variant::Variant((Variant *)local_58,piVar28[2]);
            Variant::Variant((Variant *)local_78,"line");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)local_e8);
            if (pVVar20 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_58[0];
              *(undefined8 *)(pVVar20 + 8) = local_50;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,piVar28[3]);
            Variant::Variant((Variant *)local_78,"character");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)local_e8);
            if (pVVar20 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_58[0];
              *(undefined8 *)(pVVar20 + 8) = local_50;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] == '\0') {
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            else {
              Variant::_clear_internal();
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar17 != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_78,(Dictionary *)local_e8);
            Variant::Variant((Variant *)local_58,"end");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)&local_c8);
            if (pVVar20 != (Variant *)local_78) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_78[0];
              *(undefined8 *)(pVVar20 + 8) = local_70;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_68;
              local_78[0] = 0;
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)local_e8);
            Variant::Variant((Variant *)local_58,(Dictionary *)&local_c8);
            Variant::Variant((Variant *)local_78,"range");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)&local_108);
            if (pVVar20 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_58[0];
              *(undefined8 *)(pVVar20 + 8) = local_50;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] == '\0') {
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            else {
              Variant::_clear_internal();
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar17 != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)&local_c8);
            lVar3 = local_188[4];
            if (lVar3 == 0) goto LAB_00109680;
            lVar26 = *(long *)(lVar3 + -8);
            if (lVar26 <= lVar23) goto LAB_00109683;
            Variant::Variant((Variant *)local_58,(String *)(lVar3 + 0x10 + lVar23 * 0x18));
            Variant::Variant((Variant *)local_78,"newText");
            pVVar20 = (Variant *)Dictionary::operator[]((Variant *)&local_108);
            if (pVVar20 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar20] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar20 = 0;
              *(int *)pVVar20 = local_58[0];
              *(undefined8 *)(pVVar20 + 8) = local_50;
              *(undefined8 *)(pVVar20 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] == '\0') {
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            else {
              Variant::_clear_internal();
              cVar17 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar17 != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,(Dictionary *)&local_108);
            Array::push_back((Variant *)local_118);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)&local_108);
            lVar3 = local_188[4];
          }
          Variant::Variant((Variant *)local_58,(Array *)local_118);
          Variant::Variant((Variant *)local_78,(String *)(local_188 + 2));
          pVVar20 = (Variant *)Dictionary::operator[]((Variant *)local_128);
          Variant::operator=(pVVar20,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::~Array((Array *)local_118);
          local_188 = (long *)*local_188;
        } while (local_188 != (long *)0x0);
      }
      goto LAB_00108bcc;
    }
    CowData<lsp::Location>::_unref((CowData<lsp::Location> *)&local_120);
    Dictionary::Dictionary((Dictionary *)param_1);
  }
  Dictionary::Dictionary(local_128);
LAB_00108bcc:
  local_140 = local_128;
  Variant::Variant((Variant *)local_58,local_140);
  Variant::Variant((Variant *)local_78,"changes");
  pVVar20 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar20,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_140);
  uVar15 = local_a0._0_8_;
  if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
    uVar16 = local_a0._8_8_;
    if ((local_80._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
      piVar28 = (int *)(local_a0._8_8_ +
                       (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) * 4);
      piVar24 = (int *)local_a0._8_8_;
      puVar25 = (undefined8 *)local_a0._0_8_;
      do {
        if (*piVar24 != 0) {
          pvVar2 = (void *)*puVar25;
          *piVar24 = 0;
          CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)((long)pvVar2 + 0x20));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
          Memory::free_static(pvVar2,false);
          *puVar25 = 0;
        }
        piVar24 = piVar24 + 1;
        puVar25 = puVar25 + 1;
      } while (piVar28 != piVar24);
    }
    Memory::free_static((void *)uVar15,false);
    Memory::free_static((void *)uVar16,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<lsp::SignatureInformation>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<lsp::SignatureInformation>::_copy_on_write(CowData<lsp::SignatureInformation> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_00;
  CowData *pCVar4;
  ulong uVar5;
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
  if (lVar1 * 0x28 != 0) {
    uVar5 = lVar1 * 0x28 - 1;
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
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        CowData<char32_t>::_ref(this_00,pCVar4);
        *(undefined8 *)(this_00 + 8) = 0;
        CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        *(undefined8 *)(this_00 + 0x10) = 0;
        CowData<char32_t>::_ref(this_00 + 0x10,pCVar4 + 0x10);
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar4 + 0x20) != 0) {
          CowData<lsp::ParameterInformation>::_ref
                    ((CowData<lsp::ParameterInformation> *)(this_00 + 0x20),pCVar4 + 0x20);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x28;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDScriptWorkspace::resolve_signature(lsp::TextDocumentPositionParams const&, lsp::SignatureHelp&)
    */

undefined4 __thiscall
GDScriptWorkspace::resolve_signature
          (GDScriptWorkspace *this,TextDocumentPositionParams *param_1,SignatureHelp *param_2)

{
  undefined1 (*pauVar1) [16];
  CowData<char32_t> *this_00;
  CowData *pCVar2;
  CowData<char32_t> *pCVar3;
  CowData<char32_t> *this_01;
  long *plVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  int iVar13;
  Position *pPVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  long *plVar17;
  bool bVar18;
  long lVar19;
  GDScriptWorkspace *this_02;
  bool bVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  long in_FS_OFFSET;
  CowData<char32_t> *local_170;
  CowData<char32_t> *local_168;
  CowData *local_158;
  undefined1 (*local_100) [16];
  StrRange local_f8 [8];
  undefined8 local_f0;
  undefined *local_e8;
  CowData<char32_t> local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8 [2];
  undefined1 local_98 [16];
  long local_88 [2];
  long local_78 [2];
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_file_path((String *)&local_68);
  pPVar14 = (Position *)get_parse_result(this,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (pPVar14 != (Position *)0x0) {
    local_d8 = 0;
    local_d0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)param_1);
    iVar13 = ExtendGDScriptParser::get_left_function_call(pPVar14,param_1 + 8,(int *)&local_d0);
    if (iVar13 == 0) {
      local_100 = (undefined1 (*) [16])0x0;
      local_68 = (undefined *)0x0;
      String::parse_latin1((String *)&local_68,"");
      bVar18 = SUB81((String *)&local_68,0);
      lVar15 = resolve_symbol((TextDocumentPositionParams *)this,(String *)&local_d8,bVar18);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (lVar15 == 0) {
        cVar12 = GDScriptLanguageProtocol::is_smart_resolve_enabled();
        if (cVar12 != '\0') {
          this_02 = *(GDScriptWorkspace **)(GDScriptLanguageProtocol::singleton + 0x1f8);
          if ((this_02 != (GDScriptWorkspace *)0x0) &&
             (cVar12 = RefCounted::reference(), cVar12 == '\0')) {
            this_02 = (GDScriptWorkspace *)0x0;
          }
          resolve_related_symbols
                    (this_02,(TextDocumentPositionParams *)&local_d8,(List *)&local_100);
          cVar12 = RefCounted::unreference();
          if ((cVar12 != '\0') && (cVar12 = predelete_handler((Object *)this_02), cVar12 != '\0')) {
            (**(code **)(*(long *)this_02 + 0x140))(this_02);
            Memory::free_static(this_02,false);
          }
          if (local_100 != (undefined1 (*) [16])0x0) {
            plVar17 = *(long **)*local_100;
            pauVar16 = local_100;
            goto joined_r0x0010afbf;
          }
        }
        pauVar16 = (undefined1 (*) [16])0x0;
      }
      else {
        pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar16[1] = 0;
        *pauVar16 = (undefined1  [16])0x0;
        local_100 = pauVar16;
        plVar17 = (long *)operator_new(0x20,DefaultAllocator::alloc);
        plVar17[1] = 0;
        lVar23 = *(long *)(*pauVar16 + 8);
        *plVar17 = lVar15;
        plVar17[3] = (long)pauVar16;
        plVar17[2] = lVar23;
        if (lVar23 != 0) {
          *(long **)(lVar23 + 8) = plVar17;
        }
        plVar4 = *(long **)*pauVar16;
        *(long **)(*pauVar16 + 8) = plVar17;
        if (plVar4 == (long *)0x0) {
          *(int *)pauVar16[1] = *(int *)pauVar16[1] + 1;
          *(long **)*pauVar16 = plVar17;
        }
        else {
          *(int *)pauVar16[1] = *(int *)pauVar16[1] + 1;
          plVar17 = plVar4;
        }
        do {
          iVar13 = *(int *)(*plVar17 + 0x20);
          bVar6 = iVar13 == 6 || iVar13 == 0xc;
          if (iVar13 == 6 || iVar13 == 0xc) {
            this_01 = (CowData<char32_t> *)(local_98 + 8);
            local_88[0] = 0;
            local_98 = (undefined1  [16])0x0;
            CowData<char32_t>::_ref(this_01,(CowData *)&lsp::MarkupKind::Markdown);
            local_78[0] = 0;
            lVar15 = *plVar17;
            if (local_98._0_8_ != *(long *)(lVar15 + 8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)(lVar15 + 8));
              lVar15 = *plVar17;
            }
            local_c8 = (undefined1  [16])0x0;
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)local_c8,(CowData *)&lsp::MarkupKind::Markdown);
            pCVar3 = (CowData<char32_t> *)(local_c8 + 8);
            if ((*(long *)(lVar15 + 8) != 0) && (1 < *(uint *)(*(long *)(lVar15 + 8) + -8))) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = local_b8._8_8_;
              local_b8 = auVar8 << 0x40;
              String::parse_latin1((String *)local_b8,"\n\n");
              operator+((char *)local_e0,(String *)&_LC82);
              String::operator+((String *)&local_68,(String *)local_e0);
              if ((undefined *)local_c8._8_8_ != local_68) {
                CowData<char32_t>::_unref(pCVar3);
                puVar11 = local_68;
                local_68 = (undefined *)0x0;
                local_c8._8_8_ = puVar11;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref(local_e0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            }
            if ((*(long *)(lVar15 + 0x10) == 0) || (*(uint *)(*(long *)(lVar15 + 0x10) + -8) < 2))
            goto LAB_00109da7;
            local_f0 = 0;
            String::parse_latin1((String *)&local_f0,"\n\n");
            bVar20 = SUB81(local_f8,0);
            String::strip_edges(bVar20,(bool)((char)lVar15 + '\x10'));
            String::split(local_b8,bVar20,0x10e80b);
            local_68 = &_LC20;
            local_60 = 0;
            String::parse_latin1(local_f8);
            if (local_b8._8_8_ == 0) goto LAB_0010aff1;
            lVar23 = 0;
            bVar20 = false;
            goto LAB_0010a74c;
          }
          plVar17 = (long *)plVar17[1];
joined_r0x0010afbf:
        } while (plVar17 != (long *)0x0);
      }
      goto LAB_0010a2c7;
    }
    goto LAB_0010a0c8;
  }
  goto LAB_0010a0d2;
LAB_0010a74c:
  do {
    if (*(long *)(local_b8._8_8_ + -8) <= lVar23) break;
    pCVar2 = (CowData *)(local_b8._8_8_ + lVar23 * 8);
    local_e8 = (undefined *)0x0;
    if (*(long *)pCVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,pCVar2);
    }
    iVar13 = String::find((char *)&local_e8,0x10e90f);
    if (iVar13 == -1) {
      if (bVar20) {
        String::substr((int)local_e0,(int)(StrRange *)&local_e8);
        operator+((char *)&local_68,(String *)&_LC82);
        if (local_e8 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = local_68;
          local_68 = (undefined *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref(local_e0);
        goto LAB_0010a6d6;
      }
LAB_0010a9c9:
      String::strip_edges(bVar18,SUB81((StrRange *)&local_e8,0));
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::replace((char *)&local_68,(char *)&local_e8);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (undefined *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((local_b8._8_8_ != 0) && (lVar23 < *(long *)(local_b8._8_8_ + -8) + -1)) {
        String::operator+=((String *)&local_e8,"\n\n");
      }
      bVar20 = false;
    }
    else {
      local_60 = 1;
      local_68 = &_LC78;
      String::parse_latin1((StrRange *)&local_e8);
LAB_0010a6d6:
      iVar13 = String::find((char *)&local_e8,0x10e91b);
      if (iVar13 != -1) {
        local_68 = &_LC78;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_e8);
        goto LAB_0010a9c9;
      }
      bVar20 = bVar6;
      if ((local_b8._8_8_ != 0) && (lVar23 < *(long *)(local_b8._8_8_ + -8) + -1)) {
        String::operator+=((String *)&local_e8,"\n");
      }
    }
    lVar23 = lVar23 + 1;
    String::operator+=((String *)local_f8,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  } while (local_b8._8_8_ != 0);
LAB_0010aff1:
  CowData<String>::_unref((CowData<String> *)(local_b8 + 8));
  String::operator+((String *)&local_68,(String *)local_f8);
  String::operator+=((String *)pCVar3,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
LAB_00109da7:
  if ((*(long *)(lVar15 + 0x50) != 0) && (1 < *(uint *)(*(long *)(lVar15 + 0x50) + -8))) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_b8._8_8_;
    local_b8 = auVar9 << 0x40;
    String::parse_latin1((String *)local_b8,")");
    local_f0 = 0;
    String::parse_latin1((String *)&local_f0,"](");
    operator+((char *)local_f8,(String *)"Defined in [");
    String::operator+((String *)&local_e8,(String *)local_f8);
    String::operator+((String *)local_e0,(String *)&local_e8);
    String::operator+((String *)&local_68,(String *)local_e0);
    String::operator+=((String *)pCVar3,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  }
  if (local_98._8_8_ != local_c8._0_8_) {
    CowData<char32_t>::_unref(this_01);
    uVar10 = local_c8._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_c8._8_8_;
    local_c8 = auVar7 << 0x40;
    local_98._8_8_ = uVar10;
  }
  if (local_88[0] != local_c8._8_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    local_88[0] = local_c8._8_8_;
    local_c8._8_8_ = 0;
  }
  CowData<char32_t>::_unref(pCVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  lVar15 = *(long *)(*plVar17 + 0x60);
  lVar23 = local_78[0];
  if (lVar15 != 0) {
    lVar19 = 0;
    do {
      if (*(long *)(lVar15 + -8) <= lVar19) break;
      pCVar3 = (CowData<char32_t> *)(local_b8 + 8);
      local_a8[0] = 0;
      local_b8 = (undefined1  [16])0x0;
      pCVar2 = (CowData *)(lVar15 + lVar19 * 0x68);
      CowData<char32_t>::_ref(pCVar3,(CowData *)&lsp::MarkupKind::Markdown);
      if (local_b8._0_8_ != *(long *)pCVar2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_b8,pCVar2);
      }
      local_68 = (undefined *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_b8);
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)pCVar3);
      local_58[0] = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)local_a8);
      if (lVar23 == 0) {
        lVar15 = 1;
      }
      else {
        lVar15 = *(long *)(lVar23 + -8) + 1;
      }
      iVar13 = CowData<lsp::ParameterInformation>::resize<false>
                         ((CowData<lsp::ParameterInformation> *)local_78,lVar15);
      lVar23 = local_78[0];
      if (iVar13 == 0) {
        if (local_78[0] == 0) {
          lVar22 = -1;
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(local_78[0] + -8);
          lVar22 = lVar15 + -1;
          if (-1 < lVar22) {
            CowData<lsp::ParameterInformation>::_copy_on_write
                      ((CowData<lsp::ParameterInformation> *)local_78);
            lVar23 = local_78[0];
            this_00 = (CowData<char32_t> *)(local_78[0] + lVar22 * 0x18);
            CowData<char32_t>::_ref(this_00,(CowData *)&local_68);
            CowData<char32_t>::_ref(this_00 + 8,(CowData *)&local_60);
            CowData<char32_t>::_ref(this_00 + 0x10,(CowData *)local_58);
            goto LAB_00109f4f;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar22,lVar15,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        lVar23 = local_78[0];
      }
LAB_00109f4f:
      lVar19 = lVar19 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref(pCVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      lVar15 = *(long *)(*plVar17 + 0x60);
    } while (lVar15 != 0);
  }
  local_158 = (CowData *)local_78;
  local_168 = (CowData<char32_t> *)local_58;
  local_170 = (CowData<char32_t> *)&local_60;
  local_68 = (undefined *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_98);
  local_60 = 0;
  CowData<char32_t>::_ref(local_170,(CowData *)this_01);
  local_58[0] = 0;
  CowData<char32_t>::_ref(local_168,(CowData *)local_88);
  local_48 = 0;
  if (lVar23 != 0) {
    CowData<lsp::ParameterInformation>::_ref
              ((CowData<lsp::ParameterInformation> *)&local_48,local_158);
  }
  if (*(long *)(param_2 + 8) == 0) {
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(*(long *)(param_2 + 8) + -8) + 1;
  }
  iVar13 = CowData<lsp::SignatureInformation>::resize<false>
                     ((CowData<lsp::SignatureInformation> *)(param_2 + 8),lVar15);
  if (iVar13 == 0) {
    if (*(long *)(param_2 + 8) == 0) {
      lVar23 = -1;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(param_2 + 8) + -8);
      lVar23 = lVar15 + -1;
      if (-1 < lVar23) {
        CowData<lsp::SignatureInformation>::_copy_on_write
                  ((CowData<lsp::SignatureInformation> *)(param_2 + 8));
        pCVar3 = (CowData<char32_t> *)(*(long *)(param_2 + 8) + lVar23 * 0x28);
        if (*(undefined **)pCVar3 != local_68) {
          CowData<char32_t>::_ref(pCVar3,(CowData *)&local_68);
        }
        CowData<char32_t>::_ref(pCVar3 + 8,(CowData *)local_170);
        CowData<char32_t>::_ref(pCVar3 + 0x10,(CowData *)local_168);
        if (*(long *)(pCVar3 + 0x20) != local_48) {
          CowData<lsp::ParameterInformation>::_ref
                    ((CowData<lsp::ParameterInformation> *)(pCVar3 + 0x20),(CowData *)&local_48);
        }
        goto LAB_0010a271;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar15,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010a271:
  CowData<lsp::ParameterInformation>::_unref((CowData<lsp::ParameterInformation> *)&local_48);
  CowData<char32_t>::_unref(local_168);
  CowData<char32_t>::_unref(local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<lsp::ParameterInformation>::_unref((CowData<lsp::ParameterInformation> *)local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
LAB_0010a2c7:
  if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + -8) != 0)) {
    if (pauVar16 != (undefined1 (*) [16])0x0) {
      do {
        while( true ) {
          pvVar5 = *(void **)*pauVar16;
          if (pvVar5 == (void *)0x0) {
            if (*(int *)pauVar16[1] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_0010a43f;
            }
            goto LAB_0010a435;
          }
          if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar16) break;
          lVar15 = *(long *)((long)pvVar5 + 8);
          lVar23 = *(long *)((long)pvVar5 + 0x10);
          *(long *)*pauVar16 = lVar15;
          if (pvVar5 == *(void **)(*pauVar16 + 8)) {
            *(long *)(*pauVar16 + 8) = lVar23;
          }
          if (lVar23 != 0) {
            *(long *)(lVar23 + 8) = lVar15;
            lVar15 = *(long *)((long)pvVar5 + 8);
          }
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x10) = lVar23;
          }
          Memory::free_static(pvVar5,false);
          pauVar1 = pauVar16 + 1;
          *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
          if (*(int *)*pauVar1 == 0) goto LAB_0010a435;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)pauVar16[1] != 0);
LAB_0010a435:
      Memory::free_static(pauVar16,false);
    }
LAB_0010a43f:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    uVar21 = 0;
    goto LAB_0010a0d8;
  }
  if (pauVar16 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar5 = *(void **)*pauVar16;
        if (pvVar5 == (void *)0x0) {
          if (*(int *)pauVar16[1] == 0) {
            Memory::free_static(pauVar16,false);
          }
          else {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
          }
          goto LAB_0010a0c8;
        }
        if (*(undefined1 (**) [16])((long)pvVar5 + 0x18) != pauVar16) break;
        lVar15 = *(long *)((long)pvVar5 + 8);
        lVar23 = *(long *)((long)pvVar5 + 0x10);
        *(long *)*pauVar16 = lVar15;
        if (pvVar5 == *(void **)(*pauVar16 + 8)) {
          *(long *)(*pauVar16 + 8) = lVar23;
        }
        if (lVar23 != 0) {
          *(long *)(lVar23 + 8) = lVar15;
          lVar15 = *(long *)((long)pvVar5 + 8);
        }
        if (lVar15 != 0) {
          *(long *)(lVar15 + 0x10) = lVar23;
        }
        Memory::free_static(pvVar5,false);
        pauVar1 = pauVar16 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_0010a331;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar16[1] != 0);
LAB_0010a331:
    Memory::free_static(pauVar16,false);
  }
LAB_0010a0c8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_0010a0d2:
  uVar21 = 0x25;
LAB_0010a0d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar21;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x11b9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* GDScriptWorkspace::is_class_ptr(void*) const */

uint __thiscall GDScriptWorkspace::is_class_ptr(GDScriptWorkspace *this,void *param_1)

{
  return (uint)CONCAT71(0x11b9,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GDScriptWorkspace::_getv(StringName const&, Variant&) const */

undefined8 GDScriptWorkspace::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptWorkspace::_setv(StringName const&, Variant const&) */

undefined8 GDScriptWorkspace::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptWorkspace::_validate_propertyv(PropertyInfo&) const */

void GDScriptWorkspace::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDScriptWorkspace::_property_can_revertv(StringName const&) const */

undefined8 GDScriptWorkspace::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDScriptWorkspace::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GDScriptWorkspace::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptWorkspace::_notificationv(int, bool) */

void GDScriptWorkspace::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<GDScriptWorkspace, void, Object*, String, Vector<String>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>> *this)

{
  return;
}



/* MethodBindTR<Dictionary, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Dictionary,String_const&>::_gen_argument_type
          (MethodBindTR<Dictionary,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe9) + 0x1b;
}



/* MethodBindTR<Dictionary, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary,String_const&>::get_argument_meta(int param_1)

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



/* MethodBindTRC<String, String const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String,String_const&>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,String_const&>::_gen_argument_type
          (MethodBindTR<Error,String_const&,String_const&> *this,int param_1)

{
  return (-((uint)param_1 < 2) & 2U) + 2;
}



/* MethodBindTR<Error, String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Object*, String, Vector<String> >::get_argument_meta(int) const */

undefined8 MethodBindT<Object*,String,Vector<String>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<GDScriptWorkspace, void, Object*, String, Vector<String>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>::
get_argument_count(CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<GDScriptWorkspace, void, Object*, String, Vector<String>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<Object*, String, Vector<String> >::~MethodBindT() */

void __thiscall
MethodBindT<Object*,String,Vector<String>>::~MethodBindT
          (MethodBindT<Object*,String,Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b400;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*, String, Vector<String> >::~MethodBindT() */

void __thiscall
MethodBindT<Object*,String,Vector<String>>::~MethodBindT
          (MethodBindT<Object*,String,Vector<String>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b400;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b460;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b460;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b4c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b4c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b520;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b520;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b580;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b580;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b5e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b5e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b640;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011b640;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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
  *(undefined ***)this = &PTR__initialize_classv_0011b0b0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011b0b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<Object*, String, Vector<String> >::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<Object*,String,Vector<String>>::_gen_argument_type
          (MethodBindT<Object*,String,Vector<String>> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 3) && (uVar1 = 0x18, param_1 != 0)) && (uVar1 = 0x22, param_1 == 1)) {
    uVar1 = 4;
  }
  return uVar1;
}



/* CallableCustomMethodPointer<GDScriptWorkspace, void, Object*, String, Vector<String>
   >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>::get_object
          (CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>> *this)

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
      goto LAB_0010b82d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b82d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b82d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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
LAB_0010b9d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b9d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010ba3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010ba3e:
  return &_get_class_namev()::_class_name_static;
}



/* GDScriptWorkspace::_get_class_namev() const */

undefined8 * GDScriptWorkspace::_get_class_namev(void)

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
LAB_0010bac3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bac3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GDScriptWorkspace");
      goto LAB_0010bb2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GDScriptWorkspace");
LAB_0010bb2e:
  return &_get_class_namev()::_class_name_static;
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



/* lsp::DiagnosticRelatedInformation::to_json() const */

Dictionary * lsp::DiagnosticRelatedInformation::to_json(void)

{
  char cVar1;
  Variant *pVVar2;
  String *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  Dictionary local_88 [8];
  Dictionary local_80 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Dictionary::Dictionary(local_90);
  Variant::Variant((Variant *)local_58,in_RSI);
  Variant::Variant((Variant *)local_78,"uri");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_90);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_80);
  Dictionary::Dictionary(local_88);
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 8));
  Variant::Variant((Variant *)local_78,"line");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 0xc));
  Variant::Variant((Variant *)local_78,"character");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_88);
  Variant::Variant((Variant *)local_58,"start");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_78[0];
    *(undefined8 *)(pVVar2 + 8) = local_70;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_88);
  Dictionary::Dictionary(local_88);
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 0x10));
  Variant::Variant((Variant *)local_78,"line");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(int *)(in_RSI + 0x14));
  Variant::Variant((Variant *)local_78,"character");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_88);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_88);
  Variant::Variant((Variant *)local_58,"end");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_78[0];
    *(undefined8 *)(pVVar2 + 8) = local_70;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_88);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"range");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_90);
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  Variant::Variant((Variant *)local_58,local_90);
  Variant::Variant((Variant *)local_78,"location");
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_90);
  Variant::Variant((Variant *)local_58,in_RSI + 0x18);
  Variant::Variant((Variant *)local_78,"message");
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
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* lsp::Diagnostic::to_json() const */

Dictionary * lsp::Diagnostic::to_json(void)

{
  char cVar1;
  long lVar2;
  Variant *pVVar3;
  int *in_RSI;
  int iVar4;
  Dictionary *in_RDI;
  long lVar5;
  long in_FS_OFFSET;
  Dictionary local_88 [8];
  Dictionary local_80 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Dictionary::Dictionary(local_88);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_78,*in_RSI);
  Variant::Variant((Variant *)local_58,"line");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  Variant::operator=(pVVar3,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,in_RSI[1]);
  Variant::Variant((Variant *)local_58,"character");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  Variant::operator=(pVVar3,(Variant *)local_78);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"start");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_78,in_RSI[2]);
  Variant::Variant((Variant *)local_58,"line");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar3 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_78[0];
    *(undefined8 *)(pVVar3 + 8) = local_70;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,in_RSI[3]);
  Variant::Variant((Variant *)local_58,"character");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar3 != (Variant *)local_78) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_78[0];
    *(undefined8 *)(pVVar3 + 8) = local_70;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_68;
    local_78[0] = 0;
  }
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"end");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
  Variant::operator=(pVVar3,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  Variant::Variant((Variant *)local_58,local_88);
  Variant::Variant((Variant *)local_78,"range");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_88);
  Variant::Variant((Variant *)local_58,in_RSI[5]);
  Variant::Variant((Variant *)local_78,"code");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  Variant::operator=(pVVar3,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,in_RSI[4]);
  Variant::Variant((Variant *)local_78,"severity");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(String *)(in_RSI + 8));
  Variant::Variant((Variant *)local_78,"message");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  Variant::operator=(pVVar3,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(String *)(in_RSI + 6));
  Variant::Variant((Variant *)local_78,"source");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  Variant::operator=(pVVar3,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(in_RSI + 0xc) != 0) {
    Array::Array((Array *)local_88);
    iVar4 = (int)local_88;
    Array::resize(iVar4);
    lVar2 = *(long *)(in_RSI + 0xc);
    for (lVar5 = 0; (lVar2 != 0 && (lVar5 < *(long *)(lVar2 + -8))); lVar5 = lVar5 + 1) {
      DiagnosticRelatedInformation::to_json();
      Variant::Variant((Variant *)local_58,local_80);
      pVVar3 = (Variant *)Array::operator[](iVar4);
      if (pVVar3 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
      }
      Dictionary::~Dictionary(local_80);
      lVar2 = *(long *)(in_RSI + 0xc);
    }
    Variant::Variant((Variant *)local_58,(Array *)local_88);
    Variant::Variant((Variant *)local_78,"relatedInformation");
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
    Variant::operator=(pVVar3,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array((Array *)local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* lsp::ApplyWorkspaceEditParams::to_json() */

Dictionary * lsp::ApplyWorkspaceEditParams::to_json(void)

{
  long lVar1;
  code *pcVar2;
  Variant *pVVar3;
  int *piVar4;
  long in_RSI;
  Dictionary *in_RDI;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long *local_e8;
  Dictionary local_a8 [8];
  Dictionary local_a0 [8];
  Array local_98 [8];
  Dictionary local_90 [8];
  Dictionary local_88 [8];
  Dictionary local_80 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  Dictionary::Dictionary(local_a8);
  Dictionary::Dictionary(local_a0);
  local_e8 = *(long **)(in_RSI + 0x18);
  if (local_e8 != (long *)0x0) {
    do {
      Array::Array(local_98);
      lVar1 = local_e8[4];
      for (lVar6 = 0; (lVar1 != 0 && (lVar6 < *(long *)(lVar1 + -8))); lVar6 = lVar6 + 1) {
        Dictionary::Dictionary(local_90);
        lVar1 = local_e8[4];
        if (lVar1 == 0) {
LAB_0010d630:
          lVar5 = 0;
LAB_0010d636:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar5 = *(long *)(lVar1 + -8);
        if (lVar5 <= lVar6) goto LAB_0010d636;
        piVar4 = (int *)(lVar1 + lVar6 * 0x18);
        Dictionary::Dictionary(local_80);
        Dictionary::Dictionary(local_88);
        Variant::Variant((Variant *)local_58,*piVar4);
        Variant::Variant((Variant *)local_78,"line");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_58[0];
          *(undefined8 *)(pVVar3 + 8) = local_50;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,piVar4[1]);
        Variant::Variant((Variant *)local_78,"character");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_58[0];
          *(undefined8 *)(pVVar3 + 8) = local_50;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,local_88);
        Variant::Variant((Variant *)local_58,"start");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
        if (pVVar3 != (Variant *)local_78) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_78[0];
          *(undefined8 *)(pVVar3 + 8) = local_70;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_68;
          local_78[0] = 0;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_88);
        Dictionary::Dictionary(local_88);
        Variant::Variant((Variant *)local_58,piVar4[2]);
        Variant::Variant((Variant *)local_78,"line");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_58[0];
          *(undefined8 *)(pVVar3 + 8) = local_50;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,piVar4[3]);
        Variant::Variant((Variant *)local_78,"character");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_58[0];
          *(undefined8 *)(pVVar3 + 8) = local_50;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,local_88);
        Variant::Variant((Variant *)local_58,"end");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_80);
        if (pVVar3 != (Variant *)local_78) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_78[0];
          *(undefined8 *)(pVVar3 + 8) = local_70;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_68;
          local_78[0] = 0;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_88);
        Variant::Variant((Variant *)local_58,local_80);
        Variant::Variant((Variant *)local_78,"range");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_90);
        if (pVVar3 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_58[0];
          *(undefined8 *)(pVVar3 + 8) = local_50;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_80);
        lVar1 = local_e8[4];
        if (lVar1 == 0) goto LAB_0010d630;
        lVar5 = *(long *)(lVar1 + -8);
        if (lVar5 <= lVar6) goto LAB_0010d636;
        Variant::Variant((Variant *)local_58,(String *)(lVar1 + 0x10 + lVar6 * 0x18));
        Variant::Variant((Variant *)local_78,"newText");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_90);
        if (pVVar3 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = local_58[0];
          *(undefined8 *)(pVVar3 + 8) = local_50;
          *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_90);
        Array::push_back((Variant *)local_98);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_90);
        lVar1 = local_e8[4];
      }
      Variant::Variant((Variant *)local_58,local_98);
      Variant::Variant((Variant *)local_78,(String *)(local_e8 + 2));
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
      Variant::operator=(pVVar3,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array(local_98);
      local_e8 = (long *)*local_e8;
    } while (local_e8 != (long *)0x0);
  }
  Variant::Variant((Variant *)local_58,local_a0);
  Variant::Variant((Variant *)local_78,"changes");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_a8);
  Variant::operator=(pVVar3,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_a0);
  Variant::Variant((Variant *)local_58,local_a8);
  Variant::Variant((Variant *)local_78,"edit");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
  Variant::operator=(pVVar3,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
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



/* GDScriptWorkspace::get_class() const */

void GDScriptWorkspace::get_class(void)

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
    if (*in_RSI != 0) goto LAB_0010dc2c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010dc2c:
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
              goto LAB_0010df8b;
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
  if ((float)uVar28 * __LC27 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010df8b;
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
LAB_0010df8b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
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



/* List<lsp::DocumentLink, DefaultAllocator>::~List() */

void __thiscall
List<lsp::DocumentLink,DefaultAllocator>::~List(List<lsp::DocumentLink,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x28) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x18);
      lVar2 = *(long *)((long)pvVar1 + 0x20);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x18);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

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
    local_68 = &_LC20;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x1b,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78
               ,6,&local_70);
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
    if (cVar5 != '\0') goto LAB_0010ec7b;
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
      if (cVar5 != '\0') goto LAB_0010ec7b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010ec7b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptWorkspace::is_class(String const&) const */

undefined8 __thiscall GDScriptWorkspace::is_class(GDScriptWorkspace *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010ee7b;
  }
  cVar4 = String::operator==(param_1,"GDScriptWorkspace");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ee7b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar3 == (void *)0x0) goto LAB_0010efbf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010efbf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
      goto LAB_0010f17c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f17c:
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



/* GDScriptWorkspace::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GDScriptWorkspace::_get_property_listv(GDScriptWorkspace *this,List *param_1,bool param_2)

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
  local_78 = "GDScriptWorkspace";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDScriptWorkspace";
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
      goto LAB_0010f3e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f3e1:
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
  StringName::StringName((StringName *)&local_78,"GDScriptWorkspace",false);
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



/* MethodBind* create_method_bind<GDScriptWorkspace, Object*, String, Vector<String> >(void
   (GDScriptWorkspace::*)(Object*, String, Vector<String>)) */

MethodBind *
create_method_bind<GDScriptWorkspace,Object*,String,Vector<String>>
          (_func_void_Object_ptr_String_Vector *param_1)

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
  *(_func_void_Object_ptr_String_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b400;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<GDScriptWorkspace, Dictionary const&>(void
   (GDScriptWorkspace::*)(Dictionary const&)) */

MethodBind *
create_method_bind<GDScriptWorkspace,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

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
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b460;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<GDScriptWorkspace, Error, String const&, String const&>(Error
   (GDScriptWorkspace::*)(String const&, String const&)) */

MethodBind *
create_method_bind<GDScriptWorkspace,Error,String_const&,String_const&>
          (_func_Error_String_ptr_String_ptr *param_1)

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
  *(_func_Error_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b4c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<GDScriptWorkspace, Error, String const&>(Error
   (GDScriptWorkspace::*)(String const&)) */

MethodBind *
create_method_bind<GDScriptWorkspace,Error,String_const&>(_func_Error_String_ptr *param_1)

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
  *(_func_Error_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b520;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<GDScriptWorkspace, String, String const&>(String
   (GDScriptWorkspace::*)(String const&) const) */

MethodBind *
create_method_bind<GDScriptWorkspace,String,String_const&>(_func_String_String_ptr *param_1)

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
  *(_func_String_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b580;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<GDScriptWorkspace, String const&>(void
   (GDScriptWorkspace::*)(String const&)) */

MethodBind * create_method_bind<GDScriptWorkspace,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b5e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* MethodBind* create_method_bind<GDScriptWorkspace, Dictionary, String const&>(Dictionary
   (GDScriptWorkspace::*)(String const&)) */

MethodBind *
create_method_bind<GDScriptWorkspace,Dictionary,String_const&>(_func_Dictionary_String_ptr *param_1)

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
  *(_func_Dictionary_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011b640;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GDScriptWorkspace";
  local_30 = 0x11;
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



/* HashMap<String, ExtendGDScriptParser*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, ExtendGDScriptParser*> > >::_lookup_pos(String
   const&, unsigned int&) const */

undefined8 __thiscall
HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
::_lookup_pos(HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
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
/* HashMap<String, ExtendGDScriptParser*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, ExtendGDScriptParser*> > >::operator[](String
   const&) */

undefined1 * __thiscall
HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
::operator[](HashMap<String,ExtendGDScriptParser*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ExtendGDScriptParser*>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  char cVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  void *__s_00;
  undefined1 (*pauVar26) [16];
  void *pvVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar21 = _lookup_pos(this,param_1,&local_70);
  if (cVar21 == '\0') {
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar32 = (ulong)uVar31;
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(this + 0x10) = uVar25;
      pvVar27 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = pvVar27;
      if (uVar31 != 0) {
        pvVar2 = *(void **)(this + 0x10);
        if ((pvVar2 < (void *)((long)pvVar27 + uVar38)) &&
           (pvVar27 < (void *)((long)pvVar2 + uVar24))) {
          uVar24 = 0;
          do {
            *(undefined4 *)((long)pvVar2 + uVar24 * 4) = 0;
            *(undefined8 *)((long)pvVar27 + uVar24 * 8) = 0;
            uVar24 = uVar24 + 1;
          } while (uVar32 != uVar24);
        }
        else {
          memset(pvVar2,0,uVar24);
          memset(pvVar27,0,uVar38);
        }
      }
    }
    local_6c = 0;
    cVar21 = _lookup_pos(this,param_1,&local_6c);
    if (cVar21 == '\0') {
      if ((float)uVar31 * __LC27 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00110390;
        }
        uVar24 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar23 = *(uint *)(hash_table_size_primes + (ulong)uVar31 * 4);
        if (uVar31 + 1 < 2) {
          uVar24 = 2;
        }
        uVar31 = *(uint *)(hash_table_size_primes + uVar24 * 4);
        uVar32 = (ulong)uVar31;
        *(int *)(this + 0x28) = (int)uVar24;
        pvVar27 = *(void **)(this + 8);
        uVar24 = uVar32 * 4;
        uVar38 = uVar32 * 8;
        pvVar2 = *(void **)(this + 0x10);
        uVar25 = Memory::alloc_static(uVar24,false);
        *(undefined8 *)(this + 0x10) = uVar25;
        __s_00 = (void *)Memory::alloc_static(uVar38,false);
        *(void **)(this + 8) = __s_00;
        if (uVar31 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar24))) {
            uVar24 = 0;
            do {
              *(undefined4 *)((long)__s + uVar24 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
              uVar24 = uVar24 + 1;
            } while (uVar32 != uVar24);
          }
          else {
            memset(__s,0,uVar24);
            memset(__s_00,0,uVar38);
          }
        }
        if (uVar23 != 0) {
          uVar24 = 0;
          do {
            uVar31 = *(uint *)((long)pvVar2 + uVar24 * 4);
            if (uVar31 != 0) {
              lVar3 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar38 = CONCAT44(0,uVar35);
              lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar31 * lVar4;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar38;
              lVar29 = SUB168(auVar5 * auVar13,8);
              puVar34 = (uint *)(lVar3 + lVar29 * 4);
              iVar28 = SUB164(auVar5 * auVar13,8);
              uVar37 = *puVar34;
              uVar25 = *(undefined8 *)((long)pvVar27 + uVar24 * 8);
              while (uVar37 != 0) {
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)uVar37 * lVar4;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar38;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)((iVar28 + uVar35) - SUB164(auVar6 * auVar14,8)) * lVar4;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar38;
                uVar22 = SUB164(auVar7 * auVar15,8);
                uVar33 = uVar25;
                if (uVar22 < uVar36) {
                  *puVar34 = uVar31;
                  puVar1 = (undefined8 *)((long)__s_00 + lVar29 * 8);
                  uVar33 = *puVar1;
                  *puVar1 = uVar25;
                  uVar31 = uVar37;
                  uVar36 = uVar22;
                }
                uVar36 = uVar36 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(iVar28 + 1) * lVar4;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar38;
                lVar29 = SUB168(auVar8 * auVar16,8);
                puVar34 = (uint *)(lVar3 + lVar29 * 4);
                iVar28 = SUB164(auVar8 * auVar16,8);
                uVar25 = uVar33;
                uVar37 = *puVar34;
              }
              *(undefined8 *)((long)__s_00 + lVar29 * 8) = uVar25;
              *puVar34 = uVar31;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar23 != uVar24);
          Memory::free_static(pvVar27,false);
          Memory::free_static(pvVar2,false);
        }
      }
      local_58[0] = 0;
      local_68 = (undefined1  [16])0x0;
      if (*(long *)param_1 == 0) {
        local_58[1] = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *pauVar26 = (undefined1  [16])0x0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
        lVar3 = local_58[0];
        uVar25 = local_68._0_8_;
        uVar33 = local_68._8_8_;
        local_58[1] = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *(undefined8 *)*pauVar26 = uVar25;
        *(undefined8 *)(*pauVar26 + 8) = uVar33;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar26 + 1),(CowData *)local_58);
        }
      }
      *(undefined8 *)(pauVar26[1] + 8) = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      puVar1 = *(undefined8 **)(this + 0x20);
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar26;
      }
      else {
        *puVar1 = pauVar26;
        *(undefined8 **)(*pauVar26 + 8) = puVar1;
      }
      *(undefined1 (**) [16])(this + 0x20) = pauVar26;
      uVar23 = String::hash();
      lVar3 = *(long *)(this + 0x10);
      uVar31 = 1;
      if (uVar23 != 0) {
        uVar31 = uVar23;
      }
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar24 = CONCAT44(0,uVar23);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar31 * lVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar24;
      lVar30 = SUB168(auVar9 * auVar17,8);
      lVar29 = *(long *)(this + 8);
      puVar34 = (uint *)(lVar3 + lVar30 * 4);
      iVar28 = SUB164(auVar9 * auVar17,8);
      uVar35 = *puVar34;
      pauVar40 = pauVar26;
      if (uVar35 != 0) {
        uVar37 = 0;
        pauVar39 = pauVar26;
        do {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar35 * lVar4;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar24;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)((uVar23 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar24;
          uVar36 = SUB164(auVar11 * auVar19,8);
          pauVar40 = pauVar39;
          if (uVar36 < uVar37) {
            *puVar34 = uVar31;
            puVar1 = (undefined8 *)(lVar29 + lVar30 * 8);
            pauVar40 = (undefined1 (*) [16])*puVar1;
            *puVar1 = pauVar39;
            uVar37 = uVar36;
            uVar31 = uVar35;
          }
          uVar37 = uVar37 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar4;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar24;
          lVar30 = SUB168(auVar12 * auVar20,8);
          puVar34 = (uint *)(lVar3 + lVar30 * 4);
          iVar28 = SUB164(auVar12 * auVar20,8);
          uVar35 = *puVar34;
          pauVar39 = pauVar40;
        } while (uVar35 != 0);
      }
      *(undefined1 (**) [16])(lVar29 + lVar30 * 8) = pauVar40;
      *puVar34 = uVar31;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c * 8);
      *(undefined8 *)(pauVar26[1] + 8) = 0;
    }
  }
  else {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_00110390:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "Error";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x1105e0);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_001106c5;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001106c5:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GDScriptWorkspace, void, Object*, String, Vector<String>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>::call
          (CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  Variant local_58 [8];
  CowData<String> local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_58[0] = (Variant)0x0;
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001109c5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001109c5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x22);
        uVar3 = _LC56;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_Vector(local_58);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
        uVar3 = _LC57;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        Variant::operator_cast_to_String((Variant *)&local_60);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00110abd:
          uVar3 = _LC58;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_00110abd;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        (*pcVar9)((long *)(lVar1 + lVar2),pOVar5,(Variant *)&local_60,local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<String>::_unref(local_50);
        goto LAB_001109c5;
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
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"\', can\'t call method.");
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)local_58,(String *)local_68);
  _err_print_error(&_LC55,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001109c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* GDScriptWorkspace::_initialize_classv() */

void GDScriptWorkspace::_initialize_classv(void)

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
    local_48 = "GDScriptWorkspace";
    local_60 = 0;
    local_40 = 0x11;
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<DocData::ArgumentDoc>::_unref() */

void __thiscall CowData<DocData::ArgumentDoc>::_unref(CowData<DocData::ArgumentDoc> *this)

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
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
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



/* CowData<DocData::ArgumentDoc>::_ref(CowData<DocData::ArgumentDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::ArgumentDoc>::_ref(CowData<DocData::ArgumentDoc> *this,CowData *param_1)

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



/* CowData<DocData::MethodDoc>::_unref() */

void __thiscall CowData<DocData::MethodDoc>::_unref(CowData<DocData::MethodDoc> *this)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 0xe));
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(plVar6 + 0xb));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 9));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 7));
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 4));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 2));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
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
          plVar6 = plVar6 + 0xf;
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



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::MethodDoc>::_copy_on_write(CowData<DocData::MethodDoc> *this)

{
  CowData CVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
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
  if (lVar2 * 0x78 != 0) {
    uVar7 = lVar2 * 0x78 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar6 + 0x10);
        }
        CVar1 = pCVar6[0x18];
        *(undefined8 *)(this_00 + 0x20) = 0;
        lVar3 = *(long *)(pCVar6 + 0x20);
        *(CowData *)(this_00 + 0x18) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        *(undefined8 *)(this_00 + 0x28) = 0;
        if (*(long *)(pCVar6 + 0x28) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x28,pCVar6 + 0x28);
        }
        CVar1 = pCVar6[0x30];
        *(undefined8 *)(this_00 + 0x38) = 0;
        lVar3 = *(long *)(pCVar6 + 0x38);
        *(CowData *)(this_00 + 0x30) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x38,pCVar6 + 0x38);
        }
        CVar1 = pCVar6[0x40];
        *(undefined8 *)(this_00 + 0x48) = 0;
        lVar3 = *(long *)(pCVar6 + 0x48);
        *(CowData *)(this_00 + 0x40) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x48,pCVar6 + 0x48);
        }
        *(undefined8 *)(this_00 + 0x58) = 0;
        if (*(long *)(pCVar6 + 0x58) != 0) {
          CowData<DocData::ArgumentDoc>::_ref
                    ((CowData<DocData::ArgumentDoc> *)(this_00 + 0x58),pCVar6 + 0x58);
        }
        *(undefined8 *)(this_00 + 0x68) = 0;
        if (*(long *)(pCVar6 + 0x68) != 0) {
          CowData<int>::_ref((CowData<int> *)(this_00 + 0x68),pCVar6 + 0x68);
        }
        *(undefined8 *)(this_00 + 0x70) = 0;
        if (*(long *)(pCVar6 + 0x70) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x70,pCVar6 + 0x70);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x78;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* HashMap<String, Vector<lsp::TextEdit>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<lsp::TextEdit> > >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
::_resize_and_rehash
          (HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
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



/* CowData<lsp::TextEdit>::_unref() */

void __thiscall CowData<lsp::TextEdit>::_unref(CowData<lsp::TextEdit> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
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
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Vector<lsp::TextEdit>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<lsp::TextEdit> > > >::operator[](String
   const&) */

undefined1 * __thiscall
HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
::operator[](HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
             *this,String *param_1)

{
  ulong __n;
  undefined8 *puVar1;
  long lVar2;
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
  undefined8 uVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  uint uVar40;
  long lVar41;
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  uint uVar44;
  uint uVar45;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = (ulong)uVar30;
  if (*(long *)(this + 8) == 0) {
LAB_00111c38:
    local_70 = 0;
    uVar34 = uVar38 * 4;
    __n = uVar38 * 8;
    uVar33 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar38 != uVar34);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,__n);
      }
LAB_00111b0a:
      uVar30 = (uint)uVar38;
      iVar35 = *(int *)(this + 0x2c);
      if (iVar35 != 0) {
LAB_00111b17:
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar40 = String::hash();
        uVar38 = CONCAT44(0,uVar29);
        lVar41 = *(long *)(this + 0x10);
        uVar31 = 1;
        if (uVar40 != 0) {
          uVar31 = uVar40;
        }
        uVar45 = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar31 * lVar2;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar37 = SUB168(auVar11 * auVar23,8);
        uVar40 = *(uint *)(lVar41 + lVar37 * 4);
        uVar44 = SUB164(auVar11 * auVar23,8);
        if (uVar40 != 0) {
          do {
            if (uVar31 == uVar40) {
              cVar28 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10),
                                          param_1);
              if (cVar28 != '\0') {
                pauVar32 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar44 * 8);
                if (*(long *)pauVar32[2] != 0) {
                  CowData<lsp::TextEdit>::_ref
                            ((CowData<lsp::TextEdit> *)(pauVar32 + 2),(CowData *)&local_70);
                  pauVar32 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar44 * 8);
                }
                goto LAB_001119bb;
              }
              lVar41 = *(long *)(this + 0x10);
            }
            uVar45 = uVar45 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar44 + 1) * lVar2;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            lVar37 = SUB168(auVar12 * auVar24,8);
            uVar40 = *(uint *)(lVar41 + lVar37 * 4);
            uVar44 = SUB164(auVar12 * auVar24,8);
          } while ((uVar40 != 0) &&
                  (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar40 * lVar2, auVar25._8_8_ = 0,
                  auVar25._0_8_ = uVar38, auVar14._8_8_ = 0,
                  auVar14._0_8_ = (ulong)((uVar29 + uVar44) - SUB164(auVar13 * auVar25,8)) * lVar2,
                  auVar26._8_8_ = 0, auVar26._0_8_ = uVar38, uVar45 <= SUB164(auVar14 * auVar26,8)))
          ;
        }
        uVar38 = (ulong)uVar30;
        iVar35 = *(int *)(this + 0x2c);
      }
      goto LAB_001117d8;
    }
    iVar35 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001117d8;
    uVar30 = 0;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00111b17;
LAB_001117fa:
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar32 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001119bb;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar31 = String::hash();
      uVar38 = CONCAT44(0,uVar30);
      lVar41 = *(long *)(this + 0x10);
      uVar29 = 1;
      if (uVar31 != 0) {
        uVar29 = uVar31;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar29 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar38;
      lVar37 = SUB168(auVar7 * auVar19,8);
      uVar31 = *(uint *)(lVar41 + lVar37 * 4);
      uVar40 = SUB164(auVar7 * auVar19,8);
      if (uVar31 == 0) {
        lVar36 = *(long *)(this + 8);
      }
      else {
        lVar36 = *(long *)(this + 8);
        uVar44 = 0;
        do {
          if (uVar29 == uVar31) {
            cVar28 = String::operator==((String *)(*(long *)(lVar36 + lVar37 * 8) + 0x10),param_1);
            if (cVar28 != '\0') {
              pauVar32 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar40 * 8);
              goto LAB_001119c7;
            }
            lVar41 = *(long *)(this + 0x10);
            lVar36 = *(long *)(this + 8);
          }
          uVar44 = uVar44 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar40 + 1) * lVar2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar38;
          lVar37 = SUB168(auVar8 * auVar20,8);
          uVar31 = *(uint *)(lVar41 + lVar37 * 4);
          uVar40 = SUB164(auVar8 * auVar20,8);
        } while ((uVar31 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar31 * lVar2, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar38, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar40 + uVar30) - SUB164(auVar9 * auVar21,8)) * lVar2,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar38, uVar44 <= SUB164(auVar10 * auVar22,8)));
      }
      local_70 = 0;
      uVar38 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar36 == 0) goto LAB_00111c38;
      goto LAB_00111b0a;
    }
    local_70 = 0;
    iVar35 = 0;
LAB_001117d8:
    if ((float)uVar38 * __LC27 < (float)(iVar35 + 1)) goto LAB_001117fa;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_48 = 0;
    pauVar32 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)pauVar32[1] = 0;
    *pauVar32 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar2 = local_58[0];
    uVar33 = local_68._0_8_;
    uVar27 = local_68._8_8_;
    local_48 = 0;
    pauVar32 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)pauVar32[1] = 0;
    *(undefined8 *)*pauVar32 = uVar33;
    *(undefined8 *)(*pauVar32 + 8) = uVar27;
    if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar32 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)pauVar32[2] = 0;
  CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar32;
  }
  else {
    *puVar1 = pauVar32;
    *(undefined8 **)(*pauVar32 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar32;
  uVar29 = String::hash();
  lVar2 = *(long *)(this + 0x10);
  uVar30 = 1;
  if (uVar29 != 0) {
    uVar30 = uVar29;
  }
  uVar34 = (ulong)uVar30;
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar29);
  lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar34 * lVar41;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar38;
  lVar36 = SUB168(auVar3 * auVar15,8);
  lVar37 = *(long *)(this + 8);
  puVar39 = (uint *)(lVar2 + lVar36 * 4);
  iVar35 = SUB164(auVar3 * auVar15,8);
  uVar31 = *puVar39;
  pauVar43 = pauVar32;
  if (uVar31 != 0) {
    uVar40 = 0;
    pauVar42 = pauVar32;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar31 * lVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar38;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar41;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar38;
      uVar30 = SUB164(auVar5 * auVar17,8);
      pauVar43 = pauVar42;
      if (uVar30 < uVar40) {
        *puVar39 = (uint)uVar34;
        uVar34 = (ulong)uVar31;
        puVar1 = (undefined8 *)(lVar37 + lVar36 * 8);
        pauVar43 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar42;
        uVar40 = uVar30;
      }
      uVar30 = (uint)uVar34;
      uVar40 = uVar40 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar41;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar36 = SUB168(auVar6 * auVar18,8);
      puVar39 = (uint *)(lVar2 + lVar36 * 4);
      iVar35 = SUB164(auVar6 * auVar18,8);
      uVar31 = *puVar39;
      pauVar42 = pauVar43;
    } while (uVar31 != 0);
  }
  *(undefined1 (**) [16])(lVar37 + lVar36 * 8) = pauVar43;
  *puVar39 = uVar30;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001119bb:
  CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)&local_70);
LAB_001119c7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar32[1] + 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Vector<lsp::TextEdit>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<lsp::TextEdit> > > >::insert(String const&,
   Vector<lsp::TextEdit> const&, bool) */

String * HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
         ::insert(String *param_1,Vector *param_2,bool param_3)

{
  undefined8 *puVar1;
  void *__s;
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
  long *plVar20;
  undefined8 uVar21;
  void *__s_00;
  ulong uVar22;
  long in_RCX;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined7 in_register_00000011;
  String *pSVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  uint uVar30;
  char in_R8B;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  long *plVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  uint local_98;
  long local_58 [2];
  long local_48;
  long local_40;
  
  pSVar26 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar33 = (ulong)uVar23;
    uVar22 = uVar33 * 4;
    uVar38 = uVar33 * 8;
    uVar21 = Memory::alloc_static(uVar22,false);
    *(undefined8 *)(param_2 + 0x10) = uVar21;
    __s_00 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar22))) {
        uVar22 = 0;
        do {
          *(undefined4 *)((long)__s + uVar22 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar22 * 8) = 0;
          uVar22 = uVar22 + 1;
        } while (uVar33 != uVar22);
      }
      else {
        memset(__s,0,uVar22);
        memset(__s_00,0,uVar38);
      }
      goto LAB_00111e1f;
    }
    iVar24 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00111e2f;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00112098;
LAB_00111e51:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar20 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112049;
    }
    _resize_and_rehash((HashMap<String,Vector<lsp::TextEdit>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<lsp::TextEdit>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00111e1f:
    iVar24 = *(int *)(param_2 + 0x2c);
    if (iVar24 != 0) {
LAB_00112098:
      uVar19 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar31 = String::hash();
      uVar22 = CONCAT44(0,uVar19);
      lVar32 = *(long *)(param_2 + 0x10);
      uVar30 = 1;
      if (uVar31 != 0) {
        uVar30 = uVar31;
      }
      uVar36 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar30 * lVar37;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar22;
      lVar28 = SUB168(auVar6 * auVar14,8);
      uVar31 = *(uint *)(lVar32 + lVar28 * 4);
      uVar25 = SUB164(auVar6 * auVar14,8);
      if (uVar31 != 0) {
        do {
          if (uVar30 == uVar31) {
            cVar18 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar28 * 8) + 0x10),
                                        pSVar26);
            if (cVar18 != '\0') {
              plVar20 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar25 * 8);
              if (plVar20[4] != *(long *)(in_RCX + 8)) {
                CowData<lsp::TextEdit>::_ref
                          ((CowData<lsp::TextEdit> *)(plVar20 + 4),(CowData *)(in_RCX + 8));
                plVar20 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar25 * 8);
              }
              goto LAB_00112049;
            }
            lVar32 = *(long *)(param_2 + 0x10);
          }
          uVar36 = uVar36 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar25 + 1) * lVar37;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar22;
          lVar28 = SUB168(auVar7 * auVar15,8);
          uVar31 = *(uint *)(lVar32 + lVar28 * 4);
          uVar25 = SUB164(auVar7 * auVar15,8);
        } while ((uVar31 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar31 * lVar37, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar22, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar19 + uVar25) - SUB164(auVar8 * auVar16,8)) * lVar37,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar22, uVar36 <= SUB164(auVar9 * auVar17,8)));
      }
      iVar24 = *(int *)(param_2 + 0x2c);
    }
LAB_00111e2f:
    if ((float)uVar23 * __LC27 < (float)(iVar24 + 1)) goto LAB_00111e51;
  }
  local_58[0] = 0;
  if (*(long *)pSVar26 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)pSVar26);
  }
  local_48 = 0;
  lVar37 = *(long *)(in_RCX + 8);
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<lsp::TextEdit>::_ref((CowData<lsp::TextEdit> *)&local_48,(CowData *)(in_RCX + 8));
    lVar37 = local_48;
  }
  plVar20 = (long *)operator_new(0x28,"");
  plVar20[2] = 0;
  *plVar20 = 0;
  plVar20[1] = 0;
  if (local_58[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar20 + 2),(CowData *)local_58);
  }
  plVar20[4] = 0;
  if (lVar37 != 0) {
    CowData<lsp::TextEdit>::_ref((CowData<lsp::TextEdit> *)(plVar20 + 4),(CowData *)&local_48);
  }
  CowData<lsp::TextEdit>::_unref((CowData<lsp::TextEdit> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar20;
    *(long **)(param_2 + 0x20) = plVar20;
  }
  else if (in_R8B == '\0') {
    *puVar1 = plVar20;
    plVar20[1] = (long)puVar1;
    *(long **)(param_2 + 0x20) = plVar20;
  }
  else {
    lVar37 = *(long *)(param_2 + 0x18);
    *(long **)(lVar37 + 8) = plVar20;
    *plVar20 = lVar37;
    *(long **)(param_2 + 0x18) = plVar20;
  }
  uVar19 = String::hash();
  lVar37 = *(long *)(param_2 + 0x10);
  uVar23 = 1;
  if (uVar19 != 0) {
    uVar23 = uVar19;
  }
  uVar38 = (ulong)uVar23;
  uVar19 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar22 = CONCAT44(0,uVar19);
  lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar38 * lVar32;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar22;
  lVar27 = SUB168(auVar2 * auVar10,8);
  lVar28 = *(long *)(param_2 + 8);
  puVar29 = (uint *)(lVar37 + lVar27 * 4);
  iVar24 = SUB164(auVar2 * auVar10,8);
  uVar30 = *puVar29;
  plVar35 = plVar20;
  if (uVar30 != 0) {
    uVar31 = 0;
    plVar34 = plVar20;
    do {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar30 * lVar32;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar22;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)((uVar19 + iVar24) - SUB164(auVar3 * auVar11,8)) * lVar32;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar22;
      local_98 = SUB164(auVar4 * auVar12,8);
      plVar35 = plVar34;
      if (local_98 < uVar31) {
        *puVar29 = (uint)uVar38;
        uVar38 = (ulong)uVar30;
        puVar1 = (undefined8 *)(lVar28 + lVar27 * 8);
        plVar35 = (long *)*puVar1;
        *puVar1 = plVar34;
        uVar31 = local_98;
      }
      uVar23 = (uint)uVar38;
      uVar31 = uVar31 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)(iVar24 + 1) * lVar32;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar22;
      lVar27 = SUB168(auVar5 * auVar13,8);
      puVar29 = (uint *)(lVar37 + lVar27 * 4);
      iVar24 = SUB164(auVar5 * auVar13,8);
      uVar30 = *puVar29;
      plVar34 = plVar35;
    } while (uVar30 != 0);
  }
  *(long **)(lVar28 + lVar27 * 8) = plVar35;
  *puVar29 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00112049:
  *(long **)param_1 = plVar20;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<lsp::TextEdit>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<lsp::TextEdit>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<lsp::DocumentSymbol>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<lsp::DocumentSymbol>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<lsp::Location>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<lsp::Location>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<lsp::ParameterInformation>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<lsp::ParameterInformation>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<lsp::SignatureInformation>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<lsp::SignatureInformation>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<lsp::DocumentSymbol>::_unref() */

void __thiscall CowData<lsp::DocumentSymbol>::_unref(CowData<lsp::DocumentSymbol> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  CowData<char32_t> *this_01;
  CowData<char32_t> *this_02;
  
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
        this_00 = (CowData<char32_t> *)(lVar2 + 0x10);
        this_02 = (CowData<char32_t> *)(lVar2 + 8);
        lVar6 = 0;
        this_01 = (CowData<char32_t> *)(lVar2 + 0x48);
        do {
          _unref((CowData<lsp::DocumentSymbol> *)(this_00 + 0x50));
          if (*(long *)(this_00 + 0x40) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x40) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x40);
              *(undefined8 *)(this_00 + 0x40) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref(this_01);
          if (*(long *)(this_00 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 8);
              *(undefined8 *)(this_00 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref(this_00);
          CowData<char32_t>::_unref(this_02);
          if (*(long *)(this_00 + -0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + -0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + -0x10);
              *(undefined8 *)(this_00 + -0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          this_00 = this_00 + 0x68;
          this_02 = this_02 + 0x68;
          this_01 = this_01 + 0x68;
        } while (lVar3 != lVar6);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* lsp::DocumentSymbol::~DocumentSymbol() */

void __thiscall lsp::DocumentSymbol::~DocumentSymbol(DocumentSymbol *this)

{
  CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol> *)(this + 0x60));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x50));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* void memdelete<ExtendGDScriptParser>(ExtendGDScriptParser*) */

void memdelete<ExtendGDScriptParser>(ExtendGDScriptParser *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  Array::~Array((Array *)(param_1 + 0xb20));
  pvVar12 = *(void **)(param_1 + 0xaf8);
  if (pvVar12 != (void *)0x0) {
    if (*(int *)(param_1 + 0xb1c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xb18) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb1c) = 0;
        *(undefined1 (*) [16])(param_1 + 0xb08) = (undefined1  [16])0x0;
      }
      else {
        lVar15 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0xb00) + lVar15) != 0) {
            pvVar12 = *(void **)((long)pvVar12 + lVar15 * 2);
            *(int *)(*(long *)(param_1 + 0xb00) + lVar15) = 0;
            pvVar11 = *(void **)((long)pvVar12 + 0x20);
            if (pvVar11 != (void *)0x0) {
              if (*(int *)((long)pvVar12 + 0x44) != 0) {
                uVar4 = *(uint *)(hash_table_size_primes +
                                 (ulong)*(uint *)((long)pvVar12 + 0x40) * 4);
                if (uVar4 == 0) {
                  *(undefined4 *)((long)pvVar12 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar12 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar9 = 0;
                  do {
                    piVar8 = (int *)(*(long *)((long)pvVar12 + 0x28) + lVar9);
                    if (*piVar8 != 0) {
                      pvVar11 = *(void **)((long)pvVar11 + lVar9 * 2);
                      *piVar8 = 0;
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar11 + 0x10));
                      Memory::free_static(pvVar11,false);
                      pvVar11 = *(void **)((long)pvVar12 + 0x20);
                      *(undefined8 *)((long)pvVar11 + lVar9 * 2) = 0;
                    }
                    lVar9 = lVar9 + 4;
                  } while (lVar9 != (ulong)uVar4 * 4);
                  *(undefined4 *)((long)pvVar12 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar12 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar11 == (void *)0x0) goto LAB_0011262d;
                }
              }
              Memory::free_static(pvVar11,false);
              Memory::free_static(*(void **)((long)pvVar12 + 0x28),false);
            }
LAB_0011262d:
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar12 + 0x10));
            Memory::free_static(pvVar12,false);
            pvVar12 = *(void **)(param_1 + 0xaf8);
            *(undefined8 *)((long)pvVar12 + lVar15 * 2) = 0;
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != (ulong)uVar3 * 4);
        *(undefined4 *)(param_1 + 0xb1c) = 0;
        *(undefined1 (*) [16])(param_1 + 0xb08) = (undefined1  [16])0x0;
        if (pvVar12 == (void *)0x0) goto LAB_00112685;
      }
    }
    Memory::free_static(pvVar12,false);
    Memory::free_static(*(void **)(param_1 + 0xb00),false);
  }
LAB_00112685:
  pvVar12 = *(void **)(param_1 + 0xac8);
  if (pvVar12 != (void *)0x0) {
    if (*(int *)(param_1 + 0xaec) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xae8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xaec) = 0;
        *(undefined1 (*) [16])(param_1 + 0xad8) = (undefined1  [16])0x0;
      }
      else {
        lVar15 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0xad0) + lVar15) != 0) {
            pvVar12 = *(void **)((long)pvVar12 + lVar15 * 2);
            *(int *)(*(long *)(param_1 + 0xad0) + lVar15) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar12 + 0x10));
            Memory::free_static(pvVar12,false);
            pvVar12 = *(void **)(param_1 + 0xac8);
            *(undefined8 *)((long)pvVar12 + lVar15 * 2) = 0;
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != (ulong)uVar3 << 2);
        *(undefined4 *)(param_1 + 0xaec) = 0;
        *(undefined1 (*) [16])(param_1 + 0xad8) = (undefined1  [16])0x0;
        if (pvVar12 == (void *)0x0) goto LAB_0011272b;
      }
    }
    Memory::free_static(pvVar12,false);
    Memory::free_static(*(void **)(param_1 + 0xad0),false);
  }
LAB_0011272b:
  List<lsp::DocumentLink,DefaultAllocator>::~List
            ((List<lsp::DocumentLink,DefaultAllocator> *)(param_1 + 0xab8));
  if (*(long *)(param_1 + 0xab0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0xab0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar15 = *(long *)(param_1 + 0xab0);
      if (lVar15 == 0) {
LAB_00112948:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar9 = *(long *)(lVar15 + -8);
      lVar13 = 0;
      *(undefined8 *)(param_1 + 0xab0) = 0;
      lVar10 = lVar15;
      if (lVar9 != 0) {
        do {
          if (*(long *)(lVar10 + 0x30) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar10 + 0x30) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              plVar1 = *(long **)(lVar10 + 0x30);
              if (plVar1 == (long *)0x0) goto LAB_00112948;
              lVar5 = plVar1[-1];
              lVar16 = 0;
              *(undefined8 *)(lVar10 + 0x30) = 0;
              plVar14 = plVar1;
              if (lVar5 != 0) {
                do {
                  if (plVar14[3] != 0) {
                    LOCK();
                    plVar2 = (long *)(plVar14[3] + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      lVar6 = plVar14[3];
                      plVar14[3] = 0;
                      Memory::free_static((void *)(lVar6 + -0x10),false);
                    }
                  }
                  if (*plVar14 != 0) {
                    LOCK();
                    plVar2 = (long *)(*plVar14 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      lVar6 = *plVar14;
                      *plVar14 = 0;
                      Memory::free_static((void *)(lVar6 + -0x10),false);
                    }
                  }
                  lVar16 = lVar16 + 1;
                  plVar14 = plVar14 + 4;
                } while (lVar5 != lVar16);
              }
              Memory::free_static(plVar1 + -2,false);
            }
          }
          lVar13 = lVar13 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)(lVar10 + 0x20));
          CowData<char32_t>::_unref((CowData<char32_t> *)(lVar10 + 0x18));
          lVar10 = lVar10 + 0x38;
        } while (lVar9 != lVar13);
      }
      Memory::free_static((void *)(lVar15 + -0x10),false);
    }
  }
  lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol *)(param_1 + 0xa40));
  CowData<String>::_unref((CowData<String> *)(param_1 + 0xa38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0xa28));
  GDScriptParser::~GDScriptParser((GDScriptParser *)param_1);
  Memory::free_static(param_1,false);
  return;
}



/* lsp::DocumentSymbol::DocumentSymbol(lsp::DocumentSymbol const&) */

void __thiscall lsp::DocumentSymbol::DocumentSymbol(DocumentSymbol *this,DocumentSymbol *param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined2 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x48) = 0;
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined2 *)(this + 0x24) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar5;
  *(undefined8 *)(this + 0x40) = uVar6;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    CowData<lsp::DocumentSymbol>::_ref
              ((CowData<lsp::DocumentSymbol> *)(this + 0x60),(CowData *)(param_1 + 0x60));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, lsp::DocumentSymbol, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   lsp::DocumentSymbol> > >::insert(StringName const&, lsp::DocumentSymbol const&, bool) */

StringName *
HashMap<StringName,lsp::DocumentSymbol,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,lsp::DocumentSymbol>>>
::insert(StringName *param_1,DocumentSymbol *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  uint uVar4;
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
  undefined8 uVar30;
  undefined8 uVar31;
  long *plVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  void *__s_00;
  long lVar37;
  void *pvVar38;
  CowData *in_RCX;
  int iVar39;
  undefined7 in_register_00000011;
  StringName *pSVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  undefined8 uVar45;
  char in_R8B;
  uint uVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  long *plVar50;
  long in_FS_OFFSET;
  long *local_108;
  long local_b8;
  DocumentSymbol local_b0 [112];
  long local_40;
  
  pSVar40 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar44 = (ulong)uVar33;
    uVar35 = uVar44 * 4;
    uVar48 = uVar44 * 8;
    uVar36 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(param_2 + 0x10) = uVar36;
    pvVar38 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(param_2 + 8) = pvVar38;
    if (uVar33 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)pvVar38 + uVar48)) && (pvVar38 < (void *)((long)pvVar5 + uVar35))
         ) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar35 * 4) = 0;
          *(undefined8 *)((long)pvVar38 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar44 != uVar35);
      }
      else {
        memset(pvVar5,0,uVar35);
        memset(pvVar38,0,uVar48);
      }
      goto LAB_00112ab5;
    }
    iVar39 = *(int *)(param_2 + 0x2c);
    if (pvVar38 == (void *)0x0) goto LAB_00112c7f;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00112ac1;
LAB_00112ca5:
    uVar33 = *(uint *)(param_2 + 0x28);
    if (uVar33 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_108 = (long *)0x0;
      goto LAB_0011303c;
    }
    uVar35 = (ulong)(uVar33 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar33 * 4);
    if (uVar33 + 1 < 2) {
      uVar35 = 2;
    }
    uVar33 = *(uint *)(hash_table_size_primes + uVar35 * 4);
    uVar44 = (ulong)uVar33;
    *(int *)(param_2 + 0x28) = (int)uVar35;
    pvVar38 = *(void **)(param_2 + 8);
    uVar35 = uVar44 * 4;
    uVar48 = uVar44 * 8;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar36 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(param_2 + 0x10) = uVar36;
    __s_00 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar33 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar48)) && (__s_00 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar44);
      }
      else {
        memset(__s,0,uVar35);
        memset(__s_00,0,uVar48);
      }
    }
    if (uVar4 != 0) {
      uVar35 = 0;
      do {
        uVar33 = *(uint *)((long)pvVar5 + uVar35 * 4);
        if (uVar33 != 0) {
          lVar37 = *(long *)(param_2 + 0x10);
          uVar46 = 0;
          uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar48 = CONCAT44(0,uVar34);
          lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar33 * lVar41;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar48;
          lVar42 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar37 + lVar42 * 4);
          iVar39 = SUB164(auVar10 * auVar22,8);
          uVar47 = *puVar1;
          uVar36 = *(undefined8 *)((long)pvVar38 + uVar35 * 8);
          while (uVar47 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar47 * lVar41;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar48;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar34 + iVar39) - SUB164(auVar11 * auVar23,8)) * lVar41;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar48;
            uVar49 = SUB164(auVar12 * auVar24,8);
            uVar45 = uVar36;
            if (uVar49 < uVar46) {
              *puVar1 = uVar33;
              puVar2 = (undefined8 *)((long)__s_00 + lVar42 * 8);
              uVar45 = *puVar2;
              *puVar2 = uVar36;
              uVar33 = uVar47;
              uVar46 = uVar49;
            }
            uVar46 = uVar46 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar39 + 1) * lVar41;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar48;
            lVar42 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar37 + lVar42 * 4);
            iVar39 = SUB164(auVar13 * auVar25,8);
            uVar36 = uVar45;
            uVar47 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar42 * 8) = uVar36;
          *puVar1 = uVar33;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar35 = uVar35 + 1;
      } while (uVar4 != uVar35);
      Memory::free_static(pvVar38,false);
      Memory::free_static(pvVar5,false);
    }
  }
  else {
LAB_00112ab5:
    iVar39 = *(int *)(param_2 + 0x2c);
    if (iVar39 != 0) {
LAB_00112ac1:
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar35 = CONCAT44(0,uVar4);
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar40 == 0) {
        uVar34 = StringName::get_empty_hash();
      }
      else {
        uVar34 = *(uint *)(*(long *)pSVar40 + 0x20);
      }
      if (uVar34 == 0) {
        uVar34 = 1;
      }
      uVar49 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar34 * lVar37;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar35;
      lVar41 = SUB168(auVar6 * auVar18,8);
      uVar47 = *(uint *)(*(long *)(param_2 + 0x10) + lVar41 * 4);
      uVar46 = SUB164(auVar6 * auVar18,8);
      if (uVar47 != 0) {
        do {
          if ((uVar34 == uVar47) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar41 * 8) + 0x10) == *(long *)pSVar40))
          {
            lVar37 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar46 * 8);
            if (*(long *)(lVar37 + 0x18) != *(long *)in_RCX) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar37 + 0x18),in_RCX);
            }
            if (*(long *)(lVar37 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar37 + 0x20),in_RCX + 8);
            }
            if (*(long *)(lVar37 + 0x28) != *(long *)(in_RCX + 0x10)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar37 + 0x28),in_RCX + 0x10);
            }
            if (*(long *)(lVar37 + 0x30) != *(long *)(in_RCX + 0x18)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar37 + 0x30),in_RCX + 0x18);
            }
            uVar36 = *(undefined8 *)(in_RCX + 0x28);
            uVar45 = *(undefined8 *)(in_RCX + 0x30);
            uVar30 = *(undefined8 *)(in_RCX + 0x38);
            uVar31 = *(undefined8 *)(in_RCX + 0x40);
            *(undefined4 *)(lVar37 + 0x38) = *(undefined4 *)(in_RCX + 0x20);
            uVar3 = *(undefined2 *)(in_RCX + 0x24);
            *(undefined8 *)(lVar37 + 0x40) = uVar36;
            *(undefined8 *)(lVar37 + 0x48) = uVar45;
            *(undefined2 *)(lVar37 + 0x3c) = uVar3;
            lVar41 = *(long *)(in_RCX + 0x48);
            *(undefined8 *)(lVar37 + 0x50) = uVar30;
            *(undefined8 *)(lVar37 + 0x58) = uVar31;
            if (*(long *)(lVar37 + 0x60) != lVar41) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar37 + 0x60),in_RCX + 0x48);
            }
            if (*(long *)(lVar37 + 0x68) != *(long *)(in_RCX + 0x50)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar37 + 0x68),in_RCX + 0x50);
            }
            if (*(long *)(lVar37 + 0x78) != *(long *)(in_RCX + 0x60)) {
              CowData<lsp::DocumentSymbol>::_ref
                        ((CowData<lsp::DocumentSymbol> *)(lVar37 + 0x78),in_RCX + 0x60);
            }
            local_108 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar46 * 8);
            goto LAB_0011303c;
          }
          uVar49 = uVar49 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar46 + 1) * lVar37;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar35;
          lVar41 = SUB168(auVar7 * auVar19,8);
          uVar47 = *(uint *)(*(long *)(param_2 + 0x10) + lVar41 * 4);
          uVar46 = SUB164(auVar7 * auVar19,8);
        } while ((uVar47 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar47 * lVar37, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar35, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar4 + uVar46) - SUB164(auVar8 * auVar20,8)) * lVar37,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar35, uVar49 <= SUB164(auVar9 * auVar21,8)));
      }
      iVar39 = *(int *)(param_2 + 0x2c);
    }
LAB_00112c7f:
    if ((float)uVar33 * __LC27 < (float)(iVar39 + 1)) goto LAB_00112ca5;
  }
  StringName::StringName((StringName *)&local_b8,pSVar40);
  lsp::DocumentSymbol::DocumentSymbol(local_b0,(DocumentSymbol *)in_RCX);
  local_108 = (long *)operator_new(0x80,"");
  *local_108 = 0;
  local_108[1] = 0;
  StringName::StringName((StringName *)(local_108 + 2),(StringName *)&local_b8);
  lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol *)(local_108 + 3),local_b0);
  lsp::DocumentSymbol::~DocumentSymbol(local_b0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_108;
    *(long **)(param_2 + 0x20) = local_108;
LAB_00112f53:
    lVar37 = *(long *)pSVar40;
    if (lVar37 != 0) goto LAB_00112f64;
LAB_001130a5:
    uVar33 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar2 = local_108;
      local_108[1] = (long)puVar2;
      *(long **)(param_2 + 0x20) = local_108;
      goto LAB_00112f53;
    }
    lVar37 = *(long *)(param_2 + 0x18);
    *(long **)(lVar37 + 8) = local_108;
    *local_108 = lVar37;
    *(long **)(param_2 + 0x18) = local_108;
    lVar37 = *(long *)pSVar40;
    if (lVar37 == 0) goto LAB_001130a5;
LAB_00112f64:
    uVar33 = *(uint *)(lVar37 + 0x20);
  }
  lVar37 = *(long *)(param_2 + 0x10);
  if (uVar33 == 0) {
    uVar33 = 1;
  }
  uVar35 = (ulong)uVar33;
  uVar47 = 0;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar48 = CONCAT44(0,uVar4);
  lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar35 * lVar41;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar48;
  lVar43 = SUB168(auVar14 * auVar26,8);
  lVar42 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar37 + lVar43 * 4);
  iVar39 = SUB164(auVar14 * auVar26,8);
  uVar34 = *puVar1;
  plVar32 = local_108;
  while (uVar34 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar34 * lVar41;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar48;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar4 + iVar39) - SUB164(auVar15 * auVar27,8)) * lVar41;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar48;
    uVar33 = SUB164(auVar16 * auVar28,8);
    plVar50 = plVar32;
    if (uVar33 < uVar47) {
      *puVar1 = (uint)uVar35;
      uVar35 = (ulong)uVar34;
      puVar2 = (undefined8 *)(lVar42 + lVar43 * 8);
      plVar50 = (long *)*puVar2;
      *puVar2 = plVar32;
      uVar47 = uVar33;
    }
    uVar33 = (uint)uVar35;
    uVar47 = uVar47 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar39 + 1) * lVar41;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar48;
    lVar43 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar37 + lVar43 * 4);
    iVar39 = SUB164(auVar17 * auVar29,8);
    plVar32 = plVar50;
    uVar34 = *puVar1;
  }
  *(long **)(lVar42 + lVar43 * 8) = plVar32;
  *puVar1 = uVar33;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011303c:
  *(long **)param_1 = local_108;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
::_resize_and_rehash
          (HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
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
/* HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > >::insert(String const&, lsp::DocumentSymbol const* const&, bool)
    */

String * HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
         ::insert(String *param_1,DocumentSymbol **param_2,bool param_3)

{
  long lVar1;
  DocumentSymbol *pDVar2;
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
  char cVar19;
  uint uVar20;
  uint uVar21;
  DocumentSymbol *pDVar22;
  ulong uVar23;
  undefined8 *in_RCX;
  int iVar24;
  uint uVar25;
  undefined7 in_register_00000011;
  String *pSVar26;
  long lVar27;
  DocumentSymbol *pDVar28;
  uint uVar29;
  char in_R8B;
  uint uVar30;
  ulong uVar31;
  undefined8 uVar32;
  DocumentSymbol *pDVar33;
  DocumentSymbol *pDVar34;
  uint uVar35;
  ulong uVar36;
  long in_FS_OFFSET;
  DocumentSymbol *pDStack_a0;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar26 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (DocumentSymbol *)0x0) {
    uVar31 = (ulong)uVar21;
    uVar23 = uVar31 * 4;
    uVar36 = uVar31 * 8;
    pDVar22 = (DocumentSymbol *)Memory::alloc_static(uVar23,false);
    param_2[2] = pDVar22;
    pDVar22 = (DocumentSymbol *)Memory::alloc_static(uVar36,false);
    param_2[1] = pDVar22;
    if (uVar21 != 0) {
      pDVar28 = param_2[2];
      if ((pDVar28 < pDVar22 + uVar36) && (pDVar22 < pDVar28 + uVar23)) {
        uVar23 = 0;
        do {
          *(undefined4 *)(pDVar28 + uVar23 * 4) = 0;
          *(undefined8 *)(pDVar22 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar31 != uVar23);
      }
      else {
        memset(pDVar28,0,uVar23);
        memset(pDVar22,0,uVar36);
      }
      goto LAB_001134af;
    }
    iVar24 = *(int *)((long)param_2 + 0x2c);
    if (pDVar22 == (DocumentSymbol *)0x0) goto LAB_001134bf;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_00113708;
LAB_001134e1:
    if (*(int *)(param_2 + 5) == 0x1c) {
      pDStack_a0 = (DocumentSymbol *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001136b8;
    }
    _resize_and_rehash((HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  else {
LAB_001134af:
    iVar24 = *(int *)((long)param_2 + 0x2c);
    if (iVar24 != 0) {
LAB_00113708:
      uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar30 = String::hash();
      uVar23 = CONCAT44(0,uVar20);
      pDVar22 = param_2[2];
      uVar29 = 1;
      if (uVar30 != 0) {
        uVar29 = uVar30;
      }
      uVar35 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar29 * lVar1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar23;
      lVar27 = SUB168(auVar7 * auVar15,8);
      uVar30 = *(uint *)(pDVar22 + lVar27 * 4);
      uVar25 = SUB164(auVar7 * auVar15,8);
      if (uVar30 != 0) {
        do {
          if (uVar29 == uVar30) {
            cVar19 = String::operator==((String *)(*(long *)(param_2[1] + lVar27 * 8) + 0x10),
                                        pSVar26);
            if (cVar19 != '\0') {
              pDStack_a0 = *(DocumentSymbol **)(param_2[1] + (ulong)uVar25 * 8);
              *(undefined8 *)(pDStack_a0 + 0x18) = *in_RCX;
              goto LAB_001136b8;
            }
            pDVar22 = param_2[2];
          }
          uVar35 = uVar35 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar25 + 1) * lVar1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar23;
          lVar27 = SUB168(auVar8 * auVar16,8);
          uVar30 = *(uint *)(pDVar22 + lVar27 * 4);
          uVar25 = SUB164(auVar8 * auVar16,8);
        } while ((uVar30 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar30 * lVar1, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar23, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar20 + uVar25) - SUB164(auVar9 * auVar17,8)) * lVar1,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar23, uVar35 <= SUB164(auVar10 * auVar18,8)));
      }
      iVar24 = *(int *)((long)param_2 + 0x2c);
    }
LAB_001134bf:
    if ((float)uVar21 * __LC27 < (float)(iVar24 + 1)) goto LAB_001134e1;
  }
  local_58 = 0;
  if (*(long *)pSVar26 == 0) {
    uVar32 = *in_RCX;
    local_50 = uVar32;
    pDStack_a0 = (DocumentSymbol *)operator_new(0x20,"");
    *(undefined8 *)(pDStack_a0 + 0x10) = 0;
    *(undefined1 (*) [16])pDStack_a0 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar26);
    lVar1 = local_58;
    uVar32 = *in_RCX;
    local_50 = uVar32;
    pDStack_a0 = (DocumentSymbol *)operator_new(0x20,"");
    *(undefined8 *)(pDStack_a0 + 0x10) = 0;
    *(undefined8 *)pDStack_a0 = 0;
    *(undefined8 *)(pDStack_a0 + 8) = 0;
    if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pDStack_a0 + 0x10),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pDStack_a0 + 0x18) = uVar32;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pDVar22 = param_2[4];
  if (pDVar22 == (DocumentSymbol *)0x0) {
    param_2[3] = pDStack_a0;
    param_2[4] = pDStack_a0;
  }
  else if (in_R8B == '\0') {
    *(DocumentSymbol **)pDVar22 = pDStack_a0;
    *(DocumentSymbol **)(pDStack_a0 + 8) = pDVar22;
    param_2[4] = pDStack_a0;
  }
  else {
    pDVar22 = param_2[3];
    *(DocumentSymbol **)(pDVar22 + 8) = pDStack_a0;
    *(DocumentSymbol **)pDStack_a0 = pDVar22;
    param_2[3] = pDStack_a0;
  }
  uVar20 = String::hash();
  pDVar22 = param_2[2];
  uVar21 = 1;
  if (uVar20 != 0) {
    uVar21 = uVar20;
  }
  uVar36 = (ulong)uVar21;
  uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar23 = CONCAT44(0,uVar20);
  lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar36 * lVar1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar23;
  lVar27 = SUB168(auVar3 * auVar11,8);
  pDVar2 = param_2[1];
  pDVar28 = pDVar22 + lVar27 * 4;
  iVar24 = SUB164(auVar3 * auVar11,8);
  uVar29 = *(uint *)pDVar28;
  pDVar34 = pDStack_a0;
  if (uVar29 != 0) {
    uVar30 = 0;
    pDVar33 = pDStack_a0;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)((uVar20 + iVar24) - SUB164(auVar4 * auVar12,8)) * lVar1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar23;
      uVar21 = SUB164(auVar5 * auVar13,8);
      pDVar34 = pDVar33;
      if (uVar21 < uVar30) {
        *(uint *)pDVar28 = (uint)uVar36;
        uVar36 = (ulong)uVar29;
        pDVar28 = pDVar2 + lVar27 * 8;
        pDVar34 = *(DocumentSymbol **)pDVar28;
        *(DocumentSymbol **)pDVar28 = pDVar33;
        uVar30 = uVar21;
      }
      uVar21 = (uint)uVar36;
      uVar30 = uVar30 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)(iVar24 + 1) * lVar1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar23;
      lVar27 = SUB168(auVar6 * auVar14,8);
      pDVar28 = pDVar22 + lVar27 * 4;
      iVar24 = SUB164(auVar6 * auVar14,8);
      uVar29 = *(uint *)pDVar28;
      pDVar33 = pDVar34;
    } while (uVar29 != 0);
  }
  *(DocumentSymbol **)(pDVar2 + lVar27 * 8) = pDVar34;
  *(uint *)pDVar28 = uVar21;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_001136b8:
  *(DocumentSymbol **)param_1 = pDStack_a0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<String, lsp::DocumentSymbol const*,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, lsp::DocumentSymbol const*> > > > >
   >::insert(StringName const&, HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > > const&, bool) */

StringName *
HashMap<StringName,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>>>>
::insert(StringName *param_1,HashMap *param_2,bool param_3)

{
  HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
  *this;
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
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  long *plVar33;
  long lVar34;
  void *pvVar35;
  HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
  *in_RCX;
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
  long *plVar48;
  long in_FS_OFFSET;
  String local_90 [8];
  undefined1 local_88 [16];
  long local_78;
  DocumentSymbol *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar29;
    uVar31 = uVar41 * 4;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar32;
    uVar45 = uVar41 * 8;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar29 != 0) {
      pvVar3 = *(void **)(param_2 + 0x10);
      if ((pvVar3 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar3 + uVar31))
         ) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar31 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar41 != uVar31);
      }
      else {
        memset(pvVar3,0,uVar31);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_00113a47;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_00113c2b;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00113a57;
LAB_00113c51:
    uVar29 = *(uint *)(param_2 + 0x28);
    if (uVar29 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      plVar33 = (long *)0x0;
      goto LAB_0011424e;
    }
    uVar31 = (ulong)(uVar29 + 1);
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar29 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar29 + 1 < 2) {
      uVar31 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar31;
    pvVar35 = *(void **)(param_2 + 8);
    uVar41 = (ulong)uVar29;
    uVar31 = uVar41 * 4;
    pvVar3 = *(void **)(param_2 + 0x10);
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar32;
    uVar45 = uVar41 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar29 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar41 != uVar31);
      }
      else {
        memset(__s,0,uVar31);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar28 != 0) {
      uVar31 = 0;
      do {
        uVar29 = *(uint *)((long)pvVar3 + uVar31 * 4);
        if (uVar29 != 0) {
          uVar43 = 0;
          lVar34 = *(long *)(param_2 + 0x10);
          uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar30);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar29 * lVar38;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar45;
          lVar39 = SUB168(auVar8 * auVar20,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar8 * auVar20,8);
          uVar44 = *puVar1;
          uVar32 = *(undefined8 *)((long)pvVar35 + uVar31 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar38;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar45;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar30 + iVar36) - SUB164(auVar9 * auVar21,8)) * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            uVar46 = SUB164(auVar10 * auVar22,8);
            uVar42 = uVar32;
            if (uVar46 < uVar43) {
              *puVar1 = uVar29;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar32;
              uVar29 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            lVar39 = SUB168(auVar11 * auVar23,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar11 * auVar23,8);
            uVar32 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar32;
          *puVar1 = uVar29;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar31 = uVar31 + 1;
      } while (uVar28 != uVar31);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
LAB_00113a47:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_00113a57:
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar31 = CONCAT44(0,uVar28);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar30 = StringName::get_empty_hash();
      }
      else {
        uVar30 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      uVar46 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar30 * lVar34;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar31;
      lVar38 = SUB168(auVar4 * auVar16,8);
      uVar43 = SUB164(auVar4 * auVar16,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      if (uVar44 != 0) {
        do {
          if ((uVar30 == uVar44) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            plVar33 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            this = (HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
                    *)(plVar33 + 3);
            if (in_RCX != this) {
              uVar29 = *(uint *)(plVar33 + 8);
              uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar29 * 4);
              if ((*(int *)((long)plVar33 + 0x44) != 0) && (plVar33[4] != 0)) {
                if (uVar28 != 0) {
                  lVar34 = 0;
                  do {
                    if (*(int *)(plVar33[5] + lVar34) != 0) {
                      *(int *)(plVar33[5] + lVar34) = 0;
                      pvVar35 = *(void **)(plVar33[4] + lVar34 * 2);
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar35 + 0x10));
                      Memory::free_static(pvVar35,false);
                      *(undefined8 *)(plVar33[4] + lVar34 * 2) = 0;
                    }
                    lVar34 = lVar34 + 4;
                  } while (lVar34 != (ulong)uVar28 * 4);
                  uVar29 = *(uint *)(plVar33 + 8);
                  uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar29 * 4);
                }
                *(undefined4 *)((long)plVar33 + 0x44) = 0;
                *(undefined1 (*) [16])(plVar33 + 6) = (undefined1  [16])0x0;
              }
              if (uVar28 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4))
              {
                if (uVar29 != 0x1c) {
                  uVar31 = (ulong)uVar29;
                  do {
                    uVar28 = (int)uVar31 + 1;
                    uVar31 = (ulong)uVar28;
                    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
                        *(uint *)(hash_table_size_primes + uVar31 * 4)) {
                      if (uVar28 != uVar29) {
                        if (plVar33[4] == 0) {
                          *(uint *)(plVar33 + 8) = uVar28;
                        }
                        else {
                          HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
                          ::_resize_and_rehash(this,uVar28);
                        }
                      }
                      goto LAB_00113bca;
                    }
                  } while (uVar28 != 0x1c);
                }
                _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                                 "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                                 ,0,0,0);
              }
LAB_00113bca:
              if (*(long *)(in_RCX + 8) != 0) {
                for (puVar2 = *(undefined8 **)(in_RCX + 0x18); puVar2 != (undefined8 *)0x0;
                    puVar2 = (undefined8 *)*puVar2) {
                  HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
                  ::insert((String *)local_88,(DocumentSymbol **)this,(bool)((char)puVar2 + '\x10'))
                  ;
                }
              }
              plVar33 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            }
            goto LAB_0011424e;
          }
          uVar46 = uVar46 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar31;
          lVar38 = SUB168(auVar5 * auVar17,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar5 * auVar17,8);
        } while ((uVar44 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar44 * lVar34, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar31, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar28 + uVar43) - SUB164(auVar6 * auVar18,8)) * lVar34,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar31, uVar46 <= SUB164(auVar7 * auVar19,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_00113c2b:
    if ((float)uVar29 * __LC27 < (float)(iVar36 + 1)) goto LAB_00113c51;
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_78,pSVar37);
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  uVar31 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
          *(uint *)(hash_table_size_primes + uVar31 * 4)) {
        local_48 = uVar31 & 0xffffffff;
        iVar36 = *(int *)(in_RCX + 0x2c);
        goto joined_r0x001142fb;
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar36 = *(int *)(in_RCX + 0x2c);
joined_r0x001142fb:
  if ((iVar36 != 0) && (plVar33 = *(long **)(in_RCX + 0x18), plVar33 != (long *)0x0)) {
    do {
      HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
      ::insert(local_90,&local_70,(bool)((char)plVar33 + '\x10'));
      plVar33 = (long *)*plVar33;
    } while (plVar33 != (long *)0x0);
  }
  plVar33 = (long *)operator_new(0x48,"");
  *plVar33 = local_88._0_8_;
  plVar33[1] = local_88._8_8_;
  StringName::StringName((StringName *)(plVar33 + 2),(StringName *)&local_78);
  plVar33[8] = 0;
  *(undefined1 (*) [16])(plVar33 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar33 + 6) = (undefined1  [16])0x0;
  lVar34 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + lVar34 * 4)) {
        *(int *)(plVar33 + 8) = (int)lVar34;
        goto joined_r0x0011431c;
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
joined_r0x0011431c:
  pvVar35 = (void *)local_68._0_8_;
  if (local_48._4_4_ == 0) {
joined_r0x00114293:
    if (pvVar35 != (void *)0x0) goto LAB_00114299;
  }
  else if ((long *)local_58._0_8_ == (long *)0x0) {
    if ((void *)local_68._0_8_ != (void *)0x0) {
LAB_00114076:
      uVar29 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar29 != 0) {
        lVar34 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar34) != 0) {
            pvVar35 = *(void **)((long)pvVar35 + lVar34 * 2);
            *(int *)(local_68._8_8_ + lVar34) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar35 + 0x10));
            Memory::free_static(pvVar35,false);
            *(undefined8 *)(local_68._0_8_ + lVar34 * 2) = 0;
            pvVar35 = (void *)local_68._0_8_;
          }
          lVar34 = lVar34 + 4;
        } while ((ulong)uVar29 << 2 != lVar34);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        goto joined_r0x00114293;
      }
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      goto LAB_00114299;
    }
  }
  else {
    plVar48 = (long *)local_58._0_8_;
    do {
      HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
      ::insert(local_90,(DocumentSymbol **)(plVar33 + 3),(bool)((char)plVar48 + '\x10'));
      plVar48 = (long *)*plVar48;
    } while (plVar48 != (long *)0x0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      pvVar35 = (void *)local_68._0_8_;
      if (local_48._4_4_ != 0) goto LAB_00114076;
LAB_00114299:
      Memory::free_static(pvVar35,false);
      Memory::free_static((void *)local_68._8_8_,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar33;
    *(long **)(param_2 + 0x20) = plVar33;
LAB_00114154:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_00114160;
LAB_001142d4:
    uVar29 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar34 = *(long *)(param_2 + 0x18);
      *(long **)(lVar34 + 8) = plVar33;
      *plVar33 = lVar34;
      *(long **)(param_2 + 0x18) = plVar33;
      goto LAB_00114154;
    }
    *puVar2 = plVar33;
    plVar33[1] = (long)puVar2;
    *(long **)(param_2 + 0x20) = plVar33;
    lVar34 = *(long *)pSVar37;
    if (lVar34 == 0) goto LAB_001142d4;
LAB_00114160:
    uVar29 = *(uint *)(lVar34 + 0x20);
  }
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar31 = (ulong)uVar29;
  uVar44 = 0;
  lVar34 = *(long *)(param_2 + 0x10);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar28);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar31 * lVar38;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar45;
  lVar40 = SUB168(auVar12 * auVar24,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar12 * auVar24,8);
  uVar30 = *puVar1;
  plVar48 = plVar33;
  while (uVar30 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar30 * lVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar45;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar28 + iVar36) - SUB164(auVar13 * auVar25,8)) * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    uVar29 = SUB164(auVar14 * auVar26,8);
    plVar47 = plVar48;
    if (uVar29 < uVar44) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar30;
      puVar2 = (undefined8 *)(lVar39 + lVar40 * 8);
      plVar47 = (long *)*puVar2;
      *puVar2 = plVar48;
      uVar44 = uVar29;
    }
    uVar29 = (uint)uVar31;
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    lVar40 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar15 * auVar27,8);
    plVar48 = plVar47;
    uVar30 = *puVar1;
  }
  *(long **)(lVar39 + lVar40 * 8) = plVar48;
  *puVar1 = uVar29;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011424e:
  *(long **)param_1 = plVar33;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<lsp::Location>::_unref() */

void __thiscall CowData<lsp::Location>::_unref(CowData<lsp::Location> *this)

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
          plVar6 = plVar6 + 3;
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



/* CowData<lsp::ParameterInformation>::_unref() */

void __thiscall CowData<lsp::ParameterInformation>::_unref(CowData<lsp::ParameterInformation> *this)

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
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 3;
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



/* CowData<DocData::MethodDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::MethodDoc>::_realloc(CowData<DocData::MethodDoc> *this,long param_1)

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
/* Vector<DocData::MethodDoc>::append_array(Vector<DocData::MethodDoc>) */

void __thiscall
Vector<DocData::MethodDoc>::append_array(Vector<DocData::MethodDoc> *this,long param_2)

{
  long *plVar1;
  CowData *pCVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  CowData<char32_t> *pCVar16;
  CowData<DocData::MethodDoc> *local_50;
  long local_48;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  uVar3 = *(ulong *)(*(long *)(param_2 + 8) + -8);
  if (uVar3 == 0) {
    return;
  }
  if (*(long *)(this + 8) == 0) {
    if (-1 < (long)uVar3) {
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(this + 8));
      lVar14 = 0;
      local_48 = 0;
      uVar7 = uVar3;
      goto LAB_0011493f;
    }
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(this + 8) + -8);
    uVar7 = lVar14 + uVar3;
    if (-1 < (long)uVar7) {
      if (uVar7 == 0) {
        CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 8));
        goto LAB_00114a50;
      }
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(this + 8));
      local_48 = lVar14 * 0x78;
      if (local_48 != 0) {
        uVar8 = local_48 - 1U | local_48 - 1U >> 1;
        uVar8 = uVar8 | uVar8 >> 2;
        uVar8 = uVar8 | uVar8 >> 4;
        uVar8 = uVar8 | uVar8 >> 8;
        uVar8 = uVar8 | uVar8 >> 0x10;
        local_48 = (uVar8 | uVar8 >> 0x20) + 1;
      }
LAB_0011493f:
      local_50 = (CowData<DocData::MethodDoc> *)(this + 8);
      if (uVar7 * 0x78 != 0) {
        uVar8 = uVar7 * 0x78 - 1;
        uVar8 = uVar8 | uVar8 >> 1;
        uVar8 = uVar8 | uVar8 >> 2;
        uVar8 = uVar8 | uVar8 >> 4;
        uVar8 = uVar8 | uVar8 >> 8;
        uVar8 = uVar8 | uVar8 >> 0x10;
        uVar8 = uVar8 | uVar8 >> 0x20;
        lVar12 = uVar8 + 1;
        if (lVar12 != 0) {
          uVar15 = uVar7;
          if ((long)uVar7 <= lVar14) {
            while (lVar10 = *(long *)(this + 8), lVar10 != 0) {
              if (*(ulong *)(lVar10 + -8) <= uVar15) {
                if (lVar12 != local_48) {
                  iVar6 = CowData<DocData::MethodDoc>::_realloc(local_50,lVar12);
                  if (iVar6 != 0) goto LAB_00114a50;
                  lVar10 = *(long *)(this + 8);
                  if (lVar10 == 0) {
                    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                }
                *(ulong *)(lVar10 + -8) = uVar7;
                goto LAB_00114a50;
              }
              pCVar16 = (CowData<char32_t> *)(lVar10 + uVar15 * 0x78);
              CowData<char32_t>::_unref(pCVar16 + 0x70);
              if (*(long *)(pCVar16 + 0x68) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(pCVar16 + 0x68) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar10 = *(long *)(pCVar16 + 0x68);
                  *(undefined8 *)(pCVar16 + 0x68) = 0;
                  Memory::free_static((void *)(lVar10 + -0x10),false);
                }
              }
              CowData<DocData::ArgumentDoc>::_unref
                        ((CowData<DocData::ArgumentDoc> *)(pCVar16 + 0x58));
              CowData<char32_t>::_unref(pCVar16 + 0x48);
              CowData<char32_t>::_unref(pCVar16 + 0x38);
              CowData<char32_t>::_unref(pCVar16 + 0x28);
              CowData<char32_t>::_unref(pCVar16 + 0x20);
              CowData<char32_t>::_unref(pCVar16 + 0x10);
              CowData<char32_t>::_unref(pCVar16 + 8);
              CowData<char32_t>::_unref(pCVar16);
              uVar15 = uVar15 + 1;
            }
            goto LAB_00114e23;
          }
          if (lVar12 == local_48) {
LAB_00114d27:
            puVar13 = *(undefined8 **)(this + 8);
            if (puVar13 == (undefined8 *)0x0) {
LAB_00114e23:
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            lVar12 = puVar13[-1];
            if (lVar12 < (long)uVar7) goto LAB_00114d3d;
          }
          else {
            if (lVar14 != 0) {
              iVar6 = CowData<DocData::MethodDoc>::_realloc(local_50,lVar12);
              if (iVar6 != 0) goto LAB_00114a50;
              goto LAB_00114d27;
            }
            puVar9 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
            if (puVar9 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              goto LAB_00114a50;
            }
            puVar13 = puVar9 + 2;
            lVar12 = 0;
            *puVar9 = 1;
            puVar9[1] = 0;
            *(undefined8 **)(this + 8) = puVar13;
LAB_00114d3d:
            pauVar11 = (undefined1 (*) [16])(puVar13 + lVar12 * 0xf);
            do {
              *(undefined8 *)pauVar11[1] = 0;
              pauVar5 = pauVar11 + 7;
              *pauVar11 = (undefined1  [16])0x0;
              pauVar11[1][8] = 0;
              pauVar11[2] = (undefined1  [16])0x0;
              pauVar11[3][0] = 0;
              *(undefined8 *)(pauVar11[3] + 8) = 0;
              pauVar11[4][0] = 0;
              *(undefined8 *)(pauVar11[4] + 8) = 0;
              *(undefined8 *)(pauVar11[5] + 8) = 0;
              *(undefined1 (*) [16])(pauVar11[6] + 8) = (undefined1  [16])0x0;
              pauVar11 = (undefined1 (*) [16])(*pauVar5 + 8);
            } while ((undefined1 (*) [16])(*pauVar5 + 8) !=
                     (undefined1 (*) [16])(puVar13 + uVar7 * 0xf));
          }
          puVar13[-1] = uVar7;
          goto LAB_00114a50;
        }
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      goto LAB_00114a50;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_00114a50:
  local_50 = (CowData<DocData::MethodDoc> *)(this + 8);
  if (0 < (long)uVar3) {
    uVar7 = 0;
    lVar14 = lVar14 * 0x78;
    do {
      lVar12 = *(long *)(param_2 + 8);
      if (lVar12 == 0) {
        lVar10 = 0;
LAB_00114bbf:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar10,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar10 = *(long *)(lVar12 + -8);
      if (lVar10 <= (long)uVar7) goto LAB_00114bbf;
      pCVar2 = (CowData *)(lVar12 + uVar7 * 0x78);
      CowData<DocData::MethodDoc>::_copy_on_write(local_50);
      pCVar16 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar14);
      if (*(long *)pCVar16 != *(long *)pCVar2) {
        CowData<char32_t>::_ref(pCVar16,pCVar2);
      }
      if (*(long *)(pCVar16 + 8) != *(long *)(pCVar2 + 8)) {
        CowData<char32_t>::_ref(pCVar16 + 8,pCVar2 + 8);
      }
      if (*(long *)(pCVar16 + 0x10) != *(long *)(pCVar2 + 0x10)) {
        CowData<char32_t>::_ref(pCVar16 + 0x10,pCVar2 + 0x10);
      }
      lVar12 = *(long *)(pCVar2 + 0x20);
      *(CowData *)(pCVar16 + 0x18) = pCVar2[0x18];
      if (*(long *)(pCVar16 + 0x20) != lVar12) {
        CowData<char32_t>::_ref(pCVar16 + 0x20,pCVar2 + 0x20);
      }
      if (*(long *)(pCVar16 + 0x28) != *(long *)(pCVar2 + 0x28)) {
        CowData<char32_t>::_ref(pCVar16 + 0x28,pCVar2 + 0x28);
      }
      lVar12 = *(long *)(pCVar2 + 0x38);
      *(CowData *)(pCVar16 + 0x30) = pCVar2[0x30];
      if (*(long *)(pCVar16 + 0x38) != lVar12) {
        CowData<char32_t>::_ref(pCVar16 + 0x38,pCVar2 + 0x38);
      }
      lVar12 = *(long *)(pCVar2 + 0x48);
      *(CowData *)(pCVar16 + 0x40) = pCVar2[0x40];
      if (*(long *)(pCVar16 + 0x48) != lVar12) {
        CowData<char32_t>::_ref(pCVar16 + 0x48,pCVar2 + 0x48);
      }
      if (*(long *)(pCVar16 + 0x58) != *(long *)(pCVar2 + 0x58)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)(pCVar16 + 0x58),pCVar2 + 0x58);
      }
      if (*(long *)(pCVar16 + 0x68) != *(long *)(pCVar2 + 0x68)) {
        CowData<int>::_ref((CowData<int> *)(pCVar16 + 0x68),pCVar2 + 0x68);
      }
      if (*(long *)(pCVar16 + 0x70) != *(long *)(pCVar2 + 0x70)) {
        CowData<char32_t>::_ref(pCVar16 + 0x70,pCVar2 + 0x70);
      }
      uVar7 = uVar7 + 1;
      lVar14 = lVar14 + 0x78;
    } while (uVar7 != uVar3);
  }
  return;
}



/* CowData<lsp::TextEdit>::_realloc(long) */

undefined8 __thiscall CowData<lsp::TextEdit>::_realloc(CowData<lsp::TextEdit> *this,long param_1)

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
/* Error CowData<lsp::TextEdit>::resize<false>(long) */

undefined8 __thiscall
CowData<lsp::TextEdit>::resize<false>(CowData<lsp::TextEdit> *this,long param_1)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
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
LAB_00115120:
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
  if (lVar11 == 0) goto LAB_00115120;
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
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + 0x10 + uVar10 * 0x18));
      uVar10 = uVar10 + 1;
    }
    goto LAB_00115176;
  }
  if (lVar11 == lVar8) {
LAB_00115093:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00115176:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_00114ffd;
  }
  else {
    if (lVar6 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00115093;
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
  pauVar4 = (undefined1 (*) [16])(puVar7 + lVar6 * 3);
  do {
    *(undefined8 *)pauVar4[1] = 0;
    pauVar2 = pauVar4 + 1;
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
  } while ((undefined1 (*) [16])(*pauVar2 + 8) != (undefined1 (*) [16])(puVar7 + param_1 * 3));
LAB_00114ffd:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<lsp::DocumentSymbol>::_realloc(long) */

undefined8 __thiscall
CowData<lsp::DocumentSymbol>::_realloc(CowData<lsp::DocumentSymbol> *this,long param_1)

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
/* Error CowData<lsp::DocumentSymbol>::resize<false>(long) */

undefined8 __thiscall
CowData<lsp::DocumentSymbol>::resize<false>(CowData<lsp::DocumentSymbol> *this,long param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
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
    lVar8 = lVar6 * 0x68;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x68 == 0) {
LAB_001154e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x68 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_001154e0;
  uVar7 = param_1;
  if (param_1 <= lVar6) {
    while (puVar4 = *(undefined8 **)this, puVar4 != (undefined8 *)0x0) {
      if ((ulong)puVar4[-1] <= uVar7) {
        if (lVar10 == lVar8) goto LAB_0011543e;
        uVar5 = _realloc(this,lVar10);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        puVar4 = *(undefined8 **)this;
        goto LAB_00115435;
      }
      this_00 = (CowData<char32_t> *)(puVar4 + uVar7 * 0xd);
      _unref((CowData<lsp::DocumentSymbol> *)(this_00 + 0x60));
      CowData<char32_t>::_unref(this_00 + 0x50);
      CowData<char32_t>::_unref(this_00 + 0x48);
      CowData<char32_t>::_unref(this_00 + 0x18);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar7 = uVar7 + 1;
    }
    goto LAB_00115542;
  }
  if (lVar10 == lVar8) {
LAB_00115463:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_00115542:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar6 = puVar4[-1];
    if (param_1 <= lVar6) goto LAB_0011543e;
  }
  else {
    if (lVar6 != 0) {
      uVar5 = _realloc(this,lVar10);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00115463;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar6 = 0;
  }
  lVar8 = lVar6 * 0x68;
  do {
    pauVar3 = (undefined1 (*) [16])((long)puVar4 + lVar8);
    lVar6 = lVar6 + 1;
    lVar8 = lVar8 + 0x68;
    *(undefined4 *)pauVar3[2] = 1;
    *(undefined2 *)(pauVar3[2] + 4) = 0;
    *(undefined8 *)pauVar3[6] = 0;
    *pauVar3 = (undefined1  [16])0x0;
    pauVar3[1] = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar3[2] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar3[3] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar3[4] + 8) = (undefined1  [16])0x0;
    puVar4 = *(undefined8 **)this;
  } while (param_1 != lVar6);
LAB_00115435:
  if (puVar4 == (undefined8 *)0x0) {
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_0011543e:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<lsp::Location>::_realloc(long) */

undefined8 __thiscall CowData<lsp::Location>::_realloc(CowData<lsp::Location> *this,long param_1)

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
/* Error CowData<lsp::Location>::resize<false>(long) */

undefined8 __thiscall
CowData<lsp::Location>::resize<false>(CowData<lsp::Location> *this,long param_1)

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
LAB_00115840:
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
  if (lVar10 == 0) goto LAB_00115840;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar5 + uVar9 * 0x18));
      uVar9 = uVar9 + 1;
    }
    goto LAB_00115896;
  }
  if (lVar10 == lVar7) {
LAB_001157b3:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00115896:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_0011571c;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001157b3;
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
    *puVar2 = 0;
    puVar3 = puVar2 + 3;
    *(undefined1 (*) [16])(puVar2 + 1) = (undefined1  [16])0x0;
    puVar2 = puVar3;
  } while (puVar3 != puVar6 + param_1 * 3);
LAB_0011571c:
  puVar6[-1] = param_1;
  return 0;
}



/* Vector<lsp::Location>::append_array(Vector<lsp::Location>) */

void __thiscall Vector<lsp::Location>::append_array(Vector<lsp::Location> *this,long param_2)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CowData<char32_t> *this_00;
  
  if ((*(long *)(param_2 + 8) != 0) && (lVar2 = *(long *)(*(long *)(param_2 + 8) + -8), lVar2 != 0))
  {
    if (*(long *)(this + 8) == 0) {
      lVar7 = 0;
      lVar6 = lVar2;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 8) + -8);
      lVar6 = lVar2 + lVar7;
    }
    CowData<lsp::Location>::resize<false>((CowData<lsp::Location> *)(this + 8),lVar6);
    if (0 < lVar2) {
      lVar6 = 0;
      lVar7 = lVar7 * 0x18;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar8 = 0;
LAB_00115977:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar8 = *(long *)(lVar3 + -8);
        if (lVar8 <= lVar6) goto LAB_00115977;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 0x18);
        CowData<lsp::Location>::_copy_on_write((CowData<lsp::Location> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar7);
        if (*(long *)this_00 != *(long *)pCVar1) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        uVar5 = *(undefined8 *)(pCVar1 + 0x10);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x18;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar1 + 8);
        *(undefined8 *)(this_00 + 0x10) = uVar5;
      } while (lVar6 != lVar2);
    }
  }
  return;
}



/* CowData<lsp::ParameterInformation>::_realloc(long) */

undefined8 __thiscall
CowData<lsp::ParameterInformation>::_realloc(CowData<lsp::ParameterInformation> *this,long param_1)

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
/* Error CowData<lsp::ParameterInformation>::resize<false>(long) */

undefined8 __thiscall
CowData<lsp::ParameterInformation>::resize<false>
          (CowData<lsp::ParameterInformation> *this,long param_1)

{
  undefined1 (*pauVar1) [16];
  CowData<char32_t> *this_00;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  
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
LAB_00115d00:
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
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_00115d00;
  uVar7 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar7) {
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) goto LAB_00115c4e;
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar6 + uVar7 * 0x18);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar7 = uVar7 + 1;
    }
    goto LAB_00115d56;
  }
  if (lVar10 == lVar8) {
LAB_00115c73:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00115d56:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar5[-1];
    if (param_1 <= lVar6) goto LAB_00115bd0;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00115c73;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar6 = 0;
  }
  do {
    bVar11 = lsp::MarkupKind::Markdown != 0;
    pauVar1 = (undefined1 (*) [16])(puVar5 + lVar6 * 3);
    *(undefined8 *)pauVar1[1] = 0;
    *pauVar1 = (undefined1  [16])0x0;
    if (bVar11) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)(*pauVar1 + 8),(CowData *)&lsp::MarkupKind::Markdown);
      puVar5 = *(undefined8 **)this;
    }
    lVar6 = lVar6 + 1;
  } while (param_1 != lVar6);
  if (puVar5 == (undefined8 *)0x0) {
LAB_00115c4e:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00115bd0:
  puVar5[-1] = param_1;
  return 0;
}



/* CowData<lsp::SignatureInformation>::_unref() */

void __thiscall CowData<lsp::SignatureInformation>::_unref(CowData<lsp::SignatureInformation> *this)

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
          CowData<lsp::ParameterInformation>::_unref
                    ((CowData<lsp::ParameterInformation> *)(plVar6 + 4));
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
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



/* CowData<lsp::SignatureInformation>::_realloc(long) */

undefined8 __thiscall
CowData<lsp::SignatureInformation>::_realloc(CowData<lsp::SignatureInformation> *this,long param_1)

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
/* Error CowData<lsp::SignatureInformation>::resize<false>(long) */

undefined8 __thiscall
CowData<lsp::SignatureInformation>::resize<false>
          (CowData<lsp::SignatureInformation> *this,long param_1)

{
  undefined1 (*pauVar1) [16];
  CowData<char32_t> *this_00;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  
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
    lVar8 = lVar6 * 0x28;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_001161c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x28 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_001161c0;
  uVar7 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar7) {
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) goto LAB_00116107;
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar6 + uVar7 * 0x28);
      CowData<lsp::ParameterInformation>::_unref
                ((CowData<lsp::ParameterInformation> *)(this_00 + 0x20));
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar7 = uVar7 + 1;
    }
    goto LAB_00116216;
  }
  if (lVar10 == lVar8) {
LAB_0011612b:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00116216:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar5[-1];
    if (param_1 <= lVar6) goto LAB_0011607c;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011612b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar6 = 0;
  }
  do {
    bVar11 = lsp::MarkupKind::Markdown != 0;
    pauVar1 = (undefined1 (*) [16])(puVar5 + lVar6 * 5);
    *(undefined8 *)pauVar1[1] = 0;
    *pauVar1 = (undefined1  [16])0x0;
    if (bVar11) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)(*pauVar1 + 8),(CowData *)&lsp::MarkupKind::Markdown);
      puVar5 = *(undefined8 **)this;
    }
    *(undefined8 *)pauVar1[2] = 0;
    lVar6 = lVar6 + 1;
  } while (param_1 != lVar6);
  if (puVar5 == (undefined8 *)0x0) {
LAB_00116107:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_0011607c:
  puVar5[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x001163c8) */
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



/* MethodBindTR<Dictionary, String const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Dictionary,String_const&>::validated_call
          (MethodBindTR<Dictionary,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116691;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00116691:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary,String_const&>::ptrcall
          (MethodBindTR<Dictionary,String_const&> *this,Object *param_1,void **param_2,void *param_3
          )

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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011687b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011687b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00116be1;
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
                    /* WARNING: Could not recover jumptable at 0x00116a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00116be1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00116dc1;
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
                    /* WARNING: Could not recover jumptable at 0x00116c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00116dc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,String_const&>::validated_call
          (MethodBindTRC<String,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116e43;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00116e43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,String_const&>::ptrcall
          (MethodBindTRC<String,String_const&> *this,Object *param_1,void **param_2,void *param_3)

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
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011702e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0011702e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&>::validated_call
          (MethodBindTR<Error,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001171fc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001171fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&>::ptrcall
          (MethodBindTR<Error,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_001173d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001173d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::validated_call
          (MethodBindTR<Error,String_const&,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_001175c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001175c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::ptrcall
          (MethodBindTR<Error,String_const&,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011778d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011778d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00117af1;
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
                    /* WARNING: Could not recover jumptable at 0x0011797d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00117af1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117cd1;
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
                    /* WARNING: Could not recover jumptable at 0x00117b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00117cd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*, String, Vector<String> >::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Object*,String,Vector<String>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_58 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50[0] = 0x35;
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
      goto LAB_00117da1;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_50[0] = 0;
  if (*(long *)(*(long *)(*(long *)(param_3 + 0x10) + 8) + 0x18) != 0) {
    CowData<String>::_ref
              ((CowData<String> *)local_50,
               (CowData *)(*(long *)(*(long *)(param_3 + 0x10) + 8) + 0x18));
  }
  local_60 = 0;
  if (*(long *)(*(long *)(param_3 + 8) + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(*(long *)(param_3 + 8) + 8));
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),*(undefined8 *)(*(long *)param_3 + 0x10),
            (CowData<char32_t> *)&local_60,(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<String>::_unref((CowData<String> *)local_50);
LAB_00117da1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*, String, Vector<String> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Object*,String,Vector<String>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50[0] = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117fcc;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_50[0] = 0;
  if (*(long *)(*(long *)((long)param_3 + 0x10) + 8) != 0) {
    CowData<String>::_ref
              ((CowData<String> *)local_50,(CowData *)(*(long *)((long)param_3 + 0x10) + 8));
  }
  local_60 = 0;
  if (*(long *)*(CowData **)((long)param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,*(CowData **)((long)param_3 + 8));
  }
                    /* WARNING: Load size is inaccurate */
  plVar2 = *param_3;
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),plVar2,(CowData<char32_t> *)&local_60,
            (StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<String>::_unref((CowData<String> *)local_50);
LAB_00117fcc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
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
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00118357;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00118398;
      pVVar11 = *(Variant **)param_4;
LAB_001183ad:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00118398:
        uVar7 = 4;
        goto LAB_00118385;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00118480;
        pVVar11 = pVVar14 + lVar9 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001183ad;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00118480:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,4);
    uVar4 = _LC57;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_70);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68,
                               (Variant *)&local_70);
    Variant::Variant((Variant *)local_58,iVar6);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    uVar7 = 3;
LAB_00118385:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00118357:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Error,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
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
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
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
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00118718;
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
      if (in_R8D != 1) goto LAB_00118760;
LAB_00118750:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00118760:
        uVar7 = 4;
        goto LAB_0011870d;
      }
      if (in_R8D == 1) goto LAB_00118750;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar6);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0011870d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00118718:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<String, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<String,String_const&>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
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
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00118ac0;
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
      if (in_R8D != 1) goto LAB_00118b10;
LAB_00118b00:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00118b10:
        uVar6 = 4;
        goto LAB_00118ab5;
      }
      if (in_R8D == 1) goto LAB_00118b00;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar11)((CowData<char32_t> *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00118ab5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00118ac0:
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118ec0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00118f10;
LAB_00118f00:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00118f10:
        uVar6 = 4;
        goto LAB_00118eb5;
      }
      if (in_R8D == 1) goto LAB_00118f00;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00118eb5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00118ec0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Dictionary,String_const&>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
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
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00119230;
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
      if (in_R8D != 1) goto LAB_00119280;
LAB_00119270:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119280:
        uVar6 = 4;
        goto LAB_00119225;
      }
      if (in_R8D == 1) goto LAB_00119270;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar11)((Dictionary *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_70);
    Variant::operator=((Variant *)param_1,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00119225:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00119230:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001195a0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001195f0;
LAB_001195e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001195f0:
        uVar6 = 4;
        goto LAB_00119595;
      }
      if (in_R8D == 1) goto LAB_001195e0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC163;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00119595:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001195a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*, String, Vector<String> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Object*,String,Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  int iVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar9 = (long *)plVar14[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar14[1] + 0x20);
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
      _err_print_error(&_LC55,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00119952;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar12 = iVar11 + -3 + (int)lVar7;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar7] = pVVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2],0x22);
      uVar4 = _LC56;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_68);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],4);
      uVar4 = _LC57;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],0x18);
      if (cVar5 == '\0') {
LAB_00119900:
        uVar4 = _LC58;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar8 = Variant::operator_cast_to_Object_(local_58[0]);
        pOVar10 = Variant::operator_cast_to_Object_(local_58[0]);
        if ((pOVar8 != (Object *)0x0) && (pOVar10 == (Object *)0x0)) goto LAB_00119900;
      }
      pOVar8 = Variant::operator_cast_to_Object_(local_58[0]);
      (*(code *)pVVar16)((Variant *)((long)plVar14 + (long)pVVar1),pOVar8,(Variant *)&local_70,
                         (Variant *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<String>::_unref((CowData<String> *)&local_60);
      goto LAB_00119952;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00119952:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info<Object*, String, Vector<String> >(int, PropertyInfo&) */

void call_get_argument_type_info<Object*,String,Vector<String>>(int param_1,PropertyInfo *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Object");
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68[0] = 0x18;
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *(undefined4 *)param_2 = local_68[0];
    if (*(long *)(param_2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_68);
  }
  else {
    if (param_1 == 1) {
      local_70 = 0;
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"");
      uVar2 = 4;
    }
    else {
      if (param_1 != 2) goto LAB_00119c09;
      local_70 = 0;
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"");
      uVar2 = 0x22;
    }
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)local_68,uVar2,&local_80,0,(CowData<char32_t> *)&local_78,6,&local_70
              );
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_68[0];
    if (*(long *)(param_2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_68);
  }
LAB_00119c09:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*, String, Vector<String> >::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Object*,String,Vector<String>>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Object*,String,Vector<String>>(in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
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
    local_78 = &_LC20;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
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



/* MethodBindTR<Error, String const&, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,&local_4c,(PropertyInfo *)&local_48);
    uVar2 = local_40._0_8_;
    uVar3 = local_40._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_40._8_8_;
    local_40 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTRC<String,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC20;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo(pPVar5,4,(CowData<char32_t> *)&local_68,0,&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
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



/* MethodBindTR<Dictionary, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<Dictionary,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar5 = local_68._0_4_;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
    *(undefined8 *)(pPVar5 + 0x10) = uVar4;
    *(undefined4 *)(pPVar5 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar5 + 0x20) = local_48;
    *(undefined4 *)(pPVar5 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = &_LC20;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo(pPVar5,0x1b,(CowData<char32_t> *)&local_68,0,&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 4));
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
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
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
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
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
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



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
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
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_0011a8f9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0011a8f9:
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



/* GDScriptWorkspace::_bind_methods() */

void GDScriptWorkspace::_GLOBAL__sub_I__bind_methods(void)

{
  lsp::MarkupKind::PlainText = 0;
  String::parse_latin1((String *)&lsp::MarkupKind::PlainText,"plaintext");
  __cxa_atexit(String::~String,&lsp::MarkupKind::PlainText,&__dso_handle);
  lsp::MarkupKind::Markdown = 0;
  String::parse_latin1((String *)&lsp::MarkupKind::Markdown,"markdown");
  __cxa_atexit(String::~String,&lsp::MarkupKind::Markdown,&__dso_handle);
  lsp::FoldingRangeKind::Comment = 0;
  String::parse_latin1((String *)&lsp::FoldingRangeKind::Comment,"comment");
  __cxa_atexit(String::~String,&lsp::FoldingRangeKind::Comment,&__dso_handle);
  lsp::FoldingRangeKind::Imports = 0;
  String::parse_latin1((String *)&lsp::FoldingRangeKind::Imports,"imports");
  __cxa_atexit(String::~String,&lsp::FoldingRangeKind::Imports,&__dso_handle);
  lsp::FoldingRangeKind::Region = 0;
  String::parse_latin1((String *)&lsp::FoldingRangeKind::Region,"region");
  __cxa_atexit(String::~String,&lsp::FoldingRangeKind::Region,&__dso_handle);
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache != '\0') {
    return;
  }
  EditorHelpBit::doc_annotation_cache = 1;
  EditorHelpBit::doc_annotation_cache._40_8_ = 2;
  EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
  EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
               ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* lsp::DocumentSymbol::DocumentSymbol(lsp::DocumentSymbol const&) */

void __thiscall lsp::DocumentSymbol::DocumentSymbol(DocumentSymbol *this,DocumentSymbol *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* lsp::DocumentSymbol::~DocumentSymbol() */

void __thiscall lsp::DocumentSymbol::~DocumentSymbol(DocumentSymbol *this)

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
/* List<lsp::DocumentLink, DefaultAllocator>::~List() */

void __thiscall
List<lsp::DocumentLink,DefaultAllocator>::~List(List<lsp::DocumentLink,DefaultAllocator> *this)

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
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* MethodBindTR<Dictionary, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,String_const&> *this)

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
/* MethodBindTRC<String, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,String_const&>::~MethodBindTR
          (MethodBindTR<Error,String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Object*, String, Vector<String> >::~MethodBindT() */

void __thiscall
MethodBindT<Object*,String,Vector<String>>::~MethodBindT
          (MethodBindT<Object*,String,Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GDScriptWorkspace, void, Object*, String, Vector<String>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GDScriptWorkspace,void,Object*,String,Vector<String>> *this)

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
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.