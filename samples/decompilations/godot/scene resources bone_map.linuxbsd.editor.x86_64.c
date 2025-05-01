
/* BoneMap::find_profile_bone_name(StringName const&) const */

StringName * BoneMap::find_profile_bone_name(StringName *param_1)

{
  long *in_RDX;
  long in_RSI;
  long *plVar1;
  
  plVar1 = *(long **)(in_RSI + 0x260);
  *(undefined8 *)param_1 = 0;
  if (plVar1 != (long *)0x0) {
    do {
      if (*in_RDX == plVar1[3]) {
        StringName::operator=(param_1,(StringName *)(plVar1 + 2));
        return param_1;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return param_1;
}



/* BoneMap::get_profile() const */

void BoneMap::get_profile(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x240) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x240);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* BoneMap::~BoneMap() */

void __thiscall BoneMap::~BoneMap(BoneMap *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00109dd0;
  pvVar5 = *(void **)(this + 0x250);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x274) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 600) + lVar4) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 600) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if (bVar6) {
              if (*(long *)((long)pvVar5 + 0x18) != 0) {
                StringName::unref();
                if (StringName::configured == '\0') goto LAB_00100134;
              }
              if (*(long *)((long)pvVar5 + 0x10) != 0) {
                StringName::unref();
              }
            }
LAB_00100134:
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x250);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00100170;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 600),false);
  }
LAB_00100170:
  if (*(long *)(this + 0x240) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x240);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        Resource::~Resource((Resource *)this);
        return;
      }
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* BoneMap::~BoneMap() */

void __thiscall BoneMap::~BoneMap(BoneMap *this)

{
  ~BoneMap(this);
  operator_delete(this,0x278);
  return;
}



/* BoneMap::get_skeleton_bone_name(StringName const&) const */

StringName * BoneMap::get_skeleton_bone_name(StringName *param_1)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  uint uVar20;
  int iVar21;
  long *in_RDX;
  long lVar22;
  long in_RSI;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  
  if ((*(long *)(in_RSI + 0x250) != 0) && (*(int *)(in_RSI + 0x274) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x270) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x270) * 8);
    if (*in_RDX == 0) {
      uVar20 = StringName::get_empty_hash();
    }
    else {
      uVar20 = *(uint *)(*in_RDX + 0x20);
    }
    uVar24 = CONCAT44(0,uVar1);
    lVar27 = *(long *)(in_RSI + 600);
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar20 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar24;
    lVar22 = SUB168(auVar3 * auVar11,8);
    uVar23 = *(uint *)(lVar27 + lVar22 * 4);
    iVar21 = SUB164(auVar3 * auVar11,8);
    if (uVar23 != 0) {
      uVar25 = 0;
      do {
        if ((uVar20 == uVar23) &&
           (lVar22 = *(long *)(*(long *)(*(long *)(in_RSI + 0x250) + lVar22 * 8) + 0x10),
           lVar22 == *in_RDX)) {
          if ((*(long *)(in_RSI + 0x250) != 0) && (*(int *)(in_RSI + 0x274) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x270) * 4);
            uVar24 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x270) * 8);
            if (lVar22 == 0) {
              uVar20 = StringName::get_empty_hash();
              lVar27 = *(long *)(in_RSI + 600);
            }
            else {
              uVar20 = *(uint *)(lVar22 + 0x20);
            }
            if (uVar20 == 0) {
              uVar20 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar20 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar24;
            lVar22 = SUB168(auVar7 * auVar15,8);
            uVar23 = *(uint *)(lVar27 + lVar22 * 4);
            uVar25 = SUB164(auVar7 * auVar15,8);
            if (uVar23 != 0) {
              uVar26 = 0;
              do {
                if ((uVar20 == uVar23) &&
                   (*(long *)(*(long *)(*(long *)(in_RSI + 0x250) + lVar22 * 8) + 0x10) == *in_RDX))
                {
                  StringName::StringName
                            (param_1,(StringName *)
                                     (*(long *)(*(long *)(in_RSI + 0x250) + (ulong)uVar25 * 8) +
                                     0x18));
                  return param_1;
                }
                uVar26 = uVar26 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar25 + 1) * lVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar24;
                lVar22 = SUB168(auVar8 * auVar16,8);
                uVar23 = *(uint *)(lVar27 + lVar22 * 4);
                uVar25 = SUB164(auVar8 * auVar16,8);
              } while ((uVar23 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar23 * lVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar24, auVar10._8_8_ = 0,
                      auVar10._0_8_ = (ulong)((uVar1 + uVar25) - SUB164(auVar9 * auVar17,8)) * lVar2
                      , auVar18._8_8_ = 0, auVar18._0_8_ = uVar24,
                      uVar26 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          _err_print_error(&_LC13,"./core/templates/hash_map.h",0x147,
                           "FATAL: Condition \"!exists\" is true.","HashMap key not found.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar25 = uVar25 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar21 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar24;
        lVar22 = SUB168(auVar4 * auVar12,8);
        uVar23 = *(uint *)(lVar27 + lVar22 * 4);
        iVar21 = SUB164(auVar4 * auVar12,8);
      } while ((uVar23 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar23 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar24, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar24, uVar25 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  _err_print_error("get_skeleton_bone_name","scene/resources/bone_map.cpp",0x51,
                   "Condition \"!bone_map.has(p_profile_bone_name)\" is true. Returning: StringName()"
                   ,0,0);
  *(undefined8 *)param_1 = 0;
  return param_1;
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



/* BoneMap::_get(StringName const&, Variant&) const */

undefined4 __thiscall BoneMap::_get(BoneMap *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar2 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 != 0) {
    __s = *(char **)(lVar2 + 8);
    local_80 = 0;
    if (__s != (char *)0x0) {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_80);
      goto LAB_001005ce;
    }
    plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00100689;
        LOCK();
        lVar5 = *plVar1;
        bVar6 = lVar3 == lVar5;
        if (bVar6) {
          *plVar1 = lVar3 + 1;
          lVar5 = lVar3;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar5 != -1) {
        local_80 = *(long *)(lVar2 + 0x10);
      }
      goto LAB_001005ce;
    }
  }
LAB_00100689:
  local_80 = 0;
LAB_001005ce:
  uVar4 = String::begins_with((char *)&local_80);
  if ((char)uVar4 != '\0') {
    String::get_slicec((wchar32)(String *)&local_78,(int)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    get_skeleton_bone_name((StringName *)&local_68);
    Variant::Variant((Variant *)local_58,(StringName *)&local_68);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    bVar6 = StringName::configured != '\0';
    *(undefined4 *)param_2 = local_58[0];
    *(undefined8 *)(param_2 + 8) = local_50;
    *(undefined8 *)(param_2 + 0x10) = uStack_48;
    if ((bVar6) &&
       (((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_70 != 0)))) {
      StringName::unref();
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* BoneMap::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall BoneMap::_get_property_list(BoneMap *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  size_t local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  plVar8 = *(long **)(this + 0x260);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar8 != (long *)0x0) {
    do {
      local_88 = 0;
      local_90 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      lVar2 = plVar8[2];
      if (lVar2 == 0) {
        local_a0 = 0;
      }
      else {
        __s = *(char **)(lVar2 + 8);
        local_a0 = 0;
        if (__s == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
          if (*(long *)(lVar2 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_00100ab9;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar3 == lVar7;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar7 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_a0 = *(long *)(lVar2 + 0x10);
            }
          }
        }
        else {
          local_70 = strlen(__s);
          local_78 = __s;
          String::parse_latin1((StrRange *)&local_a0);
        }
      }
LAB_00100ab9:
      operator+((char *)&local_98,(String *)"bone_map/");
      local_78 = (char *)CONCAT44(local_78._4_4_,0x15);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00100b21:
        local_50 = 2;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
        lVar2 = *(long *)param_1;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 2;
        if (local_60 != 0x11) goto LAB_00100b21;
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
        lVar2 = *(long *)param_1;
      }
      if (lVar2 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
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
      sVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(sVar4 + -0x10),false);
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
      lVar2 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
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
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::get_skeleton_bone_name_count(StringName const&) const */

int __thiscall BoneMap::get_skeleton_bone_name_count(BoneMap *this,StringName *param_1)

{
  long *plVar1;
  int iVar2;
  
  plVar1 = *(long **)(this + 0x260);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  iVar2 = 0;
  do {
    while (*(long *)param_1 == plVar1[3]) {
      plVar1 = (long *)*plVar1;
      iVar2 = iVar2 + 1;
      if (plVar1 == (long *)0x0) {
        return iVar2;
      }
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  return iVar2;
}



/* BoneMap::_validate_property(PropertyInfo&) const */

void __thiscall BoneMap::_validate_property(BoneMap *this,PropertyInfo *param_1)

{
  char cVar1;
  
  cVar1 = String::operator==((String *)(param_1 + 8),"bonemap");
  if (cVar1 == '\0') {
    cVar1 = String::operator==((String *)(param_1 + 8),"profile");
    if (cVar1 == '\0') {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 2;
  return;
}



/* BoneMap::_set_skeleton_bone_name(StringName const&, StringName const&) */

void BoneMap::_set_skeleton_bone_name(StringName *param_1,StringName *param_2)

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
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x250) != 0) && (*(int *)(param_1 + 0x274) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x270) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x270) * 8);
    if (*(long *)param_2 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_2 + 0x20);
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
    uVar14 = *(uint *)(*(long *)(param_1 + 600) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(param_1 + 0x250) + lVar13 * 8) + 0x10) == *(long *)param_2
           )) {
          HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
          ::insert(local_48,param_1 + 0x248,SUB81(param_2,0));
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00100e87;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(param_1 + 600) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_set_skeleton_bone_name","scene/resources/bone_map.cpp",0x56,
                     "Condition \"!bone_map.has(p_profile_bone_name)\" is true.",0,0);
    return;
  }
LAB_00100e87:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::set_skeleton_bone_name(StringName const&, StringName const&) */

void BoneMap::set_skeleton_bone_name(StringName *param_1,StringName *param_2)

{
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _set_skeleton_bone_name(param_1,param_2);
  StringName::StringName((StringName *)&local_40,"bone_map_updated",false);
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  (**(code **)(*(long *)param_1 + 0xd0))(param_1,(StringName *)&local_40,0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::_set(StringName const&, Variant const&) */

undefined4 BoneMap::_set(StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 != 0) {
    __s = *(char **)(lVar2 + 8);
    local_60 = 0;
    if (__s != (char *)0x0) {
      local_40 = strlen(__s);
      local_48 = __s;
      String::parse_latin1((StrRange *)&local_60);
      goto LAB_00100fbc;
    }
    plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00101071;
        LOCK();
        lVar5 = *plVar1;
        bVar6 = lVar3 == lVar5;
        if (bVar6) {
          *plVar1 = lVar3 + 1;
          lVar5 = lVar3;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar5 != -1) {
        local_60 = *(long *)(lVar2 + 0x10);
      }
      goto LAB_00100fbc;
    }
  }
LAB_00101071:
  local_60 = 0;
LAB_00100fbc:
  uVar4 = String::begins_with((char *)&local_60);
  if ((char)uVar4 != '\0') {
    String::get_slicec((wchar32)(String *)&local_58,(int)&local_60);
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    set_skeleton_bone_name(param_1,(StringName *)&local_50);
    if ((StringName::configured != '\0') &&
       (((local_50 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_48 != (char *)0x0)))) {
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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



/* BoneMap::_bind_methods() */

void BoneMap::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  MethodBind *pMVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  long in_FS_OFFSET;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  long local_f0;
  undefined1 local_e8 [16];
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  int *local_a8;
  undefined8 local_a0;
  long local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar7 = PTR__LC43_0010a3a8;
  puVar6 = PTR__LC42_0010a3a0;
  local_e8._12_4_ = SUB84(local_e8._0_8_,4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_f8,(char ***)"get_profile",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar11 = create_method_bind<BoneMap,Ref<SkeletonProfile>>(get_profile);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = "profile";
  uVar12 = (uint)&local_58;
  local_58 = &local_88;
  D_METHODP((char *)&local_f8,(char ***)"set_profile",uVar12);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar11 = create_method_bind<BoneMap,Ref<SkeletonProfile>const&>(set_profile);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "profile_bone_name";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_f8,(char ***)"get_skeleton_bone_name",uVar12);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar11 = create_method_bind<BoneMap,StringName,StringName_const&>(get_skeleton_bone_name);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  auStack_50._0_8_ = &puStack_70;
  local_78 = puVar6;
  puStack_70 = puVar7;
  local_58 = &local_78;
  D_METHODP((char *)&local_f8,(char ***)"set_skeleton_bone_name",uVar12);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar11 = create_method_bind<BoneMap,StringName_const&,StringName_const&>(set_skeleton_bone_name);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "skeleton_bone_name";
  puStack_70 = (undefined *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_f8,(char ***)"find_profile_bone_name",uVar12);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar11 = create_method_bind<BoneMap,StringName,StringName_const&>(find_profile_bone_name);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_110,true);
  _scs_create((char *)&local_118,true);
  local_f8 = "SkeletonProfile";
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0xf;
  String::parse_latin1((StrRange *)&local_128);
  local_f8 = "profile";
  local_130 = 0;
  local_f0 = 7;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0x18);
  local_f0 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_130);
  }
  local_e8._0_12_ = ZEXT412(0x11) << 0x40;
  local_d8 = 0;
  if (local_128 == 0) {
    local_d0 = CONCAT44(local_d0._4_4_,6);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_128);
    local_d0 = CONCAT44(local_d0._4_4_,6);
    if (local_e8._8_4_ != 0x11) {
      StringName::operator=((StringName *)local_e8,(StringName *)&local_120);
      goto LAB_0010173e;
    }
  }
  StringName::StringName((StringName *)&local_108,(String *)&local_d8,false);
  if ((char *)local_e8._0_8_ == local_108) {
    if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_e8._0_8_ = local_108;
  }
LAB_0010173e:
  local_138 = 0;
  local_108 = "BoneMap";
  local_100 = 7;
  String::parse_latin1((StrRange *)&local_138);
  StringName::StringName((StringName *)&local_108,(String *)&local_138,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_f8,(StringName *)&local_118,
             (StringName *)&local_110,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8._0_8_ != 0)) {
    StringName::unref();
  }
  lVar2 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar1 = (long *)(local_128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_118 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_110 != 0)) {
    StringName::unref();
  }
  local_108 = (char *)0x0;
  local_f8 = "bonemap";
  local_f0 = 7;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_110,"bonemap",false);
  local_f8 = "BoneMap";
  local_118 = 0;
  local_f0 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_f8,(String *)&local_118,false);
  ClassDB::add_property_array((StringName *)&local_f8,(StringName *)&local_110,(String *)&local_108)
  ;
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  pcVar8 = local_108;
  if (local_108 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  local_110 = 0;
  local_f8 = "bone_map_updated";
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_110);
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = (int *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_e8 = (undefined1  [16])0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_110);
  }
  local_108 = "BoneMap";
  local_118 = 0;
  local_100 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_108,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
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
  piVar10 = local_a8;
  if (local_a8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_a8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_a8 + -2);
      lVar13 = 0;
      local_a8 = (int *)0x0;
      piVar14 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar14] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar14 = piVar14 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_e8._0_8_;
  if (local_e8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_e8._8_8_;
      local_e8 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  pcVar8 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_110 = 0;
  local_f8 = "profile_updated";
  local_f0 = 0xf;
  String::parse_latin1((StrRange *)&local_110);
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = (int *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_e8 = (undefined1  [16])0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_110);
  }
  local_108 = "BoneMap";
  local_118 = 0;
  local_100 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_108,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
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
  piVar10 = local_a8;
  if (local_a8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_a8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_a8 + -2);
      lVar13 = 0;
      local_a8 = (int *)0x0;
      piVar14 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar14] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar14 = piVar14 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_e8._0_8_;
  if (local_e8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_e8._8_8_;
      local_e8 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  pcVar8 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar8 + -0x10),false);
    }
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMap::_validate_bone_map() */

void __thiscall BoneMap::_validate_bone_map(BoneMap *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  StringName *pSVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
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
  code *pcVar37;
  char cVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  long *plVar46;
  long *plVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  uint *puVar55;
  int iVar56;
  long lVar57;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar5 = *(StringName **)(this + 0x240);
  if ((pSVar5 == (StringName *)0x0) || (cVar38 = RefCounted::reference(), cVar38 == '\0')) {
    if ((*(long *)(this + 0x250) != 0) && (*(int *)(this + 0x274) != 0)) {
      lVar49 = 0;
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
      if (uVar4 != 0) {
        do {
          if (*(int *)(*(long *)(this + 600) + lVar49) != 0) {
            *(int *)(*(long *)(this + 600) + lVar49) = 0;
            pvVar8 = *(void **)(*(long *)(this + 0x250) + lVar49 * 2);
            if ((StringName::configured != '\0') &&
               (((*(long *)((long)pvVar8 + 0x18) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')) &&
                (*(long *)((long)pvVar8 + 0x10) != 0)))) {
              StringName::unref();
            }
            Memory::free_static(pvVar8,false);
            *(undefined8 *)(*(long *)(this + 0x250) + lVar49 * 2) = 0;
          }
          lVar49 = lVar49 + 4;
        } while (lVar49 != (ulong)uVar4 << 2);
      }
      *(undefined4 *)(this + 0x274) = 0;
      *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
    }
  }
  else {
    iVar56 = 0;
    iVar39 = SkeletonProfile::get_bone_size();
    local_70 = 0;
    if (0 < iVar39) {
      do {
        while( true ) {
          SkeletonProfile::get_bone_name((int)(StringName *)&local_58);
          if (local_70 == local_58) {
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_70 = local_58;
          }
          if ((*(long *)(this + 0x250) != 0) && (*(int *)(this + 0x274) != 0)) {
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
            lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x270) * 8);
            if (local_70 == 0) {
              uVar40 = StringName::get_empty_hash();
            }
            else {
              uVar40 = *(uint *)(local_70 + 0x20);
            }
            uVar51 = CONCAT44(0,uVar4);
            if (uVar40 == 0) {
              uVar40 = 1;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar40 * lVar49;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar51;
            lVar43 = SUB168(auVar9 * auVar23,8);
            uVar42 = *(uint *)(*(long *)(this + 600) + lVar43 * 4);
            iVar41 = SUB164(auVar9 * auVar23,8);
            if (uVar42 != 0) {
              uVar54 = 0;
              do {
                if ((uVar40 == uVar42) &&
                   (*(long *)(*(long *)(*(long *)(this + 0x250) + lVar43 * 8) + 0x10) == local_70))
                goto LAB_00102399;
                uVar54 = uVar54 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar41 + 1) * lVar49;
                auVar24._8_8_ = 0;
                auVar24._0_8_ = uVar51;
                lVar43 = SUB168(auVar10 * auVar24,8);
                uVar42 = *(uint *)(*(long *)(this + 600) + lVar43 * 4);
                iVar41 = SUB164(auVar10 * auVar24,8);
              } while ((uVar42 != 0) &&
                      (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar42 * lVar49, auVar25._8_8_ = 0,
                      auVar25._0_8_ = uVar51, auVar12._8_8_ = 0,
                      auVar12._0_8_ =
                           (ulong)((uVar4 + iVar41) - SUB164(auVar11 * auVar25,8)) * lVar49,
                      auVar26._8_8_ = 0, auVar26._0_8_ = uVar51,
                      uVar54 <= SUB164(auVar12 * auVar26,8)));
            }
          }
          local_60 = 0;
          HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
          ::insert((StringName *)&local_58,(StringName *)(this + 0x248),SUB81(&local_70,0));
          if ((StringName::configured != '\0') && (local_60 != 0)) break;
LAB_00102399:
          iVar56 = iVar56 + 1;
          if (iVar39 == iVar56) goto LAB_001023a8;
        }
        iVar56 = iVar56 + 1;
        StringName::unref();
      } while (iVar39 != iVar56);
    }
LAB_001023a8:
    plVar46 = *(long **)(this + 0x260);
    lVar49 = 0;
    local_50[0] = 0;
    local_68 = 0;
    if (plVar46 != (long *)0x0) {
      do {
        while( true ) {
          StringName::operator=((StringName *)&local_68,(StringName *)(plVar46 + 2));
          cVar38 = SkeletonProfile::has_bone(pSVar5);
          if (cVar38 == '\0') break;
LAB_001023e8:
          plVar46 = (long *)*plVar46;
          if (plVar46 == (long *)0x0) goto LAB_001024b0;
        }
        StringName::StringName((StringName *)&local_60,(StringName *)&local_68);
        if (lVar49 == 0) {
          lVar49 = 1;
        }
        else {
          lVar49 = *(long *)(lVar49 + -8) + 1;
        }
        iVar39 = CowData<StringName>::resize<false>((CowData<StringName> *)local_50,lVar49);
        lVar49 = local_50[0];
        if (iVar39 == 0) {
          if (local_50[0] == 0) {
            lVar57 = -1;
            lVar43 = 0;
          }
          else {
            lVar43 = *(long *)(local_50[0] + -8);
            lVar57 = lVar43 + -1;
            if (-1 < lVar57) {
              CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50);
              lVar49 = local_50[0];
              StringName::operator=
                        ((StringName *)(local_50[0] + lVar57 * 8),(StringName *)&local_60);
              goto LAB_0010247c;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar57,lVar43,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true");
          lVar49 = local_50[0];
        }
LAB_0010247c:
        if ((StringName::configured == '\0') || (local_60 == 0)) goto LAB_001023e8;
        StringName::unref();
        plVar46 = (long *)*plVar46;
      } while (plVar46 != (long *)0x0);
LAB_001024b0:
      if (lVar49 != 0) {
        lVar43 = *(long *)(lVar49 + -8);
        iVar39 = (int)lVar43;
        if (0 < iVar39) {
          uVar51 = 0;
          do {
            if (lVar43 <= (long)uVar51) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar51,lVar43,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar37 = (code *)invalidInstructionException();
              (*pcVar37)();
            }
            if ((*(long *)(this + 0x250) != 0) && (*(int *)(this + 0x274) != 0)) {
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
              uVar53 = CONCAT44(0,uVar4);
              lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x270) * 8);
              lVar57 = *(long *)(lVar49 + uVar51 * 8);
              if (lVar57 == 0) {
                uVar40 = StringName::get_empty_hash();
              }
              else {
                uVar40 = *(uint *)(lVar57 + 0x20);
              }
              lVar57 = *(long *)(this + 600);
              if (uVar40 == 0) {
                uVar40 = 1;
              }
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)uVar40 * lVar43;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar53;
              lVar44 = SUB168(auVar13 * auVar27,8);
              uVar42 = *(uint *)(lVar57 + lVar44 * 4);
              uVar54 = SUB164(auVar13 * auVar27,8);
              if (uVar42 != 0) {
                uVar52 = 0;
LAB_001025c9:
                uVar50 = (ulong)uVar54;
                if ((uVar40 != uVar42) ||
                   (lVar6 = *(long *)(this + 0x250),
                   *(long *)(*(long *)(lVar6 + lVar44 * 8) + 0x10) != *(long *)(lVar49 + uVar51 * 8)
                   )) goto LAB_00102580;
                lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x270) * 8);
                uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
                uVar48 = CONCAT44(0,uVar4);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = (ulong)(uVar54 + 1) * lVar43;
                auVar31._8_8_ = 0;
                auVar31._0_8_ = uVar48;
                uVar45 = SUB168(auVar17 * auVar31,8);
                puVar55 = (uint *)(lVar57 + uVar45 * 4);
                uVar42 = SUB164(auVar17 * auVar31,8);
                uVar53 = (ulong)uVar42;
                uVar40 = *puVar55;
                if ((uVar40 != 0) &&
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar40 * lVar43, auVar32._8_8_ = 0,
                   auVar32._0_8_ = uVar48, auVar19._8_8_ = 0,
                   auVar19._0_8_ = (ulong)((uVar4 + uVar42) - SUB164(auVar18 * auVar32,8)) * lVar43,
                   auVar33._8_8_ = 0, auVar33._0_8_ = uVar48, SUB164(auVar19 * auVar33,8) != 0)) {
                  while( true ) {
                    puVar1 = (uint *)(lVar57 + uVar50 * 4);
                    *puVar55 = *puVar1;
                    puVar2 = (undefined8 *)(lVar6 + uVar45 * 8);
                    *puVar1 = uVar40;
                    puVar3 = (undefined8 *)(lVar6 + uVar50 * 8);
                    uVar7 = *puVar2;
                    *puVar2 = *puVar3;
                    *puVar3 = uVar7;
                    auVar22._8_8_ = 0;
                    auVar22._0_8_ = (ulong)((int)uVar53 + 1) * lVar43;
                    auVar36._8_8_ = 0;
                    auVar36._0_8_ = uVar48;
                    uVar45 = SUB168(auVar22 * auVar36,8);
                    puVar55 = (uint *)(lVar57 + uVar45 * 4);
                    uVar40 = *puVar55;
                    uVar50 = uVar53;
                    if ((uVar40 == 0) ||
                       (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar40 * lVar43, auVar34._8_8_ = 0
                       , auVar34._0_8_ = uVar48, auVar21._8_8_ = 0,
                       auVar21._0_8_ =
                            (ulong)((SUB164(auVar22 * auVar36,8) + uVar4) -
                                   SUB164(auVar20 * auVar34,8)) * lVar43, auVar35._8_8_ = 0,
                       auVar35._0_8_ = uVar48, SUB164(auVar21 * auVar35,8) == 0)) break;
                    uVar53 = uVar45 & 0xffffffff;
                  }
                }
                plVar46 = (long *)(lVar6 + uVar50 * 8);
                *(undefined4 *)(lVar57 + uVar50 * 4) = 0;
                plVar47 = (long *)*plVar46;
                if (*(long **)(this + 0x260) == plVar47) {
                  *(long *)(this + 0x260) = *plVar47;
                  plVar47 = (long *)*plVar46;
                }
                if (*(long **)(this + 0x268) == plVar47) {
                  *(long *)(this + 0x268) = plVar47[1];
                  plVar47 = (long *)*plVar46;
                }
                if ((long *)plVar47[1] != (long *)0x0) {
                  *(long *)plVar47[1] = *plVar47;
                  plVar47 = (long *)*plVar46;
                }
                if (*plVar47 != 0) {
                  *(long *)(*plVar47 + 8) = plVar47[1];
                  plVar47 = (long *)*plVar46;
                }
                if ((StringName::configured != '\0') &&
                   (((plVar47[3] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                    (plVar47[2] != 0)))) {
                  StringName::unref();
                }
                Memory::free_static(plVar47,false);
                *(undefined8 *)(*(long *)(this + 0x250) + uVar50 * 8) = 0;
                *(int *)(this + 0x274) = *(int *)(this + 0x274) + -1;
              }
            }
LAB_00102795:
            if (uVar51 == iVar39 - 1) break;
            lVar43 = *(long *)(lVar49 + -8);
            uVar51 = uVar51 + 1;
          } while( true );
        }
      }
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<StringName>::_unref((CowData<StringName> *)local_50);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    cVar38 = RefCounted::unreference();
    if ((cVar38 != '\0') && (cVar38 = predelete_handler((Object *)pSVar5), cVar38 != '\0')) {
      (**(code **)(*(long *)pSVar5 + 0x140))(pSVar5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar5,false);
        return;
      }
      goto LAB_00102b0b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102b0b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102580:
  uVar52 = uVar52 + 1;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)(uVar54 + 1) * lVar43;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar53;
  lVar44 = SUB168(auVar14 * auVar28,8);
  uVar42 = *(uint *)(lVar57 + lVar44 * 4);
  uVar54 = SUB164(auVar14 * auVar28,8);
  if ((uVar42 == 0) ||
     (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar42 * lVar43, auVar29._8_8_ = 0,
     auVar29._0_8_ = uVar53, auVar16._8_8_ = 0,
     auVar16._0_8_ = (ulong)((uVar4 + uVar54) - SUB164(auVar15 * auVar29,8)) * lVar43,
     auVar30._8_8_ = 0, auVar30._0_8_ = uVar53, SUB164(auVar16 * auVar30,8) < uVar52))
  goto LAB_00102795;
  goto LAB_001025c9;
}



/* BoneMap::_update_profile() */

void __thiscall BoneMap::_update_profile(BoneMap *this)

{
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _validate_bone_map(this);
  StringName::StringName((StringName *)&local_40,"profile_updated",false);
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_40,0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::set_profile(Ref<SkeletonProfile> const&) */

void __thiscall BoneMap::set_profile(BoneMap *this,Ref *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_60;
  BoneMap local_58 [24];
  long local_40;
  
  plVar1 = *(long **)(this + 0x240);
  plVar2 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar2 == plVar1) goto LAB_00102dcd;
  if (plVar1 == (long *)0x0) {
    *(long **)(this + 0x240) = plVar2;
    if (plVar2 != (long *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x240) = 0;
        _update_profile(this);
        goto LAB_00102dcd;
      }
      goto LAB_00102d48;
    }
  }
  else {
    pcVar3 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<BoneMap>
              (local_58,(char *)this,(_func_void *)"&BoneMap::_update_profile");
    StringName::StringName((StringName *)&local_60,"profile_updated",false);
    cVar5 = (*pcVar3)(plVar1,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (cVar5 != '\0') {
      plVar1 = *(long **)(this + 0x240);
      pcVar3 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<BoneMap>
                (local_58,(char *)this,(_func_void *)"&BoneMap::_update_profile");
      StringName::StringName((StringName *)&local_60,"profile_updated",false);
      (*pcVar3)(plVar1,(StringName *)&local_60,local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
    }
    pOVar4 = *(Object **)param_1;
    pOVar6 = *(Object **)(this + 0x240);
    if (pOVar4 != pOVar6) {
      *(Object **)(this + 0x240) = pOVar4;
      if (pOVar4 == (Object *)0x0) {
LAB_00102e3b:
        if (pOVar6 == (Object *)0x0) goto LAB_00102dc5;
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') goto LAB_00102e50;
      }
      else {
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          *(undefined8 *)(this + 0x240) = 0;
          goto LAB_00102e3b;
        }
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
          if (cVar5 == '\0') goto LAB_00102d48;
LAB_00102e50:
          cVar5 = predelete_handler(pOVar6);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
LAB_00102d48:
      pOVar6 = *(Object **)(this + 0x240);
    }
    if (pOVar6 != (Object *)0x0) {
      pcVar3 = *(code **)(*(long *)pOVar6 + 0x108);
      create_custom_callable_function_pointer<BoneMap>
                (local_58,(char *)this,(_func_void *)"&BoneMap::_update_profile");
      StringName::StringName((StringName *)&local_60,"profile_updated",false);
      (*pcVar3)(pOVar6,(StringName *)&local_60,local_58,0);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
    }
  }
LAB_00102dc5:
  _update_profile(this);
LAB_00102dcd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::notify_property_list_changed();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::BoneMap() */

void __thiscall BoneMap::BoneMap(BoneMap *this)

{
  Resource::Resource((Resource *)this);
  *(undefined ***)this = &PTR__initialize_classv_00109dd0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x270) = 2;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
  _validate_bone_map(this);
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



/* BoneMap::is_class_ptr(void*) const */

uint __thiscall BoneMap::is_class_ptr(BoneMap *this,void *param_1)

{
  return (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* BoneMap::_property_can_revertv(StringName const&) const */

undefined8 BoneMap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* BoneMap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BoneMap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* BoneMap::_notificationv(int, bool) */

void BoneMap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<BoneMap, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMap,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMap,void> *this)

{
  return;
}



/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type
          (MethodBindT<StringName_const&,StringName_const&> *this,int param_1)

{
  return -((uint)param_1 < 2) & 0x15;
}



/* MethodBindT<StringName const&, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindT<Ref<SkeletonProfile> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<SkeletonProfile>const&>::_gen_argument_type
          (MethodBindT<Ref<SkeletonProfile>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<SkeletonProfile> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<SkeletonProfile>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<SkeletonProfile>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<BoneMap, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMap,void>::get_argument_count
          (CallableCustomMethodPointer<BoneMap,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<BoneMap, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMap,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMap,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC(MethodBindTRC<Ref<SkeletonProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a038;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC(MethodBindTRC<Ref<SkeletonProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a038;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<SkeletonProfile> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonProfile>const&>::~MethodBindT(MethodBindT<Ref<SkeletonProfile>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a098;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<SkeletonProfile> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonProfile>const&>::~MethodBindT(MethodBindT<Ref<SkeletonProfile>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a098;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a158;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a158;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a0f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a0f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* BoneMap::_get_class_namev() const */

undefined8 * BoneMap::_get_class_namev(void)

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
LAB_00103253:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103253;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BoneMap");
      goto LAB_001032be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BoneMap");
LAB_001032be:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<BoneMap, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMap,void>::get_object
          (CallableCustomMethodPointer<BoneMap,void> *this)

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
      goto LAB_001033ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001033ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001033ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* BoneMap::_validate_propertyv(PropertyInfo&) const */

void __thiscall BoneMap::_validate_propertyv(BoneMap *this,PropertyInfo *param_1)

{
  char cVar1;
  
  cVar1 = String::operator==((String *)(param_1 + 8),"bonemap");
  if (cVar1 == '\0') {
    cVar1 = String::operator==((String *)(param_1 + 8),"profile");
    if (cVar1 == '\0') {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 2;
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* BoneMap::get_class() const */

void BoneMap::get_class(void)

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



/* MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "SkeletonProfile";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_001039c0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_001039c0:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BoneMap, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMap,void>::call
          (CallableCustomMethodPointer<BoneMap,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00103c8f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00103c8f;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00103df5;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00103c8f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC19,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103df5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonProfile> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<SkeletonProfile>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00103e47;
  local_68 = 0;
  local_58 = "SkeletonProfile";
  local_70 = 0;
  local_50._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
  local_40 = 0x11;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010404d:
    local_30 = 6;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 == 0x11) goto LAB_0010404d;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_58._0_4_;
  lVar2 = *(long *)(puVar7 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar7 + 2) = local_50._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_50._8_8_;
    local_50 = auVar4 << 0x40;
  }
  if (*(long *)(puVar7 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar5 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_38;
  puVar7[6] = local_40;
  lVar2 = *(long *)(puVar7 + 8);
  if (lVar2 == local_38) {
    puVar7[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
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
        lVar2 = *(long *)(puVar7 + 8);
        *(undefined8 *)(puVar7 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar7 + 8) = local_38;
    puVar7[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00103e47:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
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
            if (lVar5 == 0) goto LAB_001041bf;
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
LAB_001041bf:
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
    if (cVar6 != '\0') goto LAB_00104273;
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
              if (lVar5 == 0) goto LAB_00104323;
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
LAB_00104323:
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
      if (cVar6 != '\0') goto LAB_00104273;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104273:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::is_class(String const&) const */

undefined8 __thiscall BoneMap::is_class(BoneMap *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010444f;
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
LAB_0010444f:
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
    if (cVar6 != '\0') goto LAB_00104503;
  }
  cVar6 = String::operator==(param_1,"BoneMap");
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
              if (lVar5 == 0) goto LAB_001045c3;
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
LAB_001045c3:
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
      if (cVar6 != '\0') goto LAB_00104503;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010466c;
    }
  }
LAB_00104503:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010466c:
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
LAB_001047e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001047e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104806;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104806:
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
LAB_00104be8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104be8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104c05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104c05:
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



/* BoneMap::_getv(StringName const&, Variant&) const */

void __thiscall BoneMap::_getv(BoneMap *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* BoneMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoneMap::_get_property_listv(BoneMap *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoneMap";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "BoneMap";
  local_70 = 7;
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
LAB_00105058:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105058;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010507a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010507a:
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
  StringName::StringName((StringName *)&local_78,"BoneMap",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
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



/* Callable create_custom_callable_function_pointer<BoneMap>(BoneMap*, char const*, void
   (BoneMap::*)()) */

BoneMap * create_custom_callable_function_pointer<BoneMap>
                    (BoneMap *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00109fa8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, StringName> > >::insert(StringName const&,
   StringName const&, bool) */

StringName *
HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>
::insert(StringName *param_1,StringName *param_2,bool param_3)

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
  StringName *in_RCX;
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
  long local_50 [2];
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
      goto LAB_00105705;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_00105807;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00105711;
LAB_0010582d:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (long *)0x0;
      goto LAB_00105bcc;
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
LAB_00105705:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_00105711:
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
          if ((uVar44 == uVar31) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            StringName::operator=
                      ((StringName *)(*(long *)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8) + 0x18),
                       in_RCX);
            local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            goto LAB_00105bcc;
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
LAB_00105807:
    if ((float)uVar30 * __LC30 < (float)(iVar36 + 1)) goto LAB_0010582d;
  }
  StringName::StringName((StringName *)&local_58,pSVar37);
  StringName::StringName((StringName *)local_50,in_RCX);
  local_b0 = (long *)operator_new(0x20,"");
  *local_b0 = 0;
  local_b0[1] = 0;
  StringName::StringName((StringName *)(local_b0 + 2),(StringName *)&local_58);
  StringName::StringName((StringName *)(local_b0 + 3),(StringName *)local_50);
  if ((StringName::configured != '\0') &&
     (((local_50[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_58 != 0)))) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_b0;
    *(long **)(param_2 + 0x20) = local_b0;
LAB_00105ae5:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_00105af1;
LAB_00105c30:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar2 = local_b0;
      local_b0[1] = (long)puVar2;
      *(long **)(param_2 + 0x20) = local_b0;
      goto LAB_00105ae5;
    }
    lVar34 = *(long *)(param_2 + 0x18);
    *(long **)(lVar34 + 8) = local_b0;
    *local_b0 = lVar34;
    lVar34 = *(long *)pSVar37;
    *(long **)(param_2 + 0x18) = local_b0;
    if (lVar34 == 0) goto LAB_00105c30;
LAB_00105af1:
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
LAB_00105bcc:
  *(long **)param_1 = local_b0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMap::_setv(StringName const&, Variant const&) */

void BoneMap::_setv(StringName *param_1,Variant *param_2)

{
  _set(param_1,param_2);
  return;
}



/* MethodBind* create_method_bind<BoneMap, Ref<SkeletonProfile>>(Ref<SkeletonProfile> (BoneMap::*)()
   const) */

MethodBind * create_method_bind<BoneMap,Ref<SkeletonProfile>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a038;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "BoneMap";
  local_30 = 7;
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



/* MethodBind* create_method_bind<BoneMap, Ref<SkeletonProfile> const&>(void
   (BoneMap::*)(Ref<SkeletonProfile> const&)) */

MethodBind * create_method_bind<BoneMap,Ref<SkeletonProfile>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010a098;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "BoneMap";
  local_30 = 7;
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



/* MethodBind* create_method_bind<BoneMap, StringName, StringName const&>(StringName
   (BoneMap::*)(StringName const&) const) */

MethodBind *
create_method_bind<BoneMap,StringName,StringName_const&>(_func_StringName_StringName_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010a0f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "BoneMap";
  local_30 = 7;
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



/* MethodBind* create_method_bind<BoneMap, StringName const&, StringName const&>(void
   (BoneMap::*)(StringName const&, StringName const&)) */

MethodBind *
create_method_bind<BoneMap,StringName_const&,StringName_const&>
          (_func_void_StringName_ptr_StringName_ptr *param_1)

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
  *(_func_void_StringName_ptr_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a158;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "BoneMap";
  local_30 = 7;
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



/* BoneMap::_bind_methods() [clone .cold] */

void BoneMap::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BoneMap::_initialize_classv() */

void BoneMap::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010d008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BoneMap";
    local_70 = 0;
    local_50 = 7;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_00106af0:
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
  if (lVar8 == 0) goto LAB_00106af0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_001069ca:
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
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_001069ca;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00106997;
  }
  if (lVar8 == lVar5) {
LAB_00106a6b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00106997:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00106a4b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_00106a6b;
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
LAB_00106a4b:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00106cd8) */
/* WARNING: Removing unreachable block (ram,0x00106e08) */
/* WARNING: Removing unreachable block (ram,0x00106fd0) */
/* WARNING: Removing unreachable block (ram,0x00106e14) */
/* WARNING: Removing unreachable block (ram,0x00106e1e) */
/* WARNING: Removing unreachable block (ram,0x00106fb0) */
/* WARNING: Removing unreachable block (ram,0x00106e2a) */
/* WARNING: Removing unreachable block (ram,0x00106e34) */
/* WARNING: Removing unreachable block (ram,0x00106f90) */
/* WARNING: Removing unreachable block (ram,0x00106e40) */
/* WARNING: Removing unreachable block (ram,0x00106e4a) */
/* WARNING: Removing unreachable block (ram,0x00106f70) */
/* WARNING: Removing unreachable block (ram,0x00106e56) */
/* WARNING: Removing unreachable block (ram,0x00106e60) */
/* WARNING: Removing unreachable block (ram,0x00106f50) */
/* WARNING: Removing unreachable block (ram,0x00106e6c) */
/* WARNING: Removing unreachable block (ram,0x00106e76) */
/* WARNING: Removing unreachable block (ram,0x00106f30) */
/* WARNING: Removing unreachable block (ram,0x00106e82) */
/* WARNING: Removing unreachable block (ram,0x00106e8c) */
/* WARNING: Removing unreachable block (ram,0x00106f10) */
/* WARNING: Removing unreachable block (ram,0x00106e94) */
/* WARNING: Removing unreachable block (ram,0x00106eaa) */
/* WARNING: Removing unreachable block (ram,0x00106eb6) */
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



/* MethodBindT<StringName const&, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<StringName_const&,StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001072e5;
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
                    /* WARNING: Could not recover jumptable at 0x0010714a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001072e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_00107515;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010735c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00107515:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<StringName,StringName_const&>::validated_call
          (MethodBindTRC<StringName,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
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
      goto LAB_00107592;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_00107592:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
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
      goto LAB_001077dc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_001077dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonProfile> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<SkeletonProfile>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x106ff8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pOVar3 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar5 = local_58 + -0x10;
        *(long *)pOVar5 = *(long *)pOVar5 + -1;
        UNLOCK();
        if (*(long *)pOVar5 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
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
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107aa8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_58;
  if (pOVar5 != local_58) {
    if (pOVar5 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00107a66:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&SkeletonProfile::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_58 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00107a66;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2));
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00107aa8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonProfile> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<SkeletonProfile>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  Object *pOVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x106ff8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar3 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_48 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
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
      goto LAB_00107dbc;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00107d98:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00107d98;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2));
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00107dbc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<SkeletonProfile>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x106ff8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108160;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar6)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_58;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_58);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
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
LAB_00108160:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::ptrcall
          (MethodBindTRC<Ref<SkeletonProfile>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *extraout_RDX;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x106ff8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(void **)pOVar4 = (void *)((long)*(void **)pOVar4 + -1);
        UNLOCK();
        if (*(void **)pOVar4 == (void *)0x0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
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
      goto LAB_00108436;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar3);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00108436;
    *(undefined8 *)param_3 = 0;
    goto LAB_00108479;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00108479;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00108479:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00108436;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00108436:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,StringName_const&>::call
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
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar12 = (long *)(local_60 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108890;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_001088e0;
      pVVar13 = *(Variant **)param_4;
LAB_001088fd:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar7) {
LAB_001088e0:
        uVar8 = 4;
        goto LAB_001088cd;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar14 + -2);
        if (lVar2 <= lVar10) goto LAB_001089c0;
        pVVar13 = pVVar11 + lVar10 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001088fd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
      if (lVar2 <= lVar10) {
LAB_001089c0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC77;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_60);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x15);
    uVar4 = _LC78;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_58);
    (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_58,
                       (Variant *)&local_60);
    if (StringName::configured != '\0') {
      if (local_58 != (char *)0x0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108890;
      }
      if (local_60 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    uVar8 = 3;
LAB_001088cd:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_00108890:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
  bool bVar13;
  long local_78;
  long local_70;
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
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar10 = (long *)(local_70 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00108cb0;
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
      if (in_R8D != 1) goto LAB_00108d00;
LAB_00108cf0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00108d00:
        uVar7 = 4;
        goto LAB_00108ca5;
      }
      if (in_R8D == 1) goto LAB_00108cf0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC78;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar12)((StringName *)&local_70,(Variant *)((long)plVar10 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(StringName *)&local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar13 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar13) &&
       (((local_70 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_68 != (char *)0x0)))) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_00108ca5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00108cb0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<SkeletonProfile> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<SkeletonProfile>const&>::call
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
  long local_50;
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
      local_48 = (Object *)0x106ff8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pOVar5 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar8 = local_48 + -0x10;
        *(long *)pOVar8 = *(long *)pOVar8 + -1;
        UNLOCK();
        if (*(long *)pOVar8 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar11 = (long *)(local_50 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001090e0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_001090d5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_001090e0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00109130;
LAB_00109120:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109130:
      uVar7 = 4;
      goto LAB_001090d5;
    }
    if (in_R8D == 1) goto LAB_00109120;
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
  uVar4 = _LC80;
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
LAB_0010924d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&SkeletonProfile::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010924d;
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
LAB_001090e0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::validated_call
          (MethodBindTRC<Ref<SkeletonProfile>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant **ppVVar1;
  Object *pOVar2;
  Object *pOVar3;
  Variant **ppVVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x106ff8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar4 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      pOVar3 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_50 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109446;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  if (((ulong)pcVar6 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar6 = *(code **)(pcVar6 + (long)param_2 + -1);
  }
  (*pcVar6)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_50);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00109446:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
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
  if (iVar8 != param_1) goto LAB_00109665;
  local_78 = 0;
  local_68 = &_LC24;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109758:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109758;
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
LAB_00109665:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
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
    goto LAB_00109a55;
  }
  local_70 = 0;
  local_68 = &_LC24;
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
LAB_00109b67:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00109b67;
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
LAB_00109a55:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<SkeletonProfile> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonProfile>const&>::~MethodBindT(MethodBindT<Ref<SkeletonProfile>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC(MethodBindTRC<Ref<SkeletonProfile>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMap, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMap,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMap,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


