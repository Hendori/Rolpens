
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

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
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* EditorResourceConversionPlugin::converts_to() const */

void EditorResourceConversionPlugin::converts_to(void)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  char *pcVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long in_RSI;
  long *in_RDI;
  long *plVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *in_RDI = 0;
  if (plVar11 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar11 + 0x60))(local_58,plVar11,in_RSI + 0x180,0,0,&local_c8);
    if (local_c8 == 0) {
      Variant::operator_cast_to_String((Variant *)&local_f8);
      pcVar4 = local_f8;
      pcVar2 = (char *)*in_RDI;
      if (pcVar2 == local_f8) {
        if (pcVar2 != (char *)0x0) {
          LOCK();
          plVar11 = (long *)(pcVar2 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_f8 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
      }
      else {
        if (pcVar2 != (char *)0x0) {
          LOCK();
          plVar11 = (long *)(pcVar2 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            lVar8 = *in_RDI;
            *in_RDI = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        *in_RDI = (long)local_f8;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100530;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x188) == '\0')) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_converts_to";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 0xc;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar7 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar11 = (long *)(local_b8._0_8_ + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_b8._8_8_;
          local_b8 = auVar3 << 0x40;
          Memory::free_static((void *)(uVar7 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar8 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar8;
    }
    lVar6 = local_a0;
    lVar8 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar11 = (long *)(local_a0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar8 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar11 = (long *)(local_f0 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar5 = MethodInfo::get_compatibility_hash();
    lVar8 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 400) = 0;
    pcVar9 = *(code **)(lVar8 + 0xd8);
    if (((pcVar9 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
       (pcVar9 = *(code **)(lVar8 + 0xd0), pcVar9 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorResourceConversionPlugin");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        lVar8 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if (StringName::configured != '\0') goto LAB_001009a4;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001009c1:
        lVar8 = *(long *)(in_RSI + 8);
        pcVar9 = *(code **)(lVar8 + 200);
        if (((pcVar9 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
           (pcVar9 = *(code **)(lVar8 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_001008d9;
        uVar7 = (*pcVar9)(*(undefined8 *)(lVar8 + 0xa0));
        *(undefined8 *)(in_RSI + 400) = uVar7;
      }
      else {
        lVar8 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if (StringName::configured != '\0') {
LAB_001009a4:
          if (local_100 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar8 == 0) goto LAB_001009c1;
      }
      lVar8 = *(long *)(in_RSI + 8);
    }
    else {
      uVar7 = (*pcVar9)(*(undefined8 *)(lVar8 + 0xa0),in_RSI + 0x180,uVar5);
      *(undefined8 *)(in_RSI + 400) = uVar7;
      lVar8 = *(long *)(in_RSI + 8);
    }
LAB_001008d9:
    if (*(char *)(lVar8 + 0x29) != '\0') {
      plVar11 = (long *)operator_new(0x18,"");
      *plVar11 = in_RSI + 400;
      plVar11[1] = in_RSI + 0x188;
      plVar11[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar11;
    }
    *(undefined1 *)(in_RSI + 0x188) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar9 = *(code **)(in_RSI + 400);
  if (pcVar9 == (code *)0x0) goto LAB_00100530;
  local_c8 = 0;
  uStack_c4 = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x180,pcVar9,0,&local_c8);
    lVar8 = CONCAT44(uStack_c4,local_c8);
    plVar11 = (long *)(lVar8 + -0x10);
    if (lVar8 != 0) {
      do {
        lVar8 = *plVar11;
        if (lVar8 == 0) goto LAB_00100560;
        LOCK();
        lVar6 = *plVar11;
        bVar12 = lVar8 == lVar6;
        if (bVar12) {
          *plVar11 = lVar8 + 1;
          lVar6 = lVar8;
        }
        UNLOCK();
      } while (!bVar12);
      goto LAB_001004e2;
    }
LAB_001005a0:
    lVar10 = *in_RDI;
    if (lVar10 == 0) goto LAB_00100530;
    goto LAB_00100573;
  }
  (*pcVar9)(*(undefined8 *)(in_RSI + 0x10),0,&local_c8);
  lVar8 = CONCAT44(uStack_c4,local_c8);
  plVar11 = (long *)(lVar8 + -0x10);
  if (lVar8 == 0) goto LAB_001005a0;
  do {
    lVar8 = *plVar11;
    if (lVar8 == 0) goto LAB_00100560;
    LOCK();
    lVar6 = *plVar11;
    bVar12 = lVar8 == lVar6;
    if (bVar12) {
      *plVar11 = lVar8 + 1;
      lVar6 = lVar8;
    }
    UNLOCK();
  } while (!bVar12);
LAB_001004e2:
  lVar10 = *in_RDI;
  if (lVar6 == -1) goto LAB_00100568;
  lVar8 = CONCAT44(uStack_c4,local_c8);
  if (lVar8 == lVar10) {
    if (lVar8 == 0) goto LAB_00100530;
    plVar11 = (long *)(lVar8 + -0x10);
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      Memory::free_static(plVar11,false);
    }
    goto LAB_0010066b;
  }
  lVar6 = lVar8;
  if (lVar10 != 0) goto LAB_00100573;
LAB_00100501:
  *in_RDI = lVar8;
  goto LAB_00100504;
LAB_00100560:
  lVar10 = *in_RDI;
LAB_00100568:
  lVar8 = 0;
  if (lVar10 != 0) {
LAB_00100573:
    LOCK();
    plVar11 = (long *)(lVar10 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      lVar6 = *in_RDI;
      *in_RDI = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
    lVar6 = CONCAT44(uStack_c4,local_c8);
    goto LAB_00100501;
  }
LAB_0010066b:
  lVar6 = CONCAT44(uStack_c4,local_c8);
LAB_00100504:
  if (lVar6 != 0) {
    LOCK();
    plVar11 = (long *)(lVar6 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      lVar8 = CONCAT44(uStack_c4,local_c8);
      local_c8 = 0;
      uStack_c4 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
LAB_00100530:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* EditorResourceConversionPlugin::_bind_methods() */

void EditorResourceConversionPlugin::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  long lVar10;
  int *piVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_110;
  long local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78 [2]) [16];
  int *local_68;
  ulong local_60;
  Vector<int> local_58 [8];
  long local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_converts_to";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._8_8_;
  local_e0 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 == 0) {
LAB_00101f5b:
    local_c0 = 6;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
    lVar2 = local_108;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00101f5b;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
    if (local_e0._8_8_ == local_100) {
      lVar2 = local_108;
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
        lVar2 = local_108;
      }
    }
    else {
      StringName::unref();
      lVar2 = local_108;
      local_e0._8_8_ = local_100;
    }
  }
  local_108 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
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
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar10 = local_90;
  lVar2 = local_c8;
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
        Memory::free_static((void *)(lVar2 + -0x10),false);
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
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_e8 = "EditorResourceConversionPlugin";
  local_100 = 0;
  local_e0._0_8_ = 0x1e;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
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
  piVar8 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar10 = 0;
      local_68 = (int *)0x0;
      piVar11 = piVar8;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
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
  pcVar6 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = "resource";
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back((Vector<String> *)local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101166;
      LOCK();
      lVar10 = *plVar1;
      bVar12 = lVar2 == lVar10;
      if (bVar12) {
        *plVar1 = lVar2 + 1;
        lVar10 = lVar2;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar10 != -1) {
      local_b8 = local_e8;
    }
LAB_00101166:
    pcVar6 = local_b8;
    Vector<String>::push_back((Vector<String> *)local_f8);
    if (pcVar6 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  pcVar6 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
  }
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_handles";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
      if (local_e0._8_8_ == local_100) {
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e0._8_8_ = local_100;
      }
      goto LAB_00101335;
    }
  }
  local_c0 = 6;
  StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
LAB_00101335:
  lVar2 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
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
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar10 = local_90;
  lVar2 = local_c8;
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
        Memory::free_static((void *)(lVar2 + -0x10),false);
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
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar9 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  *puVar9 = 0;
  puVar9[6] = 0;
  puVar9[10] = 6;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar9 + 0xc) = (undefined1  [16])0x0;
  *puVar9 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar9 + 4),(StringName *)(local_e0 + 8));
  puVar9[6] = local_d0;
  if (*(long *)(puVar9 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 8),(CowData *)&local_c8);
  }
  lVar10 = local_c8;
  puVar9[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar9 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar9 + 0x10) = local_78[0];
  *(long *)(puVar9 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar9;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar9;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar9;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,0);
  local_e8 = "EditorResourceConversionPlugin";
  local_100 = 0;
  local_e0._0_8_ = 0x1e;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
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
  piVar8 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar10 = 0;
      local_68 = (int *)0x0;
      piVar11 = piVar8;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
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
  pcVar6 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = "resource";
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back((Vector<String> *)local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101930;
      LOCK();
      lVar10 = *plVar1;
      bVar12 = lVar2 == lVar10;
      if (bVar12) {
        *plVar1 = lVar2 + 1;
        lVar10 = lVar2;
      }
      UNLOCK();
    } while (!bVar12);
    if (lVar10 != -1) {
      local_b8 = local_e8;
    }
LAB_00101930:
    pcVar6 = local_b8;
    Vector<String>::push_back((Vector<String> *)local_f8);
    if (pcVar6 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  pcVar6 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
  }
  local_e8 = "_convert";
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void> *)&local_e8);
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
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
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar10 = local_90;
  lVar2 = local_c8;
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
        Memory::free_static((void *)(lVar2 + -0x10),false);
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
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar9 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  *puVar9 = 0;
  puVar9[6] = 0;
  puVar9[10] = 6;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar9 + 0xc) = (undefined1  [16])0x0;
  *puVar9 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar9 + 4),(StringName *)(local_e0 + 8));
  puVar9[6] = local_d0;
  if (*(long *)(puVar9 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 8),(CowData *)&local_c8);
  }
  lVar10 = local_c8;
  puVar9[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar9 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar9 + 0x10) = local_78[0];
  *(long *)(puVar9 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar9;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar9;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar9;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,0);
  local_e8 = "EditorResourceConversionPlugin";
  local_100 = 0;
  local_e0._0_8_ = 0x1e;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
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
  piVar8 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar10 = 0;
      local_68 = (int *)0x0;
      piVar11 = piVar8;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
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
  pcVar6 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar6 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourceConversionPlugin::convert(Ref<Resource> const&) const */

Ref * EditorResourceConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  Object *pOVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *in_RDX;
  Object *pOVar12;
  long in_RSI;
  Object *pOVar13;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  Object *local_128;
  long local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8) [16];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  Object **local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  pOVar12 = (Object *)*in_RDX;
  if ((pOVar12 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pOVar12 = (Object *)0x0;
  }
  plVar11 = *(long **)(in_RSI + 0x98);
  if (plVar11 != (long *)0x0) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,pOVar12);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar11 + 0x60))(local_58,plVar11,in_RSI + 0x1b0,&local_80,1,&local_f8);
    if (local_f8 == 0) {
      lVar7 = Variant::get_validated_object();
      if (lVar7 == 0) {
        pOVar13 = *(Object **)param_1;
        if (pOVar13 != (Object *)0x0) {
          *(undefined8 *)param_1 = 0;
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar13);
            pOVar8 = (Object *)0x0;
            if (cVar4 == '\0') goto LAB_00102730;
LAB_001026e4:
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
            if (pOVar8 != (Object *)0x0) goto LAB_00102700;
          }
        }
      }
      else {
        pOVar8 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Resource::typeinfo,0);
        if (pOVar8 == (Object *)0x0) {
          pOVar13 = *(Object **)param_1;
LAB_001026bc:
          if (pOVar13 != (Object *)0x0) {
            *(undefined8 *)param_1 = 0;
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar8 = (Object *)0x0;
              cVar4 = predelete_handler(pOVar13);
              if (cVar4 != '\0') goto LAB_001026e4;
            }
          }
        }
        else {
          cVar4 = RefCounted::reference();
          pOVar13 = *(Object **)param_1;
          if (cVar4 == '\0') goto LAB_001026bc;
          if (pOVar8 != pOVar13) {
            *(Object **)param_1 = pOVar8;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              *(undefined8 *)param_1 = 0;
            }
            if (((pOVar13 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
               && (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) goto LAB_001026e4;
          }
LAB_00102700:
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
      }
LAB_00102730:
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010240b;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1b8) == '\0')) {
    local_f8 = 0;
    uStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = (Object *)0x103a5f;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8 = (undefined1 (*) [16])0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120 = 8;
    String::parse_latin1((StrRange *)&local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void> *)&local_128);
    uStack_f0 = local_128._0_4_;
    uVar10 = local_e8._0_8_;
    if (local_e8._0_8_ != local_120) {
      if (local_e8._0_8_ != 0) {
        LOCK();
        plVar11 = (long *)(local_e8._0_8_ + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_e8._8_8_;
          local_e8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar10 + -0x10),false);
        }
      }
      local_e8._0_8_ = local_120;
      local_120 = 0;
    }
    if (local_e8._8_8_ != local_118) {
      StringName::unref();
      lVar7 = local_118;
      local_118 = 0;
      local_e8._8_8_ = lVar7;
    }
    lVar3 = local_d0;
    lVar7 = local_108;
    local_d8 = CONCAT44(local_d8._4_4_,local_110);
    if (local_d0 == local_108) {
      local_c8 = CONCAT44(local_c8._4_4_,local_100);
      if (local_d0 != 0) {
        LOCK();
        plVar11 = (long *)(local_d0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      if (local_d0 != 0) {
        LOCK();
        plVar11 = (long *)(local_d0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_d0 = local_108;
      local_c8 = CONCAT44(local_c8._4_4_,local_100);
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
    }
    lVar7 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar11 = (long *)(local_120 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void> *)&local_128);
    if (local_b8 == (undefined1 (*) [16])0x0) {
      local_b8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_b8[1] = 0;
      *local_b8 = (undefined1  [16])0x0;
    }
    puVar9 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar9 + 8) = 0;
    *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
    *puVar9 = 0;
    puVar9[6] = 0;
    puVar9[10] = 6;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar9 + 0xc) = (undefined1  [16])0x0;
    *puVar9 = local_128._0_4_;
    if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)&local_120);
    }
    StringName::operator=((StringName *)(puVar9 + 4),(StringName *)&local_118);
    puVar9[6] = local_110;
    if (*(long *)(puVar9 + 8) != local_108) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 8),(CowData *)&local_108);
    }
    lVar3 = local_108;
    puVar9[10] = local_100;
    lVar7 = *(long *)(*local_b8 + 8);
    *(undefined8 *)(puVar9 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar9 + 0x10) = local_b8;
    *(long *)(puVar9 + 0xe) = lVar7;
    if (lVar7 != 0) {
      *(undefined4 **)(lVar7 + 0x30) = puVar9;
    }
    lVar7 = *(long *)*local_b8;
    *(undefined4 **)(*local_b8 + 8) = puVar9;
    if (lVar7 == 0) {
      *(undefined4 **)*local_b8 = puVar9;
    }
    *(int *)local_b8[1] = *(int *)local_b8[1] + 1;
    if (local_108 != 0) {
      LOCK();
      plVar11 = (long *)(local_108 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
    }
    lVar7 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar11 = (long *)(local_120 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_98,0);
    uVar5 = MethodInfo::get_compatibility_hash();
    lVar7 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x1c0) = 0;
    pcVar6 = *(code **)(lVar7 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar7 + 0xd0), pcVar6 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"EditorResourceConversionPlugin");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120 == 0) {
        lVar7 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') goto LAB_00102d90;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00102daf:
        lVar7 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar7 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar7 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00102b4d;
        uVar10 = (*pcVar6)(*(undefined8 *)(lVar7 + 0xa0));
        *(undefined8 *)(in_RSI + 0x1c0) = uVar10;
      }
      else {
        lVar7 = *(long *)(local_120 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') {
LAB_00102d90:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar7 == 0) goto LAB_00102daf;
      }
      lVar7 = *(long *)(in_RSI + 8);
    }
    else {
      uVar10 = (*pcVar6)(*(undefined8 *)(lVar7 + 0xa0),in_RSI + 0x1b0,uVar5);
      *(undefined8 *)(in_RSI + 0x1c0) = uVar10;
      lVar7 = *(long *)(in_RSI + 8);
    }
LAB_00102b4d:
    if (*(char *)(lVar7 + 0x29) != '\0') {
      plVar11 = (long *)operator_new(0x18,"");
      *plVar11 = in_RSI + 0x1c0;
      plVar11[1] = in_RSI + 0x1b8;
      plVar11[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar11;
    }
    *(undefined1 *)(in_RSI + 0x1b8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar6 = *(code **)(in_RSI + 0x1c0);
  if (pcVar6 == (code *)0x0) goto LAB_0010240b;
  if (pOVar12 == (Object *)0x0) {
    local_128 = (Object *)0x0;
  }
  else {
    local_128 = pOVar12;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_128 = (Object *)0x0;
    }
    pcVar6 = *(code **)(in_RSI + 0x1c0);
  }
  local_58[0] = &local_128;
  local_f8 = 0;
  uStack_f4 = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),local_58,&local_f8);
    pOVar13 = (Object *)CONCAT44(uStack_f4,local_f8);
    if (pOVar13 == (Object *)0x0) goto LAB_00102630;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      pOVar13 = *(Object **)param_1;
      goto LAB_001027a1;
    }
    pOVar8 = *(Object **)param_1;
    if (pOVar13 != pOVar8) {
      *(Object **)param_1 = pOVar13;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)param_1 = 0;
      }
      if (((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
LAB_00102641:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
LAB_00102651:
    if ((CONCAT44(uStack_f4,local_f8) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      pOVar13 = (Object *)CONCAT44(uStack_f4,local_f8);
      cVar4 = predelete_handler(pOVar13);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
    }
  }
  else {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x1b0,pcVar6,local_58,&local_f8);
    pOVar8 = (Object *)CONCAT44(uStack_f4,local_f8);
    if (pOVar8 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      pOVar13 = *(Object **)param_1;
      if (cVar4 == '\0') {
LAB_001027a1:
        if (pOVar13 != (Object *)0x0) goto LAB_00102639;
      }
      else {
        if (pOVar8 != pOVar13) {
          *(Object **)param_1 = pOVar8;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *(undefined8 *)param_1 = 0;
          }
          if (((pOVar13 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
      goto LAB_00102651;
    }
LAB_00102630:
    pOVar13 = *(Object **)param_1;
    if (pOVar13 != (Object *)0x0) {
LAB_00102639:
      *(undefined8 *)param_1 = 0;
      goto LAB_00102641;
    }
  }
  if (((local_128 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar13 = local_128, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_128), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
    Memory::free_static(pOVar13,false);
  }
LAB_0010240b:
  if (((pOVar12 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorResourceConversionPlugin::handles(Ref<Resource> const&) const */

ulong __thiscall
EditorResourceConversionPlugin::handles(EditorResourceConversionPlugin *this,Ref *param_1)

{
  Object *pOVar1;
  undefined1 auVar2 [16];
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined7 extraout_var;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  char *local_128;
  long local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8) [16];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  pOVar13 = *(Object **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar13 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pOVar13 = (Object *)0x0;
  }
  plVar11 = *(long **)(this + 0x98);
  if (plVar11 != (long *)0x0) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,pOVar13);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar11 + 0x60))((Variant *)local_58,plVar11,this + 0x198,&local_80,1,&local_f8);
    if (local_f8 == 0) {
      bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
      uVar12 = CONCAT71(extraout_var,bVar5) & 0xffffffff;
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102fe3;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1a0] == (EditorResourceConversionPlugin)0x0)) {
    local_f8 = 0;
    uStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_handles";
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8 = (undefined1 (*) [16])0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120 = 8;
    String::parse_latin1((StrRange *)&local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_128);
    uStack_f0 = local_128._0_4_;
    uVar9 = local_e8._0_8_;
    if (local_e8._0_8_ != local_120) {
      if (local_e8._0_8_ != 0) {
        LOCK();
        plVar11 = (long *)(local_e8._0_8_ + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_e8._8_8_;
          local_e8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar9 + -0x10),false);
        }
      }
      local_e8._0_8_ = local_120;
      local_120 = 0;
    }
    if (local_e8._8_8_ != local_118) {
      StringName::unref();
      lVar10 = local_118;
      local_118 = 0;
      local_e8._8_8_ = lVar10;
    }
    lVar3 = local_d0;
    lVar10 = local_108;
    local_d8 = CONCAT44(local_d8._4_4_,local_110);
    if (local_d0 == local_108) {
      local_c8 = CONCAT44(local_c8._4_4_,local_100);
      if (local_d0 != 0) {
        LOCK();
        plVar11 = (long *)(local_d0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      if (local_d0 != 0) {
        LOCK();
        plVar11 = (long *)(local_d0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_d0 = local_108;
      local_c8 = CONCAT44(local_c8._4_4_,local_100);
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
    }
    lVar10 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar11 = (long *)(local_120 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void> *)&local_128);
    if (local_b8 == (undefined1 (*) [16])0x0) {
      local_b8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_b8[1] = 0;
      *local_b8 = (undefined1  [16])0x0;
    }
    puVar8 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
    *puVar8 = 0;
    puVar8[6] = 0;
    puVar8[10] = 6;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
    *puVar8 = local_128._0_4_;
    if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 2),(CowData *)&local_120);
    }
    StringName::operator=((StringName *)(puVar8 + 4),(StringName *)&local_118);
    puVar8[6] = local_110;
    if (*(long *)(puVar8 + 8) != local_108) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 8),(CowData *)&local_108);
    }
    lVar3 = local_108;
    puVar8[10] = local_100;
    lVar10 = *(long *)(*local_b8 + 8);
    *(undefined8 *)(puVar8 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar8 + 0x10) = local_b8;
    *(long *)(puVar8 + 0xe) = lVar10;
    if (lVar10 != 0) {
      *(undefined4 **)(lVar10 + 0x30) = puVar8;
    }
    lVar10 = *(long *)*local_b8;
    *(undefined4 **)(*local_b8 + 8) = puVar8;
    if (lVar10 == 0) {
      *(undefined4 **)*local_b8 = puVar8;
    }
    *(int *)local_b8[1] = *(int *)local_b8[1] + 1;
    if (local_108 != 0) {
      LOCK();
      plVar11 = (long *)(local_108 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
    }
    lVar10 = local_120;
    if (local_120 != 0) {
      LOCK();
      plVar11 = (long *)(local_120 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_120 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_98,0);
    uVar6 = MethodInfo::get_compatibility_hash();
    lVar10 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1a8) = 0;
    pcVar7 = *(code **)(lVar10 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar10 + 0xd0), pcVar7 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"EditorResourceConversionPlugin");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120 == 0) {
        lVar10 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') goto LAB_001035fb;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010361a:
        lVar10 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar10 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar10 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010351b;
        uVar9 = (*pcVar7)(*(undefined8 *)(lVar10 + 0xa0));
        *(undefined8 *)(this + 0x1a8) = uVar9;
      }
      else {
        lVar10 = *(long *)(local_120 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') {
LAB_001035fb:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar10 == 0) goto LAB_0010361a;
      }
      lVar10 = *(long *)(this + 8);
    }
    else {
      uVar9 = (*pcVar7)(*(undefined8 *)(lVar10 + 0xa0),this + 0x198,uVar6);
      *(undefined8 *)(this + 0x1a8) = uVar9;
      lVar10 = *(long *)(this + 8);
    }
LAB_0010351b:
    if (*(char *)(lVar10 + 0x29) != '\0') {
      plVar11 = (long *)operator_new(0x18,"");
      *plVar11 = (long)(this + 0x1a8);
      plVar11[1] = (long)(this + 0x1a0);
      plVar11[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar11;
    }
    this[0x1a0] = (EditorResourceConversionPlugin)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar7 = *(code **)(this + 0x1a8);
  uVar12 = 0;
  if (pcVar7 != (code *)0x0) {
    if (pOVar13 == (Object *)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
    }
    else {
      local_f8 = (int)pOVar13;
      uStack_f4 = (undefined4)((ulong)pOVar13 >> 0x20);
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_f8 = 0;
        uStack_f4 = 0;
      }
      pcVar7 = *(code **)(this + 0x1a8);
    }
    local_58[0] = &local_f8;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),local_58,&local_128);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x198,pcVar7,local_58,&local_128);
    }
    uVar12 = (ulong)(local_128._0_1_ != (GetTypeInfo<bool,void>)0x0);
    if ((CONCAT44(uStack_f4,local_f8) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      pOVar1 = (Object *)CONCAT44(uStack_f4,local_f8);
      cVar4 = predelete_handler(pOVar1);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00102fe3:
  if (((pOVar13 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar13), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
    Memory::free_static(pOVar13,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
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
         (uint)CONCAT71(0x1063,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorResourceConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorResourceConversionPlugin::is_class_ptr(EditorResourceConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1063,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1063,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1064,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorResourceConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorResourceConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorResourceConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorResourceConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorResourceConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorResourceConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorResourceConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorResourceConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorResourceConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorResourceConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorResourceConversionPlugin::_notificationv(int, bool) */

void EditorResourceConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106110;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106110;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorResourceConversionPlugin::~EditorResourceConversionPlugin() */

void __thiscall
EditorResourceConversionPlugin::~EditorResourceConversionPlugin
          (EditorResourceConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00106270;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001039af;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001039af;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001039af:
  *(undefined ***)this = &PTR__initialize_classv_00106110;
  Object::~Object((Object *)this);
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



/* EditorResourceConversionPlugin::_bind_methods() [clone .cold] */

void EditorResourceConversionPlugin::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorResourceConversionPlugin::_get_class_namev() const */

undefined8 * EditorResourceConversionPlugin::_get_class_namev(void)

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
LAB_00103af3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103af3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorResourceConversionPlugin");
      goto LAB_00103b5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorResourceConversionPlugin")
  ;
LAB_00103b5e:
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
LAB_00103bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00103c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00103c3e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorResourceConversionPlugin::~EditorResourceConversionPlugin() */

void __thiscall
EditorResourceConversionPlugin::~EditorResourceConversionPlugin
          (EditorResourceConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00106270;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103cef;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103cef;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00103cef:
  *(undefined ***)this = &PTR__initialize_classv_00106110;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* EditorResourceConversionPlugin::get_class() const */

void EditorResourceConversionPlugin::get_class(void)

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
            if (lVar5 == 0) goto LAB_00103f2f;
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
LAB_00103f2f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00103fe3;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_00104093;
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
LAB_00104093:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00103fe3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103fe3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourceConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorResourceConversionPlugin::is_class(EditorResourceConversionPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001041bf;
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
LAB_001041bf:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00104273;
  }
  cVar5 = String::operator==((String *)param_1,"EditorResourceConversionPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
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
LAB_001045d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001045d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001045f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001045f6:
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



/* EditorResourceConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorResourceConversionPlugin::_get_property_listv
          (EditorResourceConversionPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorResourceConversionPlugin";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorResourceConversionPlugin";
  local_98 = 0;
  local_70 = 0x1e;
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
LAB_001049d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001049d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001049f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001049f5:
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
  StringName::StringName((StringName *)&local_78,"EditorResourceConversionPlugin",false);
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00104e4c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00104e4c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<String, void>::get_class_info() */

GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00104fcc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00104fcc:
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
    return this;
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<Ref<Resource>, void>::get_class_info() */

GetTypeInfo<Ref<Resource>,void> * __thiscall
GetTypeInfo<Ref<Resource>,void>::get_class_info(GetTypeInfo<Ref<Resource>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Resource";
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_00105480;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_00105480:
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
    return this;
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
LAB_001059f0:
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
  if (lVar10 == 0) goto LAB_001059f0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001058c9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001058c9;
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
    goto LAB_00105a46;
  }
  if (lVar10 == lVar7) {
LAB_0010596f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00105a46:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010595a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010596f;
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
LAB_0010595a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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
LAB_00105d40:
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
  if (lVar8 == 0) goto LAB_00105d40;
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
        goto LAB_00105c51;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00105c51:
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



/* EditorResourceConversionPlugin::_initialize_classv() */

void EditorResourceConversionPlugin::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00105ef9;
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
LAB_0010600a:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010601a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010600a;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010601a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "EditorResourceConversionPlugin";
  local_60 = 0;
  local_40 = 0x1e;
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
LAB_00105ef9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* EditorResourceConversionPlugin::~EditorResourceConversionPlugin() */

void __thiscall
EditorResourceConversionPlugin::~EditorResourceConversionPlugin
          (EditorResourceConversionPlugin *this)

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


