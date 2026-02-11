
/* CowData<PropertyListHelper*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<PropertyListHelper*>::_copy_on_write(CowData<PropertyListHelper*> *this)

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
  __n = lVar2 * 8;
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



/* PropertyListHelper::clear() [clone .part.0] */

void __thiscall PropertyListHelper::clear(PropertyListHelper *this)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = *(long **)(this + 8);
  (**(code **)(*plVar2 + 0x40))(plVar2);
  Memory::free_static(plVar2,false);
  for (puVar3 = *(undefined8 **)(this + 0x28); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    plVar2 = (long *)puVar3[0xc];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2);
      Memory::free_static(plVar2,false);
      plVar2 = (long *)puVar3[0xd];
      (**(code **)(*plVar2 + 0x40))(plVar2);
      Memory::free_static(plVar2,false);
    }
  }
  if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
    if (uVar1 != 0) {
      lVar6 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x20) + lVar6) != 0) {
          *(int *)(*(long *)(this + 0x20) + lVar6) = 0;
          pvVar4 = *(void **)(*(long *)(this + 0x18) + lVar6 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x48)] != '\0') {
            Variant::_clear_internal();
          }
          if (*(long *)((long)pvVar4 + 0x38) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)((long)pvVar4 + 0x38) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar5 = *(long *)((long)pvVar4 + 0x38);
              *(undefined8 *)((long)pvVar4 + 0x38) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x28) != 0)) {
            StringName::unref();
          }
          if (*(long *)((long)pvVar4 + 0x20) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)((long)pvVar4 + 0x20) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar5 = *(long *)((long)pvVar4 + 0x20);
              *(undefined8 *)((long)pvVar4 + 0x20) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar4 + 0x10) != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)((long)pvVar4 + 0x10) + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar5 = *(long *)((long)pvVar4 + 0x10);
              *(undefined8 *)((long)pvVar4 + 0x10) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this + 0x18) + lVar6 * 2) = 0;
        }
        lVar6 = lVar6 + 4;
      } while (lVar6 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  }
  return;
}



/* PropertyListHelper::_call_setter(MethodBind const*, int, Variant const&) const */

void __thiscall
PropertyListHelper::_call_setter
          (PropertyListHelper *this,MethodBind *param_1,int param_2,Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined4 local_a8;
  undefined8 local_a4;
  Variant *local_98;
  Variant *pVStack_90;
  int local_88 [8];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_2);
  Variant::Variant((Variant *)local_50,param_3);
  local_a8 = 0;
  local_a4 = 0;
  local_98 = (Variant *)local_68;
  pVStack_90 = (Variant *)local_50;
  (**(code **)(*(long *)param_1 + 0x20))
            (local_88,param_1,*(undefined8 *)(this + 0x40),&local_98,2,&local_a8);
  if (Variant::needs_deinit[local_88[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_50[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_50[0]];
  }
  if (cVar1 == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::_call_getter(PropertyListHelper::Property const*, int) const */

Property * PropertyListHelper::_call_getter(Property *param_1,int param_2)

{
  long *plVar1;
  bool *pbVar2;
  long lVar3;
  int in_ECX;
  long in_RDX;
  undefined4 in_register_00000034;
  String *pSVar4;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  Variant *local_60;
  int local_58 [6];
  long local_40;
  
  pSVar4 = (String *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RDX + 0x50) == 0) {
    pbVar2 = *(bool **)(pSVar4 + 0x40);
    local_90 = 0;
    uStack_70 = 1;
    uStack_6c = 0;
    local_78 = 0x101bee;
    uStack_74 = 0;
    String::parse_latin1((StrRange *)&local_90);
    itos((long)&local_a0);
    String::operator+((String *)&local_98,pSVar4);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_80,(String *)&local_88);
    StringName::StringName((StringName *)&local_78,(String *)&local_80,false);
    Object::get((StringName *)param_1,pbVar2);
    if ((StringName::configured != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
      StringName::unref();
    }
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
    lVar3 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
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
  }
  else {
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    Variant::Variant((Variant *)local_58,in_ECX);
    local_60 = (Variant *)local_58;
    (**(code **)(**(long **)(in_RDX + 0x50) + 0x20))
              (param_1,*(long **)(in_RDX + 0x50),*(undefined8 *)(pSVar4 + 0x40),&local_60,1,
               &local_78);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::_call_array_length_getter() const */

int __thiscall PropertyListHelper::_call_array_length_getter(PropertyListHelper *this)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined8 local_34;
  int local_28 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_34 = 0;
  (**(code **)(**(long **)(this + 8) + 0x20))
            ((Variant *)local_28,*(long **)(this + 8),*(undefined8 *)(this + 0x40),0,0,&local_38);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_28);
  if (Variant::needs_deinit[local_28[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::set_prefix(String const&) */

void __thiscall PropertyListHelper::set_prefix(PropertyListHelper *this,String *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
    return;
  }
  return;
}



/* PropertyListHelper::is_initialized() const */

undefined4 __thiscall PropertyListHelper::is_initialized(PropertyListHelper *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x3c) >> 8),*(int *)(this + 0x3c) != 0);
}



/* PropertyListHelper::clear() */

void __thiscall PropertyListHelper::clear(PropertyListHelper *this)

{
  if (*(int *)(this + 0x3c) == 0) {
    return;
  }
  clear(this);
  return;
}



/* PropertyListHelper::get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall PropertyListHelper::get_property_list(PropertyListHelper *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  long *plVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_b0;
  long local_a8;
  char *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  char *local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  uint local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = _call_array_length_getter(this);
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      plVar10 = *(long **)(this + 0x28);
      if (plVar10 != (long *)0x0) {
        do {
          local_88 = (undefined4)plVar10[3];
          local_80 = (char *)0x0;
          if (plVar10[4] != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(plVar10 + 4));
          }
          StringName::StringName((StringName *)&local_78,(StringName *)(plVar10 + 5));
          local_70 = (undefined4)plVar10[6];
          local_68 = 0;
          if (plVar10[7] != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(plVar10 + 7));
          }
          local_60 = *(uint *)(plVar10 + 8);
          if ((local_60 & 0x2000) == 0) {
            _call_getter((Property *)local_58,(int)this);
            cVar4 = Variant::operator==((Variant *)local_58,(Variant *)(plVar10 + 9));
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar4 != '\0') {
              local_60 = local_60 & 0xfffffffd;
            }
          }
          local_a0 = (char *)0x0;
          plVar1 = (long *)(local_80 + -0x10);
          if (local_80 != (char *)0x0) {
            do {
              lVar2 = *plVar1;
              if (lVar2 == 0) goto LAB_0010093a;
              LOCK();
              lVar6 = *plVar1;
              bVar11 = lVar2 == lVar6;
              if (bVar11) {
                *plVar1 = lVar2 + 1;
                lVar6 = lVar2;
              }
              UNLOCK();
            } while (!bVar11);
            if (lVar6 != -1) {
              local_a0 = local_80;
            }
          }
LAB_0010093a:
          local_a8 = 0;
          plVar1 = (long *)(*(long *)this + -0x10);
          if (*(long *)this != 0) {
            do {
              lVar2 = *plVar1;
              if (lVar2 == 0) goto LAB_00100972;
              LOCK();
              lVar6 = *plVar1;
              bVar11 = lVar2 == lVar6;
              if (bVar11) {
                *plVar1 = lVar2 + 1;
                lVar6 = lVar2;
              }
              UNLOCK();
            } while (!bVar11);
            if (lVar6 != -1) {
              local_a8 = *(long *)this;
            }
          }
LAB_00100972:
          local_b0 = 0;
          local_98 = "%s%d/%s";
          local_90 = 7;
          String::parse_latin1((StrRange *)&local_b0);
          vformat<String,int,String>(&local_98,(StrRange *)&local_b0,&local_a8,iVar9,&local_a0);
          pcVar3 = local_80;
          if (local_80 == local_98) {
            if (local_80 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_98 + -0x10,false);
              }
            }
          }
          else {
            if (local_80 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_80 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_80 = (char *)0x0;
                Memory::free_static(pcVar3 + -0x10,false);
              }
            }
            local_80 = local_98;
          }
          lVar2 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar2 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          pcVar3 = local_a0;
          if (local_a0 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          if (*(long *)param_1 == 0) {
            pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_1 = pauVar8;
            *(undefined4 *)pauVar8[1] = 0;
            *pauVar8 = (undefined1  [16])0x0;
          }
          puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
          *puVar7 = 0;
          puVar7[6] = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          puVar7[10] = 6;
          *(undefined8 *)(puVar7 + 0x10) = 0;
          *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
          *puVar7 = local_88;
          if (local_80 != (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_80);
          }
          StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_78);
          puVar7[6] = local_70;
          if (*(long *)(puVar7 + 8) != local_68) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_68);
          }
          lVar6 = local_68;
          puVar7[10] = local_60;
          plVar1 = *(long **)param_1;
          lVar2 = plVar1[1];
          *(undefined8 *)(puVar7 + 0xc) = 0;
          *(long **)(puVar7 + 0x10) = plVar1;
          *(long *)(puVar7 + 0xe) = lVar2;
          if (lVar2 != 0) {
            *(undefined4 **)(lVar2 + 0x30) = puVar7;
          }
          plVar1[1] = (long)puVar7;
          if (*plVar1 == 0) {
            *plVar1 = (long)puVar7;
          }
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_78 != 0)) {
            StringName::unref();
          }
          pcVar3 = local_80;
          if (local_80 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::is_property_valid(String const&, int*) const */

undefined4 __thiscall
PropertyListHelper::is_property_valid(PropertyListHelper *this,String *param_1,int *param_2)

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
  char cVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::rsplit(local_58,SUB81(param_1,0),0x101bee);
  if ((local_50[0] == (String *)0x0) || (*(long *)(local_50[0] + -8) < 2)) {
LAB_00100e80:
    uVar15 = 0;
LAB_00100e83:
    CowData<String>::_unref((CowData<String> *)local_50);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar15;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  cVar12 = String::begins_with(local_50[0]);
  if (cVar12 == '\0') goto LAB_00100e80;
  if (local_50[0] == (String *)0x0) {
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(local_50[0] + -8);
    if (0 < lVar19) {
      String::trim_prefix((String *)&local_60);
      cVar12 = String::is_valid_int();
      lVar19 = local_60;
      if (cVar12 == '\0') {
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
          }
        }
        goto LAB_00100e80;
      }
      if (param_2 != (int *)0x0) {
        iVar13 = String::to_int();
        *param_2 = iVar13;
      }
      lVar19 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar19 + -0x10),false);
        }
      }
      if (local_50[0] == (String *)0x0) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(long *)(local_50[0] + -8);
        if (1 < lVar19) {
          if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
            lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x38) * 8);
            uVar14 = String::hash();
            uVar20 = CONCAT44(0,uVar2);
            lVar16 = *(long *)(this + 0x20);
            uVar17 = 1;
            if (uVar14 != 0) {
              uVar17 = uVar14;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar17 * lVar19;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar20;
            lVar18 = SUB168(auVar3 * auVar7,8);
            uVar14 = *(uint *)(lVar16 + lVar18 * 4);
            iVar13 = SUB164(auVar3 * auVar7,8);
            if (uVar14 != 0) {
              uVar21 = 0;
              do {
                if (uVar14 == uVar17) {
                  uVar15 = String::operator==((String *)
                                              (*(long *)(*(long *)(this + 0x18) + lVar18 * 8) + 0x10
                                              ),local_50[0] + 8);
                  if ((char)uVar15 != '\0') goto LAB_00100e83;
                  lVar16 = *(long *)(this + 0x20);
                }
                uVar21 = uVar21 + 1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar19;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar20;
                lVar18 = SUB168(auVar4 * auVar8,8);
                uVar14 = *(uint *)(lVar16 + lVar18 * 4);
                iVar13 = SUB164(auVar4 * auVar8,8);
              } while ((uVar14 != 0) &&
                      (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar19, auVar9._8_8_ = 0,
                      auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
                      auVar6._0_8_ = (ulong)((uVar2 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar19,
                      auVar10._8_8_ = 0, auVar10._0_8_ = uVar20,
                      uVar21 <= SUB164(auVar6 * auVar10,8)));
            }
          }
          goto LAB_00100e80;
        }
      }
      lVar16 = 1;
      goto LAB_00101010;
    }
  }
  lVar16 = 0;
LAB_00101010:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar19,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* PropertyListHelper::property_can_revert(String const&) const */

void __thiscall PropertyListHelper::property_can_revert(PropertyListHelper *this,String *param_1)

{
  is_property_valid(this,param_1,(int *)0x0);
  return;
}



/* PropertyListHelper::_get_property(String const&, int*) const */

long __thiscall
PropertyListHelper::_get_property(PropertyListHelper *this,String *param_1,int *param_2)

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
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::rsplit(local_58,SUB81(param_1,0),0x101bee);
  if ((local_50[0] != (String *)0x0) && (1 < *(long *)(local_50[0] + -8))) {
    cVar12 = String::begins_with(local_50[0]);
    if (cVar12 != '\0') {
      if (local_50[0] == (String *)0x0) {
        lVar20 = 0;
      }
      else {
        lVar20 = *(long *)(local_50[0] + -8);
        if (0 < lVar20) {
          String::trim_prefix((String *)&local_60);
          cVar12 = String::is_valid_int();
          if (cVar12 != '\0') {
            iVar13 = String::to_int();
            if (-1 < iVar13) {
              iVar14 = _call_array_length_getter(this);
              if (iVar13 < iVar14) {
                *param_2 = iVar13;
                if (local_50[0] == (String *)0x0) {
                  lVar20 = 0;
                }
                else {
                  lVar20 = *(long *)(local_50[0] + -8);
                  if (1 < lVar20) {
                    if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
                      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
                      lVar20 = *(long *)(hash_table_size_primes_inv +
                                        (ulong)*(uint *)(this + 0x38) * 8);
                      uVar15 = String::hash();
                      uVar21 = CONCAT44(0,uVar2);
                      lVar16 = *(long *)(this + 0x20);
                      uVar17 = 1;
                      if (uVar15 != 0) {
                        uVar17 = uVar15;
                      }
                      auVar3._8_8_ = 0;
                      auVar3._0_8_ = (ulong)uVar17 * lVar20;
                      auVar7._8_8_ = 0;
                      auVar7._0_8_ = uVar21;
                      lVar19 = SUB168(auVar3 * auVar7,8);
                      uVar15 = *(uint *)(lVar16 + lVar19 * 4);
                      uVar18 = SUB164(auVar3 * auVar7,8);
                      if (uVar15 != 0) {
                        uVar22 = 0;
                        do {
                          if (uVar17 == uVar15) {
                            cVar12 = String::operator==((String *)
                                                        (*(long *)(*(long *)(this + 0x18) +
                                                                  lVar19 * 8) + 0x10),
                                                        local_50[0] + 8);
                            if (cVar12 != '\0') {
                              lVar20 = *(long *)(*(long *)(this + 0x18) + (ulong)uVar18 * 8) + 0x18;
                              goto LAB_00101126;
                            }
                            lVar16 = *(long *)(this + 0x20);
                          }
                          uVar22 = uVar22 + 1;
                          auVar4._8_8_ = 0;
                          auVar4._0_8_ = (ulong)(uVar18 + 1) * lVar20;
                          auVar8._8_8_ = 0;
                          auVar8._0_8_ = uVar21;
                          lVar19 = SUB168(auVar4 * auVar8,8);
                          uVar15 = *(uint *)(lVar16 + lVar19 * 4);
                          uVar18 = SUB164(auVar4 * auVar8,8);
                        } while ((uVar15 != 0) &&
                                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar20,
                                auVar9._8_8_ = 0, auVar9._0_8_ = uVar21, auVar6._8_8_ = 0,
                                auVar6._0_8_ = (ulong)((uVar2 + uVar18) - SUB164(auVar5 * auVar9,8))
                                               * lVar20, auVar10._8_8_ = 0, auVar10._0_8_ = uVar21,
                                uVar22 <= SUB164(auVar6 * auVar10,8)));
                      }
                    }
                    goto LAB_00101124;
                  }
                }
                lVar16 = 1;
                goto LAB_00101300;
              }
            }
          }
LAB_00101124:
          lVar20 = 0;
LAB_00101126:
          lVar16 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar16 + -0x10),false);
            }
          }
          goto LAB_00101140;
        }
      }
      lVar16 = 0;
LAB_00101300:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar20,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
  }
  lVar20 = 0;
LAB_00101140:
  CowData<String>::_unref((CowData<String> *)local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::property_get_value(String const&, Variant&) const */

undefined8 __thiscall
PropertyListHelper::property_get_value(PropertyListHelper *this,String *param_1,Variant *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_3c;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = _get_property(this,param_1,&local_3c);
  uVar2 = 0;
  if (lVar1 != 0) {
    _call_getter((Property *)local_38,(int)this);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_38[0];
    uVar2 = 1;
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::property_set_value(String const&, Variant const&) const */

bool __thiscall
PropertyListHelper::property_set_value(PropertyListHelper *this,String *param_1,Variant *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = _get_property(this,param_1,&local_24);
  if (lVar1 != 0) {
    _call_setter(this,*(MethodBind **)(lVar1 + 0x48),local_24,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::property_get_revert(String const&, Variant&) const */

bool __thiscall
PropertyListHelper::property_get_revert(PropertyListHelper *this,String *param_1,Variant *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = _get_property(this,param_1,&local_14);
  if (lVar1 != 0) {
    Variant::operator=(param_2,(Variant *)(lVar1 + 0x30));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::register_property(PropertyInfo const&, Variant const&) */

void __thiscall
PropertyListHelper::register_property
          (PropertyListHelper *this,PropertyInfo *param_1,Variant *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined1 local_90 [16];
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  int local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined4 *)param_1;
  local_90 = (undefined1  [16])0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_68[0] = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_90,(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(local_90 + 8),(StringName *)(param_1 + 0x10));
  local_80 = *(undefined4 *)(param_1 + 0x18);
  if (local_78 != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(param_1 + 0x20));
  }
  local_70 = *(undefined4 *)(param_1 + 0x28);
  Variant::operator=((Variant *)local_68,param_2);
  puVar6 = (undefined4 *)
           HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
           ::operator[]((HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
                         *)(this + 0x10),(String *)(param_1 + 8));
  *puVar6 = uVar2;
  if (*(long *)(puVar6 + 2) != local_90._0_8_) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)local_90);
  }
  StringName::operator=((StringName *)(puVar6 + 4),(StringName *)(local_90 + 8));
  puVar6[6] = local_80;
  if (*(long *)(puVar6 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_78);
  }
  puVar6[10] = local_70;
  Variant::operator=((Variant *)(puVar6 + 0xc),(Variant *)local_68);
  *(undefined8 *)(puVar6 + 0x12) = local_50._0_8_;
  *(undefined8 *)(puVar6 + 0x14) = local_50._8_8_;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar5 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_90._8_8_ != 0)) {
    StringName::unref();
  }
  uVar4 = local_90._0_8_;
  if (local_90._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_90._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_90._8_8_;
      local_90 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar4 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::setup_for_instance(PropertyListHelper const&, Object*) */

void __thiscall
PropertyListHelper::setup_for_instance
          (PropertyListHelper *this,PropertyListHelper *param_1,Object *param_2)

{
  HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
  *this_00;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  String local_48 [8];
  long local_40;
  ulong uVar4;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  this_00 = (HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
             *)(this + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  if (this_00 !=
      (HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
       *)(param_1 + 0x10)) {
    uVar7 = *(uint *)(this + 0x38);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar7 * 4);
    if ((*(int *)(this + 0x3c) != 0) && (*(long *)(this + 0x18) != 0)) {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x20) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 0x18) + lVar6 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar1 + 0x38) != 0) {
              LOCK();
              plVar5 = (long *)(*(long *)((long)pvVar1 + 0x38) + -0x10);
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                lVar2 = *(long *)((long)pvVar1 + 0x38);
                *(undefined8 *)((long)pvVar1 + 0x38) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar1 + 0x20) != 0) {
              LOCK();
              plVar5 = (long *)(*(long *)((long)pvVar1 + 0x20) + -0x10);
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                lVar2 = *(long *)((long)pvVar1 + 0x20);
                *(undefined8 *)((long)pvVar1 + 0x20) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar1 + 0x10) != 0) {
              LOCK();
              plVar5 = (long *)(*(long *)((long)pvVar1 + 0x10) + -0x10);
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                lVar2 = *(long *)((long)pvVar1 + 0x10);
                *(undefined8 *)((long)pvVar1 + 0x10) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 0x18) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar3 * 4);
        uVar7 = *(uint *)(this + 0x38);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar7 * 4);
      }
      *(undefined4 *)(this + 0x3c) = 0;
      *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
    }
    if (uVar3 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x38) * 4)) {
      if (uVar7 != 0x1c) {
        uVar4 = (ulong)uVar7;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x38) * 4) <=
              *(uint *)(hash_table_size_primes + uVar4 * 4)) {
            if (uVar3 != uVar7) {
              if (*(long *)(this + 0x18) == 0) {
                *(uint *)(this + 0x38) = uVar3;
              }
              else {
                HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
                ::_resize_and_rehash(this_00,uVar3);
              }
            }
            goto LAB_001017b2;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_001017b2:
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x28), plVar5 != (long *)0x0)) {
      do {
        HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
        ::insert(local_48,(Property *)this_00,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  *(Object **)(this + 0x40) = param_2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::clear_base_helpers() */

void PropertyListHelper::clear_base_helpers(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  CowData<PropertyListHelper*>::_copy_on_write((CowData<PropertyListHelper*> *)(base_helpers + 8));
  puVar1 = (undefined8 *)base_helpers._8_8_;
  CowData<PropertyListHelper*>::_copy_on_write((CowData<PropertyListHelper*> *)(base_helpers + 8));
  puVar2 = (undefined8 *)base_helpers._8_8_;
  if (base_helpers._8_8_ != 0) {
    puVar2 = (undefined8 *)(base_helpers._8_8_ + *(long *)(base_helpers._8_8_ + -8) * 8);
  }
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    while (*(int *)((PropertyListHelper *)*puVar1 + 0x3c) == 0) {
      puVar1 = puVar1 + 1;
      if (puVar2 == puVar1) goto LAB_00101a39;
    }
    clear((PropertyListHelper *)*puVar1);
  }
LAB_00101a39:
  CowData<PropertyListHelper*>::resize<false>((CowData<PropertyListHelper*> *)(base_helpers + 8),0);
  return;
}



/* PropertyListHelper::register_base_helper(PropertyListHelper*) */

void PropertyListHelper::register_base_helper(PropertyListHelper *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (base_helpers._8_8_ == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(base_helpers._8_8_ + -8) + 1;
  }
  iVar1 = CowData<PropertyListHelper*>::resize<false>
                    ((CowData<PropertyListHelper*> *)(base_helpers + 8),lVar2);
  if (iVar1 == 0) {
    if (base_helpers._8_8_ == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(base_helpers._8_8_ + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<PropertyListHelper*>::_copy_on_write
                  ((CowData<PropertyListHelper*> *)(base_helpers + 8));
        *(PropertyListHelper **)(base_helpers._8_8_ + lVar3 * 8) = param_1;
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



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* Vector<PropertyListHelper*>::~Vector() */

void __thiscall Vector<PropertyListHelper*>::~Vector(Vector<PropertyListHelper*> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* CowData<PropertyListHelper*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<PropertyListHelper*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00101e10) */
/* WARNING: Removing unreachable block (ram,0x00101f40) */
/* WARNING: Removing unreachable block (ram,0x001020b8) */
/* WARNING: Removing unreachable block (ram,0x00101f4c) */
/* WARNING: Removing unreachable block (ram,0x00101f56) */
/* WARNING: Removing unreachable block (ram,0x0010209a) */
/* WARNING: Removing unreachable block (ram,0x00101f62) */
/* WARNING: Removing unreachable block (ram,0x00101f6c) */
/* WARNING: Removing unreachable block (ram,0x0010207c) */
/* WARNING: Removing unreachable block (ram,0x00101f78) */
/* WARNING: Removing unreachable block (ram,0x00101f82) */
/* WARNING: Removing unreachable block (ram,0x0010205e) */
/* WARNING: Removing unreachable block (ram,0x00101f8e) */
/* WARNING: Removing unreachable block (ram,0x00101f98) */
/* WARNING: Removing unreachable block (ram,0x00102040) */
/* WARNING: Removing unreachable block (ram,0x00101fa4) */
/* WARNING: Removing unreachable block (ram,0x00101fae) */
/* WARNING: Removing unreachable block (ram,0x00102022) */
/* WARNING: Removing unreachable block (ram,0x00101fb6) */
/* WARNING: Removing unreachable block (ram,0x00101fc0) */
/* WARNING: Removing unreachable block (ram,0x00102007) */
/* WARNING: Removing unreachable block (ram,0x00101fc8) */
/* WARNING: Removing unreachable block (ram,0x00101fdd) */
/* WARNING: Removing unreachable block (ram,0x00101fe9) */
/* String vformat<String, int, String>(String const&, String const, int const, String const) */

undefined8 *
vformat<String,int,String>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,String *param_5)

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



/* HashMap<String, PropertyListHelper::Property, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   PropertyListHelper::Property> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
::_resize_and_rehash
          (HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
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
/* HashMap<String, PropertyListHelper::Property, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   PropertyListHelper::Property> > >::operator[](String const&) */

undefined8 * __thiscall
HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
::operator[](HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
             *this,String *param_1)

{
  long *plVar1;
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
  undefined1 auVar27 [16];
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined8 uVar35;
  void *__s_00;
  ulong uVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  ulong uVar43;
  undefined8 *puVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  long in_FS_OFFSET;
  uint local_148;
  undefined1 local_110 [16];
  undefined4 local_100;
  long local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  int aiStack_e8 [3];
  undefined1 auStack_dc [12];
  undefined1 local_d0 [16];
  undefined1 local_b8 [16];
  long local_a8;
  undefined4 local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  undefined4 local_78;
  int local_70 [6];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar34 = *(long *)(this + 8);
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar34 == 0) {
LAB_00102b7b:
    local_ec = 0;
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    local_d0 = (undefined1  [16])0x0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_110 = (undefined1  [16])0x0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 6;
    aiStack_e8[2] = 0;
    auStack_dc = SUB1612((undefined1  [16])0x0,4);
    if (lVar34 != 0) goto LAB_00102535;
    uVar40 = (ulong)uVar41;
    uVar36 = uVar40 * 4;
    uVar43 = uVar40 * 8;
    uVar35 = Memory::alloc_static(uVar36,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar41 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar36))) {
        uVar36 = 0;
        do {
          *(undefined4 *)((long)__s + uVar36 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar36 * 8) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar40 != uVar36);
      }
      else {
        memset(__s,0,uVar36);
        memset(__s_00,0,uVar43);
      }
      goto LAB_00102535;
    }
    iVar37 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00102735;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00102545;
LAB_00102757:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar32 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00102aad;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar30 = String::hash();
      uVar36 = CONCAT44(0,uVar41);
      lVar38 = *(long *)(this + 0x10);
      uVar31 = 1;
      if (uVar30 != 0) {
        uVar31 = uVar30;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar31 * lVar42;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar36;
      lVar39 = SUB168(auVar7 * auVar19,8);
      uVar30 = *(uint *)(lVar38 + lVar39 * 4);
      uVar29 = SUB164(auVar7 * auVar19,8);
      if (uVar30 == 0) {
        lVar34 = *(long *)(this + 8);
      }
      else {
        lVar34 = *(long *)(this + 8);
        uVar46 = 0;
        do {
          if (uVar31 == uVar30) {
            cVar28 = String::operator==((String *)(*(long *)(lVar34 + lVar39 * 8) + 0x10),param_1);
            if (cVar28 != '\0') {
              puVar32 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar29 * 8) + 0x18);
              goto LAB_00102b36;
            }
            lVar34 = *(long *)(this + 8);
            lVar38 = *(long *)(this + 0x10);
          }
          uVar46 = uVar46 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar29 + 1) * lVar42;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar36;
          lVar39 = SUB168(auVar8 * auVar20,8);
          uVar30 = *(uint *)(lVar38 + lVar39 * 4);
          uVar29 = SUB164(auVar8 * auVar20,8);
        } while ((uVar30 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar30 * lVar42, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar36, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar29 + uVar41) - SUB164(auVar9 * auVar21,8)) * lVar42,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar36, uVar46 <= SUB164(auVar10 * auVar22,8)));
      }
      goto LAB_00102b7b;
    }
    local_ec = 0;
    aiStack_e8[0] = 0;
    aiStack_e8[1] = 0;
    local_d0 = (undefined1  [16])0x0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 6;
    local_110 = (undefined1  [16])0x0;
    aiStack_e8[2] = 0;
    auStack_dc = SUB1612((undefined1  [16])0x0,4);
LAB_00102535:
    iVar37 = *(int *)(this + 0x2c);
    uVar40 = (ulong)uVar41;
    if (iVar37 != 0) {
LAB_00102545:
      uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar29 = String::hash();
      uVar36 = CONCAT44(0,uVar31);
      lVar42 = *(long *)(this + 0x10);
      uVar30 = 1;
      if (uVar29 != 0) {
        uVar30 = uVar29;
      }
      uVar45 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar30 * lVar34;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar36;
      lVar38 = SUB168(auVar3 * auVar15,8);
      uVar29 = *(uint *)(lVar42 + lVar38 * 4);
      uVar46 = SUB164(auVar3 * auVar15,8);
      if (uVar29 != 0) {
        do {
          if (uVar30 == uVar29) {
            cVar28 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar38 * 8) + 0x10),param_1
                                       );
            if (cVar28 != '\0') {
              lVar34 = *(long *)(*(long *)(this + 8) + (ulong)uVar46 * 8);
              *(undefined4 *)(lVar34 + 0x18) = 0;
              if (*(long *)(lVar34 + 0x20) != local_110._0_8_) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar34 + 0x20),(CowData *)local_110);
              }
              StringName::operator=((StringName *)(lVar34 + 0x28),(StringName *)(local_110 + 8));
              *(undefined4 *)(lVar34 + 0x30) = local_100;
              if (*(long *)(lVar34 + 0x38) != local_f8) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar34 + 0x38),(CowData *)&local_f8);
              }
              *(undefined4 *)(lVar34 + 0x40) = local_f0;
              Variant::operator=((Variant *)(lVar34 + 0x48),(Variant *)aiStack_e8);
              puVar32 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar46 * 8);
              *(undefined8 *)(lVar34 + 0x60) = local_d0._0_8_;
              *(undefined8 *)(lVar34 + 0x68) = local_d0._8_8_;
              goto LAB_00102aad;
            }
            lVar42 = *(long *)(this + 0x10);
          }
          uVar45 = uVar45 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar46 + 1) * lVar34;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar36;
          lVar38 = SUB168(auVar4 * auVar16,8);
          uVar29 = *(uint *)(lVar42 + lVar38 * 4);
          uVar46 = SUB164(auVar4 * auVar16,8);
        } while ((uVar29 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar29 * lVar34, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar36, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar31 + uVar46) - SUB164(auVar5 * auVar17,8)) * lVar34,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar36, uVar45 <= SUB164(auVar6 * auVar18,8)));
      }
      iVar37 = *(int *)(this + 0x2c);
      uVar40 = (ulong)uVar41;
    }
LAB_00102735:
    if ((float)uVar40 * __LC16 < (float)(iVar37 + 1)) goto LAB_00102757;
  }
  local_a8 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_1);
  }
  local_98 = 0;
  local_a0 = 0;
  if (local_110._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)local_110);
  }
  StringName::StringName((StringName *)&local_90,(StringName *)(local_110 + 8));
  local_80 = 0;
  local_88 = local_100;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_f8);
  }
  local_78 = local_f0;
  Variant::Variant((Variant *)local_70,(Variant *)aiStack_e8);
  local_58 = local_d0._0_8_;
  uStack_50 = local_d0._8_8_;
  puVar32 = (undefined8 *)operator_new(0x70,"");
  puVar32[2] = 0;
  *puVar32 = local_b8._0_8_;
  puVar32[1] = local_b8._8_8_;
  if (local_a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar32 + 2),(CowData *)&local_a8);
  }
  puVar32[4] = 0;
  *(undefined4 *)(puVar32 + 3) = local_a0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar32 + 4),(CowData *)&local_98);
  }
  StringName::StringName((StringName *)(puVar32 + 5),(StringName *)&local_90);
  puVar32[7] = 0;
  *(undefined4 *)(puVar32 + 6) = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar32 + 7),(CowData *)&local_80);
  }
  *(undefined4 *)(puVar32 + 8) = local_78;
  Variant::Variant((Variant *)(puVar32 + 9),(Variant *)local_70);
  puVar32[0xc] = local_58;
  puVar32[0xd] = uStack_50;
  if (Variant::needs_deinit[local_70[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar34 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar34 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  lVar34 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar34 + -0x10),false);
    }
  }
  lVar34 = local_a8;
  if (local_a8 == 0) {
LAB_0010299b:
    puVar33 = *(undefined8 **)(this + 0x20);
    if (puVar33 != (undefined8 *)0x0) goto LAB_001029a9;
LAB_00102c8d:
    *(undefined8 **)(this + 0x18) = puVar32;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010299b;
    local_a8 = 0;
    Memory::free_static((void *)(lVar34 + -0x10),false);
    puVar33 = *(undefined8 **)(this + 0x20);
    if (puVar33 == (undefined8 *)0x0) goto LAB_00102c8d;
LAB_001029a9:
    *puVar33 = puVar32;
    puVar32[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar32;
  uVar31 = String::hash();
  lVar34 = *(long *)(this + 0x10);
  uVar41 = 1;
  if (uVar31 != 0) {
    uVar41 = uVar31;
  }
  uVar43 = (ulong)uVar41;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar36 = CONCAT44(0,uVar31);
  lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar43 * lVar42;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar36;
  lVar39 = SUB168(auVar11 * auVar23,8);
  lVar38 = *(long *)(this + 8);
  puVar47 = (uint *)(lVar34 + lVar39 * 4);
  iVar37 = SUB164(auVar11 * auVar23,8);
  uVar30 = *puVar47;
  puVar33 = puVar32;
  if (uVar30 != 0) {
    uVar29 = 0;
    puVar44 = puVar32;
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar30 * lVar42;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar36;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((iVar37 + uVar31) - SUB164(auVar12 * auVar24,8)) * lVar42;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar36;
      local_148 = SUB164(auVar13 * auVar25,8);
      puVar33 = puVar44;
      if (local_148 < uVar29) {
        *puVar47 = (uint)uVar43;
        uVar43 = (ulong)uVar30;
        puVar2 = (undefined8 *)(lVar38 + lVar39 * 8);
        puVar33 = (undefined8 *)*puVar2;
        *puVar2 = puVar44;
        uVar29 = local_148;
      }
      uVar41 = (uint)uVar43;
      uVar29 = uVar29 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar37 + 1) * lVar42;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar36;
      lVar39 = SUB168(auVar14 * auVar26,8);
      puVar47 = (uint *)(lVar34 + lVar39 * 4);
      iVar37 = SUB164(auVar14 * auVar26,8);
      uVar30 = *puVar47;
      puVar44 = puVar33;
    } while (uVar30 != 0);
  }
  *(undefined8 **)(lVar38 + lVar39 * 8) = puVar33;
  *puVar47 = uVar41;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00102aad:
  puVar32 = puVar32 + 3;
  if (Variant::needs_deinit[aiStack_e8[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar34 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar1 = (long *)(local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar34 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110._8_8_ != 0)) {
    StringName::unref();
  }
  uVar35 = local_110._0_8_;
  if (local_110._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_110._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = local_110._8_8_;
      local_110 = auVar27 << 0x40;
      Memory::free_static((void *)(uVar35 + -0x10),false);
    }
  }
LAB_00102b36:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar32;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, PropertyListHelper::Property, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   PropertyListHelper::Property> > >::insert(String const&, PropertyListHelper::Property const&,
   bool) */

String * HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
         ::insert(String *param_1,Property *param_2,bool param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
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
  char cVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  void *__s_00;
  ulong uVar26;
  undefined4 *in_RCX;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  undefined7 in_register_00000011;
  String *pSVar31;
  long lVar32;
  long lVar33;
  char in_R8B;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  uint local_f8;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  undefined4 local_78;
  int local_70 [6];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pSVar31 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar37 = (ulong)uVar27;
    uVar26 = uVar37 * 4;
    uVar25 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    uVar35 = uVar37 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar27 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar37 != uVar26);
      }
      else {
        memset(__s,0,uVar26);
        memset(__s_00,0,uVar35);
      }
      goto LAB_00102e96;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00102ea9;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00103240;
LAB_00102ecb:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      puVar23 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001031e7;
    }
    _resize_and_rehash((HashMap<String,PropertyListHelper::Property,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,PropertyListHelper::Property>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00102e96:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_00103240:
      uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar34 = String::hash();
      uVar26 = CONCAT44(0,uVar22);
      lVar36 = *(long *)(param_2 + 0x10);
      uVar29 = 1;
      if (uVar34 != 0) {
        uVar29 = uVar34;
      }
      uVar38 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar29 * lVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar26;
      lVar33 = SUB168(auVar9 * auVar17,8);
      uVar34 = *(uint *)(lVar36 + lVar33 * 4);
      uVar30 = SUB164(auVar9 * auVar17,8);
      if (uVar34 != 0) {
        do {
          if (uVar29 == uVar34) {
            cVar21 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar33 * 8) + 0x10),
                                        pSVar31);
            if (cVar21 != '\0') {
              lVar4 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar30 * 8);
              *(undefined4 *)(lVar4 + 0x18) = *in_RCX;
              if (*(long *)(lVar4 + 0x20) != *(long *)(in_RCX + 2)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar4 + 0x20),(CowData *)(in_RCX + 2))
                ;
              }
              StringName::operator=((StringName *)(lVar4 + 0x28),(StringName *)(in_RCX + 4));
              *(undefined4 *)(lVar4 + 0x30) = in_RCX[6];
              if (*(long *)(lVar4 + 0x38) != *(long *)(in_RCX + 8)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar4 + 0x38),(CowData *)(in_RCX + 8))
                ;
              }
              *(undefined4 *)(lVar4 + 0x40) = in_RCX[10];
              Variant::operator=((Variant *)(lVar4 + 0x48),(Variant *)(in_RCX + 0xc));
              *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(in_RCX + 0x12);
              *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(in_RCX + 0x14);
              puVar23 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar30 * 8);
              goto LAB_001031e7;
            }
            lVar36 = *(long *)(param_2 + 0x10);
          }
          uVar38 = uVar38 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar30 + 1) * lVar4;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar26;
          lVar33 = SUB168(auVar10 * auVar18,8);
          uVar34 = *(uint *)(lVar36 + lVar33 * 4);
          uVar30 = SUB164(auVar10 * auVar18,8);
        } while ((uVar34 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar34 * lVar4, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar26, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar22 + uVar30) - SUB164(auVar11 * auVar19,8)) * lVar4,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar26, uVar38 <= SUB164(auVar12 * auVar20,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_00102ea9:
    if ((float)uVar27 * __LC16 < (float)(iVar28 + 1)) goto LAB_00102ecb;
  }
  local_a8 = 0;
  if (*(long *)pSVar31 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)pSVar31);
  }
  local_a0 = *in_RCX;
  local_98 = 0;
  if (*(long *)(in_RCX + 2) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(in_RCX + 2));
  }
  StringName::StringName((StringName *)&local_90,(StringName *)(in_RCX + 4));
  local_88 = in_RCX[6];
  local_80 = 0;
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(in_RCX + 8));
  }
  local_78 = in_RCX[10];
  Variant::Variant((Variant *)local_70,(Variant *)(in_RCX + 0xc));
  local_58 = *(undefined8 *)(in_RCX + 0x12);
  uStack_50 = *(undefined8 *)(in_RCX + 0x14);
  puVar23 = (undefined8 *)operator_new(0x70,"");
  puVar23[2] = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  if (local_a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar23 + 2),(CowData *)&local_a8);
  }
  puVar23[4] = 0;
  *(undefined4 *)(puVar23 + 3) = local_a0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar23 + 4),(CowData *)&local_98);
  }
  StringName::StringName((StringName *)(puVar23 + 5),(StringName *)&local_90);
  puVar23[7] = 0;
  *(undefined4 *)(puVar23 + 6) = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar23 + 7),(CowData *)&local_80);
  }
  *(undefined4 *)(puVar23 + 8) = local_78;
  Variant::Variant((Variant *)(puVar23 + 9),(Variant *)local_70);
  cVar21 = Variant::needs_deinit[local_70[0]];
  puVar23[0xc] = local_58;
  puVar23[0xd] = uStack_50;
  if (cVar21 != '\0') {
    Variant::_clear_internal();
  }
  lVar4 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  lVar4 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_a8;
  if (local_a8 == 0) {
LAB_001030c0:
    puVar24 = *(undefined8 **)(param_2 + 0x20);
    if (puVar24 != (undefined8 *)0x0) goto LAB_001030d2;
LAB_0010339b:
    *(undefined8 **)(param_2 + 0x18) = puVar23;
    *(undefined8 **)(param_2 + 0x20) = puVar23;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001030c0;
    local_a8 = 0;
    Memory::free_static((void *)(lVar4 + -0x10),false);
    puVar24 = *(undefined8 **)(param_2 + 0x20);
    if (puVar24 == (undefined8 *)0x0) goto LAB_0010339b;
LAB_001030d2:
    if (in_R8B == '\0') {
      *puVar24 = puVar23;
      puVar23[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = puVar23;
    }
    else {
      *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = puVar23;
      *puVar23 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 **)(param_2 + 0x18) = puVar23;
    }
  }
  uVar22 = String::hash();
  uVar27 = 1;
  if (uVar22 != 0) {
    uVar27 = uVar22;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  uVar34 = 0;
  uVar26 = (ulong)uVar27;
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar35 = CONCAT44(0,uVar22);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar26 * lVar36;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar35;
  lVar32 = SUB168(auVar5 * auVar13,8);
  lVar33 = *(long *)(param_2 + 8);
  puVar3 = (uint *)(lVar4 + lVar32 * 4);
  iVar28 = SUB164(auVar5 * auVar13,8);
  uVar29 = *puVar3;
  puVar24 = puVar23;
  while (uVar29 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar29 * lVar36;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar35;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)((iVar28 + uVar22) - SUB164(auVar6 * auVar14,8)) * lVar36;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar35;
    local_f8 = SUB164(auVar7 * auVar15,8);
    puVar39 = puVar24;
    if (local_f8 < uVar34) {
      *puVar3 = (uint)uVar26;
      uVar26 = (ulong)uVar29;
      puVar2 = (undefined8 *)(lVar33 + lVar32 * 8);
      puVar39 = (undefined8 *)*puVar2;
      *puVar2 = puVar24;
      uVar34 = local_f8;
    }
    uVar27 = (uint)uVar26;
    uVar34 = uVar34 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar28 + 1) * lVar36;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar35;
    lVar32 = SUB168(auVar8 * auVar16,8);
    puVar3 = (uint *)(lVar4 + lVar32 * 4);
    iVar28 = SUB164(auVar8 * auVar16,8);
    puVar24 = puVar39;
    uVar29 = *puVar3;
  }
  *(undefined8 **)(lVar33 + lVar32 * 8) = puVar24;
  *puVar3 = uVar27;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001031e7:
  *(undefined8 **)param_1 = puVar23;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<PropertyListHelper*>::_realloc(long) */

undefined8 __thiscall
CowData<PropertyListHelper*>::_realloc(CowData<PropertyListHelper*> *this,long param_1)

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
/* Error CowData<PropertyListHelper*>::resize<false>(long) */

undefined8 __thiscall
CowData<PropertyListHelper*>::resize<false>(CowData<PropertyListHelper*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00103970:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00103970;
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
        goto LAB_00103881;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00103881:
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



/* PropertyListHelper::base_helpers */

void PropertyListHelper::_GLOBAL__sub_I_base_helpers(void)

{
  base_helpers._8_8_ = 0;
  __cxa_atexit(Vector<PropertyListHelper*>::~Vector,base_helpers,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Vector<PropertyListHelper*>::~Vector() */

void __thiscall Vector<PropertyListHelper*>::~Vector(Vector<PropertyListHelper*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


