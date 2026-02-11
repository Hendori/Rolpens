
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



/* GDScriptDocGen::_get_script_name(String const&) */

GDScriptDocGen * __thiscall GDScriptDocGen::_get_script_name(GDScriptDocGen *this,String *param_1)

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
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((singletons._8_8_ != 0) && (singletons._44_4_ != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)singletons._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)singletons._40_4_ * 8);
    uVar13 = String::hash();
    uVar14 = 1;
    if (uVar13 != 0) {
      uVar14 = uVar13;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar14 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar13 = *(uint *)(singletons._16_8_ + lVar16 * 4);
    uVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar13 != 0) {
      uVar19 = 0;
      lVar17 = singletons._16_8_;
      do {
        if ((uVar14 == uVar13) &&
           (cVar12 = String::operator==((String *)(*(long *)(singletons._8_8_ + lVar16 * 8) + 0x10),
                                        param_1), lVar17 = singletons._16_8_, cVar12 != '\0')) {
          lVar3 = *(long *)(singletons._8_8_ + (ulong)uVar15 * 8);
          if (lVar3 != 0) {
            *(undefined8 *)this = 0;
            if (*(long *)(lVar3 + 0x18) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(lVar3 + 0x18));
            }
            goto LAB_001001c8;
          }
          break;
        }
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar15 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar13 = *(uint *)(lVar17 + lVar16 * 4);
        uVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar13 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar13 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar15) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar18, uVar19 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  String::trim_prefix((char *)&local_68);
  local_58 = &_LC4;
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::quote((String *)this);
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
LAB_001001c8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GDScriptDocGen::_get_class_name(GDScriptParser::ClassNode const&) */

GDScriptDocGen * __thiscall GDScriptDocGen::_get_class_name(GDScriptDocGen *this,ClassNode *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char *local_78;
  long local_70;
  long local_68;
  char *local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x128) == 0) {
    _get_script_name(this,(String *)(param_1 + 0x298));
    goto LAB_001005a8;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x128) + 0x148);
  if (lVar4 == 0) {
LAB_001006c9:
    local_78 = (char *)0x0;
  }
  else {
    pcVar2 = *(char **)(lVar4 + 8);
    local_78 = (char *)0x0;
    if (pcVar2 == (char *)0x0) {
      if (*(long *)(lVar4 + 0x10) == 0) goto LAB_001006c9;
      plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
      do {
        lVar5 = *plVar1;
        if (lVar5 == 0) goto LAB_001003e7;
        LOCK();
        lVar3 = *plVar1;
        bVar6 = lVar5 == lVar3;
        if (bVar6) {
          *plVar1 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar3 != -1) {
        local_78 = *(char **)(lVar4 + 0x10);
      }
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_78);
    }
  }
LAB_001003e7:
  lVar4 = *(long *)(param_1 + 0x180);
  if (lVar4 != 0) {
    do {
      lVar5 = *(long *)(lVar4 + 0x128);
      local_60 = (char *)0x0;
      if (lVar5 == 0) {
        plVar1 = (long *)(local_78 + -0x10);
        if (local_78 == (char *)0x0) goto LAB_001005fc;
        goto LAB_001005d9;
      }
      if (local_78 != (char *)0x0) {
        plVar1 = (long *)(local_78 + -0x10);
        do {
          lVar5 = *plVar1;
          if (lVar5 == 0) goto LAB_00100519;
          LOCK();
          lVar3 = *plVar1;
          bVar6 = lVar5 == lVar3;
          if (bVar6) {
            *plVar1 = lVar5 + 1;
            lVar3 = lVar5;
          }
          UNLOCK();
        } while (!bVar6);
        if (lVar3 != -1) {
          local_60 = local_78;
        }
LAB_00100519:
        lVar5 = *(long *)(lVar4 + 0x128);
      }
      StringName::StringName((StringName *)&local_68,(StringName *)(lVar5 + 0x148));
      local_58 = "%s.%s";
      local_70 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName,String>(&local_58,(StrRange *)&local_70,(StringName *)&local_68,&local_60);
      pcVar2 = local_78;
      if (local_78 == local_58) {
        if (local_78 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_58 + -0x10,false);
          }
        }
      }
      else {
        if (local_78 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        local_78 = local_58;
      }
      lVar5 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      pcVar2 = local_60;
      if (local_60 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar4 = *(long *)(lVar4 + 0x180);
    } while (lVar4 != 0);
  }
  *(char **)this = local_78;
LAB_001005a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
LAB_001005d9:
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) goto LAB_001005fc;
    LOCK();
    lVar3 = *plVar1;
    bVar6 = lVar5 == lVar3;
    if (bVar6) {
      *plVar1 = lVar5 + 1;
      lVar3 = lVar5;
    }
    UNLOCK();
  } while (!bVar6);
  if (lVar3 != -1) {
    local_60 = local_78;
  }
LAB_001005fc:
  _get_script_name((GDScriptDocGen *)&local_70,(String *)(lVar4 + 0x298));
  local_58 = "%s.%s";
  local_68 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  vformat<String,String>(this,(StringName *)&local_68,(StrRange *)&local_70,&local_60);
  lVar4 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pcVar2 = local_60;
  if (local_60 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  pcVar2 = local_78;
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  goto LAB_001005a8;
}



/* GDScriptDocGen::_docvalue_from_variant(Variant const&, int) */

GDScriptDocGen * __thiscall
GDScriptDocGen::_docvalue_from_variant(GDScriptDocGen *this,Variant *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  Object *pOVar10;
  long lVar11;
  Object *pOVar12;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  Variant local_a0 [8];
  undefined8 local_98;
  long *local_90;
  Variant local_88 [8];
  long local_80;
  long local_78;
  char *local_70;
  char *local_68;
  size_t local_60;
  int local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)param_1;
  if (uVar2 != 0x1b) {
    if (uVar2 < 0x1c) {
      if (uVar2 == 4) {
        Variant::operator_cast_to_String((Variant *)&local_80);
        String::c_escape();
        local_68 = "\"";
        local_70 = (char *)0x0;
        local_60 = 1;
        String::parse_latin1((StrRange *)&local_70);
        String::quote((String *)this);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        goto LAB_00100800;
      }
      if (uVar2 == 0x18) {
        *(undefined8 *)this = 0;
        local_68 = "<Object>";
        local_60 = 8;
        String::parse_latin1((StrRange *)this);
        goto LAB_00100800;
      }
    }
    else if (uVar2 == 0x1c) {
      Variant::operator_cast_to_Array(local_88);
      local_80 = 0;
      cVar6 = Array::is_typed();
      if (cVar6 != '\0') {
        String::operator+=((String *)&local_80,"Array[");
        Array::get_typed_script();
        lVar11 = Variant::get_validated_object();
        if (lVar11 == 0) {
LAB_00101460:
          cVar6 = Variant::needs_deinit[local_58];
        }
        else {
          pOVar12 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo,0);
          if (pOVar12 != (Object *)0x0) {
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') goto LAB_00101460;
            if (Variant::needs_deinit[local_58] != '\0') {
              Variant::_clear_internal();
            }
            local_68 = (char *)0x0;
            (**(code **)(*(long *)pOVar12 + 0x1e0))((StrRange *)&local_70,pOVar12);
            pcVar5 = local_68;
            pcVar3 = local_70;
            if (local_70 == (char *)0x0) {
LAB_00100e9a:
              if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
                StringName::unref();
              }
            }
            else if (StringName::configured != '\0') {
              StringName::unref();
              goto LAB_00100e9a;
            }
            if (pcVar3 == pcVar5) {
              Resource::get_path();
              String::get_file();
              if ((local_68 == (char *)0x0) ||
                 (uVar4 = *(undefined8 *)(local_68 + -8), (int)uVar4 == 0)) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              }
              else {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                if ((int)uVar4 != 1) {
                  Resource::get_path();
                  String::get_file();
                  String::operator+=((String *)&local_80,(String *)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                  goto LAB_00100f5f;
                }
              }
              Array::get_typed_class_name();
              if (local_70 == (char *)0x0) {
                local_68 = (char *)0x0;
              }
              else {
                local_68 = (char *)0x0;
                if (*(char **)(local_70 + 8) == (char *)0x0) {
                  if (*(long *)(local_70 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
                }
              }
              String::operator+=((String *)&local_80,(String *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
                StringName::unref();
              }
            }
            else {
              (**(code **)(*(long *)pOVar12 + 0x1e0))(&local_78,pOVar12);
              if (local_78 == 0) {
                local_70 = (char *)0x0;
              }
              else {
                pcVar3 = *(char **)(local_78 + 8);
                local_70 = (char *)0x0;
                if (pcVar3 == (char *)0x0) {
                  if (*(long *)(local_78 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
                  }
                }
                else {
                  local_60 = strlen(pcVar3);
                  local_68 = pcVar3;
                  String::parse_latin1((StrRange *)&local_70);
                }
              }
              String::operator+=((String *)&local_80,(String *)&local_70);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_78 != 0)) {
                StringName::unref();
              }
            }
LAB_00100f5f:
            String::operator+=((String *)&local_80,"](");
            cVar6 = RefCounted::unreference();
            if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
            }
            goto LAB_00100869;
          }
          cVar6 = Variant::needs_deinit[local_58];
        }
        if (cVar6 != '\0') {
          Variant::_clear_internal();
        }
        local_68 = (char *)0x0;
        Array::get_typed_class_name();
        pcVar5 = local_68;
        pcVar3 = local_70;
        if (local_70 == (char *)0x0) {
LAB_001013b7:
          if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else if (StringName::configured != '\0') {
          StringName::unref();
          goto LAB_001013b7;
        }
        if (pcVar3 == pcVar5) {
          uVar9 = Array::get_typed_builtin();
          Variant::get_type_name((String *)&local_68,uVar9);
          String::operator+=((String *)&local_80,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          String::operator+=((String *)&local_80,"](");
        }
        else {
          Array::get_typed_class_name();
          if (local_70 == (char *)0x0) {
            local_68 = (char *)0x0;
          }
          else {
            local_68 = (char *)0x0;
            if (*(char **)(local_70 + 8) == (char *)0x0) {
              if (*(long *)(local_70 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10))
                ;
              }
            }
            else {
              String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
            }
          }
          String::operator+=((String *)&local_80,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
            StringName::unref();
          }
          String::operator+=((String *)&local_80,"](");
        }
      }
LAB_00100869:
      cVar6 = Array::is_empty();
      if (cVar6 == '\0') {
        if (param_2 < 3) {
          String::operator+=((String *)&local_80,"[");
          iVar7 = Array::size();
          if (0 < iVar7) {
            iVar7 = 0;
            while( true ) {
              pVVar13 = (Variant *)Array::operator[]((int)local_88);
              _docvalue_from_variant((GDScriptDocGen *)&local_68,pVVar13,param_2 + 1);
              String::operator+=((String *)&local_80,(String *)&local_68);
              pcVar3 = local_68;
              if (local_68 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_68 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_68 = (char *)0x0;
                  Memory::free_static(pcVar3 + -0x10,false);
                }
              }
              iVar7 = iVar7 + 1;
              iVar8 = Array::size();
              if (iVar8 <= iVar7) break;
              String::operator+=((String *)&local_80,", ");
            }
          }
          String::operator+=((String *)&local_80,"]");
        }
        else {
          String::operator+=((String *)&local_80,"[...]");
        }
      }
      else {
        String::operator+=((String *)&local_80,"[]");
      }
      cVar6 = Array::is_typed();
      if (cVar6 != '\0') {
        String::operator+=((String *)&local_80,")");
      }
      *(long *)this = local_80;
      Array::~Array((Array *)local_88);
      goto LAB_00100800;
    }
    Variant::get_construct_string();
    goto LAB_00100800;
  }
  Variant::operator_cast_to_Dictionary(local_a0);
  local_98 = 0;
  cVar6 = Dictionary::is_typed();
  if (cVar6 != '\0') {
    String::operator+=((String *)&local_98,"Dictionary[");
    Dictionary::get_typed_key_script();
    lVar11 = Variant::get_validated_object();
    if (lVar11 == 0) {
LAB_00101480:
      cVar6 = Variant::needs_deinit[local_58];
joined_r0x00101261:
      if (cVar6 != '\0') {
        Variant::_clear_internal();
      }
      local_68 = (char *)0x0;
      Dictionary::get_typed_key_class_name();
      pcVar5 = local_68;
      pcVar3 = local_70;
      if (local_70 == (char *)0x0) {
LAB_001012b1:
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else if (StringName::configured != '\0') {
        StringName::unref();
        goto LAB_001012b1;
      }
      if (pcVar3 == pcVar5) {
        cVar6 = Dictionary::is_typed_key();
        if (cVar6 == '\0') {
          String::operator+=((String *)&local_98,"Variant");
        }
        else {
          uVar9 = Dictionary::get_typed_key_builtin();
          Variant::get_type_name((CowData<char32_t> *)&local_68,uVar9);
          String::operator+=((String *)&local_98,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
      }
      else {
        Dictionary::get_typed_key_class_name();
        if (local_70 == (char *)0x0) {
          local_68 = (char *)0x0;
        }
        else {
          local_68 = (char *)0x0;
          if (*(char **)(local_70 + 8) == (char *)0x0) {
            if (*(long *)(local_70 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
          }
        }
        String::operator+=((String *)&local_98,(String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
          StringName::unref();
        }
      }
      pOVar12 = (Object *)0x0;
    }
    else {
      pOVar12 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar12 == (Object *)0x0) {
        cVar6 = Variant::needs_deinit[local_58];
        goto joined_r0x00101261;
      }
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') goto LAB_00101480;
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      local_68 = (char *)0x0;
      (**(code **)(*(long *)pOVar12 + 0x1e0))((StrRange *)&local_70,pOVar12);
      pcVar5 = local_68;
      pcVar3 = local_70;
      if (local_70 == (char *)0x0) {
LAB_00100afe:
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else if (StringName::configured != '\0') {
        StringName::unref();
        goto LAB_00100afe;
      }
      if (pcVar5 == pcVar3) {
        Resource::get_path();
        String::get_file();
        if ((local_68 == (char *)0x0) || (uVar4 = *(undefined8 *)(local_68 + -8), (int)uVar4 == 0))
        {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((int)uVar4 != 1) {
            Resource::get_path();
            String::get_file();
            String::operator+=((String *)&local_98,(String *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            goto LAB_00100bb2;
          }
        }
        Dictionary::get_typed_key_class_name();
        if (local_70 == (char *)0x0) {
          local_68 = (char *)0x0;
        }
        else {
          local_68 = (char *)0x0;
          if (*(char **)(local_70 + 8) == (char *)0x0) {
            if (*(long *)(local_70 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
          }
        }
        String::operator+=((String *)&local_98,(String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        (**(code **)(*(long *)pOVar12 + 0x1e0))(&local_78,pOVar12);
        if (local_78 == 0) {
          local_70 = (char *)0x0;
        }
        else {
          pcVar3 = *(char **)(local_78 + 8);
          local_70 = (char *)0x0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(local_78 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
            }
          }
          else {
            local_60 = strlen(pcVar3);
            local_68 = pcVar3;
            String::parse_latin1((StrRange *)&local_70);
          }
        }
        String::operator+=((String *)&local_98,(String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_78 != 0)) {
          StringName::unref();
        }
      }
    }
LAB_00100bb2:
    String::operator+=((String *)&local_98,", ");
    Dictionary::get_typed_value_script();
    lVar11 = Variant::get_validated_object();
    if (lVar11 == 0) {
LAB_001014b0:
      cVar6 = Variant::needs_deinit[local_58];
joined_r0x001015ff:
      if (cVar6 != '\0') {
        Variant::_clear_internal();
      }
      local_68 = (char *)0x0;
      Dictionary::get_typed_value_class_name();
      pcVar5 = local_68;
      pcVar3 = local_70;
      if (local_70 == (char *)0x0) {
LAB_00101510:
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else if (StringName::configured != '\0') {
        StringName::unref();
        goto LAB_00101510;
      }
      if (pcVar3 == pcVar5) {
        cVar6 = Dictionary::is_typed_value();
        if (cVar6 == '\0') {
          String::operator+=((String *)&local_98,"Variant");
          String::operator+=((String *)&local_98,"](");
        }
        else {
          uVar9 = Dictionary::get_typed_value_builtin();
          Variant::get_type_name((CowData<char32_t> *)&local_68,uVar9);
          String::operator+=((String *)&local_98,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          String::operator+=((String *)&local_98,"](");
        }
      }
      else {
        Dictionary::get_typed_value_class_name();
        if (local_70 == (char *)0x0) {
          local_68 = (char *)0x0;
        }
        else {
          local_68 = (char *)0x0;
          if (*(char **)(local_70 + 8) == (char *)0x0) {
            if (*(long *)(local_70 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
          }
        }
        String::operator+=((String *)&local_98,(String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
          StringName::unref();
        }
        String::operator+=((String *)&local_98,"](");
      }
    }
    else {
      pOVar10 = (Object *)__dynamic_cast(lVar11,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar10 == (Object *)0x0) {
        cVar6 = Variant::needs_deinit[local_58];
        goto joined_r0x001015ff;
      }
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') goto LAB_001014b0;
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
      local_68 = (char *)0x0;
      (**(code **)(*(long *)pOVar10 + 0x1e0))((StrRange *)&local_70,pOVar10);
      pcVar5 = local_68;
      pcVar3 = local_70;
      if (local_70 == (char *)0x0) {
LAB_00100c86:
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else if (StringName::configured != '\0') {
        StringName::unref();
        goto LAB_00100c86;
      }
      if (pcVar3 == pcVar5) {
        Resource::get_path();
        String::get_file();
        if ((local_68 == (char *)0x0) || (uVar4 = *(undefined8 *)(local_68 + -8), (int)uVar4 == 0))
        {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((int)uVar4 != 1) {
            Resource::get_path();
            String::get_file();
            String::operator+=((String *)&local_98,(String *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            goto LAB_00100d4b;
          }
        }
        Dictionary::get_typed_value_class_name();
        if (local_70 == (char *)0x0) {
          local_68 = (char *)0x0;
        }
        else {
          local_68 = (char *)0x0;
          if (*(char **)(local_70 + 8) == (char *)0x0) {
            if (*(long *)(local_70 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
          }
        }
        String::operator+=((String *)&local_98,(String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((StringName::configured != '\0') && (local_70 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        (**(code **)(*(long *)pOVar10 + 0x1e0))(&local_78,pOVar10);
        if (local_78 == 0) {
          local_70 = (char *)0x0;
        }
        else {
          pcVar3 = *(char **)(local_78 + 8);
          local_70 = (char *)0x0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(local_78 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
            }
          }
          else {
            local_60 = strlen(pcVar3);
            local_68 = pcVar3;
            String::parse_latin1((StrRange *)&local_70);
          }
        }
        String::operator+=((String *)&local_98,(String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_78 != 0)) {
          StringName::unref();
        }
      }
LAB_00100d4b:
      String::operator+=((String *)&local_98,"](");
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
    if (((pOVar12 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  cVar6 = Dictionary::is_empty();
  if (cVar6 == '\0') {
    if (param_2 < 3) {
      String::operator+=((String *)&local_98,"{");
      local_90 = (long *)0x0;
      Dictionary::get_key_list((List *)local_a0);
      List<Variant,DefaultAllocator>::sort_custom<StringLikeVariantOrder>
                ((List<Variant,DefaultAllocator> *)&local_90);
      if ((local_90 != (long *)0x0) && (pVVar13 = (Variant *)*local_90, pVVar13 != (Variant *)0x0))
      {
        do {
          if (*(long *)(pVVar13 + 0x20) != 0) {
            String::operator+=((String *)&local_98,", ");
          }
          pVVar14 = (Variant *)Dictionary::operator[](local_a0);
          _docvalue_from_variant((GDScriptDocGen *)&local_70,pVVar14,param_2 + 1);
          local_68 = ": ";
          local_80 = 0;
          local_60 = 2;
          String::parse_latin1((StrRange *)&local_80);
          _docvalue_from_variant((GDScriptDocGen *)local_88,pVVar13,param_2 + 1);
          String::operator+((String *)&local_78,(String *)local_88);
          String::operator+((String *)&local_68,(String *)&local_78);
          String::operator+=((String *)&local_98,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          lVar11 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          pVVar13 = *(Variant **)(pVVar13 + 0x18);
        } while (pVVar13 != (Variant *)0x0);
      }
      String::operator+=((String *)&local_98,"}");
      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_90);
    }
    else {
      String::operator+=((String *)&local_98,"{...}");
    }
  }
  else {
    String::operator+=((String *)&local_98,"{}");
  }
  cVar6 = Dictionary::is_typed();
  if (cVar6 != '\0') {
    String::operator+=((String *)&local_98,")");
  }
  *(undefined8 *)this = local_98;
  Dictionary::~Dictionary((Dictionary *)local_a0);
LAB_00100800:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GDScriptDocGen::docvalue_from_expression(GDScriptParser::ExpressionNode const*) */

GDScriptDocGen * __thiscall
GDScriptDocGen::docvalue_from_expression(GDScriptDocGen *this,ExpressionNode *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (ExpressionNode *)0x0) {
    _err_print_error("docvalue_from_expression","modules/gdscript/editor/gdscript_docgen.cpp",0x125,
                     "Parameter \"p_expression\" is null.",0,0);
    *(undefined8 *)this = 0;
    goto LAB_00101d69;
  }
  if (param_1[0x129] != (ExpressionNode)0x0) {
    _docvalue_from_variant(this,(Variant *)(param_1 + 0x130),1);
    goto LAB_00101d69;
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0xe) {
    lVar3 = *(long *)(param_1 + 0x150);
    local_40 = 5;
    *(undefined8 *)this = 0;
    local_48 = "{...}";
    if (lVar3 == 0) {
      local_40 = 2;
      local_48 = "{}";
    }
LAB_00101db1:
    String::parse_latin1((StrRange *)this);
  }
  else {
    if (uVar2 < 0xf) {
      if (uVar2 == 2) {
        lVar3 = *(long *)(param_1 + 0x150);
        local_40 = 2;
        *(undefined8 *)this = 0;
        local_48 = "[]";
        if (lVar3 != 0) {
          local_40 = 5;
          local_48 = "[...]";
        }
        goto LAB_00101db1;
      }
      if (uVar2 == 9) {
        local_40 = 5;
        local_50 = 0;
        local_48 = "(...)";
        if (*(long *)(param_1 + 0x158) == 0) {
          local_40 = 2;
          local_48 = "()";
        }
        String::parse_latin1((StrRange *)&local_50);
        lVar3 = *(long *)(param_1 + 0x160);
        if (lVar3 == 0) {
          local_58 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar3 + 8);
          local_58 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar3 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar3 + 0x10));
            }
          }
          else {
            local_40 = strlen(pcVar4);
            local_48 = pcVar4;
            String::parse_latin1((StrRange *)&local_58);
          }
        }
        String::operator+((String *)this,(String *)&local_58);
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
        goto LAB_00101d69;
      }
    }
    else if (uVar2 == 0x13) {
      lVar3 = *(long *)(param_1 + 0x148);
      if (lVar3 == 0) {
        *(undefined8 *)this = 0;
      }
      else {
        pcVar4 = *(char **)(lVar3 + 8);
        *(undefined8 *)this = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar3 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)(lVar3 + 0x10));
          }
        }
        else {
          local_40 = strlen(pcVar4);
          local_48 = pcVar4;
          String::parse_latin1((StrRange *)this);
        }
      }
      goto LAB_00101d69;
    }
    *(undefined8 *)this = 0;
    local_48 = "<unknown>";
    local_40 = 9;
    String::parse_latin1((StrRange *)this);
  }
LAB_00101d69:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<DocData::ArgumentDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ArgumentDoc>::_copy_on_write(CowData<DocData::ArgumentDoc> *this)

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
  if (lVar2 * 0x28 != 0) {
    uVar7 = lVar2 * 0x28 - 1;
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
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x28;
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



/* CowData<DocData::TutorialDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::TutorialDoc>::_copy_on_write(CowData<DocData::TutorialDoc> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  ulong uVar5;
  CowData<char32_t> *this_00;
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
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(lVar6 * 0x10 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar4);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar4 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x10;
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



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ConstantDoc>::_copy_on_write(CowData<DocData::ConstantDoc> *this)

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
  if (lVar2 * 0x60 != 0) {
    uVar7 = lVar2 * 0x60 - 1;
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
        CVar1 = pCVar6[0x10];
        *(undefined8 *)(this_00 + 0x18) = 0;
        lVar3 = *(long *)(pCVar6 + 0x18);
        *(CowData *)(this_00 + 0x10) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x18,pCVar6 + 0x18);
        }
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar6 + 0x20) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        CVar1 = pCVar6[0x28];
        *(undefined8 *)(this_00 + 0x30) = 0;
        lVar3 = *(long *)(pCVar6 + 0x30);
        *(CowData *)(this_00 + 0x28) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x30,pCVar6 + 0x30);
        }
        CVar1 = pCVar6[0x38];
        *(undefined8 *)(this_00 + 0x40) = 0;
        lVar3 = *(long *)(pCVar6 + 0x40);
        *(CowData *)(this_00 + 0x38) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x40,pCVar6 + 0x40);
        }
        CVar1 = pCVar6[0x48];
        *(undefined8 *)(this_00 + 0x50) = 0;
        lVar3 = *(long *)(pCVar6 + 0x50);
        *(CowData *)(this_00 + 0x48) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x50,pCVar6 + 0x50);
        }
        *(undefined8 *)(this_00 + 0x58) = 0;
        if (*(long *)(pCVar6 + 0x58) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x58,pCVar6 + 0x58);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x60;
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



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::PropertyDoc>::_copy_on_write(CowData<DocData::PropertyDoc> *this)

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
        *(undefined8 *)(this_00 + 0x30) = 0;
        if (*(long *)(pCVar6 + 0x30) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x30,pCVar6 + 0x30);
        }
        *(undefined8 *)(this_00 + 0x38) = 0;
        if (*(long *)(pCVar6 + 0x38) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x38,pCVar6 + 0x38);
        }
        CVar1 = pCVar6[0x40];
        *(undefined8 *)(this_00 + 0x48) = 0;
        lVar3 = *(long *)(pCVar6 + 0x48);
        *(CowData *)(this_00 + 0x40) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x48,pCVar6 + 0x48);
        }
        CVar1 = pCVar6[0x50];
        *(undefined8 *)(this_00 + 0x58) = 0;
        lVar3 = *(long *)(pCVar6 + 0x58);
        *(CowData *)(this_00 + 0x50) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x58,pCVar6 + 0x58);
        }
        CVar1 = pCVar6[0x60];
        *(undefined8 *)(this_00 + 0x68) = 0;
        lVar3 = *(long *)(pCVar6 + 0x68);
        *(CowData *)(this_00 + 0x60) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x68,pCVar6 + 0x68);
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



/* GDScriptDocGen::_doctype_from_gdtype(GDScriptParser::DataType const&, String&, String&, bool) */

void GDScriptDocGen::_doctype_from_gdtype
               (DataType *param_1,String *param_2,String *param_3,bool param_4)

{
  long lVar1;
  char *pcVar2;
  DataType *pDVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 local_170;
  undefined8 local_168;
  String local_160 [8];
  undefined8 local_158;
  CowData<char32_t> local_150 [8];
  long local_148;
  char *local_140;
  char *local_138;
  size_t local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x14) < 2) {
switchD_00102a5e_caseD_5:
    local_130 = 7;
    local_138 = "Variant";
    String::parse_latin1((StrRange *)param_2);
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      iVar8 = *(int *)(param_1 + 0x20);
      if (iVar8 != 0) {
        if (iVar8 == 0x1c) {
          pDVar3 = *(DataType **)(param_1 + 8);
          if ((pDVar3 != (DataType *)0x0) && (0 < *(long *)(pDVar3 + -8))) {
            GDScriptParser::DataType::DataType((DataType *)&local_138,pDVar3);
            _doctype_from_gdtype((DataType *)&local_138,param_2,param_3,false);
            GDScriptParser::DataType::~DataType((DataType *)&local_138);
            if ((*(long *)param_3 != 0) && (1 < *(uint *)(*(long *)param_3 + -8))) {
              local_130 = 5;
              local_138 = "int[]";
              String::parse_latin1((StrRange *)param_2);
              param_2 = param_3;
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001035df:
                String::operator+=(param_2,"[]");
                return;
              }
              goto LAB_00103634;
            }
            if (((*(long *)param_2 != 0) && (1 < *(uint *)(*(long *)param_2 + -8))) &&
               (cVar7 = String::operator!=(param_2,"Variant"), cVar7 != '\0')) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001035df;
              goto LAB_00103634;
            }
            iVar8 = *(int *)(param_1 + 0x20);
            goto LAB_00102c49;
          }
        }
        else {
LAB_00102c49:
          if ((iVar8 == 0x1b) && (pDVar3 = *(DataType **)(param_1 + 8), pDVar3 != (DataType *)0x0))
          {
            local_170 = 0;
            local_168 = 0;
            if (*(long *)(pDVar3 + -8) < 1) {
              local_11c = 0;
              local_130 = 0;
              local_120 = 0;
              local_118 = 0;
              local_e0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_b8 = 6;
              local_b0 = 1;
              local_a8 = 0;
              local_98 = 0;
              local_90 = 0;
              local_80 = 0;
              local_50 = 2;
              local_128 = _LC64;
              local_110 = (undefined1  [16])0x0;
              local_100 = (undefined1  [16])0x0;
              local_f0 = (undefined1  [16])0x0;
              local_d8 = (undefined1  [16])0x0;
              local_70 = (undefined1  [16])0x0;
              local_60 = (undefined1  [16])0x0;
            }
            else {
              GDScriptParser::DataType::DataType((DataType *)&local_138,pDVar3);
            }
            _doctype_from_gdtype((DataType *)&local_138,(String *)&local_170,param_3,false);
            GDScriptParser::DataType::~DataType((DataType *)&local_138);
            lVar1 = *(long *)(param_1 + 8);
            if ((lVar1 == 0) || (*(long *)(lVar1 + -8) < 2)) {
              local_11c = 0;
              local_130 = 0;
              local_120 = 0;
              local_118 = 0;
              local_e0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_b8 = 6;
              local_b0 = 1;
              local_a8 = 0;
              local_98 = 0;
              local_90 = 0;
              local_80 = 0;
              local_50 = 2;
              local_128 = _LC64;
              local_110 = (undefined1  [16])0x0;
              local_100 = (undefined1  [16])0x0;
              local_f0 = (undefined1  [16])0x0;
              local_d8 = (undefined1  [16])0x0;
              local_70 = (undefined1  [16])0x0;
              local_60 = (undefined1  [16])0x0;
            }
            else {
              GDScriptParser::DataType::DataType((DataType *)&local_138,(DataType *)(lVar1 + 0xf0));
            }
            _doctype_from_gdtype((DataType *)&local_138,(String *)&local_168,param_3,false);
            GDScriptParser::DataType::~DataType((DataType *)&local_138);
            cVar7 = String::operator!=((String *)&local_170,"Variant");
            if ((cVar7 != '\0') ||
               (cVar7 = String::operator!=((String *)&local_168,"Variant"), cVar7 != '\0')) {
              local_140 = (char *)0x0;
              local_138 = "]";
              local_130 = 1;
              String::parse_latin1((StrRange *)&local_140);
              local_138 = ", ";
              local_158 = 0;
              local_130 = 2;
              String::parse_latin1((StrRange *)&local_158);
              operator+((char *)local_160,(String *)"Dictionary[");
              String::operator+((String *)local_150,local_160);
              String::operator+((String *)&local_148,(String *)local_150);
              String::operator+((String *)&local_138,(String *)&local_148);
              if (*(char **)param_2 != local_138) {
                CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
                pcVar2 = local_138;
                local_138 = (char *)0x0;
                *(char **)param_2 = pcVar2;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
              CowData<char32_t>::_unref(local_150);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
              break;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
            iVar8 = *(int *)(param_1 + 0x20);
          }
        }
        Variant::get_type_name((DataType *)&local_138,iVar8);
        if (*(char **)param_2 != local_138) goto LAB_001030d5;
        goto LAB_001030ee;
      }
      local_130 = 4;
      local_138 = "null";
      if (param_4) {
        local_138 = "void";
      }
      String::parse_latin1((StrRange *)param_2);
      break;
    case 1:
      if (param_1[0x1a] == (DataType)0x0) {
        lVar1 = *(long *)(param_1 + 0x28);
        if (lVar1 != 0) {
          pcVar2 = *(char **)(lVar1 + 8);
          local_140 = (char *)0x0;
          if (pcVar2 != (char *)0x0) {
            local_130 = strlen(pcVar2);
            local_138 = pcVar2;
            goto LAB_00102f37;
          }
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(lVar1 + 0x10));
            goto LAB_00102f4e;
          }
        }
        local_140 = (char *)0x0;
LAB_00102f4e:
        if (*(char **)param_2 != local_140) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
          pcVar2 = local_140;
          local_140 = (char *)0x0;
          *(char **)param_2 = pcVar2;
        }
LAB_00102f6c:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      else {
        local_130 = 6;
        local_138 = "Object";
        String::parse_latin1((StrRange *)param_2);
      }
      break;
    case 2:
      plVar4 = *(long **)(param_1 + 0x38);
      if (param_1[0x1a] != (DataType)0x0) {
        if (plVar4 == (long *)0x0) {
          local_140 = (char *)0x0;
          local_138 = "Script";
          local_130 = 6;
          goto LAB_00102f37;
        }
        (**(code **)(*plVar4 + 0x48))(&local_140);
        goto LAB_00102f4e;
      }
      if (plVar4 != (long *)0x0) {
        local_138 = (char *)0x0;
        (**(code **)(*plVar4 + 0x1e0))((StrRange *)&local_140);
        pcVar6 = local_138;
        pcVar2 = local_140;
        if (local_140 == (char *)0x0) {
LAB_00102fdf:
          if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else if (StringName::configured != '\0') {
          StringName::unref();
          goto LAB_00102fdf;
        }
        if (pcVar2 != pcVar6) {
          (**(code **)(**(long **)(param_1 + 0x38) + 0x1e0))(&local_148);
          if (local_148 == 0) {
LAB_00103509:
            local_140 = (char *)0x0;
          }
          else {
            pcVar2 = *(char **)(local_148 + 8);
            local_140 = (char *)0x0;
            if (pcVar2 == (char *)0x0) {
              if (*(long *)(local_148 + 0x10) == 0) goto LAB_00103509;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_148 + 0x10))
              ;
            }
            else {
              local_130 = strlen(pcVar2);
              local_138 = pcVar2;
              String::parse_latin1((StrRange *)&local_140);
            }
          }
          if (*(char **)param_2 != local_140) {
            CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
            pcVar2 = local_140;
            local_140 = (char *)0x0;
            *(char **)param_2 = pcVar2;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          if ((StringName::configured != '\0') && (local_148 != 0)) {
            StringName::unref();
          }
          break;
        }
        Resource::get_path();
        if ((local_138 == (char *)0x0) || (uVar5 = *(undefined8 *)(local_138 + -8), (int)uVar5 == 0)
           ) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if ((int)uVar5 != 1) {
            Resource::get_path();
            _get_script_name((GDScriptDocGen *)&local_138,(String *)&local_140);
            pcVar2 = *(char **)param_2;
            if (pcVar2 != local_138) {
              if (pcVar2 != (char *)0x0) {
                LOCK();
                plVar4 = (long *)(pcVar2 + -0x10);
                *plVar4 = *plVar4 + -1;
                UNLOCK();
                if (*plVar4 == 0) {
                  lVar1 = *(long *)param_2;
                  *(undefined8 *)param_2 = 0;
                  Memory::free_static((void *)(lVar1 + -0x10),false);
                }
              }
              pcVar2 = local_138;
              local_138 = (char *)0x0;
              *(char **)param_2 = pcVar2;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            break;
          }
        }
      }
      if ((*(long *)(param_1 + 0x40) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0x40) + -8))) {
        _get_script_name((GDScriptDocGen *)&local_138,(String *)(param_1 + 0x40));
        if (*(char **)param_2 == local_138) goto LAB_001030ee;
LAB_001030d5:
        CowData<char32_t>::_unref((CowData<char32_t> *)param_2);
        pcVar2 = local_138;
        local_138 = (char *)0x0;
        *(char **)param_2 = pcVar2;
        goto LAB_001030ee;
      }
      local_130 = 6;
      local_138 = "Object";
      String::parse_latin1((StrRange *)param_2);
      break;
    case 3:
      if (param_1[0x1a] != (DataType)0x0) {
        local_140 = (char *)0x0;
        local_138 = "GDScript";
        local_130 = 8;
LAB_00102f37:
        String::parse_latin1((StrRange *)&local_140);
        goto LAB_00102f4e;
      }
      _get_class_name((GDScriptDocGen *)&local_138,*(ClassNode **)(param_1 + 0x48));
      if (*(char **)param_2 != local_138) goto LAB_001030d5;
LAB_001030ee:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      break;
    case 4:
      if (param_1[0x1a] == (DataType)0x0) {
        local_130 = 3;
        local_138 = "int";
        String::parse_latin1((StrRange *)param_2);
        lVar1 = *(long *)(param_1 + 0x28);
        if (lVar1 == 0) {
          local_140 = (char *)0x0;
        }
        else {
          pcVar2 = *(char **)(lVar1 + 8);
          local_140 = (char *)0x0;
          if (pcVar2 == (char *)0x0) {
            if (*(long *)(lVar1 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(lVar1 + 0x10));
            }
          }
          else {
            local_130 = strlen(pcVar2);
            local_138 = pcVar2;
            String::parse_latin1((StrRange *)&local_140);
          }
        }
        String::replace((char *)&local_138,(char *)&local_140);
        if (*(char **)param_3 != local_138) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_3);
          pcVar2 = local_138;
          local_138 = (char *)0x0;
          *(char **)param_3 = pcVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        cVar7 = String::begins_with((char *)param_3);
        if (cVar7 != '\0') {
          iVar8 = String::rfind_char((wchar32)param_3,0x2e);
          if (iVar8 < 0) {
            _get_script_name((GDScriptDocGen *)&local_138,param_3);
            if (*(char **)param_3 != local_138) {
              CowData<char32_t>::_unref((CowData<char32_t> *)param_3);
              pcVar2 = local_138;
              local_138 = (char *)0x0;
              *(char **)param_3 = pcVar2;
            }
            goto LAB_001030ee;
          }
          String::substr((int)(CowData<char32_t> *)&local_140,(wchar32)param_3);
          String::left((int)local_150);
          _get_script_name((GDScriptDocGen *)&local_148,(String *)local_150);
          String::operator+((String *)&local_138,(String *)&local_148);
          if (*(char **)param_3 != local_138) {
            CowData<char32_t>::_unref((CowData<char32_t> *)param_3);
            pcVar2 = local_138;
            local_138 = (char *)0x0;
            *(char **)param_3 = pcVar2;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          CowData<char32_t>::_unref(local_150);
          goto LAB_00102f6c;
        }
      }
      else {
        local_130 = 10;
        local_138 = "Dictionary";
        String::parse_latin1((StrRange *)param_2);
      }
      break;
    case 5:
    case 6:
    case 7:
      goto switchD_00102a5e_caseD_5;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103634:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptDocGen::doctype_from_gdtype(GDScriptParser::DataType const&, String&, String&, bool) */

void GDScriptDocGen::doctype_from_gdtype
               (DataType *param_1,String *param_2,String *param_3,bool param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *__s;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  lVar6 = ProjectSettings::get_autoload_list();
  puVar3 = *(undefined8 **)(lVar6 + 0x18);
  do {
    while( true ) {
      if (puVar3 == (undefined8 *)0x0) {
        _doctype_from_gdtype(param_1,param_2,param_3,param_4);
        if ((singletons._8_8_ != 0) && (singletons._44_4_ != 0)) {
          lVar6 = 0;
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)singletons._40_4_ * 4);
          if (uVar2 != 0) {
            do {
              if (*(int *)(singletons._16_8_ + lVar6) != 0) {
                *(int *)(singletons._16_8_ + lVar6) = 0;
                pvVar4 = *(void **)(singletons._8_8_ + lVar6 * 2);
                if (*(long *)((long)pvVar4 + 0x18) != 0) {
                  LOCK();
                  plVar7 = (long *)(*(long *)((long)pvVar4 + 0x18) + -0x10);
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                    lVar5 = *(long *)((long)pvVar4 + 0x18);
                    *(undefined8 *)((long)pvVar4 + 0x18) = 0;
                    Memory::free_static((void *)(lVar5 + -0x10),false);
                  }
                }
                if (*(long *)((long)pvVar4 + 0x10) != 0) {
                  LOCK();
                  plVar7 = (long *)(*(long *)((long)pvVar4 + 0x10) + -0x10);
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                    lVar5 = *(long *)((long)pvVar4 + 0x10);
                    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
                    Memory::free_static((void *)(lVar5 + -0x10),false);
                  }
                }
                Memory::free_static(pvVar4,false);
                *(undefined8 *)(singletons._8_8_ + lVar6 * 2) = 0;
              }
              lVar6 = lVar6 + 4;
            } while (lVar6 != (ulong)uVar2 << 2);
          }
          singletons._44_4_ = 0;
          singletons._24_16_ = (undefined1  [16])0x0;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(char *)(puVar3 + 5) != '\0') break;
LAB_001036b0:
      puVar3 = (undefined8 *)*puVar3;
    }
    lVar6 = puVar3[2];
    if (lVar6 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar6 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
        if (*(long *)(lVar6 + 0x10) != 0) {
          do {
            lVar5 = *plVar7;
            if (lVar5 == 0) goto LAB_00103706;
            LOCK();
            lVar8 = *plVar7;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar7 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar6 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00103706:
    plVar7 = (long *)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                     ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                   *)singletons,(String *)(puVar3 + 4));
    lVar5 = local_60;
    lVar6 = *plVar7;
    if (lVar6 != local_60) {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar6 = *plVar7;
          *plVar7 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
        else {
          *plVar7 = 0;
        }
      }
      *plVar7 = local_60;
      goto LAB_001036b0;
    }
    if (lVar6 == 0) goto LAB_001036b0;
    LOCK();
    plVar7 = (long *)(lVar6 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 != 0) goto LAB_001036b0;
    local_60 = 0;
    Memory::free_static((void *)(lVar5 + -0x10),false);
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



/* Vector<DocData::ArgumentDoc>::push_back(DocData::ArgumentDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::ArgumentDoc>::push_back(Vector<DocData::ArgumentDoc> *this,CowData *param_2)

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
  iVar1 = CowData<DocData::ArgumentDoc>::resize<false>
                    ((CowData<DocData::ArgumentDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::ArgumentDoc>::_copy_on_write((CowData<DocData::ArgumentDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 0x28);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      this_00[0x18] = *(CowData<char32_t> *)(param_2 + 0x18);
      if (*(long *)(this_00 + 0x20) == *(long *)(param_2 + 0x20)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* Vector<DocData::MethodDoc>::push_back(DocData::MethodDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::MethodDoc>::push_back(Vector<DocData::MethodDoc> *this,CowData *param_2)

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
  iVar1 = CowData<DocData::MethodDoc>::resize<false>
                    ((CowData<DocData::MethodDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 0x78);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      this_00[0x18] = *(CowData<char32_t> *)(param_2 + 0x18);
      if (*(long *)(this_00 + 0x20) != *(long *)(param_2 + 0x20)) {
        CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      }
      if (*(long *)(this_00 + 0x28) != *(long *)(param_2 + 0x28)) {
        CowData<char32_t>::_ref(this_00 + 0x28,param_2 + 0x28);
      }
      this_00[0x30] = *(CowData<char32_t> *)(param_2 + 0x30);
      if (*(long *)(this_00 + 0x38) != *(long *)(param_2 + 0x38)) {
        CowData<char32_t>::_ref(this_00 + 0x38,param_2 + 0x38);
      }
      this_00[0x40] = *(CowData<char32_t> *)(param_2 + 0x40);
      if (*(long *)(this_00 + 0x48) != *(long *)(param_2 + 0x48)) {
        CowData<char32_t>::_ref(this_00 + 0x48,param_2 + 0x48);
      }
      if (*(long *)(this_00 + 0x58) != *(long *)(param_2 + 0x58)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)(this_00 + 0x58),param_2 + 0x58);
      }
      if (*(long *)(this_00 + 0x68) != *(long *)(param_2 + 0x68)) {
        CowData<int>::_ref((CowData<int> *)(this_00 + 0x68),param_2 + 0x68);
      }
      if (*(long *)(this_00 + 0x70) == *(long *)(param_2 + 0x70)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x70,param_2 + 0x70);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* Vector<DocData::ConstantDoc>::push_back(DocData::ConstantDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::ConstantDoc>::push_back(Vector<DocData::ConstantDoc> *this,CowData *param_2)

{
  int iVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DocData::ConstantDoc>::resize<false>
                    ((CowData<DocData::ConstantDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::ConstantDoc>::_copy_on_write((CowData<DocData::ConstantDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(lVar3 * 0x60 + *(long *)(this + 8));
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      this_00[0x10] = *(CowData<char32_t> *)(param_2 + 0x10);
      if (*(long *)(this_00 + 0x18) != *(long *)(param_2 + 0x18)) {
        CowData<char32_t>::_ref(this_00 + 0x18,param_2 + 0x18);
      }
      if (*(long *)(this_00 + 0x20) != *(long *)(param_2 + 0x20)) {
        CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      }
      this_00[0x28] = *(CowData<char32_t> *)(param_2 + 0x28);
      if (*(long *)(this_00 + 0x30) != *(long *)(param_2 + 0x30)) {
        CowData<char32_t>::_ref(this_00 + 0x30,param_2 + 0x30);
      }
      this_00[0x38] = *(CowData<char32_t> *)(param_2 + 0x38);
      if (*(long *)(this_00 + 0x40) != *(long *)(param_2 + 0x40)) {
        CowData<char32_t>::_ref(this_00 + 0x40,param_2 + 0x40);
      }
      this_00[0x48] = *(CowData<char32_t> *)(param_2 + 0x48);
      if (*(long *)(this_00 + 0x50) != *(long *)(param_2 + 0x50)) {
        CowData<char32_t>::_ref(this_00 + 0x50,param_2 + 0x50);
      }
      if (*(long *)(this_00 + 0x58) == *(long *)(param_2 + 0x58)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x58,param_2 + 0x58);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* Vector<DocData::PropertyDoc>::push_back(DocData::PropertyDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::PropertyDoc>::push_back(Vector<DocData::PropertyDoc> *this,CowData *param_2)

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
  iVar1 = CowData<DocData::PropertyDoc>::resize<false>
                    ((CowData<DocData::PropertyDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::PropertyDoc>::_copy_on_write((CowData<DocData::PropertyDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 0x78);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      this_00[0x18] = *(CowData<char32_t> *)(param_2 + 0x18);
      if (*(long *)(this_00 + 0x20) != *(long *)(param_2 + 0x20)) {
        CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      }
      if (*(long *)(this_00 + 0x28) != *(long *)(param_2 + 0x28)) {
        CowData<char32_t>::_ref(this_00 + 0x28,param_2 + 0x28);
      }
      if (*(long *)(this_00 + 0x30) != *(long *)(param_2 + 0x30)) {
        CowData<char32_t>::_ref(this_00 + 0x30,param_2 + 0x30);
      }
      if (*(long *)(this_00 + 0x38) != *(long *)(param_2 + 0x38)) {
        CowData<char32_t>::_ref(this_00 + 0x38,param_2 + 0x38);
      }
      this_00[0x40] = *(CowData<char32_t> *)(param_2 + 0x40);
      if (*(long *)(this_00 + 0x48) != *(long *)(param_2 + 0x48)) {
        CowData<char32_t>::_ref(this_00 + 0x48,param_2 + 0x48);
      }
      this_00[0x50] = *(CowData<char32_t> *)(param_2 + 0x50);
      if (*(long *)(this_00 + 0x58) != *(long *)(param_2 + 0x58)) {
        CowData<char32_t>::_ref(this_00 + 0x58,param_2 + 0x58);
      }
      this_00[0x60] = *(CowData<char32_t> *)(param_2 + 0x60);
      if (*(long *)(this_00 + 0x68) != *(long *)(param_2 + 0x68)) {
        CowData<char32_t>::_ref(this_00 + 0x68,param_2 + 0x68);
      }
      if (*(long *)(this_00 + 0x70) == *(long *)(param_2 + 0x70)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x70,param_2 + 0x70);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* GDScriptDocGen::_generate_docs(GDScript*, GDScriptParser::ClassNode const*) */

void GDScriptDocGen::_generate_docs(GDScript *param_1,ClassNode *param_2)

{
  long *plVar1;
  StringName *this;
  undefined4 uVar2;
  char *pcVar3;
  ClassNode *pCVar4;
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
  undefined8 uVar46;
  CowData<char32_t> CVar47;
  ulong uVar48;
  char *pcVar49;
  char cVar50;
  int iVar51;
  undefined4 *puVar52;
  undefined8 *puVar53;
  code *pcVar54;
  CowData *pCVar55;
  undefined4 *puVar56;
  long *plVar57;
  long lVar58;
  CowData<char32_t> *pCVar59;
  Vector<DocData::MethodDoc> *pVVar60;
  long *plVar61;
  CowData *pCVar62;
  undefined4 *puVar63;
  long lVar64;
  size_t sVar65;
  char *pcVar66;
  long in_FS_OFFSET;
  bool bVar67;
  CowData<char32_t> *local_260;
  CowData<char32_t> *local_250;
  CowData *local_228;
  CowData *local_220;
  long local_208;
  long local_200;
  undefined1 local_1f8 [16];
  long local_1e8;
  CowData<char32_t> local_1e0;
  char *local_1d8 [2];
  undefined1 local_1c8 [16];
  ulong local_1b8;
  StrRange local_1b0;
  undefined7 uStack_1af;
  long lStack_1a8;
  CowData CStack_1a0;
  undefined7 uStack_19f;
  undefined1 local_198 [16];
  ulong local_188;
  ulong local_180;
  undefined1 local_178 [16];
  undefined1 local_168;
  undefined1 local_160 [16];
  char *local_148;
  size_t local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0 [2];
  undefined8 local_e0;
  undefined8 local_d8 [16];
  int local_58 [6];
  long local_40;
  
  pCVar59 = (CowData<char32_t> *)(param_1 + 0x540);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GDScript::_clear_doc();
  lVar64 = *(long *)(param_1 + 0x6d8);
  param_1[0x648] = (GDScript)0x1;
  if (lVar64 == 0) {
    GDScript::get_script_path();
    _get_script_name((GDScriptDocGen *)&local_148,(String *)local_1c8);
    if (*(char **)(param_1 + 0x540) != local_148) {
      CowData<char32_t>::_unref(pCVar59);
      pcVar66 = local_148;
      local_148 = (char *)0x0;
      *(char **)(param_1 + 0x540) = pcVar66;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  }
  else {
    pcVar66 = *(char **)(lVar64 + 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_1c8._8_8_;
    local_1c8 = auVar5 << 0x40;
    if (pcVar66 == (char *)0x0) {
      if (*(long *)(lVar64 + 0x10) == 0) {
        lVar64 = 0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_1c8,(CowData *)(lVar64 + 0x10));
        lVar64 = local_1c8._0_8_;
      }
    }
    else {
      local_140 = strlen(pcVar66);
      local_148 = pcVar66;
      String::parse_latin1((StrRange *)local_1c8);
      lVar64 = local_1c8._0_8_;
    }
    local_260 = (CowData<char32_t> *)local_1c8;
    if (lVar64 != *(long *)(param_1 + 0x540)) {
      CowData<char32_t>::_unref(pCVar59);
      uVar46 = local_1c8._0_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_1c8._8_8_;
      local_1c8 = auVar6 << 0x40;
      *(undefined8 *)(param_1 + 0x540) = uVar46;
    }
    CowData<char32_t>::_unref(local_260);
    if (*(long *)(param_1 + 0x260) != 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_1f8._8_8_;
      local_1f8 = auVar7 << 0x40;
      local_148 = ".";
      local_140 = 1;
      String::parse_latin1((StrRange *)local_1f8);
      String::operator+((String *)local_260,(String *)(*(long *)(param_1 + 0x260) + 0x540));
      String::operator+((String *)&local_148,(String *)local_260);
      if (*(char **)(param_1 + 0x540) != local_148) {
        CowData<char32_t>::_unref(pCVar59);
        pcVar66 = local_148;
        local_148 = (char *)0x0;
        *(char **)(param_1 + 0x540) = pcVar66;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref(local_260);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
    }
  }
  local_260 = (CowData<char32_t> *)local_1c8;
  GDScript::get_script_path();
  if (*(char **)(param_1 + 0x650) != local_148) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x650));
    pcVar66 = local_148;
    local_148 = (char *)0x0;
    *(char **)(param_1 + 0x650) = pcVar66;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  plVar61 = *(long **)(param_1 + 0x250);
  if (plVar61 != (long *)0x0) {
    if (*(code **)(*plVar61 + 0x278) == GDScript::is_valid) {
      cVar50 = *(char *)((long)plVar61 + 0x241);
    }
    else {
      cVar50 = (**(code **)(*plVar61 + 0x278))();
    }
    if (cVar50 != '\0') {
      plVar61 = *(long **)(param_1 + 0x250);
      lVar64 = plVar61[0xa8];
      if ((lVar64 != 0) && (1 < *(uint *)(lVar64 + -8))) {
        if (lVar64 != *(long *)(param_1 + 0x548)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)(param_1 + 0x548),(CowData *)(plVar61 + 0xa8));
        }
        goto LAB_001043d0;
      }
      (**(code **)(*plVar61 + 0x1f0))(local_1f8);
      if (local_1f8._0_8_ == 0) {
        auVar40._8_8_ = 0;
        auVar40._0_8_ = local_1c8._8_8_;
        local_1c8 = auVar40 << 0x40;
LAB_001074a1:
        lVar64 = 0;
      }
      else {
        pcVar66 = *(char **)(local_1f8._0_8_ + 8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_1c8._8_8_;
        local_1c8 = auVar8 << 0x40;
        if (pcVar66 == (char *)0x0) {
          if (*(long *)(local_1f8._0_8_ + 0x10) == 0) goto LAB_001074a1;
          CowData<char32_t>::_ref(local_260,(CowData *)(local_1f8._0_8_ + 0x10));
          lVar64 = local_1c8._0_8_;
        }
        else {
          local_140 = strlen(pcVar66);
          local_148 = pcVar66;
          String::parse_latin1((StrRange *)local_260);
          lVar64 = local_1c8._0_8_;
        }
      }
      if (*(long *)(param_1 + 0x548) != lVar64) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x548));
        uVar46 = local_1c8._0_8_;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_1c8._8_8_;
        local_1c8 = auVar9 << 0x40;
        *(undefined8 *)(param_1 + 0x548) = uVar46;
      }
      CowData<char32_t>::_unref(local_260);
      if ((StringName::configured != '\0') && (local_1f8._0_8_ != 0)) {
        StringName::unref();
      }
      goto LAB_001043d0;
    }
  }
  if (*(long *)(param_1 + 0x248) == 0) goto LAB_001043d0;
  lVar64 = *(long *)(*(long *)(param_1 + 0x248) + 0x180);
  if (lVar64 == 0) {
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_1c8._8_8_;
    local_1c8 = auVar35 << 0x40;
LAB_001072ac:
    lVar64 = 0;
  }
  else {
    pcVar66 = *(char **)(lVar64 + 8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_1c8._8_8_;
    local_1c8 = auVar10 << 0x40;
    if (pcVar66 == (char *)0x0) {
      if (*(long *)(lVar64 + 0x10) == 0) goto LAB_001072ac;
      CowData<char32_t>::_ref(local_260,(CowData *)(lVar64 + 0x10));
      lVar64 = local_1c8._0_8_;
    }
    else {
      local_140 = strlen(pcVar66);
      local_148 = pcVar66;
      String::parse_latin1((StrRange *)local_260);
      lVar64 = local_1c8._0_8_;
    }
  }
  if (*(long *)(param_1 + 0x548) != lVar64) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x548));
    uVar46 = local_1c8._0_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_1c8._8_8_;
    local_1c8 = auVar11 << 0x40;
    *(undefined8 *)(param_1 + 0x548) = uVar46;
  }
  CowData<char32_t>::_unref(local_260);
LAB_001043d0:
  if (*(long *)(param_1 + 0x550) != *(long *)(param_2 + 0x2a0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x550),(CowData *)(param_2 + 0x2a0));
  }
  if (*(long *)(param_1 + 0x558) != *(long *)(param_2 + 0x2a8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x558),(CowData *)(param_2 + 0x2a8));
  }
  pCVar62 = *(CowData **)(param_2 + 0x2b8);
  if ((pCVar62 != (CowData *)0x0) &&
     (pCVar55 = pCVar62 + *(long *)(pCVar62 + -8) * 0x10, pCVar55 != pCVar62)) {
    do {
      local_1c8 = (undefined1  [16])0x0;
      if (*(long *)pCVar62 == 0) {
        if (*(long *)(pCVar62 + 8) != 0) {
LAB_0010448e:
          CowData<char32_t>::_ref(local_260,pCVar62 + 8);
          goto LAB_001044a4;
        }
        local_148 = (char *)0x0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)(local_1c8 + 8),pCVar62);
        if (*(long *)(pCVar62 + 8) != local_1c8._0_8_) goto LAB_0010448e;
LAB_001044a4:
        local_148 = (char *)0x0;
        if (local_1c8._0_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_260);
        }
      }
      local_140 = 0;
      sVar65 = local_1c8._8_8_;
      if (local_1c8._8_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_1c8 + 8));
        sVar65 = local_140;
      }
      if (*(long *)(param_1 + 0x570) == 0) {
        lVar64 = 1;
      }
      else {
        lVar64 = *(long *)(*(long *)(param_1 + 0x570) + -8) + 1;
      }
      iVar51 = CowData<DocData::TutorialDoc>::resize<false>
                         ((CowData<DocData::TutorialDoc> *)(param_1 + 0x570),lVar64);
      if (iVar51 == 0) {
        if (*(long *)(param_1 + 0x570) == 0) {
          lVar58 = -1;
          lVar64 = 0;
        }
        else {
          lVar64 = *(long *)(*(long *)(param_1 + 0x570) + -8);
          lVar58 = lVar64 + -1;
          if (-1 < lVar58) {
            CowData<DocData::TutorialDoc>::_copy_on_write
                      ((CowData<DocData::TutorialDoc> *)(param_1 + 0x570));
            pCVar59 = (CowData<char32_t> *)(lVar58 * 0x10 + *(long *)(param_1 + 0x570));
            if (*(char **)pCVar59 != local_148) {
              CowData<char32_t>::_ref(pCVar59,(CowData *)&local_148);
            }
            if (sVar65 != *(size_t *)(pCVar59 + 8)) {
              CowData<char32_t>::_ref(pCVar59 + 8,(CowData *)&local_140);
            }
            goto LAB_00104583;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar58,lVar64,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00104583:
      if (sVar65 != 0) {
        LOCK();
        plVar61 = (long *)(sVar65 - 0x10);
        *plVar61 = *plVar61 + -1;
        UNLOCK();
        if (*plVar61 == 0) {
          Memory::free_static((void *)(local_140 - 0x10),false);
        }
      }
      if (local_148 != (char *)0x0) {
        LOCK();
        plVar61 = (long *)(local_148 + -0x10);
        *plVar61 = *plVar61 + -1;
        UNLOCK();
        if (*plVar61 == 0) {
          Memory::free_static(local_148 + -0x10,false);
        }
      }
      if (local_1c8._8_8_ != 0) {
        LOCK();
        plVar61 = (long *)(local_1c8._8_8_ + -0x10);
        *plVar61 = *plVar61 + -1;
        UNLOCK();
        if (*plVar61 == 0) {
          Memory::free_static((void *)(local_1c8._8_8_ + -0x10),false);
        }
      }
      if (local_1c8._0_8_ != 0) {
        LOCK();
        plVar61 = (long *)(local_1c8._0_8_ + -0x10);
        *plVar61 = *plVar61 + -1;
        UNLOCK();
        if (*plVar61 == 0) {
          Memory::free_static((void *)(local_1c8._0_8_ + -0x10),false);
        }
      }
      pCVar62 = pCVar62 + 0x10;
    } while (pCVar55 != pCVar62);
  }
  *(ClassNode *)(param_1 + 0x628) = param_2[0x2c0];
  if (*(long *)(param_1 + 0x630) != *(long *)(param_2 + 0x2c8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x630),(CowData *)(param_2 + 0x2c8));
  }
  *(ClassNode *)(param_1 + 0x638) = param_2[0x2d0];
  if (*(long *)(param_1 + 0x640) != *(long *)(param_2 + 0x2d8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x640),(CowData *)(param_2 + 0x2d8));
  }
  puVar63 = *(undefined4 **)(param_2 + 0x148);
  if (puVar63 == (undefined4 *)0x0) {
LAB_00104a1e:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GDScript::_add_doc((ClassDoc *)param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar56 = puVar63 + *(long *)(puVar63 + -2) * 0x1c;
joined_r0x001047b7:
  if (puVar56 != puVar63) {
    do {
      switch(*puVar63) {
      default:
        goto switchD_001047e5_caseD_0;
      case 1:
        pCVar4 = *(ClassNode **)(puVar63 + 2);
        lVar64 = *(long *)(pCVar4 + 0x128);
        uVar2 = *(undefined4 *)(pCVar4 + 0xc);
        puVar52 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                *)(param_1 + 0x468),(StringName *)(lVar64 + 0x148));
        *puVar52 = uVar2;
        puVar53 = (undefined8 *)
                  HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
                  ::operator[]((HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
                                *)(param_1 + 0x360),(StringName *)(lVar64 + 0x148));
        _generate_docs((GDScript *)*puVar53,pCVar4);
        break;
      case 2:
        goto switchD_001047e5_caseD_2;
      case 3:
        puVar53 = *(undefined8 **)(puVar63 + 2);
        lVar64 = puVar53[0x25];
        uVar2 = *(undefined4 *)((long)puVar53 + 0xc);
        this = (StringName *)(lVar64 + 0x148);
        puVar52 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                *)(param_1 + 0x468),this);
        *puVar52 = uVar2;
        local_160 = (undefined1  [16])0x0;
        lVar64 = *(long *)(lVar64 + 0x148);
        local_1b8 = 0;
        local_1b0 = (StrRange)0x0;
        local_198._0_8_ = local_198._1_8_ << 8;
        local_198._8_8_ = 0;
        local_188 = local_188 & 0xffffffffffffff00;
        local_180 = 0;
        local_178._8_8_ = 0;
        local_1c8 = (undefined1  [16])0x0;
        lStack_1a8 = 0;
        CStack_1a0 = (CowData)0x0;
        uStack_19f = 0;
        if (lVar64 == 0) {
          auVar36._8_8_ = 0;
          auVar36._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar36 << 0x40;
        }
        else {
          pcVar66 = *(char **)(lVar64 + 8);
          auVar26._8_8_ = 0;
          auVar26._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar26 << 0x40;
          if (pcVar66 == (char *)0x0) {
            if (*(long *)(lVar64 + 0x10) == 0) goto LAB_00106455;
            CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)(lVar64 + 0x10));
          }
          else {
            local_140 = strlen(pcVar66);
            local_148 = pcVar66;
            String::parse_latin1((StrRange *)local_1f8);
          }
          if (local_1c8._0_8_ != local_1f8._0_8_) {
            CowData<char32_t>::_unref(local_260);
            uVar46 = local_1f8._0_8_;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = local_1f8._8_8_;
            local_1f8 = auVar27 << 0x40;
            local_1c8._0_8_ = uVar46;
          }
        }
LAB_00106455:
        local_250 = (CowData<char32_t> *)local_1f8;
        CowData<char32_t>::_unref(local_250);
        if (CONCAT71(uStack_19f,CStack_1a0) != puVar53[0x45]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&CStack_1a0,(CowData *)(puVar53 + 0x45));
        }
        auVar5 = local_198;
        local_198[0] = (CowData<char32_t>)*(undefined1 *)(puVar53 + 0x46);
        auVar6 = local_198;
        local_198._8_8_ = auVar5._8_8_;
        bVar67 = local_198._8_8_ != puVar53[0x47];
        local_198 = auVar6;
        if (bVar67) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_198 + 8),(CowData *)(puVar53 + 0x47));
        }
        local_188 = CONCAT71(local_188._1_7_,*(undefined1 *)(puVar53 + 0x48));
        if (local_180 != puVar53[0x49]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,(CowData *)(puVar53 + 0x49));
        }
        local_148 = "static";
        local_140 = (size_t)(-(uint)(*(char *)(puVar53 + 0x30) != '\0') & 6);
        if (*(char *)(puVar53 + 0x30) == '\0') {
          local_148 = "";
        }
        String::parse_latin1((StrRange *)&lStack_1a8);
        cVar50 = StringName::operator==(this,"_init");
        if (cVar50 == '\0') {
          if (puVar53[0x2e] == 0) {
            if (*(char *)(puVar53[0x2f] + 0x1c8) == '\0') goto LAB_0010709f;
            local_140 = 7;
            local_148 = "Variant";
            goto LAB_001070ba;
          }
          if (*(code **)*puVar53 == GDScriptParser::Node::get_datatype) {
            GDScriptParser::DataType::DataType((DataType *)&local_148,(DataType *)(puVar53 + 7));
          }
          else {
            (**(code **)*puVar53)((CowData<char32_t> *)&local_148,puVar53);
          }
          _doctype_from_gdtype
                    ((DataType *)&local_148,(String *)(local_1c8 + 8),(String *)&local_1b8,true);
          GDScriptParser::DataType::~DataType((DataType *)&local_148);
        }
        else {
LAB_0010709f:
          local_140 = 4;
          local_148 = "void";
LAB_001070ba:
          String::parse_latin1((StrRange *)(local_1c8 + 8));
        }
        local_220 = (CowData *)(local_1c8 + 8);
        plVar61 = (long *)puVar53[0x27];
        if ((plVar61 != (long *)0x0) && (plVar57 = plVar61 + plVar61[-1], plVar57 != plVar61)) {
          do {
            puVar53 = (undefined8 *)*plVar61;
            local_1e0 = (CowData<char32_t>)0x0;
            local_1e8 = 0;
            local_1f8 = (undefined1  [16])0x0;
            local_1d8[0] = (char *)0x0;
            lVar64 = *(long *)(puVar53[0x25] + 0x148);
            if (lVar64 == 0) {
LAB_0010686a:
              pcVar54 = *(code **)*puVar53;
              if (pcVar54 == GDScriptParser::Node::get_datatype) goto LAB_0010687a;
LAB_00106f4e:
              (*pcVar54)((CowData<char32_t> *)&local_148,puVar53);
            }
            else {
              pcVar66 = *(char **)(lVar64 + 8);
              local_200 = 0;
              if (pcVar66 == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_0010686a;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_200,(CowData *)(lVar64 + 0x10));
              }
              else {
                local_140 = strlen(pcVar66);
                local_148 = pcVar66;
                String::parse_latin1((StrRange *)&local_200);
              }
              lVar64 = local_200;
              uVar46 = local_1f8._0_8_;
              if (local_1f8._0_8_ != local_200) {
                if (local_1f8._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_1f8._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    auVar29._8_8_ = 0;
                    auVar29._0_8_ = local_1f8._8_8_;
                    local_1f8 = auVar29 << 0x40;
                    Memory::free_static((void *)(uVar46 + -0x10),false);
                  }
                }
                local_1f8._0_8_ = local_200;
                goto LAB_0010686a;
              }
              if (local_1f8._0_8_ == 0) goto LAB_0010686a;
              LOCK();
              plVar1 = (long *)(local_1f8._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 != 0) goto LAB_0010686a;
              local_200 = 0;
              Memory::free_static((void *)(lVar64 + -0x10),false);
              pcVar54 = *(code **)*puVar53;
              if (pcVar54 != GDScriptParser::Node::get_datatype) goto LAB_00106f4e;
LAB_0010687a:
              GDScriptParser::DataType::DataType((DataType *)&local_148,(DataType *)(puVar53 + 7));
            }
            _doctype_from_gdtype
                      ((DataType *)&local_148,(String *)(local_1f8 + 8),(String *)&local_1e8,false);
            GDScriptParser::DataType::~DataType((DataType *)&local_148);
            pcVar66 = local_1d8[0];
            if ((ExpressionNode *)puVar53[0x26] != (ExpressionNode *)0x0) {
              docvalue_from_expression((GDScriptDocGen *)&local_148,(ExpressionNode *)puVar53[0x26])
              ;
              pcVar49 = local_148;
              pcVar3 = local_1d8[0];
              if (local_1d8[0] == local_148) {
                pcVar66 = local_1d8[0];
                if (local_1d8[0] != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_1d8[0] + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_148 = (char *)0x0;
                    Memory::free_static(pcVar49 + -0x10,false);
                    pcVar66 = local_1d8[0];
                  }
                }
              }
              else {
                pcVar66 = local_148;
                if (local_1d8[0] != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_1d8[0] + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  pcVar66 = local_148;
                  if (*plVar1 == 0) {
                    local_1d8[0] = (char *)0x0;
                    Memory::free_static(pcVar3 + -0x10,false);
                    pcVar66 = local_148;
                  }
                }
              }
            }
            local_1d8[0] = pcVar66;
            local_148 = (char *)0x0;
            if (local_1f8._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_250);
            }
            local_140 = 0;
            if (local_1f8._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_1f8 + 8));
            }
            local_138 = 0;
            if (local_1e8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_1e8);
            }
            local_128 = 0;
            local_130 = CONCAT71(local_130._1_7_,local_1e0);
            if (local_1d8[0] == (char *)0x0) {
              Vector<DocData::ArgumentDoc>::push_back((Vector<DocData::ArgumentDoc> *)local_178);
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)local_1d8);
              lVar64 = local_128;
              Vector<DocData::ArgumentDoc>::push_back((Vector<DocData::ArgumentDoc> *)local_178);
              if (lVar64 != 0) {
                LOCK();
                plVar1 = (long *)(lVar64 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_128 + -0x10),false);
                }
              }
            }
            if (local_138 != 0) {
              LOCK();
              plVar1 = (long *)(local_138 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_138 + -0x10),false);
              }
            }
            if (local_140 != 0) {
              LOCK();
              plVar1 = (long *)(local_140 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_140 - 0x10),false);
              }
            }
            if (local_148 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_148 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_148 + -0x10,false);
              }
            }
            pcVar66 = local_1d8[0];
            if (local_1d8[0] != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_1d8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1d8[0] = (char *)0x0;
                Memory::free_static(pcVar66 + -0x10,false);
              }
            }
            lVar64 = local_1e8;
            if (local_1e8 != 0) {
              LOCK();
              plVar1 = (long *)(local_1e8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1e8 = 0;
                Memory::free_static((void *)(lVar64 + -0x10),false);
              }
            }
            uVar46 = local_1f8._8_8_;
            if (local_1f8._8_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_1f8._8_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1f8._8_8_ = 0;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            uVar46 = local_1f8._0_8_;
            if (local_1f8._0_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_1f8._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = local_1f8._8_8_;
                local_1f8 = auVar28 << 0x40;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            plVar61 = plVar61 + 1;
          } while (plVar57 != plVar61);
        }
        local_148 = (char *)0x0;
        pVVar60 = (Vector<DocData::MethodDoc> *)(param_1 + 0x588);
        if (local_1c8._0_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_260);
        }
        local_140 = 0;
        if (local_1c8._8_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,local_220);
        }
        local_138 = 0;
        if (local_1b8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_1b8);
        }
        local_128 = 0;
        local_130 = CONCAT71(local_130._1_7_,local_1b0);
        if (lStack_1a8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&lStack_1a8);
        }
        goto LAB_001048bb;
      case 4:
        lVar64 = *(long *)(puVar63 + 2);
        lVar58 = *(long *)(lVar64 + 0x128);
        uVar2 = *(undefined4 *)(lVar64 + 0xc);
        puVar52 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                *)(param_1 + 0x468),(StringName *)(lVar58 + 0x148));
        *puVar52 = uVar2;
        local_160 = (undefined1  [16])0x0;
        lVar58 = *(long *)(lVar58 + 0x148);
        local_1b8 = 0;
        local_1b0 = (StrRange)0x0;
        local_198._0_8_ = local_198._1_8_ << 8;
        local_198._8_8_ = 0;
        local_188 = local_188 & 0xffffffffffffff00;
        local_180 = 0;
        local_178._8_8_ = 0;
        local_1c8 = (undefined1  [16])0x0;
        lStack_1a8 = 0;
        CStack_1a0 = (CowData)0x0;
        uStack_19f = 0;
        if (lVar58 == 0) {
          auVar34._8_8_ = 0;
          auVar34._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar34 << 0x40;
LAB_00107293:
          lVar58 = 0;
        }
        else {
          pcVar66 = *(char **)(lVar58 + 8);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar22 << 0x40;
          if (pcVar66 == (char *)0x0) {
            if (*(long *)(lVar58 + 0x10) == 0) goto LAB_00107293;
            CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)(lVar58 + 0x10));
          }
          else {
            local_140 = strlen(pcVar66);
            local_148 = pcVar66;
            String::parse_latin1((StrRange *)local_1f8);
          }
          if (local_1f8._0_8_ == 0) goto LAB_00107293;
          CowData<char32_t>::_unref(local_260);
          uVar46 = local_1f8._0_8_;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar23 << 0x40;
          lVar58 = CONCAT71(uStack_19f,CStack_1a0);
          local_1c8._0_8_ = uVar46;
        }
        local_250 = (CowData<char32_t> *)local_1f8;
        CowData<char32_t>::_unref(local_250);
        if (*(long *)(lVar64 + 0x1e0) != lVar58) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&CStack_1a0,(CowData *)(lVar64 + 0x1e0));
        }
        auVar5 = local_198;
        local_198[0] = (CowData<char32_t>)*(undefined1 *)(lVar64 + 0x1e8);
        auVar6 = local_198;
        local_198._8_8_ = auVar5._8_8_;
        bVar67 = local_198._8_8_ != *(long *)(lVar64 + 0x1f0);
        local_198 = auVar6;
        if (bVar67) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_198 + 8),(CowData *)(lVar64 + 0x1f0));
        }
        local_188 = CONCAT71(local_188._1_7_,*(undefined1 *)(lVar64 + 0x1f8));
        if (local_180 != *(ulong *)(lVar64 + 0x200)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,(CowData *)(lVar64 + 0x200));
        }
        plVar61 = *(long **)(lVar64 + 0x138);
        if ((plVar61 != (long *)0x0) && (plVar57 = plVar61 + plVar61[-1], plVar57 != plVar61)) {
          do {
            puVar53 = (undefined8 *)*plVar61;
            local_1e0 = (CowData<char32_t>)0x0;
            local_1e8 = 0;
            local_1f8 = (undefined1  [16])0x0;
            local_1d8[0] = (char *)0x0;
            lVar64 = *(long *)(puVar53[0x25] + 0x148);
            if (lVar64 == 0) {
LAB_0010625a:
              pcVar54 = *(code **)*puVar53;
              if (pcVar54 == GDScriptParser::Node::get_datatype) goto LAB_0010626a;
LAB_00106d84:
              (*pcVar54)((CowData<char32_t> *)&local_148,puVar53);
            }
            else {
              pcVar66 = *(char **)(lVar64 + 8);
              local_200 = 0;
              if (pcVar66 == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_0010625a;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_200,(CowData *)(lVar64 + 0x10));
              }
              else {
                local_140 = strlen(pcVar66);
                local_148 = pcVar66;
                String::parse_latin1((StrRange *)&local_200);
              }
              lVar64 = local_200;
              uVar46 = local_1f8._0_8_;
              if (local_1f8._0_8_ != local_200) {
                if (local_1f8._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_1f8._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    auVar25._8_8_ = 0;
                    auVar25._0_8_ = local_1f8._8_8_;
                    local_1f8 = auVar25 << 0x40;
                    Memory::free_static((void *)(uVar46 + -0x10),false);
                  }
                }
                local_1f8._0_8_ = local_200;
                goto LAB_0010625a;
              }
              if (local_1f8._0_8_ == 0) goto LAB_0010625a;
              LOCK();
              plVar1 = (long *)(local_1f8._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 != 0) goto LAB_0010625a;
              local_200 = 0;
              Memory::free_static((void *)(lVar64 + -0x10),false);
              pcVar54 = *(code **)*puVar53;
              if (pcVar54 != GDScriptParser::Node::get_datatype) goto LAB_00106d84;
LAB_0010626a:
              GDScriptParser::DataType::DataType((DataType *)&local_148,(DataType *)(puVar53 + 7));
            }
            _doctype_from_gdtype
                      ((DataType *)&local_148,(String *)(local_1f8 + 8),(String *)&local_1e8,false);
            GDScriptParser::DataType::~DataType((DataType *)&local_148);
            local_148 = (char *)0x0;
            if (local_1f8._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_250);
            }
            local_140 = 0;
            if (local_1f8._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_1f8 + 8));
            }
            local_138 = 0;
            if (local_1e8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_1e8);
            }
            local_128 = 0;
            local_130 = CONCAT71(local_130._1_7_,local_1e0);
            if (local_1d8[0] == (char *)0x0) {
              Vector<DocData::ArgumentDoc>::push_back((Vector<DocData::ArgumentDoc> *)local_178);
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)local_1d8);
              lVar64 = local_128;
              Vector<DocData::ArgumentDoc>::push_back((Vector<DocData::ArgumentDoc> *)local_178);
              if (lVar64 != 0) {
                LOCK();
                plVar1 = (long *)(lVar64 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_128 + -0x10),false);
                }
              }
            }
            if (local_138 != 0) {
              LOCK();
              plVar1 = (long *)(local_138 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_138 + -0x10),false);
              }
            }
            if (local_140 != 0) {
              LOCK();
              plVar1 = (long *)(local_140 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_140 - 0x10),false);
              }
            }
            if (local_148 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_148 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_148 + -0x10,false);
              }
            }
            pcVar66 = local_1d8[0];
            if (local_1d8[0] != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_1d8[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1d8[0] = (char *)0x0;
                Memory::free_static(pcVar66 + -0x10,false);
              }
            }
            lVar64 = local_1e8;
            if (local_1e8 != 0) {
              LOCK();
              plVar1 = (long *)(local_1e8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1e8 = 0;
                Memory::free_static((void *)(lVar64 + -0x10),false);
              }
            }
            uVar46 = local_1f8._8_8_;
            if (local_1f8._8_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_1f8._8_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1f8._8_8_ = 0;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            uVar46 = local_1f8._0_8_;
            if (local_1f8._0_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_1f8._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                auVar24._8_8_ = 0;
                auVar24._0_8_ = local_1f8._8_8_;
                local_1f8 = auVar24 << 0x40;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            plVar61 = plVar61 + 1;
          } while (plVar57 != plVar61);
        }
        local_148 = (char *)0x0;
        pVVar60 = (Vector<DocData::MethodDoc> *)(param_1 + 0x5a8);
        if (local_1c8._0_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_260);
        }
        local_140 = 0;
        if (local_1c8._8_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_1c8 + 8));
        }
        local_138 = 0;
        if (local_1b8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_1b8);
        }
        local_128 = 0;
        local_130 = CONCAT71(local_130._1_7_,local_1b0);
        if (lStack_1a8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&lStack_1a8);
        }
LAB_001048bb:
        local_120 = 0;
        if (CONCAT71(uStack_19f,CStack_1a0) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,&CStack_1a0);
        }
        local_110 = 0;
        local_118 = CONCAT71(local_118._1_7_,local_198[0]);
        if (local_198._8_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)(local_198 + 8));
        }
        local_100 = 0;
        local_108 = CONCAT71(local_108._1_7_,local_188._0_1_);
        if (local_180 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_180);
        }
        local_f0[0] = 0;
        if (local_178._8_8_ != 0) {
          CowData<DocData::ArgumentDoc>::_ref
                    ((CowData<DocData::ArgumentDoc> *)local_f0,(CowData *)(local_178 + 8));
        }
        local_e0 = 0;
        if (local_160._0_8_ != 0) {
          CowData<int>::_ref((CowData<int> *)&local_e0,(CowData *)local_160);
        }
        local_d8[0] = 0;
        if (local_160._8_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)(local_160 + 8));
        }
        Vector<DocData::MethodDoc>::push_back(pVVar60,(CowData<char32_t> *)&local_148);
        DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_148);
        DocData::MethodDoc::~MethodDoc((MethodDoc *)local_260);
switchD_001047e5_caseD_0:
        break;
      case 5:
        puVar53 = *(undefined8 **)(puVar63 + 2);
        lVar64 = puVar53[0x25];
        uVar2 = *(undefined4 *)((long)puVar53 + 0xc);
        puVar52 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                *)(param_1 + 0x468),(StringName *)(lVar64 + 0x148));
        *puVar52 = uVar2;
        lVar64 = *(long *)(lVar64 + 0x148);
        local_1b8 = 0;
        local_1b0 = (StrRange)0x0;
        local_188 = local_188 & 0xffffffffffffff00;
        local_180 = 0;
        local_178._0_8_ = local_178._1_8_ << 8;
        local_178._8_8_ = 0;
        local_168 = 0;
        local_1c8 = (undefined1  [16])0x0;
        lStack_1a8 = 0;
        CStack_1a0 = (CowData)0x0;
        uStack_19f = 0;
        local_198 = (undefined1  [16])0x0;
        local_160 = (undefined1  [16])0x0;
        if (lVar64 == 0) {
          auVar39._8_8_ = 0;
          auVar39._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar39 << 0x40;
        }
        else {
          pcVar66 = *(char **)(lVar64 + 8);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar18 << 0x40;
          if (pcVar66 == (char *)0x0) {
            if (*(long *)(lVar64 + 0x10) == 0) goto LAB_001059f6;
            CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)(lVar64 + 0x10));
          }
          else {
            local_140 = strlen(pcVar66);
            local_148 = pcVar66;
            String::parse_latin1((StrRange *)local_1f8);
          }
          if (local_1c8._0_8_ != local_1f8._0_8_) {
            CowData<char32_t>::_unref(local_260);
            uVar46 = local_1f8._0_8_;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = local_1f8._8_8_;
            local_1f8 = auVar19 << 0x40;
            local_1c8._0_8_ = uVar46;
          }
        }
LAB_001059f6:
        local_250 = (CowData<char32_t> *)local_1f8;
        CowData<char32_t>::_unref(local_250);
        if (lStack_1a8 != puVar53[0x35]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_1a8,(CowData *)(puVar53 + 0x35));
        }
        auVar5 = local_178;
        local_178[0] = *(undefined1 *)(puVar53 + 0x36);
        auVar6 = local_178;
        local_178._8_8_ = auVar5._8_8_;
        bVar67 = local_178._8_8_ != puVar53[0x37];
        local_178 = auVar6;
        if (bVar67) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_178 + 8),(CowData *)(puVar53 + 0x37));
        }
        local_168 = *(undefined1 *)(puVar53 + 0x38);
        if (local_160._0_8_ != puVar53[0x39]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_160,(CowData *)(puVar53 + 0x39));
        }
        if (*(code **)*puVar53 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType((DataType *)&local_148,(DataType *)(puVar53 + 7));
        }
        else {
          (**(code **)*puVar53)((CowData<char32_t> *)&local_148,puVar53);
        }
        _doctype_from_gdtype
                  ((DataType *)&local_148,(String *)(local_1c8 + 8),(String *)&local_1b8,false);
        GDScriptParser::DataType::~DataType((DataType *)&local_148);
        if (*(int *)(puVar53 + 0x29) == 1) {
          if (puVar53[0x2a] != 0) {
            lVar64 = *(long *)(*(long *)(puVar53[0x2a] + 0x128) + 0x148);
            if (lVar64 == 0) {
              auVar42._8_8_ = 0;
              auVar42._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar42 << 0x40;
LAB_0010752a:
              lVar64 = 0;
            }
            else {
              pcVar66 = *(char **)(lVar64 + 8);
              auVar32._8_8_ = 0;
              auVar32._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar32 << 0x40;
              if (pcVar66 == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_0010752a;
                CowData<char32_t>::_ref(local_250,(CowData *)(lVar64 + 0x10));
                lVar64 = local_1f8._0_8_;
              }
              else {
                local_140 = strlen(pcVar66);
                local_148 = pcVar66;
                String::parse_latin1((StrRange *)local_250);
                lVar64 = local_1f8._0_8_;
              }
            }
            if (CONCAT71(uStack_19f,CStack_1a0) != lVar64) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&CStack_1a0);
              auVar5 = local_1f8;
              auVar33._8_8_ = 0;
              auVar33._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar33 << 0x40;
              CStack_1a0 = auVar5[0];
              uStack_19f = auVar5._1_7_;
            }
            CowData<char32_t>::_unref(local_250);
          }
          if (puVar53[0x2c] != 0) {
            lVar64 = *(long *)(*(long *)(puVar53[0x2c] + 0x128) + 0x148);
            if (lVar64 == 0) {
LAB_0010753d:
              local_148 = (char *)0x0;
            }
            else {
              local_148 = (char *)0x0;
              if (*(char **)(lVar64 + 8) == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_0010753d;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(lVar64 + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_148,*(char **)(lVar64 + 8));
              }
            }
            if (local_148 != (char *)local_198._0_8_) {
LAB_00105c06:
              CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
              pcVar66 = local_148;
              local_148 = (char *)0x0;
              local_198._0_8_ = pcVar66;
            }
LAB_00105c34:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          }
        }
        else if (*(int *)(puVar53 + 0x29) == 2) {
          if (puVar53[0x2a] != 0) {
            lVar64 = *(long *)(puVar53[0x2a] + 0x148);
            if (lVar64 == 0) {
              auVar41._8_8_ = 0;
              auVar41._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar41 << 0x40;
LAB_0010751a:
              lVar64 = 0;
            }
            else {
              pcVar66 = *(char **)(lVar64 + 8);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar20 << 0x40;
              if (pcVar66 == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_0010751a;
                CowData<char32_t>::_ref(local_250,(CowData *)(lVar64 + 0x10));
                lVar64 = local_1f8._0_8_;
              }
              else {
                local_140 = strlen(pcVar66);
                local_148 = pcVar66;
                String::parse_latin1((StrRange *)local_250);
                lVar64 = local_1f8._0_8_;
              }
            }
            if (CONCAT71(uStack_19f,CStack_1a0) != lVar64) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&CStack_1a0);
              auVar5 = local_1f8;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = local_1f8._8_8_;
              local_1f8 = auVar21 << 0x40;
              CStack_1a0 = auVar5[0];
              uStack_19f = auVar5._1_7_;
            }
            CowData<char32_t>::_unref(local_250);
          }
          if (puVar53[0x2c] != 0) {
            lVar64 = *(long *)(puVar53[0x2c] + 0x148);
            if (lVar64 == 0) {
LAB_00107550:
              local_148 = (char *)0x0;
            }
            else {
              local_148 = (char *)0x0;
              if (*(char **)(lVar64 + 8) == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_00107550;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(lVar64 + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_148,*(char **)(lVar64 + 8));
              }
            }
            if ((char *)local_198._0_8_ != local_148) goto LAB_00105c06;
            goto LAB_00105c34;
          }
        }
        if ((ExpressionNode *)puVar53[0x26] != (ExpressionNode *)0x0) {
          docvalue_from_expression((GDScriptDocGen *)&local_148,(ExpressionNode *)puVar53[0x26]);
          if ((char *)local_198._8_8_ != local_148) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(local_198 + 8));
            pcVar66 = local_148;
            local_148 = (char *)0x0;
            local_198._8_8_ = pcVar66;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        }
        local_188 = local_188 & 0xffffffffffffff00;
        DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_148,local_260);
        Vector<DocData::PropertyDoc>::push_back
                  ((Vector<DocData::PropertyDoc> *)(param_1 + 0x5f8),(CowData<char32_t> *)&local_148
                  );
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)(local_160 + 8));
        CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
        CowData<char32_t>::_unref((CowData<char32_t> *)(local_178 + 8));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
        CowData<char32_t>::_unref((CowData<char32_t> *)(local_198 + 8));
        CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
        CowData<char32_t>::_unref((CowData<char32_t> *)&CStack_1a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_1a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)(local_1c8 + 8));
        CowData<char32_t>::_unref(local_260);
        goto joined_r0x00105de9;
      case 6:
        lVar64 = *(long *)(puVar63 + 2);
        StringName::StringName
                  ((StringName *)&local_208,(StringName *)(*(long *)(lVar64 + 0x128) + 0x148));
        uVar2 = *(undefined4 *)(lVar64 + 0xc);
        puVar52 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                *)(param_1 + 0x468),(StringName *)&local_208);
        *puVar52 = uVar2;
        local_1e8 = 0;
        local_1d8[0] = (char *)0x0;
        local_1f8._0_9_ = ZEXT89(0);
        local_1e0 = (CowData<char32_t>)0x0;
        lVar58 = *(long *)(lVar64 + 0x158);
        if (*(long *)(lVar64 + 0x158) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)(lVar64 + 0x158));
          lVar58 = local_1e8;
        }
        local_1f8[8] = (CowData<char32_t>)*(undefined1 *)(lVar64 + 0x160);
        if (*(long *)(lVar64 + 0x168) != lVar58) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)(lVar64 + 0x168));
        }
        local_1e0 = *(CowData<char32_t> *)(lVar64 + 0x170);
        pcVar66 = *(char **)(lVar64 + 0x178);
        if (local_1d8[0] != *(char **)(lVar64 + 0x178)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_1d8,(CowData *)(lVar64 + 0x178));
          pcVar66 = local_1d8[0];
        }
        CVar47 = local_1e0;
        if (local_208 == 0) {
          auVar44._8_8_ = 0;
          auVar44._0_8_ = local_1c8._8_8_;
          local_1c8 = auVar44 << 0x40;
        }
        else {
          pcVar3 = *(char **)(local_208 + 8);
          if (pcVar3 == (char *)0x0) {
            auVar45._8_8_ = 0;
            auVar45._0_8_ = local_1c8._8_8_;
            local_1c8 = auVar45 << 0x40;
            if (*(long *)(local_208 + 0x10) != 0) {
              CowData<char32_t>::_ref(local_260,(CowData *)(local_208 + 0x10));
            }
          }
          else {
            auVar43._8_8_ = 0;
            auVar43._0_8_ = local_1c8._8_8_;
            local_1c8 = auVar43 << 0x40;
            local_140 = strlen(pcVar3);
            local_148 = pcVar3;
            String::parse_latin1((StrRange *)local_260);
          }
        }
        pCVar59 = (CowData<char32_t> *)
                  HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
                  ::operator[]((HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
                                *)(param_1 + 0x5c8),(String *)local_260);
        if (*(long *)pCVar59 != local_1f8._0_8_) {
          CowData<char32_t>::_ref(pCVar59,(CowData *)local_1f8);
        }
        pCVar59[8] = local_1f8[8];
        if (*(long *)(pCVar59 + 0x10) != local_1e8) {
          CowData<char32_t>::_ref(pCVar59 + 0x10,(CowData *)&local_1e8);
        }
        pCVar59[0x18] = CVar47;
        if (pcVar66 != *(char **)(pCVar59 + 0x20)) {
          CowData<char32_t>::_ref(pCVar59 + 0x20,(CowData *)local_1d8);
        }
        CowData<char32_t>::_unref(local_260);
        plVar61 = *(long **)(lVar64 + 0x138);
        if ((plVar61 != (long *)0x0) && (plVar57 = plVar61 + plVar61[-1] * 0xc, plVar57 != plVar61))
        {
          do {
            local_1b8 = local_1b8 & 0xffffffffffffff00;
            CStack_1a0 = (CowData)0x0;
            lVar64 = *(long *)(*plVar61 + 0x148);
            local_198._0_9_ = ZEXT89(0);
            local_188 = 0;
            local_180 = local_180 & 0xffffffffffffff00;
            local_1c8 = (undefined1  [16])0x0;
            local_1b0 = (StrRange)0x0;
            uStack_1af = 0;
            lStack_1a8 = 0;
            local_178 = (undefined1  [16])0x0;
            if (lVar64 != 0) {
              pcVar66 = *(char **)(lVar64 + 8);
              local_200 = 0;
              if (pcVar66 == (char *)0x0) {
                if (*(long *)(lVar64 + 0x10) == 0) goto LAB_00105798;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_200,(CowData *)(lVar64 + 0x10));
              }
              else {
                local_140 = strlen(pcVar66);
                local_148 = pcVar66;
                String::parse_latin1((StrRange *)&local_200);
              }
              lVar64 = local_200;
              uVar46 = local_1c8._0_8_;
              if (local_1c8._0_8_ == local_200) {
                if (local_1c8._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_1c8._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_200 = 0;
                    Memory::free_static((void *)(lVar64 + -0x10),false);
                  }
                }
              }
              else {
                if (local_1c8._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long *)(local_1c8._0_8_ + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    auVar17._8_8_ = 0;
                    auVar17._0_8_ = local_1c8._8_8_;
                    local_1c8 = auVar17 << 0x40;
                    Memory::free_static((void *)(uVar46 + -0x10),false);
                  }
                }
                local_1c8._0_8_ = local_200;
              }
            }
LAB_00105798:
            Variant::Variant((Variant *)local_58,plVar61[4]);
            _docvalue_from_variant((GDScriptDocGen *)&local_148,(Variant *)local_58,1);
            pcVar66 = local_148;
            uVar46 = local_1c8._8_8_;
            if ((char *)local_1c8._8_8_ == local_148) {
              if ((char *)local_1c8._8_8_ == (char *)0x0) goto LAB_00105809;
              LOCK();
              plVar1 = (long *)(local_1c8._8_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 != 0) goto LAB_00105809;
              local_148 = (char *)0x0;
              Memory::free_static(pcVar66 + -0x10,false);
              cVar50 = Variant::needs_deinit[local_58[0]];
            }
            else {
              if ((char *)local_1c8._8_8_ != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_1c8._8_8_ + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_1c8._8_8_ = 0;
                  Memory::free_static((char *)(uVar46 + -0x10),false);
                }
              }
              local_1c8._8_8_ = local_148;
LAB_00105809:
              cVar50 = Variant::needs_deinit[local_58[0]];
            }
            if (cVar50 != '\0') {
              Variant::_clear_internal();
            }
            local_1b8 = CONCAT71(local_1b8._1_7_,1);
            local_148 = "int";
            local_140 = 3;
            String::parse_latin1(&local_1b0);
            if (local_208 == 0) {
LAB_00106cd1:
              local_200 = 0;
              if (lStack_1a8 != 0) {
LAB_00106ce2:
                lVar64 = lStack_1a8;
                LOCK();
                plVar1 = (long *)(lStack_1a8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lStack_1a8 = 0;
                  Memory::free_static((void *)(lVar64 + -0x10),false);
                }
                goto LAB_00105191;
              }
            }
            else {
              pcVar66 = *(char **)(local_208 + 8);
              local_200 = 0;
              if (pcVar66 == (char *)0x0) {
                if (*(long *)(local_208 + 0x10) == 0) goto LAB_00106cd1;
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_200,(CowData *)(local_208 + 0x10));
              }
              else {
                local_140 = strlen(pcVar66);
                local_148 = pcVar66;
                String::parse_latin1((StrRange *)&local_200);
              }
              lVar64 = local_200;
              if (lStack_1a8 == local_200) {
                if (lStack_1a8 != 0) {
                  LOCK();
                  plVar1 = (long *)(lStack_1a8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_200 = 0;
                    Memory::free_static((void *)(lVar64 + -0x10),false);
                  }
                }
              }
              else {
                if (lStack_1a8 != 0) goto LAB_00106ce2;
LAB_00105191:
                lStack_1a8 = local_200;
              }
            }
            if (local_198._0_8_ != plVar61[7]) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_198,(CowData *)(plVar61 + 7));
            }
            local_198[8] = (char)plVar61[8];
            if (local_188 != plVar61[9]) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)(plVar61 + 9));
            }
            local_180 = CONCAT71(local_180._1_7_,(char)plVar61[10]);
            if (local_178._0_8_ != plVar61[0xb]) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_178,(CowData *)(plVar61 + 0xb));
            }
            local_148 = (char *)0x0;
            if (local_1c8._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_260);
            }
            local_140 = 0;
            if (local_1c8._8_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_1c8 + 8));
            }
            local_130 = 0;
            local_138 = CONCAT71(local_138._1_7_,local_1b8._0_1_);
            if (CONCAT71(uStack_1af,local_1b0) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)&local_1b0);
            }
            local_128 = 0;
            if (lStack_1a8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&lStack_1a8);
            }
            local_118 = 0;
            local_120 = CONCAT71(local_120._1_7_,CStack_1a0);
            if (local_198._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)local_198);
            }
            local_108 = 0;
            local_110 = CONCAT71(local_110._1_7_,local_198[8]);
            if (local_188 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_188);
            }
            local_f8 = 0;
            local_100 = CONCAT71(local_100._1_7_,local_180._0_1_);
            if (local_178._0_8_ != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)local_178);
            }
            local_f0[0] = 0;
            if (local_178._8_8_ == 0) {
              Vector<DocData::ConstantDoc>::push_back
                        ((Vector<DocData::ConstantDoc> *)(param_1 + 0x5b8));
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_f0,(CowData *)(local_178 + 8));
              lVar64 = local_f0[0];
              Vector<DocData::ConstantDoc>::push_back
                        ((Vector<DocData::ConstantDoc> *)(param_1 + 0x5b8));
              if (lVar64 != 0) {
                LOCK();
                plVar1 = (long *)(lVar64 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_f0[0] + -0x10),false);
                }
              }
            }
            if (local_f8 != 0) {
              LOCK();
              plVar1 = (long *)(local_f8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_f8 + -0x10),false);
              }
            }
            if (local_108 != 0) {
              LOCK();
              plVar1 = (long *)(local_108 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_108 + -0x10),false);
              }
            }
            if (local_118 != 0) {
              LOCK();
              plVar1 = (long *)(local_118 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_118 + -0x10),false);
              }
            }
            if (local_128 != 0) {
              LOCK();
              plVar1 = (long *)(local_128 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_128 + -0x10),false);
              }
            }
            if (local_130 != 0) {
              LOCK();
              plVar1 = (long *)(local_130 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_130 + -0x10),false);
              }
            }
            if (local_140 != 0) {
              LOCK();
              plVar1 = (long *)(local_140 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_140 - 0x10),false);
              }
            }
            if (local_148 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_148 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_148 + -0x10,false);
              }
            }
            uVar46 = local_178._8_8_;
            if (local_178._8_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_178._8_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_178._8_8_ = 0;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            uVar46 = local_178._0_8_;
            if (local_178._0_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_178._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = local_178._8_8_;
                local_178 = auVar14 << 0x40;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            uVar48 = local_188;
            if (local_188 != 0) {
              LOCK();
              plVar1 = (long *)(local_188 - 0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_188 = 0;
                Memory::free_static((void *)(uVar48 - 0x10),false);
              }
            }
            uVar46 = local_198._0_8_;
            if (local_198._0_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_198._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                auVar15._8_8_ = 0;
                auVar15._0_8_ = local_198._8_8_;
                local_198 = auVar15 << 0x40;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            lVar64 = lStack_1a8;
            if (lStack_1a8 != 0) {
              LOCK();
              plVar1 = (long *)(lStack_1a8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lStack_1a8 = 0;
                Memory::free_static((void *)(lVar64 + -0x10),false);
              }
            }
            if (CONCAT71(uStack_1af,local_1b0) != 0) {
              LOCK();
              plVar1 = (long *)(CONCAT71(uStack_1af,local_1b0) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar64 = CONCAT71(uStack_1af,local_1b0);
                local_1b0 = (StrRange)0x0;
                uStack_1af = 0;
                Memory::free_static((void *)(lVar64 + -0x10),false);
              }
            }
            uVar46 = local_1c8._8_8_;
            if (local_1c8._8_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_1c8._8_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_1c8._8_8_ = 0;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            uVar46 = local_1c8._0_8_;
            if (local_1c8._0_8_ != 0) {
              LOCK();
              plVar1 = (long *)(local_1c8._0_8_ + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = local_1c8._8_8_;
                local_1c8 = auVar16 << 0x40;
                Memory::free_static((void *)(uVar46 + -0x10),false);
              }
            }
            plVar61 = plVar61 + 0xc;
          } while (plVar57 != plVar61);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
        if ((StringName::configured == '\0') || (local_208 == 0)) goto switchD_001047e5_caseD_0;
        StringName::unref();
        break;
      case 7:
        lVar64 = *(long *)(puVar63 + 4);
        uVar2 = *(undefined4 *)(lVar64 + 0xc);
        puVar52 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                *)(param_1 + 0x468),(StringName *)(lVar64 + 0x148));
        *puVar52 = uVar2;
        lVar64 = *(long *)(lVar64 + 0x148);
        local_1b8 = local_1b8 & 0xffffffffffffff00;
        CStack_1a0 = (CowData)0x0;
        local_198._0_9_ = ZEXT89(0);
        local_188 = 0;
        local_180 = local_180 & 0xffffffffffffff00;
        local_1c8 = (undefined1  [16])0x0;
        local_1b0 = (StrRange)0x0;
        uStack_1af = 0;
        lStack_1a8 = 0;
        local_178 = (undefined1  [16])0x0;
        if (lVar64 == 0) {
          auVar38._8_8_ = 0;
          auVar38._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar38 << 0x40;
        }
        else {
          pcVar66 = *(char **)(lVar64 + 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = local_1f8._8_8_;
          local_1f8 = auVar12 << 0x40;
          if (pcVar66 == (char *)0x0) {
            if (*(long *)(lVar64 + 0x10) == 0) goto LAB_00104be1;
            CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)(lVar64 + 0x10));
          }
          else {
            local_140 = strlen(pcVar66);
            local_148 = pcVar66;
            String::parse_latin1((StrRange *)local_1f8);
          }
          if (local_1c8._0_8_ != local_1f8._0_8_) {
            CowData<char32_t>::_unref(local_260);
            uVar46 = local_1f8._0_8_;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_1f8._8_8_;
            local_1f8 = auVar13 << 0x40;
            local_1c8._0_8_ = uVar46;
          }
        }
LAB_00104be1:
        local_250 = (CowData<char32_t> *)local_1f8;
        CowData<char32_t>::_unref(local_250);
        Variant::Variant((Variant *)local_58,*(long *)(puVar63 + 0xc));
        _docvalue_from_variant((GDScriptDocGen *)&local_148,(Variant *)local_58,1);
        if ((char *)local_1c8._8_8_ != local_148) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_1c8 + 8));
          pcVar66 = local_148;
          local_148 = (char *)0x0;
          local_1c8._8_8_ = pcVar66;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_1b8 = CONCAT71(local_1b8._1_7_,1);
        local_148 = "int";
        local_140 = 3;
        String::parse_latin1(&local_1b0);
        local_140 = 0xe;
        local_148 = "@unnamed_enums";
        String::parse_latin1((StrRange *)&lStack_1a8);
        if (local_198._0_8_ != *(long *)(puVar63 + 0x12)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_198,(CowData *)(puVar63 + 0x12));
        }
        local_198[8] = *(undefined1 *)(puVar63 + 0x14);
        if (local_188 != *(ulong *)(puVar63 + 0x16)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)(puVar63 + 0x16));
        }
        local_180 = CONCAT71(local_180._1_7_,*(undefined1 *)(puVar63 + 0x18));
        if (local_178._0_8_ != *(long *)(puVar63 + 0x1a)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_178,(CowData *)(puVar63 + 0x1a));
        }
        goto LAB_00104d4a;
      }
      puVar63 = puVar63 + 0x1c;
      if (puVar56 == puVar63) break;
    } while( true );
  }
  goto LAB_00104a1e;
switchD_001047e5_caseD_2:
  puVar53 = *(undefined8 **)(puVar63 + 2);
  lVar64 = puVar53[0x25];
  uVar2 = *(undefined4 *)((long)puVar53 + 0xc);
  puVar52 = (undefined4 *)
            HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
            ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                          *)(param_1 + 0x468),(StringName *)(lVar64 + 0x148));
  *puVar52 = uVar2;
  lVar64 = *(long *)(lVar64 + 0x148);
  local_1b8 = local_1b8 & 0xffffffffffffff00;
  CStack_1a0 = (CowData)0x0;
  local_198._0_9_ = ZEXT89(0);
  local_188 = 0;
  local_180 = local_180 & 0xffffffffffffff00;
  local_1c8 = (undefined1  [16])0x0;
  local_1b0 = (StrRange)0x0;
  uStack_1af = 0;
  lStack_1a8 = 0;
  local_178 = (undefined1  [16])0x0;
  if (lVar64 == 0) {
    auVar37._8_8_ = 0;
    auVar37._0_8_ = local_1f8._8_8_;
    local_1f8 = auVar37 << 0x40;
  }
  else {
    pcVar66 = *(char **)(lVar64 + 8);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = local_1f8._8_8_;
    local_1f8 = auVar30 << 0x40;
    if (pcVar66 == (char *)0x0) {
      if (*(long *)(lVar64 + 0x10) == 0) goto LAB_00106ab2;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_1f8,(CowData *)(lVar64 + 0x10));
    }
    else {
      local_140 = strlen(pcVar66);
      local_148 = pcVar66;
      String::parse_latin1((StrRange *)local_1f8);
    }
    if (local_1c8._0_8_ != local_1f8._0_8_) {
      CowData<char32_t>::_unref(local_260);
      uVar46 = local_1f8._0_8_;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = local_1f8._8_8_;
      local_1f8 = auVar31 << 0x40;
      local_1c8._0_8_ = uVar46;
    }
  }
LAB_00106ab2:
  local_250 = (CowData<char32_t> *)local_1f8;
  CowData<char32_t>::_unref(local_250);
  _docvalue_from_variant((GDScriptDocGen *)&local_148,(Variant *)(puVar53[0x26] + 0x130),1);
  if ((char *)local_1c8._8_8_ != local_148) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(local_1c8 + 8));
    pcVar66 = local_148;
    local_148 = (char *)0x0;
    local_1c8._8_8_ = pcVar66;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_1b8 = CONCAT71(local_1b8._1_7_,1);
  if (*(code **)*puVar53 == GDScriptParser::Node::get_datatype) {
    GDScriptParser::DataType::DataType((DataType *)&local_148,(DataType *)(puVar53 + 7));
  }
  else {
    (**(code **)*puVar53)((CowData<char32_t> *)&local_148,puVar53);
  }
  _doctype_from_gdtype((DataType *)&local_148,(String *)&local_1b0,(String *)&lStack_1a8,false);
  GDScriptParser::DataType::~DataType((DataType *)&local_148);
  if (local_198._0_8_ != puVar53[0x29]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_198,(CowData *)(puVar53 + 0x29));
  }
  local_198[8] = *(undefined1 *)(puVar53 + 0x2a);
  if (local_188 != puVar53[0x2b]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)(puVar53 + 0x2b));
  }
  local_180 = CONCAT71(local_180._1_7_,*(undefined1 *)(puVar53 + 0x2c));
  if (local_178._0_8_ != puVar53[0x2d]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_178,(CowData *)(puVar53 + 0x2d));
  }
LAB_00104d4a:
  local_228 = (CowData *)&lStack_1a8;
  local_148 = (char *)0x0;
  if (local_1c8._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)local_260);
  }
  local_140 = 0;
  if (local_1c8._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(local_1c8 + 8));
  }
  local_130 = 0;
  local_138 = CONCAT71(local_138._1_7_,local_1b8._0_1_);
  if (CONCAT71(uStack_1af,local_1b0) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)&local_1b0);
  }
  local_128 = 0;
  if (lStack_1a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,local_228);
  }
  local_118 = 0;
  local_120 = CONCAT71(local_120._1_7_,CStack_1a0);
  if (local_198._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)local_198);
  }
  local_108 = 0;
  local_110 = CONCAT71(local_110._1_7_,local_198[8]);
  if (local_188 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_188);
  }
  local_f8 = 0;
  local_100 = CONCAT71(local_100._1_7_,local_180._0_1_);
  if (local_178._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)local_178);
  }
  local_f0[0] = 0;
  if (local_178._8_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_f0,(CowData *)(local_178 + 8));
  }
  Vector<DocData::ConstantDoc>::push_back
            ((Vector<DocData::ConstantDoc> *)(param_1 + 0x5b8),(CowData<char32_t> *)&local_148);
  DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_148);
  DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)local_260);
joined_r0x00105de9:
  puVar63 = puVar63 + 0x1c;
  goto joined_r0x001047b7;
}



/* GDScriptDocGen::generate_docs(GDScript*, GDScriptParser::ClassNode const*) */

void GDScriptDocGen::generate_docs(GDScript *param_1,ClassNode *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *__s;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  lVar6 = ProjectSettings::get_autoload_list();
  puVar3 = *(undefined8 **)(lVar6 + 0x18);
  do {
    while( true ) {
      if (puVar3 == (undefined8 *)0x0) {
        _generate_docs(param_1,param_2);
        if ((singletons._8_8_ != 0) && (singletons._44_4_ != 0)) {
          lVar6 = 0;
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)singletons._40_4_ * 4);
          if (uVar2 != 0) {
            do {
              if (*(int *)(singletons._16_8_ + lVar6) != 0) {
                *(int *)(singletons._16_8_ + lVar6) = 0;
                pvVar4 = *(void **)(singletons._8_8_ + lVar6 * 2);
                if (*(long *)((long)pvVar4 + 0x18) != 0) {
                  LOCK();
                  plVar7 = (long *)(*(long *)((long)pvVar4 + 0x18) + -0x10);
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                    lVar5 = *(long *)((long)pvVar4 + 0x18);
                    *(undefined8 *)((long)pvVar4 + 0x18) = 0;
                    Memory::free_static((void *)(lVar5 + -0x10),false);
                  }
                }
                if (*(long *)((long)pvVar4 + 0x10) != 0) {
                  LOCK();
                  plVar7 = (long *)(*(long *)((long)pvVar4 + 0x10) + -0x10);
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                    lVar5 = *(long *)((long)pvVar4 + 0x10);
                    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
                    Memory::free_static((void *)(lVar5 + -0x10),false);
                  }
                }
                Memory::free_static(pvVar4,false);
                *(undefined8 *)(singletons._8_8_ + lVar6 * 2) = 0;
              }
              lVar6 = lVar6 + 4;
            } while (lVar6 != (ulong)uVar2 << 2);
          }
          singletons._44_4_ = 0;
          singletons._24_16_ = (undefined1  [16])0x0;
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(char *)(puVar3 + 5) != '\0') break;
LAB_00107652:
      puVar3 = (undefined8 *)*puVar3;
    }
    lVar6 = puVar3[2];
    if (lVar6 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar6 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
        if (*(long *)(lVar6 + 0x10) != 0) {
          do {
            lVar5 = *plVar7;
            if (lVar5 == 0) goto LAB_001076a8;
            LOCK();
            lVar8 = *plVar7;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar7 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_50 = *(long *)(lVar6 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_001076a8:
    plVar7 = (long *)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                     ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                   *)singletons,(String *)(puVar3 + 4));
    lVar5 = local_50;
    lVar6 = *plVar7;
    if (lVar6 != local_50) {
      if (lVar6 != 0) {
        LOCK();
        plVar1 = (long *)(lVar6 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar6 = *plVar7;
          *plVar7 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
        else {
          *plVar7 = 0;
        }
      }
      *plVar7 = local_50;
      goto LAB_00107652;
    }
    if (lVar6 == 0) goto LAB_00107652;
    LOCK();
    plVar7 = (long *)(lVar6 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 != 0) goto LAB_00107652;
    local_50 = 0;
    Memory::free_static((void *)(lVar5 + -0x10),false);
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* GDScript::is_valid() const */

GDScript __thiscall GDScript::is_valid(GDScript *this)

{
  return this[0x241];
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



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::partitioner(long, long,
   List<Variant, DefaultAllocator>::Element*, List<Variant, DefaultAllocator>::Element**) const
   [clone .isra.0] */

long SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  long *plVar1;
  int iVar2;
  Element *pEVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  Element **ppEVar8;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_2;
  lVar7 = param_1;
  do {
    iVar2 = *(int *)param_4[lVar7];
    if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)param_3 == 4 || (*(int *)param_3 == 0x15))))
    {
      Variant::operator_cast_to_String((Variant *)&local_50);
      Variant::operator_cast_to_String((Variant *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = Variant::operator<((Variant *)param_4[lVar7],(Variant *)param_3);
    }
    if (cVar5 == '\0') {
LAB_00107b2d:
      lVar6 = lVar6 + -1;
      ppEVar8 = param_4 + lVar6;
      while( true ) {
        if (((*(int *)param_3 == 4) || (*(int *)param_3 == 0x15)) &&
           ((iVar2 = *(int *)*ppEVar8, iVar2 == 4 || (iVar2 == 0x15)))) {
          Variant::operator_cast_to_String((Variant *)&local_50);
          Variant::operator_cast_to_String((Variant *)&local_48);
          cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
          lVar4 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_50;
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
        }
        else {
          cVar5 = Variant::operator<((Variant *)param_3,(Variant *)*ppEVar8);
        }
        if (cVar5 == '\0') goto joined_r0x00107c95;
        if (lVar6 == param_1) break;
        lVar6 = lVar6 + -1;
        ppEVar8 = ppEVar8 + -1;
      }
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                       "bad comparison function; sorting will be broken",0,0);
joined_r0x00107c95:
      if (lVar6 <= lVar7) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return lVar7;
      }
      pEVar3 = param_4[lVar7];
      param_4[lVar7] = *ppEVar8;
      *ppEVar8 = pEVar3;
    }
    else if (param_2 + -1 == lVar7) {
      _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                       "bad comparison function; sorting will be broken",0,0);
      goto LAB_00107b2d;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::adjust_heap(long, long,
   long, List<Variant, DefaultAllocator>::Element*, List<Variant, DefaultAllocator>::Element**)
   const [clone .isra.0] */

void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  long *plVar1;
  int iVar2;
  Variant *pVVar3;
  Variant *this;
  char cVar4;
  long lVar5;
  Element **ppEVar6;
  Element **ppEVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_80;
  long local_50;
  long local_48;
  long local_40;
  
  lVar8 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 < param_3) {
    local_80 = param_2;
    do {
      pVVar3 = (Variant *)param_5[lVar8 + -1 + param_1];
      this = (Variant *)param_5[param_1 + lVar8];
      iVar2 = *(int *)this;
      if (((iVar2 == 4) || (iVar2 == 0x15)) &&
         ((iVar2 = *(int *)pVVar3, iVar2 == 4 || (iVar2 == 0x15)))) {
        Variant::operator_cast_to_String((Variant *)&local_50);
        Variant::operator_cast_to_String((Variant *)&local_48);
        cVar4 = String::operator<((String *)&local_48,(String *)&local_50);
        lVar5 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
      }
      else {
        cVar4 = Variant::operator<(this,pVVar3);
      }
      lVar5 = lVar8 + -1;
      ppEVar7 = param_5 + lVar8 + -1 + param_1;
      lVar9 = lVar8;
      if (cVar4 == '\0') {
        lVar9 = lVar8 + 1;
        lVar5 = lVar8;
        ppEVar7 = param_5 + param_1 + lVar8;
      }
      lVar8 = lVar9 * 2;
      param_5[local_80 + param_1] = *ppEVar7;
      local_80 = lVar5;
    } while (lVar8 < param_3);
    ppEVar6 = ppEVar7;
    if (lVar8 == param_3) goto LAB_001080a0;
  }
  else {
    ppEVar7 = param_5 + param_2 + param_1;
    if (lVar8 != param_3) goto LAB_00108050;
LAB_001080a0:
    lVar5 = lVar8 + -1;
    ppEVar6 = param_5 + param_1 + lVar5;
    *ppEVar7 = *ppEVar6;
  }
  lVar8 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
  ppEVar7 = ppEVar6;
  if (param_2 < lVar5) {
    do {
      lVar9 = lVar8 >> 1;
      ppEVar6 = param_5 + param_1 + lVar9;
      iVar2 = *(int *)*ppEVar6;
      if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)param_4 == 4 || (*(int *)param_4 == 0x15)))
         ) {
        Variant::operator_cast_to_String((Variant *)&local_48);
        Variant::operator_cast_to_String((Variant *)&local_50);
        cVar4 = String::operator<((String *)&local_50,(String *)&local_48);
        lVar8 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
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
      }
      else {
        cVar4 = Variant::operator<((Variant *)*ppEVar6,(Variant *)param_4);
      }
      ppEVar7 = param_5 + lVar5 + param_1;
      if (cVar4 == '\0') break;
      param_5[lVar5 + param_1] = *ppEVar6;
      lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      lVar5 = lVar9;
      ppEVar7 = ppEVar6;
    } while (param_2 < lVar9);
  }
LAB_00108050:
  *ppEVar7 = param_4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::partial_sort(long, long,
   long, List<Variant, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  long *plVar1;
  int iVar2;
  Variant *pVVar3;
  Element *pEVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  Element **ppEVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_00108223;
LAB_00108159:
    lVar9 = param_3;
    do {
      while( true ) {
        pVVar3 = (Variant *)param_4[param_1];
        iVar2 = *(int *)param_4[lVar9];
        if (((iVar2 == 4) || (iVar2 == 0x15)) &&
           ((iVar2 = *(int *)pVVar3, iVar2 == 4 || (iVar2 == 0x15)))) {
          Variant::operator_cast_to_String((Variant *)&local_50);
          Variant::operator_cast_to_String((Variant *)&local_48);
          cVar7 = String::operator<((String *)&local_48,(String *)&local_50);
          lVar6 = local_48;
          if (local_48 != 0) {
            LOCK();
            plVar1 = (long *)(local_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar6 = local_50;
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
        }
        else {
          cVar7 = Variant::operator<((Variant *)param_4[lVar9],pVVar3);
        }
        if (cVar7 == '\0') break;
        pEVar4 = param_4[lVar9];
        param_4[lVar9] = param_4[param_1];
        lVar9 = lVar9 + 1;
        adjust_heap(param_1,0,lVar10,pEVar4,param_4);
        if (lVar9 == param_2) goto LAB_001081db;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != param_2);
LAB_001081db:
    if (lVar10 < 2) goto LAB_00108223;
  }
  else {
    for (lVar9 = lVar10 + -2 >> 1;
        adjust_heap(param_1,lVar9,lVar10,param_4[param_1 + lVar9],param_4), lVar9 != 0;
        lVar9 = lVar9 + -1) {
    }
    if (param_3 < param_2) goto LAB_00108159;
  }
  ppEVar8 = param_4 + param_1;
  lVar10 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar8[lVar10];
    ppEVar8[lVar10] = *ppEVar8;
    adjust_heap(param_1,0,lVar10,pEVar4,param_4);
    bVar5 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar5);
LAB_00108223:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::median_of_3(List<Variant,
   DefaultAllocator>::Element* const&, List<Variant, DefaultAllocator>::Element* const&,
   List<Variant, DefaultAllocator>::Element* const&) const [clone .isra.0] */

Element **
SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  long *plVar1;
  int iVar2;
  Variant *pVVar3;
  long lVar4;
  char cVar5;
  Element **ppEVar6;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)*param_1;
  if (((iVar2 == 4) || (iVar2 == 0x15)) &&
     ((iVar2 = *(int *)*param_2, iVar2 == 4 || (iVar2 == 0x15)))) {
    Variant::operator_cast_to_String((Variant *)&local_50);
    Variant::operator_cast_to_String((Variant *)&local_48);
    cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
    lVar4 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    cVar5 = Variant::operator<((Variant *)*param_1,(Variant *)*param_2);
  }
  pVVar3 = (Variant *)*param_3;
  if (cVar5 == '\0') {
    iVar2 = *(int *)*param_1;
    if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)pVVar3 == 4 || (*(int *)pVVar3 == 0x15)))) {
      Variant::operator_cast_to_String((Variant *)&local_50);
      Variant::operator_cast_to_String((Variant *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = Variant::operator<((Variant *)*param_1,pVVar3);
    }
    ppEVar6 = param_1;
    if (cVar5 != '\0') goto LAB_001083ff;
    iVar2 = *(int *)*param_2;
    if (((iVar2 == 4) || (iVar2 == 0x15)) &&
       ((iVar2 = *(int *)*param_3, iVar2 == 4 || (iVar2 == 0x15)))) {
      Variant::operator_cast_to_String((Variant *)&local_50);
      Variant::operator_cast_to_String((Variant *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      ppEVar6 = param_2;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = Variant::operator<((Variant *)*param_2,(Variant *)*param_3);
      ppEVar6 = param_2;
    }
  }
  else {
    iVar2 = *(int *)*param_2;
    if (((iVar2 == 4) || (iVar2 == 0x15)) && ((*(int *)pVVar3 == 4 || (*(int *)pVVar3 == 0x15)))) {
      Variant::operator_cast_to_String((Variant *)&local_50);
      Variant::operator_cast_to_String((Variant *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = Variant::operator<((Variant *)*param_2,pVVar3);
    }
    ppEVar6 = param_2;
    if (cVar5 != '\0') goto LAB_001083ff;
    iVar2 = *(int *)*param_1;
    if (((iVar2 == 4) || (iVar2 == 0x15)) &&
       ((iVar2 = *(int *)*param_3, iVar2 == 4 || (iVar2 == 0x15)))) {
      Variant::operator_cast_to_String((Variant *)&local_50);
      Variant::operator_cast_to_String((Variant *)&local_48);
      cVar5 = String::operator<((String *)&local_48,(String *)&local_50);
      lVar4 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      ppEVar6 = param_1;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
    else {
      cVar5 = Variant::operator<((Variant *)*param_1,(Variant *)*param_3);
      ppEVar6 = param_1;
    }
  }
  if (cVar5 != '\0') {
    ppEVar6 = param_3;
  }
LAB_001083ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ppEVar6;
}



/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::introsort(long, long,
   List<Variant, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
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
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_001090d3:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_00108823:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_001088ac:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_00108944:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x00108990;
LAB_00108e26:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00108e36;
            goto LAB_00108fd3;
          }
LAB_00109048:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_00108f5f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00109011;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_001090ac;
  goto LAB_001090d3;
code_r0x00108990:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_001089cc:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_00108a52:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_00108ad3:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_00108b51:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_00108bc7:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_00108d5c;
                                      goto LAB_00108bc7;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x00108e70;
                                goto LAB_00108b51;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_00108d5c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x00108deb;
                          goto LAB_00108ad3;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x00108e70:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x00108eb0;
                    goto LAB_00108a52;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x00108deb:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00108e26;
              goto LAB_001089cc;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x00108eb0:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_00108f5f;
        goto LAB_00108944;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_00108fd3:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_001088ac;
    goto joined_r0x00109011;
  }
LAB_00108e36:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_00109048;
  goto LAB_00108944;
joined_r0x00109011:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_001090ac:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00108823;
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



/* DocData::ConstantDoc::~ConstantDoc() */

void __thiscall DocData::ConstantDoc::~ConstantDoc(ConstantDoc *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x58);
      *(undefined8 *)(this + 0x58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x50);
      *(undefined8 *)(this + 0x50) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
    }
  }
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



/* DocData::PropertyDoc::PropertyDoc(DocData::PropertyDoc const&) */

void __thiscall DocData::PropertyDoc::PropertyDoc(PropertyDoc *this,PropertyDoc *param_1)

{
  PropertyDoc PVar1;
  long lVar2;
  
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
  PVar1 = *(PropertyDoc *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  this[0x18] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined8 *)(this + 0x28) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  *(undefined8 *)(this + 0x38) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  PVar1 = *(PropertyDoc *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = 0;
  lVar2 = *(long *)(param_1 + 0x48);
  this[0x40] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
  }
  PVar1 = *(PropertyDoc *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = 0;
  lVar2 = *(long *)(param_1 + 0x58);
  this[0x50] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x58),(CowData *)(param_1 + 0x58));
  }
  PVar1 = *(PropertyDoc *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = 0;
  lVar2 = *(long *)(param_1 + 0x68);
  this[0x60] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x68),(CowData *)(param_1 + 0x68));
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x70),(CowData *)(param_1 + 0x70));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, DocData::EnumDoc, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DocData::EnumDoc> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
::operator[](HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
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
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined1 *puVar48;
  long lVar49;
  undefined8 uVar50;
  uint uVar51;
  long lVar52;
  ulong uVar53;
  long lVar54;
  uint *puVar55;
  uint uVar56;
  uint uVar57;
  undefined1 (*pauVar58) [16];
  undefined1 (*pauVar59) [16];
  long in_FS_OFFSET;
  long local_b8;
  undefined1 local_b0;
  long local_a8;
  undefined1 local_a0;
  long local_98 [2];
  undefined1 local_88 [16];
  long local_78 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar57 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00109e10:
    local_98[0] = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    uVar47 = (ulong)uVar57;
    uVar39 = uVar47 * 4;
    uVar53 = uVar47 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar57 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar53)) && (pvVar43 < (void *)((long)pvVar2 + uVar39))
         ) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar47 != uVar39);
      }
      else {
        memset(pvVar2,0,uVar39);
        memset(pvVar43,0,uVar53);
      }
      goto LAB_00109707;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001098ef;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00109716;
LAB_00109915:
    uVar57 = *(uint *)(this + 0x28);
    if (uVar57 == 0x1c) {
      lVar49 = 0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
LAB_00109f9d:
      puVar48 = (undefined1 *)(lVar49 + 0x18);
      goto LAB_00109d6f;
    }
    uVar39 = (ulong)(uVar57 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar57 * 4);
    if (uVar57 + 1 < 2) {
      uVar39 = 2;
    }
    uVar57 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar57;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar53 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar53,false);
    *(void **)(this + 8) = __s_00;
    if (uVar57 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar53)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar53);
      }
    }
    if (uVar38 != 0) {
      uVar39 = 0;
      do {
        uVar57 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar57 != 0) {
          lVar49 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar53 = CONCAT44(0,uVar37);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar57 * lVar54;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar53;
          lVar45 = SUB168(auVar11 * auVar27,8);
          puVar55 = (uint *)(lVar49 + lVar45 * 4);
          iVar44 = SUB164(auVar11 * auVar27,8);
          uVar36 = *puVar55;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar36 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar36 * lVar54;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar53;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((iVar44 + uVar37) - SUB164(auVar12 * auVar28,8)) * lVar54;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar53;
            uVar56 = SUB164(auVar13 * auVar29,8);
            uVar50 = uVar40;
            if (uVar56 < uVar51) {
              *puVar55 = uVar57;
              puVar42 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar50 = *puVar42;
              *puVar42 = uVar40;
              uVar57 = uVar36;
              uVar51 = uVar56;
            }
            uVar51 = uVar51 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar54;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar53;
            lVar45 = SUB168(auVar14 * auVar30,8);
            puVar55 = (uint *)(lVar49 + lVar45 * 4);
            iVar44 = SUB164(auVar14 * auVar30,8);
            uVar40 = uVar50;
            uVar36 = *puVar55;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar55 = uVar57;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar38 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_b0 = 0;
      local_a0 = 0;
      local_b8 = 0;
      uVar57 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_a8 = 0;
      local_98[0] = 0;
    }
    else {
      uVar39 = CONCAT44(0,uVar57);
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar54 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar37 != 0) {
        uVar38 = uVar37;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar38 * lVar49;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar39;
      lVar45 = SUB168(auVar7 * auVar23,8);
      uVar37 = *(uint *)(lVar54 + lVar45 * 4);
      uVar36 = SUB164(auVar7 * auVar23,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar51 = 0;
        do {
          if (uVar37 == uVar38) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar45 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              puVar48 = (undefined1 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar36 * 8) + 0x18);
              goto LAB_00109d91;
            }
            lVar54 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar51 = uVar51 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar36 + 1) * lVar49;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar39;
          lVar45 = SUB168(auVar8 * auVar24,8);
          uVar37 = *(uint *)(lVar54 + lVar45 * 4);
          uVar36 = SUB164(auVar8 * auVar24,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar37 * lVar49, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar39, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar36 + uVar57) - SUB164(auVar9 * auVar25,8)) * lVar49,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, uVar51 <= SUB164(auVar10 * auVar26,8)));
      }
      local_b0 = 0;
      local_a0 = 0;
      local_b8 = 0;
      uVar57 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_a8 = 0;
      local_98[0] = 0;
      if (lVar52 == 0) goto LAB_00109e10;
    }
LAB_00109707:
    iVar44 = *(int *)(this + 0x2c);
    uVar47 = (ulong)uVar57;
    if (iVar44 != 0) {
LAB_00109716:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar36 = String::hash();
      uVar39 = CONCAT44(0,uVar38);
      lVar54 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar36 != 0) {
        uVar37 = uVar36;
      }
      uVar56 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar37 * lVar49;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar45 = SUB168(auVar3 * auVar19,8);
      uVar36 = *(uint *)(lVar54 + lVar45 * 4);
      uVar51 = SUB164(auVar3 * auVar19,8);
      if (uVar36 != 0) {
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar35 != '\0') {
              lVar49 = *(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8);
              if (*(long *)(lVar49 + 0x18) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x18),(CowData *)&local_b8);
              }
              *(undefined1 *)(lVar49 + 0x20) = 0;
              if (*(long *)(lVar49 + 0x28) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x28),(CowData *)&local_a8);
              }
              *(undefined1 *)(lVar49 + 0x30) = 0;
              if (*(long *)(lVar49 + 0x38) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar49 + 0x38),(CowData *)local_98);
              }
              lVar49 = *(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_00109f9d;
            }
            lVar54 = *(long *)(this + 0x10);
          }
          uVar56 = uVar56 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar51 + 1) * lVar49;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar39;
          lVar45 = SUB168(auVar4 * auVar20,8);
          uVar36 = *(uint *)(lVar54 + lVar45 * 4);
          uVar51 = SUB164(auVar4 * auVar20,8);
        } while ((uVar36 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar36 * lVar49, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar39, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + uVar51) - SUB164(auVar5 * auVar21,8)) * lVar49,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar39, uVar56 <= SUB164(auVar6 * auVar22,8)));
      }
      iVar44 = *(int *)(this + 0x2c);
      uVar47 = (ulong)uVar57;
    }
LAB_001098ef:
    if ((float)uVar47 * __LC5 < (float)(iVar44 + 1)) goto LAB_00109915;
  }
  local_78[0] = 0;
  local_88 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x40,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00109f0b:
    puVar42 = *(undefined8 **)(this + 0x20);
    pauVar41[2][0] = 0;
    lVar49 = 0;
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    *(undefined8 *)(pauVar41[2] + 8) = 0;
    pauVar41[3][0] = 0;
    *(undefined8 *)(pauVar41[3] + 8) = 0;
    if (puVar42 != (undefined8 *)0x0) goto LAB_00109c0f;
LAB_00109f3a:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)param_1);
    lVar49 = local_78[0];
    uVar40 = local_88._0_8_;
    uVar50 = local_88._8_8_;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x40,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = uVar40;
    *(undefined8 *)(*pauVar41 + 8) = uVar50;
    if (lVar49 == 0) goto LAB_00109f0b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_78);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    pauVar41[2][0] = 0;
    *(undefined8 *)(pauVar41[2] + 8) = 0;
    pauVar41[3][0] = 0;
    *(undefined8 *)(pauVar41[3] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar49 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_78[0] + -0x10),false);
    }
    puVar42 = *(undefined8 **)(this + 0x20);
    lVar49 = local_98[0];
    if (puVar42 == (undefined8 *)0x0) goto LAB_00109f3a;
LAB_00109c0f:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar38 = String::hash();
  lVar54 = *(long *)(this + 0x10);
  uVar57 = 1;
  if (uVar38 != 0) {
    uVar57 = uVar38;
  }
  lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar38);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulong)uVar57 * lVar45;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar39;
  lVar46 = SUB168(auVar15 * auVar31,8);
  lVar52 = *(long *)(this + 8);
  puVar55 = (uint *)(lVar54 + lVar46 * 4);
  iVar44 = SUB164(auVar15 * auVar31,8);
  uVar37 = *puVar55;
  pauVar59 = pauVar41;
  if (uVar37 != 0) {
    uVar36 = 0;
    pauVar58 = pauVar41;
    do {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar37 * lVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar39;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar16 * auVar32,8)) * lVar45;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar39;
      uVar51 = SUB164(auVar17 * auVar33,8);
      pauVar59 = pauVar58;
      if (uVar51 < uVar36) {
        *puVar55 = uVar57;
        puVar42 = (undefined8 *)(lVar52 + lVar46 * 8);
        pauVar59 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar58;
        uVar36 = uVar51;
        uVar57 = uVar37;
      }
      uVar36 = uVar36 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)(iVar44 + 1) * lVar45;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar39;
      lVar46 = SUB168(auVar18 * auVar34,8);
      puVar55 = (uint *)(lVar54 + lVar46 * 4);
      iVar44 = SUB164(auVar18 * auVar34,8);
      uVar37 = *puVar55;
      pauVar58 = pauVar59;
    } while (uVar37 != 0);
  }
  puVar48 = pauVar41[1] + 8;
  *(undefined1 (**) [16])(lVar52 + lVar46 * 8) = pauVar59;
  *puVar55 = uVar57;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar49 != 0) {
    LOCK();
    plVar1 = (long *)(lVar49 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_98[0] + -0x10),false);
    }
  }
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a8 + -0x10),false);
    }
  }
LAB_00109d6f:
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_b8 + -0x10),false);
    }
  }
LAB_00109d91:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0010a6a8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_0010a558;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0010a55c:
      if (iVar46 != 0) {
LAB_0010a564:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_0010a15c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a193;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010a193;
    if (iVar46 != 0) goto LAB_0010a564;
LAB_0010a1b9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a15c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0010a15c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_0010a6a8;
LAB_0010a558:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0010a55c;
    }
LAB_0010a193:
    if ((float)uVar40 * __LC5 < (float)(iVar46 + 1)) goto LAB_0010a1b9;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0010a66d;
LAB_0010a444:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010a444;
LAB_0010a66d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a15c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010a980) */
/* WARNING: Removing unreachable block (ram,0x0010aab0) */
/* WARNING: Removing unreachable block (ram,0x0010ac29) */
/* WARNING: Removing unreachable block (ram,0x0010aabc) */
/* WARNING: Removing unreachable block (ram,0x0010aac6) */
/* WARNING: Removing unreachable block (ram,0x0010ac0b) */
/* WARNING: Removing unreachable block (ram,0x0010aad2) */
/* WARNING: Removing unreachable block (ram,0x0010aadc) */
/* WARNING: Removing unreachable block (ram,0x0010abed) */
/* WARNING: Removing unreachable block (ram,0x0010aae8) */
/* WARNING: Removing unreachable block (ram,0x0010aaf2) */
/* WARNING: Removing unreachable block (ram,0x0010abcf) */
/* WARNING: Removing unreachable block (ram,0x0010aafe) */
/* WARNING: Removing unreachable block (ram,0x0010ab08) */
/* WARNING: Removing unreachable block (ram,0x0010abb1) */
/* WARNING: Removing unreachable block (ram,0x0010ab14) */
/* WARNING: Removing unreachable block (ram,0x0010ab1e) */
/* WARNING: Removing unreachable block (ram,0x0010ab93) */
/* WARNING: Removing unreachable block (ram,0x0010ab26) */
/* WARNING: Removing unreachable block (ram,0x0010ab30) */
/* WARNING: Removing unreachable block (ram,0x0010ab78) */
/* WARNING: Removing unreachable block (ram,0x0010ab38) */
/* WARNING: Removing unreachable block (ram,0x0010ab4e) */
/* WARNING: Removing unreachable block (ram,0x0010ab5a) */
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



/* WARNING: Removing unreachable block (ram,0x0010ada0) */
/* WARNING: Removing unreachable block (ram,0x0010aed0) */
/* WARNING: Removing unreachable block (ram,0x0010b049) */
/* WARNING: Removing unreachable block (ram,0x0010aedc) */
/* WARNING: Removing unreachable block (ram,0x0010aee6) */
/* WARNING: Removing unreachable block (ram,0x0010b02b) */
/* WARNING: Removing unreachable block (ram,0x0010aef2) */
/* WARNING: Removing unreachable block (ram,0x0010aefc) */
/* WARNING: Removing unreachable block (ram,0x0010b00d) */
/* WARNING: Removing unreachable block (ram,0x0010af08) */
/* WARNING: Removing unreachable block (ram,0x0010af12) */
/* WARNING: Removing unreachable block (ram,0x0010afef) */
/* WARNING: Removing unreachable block (ram,0x0010af1e) */
/* WARNING: Removing unreachable block (ram,0x0010af28) */
/* WARNING: Removing unreachable block (ram,0x0010afd1) */
/* WARNING: Removing unreachable block (ram,0x0010af34) */
/* WARNING: Removing unreachable block (ram,0x0010af3e) */
/* WARNING: Removing unreachable block (ram,0x0010afb3) */
/* WARNING: Removing unreachable block (ram,0x0010af46) */
/* WARNING: Removing unreachable block (ram,0x0010af50) */
/* WARNING: Removing unreachable block (ram,0x0010af98) */
/* WARNING: Removing unreachable block (ram,0x0010af58) */
/* WARNING: Removing unreachable block (ram,0x0010af6e) */
/* WARNING: Removing unreachable block (ram,0x0010af7a) */
/* String vformat<StringName, String>(String const&, StringName const, String const) */

undefined8 *
vformat<StringName,String>(undefined8 *param_1,bool *param_2,StringName *param_3,String *param_4)

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



/* void List<Variant, DefaultAllocator>::sort_custom<StringLikeVariantOrder>() */

void __thiscall
List<Variant,DefaultAllocator>::sort_custom<StringLikeVariantOrder>
          (List<Variant,DefaultAllocator> *this)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  char cVar5;
  Element *pEVar6;
  Element **__src;
  undefined8 *puVar7;
  Element *pEVar8;
  Element **ppEVar9;
  Element *pEVar10;
  long lVar11;
  Variant *pVVar12;
  Element **ppEVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this == 0) || (iVar2 = *(int *)(*(long *)this + 0x10), iVar2 < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pEVar6 = (Element *)(long)iVar2;
    __src = (Element **)Memory::alloc_static((long)pEVar6 * 8,true);
    if (__src == (Element **)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
    }
    else {
      __src[-1] = pEVar6;
    }
    if (*(long **)this != (long *)0x0) {
      ppEVar9 = __src;
      for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
          pEVar10 = *(Element **)(pEVar10 + 0x18)) {
        *ppEVar9 = pEVar10;
        ppEVar9 = ppEVar9 + 1;
      }
    }
    lVar14 = 0;
    pEVar10 = pEVar6;
    do {
      pEVar10 = (Element *)((long)pEVar10 >> 1);
      lVar14 = lVar14 + 1;
    } while (pEVar10 != (Element *)0x1);
    lVar14 = lVar14 * 2;
    pEVar10 = pEVar6;
    if ((long)pEVar6 < 0x11) {
      pEVar10 = (Element *)0x1;
      pEVar8 = *__src;
      do {
        while( true ) {
          pVVar12 = (Variant *)__src[(long)pEVar10];
          if ((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) {
            if ((*(int *)pEVar8 == 4) || (*(int *)pEVar8 == 0x15)) {
              Variant::operator_cast_to_String((Variant *)&local_48);
              Variant::operator_cast_to_String((Variant *)&local_50);
              cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
              lVar14 = local_50;
              if (local_50 != 0) {
                LOCK();
                plVar1 = (long *)(local_50 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              lVar14 = local_48;
              if (local_48 != 0) {
                LOCK();
                plVar1 = (long *)(local_48 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
            }
            else {
              cVar5 = Variant::operator<(pVVar12,(Variant *)pEVar8);
            }
          }
          else {
            cVar5 = Variant::operator<(pVVar12,(Variant *)pEVar8);
          }
          if (cVar5 == '\0') break;
          __n = (long)pEVar10 * 8;
          pEVar10 = pEVar10 + 1;
          memmove(__src + 1,__src,__n);
          *__src = (Element *)pVVar12;
          pEVar8 = (Element *)pVVar12;
          if (pEVar6 == pEVar10) goto LAB_0010b7bc;
        }
        ppEVar9 = __src + (long)pEVar10;
        while( true ) {
          if (((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) &&
             ((iVar3 = *(int *)ppEVar9[-1], iVar3 == 4 || (iVar3 == 0x15)))) {
            Variant::operator_cast_to_String((Variant *)&local_48);
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
            lVar14 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            lVar14 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
            cVar5 = Variant::operator<(pVVar12,(Variant *)ppEVar9[-1]);
          }
          if (cVar5 == '\0') goto LAB_0010bada;
          if (__src + 1 == ppEVar9) break;
          *ppEVar9 = ppEVar9[-1];
          ppEVar9 = ppEVar9 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_0010bada:
        pEVar10 = pEVar10 + 1;
        *ppEVar9 = (Element *)pVVar12;
        pVVar12 = (Variant *)*__src;
        pEVar8 = (Element *)pVVar12;
      } while (pEVar6 != pEVar10);
    }
    else {
      do {
        lVar14 = lVar14 + -1;
        puVar7 = (undefined8 *)
                 SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
                 ::median_of_3(__src,__src + ((long)pEVar10 >> 1),__src + (long)(pEVar10 + -1));
        pEVar8 = (Element *)
                 SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
                 ::partitioner(0,(long)pEVar10,(Element *)*puVar7,__src);
        SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
        ::introsort((long)pEVar8,(long)pEVar10,__src,lVar14);
        if ((long)pEVar8 < 0x11) goto LAB_0010b3bc;
        pEVar10 = pEVar8;
      } while (lVar14 != 0);
      SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>
      ::partial_sort(0,(long)pEVar8,(long)pEVar8,__src);
LAB_0010b3bc:
      lVar14 = 1;
      do {
        while( true ) {
          lVar11 = lVar14;
          pVVar12 = (Variant *)__src[lVar11];
          pVVar4 = (Variant *)*__src;
          if ((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) {
            if ((*(int *)pVVar4 == 4) || (*(int *)pVVar4 == 0x15)) {
              Variant::operator_cast_to_String((Variant *)&local_48);
              Variant::operator_cast_to_String((Variant *)&local_50);
              cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
              lVar14 = local_50;
              if (local_50 != 0) {
                LOCK();
                plVar1 = (long *)(local_50 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
              lVar14 = local_48;
              if (local_48 != 0) {
                LOCK();
                plVar1 = (long *)(local_48 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void *)(lVar14 + -0x10),false);
                }
              }
            }
            else {
              cVar5 = Variant::operator<(pVVar12,pVVar4);
            }
          }
          else {
            cVar5 = Variant::operator<(pVVar12,pVVar4);
          }
          if (cVar5 == '\0') break;
          memmove(__src + 1,__src,lVar11 * 8);
          *__src = (Element *)pVVar12;
          lVar14 = lVar11 + 1;
          if (lVar11 + 1 == 0x10) goto LAB_0010b541;
        }
        ppEVar9 = __src + lVar11;
        while( true ) {
          if (((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) &&
             ((iVar3 = *(int *)ppEVar9[-1], iVar3 == 4 || (iVar3 == 0x15)))) {
            Variant::operator_cast_to_String((Variant *)&local_48);
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
            lVar14 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            lVar14 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
            cVar5 = Variant::operator<(pVVar12,(Variant *)ppEVar9[-1]);
          }
          if (cVar5 == '\0') {
            *ppEVar9 = (Element *)pVVar12;
            goto LAB_0010b533;
          }
          ppEVar13 = ppEVar9 + -1;
          if (__src == ppEVar13) break;
          *ppEVar9 = *ppEVar13;
          ppEVar9 = ppEVar13;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        *ppEVar9 = (Element *)pVVar12;
LAB_0010b533:
        lVar14 = lVar11 + 1;
      } while (lVar11 + 1 != 0x10);
LAB_0010b541:
      pEVar10 = (Element *)(lVar11 + 1);
      do {
        pVVar12 = (Variant *)__src[(long)pEVar10];
        ppEVar9 = __src + (long)pEVar10;
        pEVar8 = pEVar10;
        while( true ) {
          pEVar8 = pEVar8 + -1;
          if (((*(int *)pVVar12 == 4) || (*(int *)pVVar12 == 0x15)) &&
             ((iVar3 = *(int *)ppEVar9[-1], iVar3 == 4 || (iVar3 == 0x15)))) {
            Variant::operator_cast_to_String((Variant *)&local_48);
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar5 = String::operator<((String *)&local_50,(String *)&local_48);
            lVar14 = local_50;
            if (local_50 != 0) {
              LOCK();
              plVar1 = (long *)(local_50 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_50 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
            lVar14 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar14 + -0x10),false);
              }
            }
          }
          else {
            cVar5 = Variant::operator<(pVVar12,(Variant *)ppEVar9[-1]);
          }
          if (cVar5 == '\0') goto LAB_0010b798;
          if (pEVar8 == (Element *)0x0) break;
          *ppEVar9 = ppEVar9[-1];
          ppEVar9 = ppEVar9 + -1;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_0010b798:
        *ppEVar9 = (Element *)pVVar12;
        pEVar10 = pEVar10 + 1;
      } while (pEVar6 != pEVar10);
      pVVar12 = (Variant *)*__src;
    }
LAB_0010b7bc:
    puVar7 = *(undefined8 **)this;
    *puVar7 = pVVar12;
    *(undefined8 *)(pVVar12 + 0x20) = 0;
    *(Element **)(*__src + 0x18) = __src[1];
    pEVar10 = __src[(long)(pEVar6 + -1)];
    puVar7[1] = pEVar10;
    *(Element **)(pEVar10 + 0x20) = __src[(long)(pEVar6 + -2)];
    *(undefined8 *)(__src[(long)(pEVar6 + -1)] + 0x18) = 0;
    if (iVar2 != 2) {
      ppEVar9 = __src;
      do {
        ppEVar13 = ppEVar9 + 1;
        *(Element **)(ppEVar9[1] + 0x20) = *ppEVar9;
        *(Element **)(*ppEVar13 + 0x18) = ppEVar9[2];
        ppEVar9 = ppEVar13;
      } while (ppEVar13 != __src + (iVar2 - 2));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(__src,true);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<GDScript> > > >::operator[](StringName
   const&) */

undefined8 * __thiscall
HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
::operator[](HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  char cVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined8 *puVar57;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  long local_40;
  
  lVar45 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  if (lVar45 == 0) {
LAB_0010c200:
    uVar47 = uVar42 * 4;
    uVar52 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar46 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar46;
    if ((int)uVar42 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar46 + uVar52)) && (pvVar46 < (void *)((long)pvVar3 + uVar47))
         ) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar47 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar42 != uVar47);
        goto LAB_0010c048;
      }
      memset(pvVar3,0,uVar47);
      memset(pvVar46,0,uVar52);
      iVar48 = *(int *)(this + 0x2c);
LAB_0010c04c:
      if (iVar48 != 0) {
LAB_0010c054:
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar47 = CONCAT44(0,uVar40);
        lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar41 = StringName::get_empty_hash();
        }
        else {
          uVar41 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        uVar56 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar45;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar47;
        lVar51 = SUB168(auVar18 * auVar34,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
        uVar55 = SUB164(auVar18 * auVar34,8);
        if (uVar54 != 0) {
          do {
            if ((uVar41 == uVar54) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar51 * 8) + 0x10) == *(long *)param_1))
            {
              puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              pOVar5 = (Object *)puVar44[3];
              if (pOVar5 != (Object *)0x0) {
                puVar44[3] = 0;
                cVar38 = RefCounted::unreference();
                if ((cVar38 != '\0') && (cVar38 = predelete_handler(pOVar5), cVar38 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
                puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              }
              goto LAB_0010bc1c;
            }
            uVar56 = uVar56 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar55 + 1) * lVar45;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar47;
            lVar51 = SUB168(auVar19 * auVar35,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
            uVar55 = SUB164(auVar19 * auVar35,8);
          } while ((uVar54 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar54 * lVar45, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar47, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar40 + uVar55) - SUB164(auVar20 * auVar36,8)) * lVar45,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar47, uVar56 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar48 = *(int *)(this + 0x2c);
      }
      goto LAB_0010bc4f;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_0010bc4f;
    if (iVar48 != 0) goto LAB_0010c054;
LAB_0010bc75:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar44 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010bc1c;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar52 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar46 = *(void **)(this + 8);
    uVar42 = uVar52 * 4;
    uVar47 = uVar52 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar52);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar45 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar54);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar51;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar47;
          lVar49 = SUB168(auVar10 * auVar26,8);
          puVar1 = (uint *)(lVar45 + lVar49 * 4);
          iVar48 = SUB164(auVar10 * auVar26,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar46 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar55 * lVar51;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar54 + iVar48) - SUB164(auVar11 * auVar27,8)) * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar47;
            uVar39 = SUB164(auVar12 * auVar28,8);
            uVar53 = uVar43;
            if (uVar39 < uVar56) {
              *puVar1 = uVar40;
              puVar44 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar44;
              *puVar44 = uVar43;
              uVar40 = uVar55;
              uVar56 = uVar39;
            }
            uVar56 = uVar56 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar48 + 1) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar47;
            lVar49 = SUB168(auVar13 * auVar29,8);
            puVar1 = (uint *)(lVar45 + lVar49 * 4);
            iVar48 = SUB164(auVar13 * auVar29,8);
            uVar43 = uVar53;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar41 != uVar42);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar48 = *(int *)(this + 0x2c);
    if (iVar48 != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar41 = StringName::get_empty_hash();
        lVar45 = *(long *)(this + 8);
      }
      else {
        uVar41 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar42;
      lVar49 = SUB168(auVar6 * auVar22,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      uVar55 = SUB164(auVar6 * auVar22,8);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar54 == uVar41) &&
             (*(long *)(*(long *)(lVar45 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            puVar44 = *(undefined8 **)(lVar45 + (ulong)uVar55 * 8);
            goto LAB_0010bc1c;
          }
          uVar56 = uVar56 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar55 + 1) * lVar51;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar42;
          lVar49 = SUB168(auVar7 * auVar23,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar55 = SUB164(auVar7 * auVar23,8);
        } while ((uVar54 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar54 * lVar51, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar55 + uVar40) - SUB164(auVar8 * auVar24,8)) * lVar51,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar42, uVar56 <= SUB164(auVar9 * auVar25,8)));
      }
      uVar42 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar45 == 0) goto LAB_0010c200;
LAB_0010c048:
      iVar48 = *(int *)(this + 0x2c);
      goto LAB_0010c04c;
    }
LAB_0010bc4f:
    if ((float)uVar42 * __LC5 < (float)(iVar48 + 1)) goto LAB_0010bc75;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = (Object *)0x0;
  puVar44 = (undefined8 *)operator_new(0x20,"");
  *puVar44 = 0;
  puVar44[1] = 0;
  StringName::StringName((StringName *)(puVar44 + 2),(StringName *)&local_58);
  puVar44[3] = 0;
  if (local_50 != (Object *)0x0) {
    puVar44[3] = local_50;
    cVar38 = RefCounted::reference();
    if (cVar38 == '\0') {
      puVar44[3] = 0;
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar38 = RefCounted::unreference(), pOVar5 = local_50, cVar38 != '\0')) &&
       (cVar38 = predelete_handler(local_50), cVar38 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar44;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 == 0) goto LAB_0010c1c5;
LAB_0010bf38:
    uVar40 = *(uint *)(lVar45 + 0x20);
  }
  else {
    *puVar4 = puVar44;
    puVar44[1] = puVar4;
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 != 0) goto LAB_0010bf38;
LAB_0010c1c5:
    uVar40 = StringName::get_empty_hash();
  }
  lVar45 = *(long *)(this + 0x10);
  if (uVar40 == 0) {
    uVar40 = 1;
  }
  uVar42 = (ulong)uVar40;
  uVar55 = 0;
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar47 = CONCAT44(0,uVar41);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar42 * lVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar47;
  lVar50 = SUB168(auVar14 * auVar30,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar50 * 4);
  iVar48 = SUB164(auVar14 * auVar30,8);
  uVar54 = *puVar1;
  puVar4 = puVar44;
  while (uVar54 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar54 * lVar51;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar48 + uVar41) - SUB164(auVar15 * auVar31,8)) * lVar51;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar47;
    uVar40 = SUB164(auVar16 * auVar32,8);
    puVar57 = puVar4;
    if (uVar40 < uVar55) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar54;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar57 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar55 = uVar40;
    }
    uVar40 = (uint)uVar42;
    uVar55 = uVar55 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar48 + 1) * lVar51;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    lVar50 = SUB168(auVar17 * auVar33,8);
    puVar1 = (uint *)(lVar45 + lVar50 * 4);
    iVar48 = SUB164(auVar17 * auVar33,8);
    puVar4 = puVar57;
    uVar54 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar4;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010bc1c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar44 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010ca04:
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
LAB_0010c8e4:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_0010c8f0:
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
                goto LAB_0010c7b0;
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
      goto LAB_0010c3b0;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_0010c3b0;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010c8f0;
LAB_0010c3d6:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_0010c7b0;
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
              goto LAB_0010c7b0;
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
      if (lVar52 == 0) goto LAB_0010ca04;
      goto LAB_0010c8e4;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_0010c3b0:
    if ((float)uVar45 * __LC5 < (float)(iVar42 + 1)) goto LAB_0010c3d6;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_0010cab5:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_0010c67a;
LAB_0010cad1:
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
    if (lVar48 == 0) goto LAB_0010cab5;
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
    if (puVar40 == (undefined8 *)0x0) goto LAB_0010cad1;
LAB_0010c67a:
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
LAB_0010c7b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
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



/* DocData::MethodDoc::~MethodDoc() */

void __thiscall DocData::MethodDoc::~MethodDoc(MethodDoc *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x70) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x70) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x70);
      *(undefined8 *)(this + 0x70) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(this + 0x58));
  if (*(long *)(this + 0x48) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x48) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x48);
      *(undefined8 *)(this + 0x48) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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
    }
  }
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



/* CowData<DocData::ArgumentDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ArgumentDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::TutorialDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::TutorialDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::MethodDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ConstantDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::PropertyDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::TutorialDoc>::_unref() */

void __thiscall CowData<DocData::TutorialDoc>::_unref(CowData<DocData::TutorialDoc> *this)

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
          plVar6 = plVar6 + 2;
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
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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



/* CowData<DocData::ConstantDoc>::_unref() */

void __thiscall CowData<DocData::ConstantDoc>::_unref(CowData<DocData::ConstantDoc> *this)

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
          if (plVar6[0xb] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xb] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xb];
              plVar6[0xb] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[10] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[10] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[10];
              plVar6[10] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[8] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[8] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[8];
              plVar6[8] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
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
          plVar6 = plVar6 + 0xc;
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



/* CowData<DocData::PropertyDoc>::_unref() */

void __thiscall CowData<DocData::PropertyDoc>::_unref(CowData<DocData::PropertyDoc> *this)

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
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          if (plVar6[0xb] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xb] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xb];
              plVar6[0xb] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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



/* CowData<GDScriptParser::DataType>::_unref() */

void __thiscall CowData<GDScriptParser::DataType>::_unref(CowData<GDScriptParser::DataType> *this)

{
  long *plVar1;
  DataType *pDVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  DataType *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pDVar2 = *(DataType **)this;
    if (pDVar2 != (DataType *)0x0) {
      lVar3 = *(long *)(pDVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pDVar2;
        do {
          lVar5 = lVar5 + 1;
          GDScriptParser::DataType::~DataType(this_00);
          this_00 = this_00 + 0xf0;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pDVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GDScriptParser::DataType::~DataType() */

void __thiscall GDScriptParser::DataType::~DataType(DataType *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  bool bVar9;
  
  pvVar7 = *(void **)(this + 200);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xec) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xd0) + lVar6) != 0) {
            bVar9 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xd0) + lVar6) = 0;
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            if ((bVar9) && (*(long *)((long)pvVar7 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 200);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010d8fa;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
LAB_0010d8fa:
  if (*(long *)(this + 0xb8) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0xb8) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0xb8);
      *(undefined8 *)(this + 0xb8) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0xa0));
  plVar8 = *(long **)(this + 0x90);
  if (plVar8 != (long *)0x0) {
    do {
      pvVar7 = (void *)*plVar8;
      if (pvVar7 == (void *)0x0) {
        if ((int)plVar8[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010d9e3;
        }
        break;
      }
      if (*(long **)((long)pvVar7 + 0x40) == plVar8) {
        lVar6 = *(long *)((long)pvVar7 + 0x30);
        lVar3 = *(long *)((long)pvVar7 + 0x38);
        *plVar8 = lVar6;
        if (pvVar7 == (void *)plVar8[1]) {
          plVar8[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar6;
          lVar6 = *(long *)((long)pvVar7 + 0x30);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x38) = lVar3;
        }
        if (*(long *)((long)pvVar7 + 0x20) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar7 + 0x20) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar6 = *(long *)((long)pvVar7 + 0x20);
            *(undefined8 *)((long)pvVar7 + 0x20) = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar7 + 0x10) != 0)) {
          StringName::unref();
        }
        if (*(long *)((long)pvVar7 + 8) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar7 + 8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar6 = *(long *)((long)pvVar7 + 8);
            *(undefined8 *)((long)pvVar7 + 8) = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        Memory::free_static(pvVar7,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(this + 0x90);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
  }
LAB_0010d9e3:
  if (*(long *)(this + 0x78) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0x78) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0x78);
      *(undefined8 *)(this + 0x78) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x68) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x60) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0x60) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0x60);
      *(undefined8 *)(this + 0x60) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0x50);
      *(undefined8 *)(this + 0x50) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar6 = *(long *)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x38) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x38);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0x30) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010da98;
    }
    if (*(long *)(this + 0x28) != 0) {
      StringName::unref();
    }
  }
LAB_0010da98:
  CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType> *)(this + 8));
  return;
}



/* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
::_resize_and_rehash
          (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
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
/* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::insert(StringName const&, long
   const&, bool) */

StringName *
HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
::insert(StringName *param_1,long *param_2,bool param_3)

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
  void *__s_00;
  long *in_RCX;
  uint uVar26;
  int iVar27;
  undefined7 in_register_00000011;
  StringName *pSVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  long *plVar35;
  long in_FS_OFFSET;
  bool bVar36;
  long *local_80;
  long local_58;
  long local_50;
  long local_40;
  
  pSVar28 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == 0) {
    uVar21 = (ulong)uVar23;
    uVar31 = uVar21 * 4;
    uVar33 = uVar21 * 8;
    lVar25 = Memory::alloc_static(uVar31,false);
    param_2[2] = lVar25;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    param_2[1] = (long)__s_00;
    if (uVar23 != 0) {
      __s = (void *)param_2[2];
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar21 != uVar31);
      }
      else {
        memset(__s,0,uVar31);
        memset(__s_00,0,uVar33);
      }
      goto LAB_0010df12;
    }
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010e039;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_0010df1e;
LAB_0010e05b:
    if ((int)param_2[5] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_0010dff1;
    }
    _resize_and_rehash((HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
                        *)param_2,(int)param_2[5] + 1);
  }
  else {
LAB_0010df12:
    iVar27 = *(int *)((long)param_2 + 0x2c);
    if (iVar27 != 0) {
LAB_0010df1e:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      uVar31 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      if (*(long *)pSVar28 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar28 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar34 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar31;
      lVar29 = SUB168(auVar5 * auVar13,8);
      uVar32 = *(uint *)(param_2[2] + lVar29 * 4);
      uVar26 = SUB164(auVar5 * auVar13,8);
      if (uVar32 != 0) {
        do {
          if ((uVar24 == uVar32) &&
             (*(long *)(*(long *)(param_2[1] + lVar29 * 8) + 0x10) == *(long *)pSVar28)) {
            local_80 = *(long **)(param_2[1] + (ulong)uVar26 * 8);
            local_80[3] = *in_RCX;
            goto LAB_0010dff1;
          }
          uVar34 = uVar34 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar26 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar31;
          lVar29 = SUB168(auVar6 * auVar14,8);
          uVar32 = *(uint *)(param_2[2] + lVar29 * 4);
          uVar26 = SUB164(auVar6 * auVar14,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar32 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar31, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar26) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar31, uVar34 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar27 = *(int *)((long)param_2 + 0x2c);
    }
LAB_0010e039:
    if ((float)uVar23 * __LC5 < (float)(iVar27 + 1)) goto LAB_0010e05b;
  }
  StringName::StringName((StringName *)&local_58,pSVar28);
  local_50 = *in_RCX;
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  bVar36 = StringName::configured != '\0';
  local_80[3] = local_50;
  if ((bVar36) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = (undefined8 *)param_2[4];
  if (puVar3 == (undefined8 *)0x0) {
    param_2[3] = (long)local_80;
    param_2[4] = (long)local_80;
LAB_0010e114:
    lVar25 = *(long *)pSVar28;
    if (lVar25 != 0) goto LAB_0010e121;
LAB_0010e21d:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar25 = param_2[3];
      *(long **)(lVar25 + 8) = local_80;
      *local_80 = lVar25;
      param_2[3] = (long)local_80;
      goto LAB_0010e114;
    }
    *puVar3 = local_80;
    local_80[1] = (long)puVar3;
    lVar25 = *(long *)pSVar28;
    param_2[4] = (long)local_80;
    if (lVar25 == 0) goto LAB_0010e21d;
LAB_0010e121:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = param_2[2];
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar31 = (ulong)uVar23;
  uVar32 = 0;
  lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar33 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar31 * lVar29;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar33;
  lVar30 = SUB168(auVar9 * auVar17,8);
  lVar4 = param_2[1];
  puVar1 = (uint *)(lVar25 + lVar30 * 4);
  iVar27 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = local_80;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar29;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar10 * auVar18,8)) * lVar29;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar33;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar35 = plVar22;
    if (uVar23 < uVar32) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar30 * 8);
      plVar35 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar32 = uVar23;
    }
    uVar23 = (uint)uVar31;
    uVar32 = uVar32 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar27 + 1) * lVar29;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar33;
    lVar30 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar30 * 4);
    iVar27 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar35;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar30 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_0010dff1:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */

void __thiscall GDScriptParser::DataType::DataType(DataType *this,DataType *param_1)

{
  long *plVar1;
  HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
  *this_00;
  Object *pOVar2;
  Object *pOVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  long lVar10;
  uint uVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  StringName local_48 [8];
  long local_40;
  ulong uVar9;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 6;
  *(undefined8 *)(this + 0x88) = 1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xe8) = 2;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  StringName::operator=((StringName *)(this + 0x28),(StringName *)(param_1 + 0x28));
  StringName::operator=((StringName *)(this + 0x30),(StringName *)(param_1 + 0x30));
  pOVar2 = *(Object **)(param_1 + 0x38);
  pOVar3 = *(Object **)(this + 0x38);
  if (pOVar2 != pOVar3) {
    *(Object **)(this + 0x38) = pOVar2;
    if ((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      *(undefined8 *)(this + 0x38) = 0;
    }
    if (((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if (*(long *)(this + 0x40) != *(long *)(param_1 + 0x40)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  if (*(long *)(this + 0x60) != *(long *)(param_1 + 0x60)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x60),(CowData *)(param_1 + 0x60));
  }
  StringName::operator=((StringName *)(this + 0x68),(StringName *)(param_1 + 0x68));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  if (*(long *)(this + 0x78) != *(long *)(param_1 + 0x78)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x78),(CowData *)(param_1 + 0x78));
  }
  plVar12 = *(long **)(this + 0x90);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  if (plVar12 != (long *)0x0) {
    do {
      pvVar4 = (void *)*plVar12;
      if (pvVar4 == (void *)0x0) goto LAB_0010e660;
      if (*(long **)((long)pvVar4 + 0x40) == plVar12) {
        lVar14 = *(long *)((long)pvVar4 + 0x30);
        lVar10 = *(long *)((long)pvVar4 + 0x38);
        *plVar12 = lVar14;
        if (pvVar4 == (void *)plVar12[1]) {
          plVar12[1] = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x30) = lVar14;
          lVar14 = *(long *)((long)pvVar4 + 0x30);
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x38) = lVar10;
        }
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar4 + 0x20) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar14 = *(long *)((long)pvVar4 + 0x20);
            *(undefined8 *)((long)pvVar4 + 0x20) = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
          StringName::unref();
        }
        if (*(long *)((long)pvVar4 + 8) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)((long)pvVar4 + 8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar14 = *(long *)((long)pvVar4 + 8);
            *(undefined8 *)((long)pvVar4 + 8) = 0;
            Memory::free_static((void *)(lVar14 + -0x10),false);
          }
        }
        Memory::free_static(pvVar4,false);
        *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar12 = *(long **)(this + 0x90);
    } while ((int)plVar12[2] != 0);
    Memory::free_static(plVar12,false);
    *(undefined8 *)(this + 0x90) = 0;
  }
  plVar12 = (long *)0x0;
LAB_0010e660:
  if ((*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) &&
     (puVar13 = (undefined4 *)**(undefined8 **)(param_1 + 0x90), puVar13 != (undefined4 *)0x0)) {
    if (plVar12 == (long *)0x0) {
      pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0x90) = pauVar7;
      *(undefined4 *)pauVar7[1] = 0;
      *pauVar7 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar8 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar8 + 8) = 0;
        *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
        lVar14 = *(long *)(puVar13 + 2);
        *puVar8 = 0;
        puVar8[6] = 0;
        puVar8[10] = 6;
        *(undefined8 *)(puVar8 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
        *puVar8 = *puVar13;
        if (lVar14 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 2),(CowData *)(puVar13 + 2));
        }
        StringName::operator=((StringName *)(puVar8 + 4),(StringName *)(puVar13 + 4));
        puVar8[6] = puVar13[6];
        if (*(long *)(puVar8 + 8) != *(long *)(puVar13 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 8),(CowData *)(puVar13 + 8));
        }
        puVar8[10] = puVar13[10];
        plVar12 = *(long **)(this + 0x90);
        lVar14 = plVar12[1];
        *(undefined8 *)(puVar8 + 0xc) = 0;
        *(long **)(puVar8 + 0x10) = plVar12;
        *(long *)(puVar8 + 0xe) = lVar14;
        if (lVar14 != 0) {
          *(undefined4 **)(lVar14 + 0x30) = puVar8;
        }
        plVar12[1] = (long)puVar8;
        if (*plVar12 == 0) break;
        puVar13 = *(undefined4 **)(puVar13 + 0xc);
        *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
        if (puVar13 == (undefined4 *)0x0) goto LAB_0010e791;
      }
      puVar13 = *(undefined4 **)(puVar13 + 0xc);
      *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
      *plVar12 = (long)puVar8;
    } while (puVar13 != (undefined4 *)0x0);
  }
LAB_0010e791:
  if (*(long *)(this + 0xa0) != *(long *)(param_1 + 0xa0)) {
    CowData<Variant>::_unref((CowData<Variant> *)(this + 0xa0));
    if (*(long *)(param_1 + 0xa0) != 0) {
      plVar12 = (long *)(*(long *)(param_1 + 0xa0) + -0x10);
      do {
        lVar14 = *plVar12;
        if (lVar14 == 0) goto LAB_0010e7e7;
        LOCK();
        lVar10 = *plVar12;
        bVar15 = lVar14 == lVar10;
        if (bVar15) {
          *plVar12 = lVar14 + 1;
          lVar10 = lVar14;
        }
        UNLOCK();
      } while (!bVar15);
      if (lVar10 != -1) {
        *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
      }
    }
  }
LAB_0010e7e7:
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  if (*(long *)(this + 0xb8) != *(long *)(param_1 + 0xb8)) {
    CowData<int>::_ref((CowData<int> *)(this + 0xb8),(CowData *)(param_1 + 0xb8));
  }
  this_00 = (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
             *)(this + 0xc0);
  if (this_00 !=
      (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
       *)(param_1 + 0xc0)) {
    uVar11 = *(uint *)(this + 0xe8);
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)uVar11 * 4);
    if ((*(int *)(this + 0xec) != 0) && (*(long *)(this + 200) != 0)) {
      if (uVar6 != 0) {
        lVar14 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xd0) + lVar14) != 0) {
            *(int *)(*(long *)(this + 0xd0) + lVar14) = 0;
            pvVar4 = *(void **)(*(long *)(this + 200) + lVar14 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            *(undefined8 *)(*(long *)(this + 200) + lVar14 * 2) = 0;
          }
          lVar14 = lVar14 + 4;
        } while (lVar14 != (ulong)uVar6 * 4);
        uVar11 = *(uint *)(this + 0xe8);
        uVar6 = *(uint *)(hash_table_size_primes + (ulong)uVar11 * 4);
      }
      *(undefined4 *)(this + 0xec) = 0;
      *(undefined1 (*) [16])(this + 0xd8) = (undefined1  [16])0x0;
    }
    if (uVar6 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xe8) * 4)) {
      if (uVar11 != 0x1c) {
        uVar9 = (ulong)uVar11;
        do {
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar6;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xe8) * 4) <=
              *(uint *)(hash_table_size_primes + uVar9 * 4)) {
            if (uVar11 != uVar6) {
              if (*(long *)(this + 200) == 0) {
                *(uint *)(this + 0xe8) = uVar6;
              }
              else {
                HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
                ::_resize_and_rehash(this_00,uVar6);
              }
            }
            goto LAB_0010e8b1;
          }
        } while (uVar6 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0010e8b1:
    if ((*(long *)(param_1 + 200) != 0) &&
       (plVar12 = *(long **)(param_1 + 0xd8), plVar12 != (long *)0x0)) {
      do {
        HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
        ::insert(local_48,(long *)this_00,(bool)((char)plVar12 + '\x10'));
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType> *)(this + 8));
    if (*(long *)(param_1 + 8) != 0) {
      plVar12 = (long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        lVar14 = *plVar12;
        if (lVar14 == 0) goto LAB_0010e932;
        LOCK();
        lVar10 = *plVar12;
        bVar15 = lVar14 == lVar10;
        if (bVar15) {
          *plVar12 = lVar14 + 1;
          lVar10 = lVar14;
        }
        UNLOCK();
      } while (!bVar15);
      if (lVar10 != -1) {
        *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
LAB_0010e932:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptParser::Node::get_datatype() const */

void GDScriptParser::Node::get_datatype(void)

{
  long in_RSI;
  DataType *in_RDI;
  
  DataType::DataType(in_RDI,(DataType *)(in_RSI + 0x38));
  return;
}



/* CowData<DocData::ArgumentDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::ArgumentDoc>::_realloc(CowData<DocData::ArgumentDoc> *this,long param_1)

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
/* Error CowData<DocData::ArgumentDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::ArgumentDoc>::resize<false>(CowData<DocData::ArgumentDoc> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar10 = 0;
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
    lVar10 = lVar8 * 0x28;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_0010efc0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x28 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_0010efc0;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar8 + uVar12 * 0x28);
      if (plVar2[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[4];
          plVar2[4] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[2];
          plVar2[2] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010f016;
  }
  if (lVar13 == lVar10) {
LAB_0010ef33:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010f016:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_0010edf9;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010ef33;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 5);
  do {
    *(undefined8 *)pauVar6[1] = 0;
    pauVar4 = pauVar6 + 2;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1][8] = 0;
    *(undefined8 *)pauVar6[2] = 0;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar9 + param_1 * 5));
LAB_0010edf9:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<DocData::TutorialDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::TutorialDoc>::_realloc(CowData<DocData::TutorialDoc> *this,long param_1)

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
/* Error CowData<DocData::TutorialDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::TutorialDoc>::resize<false>(CowData<DocData::TutorialDoc> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
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
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar7 * 0x10;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010f350:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x10 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_0010f350;
  uVar12 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar12) {
        if (lVar11 != lVar9) {
          uVar6 = _realloc(this,lVar11);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar7 + uVar12 * 0x10);
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar7 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010f3a6;
  }
  if (lVar11 == lVar9) {
LAB_0010f2bb:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_0010f3a6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010f1dc;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar11);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010f2bb;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  pauVar5 = (undefined1 (*) [16])(puVar8 + lVar7 * 2);
  do {
    *pauVar5 = (undefined1  [16])0x0;
    pauVar5 = pauVar5 + 1;
  } while (pauVar5 != (undefined1 (*) [16])(puVar8 + param_1 * 2));
LAB_0010f1dc:
  puVar8[-1] = param_1;
  return 0;
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
/* Error CowData<DocData::MethodDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::MethodDoc>::resize<false>(CowData<DocData::MethodDoc> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar10 = 0;
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
    lVar10 = lVar8 * 0x78;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x78 == 0) {
LAB_0010f860:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x78 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_0010f860;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar8 + uVar12 * 0x78);
      if (plVar2[0xe] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[0xe] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[0xe];
          plVar2[0xe] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[0xd] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[0xd] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[0xd];
          plVar2[0xd] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(plVar2 + 0xb));
      if (plVar2[9] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[9] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[9];
          plVar2[9] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[7] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[7] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[7];
          plVar2[7] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[5] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[5] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[5];
          plVar2[5] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[4];
          plVar2[4] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[2];
          plVar2[2] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010f8b6;
  }
  if (lVar13 == lVar10) {
LAB_0010f7cb:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010f8b6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_0010f5b9;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010f7cb;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 0xf);
  do {
    *(undefined8 *)pauVar6[1] = 0;
    pauVar4 = pauVar6 + 7;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1][8] = 0;
    pauVar6[2] = (undefined1  [16])0x0;
    pauVar6[3][0] = 0;
    *(undefined8 *)(pauVar6[3] + 8) = 0;
    pauVar6[4][0] = 0;
    *(undefined8 *)(pauVar6[4] + 8) = 0;
    *(undefined8 *)(pauVar6[5] + 8) = 0;
    *(undefined1 (*) [16])(pauVar6[6] + 8) = (undefined1  [16])0x0;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(puVar9 + param_1 * 0xf) != (undefined1 (*) [16])(*pauVar4 + 8));
LAB_0010f5b9:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<DocData::ConstantDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::ConstantDoc>::_realloc(CowData<DocData::ConstantDoc> *this,long param_1)

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
/* Error CowData<DocData::ConstantDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::ConstantDoc>::resize<false>(CowData<DocData::ConstantDoc> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar10 = 0;
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
    lVar10 = lVar9 * 0x60;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x60 == 0) {
LAB_0010fd20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x60 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_0010fd20;
  uVar12 = param_1;
  if (param_1 <= lVar9) {
    while (lVar9 = *(long *)this, lVar9 != 0) {
      if (*(ulong *)(lVar9 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar6 = _realloc(this,lVar13);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar9 = *(long *)this;
          if (lVar9 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar9 + -8) = param_1;
        return 0;
      }
      plVar8 = (long *)(lVar9 + uVar12 * 0x60);
      if (plVar8[0xb] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[0xb] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[0xb];
          plVar8[0xb] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (plVar8[10] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[10] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[10];
          plVar8[10] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (plVar8[8] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[8] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[8];
          plVar8[8] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (plVar8[6] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[6] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[6];
          plVar8[6] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (plVar8[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[4];
          plVar8[4] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (plVar8[3] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[3] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[3];
          plVar8[3] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (plVar8[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar8[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = plVar8[1];
          plVar8[1] = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (*plVar8 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar9 = *plVar8;
          *plVar8 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010fd76;
  }
  if (lVar13 == lVar10) {
LAB_0010fc93:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010fd76:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = puVar7[-1];
    if (param_1 <= lVar9) goto LAB_0010fab5;
  }
  else {
    if (lVar9 != 0) {
      uVar6 = _realloc(this,lVar13);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010fc93;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar9 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar7 + lVar9 * 0xc);
  do {
    pauVar4[1][0] = 0;
    pauVar5 = pauVar4 + 6;
    *pauVar4 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar4[1] + 8) = (undefined1  [16])0x0;
    pauVar4[2][8] = 0;
    *(undefined8 *)pauVar4[3] = 0;
    pauVar4[3][8] = 0;
    *(undefined8 *)pauVar4[4] = 0;
    pauVar4[4][8] = 0;
    pauVar4[5] = (undefined1  [16])0x0;
    pauVar4 = pauVar5;
  } while (pauVar5 != (undefined1 (*) [16])(puVar7 + param_1 * 0xc));
LAB_0010fab5:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<DocData::PropertyDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::PropertyDoc>::_realloc(CowData<DocData::PropertyDoc> *this,long param_1)

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
/* Error CowData<DocData::PropertyDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::PropertyDoc>::resize<false>(CowData<DocData::PropertyDoc> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
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
    lVar10 = 0;
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
    lVar10 = lVar8 * 0x78;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x78 == 0) {
LAB_00110270:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x78 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar13 = uVar11 + 1;
  if (lVar13 == 0) goto LAB_00110270;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (lVar8 = *(long *)this, lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar12) {
        if (lVar13 != lVar10) {
          uVar7 = _realloc(this,lVar13);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      plVar2 = (long *)(lVar8 + uVar12 * 0x78);
      if (plVar2[0xe] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[0xe] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[0xe];
          plVar2[0xe] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[0xd] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[0xd] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[0xd];
          plVar2[0xd] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[0xb] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[0xb] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[0xb];
          plVar2[0xb] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[9] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[9] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[9];
          plVar2[9] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[7] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[7] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[7];
          plVar2[7] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[6] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[6] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[6];
          plVar2[6] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[5] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[5] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[5];
          plVar2[5] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[4] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[4];
          plVar2[4] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[2] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[2] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[2];
          plVar2[2] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
    goto LAB_001102c6;
  }
  if (lVar13 == lVar10) {
LAB_001101e3:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001102c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_0010ff89;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar13);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_001101e3;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar9 + lVar8 * 0xf);
  do {
    *(undefined8 *)pauVar6[1] = 0;
    pauVar4 = pauVar6 + 7;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1][8] = 0;
    pauVar6[2] = (undefined1  [16])0x0;
    pauVar6[3] = (undefined1  [16])0x0;
    pauVar6[4][0] = 0;
    *(undefined8 *)(pauVar6[4] + 8) = 0;
    pauVar6[5][0] = 0;
    *(undefined8 *)(pauVar6[5] + 8) = 0;
    pauVar6[6][0] = 0;
    *(undefined1 (*) [16])(pauVar6[6] + 8) = (undefined1  [16])0x0;
    pauVar6 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar9 + param_1 * 0xf));
LAB_0010ff89:
  puVar9[-1] = param_1;
  return 0;
}



/* GDScriptDocGen::singletons */

void GDScriptDocGen::_GLOBAL__sub_I_singletons(void)

{
  singletons._40_8_ = 2;
  singletons._8_16_ = (undefined1  [16])0x0;
  singletons._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               ::~HashMap,singletons,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */

void __thiscall GDScriptParser::DataType::DataType(DataType *this,DataType *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptParser::DataType::~DataType() */

void __thiscall GDScriptParser::DataType::~DataType(DataType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::MethodDoc::~MethodDoc() */

void __thiscall DocData::MethodDoc::~MethodDoc(MethodDoc *this)

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
/* DocData::PropertyDoc::PropertyDoc(DocData::PropertyDoc const&) */

void __thiscall DocData::PropertyDoc::PropertyDoc(PropertyDoc *this,PropertyDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ConstantDoc::~ConstantDoc() */

void __thiscall DocData::ConstantDoc::~ConstantDoc(ConstantDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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


// This is taking way too long.