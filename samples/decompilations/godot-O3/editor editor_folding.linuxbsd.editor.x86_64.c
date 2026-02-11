
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



/* EditorFolding::_set_unfolds(Object*, Vector<String> const&) */

void __thiscall EditorFolding::_set_unfolds(EditorFolding *this,Object *param_1,Vector *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_2 + 8);
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    lVar6 = (long)*(int *)(lVar3 + -8);
    if ((lVar4 == 0) || (*(int *)(param_1 + 0x94) == 0)) goto LAB_00100144;
  }
  if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x90) * 4) == 0) {
LAB_001000f1:
    lVar5 = 0;
    while( true ) {
      plVar2 = (long *)(lVar4 + lVar5 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar5 = lVar5 + 1;
      if (*(uint *)(param_1 + 0x94) <= (uint)lVar5) break;
      lVar4 = *(long *)(param_1 + 0x70);
    }
  }
  else {
    memset(*(void **)(param_1 + 0x88),0,
           (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x90) * 4) << 2);
    if (*(int *)(param_1 + 0x94) != 0) {
      lVar4 = *(long *)(param_1 + 0x70);
      goto LAB_001000f1;
    }
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
LAB_00100144:
  if (0 < (int)lVar6) {
    lVar4 = lVar3;
    do {
      lVar5 = lVar4 + 8;
      Object::editor_set_section_unfold((String *)param_1,SUB81(lVar4,0));
      lVar4 = lVar5;
    } while (lVar3 + lVar6 * 8 != lVar5);
  }
  return;
}



/* EditorFolding::EditorFolding() */

void __thiscall EditorFolding::EditorFolding(EditorFolding *this)

{
  return;
}



/* EditorFolding::has_folding_data(String const&) */

undefined4 EditorFolding::has_folding_data(String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  char *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50 = 4;
  local_58 = ".cfg";
  String::parse_latin1((StrRange *)&local_60);
  String::md5_text();
  local_58 = "-folding-";
  local_78 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_78);
  String::get_file();
  String::operator+((String *)&local_70,(String *)&local_80);
  String::operator+((String *)&local_58,(String *)&local_70);
  String::operator+((String *)&local_88,(String *)&local_58);
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
  EditorPaths::get_project_settings_dir();
  String::path_join((String *)&local_58);
  pcVar3 = local_58;
  if (local_88 == local_58) {
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
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    local_88 = local_58;
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
  uVar4 = FileAccess::exists((String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFolding::_do_object_unfolds(Object*, HashSet<Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> > >&) */

void __thiscall
EditorFolding::_do_object_unfolds(EditorFolding *this,Object *param_1,HashSet *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
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
  int iVar14;
  uint uVar15;
  Object *pOVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  void *pvVar21;
  wchar32 wVar22;
  ulong uVar23;
  int *piVar24;
  void *pvVar25;
  long in_FS_OFFSET;
  CowData<char32_t> *local_118;
  undefined8 *local_c0;
  undefined *local_b8;
  long local_b0;
  Object *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (undefined8 *)0x0;
  Object::get_property_list
            ((List *)param_1,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_c0,0));
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_68 = 2;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar24 = (int *)*local_c0;
    if (piVar24 != (int *)0x0) {
      do {
        uVar13 = piVar24[10];
        if ((uVar13 & 0x80) != 0) {
          local_90 = 0;
          local_98 = &_LC8;
          String::parse_latin1((StrRange *)&local_b0);
          local_98 = &_LC8;
          local_90 = 0;
          String::parse_latin1((StrRange *)&local_b8);
          uVar13 = piVar24[10];
        }
        if ((uVar13 & 0x40) != 0) {
          if (local_b0 != *(long *)(piVar24 + 2)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(piVar24 + 2));
          }
          if (local_b8 != *(undefined **)(piVar24 + 8)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)(piVar24 + 8));
          }
          cVar12 = String::ends_with((char *)&local_b8);
          if (cVar12 != '\0') {
            String::substr((int)(CowData<char32_t> *)&local_98,(int)(CowData<char32_t> *)&local_b8);
            if (local_b8 != local_98) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              local_b8 = local_98;
              local_98 = (undefined *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          }
          uVar13 = piVar24[10];
        }
        if ((uVar13 & 4) != 0) {
          if ((local_b0 == 0) || (*(uint *)(local_b0 + -8) < 2)) {
            wVar22 = (wchar32)(String *)(piVar24 + 2);
            iVar14 = String::rfind_char(wVar22,0x2f);
            if (iVar14 != -1) {
              StringName::StringName((StringName *)&local_98,(String *)(piVar24 + 2),false);
              cVar12 = EditorPropertyRevert::can_property_revert
                                 (param_1,(StringName *)&local_98,(Variant *)0x0);
              if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
                StringName::unref();
              }
              if (cVar12 != '\0') {
                String::substr((int)(CowData<char32_t> *)&local_a0,wVar22);
                HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              }
            }
LAB_00100653:
            iVar14 = *piVar24;
          }
          else {
            if (((local_b8 != (undefined *)0x0) && (1 < *(uint *)(local_b8 + -8))) &&
               (cVar12 = String::begins_with((String *)(piVar24 + 2)), cVar12 == '\0'))
            goto LAB_00100653;
            StringName::StringName((StringName *)&local_98,(String *)(piVar24 + 2),false);
            cVar12 = EditorPropertyRevert::can_property_revert
                               (param_1,(StringName *)&local_98,(Variant *)0x0);
            if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
              StringName::unref();
            }
            if (cVar12 == '\0') goto LAB_00100653;
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                      ((String *)&local_98);
            iVar14 = *piVar24;
          }
          if (iVar14 == 0x18) {
            StringName::StringName((StringName *)&local_98,(String *)(piVar24 + 2),false);
            Object::get((StringName *)local_58,(bool *)param_1);
            local_a8 = (Object *)0x0;
            lVar20 = Variant::get_validated_object();
            if ((lVar20 == 0) ||
               (pOVar16 = (Object *)__dynamic_cast(lVar20,&Object::typeinfo,&Resource::typeinfo,0),
               pOVar16 == (Object *)0x0)) {
LAB_00100b69:
              if (Variant::needs_deinit[local_58[0]] == '\0') {
                if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
                  StringName::unref();
                }
              }
              else {
                pOVar16 = (Object *)0x0;
                Variant::_clear_internal();
                if (StringName::configured != '\0') goto LAB_00100caa;
              }
            }
            else {
              local_a8 = pOVar16;
              cVar12 = RefCounted::reference();
              if (cVar12 == '\0') {
                local_a8 = (Object *)0x0;
                goto LAB_00100b69;
              }
              if (Variant::needs_deinit[local_58[0]] == '\0') {
                if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
                  StringName::unref();
                }
              }
              else {
                Variant::_clear_internal();
                if (StringName::configured == '\0') goto LAB_00100907;
LAB_00100caa:
                if (local_98 != (undefined *)0x0) {
                  StringName::unref();
                }
                if (pOVar16 == (Object *)0x0) goto LAB_0010065e;
              }
LAB_00100907:
              if ((*(long *)param_2 != 0) && (*(int *)(param_2 + 0x24) != 0)) {
                uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(param_2 + 0x20) * 4));
                lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x20) * 8
                                  );
                uVar17 = (long)pOVar16 * 0x3ffff - 1;
                uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
                uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
                uVar15 = (uint)(uVar17 >> 0x16) ^ (uint)uVar17;
                uVar13 = 1;
                if (uVar15 != 0) {
                  uVar13 = uVar15;
                }
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (ulong)uVar13 * lVar20;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar23;
                lVar18 = SUB168(auVar4 * auVar8,8);
                uVar15 = *(uint *)(*(long *)(param_2 + 0x18) + lVar18 * 4);
                uVar17 = (ulong)uVar15;
                iVar14 = SUB164(auVar4 * auVar8,8);
                if (uVar15 != 0) {
                  uVar15 = 0;
                  do {
                    if ((uVar13 == (uint)uVar17) &&
                       (pOVar16 ==
                        *(Object **)
                         (*(long *)param_2 +
                         (ulong)*(uint *)(*(long *)(param_2 + 8) + lVar18 * 4) * 8)))
                    goto LAB_00100c1f;
                    uVar15 = uVar15 + 1;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (ulong)(iVar14 + 1) * lVar20;
                    auVar9._8_8_ = 0;
                    auVar9._0_8_ = uVar23;
                    lVar18 = SUB168(auVar5 * auVar9,8);
                    uVar3 = *(uint *)(*(long *)(param_2 + 0x18) + lVar18 * 4);
                    uVar17 = (ulong)uVar3;
                    iVar14 = SUB164(auVar5 * auVar9,8);
                  } while ((uVar3 != 0) &&
                          (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17 * lVar20, auVar10._8_8_ = 0,
                          auVar10._0_8_ = uVar23, auVar7._8_8_ = 0,
                          auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                           (ulong)*(uint *)(param_2 + 0x20) * 4) +
                                                 iVar14) - SUB164(auVar6 * auVar10,8)) * lVar20,
                          auVar11._8_8_ = 0, auVar11._0_8_ = uVar23,
                          uVar15 <= SUB164(auVar7 * auVar11,8)));
                }
              }
              Resource::get_path();
              if ((local_a0 == 0) || (*(uint *)(local_a0 + -8) < 2)) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              }
              else {
                Resource::get_path();
                cVar12 = String::is_resource_file();
                if (cVar12 == '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                  HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                  ::insert((StringName *)&local_98);
                  _do_object_unfolds(this,pOVar16,param_2);
                }
                else {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                }
              }
LAB_00100c1f:
              cVar12 = RefCounted::unreference();
              if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar16), cVar12 != '\0')) {
                (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
                Memory::free_static(pOVar16,false);
              }
            }
          }
        }
LAB_0010065e:
        piVar24 = *(int **)(piVar24 + 0xc);
      } while (piVar24 != (int *)0x0);
      iVar14 = local_68._4_4_;
      pvVar25 = (void *)local_88._0_8_;
      if (local_68._4_4_ != 0) {
        pvVar21 = (void *)local_88._0_8_;
        for (iVar19 = 1; Object::editor_set_section_unfold((String *)param_1,SUB81(pvVar21,0)),
            iVar19 < iVar14; iVar19 = iVar19 + 1) {
          pvVar21 = (void *)((long)pvVar21 + 8);
        }
        if (pvVar25 == (void *)0x0) goto LAB_00100776;
        if (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0) {
          memset((void *)local_78._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) * 4);
        }
        lVar20 = 0;
        do {
          plVar2 = (long *)((long)pvVar25 + lVar20 * 8);
          if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar2 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar18 = *plVar2;
              *plVar2 = 0;
              Memory::free_static((void *)(lVar18 + -0x10),false);
            }
          }
          lVar20 = lVar20 + 1;
          pvVar25 = (void *)local_88._0_8_;
        } while ((uint)lVar20 < local_68._4_4_);
        local_68 = local_68 & 0xffffffff;
      }
      if ((void *)local_88._0_8_ != (void *)0x0) {
        Memory::free_static((void *)local_88._0_8_,false);
        Memory::free_static((void *)local_78._0_8_,false);
        Memory::free_static((void *)local_88._8_8_,false);
        Memory::free_static((void *)local_78._8_8_,false);
      }
    }
  }
LAB_00100776:
  local_118 = (CowData<char32_t> *)&local_b0;
  CowData<char32_t>::_unref(local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFolding::_do_node_unfolds(Node*, Node*, HashSet<Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> > >&) */

void __thiscall
EditorFolding::_do_node_unfolds(EditorFolding *this,Node *param_1,Node *param_2,HashSet *param_3)

{
  long lVar1;
  Node *pNVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    lVar1 = Node::get_owner();
    if (lVar1 == 0) {
      return;
    }
    pNVar2 = (Node *)Node::get_owner();
    if ((param_1 != pNVar2) && (cVar3 = Node::is_editable_instance(param_1), cVar3 == '\0')) {
      return;
    }
  }
  _do_object_unfolds(this,(Object *)param_2,param_3);
  for (iVar5 = 0; iVar4 = Node::get_child_count(SUB81(param_2,0)), iVar5 < iVar4; iVar5 = iVar5 + 1)
  {
    pNVar2 = (Node *)Node::get_child((int)param_2,SUB41(iVar5,0));
    _do_node_unfolds(this,param_1,pNVar2,param_3);
  }
  return;
}



/* EditorFolding::unfold_scene(Node*) */

void __thiscall EditorFolding::unfold_scene(EditorFolding *this,Node *param_1)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_28 = 2;
  local_38 = (undefined1  [16])0x0;
  _do_node_unfolds(this,param_1,param_1,(HashSet *)local_48);
  pvVar5 = (void *)local_48._0_8_;
  if ((void *)local_48._0_8_ == (void *)0x0) goto LAB_00100eeb;
  if (local_28._4_4_ != 0) {
    if (*(uint *)(hash_table_size_primes + (local_28 & 0xffffffff) * 4) != 0) {
      memset((void *)local_38._8_8_,0,
             (ulong)*(uint *)(hash_table_size_primes + (local_28 & 0xffffffff) * 4) << 2);
      if (local_28._4_4_ == 0) goto LAB_00100ebd;
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
        pvVar5 = (void *)local_48._0_8_;
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < local_28._4_4_);
    local_28 = local_28 & 0xffffffff;
    if (pvVar5 == (void *)0x0) goto LAB_00100eeb;
  }
LAB_00100ebd:
  Memory::free_static(pvVar5,false);
  Memory::free_static((void *)local_38._0_8_,false);
  Memory::free_static((void *)local_48._8_8_,false);
  Memory::free_static((void *)local_38._8_8_,false);
LAB_00100eeb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFolding::load_resource_folding(Ref<Resource>, String const&) */

void EditorFolding::load_resource_folding(EditorFolding *param_1,undefined8 *param_2)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  String *local_c8;
  char *local_c0;
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  char *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_c8);
  local_88 = ".cfg";
  local_98 = 0;
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_98);
  String::md5_text();
  local_88 = "-folding-";
  local_b0 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_b0);
  String::get_file();
  String::operator+((String *)&local_a8,(String *)local_b8);
  String::operator+((String *)&local_88,(String *)&local_a8);
  String::operator+((String *)&local_c0,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  EditorPaths::get_project_settings_dir();
  String::path_join((String *)&local_88);
  if (local_c0 != local_88) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_c0 = local_88;
    local_88 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar1 = local_c8;
  iVar3 = ConfigFile::load(local_c8);
  if (iVar3 == 0) {
    local_90 = 0;
    local_88 = "sections_unfolded";
    local_a0 = 0;
    local_80 = 0x11;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "folding";
    local_a8 = 0;
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_a8);
    cVar2 = ConfigFile::has_section_key(pSVar1,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (cVar2 != '\0') {
      local_88 = "sections_unfolded";
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      local_a0 = 0;
      local_80 = 0x11;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "folding";
      local_a8 = 0;
      local_80 = 7;
      String::parse_latin1((StrRange *)&local_a8);
      ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)&local_a8);
      Variant::operator_cast_to_Vector((Variant *)&local_88);
      if (local_80 != 0) {
        CowData<String>::_unref((CowData<String> *)&local_90);
        local_90 = local_80;
        local_80 = 0;
      }
      CowData<String>::_unref((CowData<String> *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    _set_unfolds(param_1,(Object *)*param_2,(Vector *)&local_98);
    CowData<String>::_unref((CowData<String> *)&local_90);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler((Object *)pSVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar1,false);
        return;
      }
      goto LAB_0010131d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010131d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFolding::load_scene_folding(Node*, String const&) */

void EditorFolding::load_scene_folding(Node *param_1,String *param_2)

{
  String *pSVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  String *local_c8;
  CowData<char32_t> local_c0 [8];
  char *local_b8;
  CowData<char32_t> local_b0 [8];
  undefined8 local_a8;
  String local_a0 [8];
  undefined8 local_98;
  Object *local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_c8);
  EditorPaths::get_project_settings_dir();
  local_88 = ".cfg";
  local_90 = (Object *)0x0;
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_90);
  String::md5_text();
  local_88 = "-folding-";
  local_a8 = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_a8);
  String::get_file();
  String::operator+(local_a0,(String *)local_b0);
  String::operator+((String *)&local_88,local_a0);
  String::operator+((String *)&local_b8,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  EditorPaths::get_project_settings_dir();
  String::path_join((String *)&local_88);
  if (local_b8 != local_88) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_b8 = local_88;
    local_88 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  pSVar1 = local_c8;
  iVar4 = ConfigFile::load(local_c8);
  if (iVar4 == 0) {
    Array::Array((Array *)local_b0);
    local_88 = "node_unfolds";
    local_90 = (Object *)0x0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_88 = "folding";
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_98);
    cVar2 = ConfigFile::has_section_key(pSVar1,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar2 != '\0') {
      local_88 = "node_unfolds";
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      local_90 = (Object *)0x0;
      local_80 = 0xc;
      String::parse_latin1((StrRange *)&local_90);
      local_98 = 0;
      local_88 = "folding";
      local_80 = 7;
      String::parse_latin1((StrRange *)&local_98);
      ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)&local_98);
      Variant::operator_cast_to_Array((Variant *)&local_88);
      Array::operator=((Array *)local_b0,(Array *)&local_88);
      Array::~Array((Array *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    Array::Array((Array *)&local_a8);
    local_88 = "resource_unfolds";
    local_90 = (Object *)0x0;
    local_80 = 0x10;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_88 = "folding";
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_98);
    cVar2 = ConfigFile::has_section_key(pSVar1,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar2 != '\0') {
      local_88 = "resource_unfolds";
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      local_90 = (Object *)0x0;
      local_80 = 0x10;
      String::parse_latin1((StrRange *)&local_90);
      local_98 = 0;
      local_88 = "folding";
      local_80 = 7;
      String::parse_latin1((StrRange *)&local_98);
      ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)&local_98);
      Variant::operator_cast_to_Array((Variant *)&local_88);
      Array::operator=((Array *)&local_a8,(Array *)&local_88);
      Array::~Array((Array *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    Array::Array((Array *)local_a0);
    local_88 = "nodes_folded";
    local_90 = (Object *)0x0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_88 = "folding";
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_98);
    cVar2 = ConfigFile::has_section_key(pSVar1,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar2 != '\0') {
      local_88 = "nodes_folded";
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      local_90 = (Object *)0x0;
      local_80 = 0xc;
      String::parse_latin1((StrRange *)&local_90);
      local_88 = "folding";
      local_98 = 0;
      local_80 = 7;
      String::parse_latin1((StrRange *)&local_98);
      ConfigFile::get_value((String *)local_58,pSVar1,(Variant *)&local_98);
      Variant::operator_cast_to_Array((Variant *)&local_88);
      Array::operator=((Array *)local_a0,(Array *)&local_88);
      Array::~Array((Array *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    uVar6 = Array::size();
    if ((uVar6 & 1) == 0) {
      iVar4 = 0;
      uVar6 = Array::size();
      if ((uVar6 & 1) == 0) {
        for (; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 2) {
          iVar5 = (int)local_b0;
          Array::operator[](iVar5);
          Variant::operator_cast_to_NodePath((Variant *)&local_90);
          Array::operator[](iVar5);
          Variant::operator_cast_to_Vector((Variant *)&local_88);
          pOVar7 = (Object *)Node::get_node_or_null(param_2);
          if (pOVar7 != (Object *)0x0) {
            _set_unfolds((EditorFolding *)param_1,pOVar7,(Vector *)&local_88);
          }
          CowData<String>::_unref((CowData<String> *)&local_80);
          NodePath::~NodePath((NodePath *)&local_90);
        }
        for (iVar4 = 0; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 2) {
          iVar5 = (int)(StrRange *)&local_a8;
          Array::operator[](iVar5);
          Variant::operator_cast_to_String((Variant *)&local_98);
          ResourceCache::get_ref((String *)&local_90);
          if (local_90 != (Object *)0x0) {
            Array::operator[](iVar5);
            Variant::operator_cast_to_Vector((Variant *)&local_88);
            _set_unfolds((EditorFolding *)param_1,local_90,(Vector *)&local_88);
            CowData<String>::_unref((CowData<String> *)&local_80);
            if (((local_90 != (Object *)0x0) &&
                (cVar2 = RefCounted::unreference(), pOVar7 = local_90, cVar2 != '\0')) &&
               (cVar2 = predelete_handler(local_90), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        for (iVar4 = 0; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          Array::operator[]((int)local_a0);
          Variant::operator_cast_to_NodePath((Variant *)&local_88);
          cVar2 = Node::has_node(param_2);
          if (cVar2 != '\0') {
            bVar3 = (bool)Node::get_node(param_2);
            Node::set_display_folded(bVar3);
          }
          NodePath::~NodePath((NodePath *)&local_88);
        }
      }
      else {
        _err_print_error("load_scene_folding","editor/editor_folding.cpp",0xb7,
                         "Condition \"res_unfolds.size() & 1\" is true.",0,0);
      }
    }
    else {
      _err_print_error("load_scene_folding","editor/editor_folding.cpp",0xb6,
                       "Condition \"unfolds.size() & 1\" is true.",0,0);
    }
    Array::~Array((Array *)local_a0);
    Array::~Array((Array *)&local_a8);
    Array::~Array((Array *)local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref(local_c0);
    cVar2 = RefCounted::unreference();
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref(local_c0);
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pSVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
    Memory::free_static(pSVar1,false);
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



/* EditorFolding::_get_unfolds(Object const*) */

Object * EditorFolding::_get_unfolds(Object *param_1)

{
  size_t __n;
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_RDX;
  CowData *pCVar4;
  ulong uVar5;
  CowData<char32_t> *this;
  int iVar6;
  
  uVar1 = *(uint *)(in_RDX + 0x94);
  *(undefined8 *)(param_1 + 8) = 0;
  if (uVar1 != 0) {
    __n = (ulong)uVar1 * 8;
    CowData<String>::_copy_on_write((CowData<String> *)(param_1 + 8));
    uVar5 = __n - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    puVar3 = (undefined8 *)Memory::alloc_static((uVar5 | uVar5 >> 0x20) + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      if (*(long *)(param_1 + 8) == 0) {
        return param_1;
      }
      if (*(long *)(*(long *)(param_1 + 8) + -8) == 0) {
        return param_1;
      }
    }
    else {
      *puVar3 = 1;
      *(undefined8 **)(param_1 + 8) = puVar3 + 2;
      memset(puVar3 + 2,0,__n);
      puVar3[1] = (ulong)uVar1;
    }
    CowData<String>::_copy_on_write((CowData<String> *)(param_1 + 8));
    iVar2 = *(int *)(in_RDX + 0x94);
    if (iVar2 != 0) {
      this = *(CowData<char32_t> **)(param_1 + 8);
      pCVar4 = *(CowData **)(in_RDX + 0x70);
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        if (*(long *)this != *(long *)pCVar4) {
          CowData<char32_t>::_ref(this,pCVar4);
        }
        this = this + 8;
        pCVar4 = pCVar4 + 8;
      } while (iVar6 < iVar2);
    }
  }
  return param_1;
}



/* EditorFolding::save_resource_folding(Ref<Resource> const&, String const&) */

void EditorFolding::save_resource_folding(Ref *param_1,String *param_2)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  String *local_b0;
  char *local_a8;
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  Object local_78 [8];
  CowData<String> local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_b0);
  _get_unfolds(local_78);
  pSVar2 = local_b0;
  Variant::Variant((Variant *)local_58,(Vector *)local_78);
  local_68 = "sections_unfolded";
  local_80 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = "folding";
  local_88 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_88);
  ConfigFile::set_value(pSVar2,(String *)&local_88,(Variant *)&local_80);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_80 = 0;
  local_68 = ".cfg";
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_80);
  String::md5_text();
  local_68 = "-folding-";
  local_98 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_98);
  String::get_file();
  String::operator+((String *)&local_90,(String *)local_a0);
  String::operator+((String *)&local_68,(String *)&local_90);
  String::operator+((String *)&local_a8,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
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
  EditorPaths::get_project_settings_dir();
  String::path_join((String *)&local_68);
  if (local_a8 != local_68) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_a8 = local_68;
    local_68 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  ConfigFile::save(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<String>::_unref(local_70);
  pSVar2 = local_b0;
  if (local_b0 != (String *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object *)pSVar2);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pSVar2 + 0x140))(pSVar2);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pSVar2,false);
          return;
        }
        goto LAB_001023ad;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001023ad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFolding::_fill_folds(Node const*, Node const*, Array&, Array&, Array&,
   HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> > >&) */

void __thiscall
EditorFolding::_fill_folds
          (EditorFolding *this,Node *param_1,Node *param_2,Array *param_3,Array *param_4,
          Array *param_5,HashSet *param_6)

{
  uint uVar1;
  int *piVar2;
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
  long lVar13;
  Node *pNVar14;
  Object *pOVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined8 *local_98;
  Object *local_90;
  Object local_88 [8];
  long local_80;
  long local_78;
  CowData<String> local_70 [8];
  long local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    lVar13 = Node::get_owner();
    if (lVar13 == 0) goto LAB_00102552;
    pNVar14 = (Node *)Node::get_owner();
    if (param_1 != pNVar14) {
      Node::get_owner();
      cVar11 = Node::is_editable_instance(param_1);
      if (cVar11 == '\0') goto LAB_00102552;
    }
  }
  cVar11 = Node::is_displayed_folded();
  if (cVar11 != '\0') {
    Node::get_path_to((Node *)local_68,SUB81(param_1,0));
    Variant::Variant((Variant *)local_58,(Node *)local_68);
    Array::push_back((Variant *)param_5);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    NodePath::~NodePath((NodePath *)local_68);
  }
  _get_unfolds(local_88);
  if ((local_80 != 0) && (*(long *)(local_80 + -8) != 0)) {
    Node::get_path_to((Node *)local_68,SUB81(param_1,0));
    Variant::Variant((Variant *)local_58,(Node *)local_68);
    Array::push_back((Variant *)param_3);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    NodePath::~NodePath((NodePath *)local_68);
    Variant::Variant((Variant *)local_58,(Vector *)local_88);
    Array::push_back((Variant *)param_3);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_98 = (undefined8 *)0x0;
  Object::get_property_list
            ((List *)param_2,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_98,0));
  if (local_98 != (undefined8 *)0x0) {
    for (piVar2 = (int *)*local_98; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 0xc)) {
      if (((*(byte *)(piVar2 + 10) & 4) != 0) && (*piVar2 == 0x18)) {
        StringName::StringName((StringName *)local_68,(String *)(piVar2 + 2),false);
        Object::get((StringName *)local_58,(bool *)param_2);
        local_90 = (Object *)0x0;
        lVar13 = Variant::get_validated_object();
        if ((lVar13 == 0) ||
           (pOVar15 = (Object *)__dynamic_cast(lVar13,&Object::typeinfo,&Resource::typeinfo,0),
           pOVar15 == (Object *)0x0)) {
LAB_00102889:
          if (Variant::needs_deinit[local_58[0]] == '\0') {
            if ((StringName::configured != '\0') && (local_68[0] != 0)) {
              StringName::unref();
            }
          }
          else {
            pOVar15 = (Object *)0x0;
            Variant::_clear_internal();
            if (StringName::configured != '\0') goto LAB_0010297e;
          }
        }
        else {
          local_90 = pOVar15;
          cVar11 = RefCounted::reference();
          if (cVar11 == '\0') {
            local_90 = (Object *)0x0;
            goto LAB_00102889;
          }
          if (Variant::needs_deinit[local_58[0]] == '\0') {
            if ((StringName::configured != '\0') && (local_68[0] != 0)) {
              StringName::unref();
            }
          }
          else {
            Variant::_clear_internal();
            if (StringName::configured == '\0') goto LAB_00102648;
LAB_0010297e:
            if (local_68[0] != 0) {
              StringName::unref();
            }
            if (pOVar15 == (Object *)0x0) goto LAB_001024d7;
          }
LAB_00102648:
          if ((*(long *)param_6 != 0) && (*(int *)(param_6 + 0x24) != 0)) {
            uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(param_6 + 0x20) * 4));
            lVar13 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_6 + 0x20) * 8);
            uVar16 = (long)pOVar15 * 0x3ffff - 1;
            uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
            uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
            uVar16 = uVar16 >> 0x16 ^ uVar16;
            uVar21 = uVar16 & 0xffffffff;
            if ((int)uVar16 == 0) {
              uVar21 = 1;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar21 * lVar13;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            lVar17 = SUB168(auVar3 * auVar7,8);
            uVar20 = *(uint *)(*(long *)(param_6 + 0x18) + lVar17 * 4);
            uVar16 = (ulong)uVar20;
            iVar18 = SUB164(auVar3 * auVar7,8);
            if (uVar20 != 0) {
              uVar20 = 0;
              do {
                if (((int)uVar21 == (int)uVar16) &&
                   (*(Object **)
                     (*(long *)param_6 + (ulong)*(uint *)(*(long *)(param_6 + 8) + lVar17 * 4) * 8)
                    == pOVar15)) goto LAB_00102914;
                uVar20 = uVar20 + 1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (ulong)(iVar18 + 1) * lVar13;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar19;
                lVar17 = SUB168(auVar4 * auVar8,8);
                uVar1 = *(uint *)(*(long *)(param_6 + 0x18) + lVar17 * 4);
                uVar16 = (ulong)uVar1;
                iVar18 = SUB164(auVar4 * auVar8,8);
              } while ((uVar1 != 0) &&
                      (auVar5._8_8_ = 0, auVar5._0_8_ = uVar16 * lVar13, auVar9._8_8_ = 0,
                      auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
                      auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(param_6 + 0x20) * 4) +
                                             iVar18) - SUB164(auVar5 * auVar9,8)) * lVar13,
                      auVar10._8_8_ = 0, auVar10._0_8_ = uVar19,
                      uVar20 <= SUB164(auVar6 * auVar10,8)));
            }
          }
          Resource::get_path();
          if ((local_78 == 0) || (*(uint *)(local_78 + -8) < 2)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          }
          else {
            Resource::get_path();
            cVar11 = String::is_resource_file();
            if (cVar11 == '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              _get_unfolds((Object *)&local_78);
              Resource::get_path();
              Variant::Variant((Variant *)local_58,(String *)local_68);
              Array::push_back((Variant *)param_4);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
              Variant::Variant((Variant *)local_58,(Vector *)&local_78);
              Array::push_back((Variant *)param_4);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::
              insert((StringName *)local_68);
              CowData<String>::_unref(local_70);
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            }
          }
LAB_00102914:
          cVar11 = RefCounted::unreference();
          if ((cVar11 != '\0') && (cVar11 = predelete_handler(pOVar15), cVar11 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
        }
      }
LAB_001024d7:
    }
  }
  for (iVar18 = 0; iVar12 = Node::get_child_count(SUB81(param_2,0)), iVar18 < iVar12;
      iVar18 = iVar18 + 1) {
    pNVar14 = (Node *)Node::get_child((int)param_2,SUB41(iVar18,0));
    _fill_folds(this,param_1,pNVar14,param_3,param_4,param_5,param_6);
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_98);
  CowData<String>::_unref((CowData<String> *)&local_80);
LAB_00102552:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFolding::save_scene_folding(Node const*, String const&) */

void EditorFolding::save_scene_folding(Node *param_1,String *param_2)

{
  long *plVar1;
  Object *pOVar2;
  String *pSVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  long in_FS_OFFSET;
  Object *local_f0;
  String *local_e8;
  Array local_e0 [8];
  Array local_d8 [8];
  Array local_d0 [8];
  char *local_c8;
  String local_c0 [8];
  undefined8 local_b8;
  String local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (String *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("save_scene_folding","editor/editor_folding.cpp",0x85,
                       "Parameter \"p_scene\" is null.",0,0);
      return;
    }
    goto LAB_0010318d;
  }
  FileAccess::create(&local_f0,0);
  cVar4 = (**(code **)(*(long *)local_f0 + 0x2e0))();
  if (cVar4 != '\0') {
    local_e8 = (String *)0x0;
    Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_e8);
    Array::Array(local_e0);
    Array::Array(local_d8);
    local_68 = 2;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    Array::Array(local_d0);
    _fill_folds((EditorFolding *)param_1,(Node *)param_2,(Node *)param_2,local_e0,local_d8,local_d0,
                (HashSet *)local_88);
    pSVar3 = local_e8;
    Variant::Variant((Variant *)local_58,local_e0);
    local_98 = "node_unfolds";
    local_a0 = 0;
    local_90 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = "folding";
    local_a8 = 0;
    local_90 = 7;
    String::parse_latin1((StrRange *)&local_a8);
    ConfigFile::set_value(pSVar3,(String *)&local_a8,(Variant *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_d8);
    local_98 = "resource_unfolds";
    local_a0 = 0;
    local_90 = 0x10;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = "folding";
    local_a8 = 0;
    local_90 = 7;
    String::parse_latin1((StrRange *)&local_a8);
    ConfigFile::set_value(pSVar3,(String *)&local_a8,(Variant *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_d0);
    local_98 = "nodes_folded";
    local_a0 = 0;
    local_90 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = "folding";
    local_a8 = 0;
    local_90 = 7;
    String::parse_latin1((StrRange *)&local_a8);
    ConfigFile::set_value(pSVar3,(String *)&local_a8,(Variant *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_a0 = 0;
    local_98 = ".cfg";
    local_90 = 4;
    String::parse_latin1((StrRange *)&local_a0);
    String::md5_text();
    local_b8 = 0;
    local_98 = "-folding-";
    local_90 = 9;
    String::parse_latin1((StrRange *)&local_b8);
    String::get_file();
    String::operator+(local_b0,local_c0);
    String::operator+((String *)&local_98,local_b0);
    String::operator+((String *)&local_c8,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    EditorPaths::get_project_settings_dir();
    String::path_join((String *)&local_98);
    if (local_c8 != local_98) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      local_c8 = local_98;
      local_98 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    ConfigFile::save(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    Array::~Array(local_d0);
    pvVar6 = (void *)local_88._0_8_;
    if ((void *)local_88._0_8_ != (void *)0x0) {
      if (local_68._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0) {
          memset((void *)local_78._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) << 2);
          if (local_68._4_4_ == 0) goto LAB_00103020;
        }
        lVar5 = 0;
        do {
          plVar1 = (long *)((long)pvVar6 + lVar5 * 8);
          if (*plVar1 != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar2 = (Object *)*plVar1;
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            pvVar6 = (void *)local_88._0_8_;
          }
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < local_68._4_4_);
        local_68 = local_68 & 0xffffffff;
        if (pvVar6 == (void *)0x0) goto LAB_00103057;
      }
LAB_00103020:
      Memory::free_static(pvVar6,false);
      Memory::free_static((void *)local_78._0_8_,false);
      Memory::free_static((void *)local_88._8_8_,false);
      Memory::free_static((void *)local_78._8_8_,false);
    }
LAB_00103057:
    Array::~Array(local_d8);
    Array::~Array(local_e0);
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object *)pSVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
        Memory::free_static(pSVar3,false);
      }
    }
  }
  if (local_f0 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_f0);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
        Memory::free_static(local_f0,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010318d:
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
  return (uint)CONCAT71(0x1064,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1064,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1064,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1064,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1064,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001060d8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001060d8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_001033c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001033c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010342e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010342e:
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
LAB_001034a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001034a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010350e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010350e:
  return &_get_class_namev()::_class_name_static;
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
            if (lVar5 == 0) goto LAB_0010376f;
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
LAB_0010376f:
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
    if (cVar6 != '\0') goto LAB_00103823;
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
              if (lVar5 == 0) goto LAB_001038d3;
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
LAB_001038d3:
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
      if (cVar6 != '\0') goto LAB_00103823;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103823:
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
            if (lVar4 == 0) goto LAB_001039ff;
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
LAB_001039ff:
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
    if (cVar5 != '\0') goto LAB_00103ab3;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103ab3:
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
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
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
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00103c64;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00103c64:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
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
  *(undefined ***)this_00 = &PTR__initialize_classv_00106238;
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
    if (this_00 == (RefCounted *)pOVar5) goto LAB_00104165;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00104165;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00104165:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >
   >::insert(Ref<Resource> const&) */

undefined1  [16]
HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert
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
    if (lVar35 != 0) goto LAB_001042f8;
  }
  else {
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
LAB_001042f8:
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
            if (*(long *)(lVar35 + uStack_98 * 8) == lVar36) goto LAB_0010440a;
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
  if ((float)uVar33 * __LC11 < (float)(uVar3 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      lVar35 = *in_RSI;
      uVar45 = 0xffffffff;
      uVar3 = *(uint *)((long)in_RSI + 0x24);
      goto LAB_0010440a;
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
LAB_0010440a:
  local_88._0_4_ = uVar3;
  *(uint *)(param_1 + 0xc) = uVar45;
  *(long *)param_1 = lVar35;
  *(uint *)(param_1 + 8) = (uint)local_88;
  auVar46._8_8_ = uStack_98;
  auVar46._0_8_ = param_1;
  return auVar46;
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
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
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
    if (*in_RSI != 0) goto LAB_0010493c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_0010493c:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
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
              goto LAB_00104cb9;
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
  if ((float)uVar29 * __LC11 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00104cb9;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
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
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
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
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
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
LAB_00104cb9:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
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
      if ((code *)PTR__bind_methods_00109010 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_0010548d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010548d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001054aa;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001054aa:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  if (local_90 == 0) {
LAB_00105858:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105858;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010587a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010587a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
        if (pvVar5 == (void *)0x0) goto LAB_00105d21;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_00105d21:
  if (*(long *)(param_1 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00106238;
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
        if (pvVar3 == (void *)0x0) goto LAB_00105e51;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00105e51:
  *(undefined ***)this = &PTR__initialize_classv_001060d8;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00106238;
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
        if (pvVar3 == (void *)0x0) goto LAB_00105f41;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00105f41:
  *(undefined ***)this = &PTR__initialize_classv_001060d8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* EditorFolding::_get_unfolds(Object const*) */

void EditorFolding::_GLOBAL__sub_I__get_unfolds(void)

{
  undefined8 uStack_8;
  
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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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


