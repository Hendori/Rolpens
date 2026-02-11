
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



/* MethodBind::get_argument_info(int) const */

undefined4 * MethodBind::get_argument_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int in_EDX;
  long lVar5;
  long *in_RSI;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  long local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((in_EDX < 0) || (*(int *)((long)in_RSI + 0x34) <= in_EDX)) {
    _err_print_index_error
              ("get_argument_info","core/object/method_bind.cpp",0x32,(long)in_EDX,
               (long)*(int *)((long)in_RSI + 0x34),"p_argument","get_argument_count()","",false,
               false);
    *puVar6 = 0;
    puVar6[6] = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = 6;
    *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
    goto LAB_00100199;
  }
  (**(code **)(*in_RSI + 8))(local_58);
  lVar5 = local_50;
  if ((local_50 == 0) || (*(uint *)(local_50 + -8) < 2)) {
    lVar2 = in_RSI[10];
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= (long)in_EDX)) {
      itos((long)&local_68);
      operator+((char *)&local_70,(String *)"_unnamed_arg");
      lVar5 = local_70;
      if (local_50 == local_70) {
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
      }
      else if (local_50 == 0) {
        local_50 = local_70;
      }
      else {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        bVar7 = true;
        if (*plVar1 == 0) goto LAB_001002f8;
        local_50 = local_70;
      }
LAB_00100214:
      pcVar3 = local_68;
      lVar5 = local_50;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
          lVar5 = local_50;
        }
      }
    }
    else {
      lVar2 = *(long *)(lVar2 + (long)in_EDX * 8);
      if (lVar2 == 0) {
        if (local_50 == 0) goto LAB_0010016e;
        local_70 = 0;
LAB_0010014f:
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        bVar7 = *plVar1 != 0;
        if (*plVar1 == 0) {
LAB_001002f8:
          lVar5 = local_50;
          local_50 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
          local_50 = local_70;
          lVar5 = local_70;
          if (!bVar7) goto LAB_0010016e;
          goto LAB_00100214;
        }
      }
      else {
        pcVar3 = *(char **)(lVar2 + 8);
        local_70 = 0;
        if (pcVar3 != (char *)0x0) {
          local_60 = strlen(pcVar3);
          local_68 = pcVar3;
          String::parse_latin1((StrRange *)&local_70);
          if (local_50 == local_70) goto LAB_001002c0;
          goto joined_r0x001003f3;
        }
        plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
        if (*(long *)(lVar2 + 0x10) == 0) {
          if (local_50 != 0) goto LAB_0010014f;
          goto LAB_0010016e;
        }
        do {
          lVar5 = *plVar1;
          if (lVar5 == 0) goto LAB_001002a8;
          LOCK();
          lVar4 = *plVar1;
          bVar7 = lVar5 == lVar4;
          if (bVar7) {
            *plVar1 = lVar5 + 1;
            lVar4 = lVar5;
          }
          UNLOCK();
        } while (!bVar7);
        if (lVar4 == -1) {
LAB_001002a8:
          if (local_50 == 0) goto LAB_001002c0;
        }
        else {
          local_70 = *(long *)(lVar2 + 0x10);
          if (local_70 == local_50) {
LAB_001002c0:
            lVar2 = local_70;
            lVar5 = 0;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              lVar5 = local_50;
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
                lVar5 = local_50;
              }
            }
            goto LAB_0010016e;
          }
        }
joined_r0x001003f3:
        if (local_50 != 0) goto LAB_0010014f;
      }
      local_50 = local_70;
      lVar5 = local_70;
    }
  }
LAB_0010016e:
  *puVar6 = local_58[0];
  *(long *)(puVar6 + 2) = lVar5;
  *(undefined8 *)(puVar6 + 4) = local_48;
  puVar6[6] = local_40;
  *(undefined8 *)(puVar6 + 8) = local_38;
  puVar6[10] = local_30;
LAB_00100199:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind::get_return_info() const */

void MethodBind::get_return_info(void)

{
  long lVar1;
  long *in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 8))(in_RDI,in_RSI,0xffffffff);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::_set_const(bool) */

void __thiscall MethodBind::_set_const(MethodBind *this,bool param_1)

{
  this[0x39] = (MethodBind)param_1;
  return;
}



/* MethodBind::_set_static(bool) */

void __thiscall MethodBind::_set_static(MethodBind *this,bool param_1)

{
  this[0x38] = (MethodBind)param_1;
  return;
}



/* MethodBind::_set_returns(bool) */

void __thiscall MethodBind::_set_returns(MethodBind *this,bool param_1)

{
  this[0x3a] = (MethodBind)param_1;
  return;
}



/* MethodBind::get_name() const */

void MethodBind::get_name(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x10));
  return;
}



/* MethodBind::set_name(StringName const&) */

void __thiscall MethodBind::set_name(MethodBind *this,StringName *param_1)

{
  StringName::operator=((StringName *)(this + 0x10),param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MethodBind::_generate_argument_types(int) */

void __thiscall MethodBind::_generate_argument_types(MethodBind *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = (long)(param_1 + 1);
  *(int *)(this + 0x34) = param_1;
  if (lVar4 == 0) {
    (*(code *)**(undefined8 **)this)(this,0xffffffff);
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar3 = (undefined4 *)Memory::alloc_static(lVar4 * 4,true);
  if (puVar3 != (undefined4 *)0x0) {
    *(long *)(puVar3 + -2) = lVar4;
    uVar2 = (*(code *)**(undefined8 **)this)(this,0xffffffff);
    *puVar3 = uVar2;
    if (0 < param_1) {
      uVar5 = 0;
      do {
        uVar2 = (*(code *)**(undefined8 **)this)(this,uVar5 & 0xffffffff);
        puVar3[uVar5 + 1] = uVar2;
        uVar5 = uVar5 + 1;
      } while ((long)param_1 != uVar5);
    }
    *(undefined4 **)(this + 0x40) = puVar3;
    return;
  }
  _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,0)
  ;
  (*(code *)**(undefined8 **)this)(this,0xffffffff);
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MethodBind::MethodBind() */

void __thiscall MethodBind::MethodBind(MethodBind *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined ***)this = &PTR___cxa_pure_virtual_001011c0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  iVar1 = MethodBind()::last_id + 1;
  *(int *)(this + 8) = MethodBind()::last_id;
  MethodBind()::last_id = iVar1;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return;
}



/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */

void __thiscall CowData<Variant>::_ref(CowData<Variant> *this,CowData *param_1)

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



/* MethodBind::set_default_arguments(Vector<Variant> const&) */

void __thiscall MethodBind::set_default_arguments(MethodBind *this,Vector *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(this + 0x28) != lVar2) {
    CowData<Variant>::_ref((CowData<Variant> *)(this + 0x28),(CowData *)(param_1 + 8));
    lVar2 = *(long *)(this + 0x28);
  }
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + -8);
  }
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}



/* MethodBind::get_hash() const */

undefined4 __thiscall MethodBind::get_hash(MethodBind *this)

{
  long *plVar1;
  MethodBind MVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined4 local_e8 [2];
  long local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78 [2]) [16];
  long local_68 [3];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_50 = 0;
  (**(code **)(*(long *)this + 8))(local_e8,this,0xffffffff);
  lVar4 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8[0]);
  if (local_a8 != local_e0) {
    lVar9 = local_e0;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
        lVar9 = local_e0;
      }
    }
    local_e0 = 0;
    local_a8 = lVar9;
  }
  if (lStack_a0 != local_d8) {
    StringName::unref();
    lStack_a0 = local_d8;
    local_d8 = 0;
  }
  lVar9 = local_90;
  lVar4 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  MVar2 = this[0x39];
  uVar8 = 0;
  uVar3 = *(uint *)(this + 0xc);
  if (*(code **)(*(long *)this + 0x38) != is_vararg) {
    bVar5 = (**(code **)(*(long *)this + 0x38))(this);
    uVar8 = (uint)bVar5 << 4;
  }
  iVar10 = 0;
  local_80 = CONCAT44(local_80._4_4_,
                      (uint)(byte)this[0x38] << 5 | (uint)(byte)MVar2 << 2 | uVar3 | uVar8);
  if (0 < *(int *)(this + 0x34)) {
    do {
      get_argument_info((int)local_e8);
      if (local_78[0] == (undefined1 (*) [16])0x0) {
        local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_78[0][1] = 0;
        *local_78[0] = (undefined1  [16])0x0;
      }
      puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
      *puVar7 = 0;
      puVar7[6] = 0;
      puVar7[10] = 6;
      *(undefined8 *)(puVar7 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
      *puVar7 = local_e8[0];
      if (local_e0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_e0);
      }
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_d8);
      puVar7[6] = local_d0;
      if (*(long *)(puVar7 + 8) != local_c8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_c8);
      }
      lVar9 = local_c8;
      puVar7[10] = local_c0;
      lVar4 = *(long *)(*local_78[0] + 8);
      *(undefined8 *)(puVar7 + 0xc) = 0;
      *(undefined1 (**) [16])(puVar7 + 0x10) = local_78[0];
      *(long *)(puVar7 + 0xe) = lVar4;
      if (lVar4 != 0) {
        *(undefined4 **)(lVar4 + 0x30) = puVar7;
      }
      lVar4 = *(long *)*local_78[0];
      *(undefined4 **)(*local_78[0] + 8) = puVar7;
      if (lVar4 == 0) {
        *(undefined4 **)*local_78[0] = puVar7;
      }
      *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      lVar4 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(this + 0x34));
  }
  if (local_68[0] != *(long *)(this + 0x28)) {
    CowData<Variant>::_ref((CowData<Variant> *)local_68,(CowData *)(this + 0x28));
  }
  uVar6 = MethodInfo::get_compatibility_hash();
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
  CowData<Variant>::_unref((CowData<Variant> *)local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar4 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* MethodBind::~MethodBind() */

void __thiscall MethodBind::~MethodBind(MethodBind *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_001011c0;
  if (*(void **)(this + 0x40) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x40),true);
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x50));
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x28));
  if (StringName::configured != '\0') {
    if ((*(long *)(this + 0x18) != 0) && (StringName::unref(), StringName::configured == '\0')) {
      return;
    }
    if (*(long *)(this + 0x10) != 0) {
      StringName::unref();
      return;
    }
  }
  return;
}



/* MethodBind::~MethodBind() */

void __thiscall MethodBind::~MethodBind(MethodBind *this)

{
  ~MethodBind(this);
  operator_delete(this,0x58);
  return;
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



/* MethodBind::get_argument_names() const */

void MethodBind::get_argument_names(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0x50) != 0) {
    CowData<StringName>::_ref((CowData<StringName> *)(in_RDI + 8),(CowData *)(in_RSI + 0x50));
  }
  return;
}



/* MethodBind::set_argument_names(Vector<StringName> const&) */

void __thiscall MethodBind::set_argument_names(MethodBind *this,Vector *param_1)

{
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 8)) {
    CowData<StringName>::_ref((CowData<StringName> *)(this + 0x50),(CowData *)(param_1 + 8));
    return;
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MethodBind::_generate_argument_types(int) [clone .cold] */

void MethodBind::_generate_argument_types(int param_1)

{
  code *pcVar1;
  undefined8 *unaff_RBP;
  
  _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,0)
  ;
  (**(code **)*unaff_RBP)();
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


