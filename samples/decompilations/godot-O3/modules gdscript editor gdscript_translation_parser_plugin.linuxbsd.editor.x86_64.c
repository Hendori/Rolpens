
/* GDScriptEditorTranslationParserPlugin::get_recognized_extensions(List<String, DefaultAllocator>*)
   const */

void GDScriptEditorTranslationParserPlugin::get_recognized_extensions(List *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010000e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*GDScriptLanguage::singleton + 0x2d0))();
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



/* GDScriptEditorTranslationParserPlugin::_is_constant_string(GDScriptParser::ExpressionNode const*)
    */

uint GDScriptEditorTranslationParserPlugin::_is_constant_string(ExpressionNode *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  
  if (param_1 == (ExpressionNode *)0x0) {
    _err_print_error("_is_constant_string",
                     "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",0x4d,
                     "Parameter \"p_expression\" is null.",0,0);
    return 0;
  }
  if (param_1[0x129] != (ExpressionNode)0x0) {
    iVar1 = *(int *)(param_1 + 0x130);
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),iVar1 == 4) |
           CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0x15);
  }
  return 0;
}



/* GDScriptEditorTranslationParserPlugin::_parse_comment(int, bool&) const */

undefined8 * GDScriptEditorTranslationParserPlugin::_parse_comment(int param_1,bool *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  code *pcVar39;
  undefined *puVar40;
  undefined *puVar41;
  char cVar42;
  uint uVar43;
  undefined1 *in_RCX;
  uint in_EDX;
  int iVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  bool bVar50;
  undefined4 in_register_0000003c;
  undefined8 *puVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  ulong uVar56;
  uint uVar57;
  ulong uVar58;
  uint uVar59;
  long in_FS_OFFSET;
  long local_b0;
  uint local_a0;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  puVar51 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  lVar53 = *(long *)(param_2 + 0x1c8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = *(long *)(lVar53 + 8);
  if (local_b0 == 0) {
LAB_001005f0:
    *puVar51 = 0;
  }
  else {
    if (*(int *)(lVar53 + 0x2c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar53 + 0x28) * 4);
      uVar56 = CONCAT44(0,uVar2);
      uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar53 + 0x28) * 8);
      uVar43 = (in_EDX >> 0x10 ^ in_EDX) * -0x7a143595;
      uVar43 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
      uVar55 = uVar43 ^ uVar43 >> 0x10;
      if (uVar43 == uVar43 >> 0x10) {
        uVar55 = 1;
        uVar48 = uVar3;
      }
      else {
        uVar48 = uVar55 * uVar3;
      }
      lVar4 = *(long *)(lVar53 + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar56;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar48;
      lVar46 = SUB168(auVar5 * auVar22,8);
      uVar43 = *(uint *)(lVar4 + lVar46 * 4);
      if (uVar43 != 0) {
        iVar44 = SUB164(auVar5 * auVar22,8);
        uVar54 = 0;
        lVar47 = lVar46;
        uVar52 = uVar43;
        iVar45 = iVar44;
LAB_0010036a:
        if ((uVar55 != uVar52) || (*(uint *)(*(long *)(local_b0 + lVar47 * 8) + 0x10) != in_EDX))
        goto LAB_00100320;
        uVar52 = 0;
        while ((uVar43 != uVar55 || (*(uint *)(*(long *)(local_b0 + lVar46 * 8) + 0x10) != in_EDX)))
        {
          uVar52 = uVar52 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (iVar44 + 1) * uVar3;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar56;
          lVar46 = SUB168(auVar9 * auVar26,8);
          uVar43 = *(uint *)(lVar4 + lVar46 * 4);
          iVar44 = SUB164(auVar9 * auVar26,8);
          if ((uVar43 == 0) ||
             (auVar10._8_8_ = 0, auVar10._0_8_ = uVar43 * uVar3, auVar27._8_8_ = 0,
             auVar27._0_8_ = uVar56, auVar11._8_8_ = 0,
             auVar11._0_8_ = ((uVar2 + iVar44) - SUB164(auVar10 * auVar27,8)) * uVar3,
             auVar28._8_8_ = 0, auVar28._0_8_ = uVar56, SUB164(auVar11 * auVar28,8) < uVar52)) {
LAB_00100588:
            _err_print_error(&_LC14,"./core/templates/hash_map.h",0x147,
                             "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar39 = (code *)invalidInstructionException();
            (*pcVar39)();
          }
        }
        String::trim_prefix((char *)&local_58);
        bVar50 = SUB81(&local_58,0);
        String::strip_edges(SUB81((String *)&local_60,0),bVar50);
        puVar40 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(puVar40 + -0x10,false);
          }
        }
        cVar42 = String::begins_with((char *)&local_60);
        if (cVar42 != '\0') {
          String::trim_prefix((char *)&local_58);
          String::strip_edges(SUB41(param_1,0),bVar50);
          puVar40 = local_58;
          if (local_58 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (undefined *)0x0;
              Memory::free_static(puVar40 + -0x10,false);
            }
          }
LAB_001004d0:
          lVar53 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar53 + -0x10),false);
            }
          }
          goto LAB_00100500;
        }
        cVar42 = String::operator==((String *)&local_60,"NO_TRANSLATE");
        if ((cVar42 != '\0') ||
           (cVar42 = String::begins_with((char *)&local_60), lVar53 = local_60, cVar42 != '\0')) {
          *in_RCX = 1;
          *puVar51 = 0;
          goto LAB_001004d0;
        }
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar53 + -0x10),false);
          }
        }
        local_78 = (undefined *)0x0;
        lVar53 = *(long *)(param_2 + 0x1c8);
        local_b0 = *(long *)(lVar53 + 8);
        if (local_b0 == 0) goto LAB_001005f0;
        local_a0 = in_EDX - 1;
        goto LAB_00100670;
      }
LAB_00100b90:
      local_78 = (undefined *)0x0;
      local_a0 = in_EDX - 1;
LAB_00100670:
      do {
        if (*(int *)(lVar53 + 0x2c) == 0) goto LAB_00100540;
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar53 + 0x28) * 4);
        uVar56 = CONCAT44(0,uVar2);
        uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar53 + 0x28) * 8);
        uVar43 = (local_a0 >> 0x10 ^ local_a0) * -0x7a143595;
        uVar43 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
        uVar55 = uVar43 ^ uVar43 >> 0x10;
        if (uVar43 == uVar43 >> 0x10) {
          uVar55 = 1;
          uVar48 = uVar3;
        }
        else {
          uVar48 = uVar55 * uVar3;
        }
        lVar53 = *(long *)(lVar53 + 0x10);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar56;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar48;
        uVar48 = SUB168(auVar12 * auVar29,8);
        uVar43 = *(uint *)(lVar53 + uVar48 * 4);
        uVar52 = SUB164(auVar12 * auVar29,8);
        if (uVar43 == 0) goto LAB_00100540;
        uVar59 = 0;
        uVar49 = uVar48;
        uVar58 = uVar48;
        uVar54 = uVar43;
        while ((uVar55 != uVar54 || (local_a0 != *(uint *)(*(long *)(local_b0 + uVar49 * 8) + 0x10))
               )) {
          uVar59 = uVar59 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = ((int)uVar58 + 1) * uVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar56;
          uVar49 = SUB168(auVar13 * auVar30,8);
          uVar54 = *(uint *)(lVar53 + uVar49 * 4);
          uVar57 = SUB164(auVar13 * auVar30,8);
          uVar58 = (ulong)uVar57;
          if ((uVar54 == 0) ||
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar54 * uVar3, auVar31._8_8_ = 0,
             auVar31._0_8_ = uVar56, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar2 + uVar57) - SUB164(auVar14 * auVar31,8)) * uVar3,
             auVar32._8_8_ = 0, auVar32._0_8_ = uVar56, SUB164(auVar15 * auVar32,8) < uVar59))
          goto LAB_00100540;
        }
        uVar57 = 0;
        uVar49 = uVar48;
        uVar54 = uVar43;
        uVar59 = uVar52;
        while ((uVar55 != uVar54 || (local_a0 != *(uint *)(*(long *)(local_b0 + uVar49 * 8) + 0x10))
               )) {
          uVar57 = uVar57 + 1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (uVar59 + 1) * uVar3;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar56;
          uVar49 = SUB168(auVar16 * auVar33,8);
          uVar54 = *(uint *)(lVar53 + uVar49 * 4);
          uVar59 = SUB164(auVar16 * auVar33,8);
          if ((uVar54 == 0) ||
             (auVar17._8_8_ = 0, auVar17._0_8_ = uVar54 * uVar3, auVar34._8_8_ = 0,
             auVar34._0_8_ = uVar56, auVar18._8_8_ = 0,
             auVar18._0_8_ = ((uVar2 + uVar59) - SUB164(auVar17 * auVar34,8)) * uVar3,
             auVar35._8_8_ = 0, auVar35._0_8_ = uVar56, SUB164(auVar18 * auVar35,8) < uVar57))
          goto LAB_00100588;
        }
        if (*(char *)(*(long *)(local_b0 + (ulong)uVar59 * 8) + 0x20) == '\0') goto LAB_00100540;
        uVar54 = 0;
        while ((uVar43 != uVar55 || (local_a0 != *(uint *)(*(long *)(local_b0 + uVar48 * 8) + 0x10))
               )) {
          uVar54 = uVar54 + 1;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (uVar52 + 1) * uVar3;
          auVar36._8_8_ = 0;
          auVar36._0_8_ = uVar56;
          uVar48 = SUB168(auVar19 * auVar36,8);
          uVar43 = *(uint *)(lVar53 + uVar48 * 4);
          uVar52 = SUB164(auVar19 * auVar36,8);
          if ((uVar43 == 0) ||
             (auVar20._8_8_ = 0, auVar20._0_8_ = uVar43 * uVar3, auVar37._8_8_ = 0,
             auVar37._0_8_ = uVar56, auVar21._8_8_ = 0,
             auVar21._0_8_ = ((uVar2 + uVar52) - SUB164(auVar20 * auVar37,8)) * uVar3,
             auVar38._8_8_ = 0, auVar38._0_8_ = uVar56, SUB164(auVar21 * auVar38,8) < uVar54))
          goto LAB_00100588;
        }
        String::trim_prefix((char *)&local_58);
        bVar50 = SUB81((String *)&local_58,0);
        String::strip_edges(SUB81((String *)&local_70,0),bVar50);
        puVar40 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(puVar40 + -0x10,false);
          }
        }
        if (local_70 != (undefined *)0x0) {
          if (1 < *(uint *)(local_70 + -8)) {
            if (local_78 == (undefined *)0x0) {
LAB_00100955:
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_70);
            }
            else if (*(uint *)(local_78 + -8) < 2) {
              if (local_70 != local_78) goto LAB_00100955;
            }
            else {
              local_68 = 0;
              local_58 = &_LC18;
              local_50 = 1;
              String::parse_latin1((StrRange *)&local_68);
              String::operator+((String *)&local_60,(String *)&local_70);
              String::operator+((String *)&local_58,(String *)&local_60);
              puVar41 = local_58;
              puVar40 = local_78;
              if (local_78 == local_58) {
                if (local_78 != (undefined *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_78 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_58 = (undefined *)0x0;
                    Memory::free_static(puVar41 + -0x10,false);
                  }
                }
              }
              else {
                if (local_78 != (undefined *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_78 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_78 = (undefined *)0x0;
                    Memory::free_static(puVar40 + -0x10,false);
                  }
                }
                local_78 = local_58;
              }
              lVar53 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar1 = (long *)(local_60 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar53 + -0x10),false);
                }
              }
              lVar53 = local_68;
              if (local_68 != 0) {
                LOCK();
                plVar1 = (long *)(local_68 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void *)(lVar53 + -0x10),false);
                }
              }
            }
            cVar42 = String::begins_with((char *)&local_70);
            if (cVar42 == '\0') {
              cVar42 = String::operator==((String *)&local_70,"NO_TRANSLATE");
              if ((cVar42 == '\0') &&
                 (cVar42 = String::begins_with((char *)&local_70), cVar42 == '\0')) {
                if (local_70 == (undefined *)0x0) goto LAB_0010090f;
                goto LAB_001008ee;
              }
              *in_RCX = 1;
              *puVar51 = 0;
            }
            else {
              String::trim_prefix((char *)&local_58);
              String::strip_edges(SUB41(param_1,0),bVar50);
              puVar40 = local_58;
              if (local_58 != (undefined *)0x0) {
                LOCK();
                plVar1 = (long *)(local_58 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_58 = (undefined *)0x0;
                  Memory::free_static(puVar40 + -0x10,false);
                }
              }
            }
            puVar40 = local_70;
            if (local_70 != (undefined *)0x0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = (undefined *)0x0;
                Memory::free_static(puVar40 + -0x10,false);
              }
            }
            goto LAB_0010054f;
          }
LAB_001008ee:
          puVar40 = local_70;
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = (undefined *)0x0;
            Memory::free_static(puVar40 + -0x10,false);
          }
        }
LAB_0010090f:
        local_a0 = local_a0 - 1;
        lVar53 = *(long *)(param_2 + 0x1c8);
        local_b0 = *(long *)(lVar53 + 8);
        if (local_b0 == 0) goto LAB_00100540;
      } while( true );
    }
    local_78 = (undefined *)0x0;
LAB_00100540:
    *puVar51 = 0;
LAB_0010054f:
    puVar40 = local_78;
    if (local_78 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (undefined *)0x0;
        Memory::free_static(puVar40 + -0x10,false);
      }
    }
  }
LAB_00100500:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar51;
LAB_00100320:
  uVar54 = uVar54 + 1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (iVar45 + 1) * uVar3;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar56;
  lVar47 = SUB168(auVar6 * auVar23,8);
  uVar52 = *(uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar6 * auVar23,8);
  if ((uVar52 == 0) ||
     (auVar7._8_8_ = 0, auVar7._0_8_ = uVar52 * uVar3, auVar24._8_8_ = 0, auVar24._0_8_ = uVar56,
     auVar8._8_8_ = 0, auVar8._0_8_ = ((uVar2 + iVar45) - SUB164(auVar7 * auVar24,8)) * uVar3,
     auVar25._8_8_ = 0, auVar25._0_8_ = uVar56, SUB164(auVar8 * auVar25,8) < uVar54))
  goto LAB_00100b90;
  goto LAB_0010036a;
}



/* GDScriptEditorTranslationParserPlugin::GDScriptEditorTranslationParserPlugin() */

void __thiscall
GDScriptEditorTranslationParserPlugin::GDScriptEditorTranslationParserPlugin
          (GDScriptEditorTranslationParserPlugin *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_50;
  StringName local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(code **)this = memcpy;
  StringName::StringName((StringName *)(this + 0x180),"_parse_file",false);
  this[0x188] = (GDScriptEditorTranslationParserPlugin)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_recognized_extensions",false);
  this[0x1a0] = (GDScriptEditorTranslationParserPlugin)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_parse_file",false);
  *(undefined ***)this = &PTR__initialize_classv_00107550;
  this[0x1b8] = (GDScriptEditorTranslationParserPlugin)0x0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1d8),"tr",false);
  StringName::StringName((StringName *)(this + 0x1e0),"tr_n",false);
  StringName::StringName((StringName *)(this + 0x1e8),"atr",false);
  StringName::StringName((StringName *)(this + 0x1f0),"atr_n",false);
  uVar1 = _LC31;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x218) = uVar1;
  *(undefined8 *)(this + 0x240) = uVar1;
  *(undefined8 *)(this + 0x268) = uVar1;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x270),"add_filter",false);
  StringName::StringName((StringName *)(this + 0x278),"set_filters",false);
  StringName::StringName((StringName *)(this + 0x280),"filters",false);
  StringName::StringName((StringName *)&local_50,"text",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"placeholder_text",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"tooltip_text",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"set_text",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"set_tooltip_text",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"set_placeholder",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_tab",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_check_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_multistate_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_radio_check_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_separator",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_submenu_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"set_tab_title",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_icon_check_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_icon_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"add_icon_radio_check_item",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_50,"set_item_text",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_48);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<String> *this_00;
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
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<String> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<String>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Vector<Vector<String> >::push_back(Vector<String>) [clone .isra.0] */

void __thiscall Vector<Vector<String>>::push_back(Vector<Vector<String>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<String>::_ref((CowData<String> *)(lVar3 + 8),(CowData *)(param_2 + 8));
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



/* GDScriptEditorTranslationParserPlugin::_add_id_ctx_plural(Vector<String> const&, int) */

void GDScriptEditorTranslationParserPlugin::_add_id_ctx_plural(Vector *param_1,int param_2)

{
  long *plVar1;
  CowData<char32_t> *this;
  Vector<Vector<String>> *pVVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  CowData *pCVar9;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  bool bVar10;
  long local_70 [2];
  long local_60;
  long local_58 [5];
  long local_30;
  
  lVar8 = CONCAT44(in_register_00000034,param_2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _parse_comment((int)local_70,(bool *)param_1);
  plVar7 = *(long **)(lVar8 + 8);
  pVVar2 = *(Vector<Vector<String>> **)(param_1 + 0x1d0);
  if (plVar7 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar7[-1];
    if (0 < lVar6) {
      local_58[0] = 0;
      plVar1 = (long *)(*plVar7 + -0x10);
      if (*plVar7 == 0) {
LAB_001016f0:
        if (1 < lVar6) {
          local_58[1] = 0;
          plVar1 = (long *)(plVar7[1] + -0x10);
          if (plVar7[1] == 0) {
LAB_0010173f:
            lVar6 = plVar7[-1];
            if (2 < lVar6) {
              local_58[2] = 0;
              plVar1 = (long *)(plVar7[2] + -0x10);
              if (plVar7[2] != 0) {
                do {
                  lVar8 = *plVar1;
                  if (lVar8 == 0) goto LAB_00101785;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar10 = lVar8 == lVar6;
                  if (bVar10) {
                    *plVar1 = lVar8 + 1;
                    lVar6 = lVar8;
                  }
                  UNLOCK();
                } while (!bVar10);
                if (lVar6 != -1) {
                  local_58[2] = plVar7[2];
                }
              }
LAB_00101785:
              local_58[3] = 0;
              if (local_70[0] != 0) {
                plVar7 = (long *)(local_70[0] + -0x10);
                do {
                  lVar8 = *plVar7;
                  if (lVar8 == 0) goto LAB_001017bf;
                  LOCK();
                  lVar6 = *plVar7;
                  bVar10 = lVar8 == lVar6;
                  if (bVar10) {
                    *plVar7 = lVar8 + 1;
                    lVar6 = lVar8;
                  }
                  UNLOCK();
                } while (!bVar10);
                if (lVar6 != -1) {
                  local_58[3] = local_70[0];
                }
              }
LAB_001017bf:
              local_60 = 0;
              iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,4);
              if (iVar4 == 0) {
                pCVar9 = (CowData *)local_58;
                lVar8 = 0;
                do {
                  if (local_60 == 0) {
                    lVar6 = 0;
LAB_001018ba:
                    _err_print_index_error
                              ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar6,"p_index",
                               "size()","",false,false);
                  }
                  else {
                    lVar6 = *(long *)(local_60 + -8);
                    if (lVar6 <= lVar8) goto LAB_001018ba;
                    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
                    this = (CowData<char32_t> *)(local_60 + lVar8 * 8);
                    if (*(long *)this != *(long *)pCVar9) {
                      CowData<char32_t>::_ref(this,pCVar9);
                    }
                  }
                  lVar8 = lVar8 + 1;
                  pCVar9 = pCVar9 + 8;
                } while (lVar8 != 4);
              }
              plVar7 = local_58 + 4;
              Vector<Vector<String>>::push_back(pVVar2);
              CowData<String>::_unref((CowData<String> *)&local_60);
              do {
                plVar1 = plVar7 + -1;
                plVar7 = plVar7 + -1;
                if (*plVar1 != 0) {
                  LOCK();
                  plVar1 = (long *)(*plVar1 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(*plVar7 + -0x10),false);
                  }
                }
                lVar8 = local_70[0];
              } while (plVar7 != local_58);
              if (local_70[0] != 0) {
                LOCK();
                plVar7 = (long *)(local_70[0] + -0x10);
                *plVar7 = *plVar7 + -1;
                UNLOCK();
                if (*plVar7 == 0) {
                  local_70[0] = 0;
                  Memory::free_static((void *)(lVar8 + -0x10),false);
                }
              }
              if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
          else {
            do {
              lVar6 = *plVar1;
              if (lVar6 == 0) goto LAB_00101732;
              LOCK();
              lVar5 = *plVar1;
              bVar10 = lVar6 == lVar5;
              if (bVar10) {
                *plVar1 = lVar6 + 1;
                lVar5 = lVar6;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar5 != -1) {
              local_58[1] = plVar7[1];
            }
LAB_00101732:
            plVar7 = *(long **)(lVar8 + 8);
            if (plVar7 != (long *)0x0) goto LAB_0010173f;
            lVar6 = 0;
          }
          lVar8 = 2;
          goto LAB_00101943;
        }
      }
      else {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_001016df;
          LOCK();
          lVar5 = *plVar1;
          bVar10 = lVar6 == lVar5;
          if (bVar10) {
            *plVar1 = lVar6 + 1;
            lVar5 = lVar6;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar5 != -1) {
          local_58[0] = *plVar7;
        }
LAB_001016df:
        plVar7 = *(long **)(lVar8 + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = plVar7[-1];
          goto LAB_001016f0;
        }
        lVar6 = 0;
      }
      lVar8 = 1;
      goto LAB_00101943;
    }
  }
  lVar8 = 0;
LAB_00101943:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GDScriptEditorTranslationParserPlugin::_add_id(String const&, int) */

void GDScriptEditorTranslationParserPlugin::_add_id(String *param_1,int param_2)

{
  long *plVar1;
  CowData *pCVar2;
  CowData<char32_t> *this;
  Vector<Vector<String>> *pVVar3;
  int iVar4;
  long lVar5;
  CowData *pCVar6;
  long lVar7;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  bool bVar8;
  long local_70 [2];
  long local_60;
  long local_58;
  undefined1 local_50 [16];
  long local_40;
  CowData local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _parse_comment((int)local_70,(bool *)param_1);
  lVar7 = *(long *)CONCAT44(in_register_00000034,param_2);
  pVVar3 = *(Vector<Vector<String>> **)(param_1 + 0x1d0);
  local_58 = 0;
  plVar1 = (long *)(lVar7 + -0x10);
  if (lVar7 != 0) {
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_00101a57;
      LOCK();
      lVar5 = *plVar1;
      bVar8 = lVar7 == lVar5;
      if (bVar8) {
        *plVar1 = lVar7 + 1;
        lVar5 = lVar7;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar5 != -1) {
      local_58 = *(long *)CONCAT44(in_register_00000034,param_2);
    }
  }
LAB_00101a57:
  local_40 = 0;
  local_50 = (undefined1  [16])0x0;
  plVar1 = (long *)(local_70[0] + -0x10);
  if (local_70[0] != 0) {
    do {
      lVar7 = *plVar1;
      if (lVar7 == 0) goto LAB_00101a9a;
      LOCK();
      lVar5 = *plVar1;
      bVar8 = lVar7 == lVar5;
      if (bVar8) {
        *plVar1 = lVar7 + 1;
        lVar5 = lVar7;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar5 != -1) {
      local_40 = local_70[0];
    }
  }
LAB_00101a9a:
  local_60 = 0;
  iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,4);
  if (iVar4 == 0) {
    lVar7 = 0;
    pCVar6 = (CowData *)&local_58;
    if (local_60 == 0) goto LAB_00101b97;
    do {
      lVar5 = *(long *)(local_60 + -8);
      if (lVar5 <= lVar7) goto LAB_00101b9a;
      CowData<String>::_copy_on_write((CowData<String> *)&local_60);
      this = (CowData<char32_t> *)(local_60 + lVar7 * 8);
      if (*(long *)this != *(long *)pCVar6) {
        CowData<char32_t>::_ref(this,pCVar6);
      }
      while( true ) {
        lVar7 = lVar7 + 1;
        pCVar6 = pCVar6 + 8;
        if (lVar7 == 4) goto LAB_00101ac2;
        if (local_60 != 0) break;
LAB_00101b97:
        lVar5 = 0;
LAB_00101b9a:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar5,"p_index","size()","",false,
                   false);
      }
    } while( true );
  }
LAB_00101ac2:
  pCVar6 = local_38;
  Vector<Vector<String>>::push_back(pVVar3);
  CowData<String>::_unref((CowData<String> *)&local_60);
  do {
    pCVar2 = pCVar6 + -8;
    pCVar6 = pCVar6 + -8;
    if (*(long *)pCVar2 != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)pCVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(*(long *)pCVar6 + -0x10),false);
      }
    }
    lVar7 = local_70[0];
  } while (pCVar6 != (CowData *)&local_58);
  if (local_70[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_70[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70[0] = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptEditorTranslationParserPlugin::_extract_fd_filter_string(GDScriptParser::ExpressionNode
   const*, int) [clone .part.0] */

void GDScriptEditorTranslationParserPlugin::_extract_fd_filter_string
               (ExpressionNode *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  long local_40;
  char local_38 [8];
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_String((Variant *)&local_40);
  bVar3 = SUB81((Variant *)&local_40,0);
  String::split(local_38,bVar3,0x1043e6);
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
  if ((local_30[0] == 0) || (*(long *)(local_30[0] + -8) != 2)) {
    _err_print_error("_extract_fd_filter_string",
                     "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",0x192,
                     "Condition \"arr.size() != 2\" is true.",
                     "Argument for setting FileDialog has bad format.",0,0);
    CowData<String>::_unref((CowData<String> *)local_30);
  }
  else {
    String::strip_edges(bVar3,(bool)((char)local_30[0] + '\b'));
    _add_id((String *)param_1,(int)(Variant *)&local_40);
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
    CowData<String>::_unref((CowData<String> *)local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptEditorTranslationParserPlugin::_extract_fd_filter_string(GDScriptParser::ExpressionNode
   const*, int) */

void GDScriptEditorTranslationParserPlugin::_extract_fd_filter_string
               (ExpressionNode *param_1,int param_2)

{
  undefined4 in_register_00000034;
  long lVar1;
  
  lVar1 = CONCAT44(in_register_00000034,param_2);
  if (lVar1 == 0) {
    _err_print_error("_is_constant_string",
                     "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",0x4d,
                     "Parameter \"p_expression\" is null.",0,0);
    return;
  }
  if ((*(char *)(lVar1 + 0x129) != '\0') &&
     ((*(int *)(lVar1 + 0x130) == 4 || (*(int *)(lVar1 + 0x130) == 0x15)))) {
    _extract_fd_filter_string(param_1,param_2);
    return;
  }
  return;
}



/* GDScriptEditorTranslationParserPlugin::_extract_fd_filter_array(GDScriptParser::ExpressionNode
   const*) */

void __thiscall
GDScriptEditorTranslationParserPlugin::_extract_fd_filter_array
          (GDScriptEditorTranslationParserPlugin *this,ExpressionNode *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 8) != 2) {
    if (((*(int *)(param_1 + 8) != 9) || (*(long *)(param_1 + 0x148) == 0)) ||
       (*(int *)(*(long *)(param_1 + 0x148) + 8) != 0x13)) goto LAB_00101e0f;
    if ((_extract_fd_filter_array(GDScriptParser::ExpressionNode_const*)::{lambda()#1}::operator()()
         ::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_extract_fd_filter_array(GDScriptParser::ExpressionNode_const*)
                                     ::{lambda()#1}::operator()()::sname), iVar5 != 0)) {
      _scs_create((char *)&_extract_fd_filter_array(GDScriptParser::ExpressionNode_const*)::
                           {lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_extract_fd_filter_array(GDScriptParser::ExpressionNode_const*)::{lambda()#1}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_extract_fd_filter_array(GDScriptParser::ExpressionNode_const*)::
                           {lambda()#1}::operator()()::sname);
    }
    if ((_extract_fd_filter_array(GDScriptParser::ExpressionNode_const*)::{lambda()#1}::operator()()
         ::sname != *(long *)(param_1 + 0x160)) ||
       (plVar2 = *(long **)(param_1 + 0x158), plVar2 == (long *)0x0)) goto LAB_00101e0f;
    if (plVar2[-1] < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,plVar2[-1],"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    param_1 = (ExpressionNode *)*plVar2;
    if (*(int *)(param_1 + 8) != 2) goto LAB_00101e0f;
  }
  lVar6 = *(long *)(param_1 + 0x150);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (*(long *)(lVar6 + -8) <= lVar7) break;
      lVar3 = *(long *)(lVar6 + lVar7 * 8);
      if ((*(char *)(lVar3 + 0x129) != '\0') &&
         ((*(int *)(lVar3 + 0x130) == 4 || (*(int *)(lVar3 + 0x130) == 0x15)))) {
        _extract_fd_filter_string((ExpressionNode *)this,(int)lVar3);
        lVar6 = *(long *)(param_1 + 0x150);
      }
      lVar7 = lVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_00101e0f:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptEditorTranslationParserPlugin::_assess_assignment(GDScriptParser::AssignmentNode const*)
    */

void __thiscall
GDScriptEditorTranslationParserPlugin::_assess_assignment
          (GDScriptEditorTranslationParserPlugin *this,AssignmentNode *param_1)

{
  long *plVar1;
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
  int iVar12;
  long lVar13;
  uint uVar14;
  ExpressionNode *pEVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _assess_expression(this,*(ExpressionNode **)(param_1 + 0x150));
  _assess_expression(this,*(ExpressionNode **)(param_1 + 0x158));
  lVar18 = *(long *)(param_1 + 0x150);
  local_50 = 0;
  if (*(int *)(lVar18 + 8) == 0x13) {
    StringName::operator=((StringName *)&local_50,(StringName *)(lVar18 + 0x148));
    goto LAB_0010207e;
  }
  if (*(int *)(lVar18 + 8) == 0x20) {
    lVar2 = *(long *)(lVar18 + 0x150);
    if (*(char *)(lVar18 + 0x158) == '\0') {
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x129) != '\0')) &&
         ((*(int *)(lVar2 + 0x130) == 4 || (*(int *)(lVar2 + 0x130) == 0x15)))) {
        Variant::operator_cast_to_StringName((Variant *)&local_48);
        if (local_50 == local_48) {
          if ((StringName::configured != '\0') && (local_50 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_50 = local_48;
        }
        goto LAB_0010207e;
      }
      goto LAB_00101ff0;
    }
    if (lVar2 == 0) goto LAB_00101ff0;
    StringName::operator=((StringName *)&local_50,(StringName *)(lVar2 + 0x148));
LAB_0010207e:
    local_48 = 0;
    if (local_50 == 0) goto LAB_00101ff0;
    lVar18 = local_50;
    if ((*(long *)(this + 0x1f8) != 0) && (*(int *)(this + 0x21c) != 0)) {
      uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
      uVar11 = *(uint *)(local_50 + 0x20);
      if (*(uint *)(local_50 + 0x20) == 0) {
        uVar11 = 1;
      }
      uVar17 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar14 = *(uint *)(*(long *)(this + 0x210) + lVar13 * 4);
      iVar12 = SUB164(auVar3 * auVar7,8);
      if (uVar14 != 0) {
        do {
          if ((uVar14 == uVar11) &&
             (*(long *)(*(long *)(this + 0x1f8) +
                       (ulong)*(uint *)(*(long *)(this + 0x200) + lVar13 * 4) * 8) == local_50)) {
            pEVar15 = *(ExpressionNode **)(param_1 + 0x158);
            if (pEVar15 == (ExpressionNode *)0x0) {
              _err_print_error("_is_constant_string",
                               "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",0x4d
                               ,"Parameter \"p_expression\" is null.",0,0);
              lVar18 = local_50;
              if (StringName::configured == '\0') goto LAB_001021cb;
              if (local_48 == 0) {
                if (*(long *)(this + 0x280) != local_50) goto LAB_001022fa;
                goto LAB_001021e0;
              }
              StringName::unref();
              if (local_50 != *(long *)(this + 0x280)) goto LAB_001022e8;
              goto LAB_001021e0;
            }
            if ((pEVar15[0x129] != (ExpressionNode)0x0) &&
               ((*(int *)(pEVar15 + 0x130) == 4 || (*(int *)(pEVar15 + 0x130) == 0x15)))) {
              Variant::operator_cast_to_String((Variant *)&local_48);
              _add_id((String *)this,(int)(Variant *)&local_48);
              lVar18 = local_48;
              if (local_48 != 0) {
                LOCK();
                plVar1 = (long *)(local_48 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void *)(lVar18 + -0x10),false);
                }
              }
              goto LAB_001022e8;
            }
            if (StringName::configured == '\0') goto LAB_001021cb;
            if (*(long *)(this + 0x280) != local_50) goto LAB_0010220f;
            goto LAB_001021e7;
          }
          uVar17 = uVar17 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar16;
          lVar13 = SUB168(auVar4 * auVar8,8);
          uVar14 = *(uint *)(*(long *)(this + 0x210) + lVar13 * 4);
          iVar12 = SUB164(auVar4 * auVar8,8);
        } while ((uVar14 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0x218) * 4) + iVar12) -
                                      SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
        goto LAB_001021fd;
      }
      if (StringName::configured != '\0') {
        lVar18 = *(long *)(this + 0x280);
        goto joined_r0x0010220d;
      }
      goto LAB_001021cb;
    }
LAB_001021fd:
    if (StringName::configured == '\0') goto LAB_001021cb;
    lVar18 = *(long *)(this + 0x280);
joined_r0x0010220d:
    if (lVar18 != local_50) {
LAB_0010220f:
      StringName::unref();
      goto LAB_0010200b;
    }
  }
  else {
LAB_00101ff0:
    if (StringName::configured == '\0') {
      lVar18 = 0;
LAB_001021cb:
      if (lVar18 != *(long *)(this + 0x280)) goto LAB_0010200b;
    }
    else if (*(long *)(this + 0x280) != 0) goto LAB_0010200b;
  }
LAB_001021e0:
  pEVar15 = *(ExpressionNode **)(param_1 + 0x158);
LAB_001021e7:
  _extract_fd_filter_array(this,pEVar15);
LAB_001022e8:
  if (StringName::configured != '\0') {
LAB_001022fa:
    if (local_50 != 0) {
      StringName::unref();
    }
  }
LAB_0010200b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptEditorTranslationParserPlugin::_traverse_block(GDScriptParser::SuiteNode const*) [clone
   .part.0] */

void __thiscall
GDScriptEditorTranslationParserPlugin::_traverse_block
          (GDScriptEditorTranslationParserPlugin *this,SuiteNode *param_1)

{
  AssignmentNode *pAVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  SuiteNode *pSVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(param_1 + 0x138);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = 0;
  do {
    if (*(long *)(lVar4 + -8) <= lVar5) {
      return;
    }
    pAVar1 = *(AssignmentNode **)(lVar4 + lVar5 * 8);
    switch(*(undefined4 *)(pAVar1 + 8)) {
    case 3:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x128));
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x130));
      break;
    case 4:
      _assess_assignment(this,pAVar1);
      break;
    default:
      cVar3 = (**(code **)(*(long *)pAVar1 + 0x10))(pAVar1);
      if (cVar3 != '\0') {
        _assess_expression(this,(ExpressionNode *)pAVar1);
      }
      break;
    case 0x10:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x140));
      pSVar6 = *(SuiteNode **)(pAVar1 + 0x148);
      if (pSVar6 == (SuiteNode *)0x0) break;
      goto LAB_001024ab;
    case 0x14:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x128));
      if (*(SuiteNode **)(pAVar1 + 0x130) != (SuiteNode *)0x0) {
        _traverse_block(this,*(SuiteNode **)(pAVar1 + 0x130));
      }
      pSVar6 = *(SuiteNode **)(pAVar1 + 0x138);
      goto joined_r0x001024a9;
    case 0x17:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x128));
      lVar4 = *(long *)(pAVar1 + 0x138);
      if (lVar4 != 0) {
        lVar8 = 0;
LAB_00102510:
        do {
          if (*(long *)(lVar4 + -8) <= lVar8) break;
          pSVar6 = *(SuiteNode **)(*(long *)(lVar4 + lVar8 * 8) + 0x148);
          if (pSVar6 != (SuiteNode *)0x0) {
            _traverse_block(this,pSVar6);
            lVar4 = *(long *)(pAVar1 + 0x138);
          }
          if (lVar4 == 0) {
            lVar7 = 0;
LAB_00102663:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar7 = *(long *)(lVar4 + -8);
          if (lVar7 <= lVar8) goto LAB_00102663;
          pSVar6 = *(SuiteNode **)(*(long *)(lVar4 + lVar8 * 8) + 0x138);
          if (pSVar6 == (SuiteNode *)0x0) {
            lVar8 = lVar8 + 1;
            goto LAB_00102510;
          }
          lVar8 = lVar8 + 1;
          _traverse_block(this,pSVar6);
          lVar4 = *(long *)(pAVar1 + 0x138);
        } while (lVar4 != 0);
      }
      break;
    case 0x1d:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x128));
      break;
    case 0x26:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x130));
      break;
    case 0x27:
      _assess_expression(this,*(ExpressionNode **)(pAVar1 + 0x128));
      pSVar6 = *(SuiteNode **)(pAVar1 + 0x130);
joined_r0x001024a9:
      if (pSVar6 != (SuiteNode *)0x0) {
LAB_001024ab:
        _traverse_block(this,pSVar6);
      }
    }
    lVar4 = *(long *)(param_1 + 0x138);
    lVar5 = lVar5 + 1;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}



/* GDScriptEditorTranslationParserPlugin::_traverse_block(GDScriptParser::SuiteNode const*) */

void __thiscall
GDScriptEditorTranslationParserPlugin::_traverse_block
          (GDScriptEditorTranslationParserPlugin *this,SuiteNode *param_1)

{
  if (param_1 != (SuiteNode *)0x0) {
    _traverse_block(this,param_1);
    return;
  }
  return;
}



/* GDScriptEditorTranslationParserPlugin::_traverse_function(GDScriptParser::FunctionNode const*)
   [clone .part.0] */

void __thiscall
GDScriptEditorTranslationParserPlugin::_traverse_function
          (GDScriptEditorTranslationParserPlugin *this,FunctionNode *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x138);
  for (lVar2 = 0; (lVar1 != 0 && (lVar2 < *(long *)(lVar1 + -8))); lVar2 = lVar2 + 1) {
    _assess_expression(this,*(ExpressionNode **)(*(long *)(lVar1 + lVar2 * 8) + 0x130));
    lVar1 = *(long *)(param_1 + 0x138);
  }
  if (*(SuiteNode **)(param_1 + 0x178) != (SuiteNode *)0x0) {
    _traverse_block(this,*(SuiteNode **)(param_1 + 0x178));
    return;
  }
  return;
}



/* GDScriptEditorTranslationParserPlugin::_traverse_function(GDScriptParser::FunctionNode const*) */

void __thiscall
GDScriptEditorTranslationParserPlugin::_traverse_function
          (GDScriptEditorTranslationParserPlugin *this,FunctionNode *param_1)

{
  if (param_1 != (FunctionNode *)0x0) {
    _traverse_function(this,param_1);
    return;
  }
  return;
}



/* GDScriptEditorTranslationParserPlugin::_assess_expression(GDScriptParser::ExpressionNode const*)
    */

void __thiscall
GDScriptEditorTranslationParserPlugin::_assess_expression
          (GDScriptEditorTranslationParserPlugin *this,ExpressionNode *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (ExpressionNode *)0x0) {
    return;
  }
  do {
    switch(*(undefined4 *)((CallNode *)param_1 + 8)) {
    default:
      return;
    case 2:
      lVar2 = *(long *)((CallNode *)param_1 + 0x150);
      if (lVar2 == 0) {
        return;
      }
      lVar4 = 0;
      do {
        if (*(long *)(lVar2 + -8) <= lVar4) {
          return;
        }
        lVar5 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        _assess_expression(this,*(ExpressionNode **)(lVar2 + lVar5));
        lVar2 = *(long *)((CallNode *)param_1 + 0x150);
      } while (lVar2 != 0);
      return;
    case 4:
      _assess_assignment(this,(AssignmentNode *)param_1);
      return;
    case 5:
    case 10:
    case 0x24:
      param_1 = *(ExpressionNode **)((CallNode *)param_1 + 0x148);
      break;
    case 9:
      _assess_call(this,(CallNode *)param_1);
      return;
    case 0xe:
      lVar2 = *(long *)((CallNode *)param_1 + 0x150);
      if (lVar2 == 0) {
        return;
      }
      lVar4 = 0;
      goto LAB_0010287a;
    case 0x15:
      if (*(FunctionNode **)((CallNode *)param_1 + 0x148) != (FunctionNode *)0x0) {
        _traverse_function(this,*(FunctionNode **)((CallNode *)param_1 + 0x148));
        return;
      }
      return;
    case 0x20:
      _assess_expression(this,*(ExpressionNode **)((CallNode *)param_1 + 0x148));
      if (((CallNode *)param_1)[0x158] != (CallNode)0x0) {
        return;
      }
    case 0x25:
      param_1 = *(ExpressionNode **)((CallNode *)param_1 + 0x150);
      break;
    case 0x22:
      _assess_expression(this,*(ExpressionNode **)((CallNode *)param_1 + 0x148));
    case 6:
      _assess_expression(this,*(ExpressionNode **)((CallNode *)param_1 + 0x150));
      param_1 = *(ExpressionNode **)((CallNode *)param_1 + 0x158);
    }
    if (param_1 == (ExpressionNode *)0x0) {
      return;
    }
  } while( true );
LAB_0010287a:
  if (*(long *)(lVar2 + -8) <= lVar4) {
    return;
  }
  lVar5 = lVar4 * 0x10;
  _assess_expression(this,*(ExpressionNode **)(lVar2 + lVar5));
  lVar2 = *(long *)((CallNode *)param_1 + 0x150);
  if (lVar2 == 0) {
    lVar3 = 0;
LAB_001028a6:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = *(long *)(lVar2 + -8);
  if (lVar3 <= lVar4) goto LAB_001028a6;
  lVar4 = lVar4 + 1;
  _assess_expression(this,*(ExpressionNode **)(lVar2 + 8 + lVar5));
  lVar2 = *(long *)((CallNode *)param_1 + 0x150);
  if (lVar2 == 0) {
    return;
  }
  goto LAB_0010287a;
}



/* GDScriptEditorTranslationParserPlugin::_assess_call(GDScriptParser::CallNode const*) */

void __thiscall
GDScriptEditorTranslationParserPlugin::_assess_call
          (GDScriptEditorTranslationParserPlugin *this,CallNode *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
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
  code *pcVar21;
  bool bVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  long in_FS_OFFSET;
  StringName *this_00;
  long local_78;
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _assess_expression(this,*(ExpressionNode **)(param_1 + 0x148));
  lVar24 = *(long *)(param_1 + 0x158);
  for (lVar29 = 0; (lVar24 != 0 && (lVar29 < *(long *)(lVar24 + -8))); lVar29 = lVar29 + 1) {
    _assess_expression(this,*(ExpressionNode **)(lVar24 + lVar29 * 8));
    lVar24 = *(long *)(param_1 + 0x158);
  }
  this_00 = (StringName *)&local_78;
  StringName::StringName(this_00,(StringName *)(param_1 + 0x160));
  local_60 = 0;
  CowData<String>::resize<false>((CowData<String> *)&local_60,3);
  if ((local_78 == *(long *)(this + 0x1d8)) || (local_78 == *(long *)(this + 0x1e8))) {
    lVar24 = *(long *)(param_1 + 0x158);
    lVar29 = 0;
    bVar22 = true;
    if (lVar24 != 0) {
      do {
        while( true ) {
          if (*(long *)(lVar24 + -8) <= lVar29) goto LAB_00102d10;
          lVar30 = *(long *)(lVar24 + lVar29 * 8);
          if (lVar30 != 0) break;
          _err_print_error("_is_constant_string",
                           "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",0x4d,
                           "Parameter \"p_expression\" is null.",0,0,this_00);
          lVar24 = *(long *)(param_1 + 0x158);
LAB_00102c40:
          bVar22 = false;
LAB_00102c43:
          lVar29 = lVar29 + 1;
          if (lVar24 == 0) goto LAB_00102d10;
        }
        if ((*(char *)(lVar30 + 0x129) == '\0') ||
           ((*(int *)(lVar30 + 0x130) != 4 && (*(int *)(lVar30 + 0x130) != 0x15))))
        goto LAB_00102c40;
        if (lVar24 == 0) {
          lVar24 = 0;
          goto LAB_00103149;
        }
        lVar24 = *(long *)(lVar24 + -8);
        if (lVar24 <= lVar29) goto LAB_00103149;
        Variant::operator_cast_to_String((Variant *)&local_58);
        if (local_60 == 0) goto LAB_00102f40;
        lVar24 = *(long *)(local_60 + -8);
        if (lVar24 <= lVar29) goto LAB_00102f43;
        CowData<String>::_copy_on_write((CowData<String> *)&local_60);
        lVar30 = local_58;
        plVar31 = (long *)(lVar29 * 8 + local_60);
        lVar24 = *plVar31;
        if (lVar24 == local_58) {
          if (lVar24 != 0) {
            LOCK();
            plVar31 = (long *)(lVar24 + -0x10);
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (*plVar31 == 0) {
              local_58 = 0;
              Memory::free_static((void *)(lVar30 + -0x10),false);
            }
          }
          lVar24 = *(long *)(param_1 + 0x158);
          goto LAB_00102c43;
        }
        if (lVar24 == 0) {
LAB_00102cf9:
          *plVar31 = local_58;
          lVar24 = *(long *)(param_1 + 0x158);
        }
        else {
          LOCK();
          plVar1 = (long *)(lVar24 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 != 0) {
            *plVar31 = 0;
            goto LAB_00102cf9;
          }
          lVar24 = *plVar31;
          *plVar31 = 0;
          Memory::free_static((void *)(lVar24 + -0x10),false);
          lVar24 = *(long *)(param_1 + 0x158);
          *plVar31 = local_58;
        }
        lVar29 = lVar29 + 1;
      } while (lVar24 != 0);
LAB_00102d10:
      if (!bVar22) goto LAB_00102be8;
    }
  }
  else {
    if ((local_78 != *(long *)(this + 0x1e0)) && (local_78 != *(long *)(this + 0x1f0))) {
      if ((*(long *)(this + 0x220) != 0) && (*(int *)(this + 0x244) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4);
        lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x240) * 8);
        if (local_78 == 0) {
          uVar23 = StringName::get_empty_hash();
        }
        else {
          uVar23 = *(uint *)(local_78 + 0x20);
        }
        uVar27 = CONCAT44(0,uVar2);
        if (uVar23 == 0) {
          uVar23 = 1;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar23 * lVar24;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        lVar29 = SUB168(auVar5 * auVar13,8);
        uVar26 = *(uint *)(*(long *)(this + 0x238) + lVar29 * 4);
        iVar25 = SUB164(auVar5 * auVar13,8);
        if (uVar26 != 0) {
          uVar28 = 0;
          do {
            if ((uVar26 == uVar23) &&
               (local_78 ==
                *(long *)(*(long *)(this + 0x220) +
                         (ulong)*(uint *)(*(long *)(this + 0x228) + lVar29 * 4) * 8))) {
              plVar31 = *(long **)(param_1 + 0x158);
              if (plVar31 == (long *)0x0) goto LAB_00102be8;
              lVar24 = plVar31[-1];
              if (lVar24 < 1) goto LAB_0010323d;
              lVar24 = *plVar31;
              goto joined_r0x001030f4;
            }
            uVar28 = uVar28 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar25 + 1) * lVar24;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar27;
            lVar29 = SUB168(auVar6 * auVar14,8);
            uVar26 = *(uint *)(*(long *)(this + 0x238) + lVar29 * 4);
            iVar25 = SUB164(auVar6 * auVar14,8);
          } while ((uVar26 != 0) &&
                  (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar24, auVar15._8_8_ = 0,
                  auVar15._0_8_ = uVar27, auVar8._8_8_ = 0,
                  auVar8._0_8_ = (ulong)((uVar2 + iVar25) - SUB164(auVar7 * auVar15,8)) * lVar24,
                  auVar16._8_8_ = 0, auVar16._0_8_ = uVar27, uVar28 <= SUB164(auVar8 * auVar16,8)));
        }
      }
      if ((*(long *)(this + 0x248) != 0) && (*(int *)(this + 0x26c) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
        lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x268) * 8);
        if (local_78 == 0) {
          uVar23 = StringName::get_empty_hash();
        }
        else {
          uVar23 = *(uint *)(local_78 + 0x20);
        }
        uVar27 = CONCAT44(0,uVar2);
        if (uVar23 == 0) {
          uVar23 = 1;
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar23 * lVar24;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar27;
        lVar29 = SUB168(auVar9 * auVar17,8);
        uVar26 = *(uint *)(*(long *)(this + 0x260) + lVar29 * 4);
        iVar25 = SUB164(auVar9 * auVar17,8);
        if (uVar26 != 0) {
          uVar28 = 0;
          do {
            if ((uVar26 == uVar23) &&
               (local_78 ==
                *(long *)(*(long *)(this + 0x248) +
                         (ulong)*(uint *)(*(long *)(this + 0x250) + lVar29 * 4) * 8))) {
              lVar24 = *(long *)(param_1 + 0x158);
              if ((lVar24 != 0) && (1 < *(long *)(lVar24 + -8))) {
                lVar24 = *(long *)(lVar24 + 8);
joined_r0x001030f4:
                if (lVar24 == 0) {
                  _err_print_error("_is_constant_string",
                                   "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",
                                   0x4d,"Parameter \"p_expression\" is null.",0,0,this_00);
                }
                else if ((*(char *)(lVar24 + 0x129) != '\0') &&
                        ((*(int *)(lVar24 + 0x130) == 4 || (*(int *)(lVar24 + 0x130) == 0x15)))) {
                  Variant::operator_cast_to_String((Variant *)&local_58);
                  _add_id((String *)this,(int)(Variant *)&local_58);
                  lVar24 = local_58;
                  if (local_58 != 0) {
                    LOCK();
                    plVar31 = (long *)(local_58 + -0x10);
                    *plVar31 = *plVar31 + -1;
                    UNLOCK();
                    if (*plVar31 == 0) {
                      local_58 = 0;
                      Memory::free_static((void *)(lVar24 + -0x10),false);
                    }
                  }
                }
              }
              goto LAB_00102be8;
            }
            uVar28 = uVar28 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar25 + 1) * lVar24;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar27;
            lVar29 = SUB168(auVar10 * auVar18,8);
            uVar26 = *(uint *)(*(long *)(this + 0x260) + lVar29 * 4);
            iVar25 = SUB164(auVar10 * auVar18,8);
          } while ((uVar26 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar26 * lVar24, auVar19._8_8_ = 0,
                  auVar19._0_8_ = uVar27, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar2 + iVar25) - SUB164(auVar11 * auVar19,8)) * lVar24,
                  auVar20._8_8_ = 0, auVar20._0_8_ = uVar27, uVar28 <= SUB164(auVar12 * auVar20,8)))
          ;
        }
      }
      if (*(long *)(this + 0x270) == local_78) {
        puVar4 = *(undefined8 **)(param_1 + 0x158);
        if (puVar4 != (undefined8 *)0x0) {
          lVar24 = puVar4[-1];
          if (lVar24 < 1) goto LAB_0010323d;
          _extract_fd_filter_string((ExpressionNode *)this,(int)*puVar4);
        }
      }
      else if ((*(long *)(this + 0x278) == local_78) &&
              (puVar4 = *(undefined8 **)(param_1 + 0x158), puVar4 != (undefined8 *)0x0)) {
        lVar24 = puVar4[-1];
        if (lVar24 < 1) {
LAB_0010323d:
          lVar29 = 0;
LAB_00103149:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar29,lVar24,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar21 = (code *)invalidInstructionException();
          (*pcVar21)();
        }
        _extract_fd_filter_array(this,(ExpressionNode *)*puVar4);
      }
      goto LAB_00102be8;
    }
    local_50 = 0;
    Vector<int>::push_back((Vector<int> *)&local_58,0);
    Vector<int>::push_back((Vector<int> *)&local_58,3);
    lVar30 = 0;
    Vector<int>::push_back((Vector<int> *)&local_58,1);
    bVar22 = true;
    lVar32 = local_50;
    if (local_50 != 0) {
      do {
        while( true ) {
          if (*(long *)(lVar32 + -8) <= lVar30) {
            if (!bVar22) goto LAB_00102e88;
            goto LAB_00102e6f;
          }
          lVar3 = *(long *)(param_1 + 0x158);
          lVar29 = (long)*(int *)(lVar32 + lVar30 * 4);
          if (lVar3 != 0) break;
          if (lVar29 < 0) {
            lVar24 = 0;
            goto LAB_00103149;
          }
joined_r0x00102fb6:
          lVar30 = lVar30 + 1;
          if (lVar32 == 0) goto LAB_00102e64;
        }
        lVar24 = *(long *)(lVar3 + -8);
        if (lVar24 <= lVar29) goto joined_r0x00102fb6;
        if (lVar29 < 0) goto LAB_00103149;
        lVar24 = *(long *)(lVar3 + lVar29 * 8);
        if (lVar24 == 0) {
          _err_print_error("_is_constant_string",
                           "modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",0x4d,
                           "Parameter \"p_expression\" is null.",0,0);
          lVar32 = local_50;
LAB_00102e56:
          bVar22 = false;
          goto joined_r0x00102fb6;
        }
        if ((*(char *)(lVar24 + 0x129) == '\0') ||
           ((*(int *)(lVar24 + 0x130) != 4 && (*(int *)(lVar24 + 0x130) != 0x15))))
        goto LAB_00102e56;
        Variant::operator_cast_to_String((Variant *)&local_70);
        lVar29 = lVar30;
        if (local_60 == 0) {
LAB_00102f40:
          lVar24 = 0;
LAB_00102f43:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar29,lVar24,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar21 = (code *)invalidInstructionException();
          (*pcVar21)();
        }
        lVar24 = *(long *)(local_60 + -8);
        if (lVar24 <= lVar30) goto LAB_00102f43;
        CowData<String>::_copy_on_write((CowData<String> *)&local_60);
        lVar29 = local_70;
        plVar31 = (long *)(local_60 + lVar30 * 8);
        lVar24 = *plVar31;
        if (lVar24 == local_70) {
          lVar32 = local_50;
          if (lVar24 != 0) {
            LOCK();
            plVar31 = (long *)(lVar24 + -0x10);
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (*plVar31 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar29 + -0x10),false);
              lVar32 = local_50;
            }
          }
          goto joined_r0x00102fb6;
        }
        if (lVar24 != 0) {
          LOCK();
          plVar1 = (long *)(lVar24 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar24 = *plVar31;
            *plVar31 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
          else {
            *plVar31 = 0;
          }
        }
        *plVar31 = local_70;
        lVar30 = lVar30 + 1;
        lVar32 = local_50;
      } while (local_50 != 0);
LAB_00102e64:
      if (bVar22) {
LAB_00102e6f:
        _add_id_ctx_plural(this,(int)local_68);
        if (lVar32 != 0) {
LAB_00102e88:
          LOCK();
          plVar31 = (long *)(lVar32 + -0x10);
          *plVar31 = *plVar31 + -1;
          UNLOCK();
          if (*plVar31 == 0) {
            Memory::free_static((void *)(local_50 + -0x10),false);
          }
        }
      }
      goto LAB_00102be8;
    }
  }
  _add_id_ctx_plural(this,(int)local_68);
LAB_00102be8:
  CowData<String>::_unref((CowData<String> *)&local_60);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptEditorTranslationParserPlugin::_traverse_class(GDScriptParser::ClassNode const*) */

void __thiscall
GDScriptEditorTranslationParserPlugin::_traverse_class
          (GDScriptEditorTranslationParserPlugin *this,ClassNode *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  FunctionNode *pFVar6;
  
  lVar3 = *(long *)(param_1 + 0x148);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = 0;
  lVar4 = 0;
  do {
    if (*(long *)(lVar3 + -8) <= lVar4) {
      return;
    }
    piVar1 = (int *)(lVar3 + lVar5);
    iVar2 = *piVar1;
    if (iVar2 == 3) {
      pFVar6 = *(FunctionNode **)(piVar1 + 2);
      if (pFVar6 != (FunctionNode *)0x0) {
LAB_00103369:
        _traverse_function(this,pFVar6);
        goto LAB_00103350;
      }
    }
    else if (iVar2 == 5) {
      _assess_expression(this,*(ExpressionNode **)(*(long *)(piVar1 + 2) + 0x130));
      lVar3 = *(long *)(piVar1 + 2);
      if (*(int *)(lVar3 + 0x148) == 1) {
        if (*(FunctionNode **)(lVar3 + 0x150) != (FunctionNode *)0x0) {
          _traverse_function(this,*(FunctionNode **)(lVar3 + 0x150));
          lVar3 = *(long *)(piVar1 + 2);
        }
        pFVar6 = *(FunctionNode **)(lVar3 + 0x160);
        if (pFVar6 != (FunctionNode *)0x0) goto LAB_00103369;
      }
LAB_00103350:
      lVar3 = *(long *)(param_1 + 0x148);
    }
    else if (iVar2 == 1) {
      _traverse_class(this,*(ClassNode **)(piVar1 + 2));
      lVar3 = *(long *)(param_1 + 0x148);
    }
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 0x70;
    if (lVar3 == 0) {
      return;
    }
  } while( true );
}



/* GDScriptEditorTranslationParserPlugin::parse_file(String const&, Vector<Vector<String> >*) */

int __thiscall
GDScriptEditorTranslationParserPlugin::parse_file
          (GDScriptEditorTranslationParserPlugin *this,String *param_1,Vector *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  Object *pOVar9;
  long lVar10;
  void *pvVar11;
  long in_FS_OFFSET;
  int local_adc;
  Object *local_ad8;
  long local_ad0;
  undefined *local_ac8;
  undefined8 local_ac0;
  long *local_ab0;
  void *local_aa0;
  void *local_a98;
  undefined1 local_a90 [16];
  uint local_a80;
  int local_a7c;
  GDScriptParser local_a68 [80];
  ClassNode *local_a18;
  undefined1 local_70 [48];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ad0 = 0;
  local_ac0 = 0;
  local_ac8 = &_LC64;
  String::parse_latin1((StrRange *)&local_ad0);
  ResourceLoader::load(&local_ad8,param_1,(StrRange *)&local_ad0,1,&local_adc);
  lVar10 = local_ad0;
  if (local_ad0 != 0) {
    LOCK();
    plVar1 = (long *)(local_ad0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_ad0 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if (local_adc != 0) {
    operator+((char *)&local_ac8,(String *)"Failed to load ");
    _err_print_error("parse_file","modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",
                     0x32,"Condition \"err\" is true. Returning: err",(GDScriptAnalyzer *)&local_ac8
                     ,0,0);
    puVar6 = local_ac8;
    iVar8 = local_adc;
    if (local_ac8 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_ac8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_ac8 = (undefined *)0x0;
        Memory::free_static(puVar6 + -0x10,false);
        iVar8 = local_adc;
      }
    }
    goto LAB_00103677;
  }
  *(Vector **)(this + 0x1d0) = param_2;
  if ((local_ad8 == (Object *)0x0) ||
     (pOVar9 = (Object *)__dynamic_cast(local_ad8,&Object::typeinfo,&GDScript::typeinfo),
     pOVar9 == (Object *)0x0)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  cVar7 = RefCounted::reference();
  if (cVar7 == '\0') {
    pOVar9 = (Object *)0x0;
  }
  (**(code **)(*(long *)pOVar9 + 0x218))((StrRange *)&local_ad0,pOVar9);
  GDScriptParser::GDScriptParser(local_a68);
  local_adc = GDScriptParser::parse((String *)local_a68,(String *)&local_ad0,SUB81(param_1,0),false)
  ;
  if (local_adc == 0) {
    GDScriptAnalyzer::GDScriptAnalyzer((GDScriptAnalyzer *)&local_ac8,local_a68);
    iVar8 = GDScriptAnalyzer::analyze();
    local_adc = iVar8;
    if (iVar8 == 0) {
      *(undefined1 **)(this + 0x1c8) = local_70;
      _traverse_class(this,local_a18);
      *(undefined8 *)(this + 0x1c8) = 0;
    }
    else {
      _err_print_error("parse_file","modules/gdscript/editor/gdscript_translation_parser_plugin.cpp"
                       ,0x3f,"Condition \"err\" is true. Returning: err",
                       "Failed to analyze GDScript with GDScriptAnalyzer.",0,0);
      iVar8 = local_adc;
    }
    if (local_aa0 != (void *)0x0) {
      if (local_a7c != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)local_a80 * 4);
        if (uVar2 == 0) {
          local_a7c = 0;
          local_a90 = (undefined1  [16])0x0;
        }
        else {
          lVar10 = 0;
          pvVar11 = local_aa0;
          do {
            if (*(int *)((long)local_a98 + lVar10) != 0) {
              pvVar11 = *(void **)((long)pvVar11 + lVar10 * 2);
              *(int *)((long)local_a98 + lVar10) = 0;
              if ((*(long *)((long)pvVar11 + 0x18) != 0) &&
                 (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
                pOVar4 = *(Object **)((long)pvVar11 + 0x18);
                cVar7 = predelete_handler(pOVar4);
                if (cVar7 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))();
                  Memory::free_static(pOVar4,false);
                }
              }
              Memory::free_static(pvVar11,false);
              *(undefined8 *)((long)local_aa0 + lVar10 * 2) = 0;
              pvVar11 = local_aa0;
            }
            lVar10 = lVar10 + 4;
          } while (lVar10 != (ulong)uVar2 << 2);
          local_a7c = 0;
          local_a90 = (undefined1  [16])0x0;
          local_aa0 = pvVar11;
          if (pvVar11 == (void *)0x0) goto LAB_001035dc;
        }
      }
      Memory::free_static(local_aa0,false);
      Memory::free_static(local_a98,false);
    }
LAB_001035dc:
    if (local_ab0 != (long *)0x0) {
      do {
        plVar1 = local_ab0;
        pvVar11 = (void *)*local_ab0;
        if (pvVar11 == (void *)0x0) {
          if ((int)local_ab0[2] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00103648;
          }
          break;
        }
        if (*(long **)((long)pvVar11 + 0x18) == local_ab0) {
          lVar10 = *(long *)((long)pvVar11 + 8);
          lVar3 = *(long *)((long)pvVar11 + 0x10);
          *local_ab0 = lVar10;
          if (pvVar11 == (void *)local_ab0[1]) {
            local_ab0[1] = lVar3;
          }
          if (lVar3 != 0) {
            *(long *)(lVar3 + 8) = lVar10;
            lVar10 = *(long *)((long)pvVar11 + 8);
          }
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x10) = lVar3;
          }
          Memory::free_static(pvVar11,false);
          *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
      } while ((int)local_ab0[2] != 0);
      Memory::free_static(local_ab0,false);
    }
  }
  else {
    _err_print_error("parse_file","modules/gdscript/editor/gdscript_translation_parser_plugin.cpp",
                     0x3b,"Condition \"err\" is true. Returning: err",
                     "Failed to parse GDScript with GDScriptParser.",0,0);
    iVar8 = local_adc;
  }
LAB_00103648:
  GDScriptParser::~GDScriptParser(local_a68);
  lVar10 = local_ad0;
  if (local_ad0 == 0) {
LAB_00103667:
    cVar7 = RefCounted::unreference();
  }
  else {
    LOCK();
    plVar1 = (long *)(local_ad0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00103667;
    local_ad0 = 0;
    Memory::free_static((void *)(lVar10 + -0x10),false);
    cVar7 = RefCounted::unreference();
  }
  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar9), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
LAB_00103677:
  if (((local_ad8 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_ad8), cVar7 != '\0')) {
    (**(code **)(*(long *)local_ad8 + 0x140))(local_ad8);
    Memory::free_static(local_ad8,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
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
  return (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* GDScriptEditorTranslationParserPlugin::is_class_ptr(void*) const */

uint __thiscall
GDScriptEditorTranslationParserPlugin::is_class_ptr
          (GDScriptEditorTranslationParserPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1076,(undefined4 *)param_1 ==
                               &EditorTranslationParserPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GDScriptEditorTranslationParserPlugin::_getv(StringName const&, Variant&) const */

undefined8 GDScriptEditorTranslationParserPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptEditorTranslationParserPlugin::_setv(StringName const&, Variant const&) */

undefined8 GDScriptEditorTranslationParserPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptEditorTranslationParserPlugin::_validate_propertyv(PropertyInfo&) const */

void GDScriptEditorTranslationParserPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GDScriptEditorTranslationParserPlugin::_property_can_revertv(StringName const&) const */

undefined8 GDScriptEditorTranslationParserPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GDScriptEditorTranslationParserPlugin::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
GDScriptEditorTranslationParserPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GDScriptEditorTranslationParserPlugin::_notificationv(int, bool) */

void GDScriptEditorTranslationParserPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001073f0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001073f0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* GDScriptEditorTranslationParserPlugin::_get_class_namev() const */

undefined8 * GDScriptEditorTranslationParserPlugin::_get_class_namev(void)

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
LAB_00103bc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103bc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GDScriptEditorTranslationParserPlugin");
      goto LAB_00103c2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "GDScriptEditorTranslationParserPlugin");
LAB_00103c2e:
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
LAB_00103ca3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103ca3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00103d0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00103d0e:
  return &_get_class_namev()::_class_name_static;
}



/* GDScriptEditorTranslationParserPlugin::~GDScriptEditorTranslationParserPlugin() */

void __thiscall
GDScriptEditorTranslationParserPlugin::~GDScriptEditorTranslationParserPlugin
          (GDScriptEditorTranslationParserPlugin *this)

{
  long lVar1;
  void *pvVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00107550;
  if (bVar3) {
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103dc2;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103dc2;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
    }
  }
LAB_00103dc2:
  pvVar2 = *(void **)(this + 0x248);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4) != 0) {
        memset(*(void **)(this + 0x260),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4) << 2);
        if (*(int *)(this + 0x26c) == 0) goto LAB_001040e0;
      }
      lVar1 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
          StringName::unref();
          pvVar2 = *(void **)(this + 0x248);
        }
        lVar1 = lVar1 + 1;
      } while ((uint)lVar1 < *(uint *)(this + 0x26c));
      *(undefined4 *)(this + 0x26c) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_00103e5e;
    }
LAB_001040e0:
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 600),false);
    Memory::free_static(*(void **)(this + 0x250),false);
    Memory::free_static(*(void **)(this + 0x260),false);
  }
LAB_00103e5e:
  pvVar2 = *(void **)(this + 0x220);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x244) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4) != 0) {
        memset(*(void **)(this + 0x238),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4) << 2);
        if (*(int *)(this + 0x244) == 0) goto LAB_00104120;
      }
      lVar1 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
          StringName::unref();
          pvVar2 = *(void **)(this + 0x220);
        }
        lVar1 = lVar1 + 1;
      } while ((uint)lVar1 < *(uint *)(this + 0x244));
      *(undefined4 *)(this + 0x244) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_00103ef6;
    }
LAB_00104120:
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x230),false);
    Memory::free_static(*(void **)(this + 0x228),false);
    Memory::free_static(*(void **)(this + 0x238),false);
  }
LAB_00103ef6:
  pvVar2 = *(void **)(this + 0x1f8);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4) != 0) {
        memset(*(void **)(this + 0x210),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4) << 2);
        if (*(int *)(this + 0x21c) == 0) goto LAB_001040a0;
      }
      lVar1 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
          StringName::unref();
          pvVar2 = *(void **)(this + 0x1f8);
        }
        lVar1 = lVar1 + 1;
      } while ((uint)lVar1 < *(uint *)(this + 0x21c));
      *(undefined4 *)(this + 0x21c) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_00103f8e;
    }
LAB_001040a0:
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x208),false);
    Memory::free_static(*(void **)(this + 0x200),false);
    Memory::free_static(*(void **)(this + 0x210),false);
  }
LAB_00103f8e:
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0x1f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104085;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104085;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104085;
    }
    if (*(long *)(this + 0x1d8) == 0) {
      *(code **)this = memcpy;
    }
    else {
      StringName::unref();
      bVar3 = StringName::configured == '\0';
      *(code **)this = memcpy;
      if (bVar3) goto LAB_00104085;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104085;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104085;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00104085:
  *(undefined ***)this = &PTR__initialize_classv_001073f0;
  Object::~Object((Object *)this);
  return;
}



/* GDScriptEditorTranslationParserPlugin::~GDScriptEditorTranslationParserPlugin() */

void __thiscall
GDScriptEditorTranslationParserPlugin::~GDScriptEditorTranslationParserPlugin
          (GDScriptEditorTranslationParserPlugin *this)

{
  ~GDScriptEditorTranslationParserPlugin(this);
  operator_delete(this,0x288);
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<String>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptEditorTranslationParserPlugin::parse_file(String const&, Vector<Vector<String> >*) [clone
   .cold] */

void GDScriptEditorTranslationParserPlugin::parse_file(String *param_1,Vector *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptEditorTranslationParserPlugin::get_class() const */

void GDScriptEditorTranslationParserPlugin::get_class(void)

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
            if (lVar5 == 0) goto LAB_001046af;
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
LAB_001046af:
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
    if (cVar6 != '\0') goto LAB_00104763;
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
              if (lVar5 == 0) goto LAB_00104813;
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
LAB_00104813:
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
      if (cVar6 != '\0') goto LAB_00104763;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104763:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptEditorTranslationParserPlugin::is_class(String const&) const */

undefined8 __thiscall
GDScriptEditorTranslationParserPlugin::is_class
          (GDScriptEditorTranslationParserPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010494f;
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
LAB_0010494f:
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
    if (cVar6 != '\0') goto LAB_00104a03;
  }
  cVar6 = String::operator==(param_1,"GDScriptEditorTranslationParserPlugin");
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
              if (lVar5 == 0) goto LAB_00104ac3;
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
LAB_00104ac3:
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
      if (cVar6 != '\0') goto LAB_00104a03;
    }
    cVar6 = String::operator==(param_1,"EditorTranslationParserPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00104b6c;
    }
  }
LAB_00104a03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104b6c:
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
LAB_00104e88:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104e88;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104ea6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104ea6:
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



/* GDScriptEditorTranslationParserPlugin::_initialize_classv() */

void GDScriptEditorTranslationParserPlugin::_initialize_classv(void)

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
    if (EditorTranslationParserPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorTranslationParserPlugin";
      local_70 = 0;
      local_50 = 0x1d;
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
      if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
        EditorTranslationParserPlugin::_bind_methods();
      }
      EditorTranslationParserPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorTranslationParserPlugin";
    local_68 = 0;
    local_50 = 0x1d;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GDScriptEditorTranslationParserPlugin";
    local_70 = 0;
    local_50 = 0x25;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorTranslationParserPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorTranslationParserPlugin::_get_property_listv
          (EditorTranslationParserPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorTranslationParserPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorTranslationParserPlugin";
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
  if (local_90 == 0) {
LAB_001056a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001056a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001056c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001056c5:
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
  StringName::StringName((StringName *)&local_78,"EditorTranslationParserPlugin",false);
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



/* GDScriptEditorTranslationParserPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
GDScriptEditorTranslationParserPlugin::_get_property_listv
          (GDScriptEditorTranslationParserPlugin *this,List *param_1,bool param_2)

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
    EditorTranslationParserPlugin::_get_property_listv
              ((EditorTranslationParserPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GDScriptEditorTranslationParserPlugin";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GDScriptEditorTranslationParserPlugin";
  local_98 = 0;
  local_70 = 0x25;
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
LAB_00105af8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105af8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105b15;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105b15:
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
  StringName::StringName((StringName *)&local_78,"GDScriptEditorTranslationParserPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorTranslationParserPlugin::_get_property_listv
                ((EditorTranslationParserPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (*in_RSI != 0) goto LAB_001060ec;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_001060ec:
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
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00106538;
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
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC20) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00106415;
LAB_00106576:
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
      goto LAB_00106538;
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
    if (lVar30 == 0) goto LAB_00106576;
LAB_00106415:
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
LAB_00106538:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
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
LAB_00106af0:
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
  if (lVar10 == 0) goto LAB_00106af0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001069c9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001069c9;
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
    goto LAB_00106b46;
  }
  if (lVar10 == lVar7) {
LAB_00106a6f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00106b46:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00106a5a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00106a6f;
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
LAB_00106a5a:
  puVar9[-1] = param_1;
  return 0;
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
LAB_00106dd0:
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
  if (lVar8 == 0) goto LAB_00106dd0;
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
        goto LAB_00106ce1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106ce1:
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



/* CowData<Vector<String> >::_unref() */

void __thiscall CowData<Vector<String>>::_unref(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<String> *this_00;
  
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
        this_00 = (CowData<String> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<String>::_unref(this_00);
          this_00 = this_00 + 0x10;
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



/* CowData<Vector<String> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<String>>::_realloc(CowData<Vector<String>> *this,long param_1)

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
/* Error CowData<Vector<String> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<String>>::resize<false>(CowData<Vector<String>> *this,long param_1)

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
  undefined8 *puVar11;
  
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
LAB_001071d0:
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
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_001071d0;
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
      CowData<String>::_unref((CowData<String> *)(lVar5 + 8 + uVar9 * 0x10));
      uVar9 = uVar9 + 1;
    }
    goto LAB_00107226;
  }
  if (lVar10 == lVar7) {
LAB_00107143:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00107226:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_001070a9;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00107143;
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
  puVar11 = puVar6 + param_1 * 2;
  puVar2 = puVar6 + lVar5 * 2;
  if (((int)puVar11 - (int)puVar2 & 0x10U) != 0) {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    if (puVar2 == puVar11) goto LAB_001070a9;
  }
  do {
    puVar2[1] = 0;
    puVar3 = puVar2 + 4;
    puVar2[3] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar11);
LAB_001070a9:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptEditorTranslationParserPlugin::~GDScriptEditorTranslationParserPlugin() */

void __thiscall
GDScriptEditorTranslationParserPlugin::~GDScriptEditorTranslationParserPlugin
          (GDScriptEditorTranslationParserPlugin *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


