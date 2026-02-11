
/* ShaderGlobalsOverride::_notification(int) [clone .part.0] */

void ShaderGlobalsOverride::_notification(int param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 in_register_0000003c;
  StringName *pSVar4;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  pSVar4 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pSVar4[0x408] != (StringName)0x0) &&
     (plVar3 = *(long **)(pSVar4 + 0x428), plVar3 != (long *)0x0)) {
    do {
      while ((char)plVar3[3] == '\0') {
LAB_00100040:
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_001000a0;
      }
      plVar2 = (long *)RenderingServer::get_singleton();
      local_40 = (undefined1  [16])0x0;
      local_48 = 0;
      (**(code **)(*plVar2 + 0x1188))(plVar2,plVar3 + 2,&local_48);
      if (Variant::needs_deinit[(int)local_48] == '\0') goto LAB_00100040;
      Variant::_clear_internal();
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
LAB_001000a0:
  Node::remove_from_group(pSVar4);
  Node::remove_from_group(pSVar4);
  lVar1 = *(long *)(pSVar4 + 0x240);
  if (lVar1 == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  StringName::StringName((StringName *)&local_50,"_activate",false);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  SceneTree::call_group_flagsp
            ((uint)lVar1,(StringName *)0x2,(StringName *)(SceneStringNames::singleton + 0x220),
             (Variant **)&local_50,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  pSVar4[0x408] = (StringName)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010022e) */
/* WARNING: Removing unreachable block (ram,0x00100330) */
/* WARNING: Removing unreachable block (ram,0x0010033b) */
/* WARNING: Removing unreachable block (ram,0x0010023a) */
/* WARNING: Removing unreachable block (ram,0x001003e0) */
/* WARNING: Removing unreachable block (ram,0x00100244) */
/* WARNING: Removing unreachable block (ram,0x001003d0) */
/* WARNING: Removing unreachable block (ram,0x00100259) */
/* WARNING: Removing unreachable block (ram,0x0010025e) */
/* WARNING: Removing unreachable block (ram,0x00100266) */
/* WARNING: Removing unreachable block (ram,0x0010026b) */
/* WARNING: Removing unreachable block (ram,0x0010026f) */
/* WARNING: Removing unreachable block (ram,0x0010027a) */
/* WARNING: Removing unreachable block (ram,0x00100285) */
/* WARNING: Removing unreachable block (ram,0x0010021e) */
/* ShaderGlobalsOverride::_activate() */

void __thiscall ShaderGlobalsOverride::_activate(ShaderGlobalsOverride *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(StringName **)(this + 0x240) == (StringName *)0x0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_activate","scene/main/shader_globals_override.cpp",0xe4,
                       "Parameter \"get_tree()\" is null.",0,0);
      return;
    }
  }
  else {
    SceneTree::get_nodes_in_group
              (*(StringName **)(this + 0x240),(List *)(SceneStringNames::singleton + 0x228));
    lVar3 = SceneStringNames::singleton;
    this[0x408] = (ShaderGlobalsOverride)0x1;
    Node::add_to_group((StringName *)this,(bool)((char)lVar3 + '('));
    for (puVar1 = *(undefined8 **)(this + 0x428); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if ((*(char *)(puVar1 + 3) != '\0') && (*(int *)(puVar1 + 4) != 0)) {
        if (*(int *)(puVar1 + 4) == 0x18) {
          local_50 = Variant::operator_cast_to_RID((Variant *)(puVar1 + 4));
          plVar4 = (long *)RenderingServer::get_singleton();
          pcVar2 = *(code **)(*plVar4 + 0x1188);
          Variant::Variant((Variant *)local_48,(RID *)&local_50);
          (*pcVar2)(plVar4,puVar1 + 2,(Variant *)local_48);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          plVar4 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar4 + 0x1188))(plVar4,puVar1 + 2,puVar1 + 4);
        }
      }
      Node::update_configuration_warnings();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* ShaderGlobalsOverride::_notification(int) */

void __thiscall ShaderGlobalsOverride::_notification(ShaderGlobalsOverride *this,int param_1)

{
  if (param_1 == 10) {
    Node::add_to_group((StringName *)this,(bool)((char)SceneStringNames::singleton + ' '));
    _activate(this);
    return;
  }
  if (param_1 != 0xb) {
    return;
  }
  _notification((int)this);
  return;
}



/* ShaderGlobalsOverride::ShaderGlobalsOverride() */

void __thiscall ShaderGlobalsOverride::ShaderGlobalsOverride(ShaderGlobalsOverride *this)

{
  undefined8 uVar1;
  
  Node::Node((Node *)this);
  this[0x408] = (ShaderGlobalsOverride)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00105da0;
  uVar1 = _LC14;
  *(undefined1 (*) [16])(this + 0x418) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x438) = uVar1;
  *(undefined8 *)(this + 0x468) = uVar1;
  *(undefined1 (*) [16])(this + 0x428) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x448) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x458) = (undefined1  [16])0x0;
  return;
}



/* ShaderGlobalsOverride::_remap(StringName const&) const */

long __thiscall ShaderGlobalsOverride::_remap(ShaderGlobalsOverride *this,StringName *param_1)

{
  long *plVar1;
  uint uVar2;
  char *__s;
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
  long lVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar24 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x448) != 0) && (*(int *)(this + 0x46c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x468) * 4);
    uVar28 = CONCAT44(0,uVar2);
    lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x468) * 8);
    if (lVar24 == 0) {
      uVar20 = StringName::get_empty_hash();
    }
    else {
      uVar20 = *(uint *)(lVar24 + 0x20);
    }
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    uVar27 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar20 * lVar25;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar28;
    lVar24 = SUB168(auVar3 * auVar11,8);
    uVar26 = *(uint *)(*(long *)(this + 0x450) + lVar24 * 4);
    uVar23 = SUB164(auVar3 * auVar11,8);
    if (uVar26 != 0) {
      do {
        if ((uVar20 == uVar26) &&
           (*(long *)(*(long *)(*(long *)(this + 0x448) + lVar24 * 8) + 0x10) == *(long *)param_1))
        {
          lVar24 = *(long *)(*(long *)(this + 0x448) + (ulong)uVar23 * 8) + 0x18;
          goto LAB_001006b3;
        }
        uVar27 = uVar27 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar23 + 1) * lVar25;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar28;
        lVar24 = SUB168(auVar4 * auVar12,8);
        uVar26 = *(uint *)(*(long *)(this + 0x450) + lVar24 * 4);
        uVar23 = SUB164(auVar4 * auVar12,8);
      } while ((uVar26 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar26 * lVar25, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar28, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar2 + uVar23) - SUB164(auVar5 * auVar13,8)) * lVar25,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar28, uVar27 <= SUB164(auVar6 * auVar14,8)));
    }
    lVar24 = *(long *)param_1;
  }
  if (lVar24 != 0) {
    __s = *(char **)(lVar24 + 8);
    local_70 = 0;
    if (__s != (char *)0x0) {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_70);
      goto LAB_00100726;
    }
    plVar1 = (long *)(*(long *)(lVar24 + 0x10) + -0x10);
    if (*(long *)(lVar24 + 0x10) != 0) {
      do {
        lVar25 = *plVar1;
        if (lVar25 == 0) goto LAB_001007e9;
        LOCK();
        lVar21 = *plVar1;
        bVar29 = lVar25 == lVar21;
        if (bVar29) {
          *plVar1 = lVar25 + 1;
          lVar21 = lVar25;
        }
        UNLOCK();
      } while (!bVar29);
      if (lVar21 != -1) {
        local_70 = *(long *)(lVar24 + 0x10);
      }
      goto LAB_00100726;
    }
  }
LAB_001007e9:
  local_70 = 0;
LAB_00100726:
  cVar19 = String::begins_with((char *)&local_70);
  lVar24 = 0;
  if (cVar19 != '\0') {
    String::replace_first((char *)&local_68,(char *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_68,false);
    StringName::StringName((StringName *)&local_60,(String *)&local_70,false);
    puVar22 = (undefined8 *)
              HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
              ::operator[]((HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
                            *)(this + 0x440),(StringName *)&local_60);
    if ((char *)*puVar22 != local_58) {
      StringName::unref();
      *puVar22 = local_58;
      local_58 = (char *)0x0;
    }
    if ((StringName::configured != '\0') &&
       (((local_60 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_58 != (char *)0x0)))) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    if ((*(long *)(this + 0x448) != 0) && (*(int *)(this + 0x46c) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x468) * 4);
      uVar28 = CONCAT44(0,uVar2);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x468) * 8);
      if (local_58 == (char *)0x0) {
        uVar20 = StringName::get_empty_hash();
      }
      else {
        uVar20 = *(uint *)(local_58 + 0x20);
      }
      if (uVar20 == 0) {
        uVar20 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar20 * lVar24;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar28;
      lVar25 = SUB168(auVar7 * auVar15,8);
      uVar26 = *(uint *)(*(long *)(this + 0x450) + lVar25 * 4);
      uVar23 = SUB164(auVar7 * auVar15,8);
      if (uVar26 != 0) {
        uVar27 = 0;
        do {
          if ((uVar20 == uVar26) &&
             (*(char **)(*(long *)(*(long *)(this + 0x448) + lVar25 * 8) + 0x10) == local_58)) {
            lVar24 = *(long *)(*(long *)(this + 0x448) + (ulong)uVar23 * 8) + 0x18;
            goto LAB_001009a2;
          }
          uVar27 = uVar27 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar23 + 1) * lVar24;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar28;
          lVar25 = SUB168(auVar8 * auVar16,8);
          uVar26 = *(uint *)(*(long *)(this + 0x450) + lVar25 * 4);
          uVar23 = SUB164(auVar8 * auVar16,8);
        } while ((uVar26 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar26 * lVar24, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar28, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar2 + uVar23) - SUB164(auVar9 * auVar17,8)) * lVar24,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar28, uVar27 <= SUB164(auVar10 * auVar18,8)));
      }
    }
    lVar24 = 0;
LAB_001009a2:
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar25 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar25 + -0x10),false);
      }
    }
  }
  lVar25 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
LAB_001006b3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar24;
}



/* ShaderGlobalsOverride::_get(StringName const&, Variant&) const */

undefined8 __thiscall
ShaderGlobalsOverride::_get(ShaderGlobalsOverride *this,StringName *param_1,Variant *param_2)

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
  long *plVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  plVar12 = (long *)_remap(this,param_1);
  if (((plVar12 != (long *)0x0) && (*(long *)(this + 0x418) != 0)) && (*(int *)(this + 0x43c) != 0))
  {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x438) * 8);
    if (*plVar12 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*plVar12 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(this + 0x420) + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar15) &&
           (*(long *)(*(long *)(*(long *)(this + 0x418) + lVar14 * 8) + 0x10) == *plVar12)) {
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x418) + (ulong)uVar13 * 8) + 0x20)
                            );
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(this + 0x420) + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* ShaderGlobalsOverride::_set(StringName const&, Variant const&) */

undefined8 __thiscall
ShaderGlobalsOverride::_set(ShaderGlobalsOverride *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  code *pcVar2;
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
  uint uVar19;
  StringName *pSVar20;
  long *plVar21;
  undefined8 uVar22;
  Variant *pVVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  undefined8 local_70;
  uint local_68 [2];
  int local_60 [2];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar20 = (StringName *)_remap(this,param_1);
  if (pSVar20 != (StringName *)0x0) {
    if ((*(long *)(this + 0x418) != 0) && (*(int *)(this + 0x43c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
      uVar29 = CONCAT44(0,uVar1);
      lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x438) * 8);
      if (*(long *)pSVar20 == 0) {
        uVar19 = StringName::get_empty_hash();
      }
      else {
        uVar19 = *(uint *)(*(long *)pSVar20 + 0x20);
      }
      if (uVar19 == 0) {
        uVar19 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar19 * lVar28;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar29;
      lVar25 = SUB168(auVar3 * auVar11,8);
      uVar26 = *(uint *)(*(long *)(this + 0x420) + lVar25 * 4);
      uVar24 = SUB164(auVar3 * auVar11,8);
      if (uVar26 != 0) {
        uVar27 = 0;
        do {
          if ((uVar19 == uVar26) &&
             (*(long *)(*(long *)(*(long *)(this + 0x418) + lVar25 * 8) + 0x10) == *(long *)pSVar20)
             ) {
            lVar28 = *(long *)(*(long *)(this + 0x418) + (ulong)uVar24 * 8) + 0x18;
            goto LAB_00100cb7;
          }
          uVar27 = uVar27 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar24 + 1) * lVar28;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar29;
          lVar25 = SUB168(auVar4 * auVar12,8);
          uVar26 = *(uint *)(*(long *)(this + 0x420) + lVar25 * 4);
          uVar24 = SUB164(auVar4 * auVar12,8);
        } while ((uVar26 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar26 * lVar28, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + uVar24) - SUB164(auVar5 * auVar13,8)) * lVar28,
                auVar14._8_8_ = 0, auVar14._0_8_ = uVar29, uVar27 <= SUB164(auVar6 * auVar14,8)));
      }
    }
    local_68[0] = local_68[0] & 0xffffff00;
    local_58 = (undefined1  [16])0x0;
    local_60[0] = 0;
    local_60[1] = 0;
    pVVar23 = (Variant *)
              HashMap<StringName,ShaderGlobalsOverride::Override,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderGlobalsOverride::Override>>>
              ::operator[]((HashMap<StringName,ShaderGlobalsOverride::Override,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderGlobalsOverride::Override>>>
                            *)(this + 0x410),pSVar20);
    *pVVar23 = local_68[0]._0_1_;
    Variant::operator=(pVVar23 + 8,(Variant *)local_60);
    if ((*(long *)(this + 0x418) != 0) && (*(int *)(this + 0x43c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
      uVar29 = CONCAT44(0,uVar1);
      lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x438) * 8);
      if (*(long *)pSVar20 == 0) {
        uVar19 = StringName::get_empty_hash();
      }
      else {
        uVar19 = *(uint *)(*(long *)pSVar20 + 0x20);
      }
      if (uVar19 == 0) {
        uVar19 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar19 * lVar28;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar25 = SUB168(auVar7 * auVar15,8);
      uVar26 = *(uint *)(*(long *)(this + 0x420) + lVar25 * 4);
      uVar24 = SUB164(auVar7 * auVar15,8);
      if (uVar26 != 0) {
        uVar27 = 0;
        do {
          if ((uVar19 == uVar26) &&
             (*(long *)(*(long *)(*(long *)(this + 0x418) + lVar25 * 8) + 0x10) == *(long *)pSVar20)
             ) {
            lVar28 = *(long *)(*(long *)(this + 0x418) + (ulong)uVar24 * 8) + 0x18;
            if (Variant::needs_deinit[local_60[0]] != '\0') {
              Variant::_clear_internal();
            }
LAB_00100cb7:
            Variant::operator=((Variant *)(lVar28 + 8),param_2);
            if (this[0x408] != (ShaderGlobalsOverride)0x0) {
              if (*(int *)(lVar28 + 8) == 0x18) {
                local_70 = Variant::operator_cast_to_RID(param_2);
                plVar21 = (long *)RenderingServer::get_singleton();
                pcVar2 = *(code **)(*plVar21 + 0x1188);
                Variant::Variant((Variant *)local_68,(RID *)&local_70);
                (*pcVar2)(plVar21,pSVar20,(Variant *)local_68);
                if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                plVar21 = (long *)RenderingServer::get_singleton();
                (**(code **)(*plVar21 + 0x1188))(plVar21,pSVar20,param_2);
              }
            }
            uVar22 = 1;
            *(bool *)lVar28 = *(int *)param_2 != 0;
            goto LAB_00100e82;
          }
          uVar27 = uVar27 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar24 + 1) * lVar28;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar25 = SUB168(auVar8 * auVar16,8);
          uVar26 = *(uint *)(*(long *)(this + 0x420) + lVar25 * 4);
          uVar24 = SUB164(auVar8 * auVar16,8);
        } while ((uVar26 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar26 * lVar28, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar1 + uVar24) - SUB164(auVar9 * auVar17,8)) * lVar28,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar27 <= SUB164(auVar10 * auVar18,8)));
      }
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  uVar22 = 0;
LAB_00100e82:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
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



/* ShaderGlobalsOverride::_bind_methods() */

void ShaderGlobalsOverride::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_48 [2];
  CowData<StringName> local_38 [16];
  undefined8 local_28;
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_48,(char ***)"_activate",0);
  local_20 = (undefined1  [16])0x0;
  local_28 = 0;
  pMVar1 = create_method_bind<ShaderGlobalsOverride>(_activate);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_48,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_28] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_38);
  if ((StringName::configured != '\0') && (local_48[0] != 0)) {
    StringName::unref();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsOverride::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall ShaderGlobalsOverride::_get_property_list(ShaderGlobalsOverride *this,List *param_1)

{
  uint uVar1;
  char *__s;
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
  code *pcVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined4 uVar23;
  uint uVar24;
  long *plVar25;
  size_t sVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  undefined1 (*pauVar29) [16];
  int iVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  StringName *pSVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  long in_FS_OFFSET;
  bool bVar40;
  char *local_e8;
  long local_c0 [2];
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ulong local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  uint local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  plVar25 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar25 + 0x1178))(&local_98,plVar25);
  if (local_90._0_8_ == 0) {
    CowData<StringName>::_unref((CowData<StringName> *)local_90);
  }
  else {
    CowData<StringName>::_unref((CowData<StringName> *)&local_b0);
    lVar31 = local_90._0_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = local_90._8_8_;
    local_90 = auVar19 << 0x40;
    local_b0 = lVar31;
    CowData<StringName>::_unref((CowData<StringName> *)local_90);
    for (lVar39 = 0; (lVar31 != 0 && (lVar39 < *(long *)(lVar31 + -8))); lVar39 = lVar39 + 1) {
      local_98 = 0;
      local_80 = 0;
      local_90 = (undefined1  [16])0x0;
      lVar31 = *(long *)(lVar31 + lVar39 * 8);
      local_78 = 0;
      local_70 = 6;
      if (lVar31 == 0) {
LAB_00101849:
        local_c0[0] = 0;
      }
      else {
        __s = *(char **)(lVar31 + 8);
        local_c0[0] = 0;
        if (__s == (char *)0x0) {
          plVar25 = (long *)(*(long *)(lVar31 + 0x10) + -0x10);
          if (*(long *)(lVar31 + 0x10) != 0) {
            do {
              lVar33 = *plVar25;
              if (lVar33 == 0) goto LAB_00101849;
              LOCK();
              lVar32 = *plVar25;
              bVar40 = lVar33 == lVar32;
              if (bVar40) {
                *plVar25 = lVar33 + 1;
                lVar32 = lVar33;
              }
              UNLOCK();
            } while (!bVar40);
            if (lVar32 != -1) {
              local_c0[0] = *(long *)(lVar31 + 0x10);
              goto LAB_00101272;
            }
          }
          goto LAB_00101849;
        }
        sVar26 = strlen(__s);
        local_a8 = SUB84(__s,0);
        uStack_a4 = (undefined4)((ulong)__s >> 0x20);
        local_a0 = (undefined4)sVar26;
        uStack_9c = (undefined4)(sVar26 >> 0x20);
        String::parse_latin1((StrRange *)local_c0);
      }
LAB_00101272:
      local_e8 = (char *)&local_a8;
      operator+(local_e8,(String *)"params/");
      uVar22 = local_90._0_8_;
      lVar31 = CONCAT44(uStack_a4,local_a8);
      if (local_90._0_8_ == lVar31) {
        if (local_90._0_8_ != 0) {
          LOCK();
          plVar25 = (long *)(local_90._0_8_ + -0x10);
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (*plVar25 == 0) {
            lVar31 = CONCAT44(uStack_a4,local_a8);
            local_a8 = 0;
            uStack_a4 = 0;
            Memory::free_static((void *)(lVar31 + -0x10),false);
          }
        }
      }
      else {
        if (local_90._0_8_ != 0) {
          LOCK();
          plVar25 = (long *)(local_90._0_8_ + -0x10);
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (*plVar25 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = local_90._8_8_;
            local_90 = auVar20 << 0x40;
            Memory::free_static((void *)(uVar22 + -0x10),false);
          }
          lVar31 = CONCAT44(uStack_a4,local_a8);
        }
        local_90._0_8_ = lVar31;
      }
      lVar31 = local_c0[0];
      if (local_c0[0] != 0) {
        LOCK();
        plVar25 = (long *)(local_c0[0] + -0x10);
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (*plVar25 == 0) {
          local_c0[0] = 0;
          Memory::free_static((void *)(lVar31 + -0x10),false);
        }
      }
      local_70 = 0x14;
      plVar25 = (long *)RenderingServer::get_singleton();
      lVar31 = local_b0;
      if (local_b0 == 0) {
        lVar33 = 0;
        goto LAB_00101863;
      }
      lVar33 = *(long *)(local_b0 + -8);
      if (lVar33 <= lVar39) goto LAB_00101863;
      pSVar34 = (StringName *)(lVar39 * 8 + local_b0);
      uVar23 = (**(code **)(*plVar25 + 0x1198))(plVar25,pSVar34);
      switch(uVar23) {
      case 0:
        local_98 = CONCAT44(local_98._4_4_,1);
        break;
      case 1:
        local_98 = CONCAT44(local_98._4_4_,2);
        local_80 = CONCAT44(local_80._4_4_,6);
        local_a8 = 0x1021f6;
        uStack_a4 = 0;
        local_a0 = 3;
        uStack_9c = 0;
        String::parse_latin1((StrRange *)&local_78);
        break;
      case 2:
        local_98 = CONCAT44(local_98._4_4_,2);
        local_80 = CONCAT44(local_80._4_4_,6);
        local_a8 = 0x1021fa;
        uStack_a4 = 0;
        local_a0 = 5;
        uStack_9c = 0;
        String::parse_latin1((StrRange *)&local_78);
        break;
      case 3:
        local_98 = CONCAT44(local_98._4_4_,2);
        local_a8 = 0x102200;
        local_80 = CONCAT44(local_80._4_4_,6);
        goto LAB_00101368;
      case 4:
      case 9:
        local_98 = CONCAT44(local_98._4_4_,2);
        break;
      case 5:
      case 10:
        local_98 = CONCAT44(local_98._4_4_,6);
        break;
      case 6:
      case 0xb:
        local_98 = CONCAT44(local_98._4_4_,10);
        break;
      case 7:
      case 0xc:
        local_98 = CONCAT44(local_98._4_4_,0xd);
        break;
      case 8:
        local_98 = CONCAT44(local_98._4_4_,8);
        break;
      case 0xd:
        local_98 = CONCAT44(local_98._4_4_,3);
        break;
      case 0xe:
        local_98 = CONCAT44(local_98._4_4_,5);
        break;
      case 0xf:
        local_98 = CONCAT44(local_98._4_4_,9);
        break;
      case 0x10:
        local_98 = CONCAT44(local_98._4_4_,0xc);
        break;
      case 0x11:
        local_98 = CONCAT44(local_98._4_4_,0x14);
        break;
      case 0x12:
        local_98 = CONCAT44(local_98._4_4_,7);
        break;
      case 0x13:
        local_98 = CONCAT44(local_98._4_4_,0x20);
        break;
      case 0x14:
        local_98 = CONCAT44(local_98._4_4_,0x11);
        break;
      case 0x15:
        local_98 = CONCAT44(local_98._4_4_,0x13);
        break;
      case 0x16:
        local_98 = CONCAT44(local_98._4_4_,0xb);
        break;
      case 0x17:
        local_98 = CONCAT44(local_98._4_4_,0x12);
        break;
      case 0x18:
        local_a8 = 0x102208;
        goto LAB_00101a58;
      case 0x19:
        local_98 = CONCAT44(local_98._4_4_,0x18);
        local_80 = CONCAT44(local_80._4_4_,0x11);
        local_a8 = 0x102212;
        uStack_a4 = 0;
        local_a0 = 0xe;
        uStack_9c = 0;
        String::parse_latin1((StrRange *)&local_78);
        break;
      case 0x1a:
        local_a8 = 0x102221;
LAB_00101a58:
        local_80 = CONCAT44(local_80._4_4_,0x11);
        local_98 = CONCAT44(local_98._4_4_,0x18);
        uStack_a4 = 0;
        local_a0 = 9;
        uStack_9c = 0;
        String::parse_latin1((StrRange *)&local_78);
        break;
      case 0x1b:
        local_98 = CONCAT44(local_98._4_4_,0x18);
        local_a8 = 0x10222b;
        local_80 = CONCAT44(local_80._4_4_,0x11);
LAB_00101368:
        uStack_a4 = 0;
        local_a0 = 7;
        uStack_9c = 0;
        String::parse_latin1((StrRange *)&local_78);
        break;
      case 0x1c:
        local_98 = CONCAT44(local_98._4_4_,0x18);
        local_80 = CONCAT44(local_80._4_4_,0x11);
        local_a8 = 0x102233;
        uStack_a4 = 0;
        local_a0 = 0xf;
        uStack_9c = 0;
        String::parse_latin1((StrRange *)&local_78);
      }
      lVar33 = *(long *)(lVar31 + -8);
      if (lVar33 <= lVar39) {
LAB_00101863:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar39,lVar33,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      if ((*(long *)(this + 0x418) != 0) && (*(int *)(this + 0x43c) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x438) * 8);
        if (*(long *)pSVar34 == 0) {
          uVar24 = StringName::get_empty_hash();
        }
        else {
          uVar24 = *(uint *)(*(long *)pSVar34 + 0x20);
        }
        uVar36 = CONCAT44(0,uVar1);
        if (uVar24 == 0) {
          uVar24 = 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)uVar24 * lVar33;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar36;
        lVar32 = SUB168(auVar2 * auVar10,8);
        uVar35 = *(uint *)(*(long *)(this + 0x420) + lVar32 * 4);
        iVar30 = SUB164(auVar2 * auVar10,8);
        if (uVar35 != 0) {
          uVar37 = 0;
          do {
            if ((uVar24 == uVar35) &&
               (*(long *)(*(long *)(*(long *)(this + 0x418) + lVar32 * 8) + 0x10) ==
                *(long *)pSVar34)) goto LAB_00101498;
            uVar37 = uVar37 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(iVar30 + 1) * lVar33;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar36;
            lVar32 = SUB168(auVar3 * auVar11,8);
            uVar35 = *(uint *)(*(long *)(this + 0x420) + lVar32 * 4);
            iVar30 = SUB164(auVar3 * auVar11,8);
          } while ((uVar35 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar35 * lVar33, auVar12._8_8_ = 0,
                  auVar12._0_8_ = uVar36, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar4 * auVar12,8)) * lVar33,
                  auVar13._8_8_ = 0, auVar13._0_8_ = uVar36, uVar37 <= SUB164(auVar5 * auVar13,8)));
        }
      }
      local_68 = 0;
      local_60 = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      local_a0 = 0;
      local_58 = (undefined1  [16])0x0;
      Variant::construct(local_98 & 0xffffffff,(Variant *)&local_60,0,0,local_e8);
      lVar33 = *(long *)(lVar31 + -8);
      if (lVar33 <= lVar39) goto LAB_00101863;
      puVar28 = (undefined1 *)
                HashMap<StringName,ShaderGlobalsOverride::Override,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderGlobalsOverride::Override>>>
                ::operator[]((HashMap<StringName,ShaderGlobalsOverride::Override,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderGlobalsOverride::Override>>>
                              *)(this + 0x410),pSVar34);
      *puVar28 = local_68;
      Variant::operator=((Variant *)(puVar28 + 8),(Variant *)&local_60);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
LAB_00101498:
      lVar33 = *(long *)(lVar31 + -8);
      if (lVar33 <= lVar39) goto LAB_00101863;
      if ((*(long *)(this + 0x418) == 0) || (*(int *)(this + 0x43c) == 0)) {
LAB_00101bb4:
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
      lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x438) * 8);
      if (*(long *)pSVar34 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar34 + 0x20);
      }
      uVar36 = CONCAT44(0,uVar1);
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar24 * lVar31;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar36;
      lVar33 = SUB168(auVar6 * auVar14,8);
      uVar35 = *(uint *)(*(long *)(this + 0x420) + lVar33 * 4);
      uVar37 = SUB164(auVar6 * auVar14,8);
      if (uVar35 == 0) goto LAB_00101bb4;
      uVar38 = 0;
      while ((uVar35 != uVar24 ||
             (*(long *)(*(long *)(*(long *)(this + 0x418) + lVar33 * 8) + 0x10) != *(long *)pSVar34)
             )) {
        uVar38 = uVar38 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar37 + 1) * lVar31;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar36;
        lVar33 = SUB168(auVar7 * auVar15,8);
        uVar35 = *(uint *)(*(long *)(this + 0x420) + lVar33 * 4);
        uVar37 = SUB164(auVar7 * auVar15,8);
        if ((uVar35 == 0) ||
           (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar35 * lVar31, auVar16._8_8_ = 0,
           auVar16._0_8_ = uVar36, auVar9._8_8_ = 0,
           auVar9._0_8_ = (ulong)((uVar1 + uVar37) - SUB164(auVar8 * auVar16,8)) * lVar31,
           auVar17._8_8_ = 0, auVar17._0_8_ = uVar36, SUB164(auVar9 * auVar17,8) < uVar38))
        goto LAB_00101bb4;
      }
      lVar31 = *(long *)(*(long *)(this + 0x418) + (ulong)uVar37 * 8);
      if ((*(char *)(lVar31 + 0x18) != '\0') && (*(int *)(lVar31 + 0x20) != 0)) {
        local_70 = local_70 | 0x22;
      }
      if (*(long *)param_1 == 0) {
        pauVar29 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar29;
        *(undefined4 *)pauVar29[1] = 0;
        *pauVar29 = (undefined1  [16])0x0;
      }
      puVar27 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined8 *)(puVar27 + 8) = 0;
      *(undefined1 (*) [16])(puVar27 + 2) = (undefined1  [16])0x0;
      *puVar27 = 0;
      puVar27[6] = 0;
      puVar27[10] = 6;
      *(undefined8 *)(puVar27 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar27 + 0xc) = (undefined1  [16])0x0;
      *puVar27 = (undefined4)local_98;
      if (local_90._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar27 + 2),(CowData *)local_90);
      }
      StringName::operator=((StringName *)(puVar27 + 4),(StringName *)(local_90 + 8));
      puVar27[6] = (undefined4)local_80;
      if (*(long *)(puVar27 + 8) != local_78) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar27 + 8),(CowData *)&local_78);
      }
      lVar33 = local_78;
      puVar27[10] = local_70;
      plVar25 = *(long **)param_1;
      lVar31 = plVar25[1];
      *(undefined8 *)(puVar27 + 0xc) = 0;
      *(long **)(puVar27 + 0x10) = plVar25;
      *(long *)(puVar27 + 0xe) = lVar31;
      if (lVar31 != 0) {
        *(undefined4 **)(lVar31 + 0x30) = puVar27;
      }
      plVar25[1] = (long)puVar27;
      if (*plVar25 == 0) {
        *plVar25 = (long)puVar27;
      }
      *(int *)(plVar25 + 2) = (int)plVar25[2] + 1;
      if (local_78 != 0) {
        LOCK();
        plVar25 = (long *)(local_78 + -0x10);
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (*plVar25 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar33 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_90._8_8_ != 0)) {
        StringName::unref();
      }
      uVar22 = local_90._0_8_;
      if (local_90._0_8_ != 0) {
        LOCK();
        plVar25 = (long *)(local_90._0_8_ + -0x10);
        *plVar25 = *plVar25 + -1;
        UNLOCK();
        if (*plVar25 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = local_90._8_8_;
          local_90 = auVar21 << 0x40;
          Memory::free_static((void *)(uVar22 + -0x10),false);
        }
      }
      lVar31 = local_b0;
    }
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsOverride::get_configuration_warnings() const */

void ShaderGlobalsOverride::get_configuration_warnings(void)

{
  long *plVar1;
  CowData<char32_t> *this;
  char *pcVar2;
  int iVar3;
  long in_RSI;
  long lVar4;
  long in_RDI;
  long lVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  if (*(char *)(in_RSI + 0x408) != '\0') goto LAB_00101bf4;
  local_50 = 0;
  local_40 = 0;
  local_48 = "";
  String::parse_latin1((StrRange *)&local_50);
  local_48 = 
  "ShaderGlobalsOverride is not active because another node of the same type is in the scene.";
  local_58 = 0;
  local_40 = 0x5a;
  String::parse_latin1((StrRange *)&local_58);
  RTR((String *)&local_48,(String *)&local_58);
  if (*(long *)(in_RDI + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
  }
  iVar3 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar4);
  if (iVar3 == 0) {
    if (*(long *)(in_RDI + 8) == 0) {
      lVar5 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(in_RDI + 8) + -8);
      lVar5 = lVar4 + -1;
      if (-1 < lVar5) {
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar5 * 8);
        if (*(char **)this != local_48) {
          CowData<char32_t>::_ref(this,(CowData *)&local_48);
        }
        goto LAB_00101cfa;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar4,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00101cfa:
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
  lVar4 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
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
LAB_00101bf4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
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



/* ShaderGlobalsOverride::is_class_ptr(void*) const */

uint __thiscall ShaderGlobalsOverride::is_class_ptr(ShaderGlobalsOverride *this,void *param_1)

{
  return (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x105f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ShaderGlobalsOverride::_property_can_revertv(StringName const&) const */

undefined8 ShaderGlobalsOverride::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ShaderGlobalsOverride::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderGlobalsOverride::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00105f68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00105f68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* ShaderGlobalsOverride::_validate_propertyv(PropertyInfo&) const */

void ShaderGlobalsOverride::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* ShaderGlobalsOverride::~ShaderGlobalsOverride() */

void __thiscall ShaderGlobalsOverride::~ShaderGlobalsOverride(ShaderGlobalsOverride *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00105da0;
  pvVar3 = *(void **)(this + 0x448);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x46c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x468) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x46c) = 0;
        *(undefined1 (*) [16])(this + 0x458) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x450) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x450) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if (bVar4) {
              if (*(long *)((long)pvVar3 + 0x18) != 0) {
                StringName::unref();
                if (StringName::configured == '\0') goto LAB_00102325;
              }
              if (*(long *)((long)pvVar3 + 0x10) != 0) {
                StringName::unref();
              }
            }
LAB_00102325:
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x448);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x46c) = 0;
        *(undefined1 (*) [16])(this + 0x458) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00102365;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x450),false);
  }
LAB_00102365:
  pvVar3 = *(void **)(this + 0x418);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x43c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x43c) = 0;
        *(undefined1 (*) [16])(this + 0x428) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x420) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x420) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x20)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x418);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x43c) = 0;
        *(undefined1 (*) [16])(this + 0x428) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00102436;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x420),false);
  }
LAB_00102436:
  Node::~Node((Node *)this);
  return;
}



/* ShaderGlobalsOverride::~ShaderGlobalsOverride() */

void __thiscall ShaderGlobalsOverride::~ShaderGlobalsOverride(ShaderGlobalsOverride *this)

{
  ~ShaderGlobalsOverride(this);
  operator_delete(this,0x470);
  return;
}



/* ShaderGlobalsOverride::_notificationv(int, bool) */

void __thiscall
ShaderGlobalsOverride::_notificationv(ShaderGlobalsOverride *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      Node::add_to_group((StringName *)this,(bool)((char)SceneStringNames::singleton + ' '));
      _activate(this);
    }
    else if (param_1 == 0xb) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00108008 != Object::_notification) {
      Node::_notification(iVar1);
      return;
    }
  }
  else {
    if ((code *)PTR__notification_00108008 != Object::_notification) {
      Node::_notification(iVar1);
    }
    if (param_1 == 10) {
      Node::add_to_group((StringName *)this,(bool)((char)SceneStringNames::singleton + ' '));
      _activate(this);
      return;
    }
    if (param_1 == 0xb) {
      _notification(iVar1);
      return;
    }
  }
  return;
}



/* ShaderGlobalsOverride::_get_class_namev() const */

undefined8 * ShaderGlobalsOverride::_get_class_namev(void)

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
LAB_00102623:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102623;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShaderGlobalsOverride");
      goto LAB_0010268e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderGlobalsOverride");
LAB_0010268e:
  return &_get_class_namev()::_class_name_static;
}



/* ShaderGlobalsOverride::get_class() const */

void ShaderGlobalsOverride::get_class(void)

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



/* ShaderGlobalsOverride::is_class(String const&) const */

undefined8 __thiscall ShaderGlobalsOverride::is_class(ShaderGlobalsOverride *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010281f;
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
LAB_0010281f:
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
    if (cVar6 != '\0') goto LAB_001028d3;
  }
  cVar6 = String::operator==(param_1,"ShaderGlobalsOverride");
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
              if (lVar5 == 0) goto LAB_001029ab;
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
LAB_001029ab:
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
      if (cVar6 != '\0') goto LAB_001028d3;
    }
    cVar6 = String::operator==(param_1,"Node");
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
                if (lVar5 == 0) goto LAB_00102a8b;
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
LAB_00102a8b:
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
        if (cVar6 != '\0') goto LAB_001028d3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00102b34;
    }
  }
LAB_001028d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102b34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC12;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC12;
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
  if (local_90 == 0) {
LAB_00102ca8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102ca8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102cc6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102cc6:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, StringName> > >::operator[](StringName const&)
    */

StringName * __thiscall
HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
::operator[](HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
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
  undefined8 uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  lVar42 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar42 == 0) {
LAB_001036c0:
    local_70 = 0;
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
LAB_00103141:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_0010314d:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar44 = CONCAT44(0,uVar37);
        lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar53 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar42;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar44;
        lVar47 = SUB168(auVar8 * auVar24,8);
        uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
        uVar52 = SUB164(auVar8 * auVar24,8);
        if (uVar51 != 0) {
          do {
            if ((uVar38 == uVar51) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10) == *(long *)param_1))
            {
              StringName::operator=
                        ((StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar52 * 8) + 0x18),
                         (StringName *)&local_70);
              local_a8 = (StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar52 * 8) + 0x18);
              goto LAB_0010360b;
            }
            uVar53 = uVar53 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar52 + 1) * lVar42;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar44;
            lVar47 = SUB168(auVar9 * auVar25,8);
            uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
            uVar52 = SUB164(auVar9 * auVar25,8);
          } while ((uVar51 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar51 * lVar42, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar44, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar52) - SUB164(auVar10 * auVar26,8)) * lVar42,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar44, uVar53 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      goto LAB_0010324c;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0010324c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010314d;
LAB_00103272:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a8 = (StringName *)0x18;
      goto LAB_0010360b;
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
        } while (uVar39 != uVar49);
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
          uVar53 = 0;
          uVar51 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar51);
          lVar47 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar47;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar44;
          lVar46 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar42 + lVar46 * 4);
          iVar45 = SUB164(auVar12 * auVar28,8);
          uVar52 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar52 * lVar47;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar44;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar51 + iVar45) - SUB164(auVar13 * auVar29,8)) * lVar47;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar44;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar50 = uVar40;
            if (uVar36 < uVar53) {
              *puVar1 = uVar37;
              puVar41 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar50 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar52;
              uVar53 = uVar36;
            }
            uVar53 = uVar53 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar45 + 1) * lVar47;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar44;
            lVar46 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar42 + lVar46 * 4);
            iVar45 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar50;
            uVar52 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar38 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
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
      uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar52 = SUB164(auVar4 * auVar20,8);
      if (uVar51 != 0) {
        uVar53 = 0;
        do {
          if ((uVar38 == uVar51) &&
             (*(long *)(*(long *)(lVar42 + lVar46 * 8) + 0x10) == *(long *)param_1)) {
            local_a8 = (StringName *)(*(long *)(lVar42 + (ulong)uVar52 * 8) + 0x18);
            goto LAB_001030ec;
          }
          uVar53 = uVar53 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar52 + 1) * lVar47;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar52 = SUB164(auVar5 * auVar21,8);
        } while ((uVar51 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar51 * lVar47, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar52 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar47,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar53 <= SUB164(auVar7 * auVar23,8)));
      }
      local_70 = 0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar42 == 0) goto LAB_001036c0;
      goto LAB_00103141;
    }
    local_70 = 0;
    iVar45 = 0;
LAB_0010324c:
    if ((float)uVar39 * __LC16 < (float)(iVar45 + 1)) goto LAB_00103272;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  StringName::StringName((StringName *)local_50,(StringName *)&local_70);
  puVar41 = (undefined8 *)operator_new(0x20,"");
  *puVar41 = local_68._0_8_;
  puVar41[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_58);
  local_a8 = (StringName *)(puVar41 + 3);
  StringName::StringName(local_a8,(StringName *)local_50);
  if ((StringName::configured != '\0') &&
     (((local_50[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_58 != 0)))) {
    StringName::unref();
  }
  puVar54 = *(undefined8 **)(this + 0x20);
  if (puVar54 == (undefined8 *)0x0) {
    lVar42 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar41;
    *(undefined8 **)(this + 0x20) = puVar41;
    if (lVar42 == 0) goto LAB_0010367d;
LAB_00103534:
    uVar37 = *(uint *)(lVar42 + 0x20);
  }
  else {
    *puVar54 = puVar41;
    puVar41[1] = puVar54;
    lVar42 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar41;
    if (lVar42 != 0) goto LAB_00103534;
LAB_0010367d:
    uVar37 = StringName::get_empty_hash();
  }
  lVar42 = *(long *)(this + 0x10);
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar52 = 0;
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
  uVar51 = *puVar1;
  while (uVar51 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar51 * lVar47;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar44;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar17 * auVar33,8)) * lVar47;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar44;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar52) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar51;
      puVar2 = (undefined8 *)(lVar46 + lVar48 * 8);
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar52 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar52 = uVar52 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar45 + 1) * lVar47;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar44;
    lVar48 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar42 + lVar48 * 4);
    iVar45 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar51 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar48 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010360b:
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001030ec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsOverride::_getv(StringName const&, Variant&) const */

undefined8 __thiscall
ShaderGlobalsOverride::_getv(ShaderGlobalsOverride *this,StringName *param_1,Variant *param_2)

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
  long *plVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  plVar12 = (long *)_remap(this,param_1);
  if (((plVar12 != (long *)0x0) && (*(long *)(this + 0x418) != 0)) && (*(int *)(this + 0x43c) != 0))
  {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x438) * 8);
    if (*plVar12 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*plVar12 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(this + 0x420) + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar15) &&
           (*(long *)(*(long *)(*(long *)(this + 0x418) + lVar14 * 8) + 0x10) == *plVar12)) {
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x418) + (ulong)uVar13 * 8) + 0x20)
                            );
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(this + 0x420) + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ShaderGlobalsOverride::Override, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderGlobalsOverride::Override> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ShaderGlobalsOverride::Override,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderGlobalsOverride::Override>>>
::operator[](HashMap<StringName,ShaderGlobalsOverride::Override,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderGlobalsOverride::Override>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  undefined8 *local_c8;
  int local_90 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long local_68;
  undefined1 local_60;
  int local_58 [6];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar53 == 0) {
LAB_0010404a:
    local_88 = (undefined1  [16])0x0;
    local_90[0] = 0;
    uVar43 = uVar40 * 4;
    uVar48 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar40 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar4 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar40 != uVar43);
      }
      else {
        memset(pvVar4,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
      goto LAB_00103aca;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_00103bd7;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00103ad6;
LAB_00103bfd:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (undefined8 *)0x0;
      goto LAB_00103fe2;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar42 = *(void **)(this + 8);
    uVar40 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar38 * lVar46;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar43;
          lVar45 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar13 * auVar29,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar42 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar51 * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar43;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar14 * auVar30,8)) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar43;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar49 = uVar41;
            if (uVar37 < uVar52) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar51;
              uVar52 = uVar37;
            }
            uVar52 = uVar52 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar43;
            lVar45 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_90[0] = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_88 = (undefined1  [16])0x0;
    }
    else {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar46;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      uVar51 = SUB164(auVar5 * auVar21,8);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar39 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (undefined8 *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_00103a6c;
          }
          uVar52 = uVar52 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar6 * auVar22,8);
        } while ((uVar50 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar50 * lVar46, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar51 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar46,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar52 <= SUB164(auVar8 * auVar24,8)));
      }
      local_90[0] = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_88 = (undefined1  [16])0x0;
      if (lVar53 == 0) goto LAB_0010404a;
    }
LAB_00103aca:
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
LAB_00103ad6:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar43 = CONCAT44(0,uVar38);
      lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      uVar52 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar39 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar43;
      lVar46 = SUB168(auVar9 * auVar25,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar51 = SUB164(auVar9 * auVar25,8);
      if (uVar50 != 0) {
        do {
          if ((uVar39 == uVar50) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1)) {
            lVar53 = *(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8);
            *(undefined1 *)(lVar53 + 0x18) = 0;
            Variant::operator=((Variant *)(lVar53 + 0x20),(Variant *)local_90);
            local_c8 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar51 * 8);
            goto LAB_00103fe2;
          }
          uVar52 = uVar52 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar51 + 1) * lVar53;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar43;
          lVar46 = SUB168(auVar10 * auVar26,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar51 = SUB164(auVar10 * auVar26,8);
        } while ((uVar50 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar50 * lVar53, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar43, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar38 + uVar51) - SUB164(auVar11 * auVar27,8)) * lVar53,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar43, uVar52 <= SUB164(auVar12 * auVar28,8)));
      }
      iVar44 = *(int *)(this + 0x2c);
    }
LAB_00103bd7:
    if ((float)uVar40 * __LC16 < (float)(iVar44 + 1)) goto LAB_00103bfd;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  local_60 = 0;
  Variant::Variant((Variant *)local_58,(Variant *)local_90);
  local_c8 = (undefined8 *)operator_new(0x38,"");
  *local_c8 = local_78._0_8_;
  local_c8[1] = local_78._8_8_;
  StringName::StringName((StringName *)(local_c8 + 2),(StringName *)&local_68);
  *(undefined1 *)(local_c8 + 3) = local_60;
  Variant::Variant((Variant *)(local_c8 + 4),(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = local_c8;
  }
  else {
    **(undefined8 **)(this + 0x20) = local_c8;
    local_c8[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = local_c8;
  if (*(long *)param_1 == 0) {
    uVar38 = StringName::get_empty_hash();
  }
  else {
    uVar38 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar53 = *(long *)(this + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  uVar51 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar39);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar40 * lVar46;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar43;
  lVar47 = SUB168(auVar17 * auVar33,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar17 * auVar33,8);
  uVar50 = *puVar1;
  puVar2 = local_c8;
  while (uVar50 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar50 * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar18 * auVar34,8)) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar54 = puVar2;
    if (uVar38 < uVar51) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar50;
      puVar3 = (undefined8 *)(lVar45 + lVar47 * 8);
      puVar54 = (undefined8 *)*puVar3;
      *puVar3 = puVar2;
      uVar51 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar51 = uVar51 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar43;
    lVar47 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar20 * auVar36,8);
    puVar2 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar2;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00103fe2:
  local_c8 = local_c8 + 3;
  if (Variant::needs_deinit[local_90[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00103a6c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsOverride::_setv(StringName const&, Variant const&) */

void __thiscall
ShaderGlobalsOverride::_setv(ShaderGlobalsOverride *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* MethodBind* create_method_bind<ShaderGlobalsOverride>(void (ShaderGlobalsOverride::*)()) */

MethodBind * create_method_bind<ShaderGlobalsOverride>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00105f68;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ShaderGlobalsOverride";
  local_30 = 0x15;
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



/* ShaderGlobalsOverride::_initialize_classv() */

void ShaderGlobalsOverride::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_001045f9;
  if (Node::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Node";
    local_60 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
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
    if (local_58 == 0) {
LAB_0010470a:
      if ((code *)PTR__bind_methods_00108010 != Object::_bind_methods) {
LAB_0010471a:
        Node::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010470a;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00108010 != Object::_bind_methods) goto LAB_0010471a;
    }
    Node::initialize_class()::initialized = '\x01';
  }
  local_48 = "Node";
  local_58 = 0;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "ShaderGlobalsOverride";
  local_60 = 0;
  local_40 = 0x15;
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
LAB_001045f9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderGlobalsOverride::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ShaderGlobalsOverride::_get_property_listv(ShaderGlobalsOverride *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ShaderGlobalsOverride";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "ShaderGlobalsOverride";
  local_70 = 0x15;
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
LAB_00104988:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104988;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001049aa;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001049aa:
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
  StringName::StringName((StringName *)&local_78,"ShaderGlobalsOverride",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
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
LAB_00105010:
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
  if (lVar10 == 0) goto LAB_00105010;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00104ee9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00104ee9;
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
    goto LAB_00105066;
  }
  if (lVar10 == lVar7) {
LAB_00104f8f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00105066:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00104f7a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00104f8f;
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
LAB_00104f7a:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00105208) */
/* WARNING: Removing unreachable block (ram,0x00105338) */
/* WARNING: Removing unreachable block (ram,0x00105500) */
/* WARNING: Removing unreachable block (ram,0x00105344) */
/* WARNING: Removing unreachable block (ram,0x0010534e) */
/* WARNING: Removing unreachable block (ram,0x001054e0) */
/* WARNING: Removing unreachable block (ram,0x0010535a) */
/* WARNING: Removing unreachable block (ram,0x00105364) */
/* WARNING: Removing unreachable block (ram,0x001054c0) */
/* WARNING: Removing unreachable block (ram,0x00105370) */
/* WARNING: Removing unreachable block (ram,0x0010537a) */
/* WARNING: Removing unreachable block (ram,0x001054a0) */
/* WARNING: Removing unreachable block (ram,0x00105386) */
/* WARNING: Removing unreachable block (ram,0x00105390) */
/* WARNING: Removing unreachable block (ram,0x00105480) */
/* WARNING: Removing unreachable block (ram,0x0010539c) */
/* WARNING: Removing unreachable block (ram,0x001053a6) */
/* WARNING: Removing unreachable block (ram,0x00105460) */
/* WARNING: Removing unreachable block (ram,0x001053b2) */
/* WARNING: Removing unreachable block (ram,0x001053bc) */
/* WARNING: Removing unreachable block (ram,0x00105440) */
/* WARNING: Removing unreachable block (ram,0x001053c4) */
/* WARNING: Removing unreachable block (ram,0x001053da) */
/* WARNING: Removing unreachable block (ram,0x001053e6) */
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
      _err_print_error(&_LC52,"./core/object/method_bind.h",0x154,
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
      goto LAB_001056a0;
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
LAB_001056a0:
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
      goto LAB_00105b2b;
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
                    /* WARNING: Could not recover jumptable at 0x00105992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00105b2b:
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
      goto LAB_00105d2b;
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
                    /* WARNING: Could not recover jumptable at 0x00105b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00105d2b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderGlobalsOverride::~ShaderGlobalsOverride() */

void __thiscall ShaderGlobalsOverride::~ShaderGlobalsOverride(ShaderGlobalsOverride *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


