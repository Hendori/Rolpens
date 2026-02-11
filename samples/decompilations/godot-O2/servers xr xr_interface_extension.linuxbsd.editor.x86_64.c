
/* XRInterfaceExtension::get_render_target_texture(RID) */

undefined8 __thiscall
XRInterfaceExtension::get_render_target_texture(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = RendererRD::TextureStorage::get_singleton();
  if (lVar1 != 0) {
    uVar2 = RendererRD::TextureStorage::render_target_get_rd_texture(lVar1,param_2);
    return uVar2;
  }
  _err_print_error("get_render_target_texture","servers/xr/xr_interface_extension.cpp",0x140,
                   "Parameter \"texture_storage\" is null.","Texture storage not setup",0,0);
  return 0;
}



/* CowData<BlitToScreen>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<BlitToScreen>::_copy_on_write(CowData<BlitToScreen> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0x50;
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



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
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



/* WARNING: Removing unreachable block (ram,0x00100824) */
/* WARNING: Removing unreachable block (ram,0x00100af6) */
/* WARNING: Removing unreachable block (ram,0x00100962) */
/* XRInterfaceExtension::get_name() const */

void XRInterfaceExtension::get_name(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  if (plVar5 == (long *)0x0) {
LAB_001007eb:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1f0) == '\0')) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
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
      String::parse_latin1((String *)&local_c8,"_get_name");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x1f8) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00100b85;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00100b9a:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00100aaf;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x1e8);
          *(undefined8 *)(in_RSI + 0x1f8) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00100b85:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_00100b9a;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x1e8,uVar2);
        *(undefined8 *)(in_RSI + 0x1f8) = uVar3;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_00100aaf:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = in_RSI + 0x1f8;
        plVar5[1] = in_RSI + 0x1f0;
        plVar5[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar5;
      }
      *(undefined1 *)(in_RSI + 0x1f0) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar6 = *(code **)(in_RSI + 0x1f8);
    if (pcVar6 == (code *)0x0) {
      StringName::StringName(in_RDI,"Unknown",false);
      goto LAB_0010082e;
    }
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(StringName *)&local_f8);
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x1e8,pcVar6,0,(StringName *)&local_f8);
    }
    StringName::StringName((StringName *)&local_c8,(StringName *)&local_f8);
    if (CONCAT44(uStack_c4,local_c8) != 0) {
      StringName::unref();
      local_110 = CONCAT44(uStack_c4,local_c8);
    }
    if ((StringName::configured != '\0') && (local_f8 != 0)) {
      StringName::unref();
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x1e8,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001007eb;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_f8);
    if (local_f8 != 0) {
      StringName::unref();
      local_110 = local_f8;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *(long *)in_RDI = local_110;
LAB_0010082e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::get_capabilities() const */

uint __thiscall XRInterfaceExtension::get_capabilities(XRInterfaceExtension *this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x200,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar1 = Variant::operator_cast_to_unsigned_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100d33;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x208] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_capabilities";
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
    local_f0[0] = 0x11;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,7);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x210) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00100f78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00100f8d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00100ec9;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x200);
        *(undefined8 *)(this + 0x210) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00100f78:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00100f8d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x200,uVar2);
      *(undefined8 *)(this + 0x210) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00100ec9:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x210);
      plVar5[1] = (long)(this + 0x208);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x208] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x210);
  uVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      uVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x200,pcVar6,0,local_c8);
      uVar1 = local_c8[0];
    }
  }
LAB_00100d33:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* XRInterfaceExtension::is_initialized() const */

bool __thiscall XRInterfaceExtension::is_initialized(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x218,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101127;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x220] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_is_initialized";
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
    local_f0[0] = 0xf;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x228) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00101368;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010137d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001012c1;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x218);
        *(undefined8 *)(this + 0x228) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101368:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010137d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x218,uVar1);
      *(undefined8 *)(this + 0x228) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001012c1:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x228);
      plVar4[1] = (long)(this + 0x220);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x220] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x228);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x218,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
  }
LAB_00101127:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* XRInterfaceExtension::initialize() */

bool __thiscall XRInterfaceExtension::initialize(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x230,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101517;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x238] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_initialize";
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
    local_f0[0] = 0xb;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x240) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00101758;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010176d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001016b1;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x230);
        *(undefined8 *)(this + 0x240) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101758:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010176d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x230,uVar1);
      *(undefined8 *)(this + 0x240) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001016b1:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x240);
      plVar4[1] = (long)(this + 0x238);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x238] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x240);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x230,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
  }
LAB_00101517:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* XRInterfaceExtension::uninitialize() */

void __thiscall XRInterfaceExtension::uninitialize(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_001018bb:
    if ((*(long *)(this + 8) != 0) && (this[0x250] == (XRInterfaceExtension)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_d8 = "_uninitialize";
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_d0 = 0xd;
      String::parse_latin1((StrRange *)local_c8);
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 600) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00101b15;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00101b2a:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_00101a6f;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x248);
          *(undefined8 *)(this + 600) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00101b15:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_00101b2a;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x248,uVar1);
        *(undefined8 *)(this + 600) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_00101a6f:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 600);
        plVar4[1] = (long)(this + 0x250);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x250] = (XRInterfaceExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 600);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010197c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010191d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x248,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_00101b9d;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x248,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_001018bb;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101b9d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRInterfaceExtension::get_system_info() */

void XRInterfaceExtension::get_system_info(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  plVar4 = *(long **)(in_RSI + 0x98);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,in_RSI + 0x260,0,0,local_c8);
    if (local_c8[0] == 0) {
      Variant::operator_cast_to_Dictionary((Variant *)&local_f8);
      Dictionary::operator=(in_RDI,(Dictionary *)&local_f8);
      Dictionary::~Dictionary((Dictionary *)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101c9c;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x268) == '\0')) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_system_info";
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
    local_f0[0] = 0x10;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x270) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00101f87;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101f9c:
        lVar3 = *(long *)(in_RSI + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00101ed2;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 0x260);
        *(undefined8 *)(in_RSI + 0x270) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101f87:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00101f9c;
      }
      lVar3 = *(long *)(in_RSI + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 0x260,uVar1);
      *(undefined8 *)(in_RSI + 0x270) = uVar2;
      lVar3 = *(long *)(in_RSI + 8);
    }
LAB_00101ed2:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = in_RSI + 0x270;
      plVar4[1] = in_RSI + 0x268;
      plVar4[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar4;
    }
    *(undefined1 *)(in_RSI + 0x268) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  if (*(long *)(in_RSI + 0x270) != 0) {
    Dictionary::Dictionary((Dictionary *)&local_f8);
    pcVar5 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar5 == (code *)0x0) {
      (**(code **)(in_RSI + 0x270))(*(undefined8 *)(in_RSI + 0x10),0,(Dictionary *)&local_f8);
    }
    else {
      (*pcVar5)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x260,*(undefined8 *)(in_RSI + 0x270),0,
                (Dictionary *)&local_f8);
    }
    Dictionary::Dictionary((Dictionary *)local_c8,(Dictionary *)&local_f8);
    Dictionary::operator=(in_RDI,(Dictionary *)local_c8);
    Dictionary::~Dictionary((Dictionary *)local_c8);
    Dictionary::~Dictionary((Dictionary *)&local_f8);
  }
LAB_00101c9c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::get_suggested_tracker_names() const */

void XRInterfaceExtension::get_suggested_tracker_names(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (plVar5 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x278,0,0,local_f8);
    if (local_f8[0] == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      if (*(long *)(in_RDI + 8) != local_c0) {
        CowData<String>::_unref((CowData<String> *)(in_RDI + 8));
        lVar4 = local_c0;
        local_c0 = 0;
        *(long *)(in_RDI + 8) = lVar4;
      }
      CowData<String>::_unref((CowData<String> *)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102199;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x280) == '\0')) {
    local_c8 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_suggested_tracker_names");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_f8);
    PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x288) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010240f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102424:
        lVar4 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00102359;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x278);
        *(undefined8 *)(in_RSI + 0x288) = uVar3;
      }
      else {
        lVar4 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010240f:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00102424;
      }
      lVar4 = *(long *)(in_RSI + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x278,uVar2);
      *(undefined8 *)(in_RSI + 0x288) = uVar3;
      lVar4 = *(long *)(in_RSI + 8);
    }
LAB_00102359:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = in_RSI + 0x288;
      plVar5[1] = in_RSI + 0x280;
      plVar5[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar5;
    }
    *(undefined1 *)(in_RSI + 0x280) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(in_RSI + 0x288);
  if (pcVar6 != (code *)0x0) {
    uStack_f0 = 0;
    uStack_ec = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,local_f8);
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x278,pcVar6,0,local_f8);
    }
    local_c0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_c0,(CowData *)&uStack_f0);
    lVar4 = local_c0;
    if (*(long *)(in_RDI + 8) != local_c0) {
      CowData<String>::_unref((CowData<String> *)(in_RDI + 8));
      *(long *)(in_RDI + 8) = lVar4;
      local_c0 = 0;
    }
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<String>::_unref((CowData<String> *)&uStack_f0);
  }
LAB_00102199:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::get_tracking_status() const */

ulong __thiscall XRInterfaceExtension::get_tracking_status(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x2a8,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_001025b6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2b0] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_tracking_status";
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
    local_f0[0] = 0x14;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<XRInterface::TrackingStatus,void>::get_class_info
              ((GetTypeInfo<XRInterface::TrackingStatus,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2b8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001027f8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010280d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00102749;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2a8);
        *(undefined8 *)(this + 0x2b8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001027f8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010280d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2a8,uVar1);
      *(undefined8 *)(this + 0x2b8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00102749:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x2b8);
      plVar5[1] = (long)(this + 0x2b0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x2b0] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x2b8);
  uVar2 = 3;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      uVar2 = (ulong)local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2a8,pcVar6,0,local_c8);
      uVar2 = (ulong)local_c8[0];
    }
  }
LAB_001025b6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* XRInterfaceExtension::get_play_area_mode() const */

ulong __thiscall XRInterfaceExtension::get_play_area_mode(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x2f0,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_001029a3;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2f8] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_play_area_mode";
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
    local_f0[0] = 0x13;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
              ((GetTypeInfo<XRInterface::PlayAreaMode,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x300) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00102be8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102bfd:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00102b39;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2f0);
        *(undefined8 *)(this + 0x300) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102be8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00102bfd;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2f0,uVar1);
      *(undefined8 *)(this + 0x300) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00102b39:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x300);
      plVar5[1] = (long)(this + 0x2f8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x2f8] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x300);
  uVar2 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      uVar2 = (ulong)local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2f0,pcVar6,0,local_c8);
      uVar2 = (ulong)local_c8[0];
    }
  }
LAB_001029a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* XRInterfaceExtension::get_play_area() const */

void XRInterfaceExtension::get_play_area(void)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long in_RSI;
  long in_RDI;
  long *plVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_108;
  long local_100;
  int local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar7 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (plVar7 != (long *)0x0) {
    local_f8 = 0;
    local_f4 = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar7 + 0x60))(local_58,plVar7,in_RSI + 800,0,0,&local_f8);
    if (local_f8 == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      lVar3 = local_c0;
      lVar5 = *(long *)(in_RDI + 8);
      if (lVar5 == local_c0) {
        if (lVar5 != 0) {
          LOCK();
          plVar7 = (long *)(lVar5 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
        if (lVar5 != 0) {
          LOCK();
          plVar7 = (long *)(lVar5 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            lVar5 = *(long *)(in_RDI + 8);
            *(undefined8 *)(in_RDI + 8) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        *(long *)(in_RDI + 8) = local_c0;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102e38;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x328) == '\0')) {
    local_c8 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_play_area");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Vector<Vector3>,void>::get_class_info
              ((GetTypeInfo<Vector<Vector3>,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x330) = 0;
    pcVar6 = *(code **)(lVar5 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar5 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        lVar5 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if (StringName::configured != '\0') goto LAB_001031a6;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001031c3:
        lVar5 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar5 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar5 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001030e0;
        uVar4 = (*pcVar6)(*(undefined8 *)(lVar5 + 0xa0));
        *(undefined8 *)(in_RSI + 0x330) = uVar4;
      }
      else {
        lVar5 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if (StringName::configured != '\0') {
LAB_001031a6:
          if (local_100 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_001031c3;
      }
      lVar5 = *(long *)(in_RSI + 8);
    }
    else {
      uVar4 = (*pcVar6)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 800,uVar2);
      *(undefined8 *)(in_RSI + 0x330) = uVar4;
      lVar5 = *(long *)(in_RSI + 8);
    }
LAB_001030e0:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = in_RSI + 0x330;
      plVar7[1] = in_RSI + 0x328;
      plVar7[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar7;
    }
    *(undefined1 *)(in_RSI + 0x328) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(in_RSI + 0x330);
  if (pcVar6 == (code *)0x0) goto LAB_00102e38;
  local_c0 = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 800,pcVar6,0,&local_c8);
    plVar7 = (long *)(local_c0 + -0x10);
    if (local_c0 != 0) {
      do {
        lVar5 = *plVar7;
        if (lVar5 == 0) goto LAB_00102f68;
        LOCK();
        lVar3 = *plVar7;
        bVar8 = lVar5 == lVar3;
        if (bVar8) {
          *plVar7 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
      lVar5 = *(long *)(in_RDI + 8);
      if (lVar3 == -1) goto LAB_00102f70;
      if (local_c0 != lVar5) goto LAB_00102f80;
      if (local_c0 == 0) goto LAB_00102e38;
      plVar7 = (long *)(local_c0 + -0x10);
      LOCK();
      *plVar7 = *plVar7 + -1;
      lVar5 = *plVar7;
      UNLOCK();
joined_r0x00102f57:
      if (lVar5 == 0) {
        Memory::free_static(plVar7,false);
      }
      goto LAB_00102e0e;
    }
LAB_00102e68:
    lVar5 = *(long *)(in_RDI + 8);
    lVar3 = local_c0;
    if (lVar5 == 0) goto LAB_00102e38;
    goto LAB_00102e71;
  }
  (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,&local_c8);
  plVar7 = (long *)(local_c0 + -0x10);
  if (local_c0 == 0) goto LAB_00102e68;
  do {
    lVar5 = *plVar7;
    if (lVar5 == 0) goto LAB_00102f68;
    LOCK();
    lVar3 = *plVar7;
    bVar8 = lVar5 == lVar3;
    if (bVar8) {
      *plVar7 = lVar5 + 1;
      lVar3 = lVar5;
    }
    UNLOCK();
  } while (!bVar8);
  lVar5 = *(long *)(in_RDI + 8);
  if (lVar3 == -1) goto LAB_00102f70;
  if (lVar5 == local_c0) {
    if (lVar5 == 0) goto LAB_00102e38;
    plVar7 = (long *)(lVar5 + -0x10);
    LOCK();
    *plVar7 = *plVar7 + -1;
    lVar5 = *plVar7;
    UNLOCK();
    goto joined_r0x00102f57;
  }
LAB_00102f80:
  lVar3 = local_c0;
  if (lVar5 != 0) goto LAB_00102e71;
LAB_00102e95:
  *(long *)(in_RDI + 8) = lVar3;
  goto LAB_00102e0e;
LAB_00102f68:
  lVar5 = *(long *)(in_RDI + 8);
LAB_00102f70:
  lVar3 = 0;
  if (lVar5 != 0) {
LAB_00102e71:
    LOCK();
    plVar7 = (long *)(lVar5 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      lVar5 = *(long *)(in_RDI + 8);
      *(undefined8 *)(in_RDI + 8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
    goto LAB_00102e95;
  }
LAB_00102e0e:
  lVar5 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar7 = (long *)(local_c0 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
LAB_00102e38:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRInterfaceExtension::get_anchor_detection_is_enabled() const */

bool __thiscall XRInterfaceExtension::get_anchor_detection_is_enabled(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x338,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103357;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x340] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_anchor_detection_is_enabled";
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
    local_f0[0] = 0x20;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x348) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00103598;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001035ad:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001034f1;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x338);
        *(undefined8 *)(this + 0x348) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103598:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_001035ad;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x338,uVar1);
      *(undefined8 *)(this + 0x348) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001034f1:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x348);
      plVar4[1] = (long)(this + 0x340);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x340] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x348);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x338,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
  }
LAB_00103357:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* XRInterfaceExtension::get_camera_feed_id() */

int __thiscall XRInterfaceExtension::get_camera_feed_id(XRInterfaceExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x368,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103743;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x370] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_camera_feed_id";
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
    local_f0[0] = 0x13;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x378) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00103988;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010399d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001038d9;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x368);
        *(undefined8 *)(this + 0x378) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103988:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010399d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x368,uVar2);
      *(undefined8 *)(this + 0x378) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001038d9:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x378);
      plVar5[1] = (long)(this + 0x370);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x370] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x378);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x368,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00103743:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* XRInterfaceExtension::get_render_target_size() */

undefined8 __thiscall XRInterfaceExtension::get_render_target_size(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x380,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_Vector2((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103b4b;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x388] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_render_target_size";
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
    local_f0[0] = 0x17;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<Vector2,void>::get_class_info((GetTypeInfo<Vector2,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x390) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00103d95;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00103daa:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00103cf0;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x380);
        *(undefined8 *)(this + 0x390) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103d95:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00103daa;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x380,uVar1);
      *(undefined8 *)(this + 0x390) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00103cf0:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x390);
      plVar4[1] = (long)(this + 0x388);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x388] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x390);
  uVar2 = 0;
  if (pcVar5 != (code *)0x0) {
    local_58[0] = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_58);
      uVar2 = local_58[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x380,pcVar5,0,local_58);
      uVar2 = local_58[0];
    }
  }
LAB_00103b4b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* XRInterfaceExtension::get_view_count() */

uint __thiscall XRInterfaceExtension::get_view_count(XRInterfaceExtension *this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x398,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar1 = Variant::operator_cast_to_unsigned_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103f46;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x3a0] == (XRInterfaceExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_view_count";
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
    local_f0[0] = 0xf;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,7);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x3a8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00104188;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010419d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001040d9;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x398);
        *(undefined8 *)(this + 0x3a8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00104188:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010419d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x398,uVar2);
      *(undefined8 *)(this + 0x3a8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001040d9:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x3a8);
      plVar5[1] = (long)(this + 0x3a0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x3a0] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x3a8);
  uVar1 = 1;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      uVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x398,pcVar6,0,local_c8);
      uVar1 = local_c8[0];
    }
  }
LAB_00103f46:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* XRInterfaceExtension::get_camera_transform() */

void XRInterfaceExtension::get_camera_transform(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  uint uVar8;
  undefined8 local_148;
  long local_140;
  GetTypeInfo<Transform3D,void> local_138 [8];
  long local_130 [5];
  int local_108 [2];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a0;
  int local_98 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  uVar8 = _LC50;
  plVar6 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)in_RDI[2] = 0x3f800000;
  *(undefined8 *)(in_RDI[2] + 4) = 0;
  *(undefined4 *)(in_RDI[2] + 0xc) = 0;
  *in_RDI = ZEXT416(uVar8);
  in_RDI[1] = ZEXT416(uVar8);
  if (plVar6 != (long *)0x0) {
    local_108[0] = 0;
    local_108[1] = 0;
    uStack_100 = 0;
    (**(code **)(*plVar6 + 0x60))(local_98,plVar6,in_RSI + 0x3b0,0,0,local_108);
    if (local_108[0] == 0) {
      Variant::operator_cast_to_Transform3D((Variant *)local_78);
      cVar1 = Variant::needs_deinit[local_98[0]];
      *(undefined8 *)*in_RDI = local_78._0_8_;
      *(undefined8 *)(*in_RDI + 8) = local_78._8_8_;
      *(undefined8 *)in_RDI[1] = local_68._0_8_;
      *(undefined8 *)(in_RDI[1] + 8) = local_68._8_8_;
      *(ulong *)in_RDI[2] = CONCAT44(uStack_54,local_58);
      *(ulong *)(in_RDI[2] + 8) = CONCAT44(uStack_4c,uStack_50);
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104336;
    }
    uVar8 = _LC50;
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
      uVar8 = _LC50;
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x3b8) == '\0')) {
    local_108[0] = 0;
    local_108[1] = 0;
    local_f8 = (undefined1  [16])0x0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 6;
    local_d0 = 1;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    String::parse_latin1((String *)local_108,"_get_camera_transform");
    local_d0 = CONCAT44(local_d0._4_4_,8);
    GetTypeInfo<Transform3D,void>::get_class_info(local_138);
    PropertyInfo::operator=((PropertyInfo *)&uStack_100,(PropertyInfo *)local_138);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_138);
    local_b0 = local_b0 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x3c0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_148 = 0;
      String::parse_latin1((String *)&local_148,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_140,(String *)&local_148,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_138,(StringName *)&local_140);
      if (local_130[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_130);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_140 != 0)) goto LAB_00104647;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
LAB_0010465c:
        lVar5 = *(long *)(in_RSI + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00104589;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x3b0);
        *(undefined8 *)(in_RSI + 0x3c0) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_130[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_130);
        if ((StringName::configured != '\0') && (local_140 != 0)) {
LAB_00104647:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if (lVar5 == 0) goto LAB_0010465c;
      }
      lVar5 = *(long *)(in_RSI + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x3b0,uVar3);
      *(undefined8 *)(in_RSI + 0x3c0) = uVar4;
      lVar5 = *(long *)(in_RSI + 8);
    }
LAB_00104589:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = in_RSI + 0x3c0;
      plVar6[1] = in_RSI + 0x3b8;
      plVar6[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar6;
    }
    *(undefined1 *)(in_RSI + 0x3b8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)local_108);
    uVar8 = _LC50;
  }
  pcVar7 = *(code **)(in_RSI + 0x3c0);
  if (pcVar7 != (code *)0x0) {
    local_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_50 = 0;
    pcVar2 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    local_78 = ZEXT416(uVar8);
    uStack_4c = 0;
    local_68 = ZEXT416(uVar8);
    if (pcVar2 == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(in_RSI + 0x10),0,local_78);
    }
    else {
      (*pcVar2)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x3b0,pcVar7,0,local_78);
    }
    *(undefined8 *)*in_RDI = local_78._0_8_;
    *(undefined8 *)(*in_RDI + 8) = local_78._8_8_;
    *(undefined8 *)in_RDI[1] = local_68._0_8_;
    *(undefined8 *)(in_RDI[1] + 8) = local_68._8_8_;
    *(ulong *)in_RDI[2] = CONCAT44(uStack_54,local_58);
    *(ulong *)(in_RDI[2] + 8) = CONCAT44(uStack_4c,uStack_50);
  }
LAB_00104336:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::get_color_texture() */

undefined8 __thiscall XRInterfaceExtension::get_color_texture(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x410,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar2 = Variant::operator_cast_to_RID((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104801;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x418] == (XRInterfaceExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_color_texture";
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
    local_f0[0] = 0x12;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x420) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00104a58;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00104a6d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001049a9;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x410);
        *(undefined8 *)(this + 0x420) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00104a58:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00104a6d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x410,uVar1);
      *(undefined8 *)(this + 0x420) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001049a9:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x420);
      plVar4[1] = (long)(this + 0x418);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x418] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x420);
  uVar2 = 0;
  if (pcVar5 != (code *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x410,pcVar5,0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00104801:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* XRInterfaceExtension::get_depth_texture() */

undefined8 __thiscall XRInterfaceExtension::get_depth_texture(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x428,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar2 = Variant::operator_cast_to_RID((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104c11;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x430] == (XRInterfaceExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_depth_texture";
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
    local_f0[0] = 0x12;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x438) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00104e68;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00104e7d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00104db9;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x428);
        *(undefined8 *)(this + 0x438) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00104e68:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00104e7d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x428,uVar1);
      *(undefined8 *)(this + 0x438) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00104db9:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x438);
      plVar4[1] = (long)(this + 0x430);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x430] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x438);
  uVar2 = 0;
  if (pcVar5 != (code *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x428,pcVar5,0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00104c11:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* XRInterfaceExtension::get_velocity_texture() */

undefined8 __thiscall XRInterfaceExtension::get_velocity_texture(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x440,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar2 = Variant::operator_cast_to_RID((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00105021;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x448] == (XRInterfaceExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_velocity_texture";
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
    local_f0[0] = 0x15;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x450) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00105278;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010528d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001051c9;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x440);
        *(undefined8 *)(this + 0x450) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00105278:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010528d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x440,uVar1);
      *(undefined8 *)(this + 0x450) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001051c9:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x450);
      plVar4[1] = (long)(this + 0x448);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x448] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = *(code **)(this + 0x450);
  uVar2 = 0;
  if (pcVar5 != (code *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x440,pcVar5,0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00105021:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* XRInterfaceExtension::process() */

void __thiscall XRInterfaceExtension::process(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_001053db:
    if ((*(long *)(this + 8) != 0) && (this[0x460] == (XRInterfaceExtension)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_d8 = "_process";
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_d0 = 8;
      String::parse_latin1((StrRange *)local_c8);
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x468) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00105635;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0010564a:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_0010558f;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x458);
          *(undefined8 *)(this + 0x468) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00105635:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_0010564a;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x458,uVar1);
        *(undefined8 *)(this + 0x468) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010558f:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x468);
        plVar4[1] = (long)(this + 0x460);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x460] = (XRInterfaceExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x468);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010549c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010543d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x458,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_001056bd;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x458,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_001053db;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001056bd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRInterfaceExtension::pre_render() */

void __thiscall XRInterfaceExtension::pre_render(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_0010579b:
    if ((*(long *)(this + 8) != 0) && (this[0x478] == (XRInterfaceExtension)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_d8 = "_pre_render";
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_d0 = 0xb;
      String::parse_latin1((StrRange *)local_c8);
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x480) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_001059f5;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00105a0a:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_0010594f;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x470);
          *(undefined8 *)(this + 0x480) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_001059f5:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_00105a0a;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x470,uVar1);
        *(undefined8 *)(this + 0x480) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010594f:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x480);
        plVar4[1] = (long)(this + 0x478);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x478] = (XRInterfaceExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x480);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010585c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001057fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x470,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_00105a7d;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x470,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_0010579b;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105a7d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRInterfaceExtension::end_frame() */

void __thiscall XRInterfaceExtension::end_frame(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_00105b5b:
    if ((*(long *)(this + 8) != 0) && (this[0x4c0] == (XRInterfaceExtension)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_d8 = "_end_frame";
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_d0 = 10;
      String::parse_latin1((StrRange *)local_c8);
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x4c8) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_00105db5;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00105dca:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_00105d0f;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x4b8);
          *(undefined8 *)(this + 0x4c8) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_00105db5:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_00105dca;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x4b8,uVar1);
        *(undefined8 *)(this + 0x4c8) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_00105d0f:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x4c8);
        plVar4[1] = (long)(this + 0x4c0);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x4c0] = (XRInterfaceExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x4c8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x4b8,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_00105e3d;
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x4b8,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_00105b5b;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e3d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* XRInterfaceExtension::_bind_methods() */

void XRInterfaceExtension::_bind_methods(void)

{
  long lVar1;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined *puVar25;
  undefined8 uVar26;
  MethodBind *pMVar27;
  char **ppcVar28;
  uint uVar29;
  char ***pppcVar30;
  long *plVar31;
  long lVar32;
  long in_FS_OFFSET;
  StringName *local_208;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  Vector local_1b8 [8];
  undefined8 local_1b0;
  char *local_1a8;
  undefined1 local_1a0 [16];
  int local_190;
  long local_188;
  undefined4 local_180;
  char *local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined8 local_128;
  ulong local_120;
  Vector<int> local_118 [8];
  undefined8 local_110;
  char *local_108;
  char *pcStack_100;
  char *local_f8;
  char *pcStack_f0;
  char *local_e8;
  char *pcStack_e0;
  char *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  char *pcStack_c0;
  char *local_b8;
  char *local_b0;
  char **local_a8;
  undefined1 local_a0 [16];
  long local_40;
  
  local_1a0._8_8_ = local_1a0._0_8_;
  puVar25 = PTR__LC60_00116d70;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = (undefined1  [16])0x0;
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_1a8 = "_get_name";
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  local_1a8 = "";
  local_1d8 = 0;
  local_1d0 = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar17 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,0x15);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_001061ab:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),(StringName *)&local_1d8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_001061ab;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  local_208 = (StringName *)&local_1d8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_capabilities";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = CONCAT44(local_120._4_4_,7);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_is_initialized";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_initialize";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_uninitialize";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_system_info";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar18._8_8_ = 0;
  auVar18._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar18 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,0x1b);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_001069f3:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_001069f3;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar12 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "mode";
  local_170 = 4;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_supports_play_area_mode";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
            ((GetTypeInfo<XRInterface::PlayAreaMode,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar13 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_play_area_mode";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
            ((GetTypeInfo<XRInterface::PlayAreaMode,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "mode";
  local_170 = 4;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_set_play_area_mode";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
            ((GetTypeInfo<XRInterface::PlayAreaMode,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_play_area";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar19._8_8_ = 0;
  auVar19._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar19 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,0x24);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_0010729b:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_0010729b;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar11 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_render_target_size";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar20 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,5);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_0010757b:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_0010757b;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_view_count";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = CONCAT44(local_120._4_4_,7);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_camera_transform";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<Transform3D,void>::get_class_info((GetTypeInfo<Transform3D,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "view";
  local_170 = 4;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1c0 = 0;
  local_178 = "cam_transform";
  local_170 = 0xd;
  String::parse_latin1((StrRange *)&local_1c0);
  local_178 = (char *)0x0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_transform_for_view";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<Transform3D,void>::get_class_info((GetTypeInfo<Transform3D,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,7);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar21 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,0x12);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_00107c0b:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_00107c0b;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "view";
  local_170 = 4;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1d0 = 0;
  local_178 = "aspect";
  local_170 = 6;
  String::parse_latin1((StrRange *)&local_1d0);
  local_178 = (char *)0x0;
  if (local_1d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1d0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1c0 = 0;
  local_178 = "z_near";
  local_170 = 6;
  String::parse_latin1((StrRange *)&local_1c0);
  local_178 = (char *)0x0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1c8 = 0;
  local_178 = "z_far";
  local_170 = 5;
  String::parse_latin1((StrRange *)&local_1c8);
  local_178 = (char *)0x0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_projection_for_view";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar22 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,0x21);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_0010805b:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_0010805b;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,7);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar9 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_118,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,10);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_vrs_texture";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar16 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_process";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_pre_render";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "render_target";
  local_170 = 0xd;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_pre_draw_viewport";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "render_target";
  local_170 = 0xd;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1c0 = 0;
  local_178 = "screen_rect";
  local_170 = 0xb;
  String::parse_latin1((StrRange *)&local_1c0);
  local_178 = (char *)0x0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_post_draw_viewport";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar15 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_118,0);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,7);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_00108b6b:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_00108b6b;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_end_frame";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_suggested_tracker_names";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "tracker_name";
  local_170 = 0xc;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_suggested_pose_names";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_tracking_status";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<XRInterface::TrackingStatus,void>::get_class_info
            ((GetTypeInfo<XRInterface::TrackingStatus,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "action_name";
  local_170 = 0xb;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1e0 = 0;
  local_178 = "tracker_name";
  local_170 = 0xc;
  String::parse_latin1((StrRange *)&local_1e0);
  local_178 = (char *)0x0;
  if (local_1e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1e0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1c0 = 0;
  local_178 = "frequency";
  local_170 = 9;
  String::parse_latin1((StrRange *)&local_1c0);
  local_178 = (char *)0x0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1d8 = 0;
  local_178 = "amplitude";
  local_170 = 9;
  String::parse_latin1((StrRange *)local_208);
  local_178 = (char *)0x0;
  if (local_1d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)local_208);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1c8 = 0;
  local_178 = "duration_sec";
  local_170 = 0xc;
  String::parse_latin1((StrRange *)&local_1c8);
  local_178 = (char *)0x0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  local_1d0 = 0;
  local_178 = "delay_sec";
  local_170 = 9;
  String::parse_latin1((StrRange *)&local_1d0);
  local_178 = (char *)0x0;
  if (local_1d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1d0);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_trigger_haptic_pulse";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar23 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,4);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 == 0) {
LAB_001096ab:
    local_180 = 6;
    StringName::operator=((StringName *)(local_1a0 + 8),local_208);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 != 0x11) goto LAB_001096ab;
    StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
    if (local_1a0._8_8_ == local_1c0) {
      if ((StringName::configured != '\0') && (local_1c0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1a0._8_8_ = local_1c0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar10 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_118,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  lVar1 = local_188;
  if (local_188 != 0) {
    LOCK();
    plVar31 = (long *)(local_188 + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      local_188 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_1a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar26 = local_1a0._0_8_;
  if (local_1a0._0_8_ != 0) {
    LOCK();
    plVar31 = (long *)(local_1a0._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_1a0._8_8_;
      local_1a0 = auVar14 << 0x40;
      Memory::free_static((void *)(uVar26 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_118,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,10);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_anchor_detection_is_enabled";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_1b0 = 0;
  local_1a8 = (char *)0x0;
  local_178 = "enabled";
  local_170 = 7;
  String::parse_latin1((StrRange *)&local_1a8);
  local_178 = (char *)0x0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1a8);
  }
  Vector<String>::push_back((Vector<String> *)local_1b8,(StrRange *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_set_anchor_detection_is_enabled";
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_1a8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  Vector<int>::push_back(local_118,0);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_camera_feed_id";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,0xc);
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = "";
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_1a0._8_8_;
  local_1a0 = auVar24 << 0x40;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1c8 = 0;
  local_1a8 = (char *)CONCAT44(local_1a8._4_4_,2);
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (undefined1  [16])0x0;
  if (local_1d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1d0);
    local_180 = 6;
    if (local_190 == 0x11) {
      StringName::StringName((StringName *)&local_1c0,(CowData<char32_t> *)&local_188,false);
      if (local_1a0._8_8_ == local_1c0) {
        if ((StringName::configured != '\0') && (local_1c0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_1a0._8_8_ = local_1c0;
      }
      goto LAB_00109e05;
    }
  }
  local_180 = 6;
  StringName::operator=((StringName *)(local_1a0 + 8),local_208);
LAB_00109e05:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1d8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = CONCAT44(local_120._4_4_,3);
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_color_texture";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_depth_texture";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  local_168 = (undefined1  [16])0x0;
  local_1a8 = "_get_velocity_texture";
  local_1b0 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_1a0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_178);
  local_140 = CONCAT44(local_140._4_4_,8);
  GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_1a8);
  PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  local_120 = local_120 & 0xffffffff00000000;
  local_1c0 = 0;
  local_1a8 = "XRInterfaceExtension";
  local_1a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_1c0);
  StringName::StringName((StringName *)&local_1a8,(StrRange *)&local_1c0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1a8,(MethodInfo *)&local_178,true,local_1b8,false);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_178);
  CowData<String>::_unref((CowData<String> *)&local_1b0);
  D_METHODP((char *)&local_178,(char ***)"get_color_texture",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (char **)0x0;
  pMVar27 = create_method_bind<XRInterfaceExtension,RID>((_func_RID *)0x209);
  ClassDB::bind_methodfi(1,pMVar27,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  uVar26 = local_168._0_8_;
  if ((long *)local_168._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_168._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_168._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_168._0_8_ + -8);
      lVar32 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_168._8_8_;
      local_168 = auVar4 << 0x40;
      plVar31 = (long *)uVar26;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar32 = lVar32 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar1 != lVar32);
      }
      Memory::free_static((long *)(uVar26 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_178,(char ***)"get_depth_texture",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (char **)0x0;
  pMVar27 = create_method_bind<XRInterfaceExtension,RID>((_func_RID *)0x211);
  ClassDB::bind_methodfi(1,pMVar27,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  uVar26 = local_168._0_8_;
  if ((long *)local_168._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_168._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_168._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_168._0_8_ + -8);
      lVar32 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_168._8_8_;
      local_168 = auVar5 << 0x40;
      plVar31 = (long *)uVar26;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar32 = lVar32 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar1 != lVar32);
      }
      Memory::free_static((long *)(uVar26 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_178,(char ***)"get_velocity_texture",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (char **)0x0;
  pMVar27 = create_method_bind<XRInterfaceExtension,RID>((_func_RID *)0x219);
  ClassDB::bind_methodfi(1,pMVar27,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  uVar26 = local_168._0_8_;
  if ((long *)local_168._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_168._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_168._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_168._0_8_ + -8);
      lVar32 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_168._8_8_;
      local_168 = auVar6 << 0x40;
      plVar31 = (long *)uVar26;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar32 = lVar32 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar1 != lVar32);
      }
      Memory::free_static((long *)(uVar26 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_b0 = (char *)0x0;
  local_108 = puVar25;
  pcStack_100 = "src_rect";
  local_f8 = "dst_rect";
  pcStack_f0 = "use_layer";
  local_e8 = "layer";
  pcStack_e0 = "apply_lens_distortion";
  local_b8 = "aspect_ratio";
  local_d8 = "eye_center";
  puStack_d0 = &_LC67;
  local_c8 = &_LC68;
  pcStack_c0 = "upscale";
  ppcVar28 = &local_108;
  pppcVar30 = &local_a8;
  do {
    *pppcVar30 = ppcVar28;
    ppcVar28 = ppcVar28 + 1;
    pppcVar30 = pppcVar30 + 1;
  } while (&local_b0 != ppcVar28);
  uVar29 = (uint)&local_a8;
  D_METHODP((char *)&local_178,(char ***)"add_blit",uVar29);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (char **)0x0;
  pMVar27 = create_method_bind<XRInterfaceExtension,RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
                      (add_blit);
  ClassDB::bind_methodfi(1,pMVar27,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  uVar26 = local_168._0_8_;
  if ((long *)local_168._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_168._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_168._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_168._0_8_ + -8);
      lVar32 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_168._8_8_;
      local_168 = auVar7 << 0x40;
      plVar31 = (long *)uVar26;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar32 = lVar32 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar1 != lVar32);
      }
      Memory::free_static((long *)(uVar26 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = "render_target";
  pcStack_100 = (char *)0x0;
  local_a8 = &local_108;
  D_METHODP((char *)&local_178,(char ***)"get_render_target_texture",uVar29);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (char **)0x0;
  pMVar27 = create_method_bind<XRInterfaceExtension,RID,RID>(get_render_target_texture);
  ClassDB::bind_methodfi(1,pMVar27,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  uVar26 = local_168._0_8_;
  if ((long *)local_168._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_168._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_168._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_168._0_8_ + -8);
      lVar32 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_168._8_8_;
      local_168 = auVar8 << 0x40;
      plVar31 = (long *)uVar26;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar32 = lVar32 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar1 != lVar32);
      }
      Memory::free_static((long *)(uVar26 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::get_projection_for_view(unsigned int, double, double, double) */

Projection *
XRInterfaceExtension::get_projection_for_view
          (uint param_1,double param_2,double param_3,double param_4)

{
  Variant *pVVar1;
  double *pdVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  Variant **ppVVar13;
  code *pcVar14;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Projection *this;
  Variant *pVVar15;
  long in_FS_OFFSET;
  bool bVar16;
  ulong local_1e0;
  double local_1d8;
  Variant *local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_198;
  long local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158 [2];
  undefined8 local_148;
  ulong local_140;
  Vector<int> local_138 [8];
  undefined8 local_130;
  int local_128 [8];
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant *pVStack_f0;
  undefined8 local_e8 [8];
  Variant *local_a8;
  double *pdStack_a0;
  Variant **local_98;
  undefined8 *apuStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  this = (Projection *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Projection::Projection((Projection *)local_e8);
  plVar12 = *(long **)(in_RSI + 0x98);
  if (plVar12 == (long *)0x0) {
LAB_0010aec4:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 1000) == '\0')) {
      local_198 = 0;
      local_188 = (undefined1  [16])0x0;
      local_190 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 6;
      local_160 = 1;
      local_158[0] = 0;
      local_148 = 0;
      local_140 = 0;
      local_130 = 0;
      String::parse_latin1((String *)&local_198,"_get_projection_for_view");
      local_160 = CONCAT44(local_160._4_4_,8);
      GetTypeInfo<Vector<double>,void>::get_class_info
                ((GetTypeInfo<Vector<double>,void> *)&local_1c8);
      PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      local_140 = local_140 & 0xffffffff00000000;
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,7);
      GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,10);
      GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,10);
      GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,10);
      uVar8 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(in_RSI + 0x3f0) = 0;
      lVar11 = *(long *)(in_RSI + 8);
      pcVar14 = *(code **)(lVar11 + 0xd8);
      if (((pcVar14 == (code *)0x0) || (*(long *)(lVar11 + 0xe0) == 0)) &&
         (pcVar14 = *(code **)(lVar11 + 0xd0), pcVar14 == (code *)0x0)) {
        local_1d8 = 0.0;
        String::parse_latin1((String *)&local_1d8,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_1d0,(String *)&local_1d8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_1c8,(StringName *)&local_1d0);
        if (CONCAT44(uStack_1bc,uStack_1c0) == 0) {
          lVar11 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_1c0);
          if (StringName::configured != '\0') goto LAB_0010b4f5;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
LAB_0010b514:
          lVar11 = *(long *)(in_RSI + 8);
          pcVar14 = *(code **)(lVar11 + 200);
          if (((pcVar14 == (code *)0x0) || (*(long *)(lVar11 + 0xe0) == 0)) &&
             (pcVar14 = *(code **)(lVar11 + 0xc0), pcVar14 == (code *)0x0)) goto LAB_0010b3e8;
          uVar10 = (*pcVar14)(*(undefined8 *)(lVar11 + 0xa0),in_RSI + 0x3e0);
          *(undefined8 *)(in_RSI + 0x3f0) = uVar10;
        }
        else {
          lVar11 = *(long *)(CONCAT44(uStack_1bc,uStack_1c0) + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_1c0);
          if (StringName::configured != '\0') {
LAB_0010b4f5:
            if (local_1d0 != (Variant *)0x0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
          if (lVar11 == 0) goto LAB_0010b514;
        }
        lVar11 = *(long *)(in_RSI + 8);
      }
      else {
        uVar10 = (*pcVar14)(*(undefined8 *)(lVar11 + 0xa0),in_RSI + 0x3e0,uVar8);
        *(undefined8 *)(in_RSI + 0x3f0) = uVar10;
        lVar11 = *(long *)(in_RSI + 8);
      }
LAB_0010b3e8:
      if (*(char *)(lVar11 + 0x29) != '\0') {
        plVar12 = (long *)operator_new(0x18,"");
        *plVar12 = in_RSI + 0x3f0;
        plVar12[1] = in_RSI + 1000;
        plVar12[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar12;
      }
      *(undefined1 *)(in_RSI + 1000) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_198);
    }
    pcVar14 = *(code **)(in_RSI + 0x3f0);
    if (pcVar14 == (code *)0x0) {
      Projection::Projection(this);
      goto LAB_0010b090;
    }
    pdStack_a0 = &local_1d8;
    local_a8 = (Variant *)&local_1e0;
    apuStack_90[0] = &local_1c8;
    ppVVar13 = &local_1d0;
    pcVar4 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    local_190 = 0;
    local_1e0 = (ulong)in_EDX;
    local_1d8 = param_2;
    local_1d0 = (Variant *)param_3;
    local_98 = ppVVar13;
    local_1c8 = param_4;
    if (pcVar4 == (code *)0x0) {
      (*pcVar14)(*(undefined8 *)(in_RSI + 0x10),&local_a8,&local_198);
      plVar12 = (long *)(local_190 + -0x10);
      if (local_190 != 0) {
        do {
          lVar11 = *plVar12;
          if (lVar11 == 0) goto LAB_0010b1a0;
          ppVVar13 = (Variant **)(lVar11 + 1);
          LOCK();
          lVar9 = *plVar12;
          bVar16 = lVar11 == lVar9;
          if (bVar16) {
            *plVar12 = (long)ppVVar13;
            lVar9 = lVar11;
          }
          UNLOCK();
        } while (!bVar16);
        goto LAB_0010afb7;
      }
    }
    else {
      ppVVar13 = &local_a8;
      (*pcVar4)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x3e0,pcVar14,ppVVar13,&local_198);
      plVar12 = (long *)(local_190 + -0x10);
      if (local_190 != 0) {
        do {
          lVar11 = *plVar12;
          if (lVar11 == 0) goto LAB_0010b1a0;
          ppVVar13 = (Variant **)(lVar11 + 1);
          LOCK();
          lVar9 = *plVar12;
          bVar16 = lVar11 == lVar9;
          if (bVar16) {
            *plVar12 = (long)ppVVar13;
            lVar9 = lVar11;
          }
          UNLOCK();
        } while (!bVar16);
LAB_0010afb7:
        lVar11 = local_190;
        lVar7 = local_190;
        if (lVar9 == -1) {
LAB_0010b1a0:
          lVar11 = 0;
          lVar7 = local_190;
        }
        local_190 = lVar7;
        if (lVar7 != 0) {
          LOCK();
          plVar12 = (long *)(lVar7 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_190 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
          goto LAB_0010affc;
        }
      }
    }
  }
  else {
    local_1c8._0_4_ = 0;
    local_1c8._4_4_ = 0;
    uStack_1c0 = 0;
    Variant::Variant((Variant *)&local_a8,in_EDX);
    Variant::Variant((Variant *)apuStack_90,param_2);
    Variant::Variant(local_78,param_3);
    Variant::Variant(local_60,param_4);
    ppVVar13 = &local_108;
    local_108 = (Variant *)&local_a8;
    pVStack_100 = (Variant *)apuStack_90;
    local_f8 = local_78;
    pVStack_f0 = local_60;
    (**(code **)(*plVar12 + 0x60))(local_128,plVar12,in_RSI + 0x3e0,ppVVar13,4,&local_1c8);
    if ((int)local_1c8 != 0) {
      if (Variant::needs_deinit[local_128[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar15 = local_48;
      do {
        pVVar1 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != (Variant *)&local_a8);
      goto LAB_0010aec4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_198);
    lVar11 = local_190;
    if (Variant::needs_deinit[local_128[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar15 = local_48;
    do {
      pVVar1 = pVVar15 + -0x18;
      pVVar15 = pVVar15 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar15 != (Variant *)&local_a8);
LAB_0010affc:
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + -8) == 0x10) {
        lVar9 = 0;
        do {
          pdVar2 = (double *)(lVar11 + lVar9 * 2);
          pdVar3 = (double *)(lVar11 + 0x10 + lVar9 * 2);
          dVar5 = *pdVar3;
          dVar6 = pdVar3[1];
          *(ulong *)((Projection *)local_e8 + lVar9) = CONCAT44((float)pdVar2[1],(float)*pdVar2);
          *(ulong *)((long)local_e8 + lVar9 + 8) = CONCAT44((float)dVar6,(float)dVar5);
          lVar9 = lVar9 + 0x10;
        } while (lVar9 != 0x40);
        *(undefined8 *)this = local_e8[0];
        *(undefined8 *)(this + 8) = local_e8[1];
        *(undefined8 *)(this + 0x10) = local_e8[2];
        *(undefined8 *)(this + 0x18) = local_e8[3];
        *(undefined8 *)(this + 0x20) = local_e8[4];
        *(undefined8 *)(this + 0x28) = local_e8[5];
        *(undefined8 *)(this + 0x30) = local_e8[6];
        *(undefined8 *)(this + 0x38) = local_e8[7];
      }
      else {
        _err_print_error("get_projection_for_view","servers/xr/xr_interface_extension.cpp",0xe1,
                         "Condition \"arr.size() != 16\" is true. Returning: Projection()",
                         "Projection matrix must contain 16 floats",0,0);
        Projection::Projection(this);
      }
      plVar12 = (long *)(lVar11 + -0x10);
      LOCK();
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        Memory::free_static(plVar12,false);
      }
      goto LAB_0010b090;
    }
  }
  _err_print_error("get_projection_for_view","servers/xr/xr_interface_extension.cpp",0xe1,
                   "Condition \"arr.size() != 16\" is true. Returning: Projection()",
                   "Projection matrix must contain 16 floats",0,0,ppVVar13);
  Projection::Projection(this);
LAB_0010b090:
  Projection::~Projection((Projection *)local_e8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* XRInterfaceExtension::pre_draw_viewport(RID) */

bool __thiscall
XRInterfaceExtension::pre_draw_viewport(XRInterfaceExtension *this,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<bool,void> local_128 [8];
  long local_120 [5];
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = param_2;
  if (plVar4 != (long *)0x0) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,(RID *)&local_140);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x488,&local_80,1,&local_f8);
    if (local_f8 == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b722;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x490] == (XRInterfaceExtension)0x0)) {
    local_f8 = 0;
    uStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_pre_draw_viewport");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info(local_128);
    PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x498) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_0010b9dd;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010b9fa:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010b909;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x488);
        *(undefined8 *)(this + 0x498) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_0010b9dd:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_0010b9fa;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x488,uVar1);
      *(undefined8 *)(this + 0x498) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010b909:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x498);
      plVar4[1] = (long)(this + 0x490);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x490] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x498);
  bVar6 = true;
  if (pcVar5 != (code *)0x0) {
    local_f8 = (int)local_140;
    uStack_f4 = (undefined4)((ulong)local_140 >> 0x20);
    local_58[0] = &local_f8;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,local_128);
      bVar6 = local_128[0] != (GetTypeInfo<bool,void>)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x488,pcVar5,local_58,local_128);
      bVar6 = local_128[0] != (GetTypeInfo<bool,void>)0x0;
    }
  }
LAB_0010b722:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* XRInterfaceExtension::get_transform_for_view(unsigned int, Transform3D const&) */

undefined1 (*) [16] XRInterfaceExtension::get_transform_for_view(uint param_1,Transform3D *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  Transform3D *in_RCX;
  code *pcVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar7) [16];
  long in_FS_OFFSET;
  uint uVar8;
  undefined8 local_188;
  long local_180;
  GetTypeInfo<Transform3D,void> local_178 [8];
  long local_170 [5];
  uint local_148 [2];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  ulong local_f0;
  Vector<int> local_e8 [8];
  undefined8 local_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  uint *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  uVar8 = _LC50;
  pauVar7 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  plVar5 = *(long **)(param_2 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pauVar7[2] = 0x3f800000;
  *(undefined8 *)(pauVar7[2] + 4) = 0;
  *(undefined4 *)(pauVar7[2] + 0xc) = 0;
  *pauVar7 = ZEXT416(uVar8);
  pauVar7[1] = ZEXT416(uVar8);
  if (plVar5 != (long *)0x0) {
    local_148[0] = 0;
    local_148[1] = 0;
    uStack_140 = 0;
    Variant::Variant((Variant *)&local_a8,in_EDX);
    Variant::Variant((Variant *)&uStack_90,in_RCX);
    local_d8 = (Variant *)&local_a8;
    pVStack_d0 = (Variant *)&uStack_90;
    (**(code **)(*plVar5 + 0x60))(&local_c8,plVar5,param_2 + 0x3c8,&local_d8,2,local_148);
    if (local_148[0] == 0) {
      Variant::operator_cast_to_Transform3D((Variant *)local_78);
      cVar1 = Variant::needs_deinit[(int)local_c8];
      *(undefined8 *)*pauVar7 = local_78._0_8_;
      *(undefined8 *)(*pauVar7 + 8) = local_78._8_8_;
      *(undefined8 *)pauVar7[1] = local_68._0_8_;
      *(undefined8 *)(pauVar7[1] + 8) = local_68._8_8_;
      *(ulong *)pauVar7[2] = CONCAT44(uStack_54,local_58);
      *(ulong *)(pauVar7[2] + 8) = CONCAT44(uStack_4c,uStack_50);
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)uStack_90] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010bc03;
    }
    if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)uStack_90] != '\0') {
      Variant::_clear_internal();
    }
    uVar8 = _LC50;
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
      uVar8 = _LC50;
    }
  }
  if ((*(long *)(param_2 + 8) != 0) && (param_2[0x3d0] == (Transform3D)0x0)) {
    local_148[0] = 0;
    local_148[1] = 0;
    local_138 = (undefined1  [16])0x0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 6;
    local_110 = 1;
    local_108[0] = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e0 = 0;
    String::parse_latin1((String *)local_148,"_get_transform_for_view");
    local_110 = CONCAT44(local_110._4_4_,8);
    GetTypeInfo<Transform3D,void>::get_class_info(local_178);
    PropertyInfo::operator=((PropertyInfo *)&uStack_140,(PropertyInfo *)local_178);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_178);
    local_f0 = local_f0 & 0xffffffff00000000;
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)local_178);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)local_178);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_178);
    Vector<int>::push_back(local_e8,7);
    GetTypeInfo<Transform3D_const&,void>::get_class_info
              ((GetTypeInfo<Transform3D_const&,void> *)local_178);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)local_178);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_178);
    Vector<int>::push_back(local_e8,0);
    uVar2 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(param_2 + 0x3d8) = 0;
    lVar4 = *(long *)(param_2 + 8);
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_188 = 0;
      String::parse_latin1((String *)&local_188,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_180,(String *)&local_188,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_178,(StringName *)&local_180);
      if (local_170[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
        if (StringName::configured != '\0') goto LAB_0010c0a3;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
LAB_0010c0c4:
        lVar4 = *(long *)(param_2 + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010bf51;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),param_2 + 0x3c8);
        *(undefined8 *)(param_2 + 0x3d8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_170[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
        if (StringName::configured != '\0') {
LAB_0010c0a3:
          if (local_180 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
        if (lVar4 == 0) goto LAB_0010c0c4;
      }
      lVar4 = *(long *)(param_2 + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),param_2 + 0x3c8,uVar2);
      *(undefined8 *)(param_2 + 0x3d8) = uVar3;
      lVar4 = *(long *)(param_2 + 8);
    }
LAB_0010bf51:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(param_2 + 0x3d8);
      plVar5[1] = (long)(param_2 + 0x3d0);
      plVar5[2] = *(long *)(param_2 + 0x168);
      *(long **)(param_2 + 0x168) = plVar5;
    }
    param_2[0x3d0] = (Transform3D)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_148);
    uVar8 = _LC50;
  }
  pcVar6 = *(code **)(param_2 + 0x3d8);
  if (pcVar6 != (code *)0x0) {
    puStack_c0 = &local_a8;
    local_c8 = local_148;
    local_a8 = *(undefined8 *)in_RCX;
    uStack_a0 = *(undefined8 *)(in_RCX + 8);
    local_98 = *(undefined8 *)(in_RCX + 0x10);
    uStack_90 = *(undefined8 *)(in_RCX + 0x18);
    local_148[1] = 0;
    local_88 = *(undefined8 *)(in_RCX + 0x20);
    uStack_80 = *(undefined8 *)(in_RCX + 0x28);
    local_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_78 = ZEXT416(uVar8);
    local_68 = ZEXT416(uVar8);
    local_148[0] = in_EDX;
    if (*(code **)(*(long *)(param_2 + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(param_2 + 0x10),&local_c8,local_78);
    }
    else {
      (**(code **)(*(long *)(param_2 + 8) + 0xe0))
                (*(undefined8 *)(param_2 + 0x10),param_2 + 0x3c8,pcVar6,&local_c8,local_78);
    }
    *(undefined8 *)*pauVar7 = local_78._0_8_;
    *(undefined8 *)(*pauVar7 + 8) = local_78._8_8_;
    *(undefined8 *)pauVar7[1] = local_68._0_8_;
    *(undefined8 *)(pauVar7[1] + 8) = local_68._8_8_;
    *(ulong *)pauVar7[2] = CONCAT44(uStack_54,local_58);
    *(ulong *)(pauVar7[2] + 8) = CONCAT44(uStack_4c,uStack_50);
  }
LAB_0010bc03:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar7;
}



/* XRInterfaceExtension::set_anchor_detection_is_enabled(bool) */

void __thiscall
XRInterfaceExtension::set_anchor_detection_is_enabled(XRInterfaceExtension *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  char *local_128;
  long local_120 [5];
  int local_f8 [4];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x350,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8[0] == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010c2aa;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x358] == (XRInterfaceExtension)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_set_anchor_detection_is_enabled";
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120[0] = 0x20;
    String::parse_latin1((StrRange *)local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x360) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_0010c4e7;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010c504:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010c440;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x350);
        *(undefined8 *)(this + 0x360) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_0010c4e7:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_0010c504;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x350,uVar1);
      *(undefined8 *)(this + 0x360) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010c440:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x360);
      plVar4[1] = (long)(this + 0x358);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x358] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar5 = *(code **)(this + 0x360);
  if (pcVar5 != (code *)0x0) {
    local_58[0] = local_f8;
    local_f8[0] = CONCAT31(local_f8[0]._1_3_,param_1);
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x350,pcVar5,local_58,0);
    }
  }
LAB_0010c2aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::set_play_area_mode(XRInterface::PlayAreaMode) */

bool __thiscall XRInterfaceExtension::set_play_area_mode(XRInterfaceExtension *this,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_138;
  long local_130;
  char *local_128;
  long local_120 [5];
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_2);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x308,&local_80,1,local_f8);
    if (local_f8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010c6f6;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x310] == (XRInterfaceExtension)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_set_play_area_mode";
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120[0] = 0x13;
    String::parse_latin1((StrRange *)local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_128);
    PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
              ((GetTypeInfo<XRInterface::PlayAreaMode,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x318) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_0010c9b4;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010c9d1:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010c8e0;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x308);
        *(undefined8 *)(this + 0x318) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_0010c9b4:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_0010c9d1;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x308,uVar1);
      *(undefined8 *)(this + 0x318) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010c8e0:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x318);
      plVar4[1] = (long)(this + 0x310);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x310] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar5 = *(code **)(this + 0x318);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    local_f8[1] = 0;
    local_58[0] = local_f8;
    local_f8[0] = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,&local_128);
      bVar6 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x308,pcVar5,local_58,&local_128);
      bVar6 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
    }
  }
LAB_0010c6f6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* XRInterfaceExtension::supports_play_area_mode(XRInterface::PlayAreaMode) */

bool __thiscall
XRInterfaceExtension::supports_play_area_mode(XRInterfaceExtension *this,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_138;
  long local_130;
  char *local_128;
  long local_120 [5];
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_2);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2d8,&local_80,1,local_f8);
    if (local_f8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010cbc6;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2e0] == (XRInterfaceExtension)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_supports_play_area_mode";
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120[0] = 0x18;
    String::parse_latin1((StrRange *)local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_128);
    PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
              ((GetTypeInfo<XRInterface::PlayAreaMode,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2e8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_0010ce84;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010cea1:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010cdb0;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2d8);
        *(undefined8 *)(this + 0x2e8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_0010ce84:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_0010cea1;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2d8,uVar1);
      *(undefined8 *)(this + 0x2e8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010cdb0:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2e8);
      plVar4[1] = (long)(this + 0x2e0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2e0] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar5 = *(code **)(this + 0x2e8);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    local_f8[1] = 0;
    local_58[0] = local_f8;
    local_f8[0] = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,&local_128);
      bVar6 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2d8,pcVar5,local_58,&local_128);
      bVar6 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
    }
  }
LAB_0010cbc6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* XRInterfaceExtension::trigger_haptic_pulse(String const&, StringName const&, double, double,
   double, double) */

void __thiscall
XRInterfaceExtension::trigger_haptic_pulse
          (XRInterfaceExtension *this,String *param_1,StringName *param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  Variant *pVVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  long local_1e8;
  long local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  long local_1c0 [5];
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158 [2];
  undefined8 local_148;
  undefined8 local_140;
  Vector<int> local_138 [8];
  undefined8 local_130;
  int local_128 [8];
  Variant *local_108;
  Variant *pVStack_100;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_e8;
  Variant *pVStack_e0;
  CowData<char32_t> *local_d8;
  StringName *pSStack_d0;
  double *local_c8;
  double *pdStack_c0;
  double *local_b8;
  undefined8 *puStack_b0;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_198._0_4_ = 0;
    local_198._4_4_ = 0;
    uStack_190 = 0;
    Variant::Variant((Variant *)&local_d8,(String *)param_1);
    Variant::Variant((Variant *)&pdStack_c0,param_2);
    Variant::Variant(local_a8,param_3);
    Variant::Variant(local_90,param_4);
    Variant::Variant(local_78,param_5);
    Variant::Variant(local_60,param_6);
    local_108 = (Variant *)&local_d8;
    pVStack_100 = (Variant *)&pdStack_c0;
    local_f8 = local_a8;
    pVStack_f0 = local_90;
    local_e8 = local_78;
    pVStack_e0 = local_60;
    (**(code **)(*plVar5 + 0x60))(local_128,plVar5,this + 0x2c0,&local_108,6,&local_198);
    if (Variant::needs_deinit[local_128[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_198 == 0) {
      pVVar7 = local_48;
      do {
        pVVar1 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)&local_d8);
      goto LAB_0010d12f;
    }
    pVVar7 = local_48;
    do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)&local_d8);
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2c8] == (XRInterfaceExtension)0x0)) {
    local_198._0_4_ = 0;
    local_198._4_4_ = 0;
    local_188 = (undefined1  [16])0x0;
    uStack_190 = 0;
    uStack_18c = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 6;
    local_160 = 1;
    local_158[0] = 0;
    local_148 = 0;
    local_140 = 0;
    local_130 = 0;
    String::parse_latin1((String *)&local_198,"_trigger_haptic_pulse");
    local_160 = CONCAT44(local_160._4_4_,8);
    GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_1c8);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
    Vector<int>::push_back(local_138,0);
    GetTypeInfo<StringName_const&,void>::get_class_info
              ((GetTypeInfo<StringName_const&,void> *)&local_1c8);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
    Vector<int>::push_back(local_138,0);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
    Vector<int>::push_back(local_138,10);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
    Vector<int>::push_back(local_138,10);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
    Vector<int>::push_back(local_138,10);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_1c8);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
    Vector<int>::push_back(local_138,10);
    uVar2 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x2d0) = 0;
    lVar4 = *(long *)(this + 8);
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_1d8 = 0.0;
      String::parse_latin1((String *)&local_1d8,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_1d0,(String *)&local_1d8,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_1c8,(StringName *)&local_1d0);
      if (local_1c0[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1c0);
        if (StringName::configured != '\0') goto LAB_0010d5b5;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
LAB_0010d5d2:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010d51b;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2c0);
        *(undefined8 *)(this + 0x2d0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_1c0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1c0);
        if (StringName::configured != '\0') {
LAB_0010d5b5:
          if (local_1d0 != 0.0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
        if (lVar4 == 0) goto LAB_0010d5d2;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2c0,uVar2);
      *(undefined8 *)(this + 0x2d0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010d51b:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x2d0);
      plVar5[1] = (long)(this + 0x2c8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x2c8] = (XRInterfaceExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  }
  if (*(long *)(this + 0x2d0) != 0) {
    local_1e8 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_1e0,param_2);
    local_c8 = &local_1d8;
    pdStack_c0 = &local_1d0;
    local_b8 = &local_1c8;
    puStack_b0 = &local_198;
    local_1d8 = param_3;
    local_1d0 = param_4;
    local_1c8 = param_5;
    local_d8 = (CowData<char32_t> *)&local_1e8;
    pSStack_d0 = (StringName *)&local_1e0;
    local_198 = param_6;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x2d0))(*(undefined8 *)(this + 0x10),&local_d8,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2c0,*(undefined8 *)(this + 0x2d0),&local_d8,0
                );
    }
    if ((StringName::configured != '\0') && (local_1e0 != 0)) {
      StringName::unref();
    }
    lVar4 = local_1e8;
    if (local_1e8 != 0) {
      LOCK();
      plVar5 = (long *)(local_1e8 + -0x10);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        local_1e8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
LAB_0010d12f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRInterfaceExtension::get_suggested_pose_names(StringName const&) const */

StringName * XRInterfaceExtension::get_suggested_pose_names(StringName *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  StringName *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  int local_128 [2];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_f8;
  long local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  StringName *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar4 != (long *)0x0) {
    local_128[0] = 0;
    local_128[1] = 0;
    uStack_120 = 0;
    Variant::Variant((Variant *)local_78,in_RDX);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,in_RSI + 0x290,&local_80,1,local_128);
    if (local_128[0] == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_f8);
      if (*(long *)(param_1 + 8) != local_f0) {
        CowData<String>::_unref((CowData<String> *)(param_1 + 8));
        lVar3 = local_f0;
        local_f0 = 0;
        *(long *)(param_1 + 8) = lVar3;
      }
      CowData<String>::_unref((CowData<String> *)&local_f0);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010d782;
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x298) == '\0')) {
    local_f8 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_get_suggested_pose_names");
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_128);
    PropertyInfo::operator=((PropertyInfo *)&local_f0,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    local_a0 = local_a0 & 0xffffffff00000000;
    GetTypeInfo<StringName_const&,void>::get_class_info
              ((GetTypeInfo<StringName_const&,void> *)local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x2a0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (CONCAT44(uStack_11c,uStack_120) == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_120);
        if (StringName::configured != '\0') goto LAB_0010db3c;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010db5b:
        lVar3 = *(long *)(in_RSI + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010da68;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 0x290);
        *(undefined8 *)(in_RSI + 0x2a0) = uVar2;
      }
      else {
        lVar3 = *(long *)(CONCAT44(uStack_11c,uStack_120) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_120);
        if (StringName::configured != '\0') {
LAB_0010db3c:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_0010db5b;
      }
      lVar3 = *(long *)(in_RSI + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),in_RSI + 0x290,uVar1);
      *(undefined8 *)(in_RSI + 0x2a0) = uVar2;
      lVar3 = *(long *)(in_RSI + 8);
    }
LAB_0010da68:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = in_RSI + 0x2a0;
      plVar4[1] = in_RSI + 0x298;
      plVar4[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar4;
    }
    *(undefined1 *)(in_RSI + 0x298) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  if (*(long *)(in_RSI + 0x2a0) != 0) {
    StringName::StringName((StringName *)&local_130,in_RDX);
    uStack_120 = 0;
    uStack_11c = 0;
    pcVar5 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    local_58[0] = (StringName *)&local_130;
    if (pcVar5 == (code *)0x0) {
      (**(code **)(in_RSI + 0x2a0))(*(undefined8 *)(in_RSI + 0x10),local_58,local_128);
    }
    else {
      (*pcVar5)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x290,*(undefined8 *)(in_RSI + 0x2a0),
                local_58,local_128);
    }
    local_f0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_f0,(CowData *)&uStack_120);
    lVar3 = local_f0;
    if (*(long *)(param_1 + 8) != local_f0) {
      CowData<String>::_unref((CowData<String> *)(param_1 + 8));
      *(long *)(param_1 + 8) = lVar3;
      local_f0 = 0;
    }
    CowData<String>::_unref((CowData<String> *)&local_f0);
    CowData<String>::_unref((CowData<String> *)&uStack_120);
    if ((StringName::configured != '\0') && (local_130 != 0)) {
      StringName::unref();
    }
  }
LAB_0010d782:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* XRInterfaceExtension::post_draw_viewport(RID, Rect2 const&) */

long XRInterfaceExtension::post_draw_viewport
               (long param_1,long param_2,undefined8 param_3,Rect2 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_160;
  undefined8 local_158;
  long local_150;
  GetTypeInfo<RID,void> local_148 [8];
  long local_140 [5];
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int *local_78;
  undefined8 *puStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<BlitToScreen>::resize<false>((CowData<BlitToScreen> *)(param_2 + 0x1b8),0);
  plVar5 = *(long **)(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0x1a8) = 1;
  local_160 = param_3;
  if (plVar5 != (long *)0x0) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(RID *)&local_160);
    Variant::Variant((Variant *)local_60,param_4);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar5 + 0x60))(&local_98,plVar5,param_2 + 0x4a0,&local_a8,2,&local_118);
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    if (local_118 == 0) {
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010ddc7;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(param_2 + 8) != 0) && (*(char *)(param_2 + 0x4a8) == '\0')) {
    local_118 = 0;
    uStack_114 = 0;
    local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)&local_118,"_post_draw_viewport");
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<RID,void>::get_class_info(local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<Rect2_const&,void>::get_class_info((GetTypeInfo<Rect2_const&,void> *)local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
    Vector<int>::push_back(local_b8,0);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x4b0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"XRInterfaceExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_0010e0e2;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010e103:
        lVar4 = *(long *)(param_2 + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010dfe2;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),param_2 + 0x4a0);
        *(undefined8 *)(param_2 + 0x4b0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_0010e0e2:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar4 == 0) goto LAB_0010e103;
      }
      lVar4 = *(long *)(param_2 + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),param_2 + 0x4a0,uVar2);
      *(undefined8 *)(param_2 + 0x4b0) = uVar3;
      lVar4 = *(long *)(param_2 + 8);
    }
LAB_0010dfe2:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = param_2 + 0x4b0;
      plVar5[1] = param_2 + 0x4a8;
      plVar5[2] = *(long *)(param_2 + 0x168);
      *(long **)(param_2 + 0x168) = plVar5;
    }
    *(undefined1 *)(param_2 + 0x4a8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  pcVar6 = *(code **)(param_2 + 0x4b0);
  if (pcVar6 == (code *)0x0) {
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  else {
    local_78 = &local_118;
    local_98 = *(undefined8 *)param_4;
    uStack_90 = *(undefined8 *)(param_4 + 8);
    local_118 = (int)local_160;
    uStack_114 = (undefined4)((ulong)local_160 >> 0x20);
    puStack_70 = &local_98;
    pcVar1 = *(code **)(*(long *)(param_2 + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(param_2 + 0x10),&local_78,0);
    }
    else {
      (*pcVar1)(*(undefined8 *)(param_2 + 0x10),param_2 + 0x4a0,pcVar6,&local_78,0);
    }
  }
LAB_0010ddc7:
  *(undefined8 *)(param_1 + 8) = 0;
  CowData<BlitToScreen>::_ref((CowData<BlitToScreen> *)(param_1 + 8),(CowData *)(param_2 + 0x1b8));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* XRInterfaceExtension::add_blit(RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double,
   double, double, double) */

void XRInterfaceExtension::add_blit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
               double param_5,double param_6,double param_7,long param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined1 param_12,undefined4 param_13,
               undefined1 param_14)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_8 + 0x1a8) == '\0') {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_blit","servers/xr/xr_interface_extension.cpp",0x10a,
                       "Condition \"!can_add_blits\" is true.",
                       "add_blit can only be called from an XR plugin from within _post_draw_viewport!"
                       ,0);
      return;
    }
    goto LAB_0010e45a;
  }
  uStack_a0 = CONCAT31(uStack_a0._1_3_,param_12);
  local_98 = CONCAT31(local_98._1_3_,param_14);
  uStack_94 = (undefined4)param_3;
  uStack_90 = (undefined4)((ulong)param_3 >> 0x20);
  if (*(long *)(param_8 + 0x1b8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_8 + 0x1b8) + -8) + 1;
  }
  iVar2 = CowData<BlitToScreen>::resize<false>((CowData<BlitToScreen> *)(param_8 + 0x1b8),lVar4);
  if (iVar2 != 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
      return;
    }
    goto LAB_0010e45a;
  }
  if (*(long *)(param_8 + 0x1b8) == 0) {
    lVar5 = -1;
    lVar4 = 0;
LAB_0010e40a:
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar4,"p_index","size()","",false,false
              );
  }
  else {
    lVar4 = *(long *)(*(long *)(param_8 + 0x1b8) + -8);
    lVar5 = lVar4 + -1;
    if (lVar5 < 0) goto LAB_0010e40a;
    CowData<BlitToScreen>::_copy_on_write((CowData<BlitToScreen> *)(param_8 + 0x1b8));
    puVar3 = (undefined8 *)(lVar5 * 0x50 + *(long *)(param_8 + 0x1b8));
    *puVar3 = param_9;
    puVar3[1] = param_1;
    puVar3[6] = CONCAT44(uStack_94,local_98);
    puVar3[7] = CONCAT44((float)param_4,uStack_90);
    puVar3[2] = param_2;
    puVar3[3] = param_10;
    puVar3[4] = param_11;
    puVar3[5] = CONCAT44(param_13,uStack_a0);
    *(ulong *)((long)puVar3 + 0x3c) = CONCAT44((float)param_5,(float)param_4);
    *(ulong *)((long)puVar3 + 0x44) = CONCAT44((float)param_7,(float)param_6);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e45a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRInterfaceExtension::get_vrs_texture() */

undefined8 __thiscall XRInterfaceExtension::get_vrs_texture(XRInterfaceExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_0010e4ef:
    if ((*(long *)(this + 8) != 0) && (this[0x400] == (XRInterfaceExtension)0x0)) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      local_f8 = "_get_vrs_texture";
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
      local_f0[0] = 0x10;
      String::parse_latin1((StrRange *)&local_c8);
      local_90 = CONCAT44(local_90._4_4_,8);
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x408) = 0;
      pcVar5 = *(code **)(lVar3 + 0xd8);
      if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"XRInterfaceExtension");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_0010e7c8;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010e7dd:
          lVar3 = *(long *)(this + 8);
          pcVar5 = *(code **)(lVar3 + 200);
          if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010e721;
          uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x3f8);
          *(undefined8 *)(this + 0x408) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010e7c8:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar3 == 0) goto LAB_0010e7dd;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x3f8,uVar1);
        *(undefined8 *)(this + 0x408) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010e721:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x408);
        plVar4[1] = (long)(this + 0x400);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x400] = (XRInterfaceExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar5 = *(code **)(this + 0x408);
    if (pcVar5 == (code *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = XRInterface::get_vrs_texture();
        return uVar2;
      }
      goto LAB_0010e850;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x3f8,pcVar5,0,&local_c8);
      uVar2 = CONCAT44(uStack_c4,local_c8);
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x3f8,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010e4ef;
    }
    uVar2 = Variant::operator_cast_to_RID((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_0010e850:
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



/* XRInterface::is_passthrough_supported() */

undefined8 XRInterface::is_passthrough_supported(void)

{
  return 0;
}



/* XRInterface::is_passthrough_enabled() */

undefined8 XRInterface::is_passthrough_enabled(void)

{
  return 0;
}



/* XRInterface::start_passthrough() */

undefined8 XRInterface::start_passthrough(void)

{
  return 0;
}



/* XRInterface::stop_passthrough() */

void XRInterface::stop_passthrough(void)

{
  return;
}



/* XRInterface::get_environment_blend_mode() const */

undefined8 XRInterface::get_environment_blend_mode(void)

{
  return 0;
}



/* XRInterface::set_environment_blend_mode(XRInterface::EnvironmentBlendMode) */

undefined8 XRInterface::set_environment_blend_mode(void)

{
  return 0;
}



/* XRInterfaceExtension::is_class_ptr(void*) const */

uint __thiscall XRInterfaceExtension::is_class_ptr(XRInterfaceExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &XRInterface::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* XRInterfaceExtension::_getv(StringName const&, Variant&) const */

undefined8 XRInterfaceExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRInterfaceExtension::_setv(StringName const&, Variant const&) */

undefined8 XRInterfaceExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRInterfaceExtension::_validate_propertyv(PropertyInfo&) const */

void XRInterfaceExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* XRInterfaceExtension::_property_can_revertv(StringName const&) const */

undefined8 XRInterfaceExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* XRInterfaceExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 XRInterfaceExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRInterfaceExtension::_notificationv(int, bool) */

void XRInterfaceExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<RID, RID>::_gen_argument_type(int) const */

undefined8 MethodBindTR<RID,RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTR<RID, RID>::get_argument_meta(int) const */

undefined8 MethodBindTR<RID,RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<RID>::_gen_argument_type(int) const */

undefined8 MethodBindTR<RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTR<RID>::get_argument_meta(int) const */

undefined8 MethodBindTR<RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
_gen_argument_type(MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
                   *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((uint)param_1 < 0xb) && (uVar1 = 0x17, param_1 != 0)) && (uVar1 = 7, param_1 != 1)) &&
     ((uVar1 = 8, param_1 != 2 && (uVar1 = 1, param_1 != 3)))) {
    if (param_1 == 4) {
      return 2;
    }
    if (((param_1 != 5) && (uVar1 = 5, param_1 != 6)) && (uVar1 = 3, 1 < param_1 - 7U)) {
      uVar1 = 0;
      if (param_1 != 9) {
        if (param_1 == 10) {
          uVar1 = 3;
        }
        return uVar1;
      }
      return 3;
    }
  }
  return uVar1;
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
get_argument_meta(MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
                  *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 7;
  if ((param_1 != 4) && (bVar1 = 0, 1 < param_1 - 5U)) {
    if (param_1 - 7U < 2) {
      return 10;
    }
    return -(param_1 - 9U < 2) & 10;
  }
  return bVar1;
}



/* MethodBindTR<RID>::~MethodBindTR() */

void __thiscall MethodBindTR<RID>::~MethodBindTR(MethodBindTR<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116be0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<RID>::~MethodBindTR() */

void __thiscall MethodBindTR<RID>::~MethodBindTR(MethodBindTR<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116be0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::~MethodBindT() */

void __thiscall
MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
~MethodBindT(MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
             *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::~MethodBindT() */

void __thiscall
MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
~MethodBindT(MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
             *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<RID, RID>::~MethodBindTR() */

void __thiscall MethodBindTR<RID,RID>::~MethodBindTR(MethodBindTR<RID,RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116ca0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<RID, RID>::~MethodBindTR() */

void __thiscall MethodBindTR<RID,RID>::~MethodBindTR(MethodBindTR<RID,RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116ca0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<BlitToScreen>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<BlitToScreen>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* XRInterfaceExtension::_bind_methods() [clone .cold] */

void XRInterfaceExtension::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* XRInterfaceExtension::_get_class_namev() const */

undefined8 * XRInterfaceExtension::_get_class_namev(void)

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
LAB_0010f293:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f293;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"XRInterfaceExtension");
      goto LAB_0010f2fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"XRInterfaceExtension");
LAB_0010f2fe:
  return &_get_class_namev()::_class_name_static;
}



/* XRInterfaceExtension::~XRInterfaceExtension() */

void __thiscall XRInterfaceExtension::~XRInterfaceExtension(XRInterfaceExtension *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00116938;
  if (bVar3) {
    if (*(long *)(this + 0x4b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x4a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x488) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x470) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x458) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x440) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x428) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x410) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x3f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x3e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x3c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x3b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x398) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x380) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x368) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x350) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x338) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 800) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x308) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x2f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x2d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x2c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x2a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x260) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f780;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
    }
  }
LAB_0010f780:
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      XRInterface::~XRInterface((XRInterface *)this);
      return;
    }
  }
  XRInterface::~XRInterface((XRInterface *)this);
  return;
}



/* XRInterfaceExtension::~XRInterfaceExtension() */

void __thiscall XRInterfaceExtension::~XRInterfaceExtension(XRInterfaceExtension *this)

{
  ~XRInterfaceExtension(this);
  operator_delete(this,0x4d0);
  return;
}



/* XRInterfaceExtension::get_class() const */

void XRInterfaceExtension::get_class(void)

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



/* MethodBindTR<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<RID>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x17;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010f9fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f9fc:
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
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
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
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
      return;
    }
  }
  return;
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
  local_48 = &_LC10;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0010fc5c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fc5c:
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



/* GetTypeInfo<unsigned int, void>::get_class_info() */

GetTypeInfo<unsigned_int,void> * __thiscall
GetTypeInfo<unsigned_int,void>::get_class_info(GetTypeInfo<unsigned_int,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0010fddc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fddc:
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



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0010ff5c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ff5c:
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



/* GetTypeInfo<double, void>::get_class_info() */

GetTypeInfo<double,void> * __thiscall
GetTypeInfo<double,void>::get_class_info(GetTypeInfo<double,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x001100dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001100dc:
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



/* GetTypeInfo<String const&, void>::get_class_info() */

GetTypeInfo<String_const&,void> * __thiscall
GetTypeInfo<String_const&,void>::get_class_info(GetTypeInfo<String_const&,void> *this)

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
  local_48 = &_LC10;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0011025c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011025c:
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



/* GetTypeInfo<Vector2, void>::get_class_info() */

GetTypeInfo<Vector2,void> * __thiscall
GetTypeInfo<Vector2,void>::get_class_info(GetTypeInfo<Vector2,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 5;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x001103dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001103dc:
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



/* GetTypeInfo<Rect2 const&, void>::get_class_info() */

GetTypeInfo<Rect2_const&,void> * __thiscall
GetTypeInfo<Rect2_const&,void>::get_class_info(GetTypeInfo<Rect2_const&,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 7;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0011055c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011055c:
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



/* GetTypeInfo<Transform3D, void>::get_class_info() */

GetTypeInfo<Transform3D,void> * __thiscall
GetTypeInfo<Transform3D,void>::get_class_info(GetTypeInfo<Transform3D,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x12;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x001106dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001106dc:
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



/* GetTypeInfo<Transform3D const&, void>::get_class_info() */

GetTypeInfo<Transform3D_const&,void> * __thiscall
GetTypeInfo<Transform3D_const&,void>::get_class_info(GetTypeInfo<Transform3D_const&,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x12;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0011085c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011085c:
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



/* GetTypeInfo<StringName, void>::get_class_info() */

GetTypeInfo<StringName,void> * __thiscall
GetTypeInfo<StringName,void>::get_class_info(GetTypeInfo<StringName,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x001109dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001109dc:
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



/* GetTypeInfo<StringName const&, void>::get_class_info() */

GetTypeInfo<StringName_const&,void> * __thiscall
GetTypeInfo<StringName_const&,void>::get_class_info(GetTypeInfo<StringName_const&,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x00110b5c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110b5c:
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



/* GetTypeInfo<RID, void>::get_class_info() */

GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x17;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x00110cdc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110cdc:
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



/* WARNING: Removing unreachable block (ram,0x00110e11) */
/* WARNING: Removing unreachable block (ram,0x00110e19) */
/* WARNING: Removing unreachable block (ram,0x00110e32) */
/* WARNING: Removing unreachable block (ram,0x00110d94) */
/* WARNING: Removing unreachable block (ram,0x00110d9c) */
/* WARNING: Removing unreachable block (ram,0x00110db5) */
/* WARNING: Removing unreachable block (ram,0x00110ef1) */
/* WARNING: Removing unreachable block (ram,0x00110efd) */
/* MethodBindTR<RID, RID>::_gen_argument_type_info(int) const */

GetTypeInfo<RID,void> * MethodBindTR<RID,RID>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<RID,void> *this;
  long in_FS_OFFSET;
  long local_70;
  long lStack_68;
  long local_58;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<RID,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_58 = 0;
    local_70 = 0;
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)local_48);
    if (local_40 != 0) {
      local_70 = local_40;
      local_40 = 0;
    }
    lStack_68 = 0;
    if (local_38 != 0) {
      StringName::unref();
      lStack_68 = local_38;
      local_38 = 0;
    }
    if (local_28 != 0) {
      local_58 = local_28;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
    *(undefined4 *)this = local_48[0];
    *(long *)(this + 8) = local_70;
    *(long *)(this + 0x10) = lStack_68;
    *(undefined4 *)(this + 0x18) = local_30;
    *(long *)(this + 0x20) = local_58;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<RID,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Dictionary, void>::get_class_info() */

GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1b;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0011105c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011105c:
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



/* GetTypeInfo<Vector<double>, void>::get_class_info() */

GetTypeInfo<Vector<double>,void> * __thiscall
GetTypeInfo<Vector<double>,void>::get_class_info(GetTypeInfo<Vector<double>,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x21;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x001111dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001111dc:
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



/* GetTypeInfo<Vector<String>, void>::get_class_info() */

GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x22;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x0011135c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011135c:
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



/* GetTypeInfo<Vector<Vector3>, void>::get_class_info() */

GetTypeInfo<Vector<Vector3>,void> * __thiscall
GetTypeInfo<Vector<Vector3>,void>::get_class_info(GetTypeInfo<Vector<Vector3>,void> *this)

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
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x24;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x001114dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001114dc:
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
LAB_00111698:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111698;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001116b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001116b6:
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



/* XRInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRInterface::_get_property_listv(XRInterface *this,List *param_1,bool param_2)

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
  local_78 = "XRInterface";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRInterface";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_00111aa8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111aa8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111ac5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111ac5:
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
  StringName::StringName((StringName *)&local_78,"XRInterface",false);
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



/* XRInterfaceExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
XRInterfaceExtension::_get_property_listv(XRInterfaceExtension *this,List *param_1,bool param_2)

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
    XRInterface::_get_property_listv((XRInterface *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRInterfaceExtension";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRInterfaceExtension";
  local_98 = 0;
  local_70 = 0x14;
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
LAB_00111ef8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111ef8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111f15;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111f15:
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
  StringName::StringName((StringName *)&local_78,"XRInterfaceExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      XRInterface::_get_property_listv((XRInterface *)this,param_1,true);
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



/* XRInterfaceExtension::is_class(String const&) const */

undefined8 __thiscall XRInterfaceExtension::is_class(XRInterfaceExtension *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
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
            if (lVar5 == 0) goto LAB_0011262f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_0011262f:
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
    if (cVar6 != '\0') goto LAB_001126e3;
  }
  cVar6 = String::operator==((String *)param_1,"XRInterfaceExtension");
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
              if (lVar5 == 0) goto LAB_0011282b;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_0011282b:
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
      if (cVar6 != '\0') goto LAB_001126e3;
    }
    cVar6 = String::operator==((String *)param_1,"XRInterface");
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
        if (cVar6 != '\0') goto LAB_001126e3;
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
          cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_001126e3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==((String *)param_1,"Object");
          return uVar8;
        }
        goto LAB_001129d9;
      }
    }
  }
LAB_001126e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001129d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<XRInterfaceExtension, RID>(RID (XRInterfaceExtension::*)()) */

MethodBind * create_method_bind<XRInterfaceExtension,RID>(_func_RID *param_1)

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
  *(_func_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116be0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "XRInterfaceExtension";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<XRInterfaceExtension, RID, Rect2, Rect2i, bool, unsigned int,
   bool, Vector2, double, double, double, double>(void (XRInterfaceExtension::*)(RID, Rect2, Rect2i,
   bool, unsigned int, bool, Vector2, double, double, double, double)) */

MethodBind *
create_method_bind<XRInterfaceExtension,RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
          (_func_void_RID_Rect2_Rect2i_bool_uint_bool_Vector2_double_double_double_double *param_1)

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
  *(_func_void_RID_Rect2_Rect2i_bool_uint_bool_Vector2_double_double_double_double **)(this + 0x58)
       = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116c40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0xb;
  local_40 = 0;
  local_38 = "XRInterfaceExtension";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<XRInterfaceExtension, RID, RID>(RID
   (XRInterfaceExtension::*)(RID)) */

MethodBind * create_method_bind<XRInterfaceExtension,RID,RID>(_func_RID_RID *param_1)

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
  *(_func_RID_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116ca0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRInterfaceExtension";
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* CowData<BlitToScreen>::_ref(CowData<BlitToScreen> const&) */

void __thiscall CowData<BlitToScreen>::_ref(CowData<BlitToScreen> *this,CowData *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar1 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
      lVar2 = *(long *)param_1;
    }
    else {
      *(undefined8 *)this = 0;
      lVar2 = *(long *)param_1;
    }
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -0x10);
    do {
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        return;
      }
      LOCK();
      lVar2 = *plVar3;
      bVar4 = lVar1 == lVar2;
      if (bVar4) {
        *plVar3 = lVar1 + 1;
        lVar2 = lVar1;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar2 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
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



/* GetTypeInfo<XRInterface::TrackingStatus, void>::get_class_info() */

GetTypeInfo<XRInterface::TrackingStatus,void> * __thiscall
GetTypeInfo<XRInterface::TrackingStatus,void>::get_class_info
          (GetTypeInfo<XRInterface::TrackingStatus,void> *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "XRInterface::TrackingStatus";
  local_40 = 0x1b;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x112eb6);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        pcVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x00112fa3;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
  lVar5 = local_60;
joined_r0x00112fa3:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar5 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<String>::_ref(CowData<String> const&) */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this == *(long *)param_1) {
    return;
  }
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



/* GetTypeInfo<XRInterface::PlayAreaMode, void>::get_class_info() */

GetTypeInfo<XRInterface::PlayAreaMode,void> * __thiscall
GetTypeInfo<XRInterface::PlayAreaMode,void>::get_class_info
          (GetTypeInfo<XRInterface::PlayAreaMode,void> *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "XRInterface::PlayAreaMode";
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x112eb6);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        pcVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x00113313;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
  lVar5 = local_60;
joined_r0x00113313:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar5 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
LAB_001138d0:
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
  if (lVar10 == 0) goto LAB_001138d0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001137a9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001137a9;
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
    goto LAB_00113926;
  }
  if (lVar10 == lVar7) {
LAB_0011384f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00113926:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011383a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011384f;
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
LAB_0011383a:
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
LAB_00113bf0:
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
  if (lVar8 == 0) goto LAB_00113bf0;
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
        goto LAB_00113b01;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00113b01:
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



/* XRInterfaceExtension::_initialize_classv() */

void XRInterfaceExtension::_initialize_classv(void)

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
    if (XRInterface::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
        if ((code *)PTR__bind_methods_0011a008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "XRInterface";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
        XRInterface::_bind_methods();
      }
      XRInterface::initialize_class()::initialized = '\x01';
    }
    local_58 = "XRInterface";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "XRInterfaceExtension";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* CowData<BlitToScreen>::_realloc(long) */

undefined8 __thiscall CowData<BlitToScreen>::_realloc(CowData<BlitToScreen> *this,long param_1)

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
/* Error CowData<BlitToScreen>::resize<false>(long) */

undefined8 __thiscall CowData<BlitToScreen>::resize<false>(CowData<BlitToScreen> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = *(long *)(lVar4 + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar11 * 0x50;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x50 == 0) {
LAB_00114380:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x50 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar10 = uVar5 + 1;
  if (lVar10 == 0) goto LAB_00114380;
  if (param_1 <= lVar11) {
    if ((lVar10 != lVar4) && (uVar8 = _realloc(this,lVar10), (int)uVar8 != 0)) {
      return uVar8;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar10 == lVar4) {
LAB_001142ec:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_0011427f;
  }
  else {
    if (lVar11 != 0) {
      uVar8 = _realloc(this,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_001142ec;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _UNK_00116d68;
  uVar8 = __LC104;
  puVar6 = puVar9 + lVar4 * 10;
  do {
    *puVar6 = 0;
    puVar7 = puVar6 + 10;
    puVar6[1] = uVar8;
    puVar6[2] = uVar3;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = 0;
    *(undefined1 *)(puVar6 + 6) = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x3c) = uVar8;
    *(undefined8 *)((long)puVar6 + 0x44) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 10);
LAB_0011427f:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00114578) */
/* WARNING: Removing unreachable block (ram,0x0011470d) */
/* WARNING: Removing unreachable block (ram,0x00114719) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<RID, RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<RID,RID>::validated_call
          (MethodBindTR<RID,RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
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
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
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
      goto LAB_0011489a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar4;
LAB_0011489a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<RID, RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<RID,RID>::ptrcall
          (MethodBindTR<RID,RID> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
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
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
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
      goto LAB_00114ac9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar4;
LAB_00114ac9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
     validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  Variant *pVVar5;
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
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar5) {
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
      goto LAB_00114d58;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  (*pcVar4)(*(undefined8 *)(*(long *)(param_3 + 8) + 8),
            *(undefined8 *)(*(long *)(param_3 + 8) + 0x10),
            *(undefined8 *)(*(long *)(param_3 + 0x30) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x38) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x40) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x48) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x50) + 8),
            (long *)(*(long *)(param_1 + 0x60) + (long)param_2),
            *(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)(param_3 + 0x10) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x10),
            *(undefined1 *)(*(long *)(param_3 + 0x18) + 8),
            *(undefined8 *)(*(long *)(param_3 + 0x20) + 8),
            *(undefined1 *)(*(long *)(param_3 + 0x28) + 8));
LAB_00114d58:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
     ptrcall(Object *param_1,void **param_2,void *param_3)

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
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
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
      goto LAB_00114ff9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)(**(undefined8 **)((long)param_3 + 8),(*(undefined8 **)((long)param_3 + 8))[1],
            **(undefined8 **)((long)param_3 + 0x30),**(undefined8 **)((long)param_3 + 0x38),
            **(undefined8 **)((long)param_3 + 0x40),**(undefined8 **)((long)param_3 + 0x48),
            **(undefined8 **)((long)param_3 + 0x50),
            (long *)(*(long *)(param_1 + 0x60) + (long)param_2),**param_3,
            **(undefined8 **)((long)param_3 + 0x10),(*(undefined8 **)((long)param_3 + 0x10))[1],
            **(char **)((long)param_3 + 0x18) != '\0',**(undefined8 **)((long)param_3 + 0x20),
            **(char **)((long)param_3 + 0x28) != '\0');
LAB_00114ff9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115340;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      local_58 = (char *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(RID *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00115340:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<RID>::validated_call
          (MethodBindTR<RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
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
      goto LAB_001155a2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_001155a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<RID>::ptrcall(MethodBindTR<RID> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
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
      goto LAB_001157a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_001157a1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<RID, RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<RID,RID>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_58 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar10 = (long *)(local_60 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115a80;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00115ac0;
LAB_00115ab0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00115ac0:
        uVar6 = 4;
        goto LAB_00115a75;
      }
      if (in_R8D == 1) goto LAB_00115ab0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x17);
    uVar7 = _LC119;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar7;
    }
    uVar7 = Variant::operator_cast_to_RID(pVVar11);
    local_58 = (char *)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),uVar7);
    Variant::Variant((Variant *)local_48,(RID *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_00115a75:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00115a80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
         call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98 [11];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar11 = (long *)plVar14[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar11 = (long *)(plVar14[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC118,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_a8,0,0);
      pcVar4 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_a8 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar15 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar14 = (long *)(local_b0 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00116158;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 0xc) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(0xb - in_R8D) <= iVar12) {
      lVar9 = 0;
      do {
        while ((int)in_R8D <= (int)lVar9) {
          uVar13 = iVar12 + -0xb + (int)lVar9;
          if (lVar15 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_98[lVar9] = pVVar2 + (ulong)uVar13 * 0x18;
          lVar9 = lVar9 + 1;
          if (lVar9 == 0xb) goto LAB_00115e60;
        }
        local_98[lVar9] = *(Variant **)(param_4 + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0xb);
LAB_00115e60:
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[10],3);
      uVar10 = _LC122;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      dVar17 = Variant::operator_cast_to_double(local_98[10]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[9],3);
      uVar10 = _LC123;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      dVar18 = Variant::operator_cast_to_double(local_98[9]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[8],3);
      uVar10 = _LC124;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      dVar19 = Variant::operator_cast_to_double(local_98[8]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[7],3);
      uVar10 = _LC125;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      dVar20 = Variant::operator_cast_to_double(local_98[7]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[6],5);
      uVar10 = _LC126;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      uVar21 = Variant::operator_cast_to_Vector2(local_98[6]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[5],1);
      uVar10 = _LC127;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      bVar6 = Variant::operator_cast_to_bool(local_98[5]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[4],2);
      uVar10 = _LC128;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      uVar13 = Variant::operator_cast_to_unsigned_int(local_98[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[3],1);
      uVar10 = _LC129;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      bVar7 = Variant::operator_cast_to_bool(local_98[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[2],8);
      uVar10 = _LC130;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      auVar22 = Variant::operator_cast_to_Rect2i(local_98[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[1],7);
      uVar10 = _LC131;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      auVar23 = Variant::operator_cast_to_Rect2(local_98[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_98[0],0x17);
      uVar10 = _LC119;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar10;
      }
      uVar10 = Variant::operator_cast_to_RID(local_98[0]);
      (*(code *)pVVar16)(auVar23._0_8_,auVar23._8_8_,uVar21,dVar20,dVar19,dVar18,dVar17,
                         (Variant *)((long)plVar14 + (long)pVVar1),uVar10,auVar22._0_8_,
                         auVar22._8_8_,bVar7,uVar13,bVar6);
      goto LAB_00116158;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 0xb;
LAB_00116158:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double,
   double, double, double>(int, PropertyInfo&) */

void call_get_argument_type_info<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_88;
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
  if (param_1 == 0) {
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_68);
    goto LAB_00116414;
  }
  if (param_1 == 1) {
    local_78 = 0;
    local_80 = 0;
    local_68 = &_LC10;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,7);
LAB_001164fc:
    local_88 = 0;
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_00116580:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00116580;
      StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
  }
  else {
    if (param_1 == 2) {
      local_78 = 0;
      local_80 = 0;
      local_68 = &_LC10;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange *)&local_80);
      local_68 = (undefined *)CONCAT44(local_68._4_4_,8);
      goto LAB_001164fc;
    }
    if (param_1 == 3) {
LAB_00116404:
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_68);
    }
    else if (param_1 == 4) {
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_68);
    }
    else {
      if (param_1 == 5) goto LAB_00116404;
      if (param_1 != 6) {
        if ((((param_1 != 7) && (param_1 != 8)) && (param_1 != 9)) && (param_1 != 10))
        goto LAB_0011648d;
        GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_68);
        goto LAB_00116414;
      }
      local_88 = 0;
      local_80 = 0;
      local_68 = &_LC10;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      String::parse_latin1((StrRange *)&local_80);
      local_78 = 0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_80 == 0) {
LAB_00116728:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_00116728;
        StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
    }
  }
LAB_00116414:
  PropertyInfo::operator=(param_2,(PropertyInfo *)&local_68);
  lVar7 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
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
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0011648d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* XRInterfaceExtension::~XRInterfaceExtension() */

void __thiscall XRInterfaceExtension::~XRInterfaceExtension(XRInterfaceExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<RID, RID>::~MethodBindTR() */

void __thiscall MethodBindTR<RID,RID>::~MethodBindTR(MethodBindTR<RID,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RID, Rect2, Rect2i, bool, unsigned int, bool, Vector2, double, double, double,
   double>::~MethodBindT() */

void __thiscall
MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>::
~MethodBindT(MethodBindT<RID,Rect2,Rect2i,bool,unsigned_int,bool,Vector2,double,double,double,double>
             *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<RID>::~MethodBindTR() */

void __thiscall MethodBindTR<RID>::~MethodBindTR(MethodBindTR<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.