
/* Ref<GLTFObjectModelProperty>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFObjectModelProperty> const&)
   [clone .isra.0] */

void __thiscall
Ref<GLTFObjectModelProperty>::operator=(Ref<GLTFObjectModelProperty> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<GLTFState>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFState> const&) [clone .isra.0] */

void __thiscall Ref<GLTFState>::operator=(Ref<GLTFState> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
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
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
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



/* GLTFDocumentExtension::get_supported_extensions() */

void GLTFDocumentExtension::get_supported_extensions(void)

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
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 600,0,0,local_f8);
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
      goto LAB_00100817;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x260) == '\0')) {
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
    String::parse_latin1((String *)&local_c8,"_get_supported_extensions");
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_f8);
    PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x268) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"GLTFDocumentExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00100ac0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00100ad7:
        lVar4 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00100a04;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 600);
        *(undefined8 *)(in_RSI + 0x268) = uVar3;
      }
      else {
        lVar4 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00100ac0:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00100ad7;
      }
      lVar4 = *(long *)(in_RSI + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 600,uVar2);
      *(undefined8 *)(in_RSI + 0x268) = uVar3;
      lVar4 = *(long *)(in_RSI + 8);
    }
LAB_00100a04:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = in_RSI + 0x268;
      plVar5[1] = in_RSI + 0x260;
      plVar5[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar5;
    }
    *(undefined1 *)(in_RSI + 0x260) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(in_RSI + 0x268);
  if (pcVar6 == (code *)0x0) goto LAB_00100817;
  uStack_f0 = 0;
  uStack_ec = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,local_f8);
    lVar4 = CONCAT44(uStack_ec,uStack_f0);
    if (lVar4 != 0) goto LAB_001007d1;
LAB_00100868:
    local_c0 = 0;
  }
  else {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 600,pcVar6,0,local_f8);
    lVar4 = CONCAT44(uStack_ec,uStack_f0);
    if (lVar4 == 0) goto LAB_00100868;
LAB_001007d1:
    local_c0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_c0,(CowData *)&uStack_f0);
    lVar4 = local_c0;
  }
  if (lVar4 != *(long *)(in_RDI + 8)) {
    CowData<String>::_unref((CowData<String> *)(in_RDI + 8));
    *(long *)(in_RDI + 8) = lVar4;
    local_c0 = 0;
  }
  CowData<String>::_unref((CowData<String> *)&local_c0);
  CowData<String>::_unref((CowData<String> *)&uStack_f0);
LAB_00100817:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GLTFDocumentExtension::get_image_file_extension() */

void GLTFDocumentExtension::get_image_file_extension(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  CowData<char32_t> *in_RDI;
  long in_FS_OFFSET;
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
  *(undefined8 *)in_RDI = 0;
  if (plVar5 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x2a0,0,0,&local_c8);
    if (local_c8 == 0) {
      Variant::operator_cast_to_String((Variant *)&local_f8);
      if (*(long *)in_RDI != local_f8) {
        CowData<char32_t>::_unref(in_RDI);
        lVar4 = local_f8;
        local_f8 = 0;
        *(long *)in_RDI = lVar4;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100cdd;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x2a8) == '\0')) {
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
    String::parse_latin1((String *)&local_c8,"_get_image_file_extension");
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x2b0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"GLTFDocumentExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00100f6f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00100f84:
        lVar4 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00100ec1;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x2a0);
        *(undefined8 *)(in_RSI + 0x2b0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00100f6f:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00100f84;
      }
      lVar4 = *(long *)(in_RSI + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x2a0,uVar2);
      *(undefined8 *)(in_RSI + 0x2b0) = uVar3;
      lVar4 = *(long *)(in_RSI + 8);
    }
LAB_00100ec1:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = in_RSI + 0x2b0;
      plVar5[1] = in_RSI + 0x2a8;
      plVar5[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar5;
    }
    *(undefined1 *)(in_RSI + 0x2a8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(in_RSI + 0x2b0);
  if (pcVar6 != (code *)0x0) {
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
      lVar4 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x2a0,pcVar6,0,
                (CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar4 = local_f8;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
        lVar4 = CONCAT44(uStack_c4,local_c8);
      }
    }
    if (*(long *)in_RDI != lVar4) {
      CowData<char32_t>::_unref(in_RDI);
      *(long *)in_RDI = lVar4;
      local_c8 = 0;
      uStack_c4 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
LAB_00100cdd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GLTFDocumentExtension::get_saveable_image_formats() */

void GLTFDocumentExtension::get_saveable_image_formats(void)

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
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x3d8,0,0,local_f8);
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
      goto LAB_00101187;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x3e0) == '\0')) {
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
    String::parse_latin1((String *)&local_c8,"_get_saveable_image_formats");
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_f8);
    PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 1000) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"GLTFDocumentExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00101430;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101447:
        lVar4 = *(long *)(in_RSI + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00101374;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x3d8);
        *(undefined8 *)(in_RSI + 1000) = uVar3;
      }
      else {
        lVar4 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101430:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00101447;
      }
      lVar4 = *(long *)(in_RSI + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x3d8,uVar2);
      *(undefined8 *)(in_RSI + 1000) = uVar3;
      lVar4 = *(long *)(in_RSI + 8);
    }
LAB_00101374:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = in_RSI + 1000;
      plVar5[1] = in_RSI + 0x3e0;
      plVar5[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar5;
    }
    *(undefined1 *)(in_RSI + 0x3e0) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(in_RSI + 1000);
  if (pcVar6 == (code *)0x0) goto LAB_00101187;
  uStack_f0 = 0;
  uStack_ec = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,local_f8);
    lVar4 = CONCAT44(uStack_ec,uStack_f0);
    if (lVar4 != 0) goto LAB_00101141;
LAB_001011d8:
    local_c0 = 0;
  }
  else {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x3d8,pcVar6,0,local_f8);
    lVar4 = CONCAT44(uStack_ec,uStack_f0);
    if (lVar4 == 0) goto LAB_001011d8;
LAB_00101141:
    local_c0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_c0,(CowData *)&uStack_f0);
    lVar4 = local_c0;
  }
  if (lVar4 != *(long *)(in_RDI + 8)) {
    CowData<String>::_unref((CowData<String> *)(in_RDI + 8));
    *(long *)(in_RDI + 8) = lVar4;
    local_c0 = 0;
  }
  CowData<String>::_unref((CowData<String> *)&local_c0);
  CowData<String>::_unref((CowData<String> *)&uStack_f0);
LAB_00101187:
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



/* GLTFDocumentExtension::_bind_methods() */

void GLTFDocumentExtension::_bind_methods(void)

{
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  StringName local_d8 [8];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulong local_60;
  Vector<int> local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"state");
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "extensions";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_import_preflight");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_get_supported_extensions");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"gltf_node");
  local_e8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"extensions");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_parse_node_extensions");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFNode>,void>::get_class_info((GetTypeInfo<Ref<GLTFNode>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"image_data");
  local_e8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"mime_type");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"ret_image");
  local_100 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_parse_image_data");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
            ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_get_image_file_extension");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"texture_json");
  local_e8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"ret_gltf_texture");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_parse_texture_json");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFTexture>,void>::get_class_info
            ((GetTypeInfo<Ref<GLTFTexture>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"split_json_pointer");
  local_e8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"partial_paths");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_import_object_model_property");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Ref<GLTFObjectModelProperty>,void>::get_class_info
            ((GetTypeInfo<Ref<GLTFObjectModelProperty>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_110 = 0;
  Variant::get_type_name((String *)&local_108,0x16);
  local_100 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x1c,(StrRange *)&local_100,0x1f,(String *)&local_108,6,
             (String *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_import_post_parse");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_import_pre_generate");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"gltf_node");
  local_e8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"scene_parent");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_generate_scene_node");
  local_e8 = "Node3D";
  local_80 = CONCAT44(local_80._4_4_,8);
  local_100 = 0;
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_108,(String *)&local_100,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_e0 = 0;
  StringName::StringName(local_d8,(StringName *)&local_108);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFNode>,void>::get_class_info((GetTypeInfo<Ref<GLTFNode>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"gltf_node");
  local_e8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"json");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"node");
  local_100 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_import_node");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFNode>,void>::get_class_info((GetTypeInfo<Ref<GLTFNode>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"root");
  local_e8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_import_post");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"root");
  local_e8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_export_preflight");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  if (local_b8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"gltf_node");
  local_e8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"scene_node");
  local_100 = 0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_convert_scene_node");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFNode>,void>::get_class_info((GetTypeInfo<Ref<GLTFNode>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"root");
  local_e8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_export_post_convert");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_export_preserialize");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_120 = 0;
  String::parse_latin1((String *)&local_120,"node_path");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_120);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"godot_node");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"gltf_node_index");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_118);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"target_object");
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_100);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"target_depth");
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_110);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_export_object_model_property");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Ref<GLTFObjectModelProperty>,void>::get_class_info
            ((GetTypeInfo<Ref<GLTFObjectModelProperty>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_100 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x16,(StrRange *)&local_100,0,(String *)&local_108,6,
             (String *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "Node";
  local_100 = 0;
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_108,(String *)&local_100,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_e0 = 0;
  StringName::StringName(local_d8,(StringName *)&local_108);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_e8 = "Object";
  local_100 = 0;
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_108,(String *)&local_100,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_e0 = 0;
  StringName::StringName(local_d8,(StringName *)&local_108);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_get_saveable_image_formats");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"image");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_118);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"image_dict");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"image_format");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_110);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"lossy_quality");
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_100);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_serialize_image_to_bytes");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
            ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,9);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = "state";
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_f8,(CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"image");
  local_b8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  Vector<String>::push_back((Vector<String> *)local_f8,(CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"file_path");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"image_format");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_110);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"lossy_quality");
  local_108 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_100);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_save_image_at_path");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,9);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"texture_json");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_110);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"gltf_texture");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"image_format");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_108);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_serialize_texture_json");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFTexture>,void>::get_class_info
            ((GetTypeInfo<Ref<GLTFTexture>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"gltf_node");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_110);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_e8 = (char *)0x0;
  String::parse_latin1((String *)&local_e8,"json");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_e8);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"node");
  local_100 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_108);
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_export_node");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Ref<GLTFNode>,void>::get_class_info((GetTypeInfo<Ref<GLTFNode>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_b8 = (char *)0x0;
  String::parse_latin1((String *)&local_b8,"state");
  local_e8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_b8);
  Vector<String>::push_back((Vector<String> *)local_f8,(String *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((String *)&local_b8,"_export_post");
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"GLTFDocumentExtension");
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::serialize_texture_json(Ref<GLTFState>, Dictionary, Ref<GLTFTexture>,
   String const&) */

ulong __thiscall
GLTFDocumentExtension::serialize_texture_json
          (GLTFDocumentExtension *this,long *param_2,Dictionary *param_3,long *param_4,
          CowData *param_5)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  Object *pOVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  long local_1d0;
  Object *local_1b8;
  Dictionary local_1b0 [8];
  long local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  Object *local_190;
  undefined8 local_188;
  long local_180 [5];
  uint local_158 [2];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  ulong local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  Ref<GLTFState> *local_a8;
  Dictionary *pDStack_a0;
  Object **local_98;
  CowData<char32_t> *apCStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("serialize_texture_json","modules/gltf/extensions/gltf_document_extension.cpp",
                     0xd5,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    pOVar9 = (Object *)*param_4;
    if (pOVar9 != (Object *)0x0) {
      local_1a8 = 0;
      if (*(long *)param_5 == 0) {
LAB_00105272:
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar9 = (Object *)0x0;
        }
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,param_5);
        pOVar9 = (Object *)*param_4;
        if (pOVar9 != (Object *)0x0) goto LAB_00105272;
      }
      Dictionary::Dictionary(local_1b0,param_3);
      local_1b8 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1b8,(Ref *)*param_2);
      plVar7 = *(long **)(this + 0x98);
      if (plVar7 == (long *)0x0) {
LAB_001053d6:
        if ((*(long *)(this + 8) != 0) && (this[0x428] == (GLTFDocumentExtension)0x0)) {
          local_158[0] = 0;
          local_158[1] = 0;
          local_148 = (undefined1  [16])0x0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 6;
          local_120 = 1;
          local_118[0] = 0;
          local_108 = 0;
          local_100 = 0;
          local_f0 = 0;
          String::parse_latin1((String *)local_158,"_serialize_texture_json");
          local_120 = CONCAT44(local_120._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_188);
          PropertyInfo::operator=((PropertyInfo *)&uStack_150,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          local_100 = local_100 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Ref<GLTFTexture>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFTexture>,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x430) = 0;
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 0xd8);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
            local_198 = 0;
            String::parse_latin1((String *)&local_198,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_188,(StringName *)&local_190);
            if (local_180[0] == 0) {
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              local_1d0 = 0;
              if (StringName::configured != '\0') goto LAB_001059ca;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_001059ea:
              lVar6 = *(long *)(this + 8);
              pcVar8 = *(code **)(lVar6 + 200);
              if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
                 (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00105893;
              uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
              *(undefined8 *)(this + 0x430) = uVar5;
            }
            else {
              local_1d0 = *(long *)(local_180[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') {
LAB_001059ca:
                if (local_190 != (Object *)0x0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
              if (local_1d0 == 0) goto LAB_001059ea;
            }
            lVar6 = *(long *)(this + 8);
          }
          else {
            uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
            *(undefined8 *)(this + 0x430) = uVar5;
            lVar6 = *(long *)(this + 8);
          }
LAB_00105893:
          if (*(char *)(lVar6 + 0x29) != '\0') {
            plVar7 = (long *)operator_new(0x18,"");
            *plVar7 = (long)(this + 0x430);
            plVar7[1] = (long)(this + 0x428);
            plVar7[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar7;
          }
          this[0x428] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)local_158);
        }
        uVar4 = 0;
        if (*(long *)(this + 0x430) != 0) {
          local_1a0 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1a0,(Ref *)local_1b8);
          Dictionary::Dictionary((Dictionary *)&local_198,local_1b0);
          if ((pOVar9 == (Object *)0x0) ||
             (local_190 = pOVar9, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            local_190 = (Object *)0x0;
          }
          local_188 = 0;
          if (local_1a8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_188,(CowData *)&local_1a8);
          }
          local_98 = &local_190;
          local_a8 = (Ref<GLTFState> *)&local_1a0;
          pDStack_a0 = (Dictionary *)&local_198;
          apCStack_90[0] = (CowData<char32_t> *)&local_188;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x430))(*(undefined8 *)(this + 0x10),&local_a8,local_158);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x420,*(code **)(this + 0x430),&local_a8,
                       local_158);
          }
          uVar4 = (ulong)local_158[0];
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
          if (((local_190 != (Object *)0x0) &&
              (cVar3 = RefCounted::unreference(), pOVar2 = local_190, cVar3 != '\0')) &&
             (cVar3 = predelete_handler(local_190), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
          Dictionary::~Dictionary((Dictionary *)&local_198);
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1a0);
        }
      }
      else {
        local_158[0] = 0;
        local_158[1] = 0;
        uStack_150 = 0;
        Variant::Variant((Variant *)&local_a8,local_1b8);
        Variant::Variant((Variant *)apCStack_90,local_1b0);
        Variant::Variant(local_78,pOVar9);
        Variant::Variant(local_60,(String *)&local_1a8);
        local_c8 = (Variant *)&local_a8;
        pVStack_c0 = (Variant *)apCStack_90;
        local_b8 = local_78;
        pVStack_b0 = local_60;
        (**(code **)(*plVar7 + 0x60))((Variant *)local_e8,plVar7,this + 0x420,&local_c8,4,local_158)
        ;
        if (local_158[0] != 0) {
          if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar10 = local_48;
          do {
            pVVar1 = pVVar10 + -0x18;
            pVVar10 = pVVar10 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar10 != (Variant *)&local_a8);
          goto LAB_001053d6;
        }
        uVar4 = Variant::operator_cast_to_long((Variant *)local_e8);
        uVar4 = uVar4 & 0xffffffff;
        if (Variant::needs_deinit[local_e8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar10 = local_48;
        do {
          pVVar1 = pVVar10 + -0x18;
          pVVar10 = pVVar10 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar10 != (Variant *)&local_a8);
      }
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1b8);
      Dictionary::~Dictionary(local_1b0);
      if (((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
      goto LAB_0010541c;
    }
    _err_print_error("serialize_texture_json","modules/gltf/extensions/gltf_document_extension.cpp",
                     0xd6,
                     "Condition \"p_gltf_texture.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  uVar4 = 0x1f;
LAB_0010541c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::parse_texture_json(Ref<GLTFState>, Dictionary const&, Ref<GLTFTexture>) */

ulong __thiscall
GLTFDocumentExtension::parse_texture_json
          (GLTFDocumentExtension *this,long *param_2,Dictionary *param_3,long *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  Object *pOVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  Object *local_188;
  Dictionary local_180 [8];
  undefined8 local_178;
  long local_170;
  Object *local_168;
  long local_160 [5];
  uint local_138 [2];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  Ref<GLTFState> *local_88;
  Dictionary *pDStack_80;
  Object **local_78;
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("parse_texture_json","modules/gltf/extensions/gltf_document_extension.cpp",0x62
                     ,"Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
  }
  else {
    pOVar10 = (Object *)*param_4;
    if (pOVar10 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar10 = (Object *)0x0;
      }
      Dictionary::Dictionary(local_180,param_3);
      local_188 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_188,(Ref *)*param_2);
      plVar8 = *(long **)(this + 0x98);
      if (plVar8 == (long *)0x0) {
LAB_00105c16:
        if ((*(long *)(this + 8) != 0) && (this[0x2c0] == (GLTFDocumentExtension)0x0)) {
          local_138[0] = 0;
          local_138[1] = 0;
          local_128 = (undefined1  [16])0x0;
          uStack_130 = 0;
          uStack_12c = 0;
          local_118 = 0;
          local_110 = 0;
          local_108 = 6;
          local_100 = 1;
          local_f8[0] = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d0 = 0;
          String::parse_latin1((String *)local_138,"_parse_texture_json");
          local_100 = CONCAT44(local_100._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_168);
          PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          local_e0 = local_e0 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          Vector<int>::push_back(local_d8,0);
          GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          Vector<int>::push_back(local_d8,0);
          GetTypeInfo<Ref<GLTFTexture>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFTexture>,void> *)&local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          Vector<int>::push_back(local_d8,0);
          uVar4 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x2c8) = 0;
          lVar7 = *(long *)(this + 8);
          pcVar9 = *(code **)(lVar7 + 0xd8);
          if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
            local_178 = 0;
            String::parse_latin1((String *)&local_178,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_168,(StringName *)&local_170);
            if (local_160[0] == 0) {
              lVar7 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
              if (StringName::configured != '\0') goto LAB_0010614c;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_00106169:
              lVar7 = *(long *)(this + 8);
              pcVar9 = *(code **)(lVar7 + 200);
              if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
                 (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_0010602f;
              uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0));
              *(undefined8 *)(this + 0x2c8) = uVar6;
            }
            else {
              lVar7 = *(long *)(local_160[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
              if (StringName::configured != '\0') {
LAB_0010614c:
                if (local_170 != 0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              if (lVar7 == 0) goto LAB_00106169;
            }
            lVar7 = *(long *)(this + 8);
          }
          else {
            uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x2b8,uVar4);
            *(undefined8 *)(this + 0x2c8) = uVar6;
            lVar7 = *(long *)(this + 8);
          }
LAB_0010602f:
          if (*(char *)(lVar7 + 0x29) != '\0') {
            plVar8 = (long *)operator_new(0x18,"");
            *plVar8 = (long)(this + 0x2c8);
            plVar8[1] = (long)(this + 0x2c0);
            plVar8[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar8;
          }
          this[0x2c0] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)local_138);
        }
        uVar5 = 0;
        if (*(long *)(this + 0x2c8) != 0) {
          local_178 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_178,(Ref *)local_188);
          Dictionary::Dictionary((Dictionary *)&local_170,local_180);
          if ((pOVar10 == (Object *)0x0) ||
             (local_168 = pOVar10, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            local_168 = (Object *)0x0;
          }
          local_78 = &local_168;
          local_88 = (Ref<GLTFState> *)&local_178;
          pDStack_80 = (Dictionary *)&local_170;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x2c8))(*(undefined8 *)(this + 0x10),&local_88,local_138);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x2b8,*(code **)(this + 0x2c8),&local_88,
                       local_138);
          }
          uVar5 = (ulong)local_138[0];
          if (((local_168 != (Object *)0x0) &&
              (cVar3 = RefCounted::unreference(), pOVar2 = local_168, cVar3 != '\0')) &&
             (cVar3 = predelete_handler(local_168), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
          Dictionary::~Dictionary((Dictionary *)&local_170);
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_178);
        }
      }
      else {
        local_138[0] = 0;
        local_138[1] = 0;
        uStack_130 = 0;
        Variant::Variant((Variant *)&local_88,local_188);
        Variant::Variant(local_70,local_180);
        Variant::Variant(local_58,pOVar10);
        local_c8 = (Variant *)&local_88;
        pVStack_c0 = local_70;
        local_b8 = local_58;
        (**(code **)(*plVar8 + 0x60))((Variant *)local_a8,plVar8,this + 0x2b8,&local_c8,3,local_138)
        ;
        if (local_138[0] != 0) {
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar11 = (Variant *)local_40;
          do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar11 != (Variant *)&local_88);
          goto LAB_00105c16;
        }
        uVar5 = Variant::operator_cast_to_long((Variant *)local_a8);
        uVar5 = uVar5 & 0xffffffff;
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar11 = (Variant *)local_40;
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)&local_88);
      }
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_188);
      Dictionary::~Dictionary(local_180);
      if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      goto LAB_00105c55;
    }
    _err_print_error("parse_texture_json","modules/gltf/extensions/gltf_document_extension.cpp",99,
                     "Condition \"r_gltf_texture.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  uVar5 = 0x1f;
LAB_00105c55:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* GLTFDocumentExtension::export_node(Ref<GLTFState>, Ref<GLTFNode>, Dictionary&, Node*) */

ulong __thiscall
GLTFDocumentExtension::export_node
          (GLTFDocumentExtension *this,long *param_2,long *param_3,Dictionary *param_4,
          Object *param_5)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  Object *pOVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  Object *local_1b0;
  Dictionary local_1a8 [8];
  undefined8 local_1a0;
  Object *local_198;
  long local_190;
  Object *local_188;
  long local_180 [5];
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  ulong local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  Ref<GLTFState> *local_a8;
  Object **ppOStack_a0;
  Dictionary *local_98;
  Object **appOStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("export_node","modules/gltf/extensions/gltf_document_extension.cpp",0xdd,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    if (*param_3 != 0) {
      Dictionary::Dictionary(local_1a8,param_4);
      pOVar10 = (Object *)*param_3;
      if ((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        pOVar10 = (Object *)0x0;
      }
      local_1b0 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1b0,(Ref *)*param_2);
      plVar8 = *(long **)(this + 0x98);
      if (plVar8 == (long *)0x0) {
LAB_001063d8:
        if ((*(long *)(this + 8) != 0) && (this[0x440] == (GLTFDocumentExtension)0x0)) {
          local_158 = 0;
          uStack_154 = 0;
          local_148 = (undefined1  [16])0x0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 6;
          local_120 = 1;
          local_118[0] = 0;
          local_108 = 0;
          local_100 = 0;
          local_f0 = 0;
          String::parse_latin1((String *)&local_158,"_export_node");
          local_120 = CONCAT44(local_120._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_188);
          PropertyInfo::operator=((PropertyInfo *)&uStack_150,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          local_100 = local_100 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Ref<GLTFNode>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFNode>,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          uVar4 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x448) = 0;
          lVar7 = *(long *)(this + 8);
          pcVar9 = *(code **)(lVar7 + 0xd8);
          if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
            local_198 = (Object *)0x0;
            String::parse_latin1((String *)&local_198,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_188,(StringName *)&local_190);
            if (local_180[0] == 0) {
              lVar7 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') goto LAB_001069ad;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_001069ce:
              lVar7 = *(long *)(this + 8);
              pcVar9 = *(code **)(lVar7 + 200);
              if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
                 (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_0010687b;
              uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0));
              *(undefined8 *)(this + 0x448) = uVar6;
            }
            else {
              lVar7 = *(long *)(local_180[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') {
LAB_001069ad:
                if (local_190 != 0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
              if (lVar7 == 0) goto LAB_001069ce;
            }
            lVar7 = *(long *)(this + 8);
          }
          else {
            uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x438,uVar4);
            *(undefined8 *)(this + 0x448) = uVar6;
            lVar7 = *(long *)(this + 8);
          }
LAB_0010687b:
          if (*(char *)(lVar7 + 0x29) != '\0') {
            plVar8 = (long *)operator_new(0x18,"");
            *plVar8 = (long)(this + 0x448);
            plVar8[1] = (long)(this + 0x440);
            plVar8[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar8;
          }
          this[0x440] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)&local_158);
        }
        uVar5 = 0;
        if (*(long *)(this + 0x448) == 0) goto LAB_001063f0;
        local_1a0 = 0;
        Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1a0,(Ref *)local_1b0);
        if ((pOVar10 == (Object *)0x0) ||
           (local_198 = pOVar10, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_198 = (Object *)0x0;
        }
        Dictionary::Dictionary((Dictionary *)&local_190,local_1a8);
        ppOStack_a0 = &local_198;
        appOStack_90[0] = &local_188;
        local_188 = param_5;
        local_a8 = (Ref<GLTFState> *)&local_1a0;
        local_98 = (Dictionary *)&local_190;
        if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
          (**(code **)(this + 0x448))(*(undefined8 *)(this + 0x10),&local_a8,&local_158);
        }
        else {
          (**(code **)(*(long *)(this + 8) + 0xe0))
                    (*(undefined8 *)(this + 0x10),this + 0x438,*(undefined8 *)(this + 0x448),
                     &local_a8,&local_158);
        }
        uVar5 = (ulong)local_158;
        Dictionary::~Dictionary((Dictionary *)&local_190);
        if (((local_198 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar2 = local_198, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_198), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1a0);
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1b0);
      }
      else {
        local_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        Variant::Variant((Variant *)&local_a8,local_1b0);
        Variant::Variant((Variant *)appOStack_90,pOVar10);
        Variant::Variant(local_78,local_1a8);
        Variant::Variant(local_60,param_5);
        local_c8 = (Variant *)&local_a8;
        pVStack_c0 = (Variant *)appOStack_90;
        local_b8 = local_78;
        pVStack_b0 = local_60;
        (**(code **)(*plVar8 + 0x60))
                  ((Variant *)local_e8,plVar8,this + 0x438,&local_c8,4,&local_158);
        if (local_158 != 0) {
          if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar11 = local_48;
          do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar11 != (Variant *)&local_a8);
          goto LAB_001063d8;
        }
        uVar5 = Variant::operator_cast_to_long((Variant *)local_e8);
        uVar5 = uVar5 & 0xffffffff;
        if (Variant::needs_deinit[local_e8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar11 = local_48;
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)&local_a8);
LAB_001063f0:
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1b0);
      }
      if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      Dictionary::~Dictionary(local_1a8);
      goto LAB_00106415;
    }
    _err_print_error("export_node","modules/gltf/extensions/gltf_document_extension.cpp",0xde,
                     "Condition \"p_gltf_node.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  uVar5 = 0x1f;
LAB_00106415:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::convert_scene_node(Ref<GLTFState>, Ref<GLTFNode>, Node*) */

void __thiscall
GLTFDocumentExtension::convert_scene_node
          (GLTFDocumentExtension *this,long *param_2,long *param_3,Object *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  Object *pOVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  Object *local_180;
  undefined8 local_178;
  long local_170;
  Object *local_168;
  long local_160 [5];
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  Ref<GLTFState> *local_88;
  Object **ppOStack_80;
  int *local_78;
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xa0;
      pcVar9 = "Condition \"p_state.is_null()\" is true.";
LAB_00106e19:
      _err_print_error("convert_scene_node","modules/gltf/extensions/gltf_document_extension.cpp",
                       uVar6,pcVar9,0,0);
      return;
    }
    goto LAB_001071d5;
  }
  pOVar11 = (Object *)*param_3;
  if (pOVar11 == (Object *)0x0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xa1;
      pcVar9 = "Condition \"p_gltf_node.is_null()\" is true.";
      goto LAB_00106e19;
    }
    goto LAB_001071d5;
  }
  if (param_4 == (Object *)0x0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xa2;
      pcVar9 = "Parameter \"p_scene_node\" is null.";
      goto LAB_00106e19;
    }
    goto LAB_001071d5;
  }
  cVar4 = RefCounted::reference();
  local_180 = (Object *)0x0;
  if (cVar4 == '\0') {
    pOVar11 = (Object *)0x0;
  }
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_180,(Ref *)*param_2);
  pOVar2 = local_180;
  plVar8 = *(long **)(this + 0x98);
  if (plVar8 == (long *)0x0) {
LAB_00106c0d:
    if ((*(long *)(this + 8) != 0) && (this[0x380] == (GLTFDocumentExtension)0x0)) {
      local_138 = 0;
      uStack_134 = 0;
      local_128 = (undefined1  [16])0x0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String *)&local_138,"_convert_scene_node");
      local_100 = CONCAT44(local_100._4_4_,8);
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      GetTypeInfo<Ref<GLTFNode>,void>::get_class_info((GetTypeInfo<Ref<GLTFNode>,void> *)&local_168)
      ;
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      uVar5 = MethodInfo::get_compatibility_hash();
      lVar7 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x388) = 0;
      pcVar10 = *(code **)(lVar7 + 0xd8);
      if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
         (pcVar10 = *(code **)(lVar7 + 0xd0), pcVar10 == (code *)0x0)) {
        local_178 = 0;
        String::parse_latin1((String *)&local_178,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_168,(StringName *)&local_170);
        if (local_160[0] == 0) {
          lVar7 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') goto LAB_00107143;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_00107160:
          lVar7 = *(long *)(this + 8);
          pcVar10 = *(code **)(lVar7 + 200);
          if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar10 = *(code **)(lVar7 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_0010704f;
          uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0));
          *(undefined8 *)(this + 0x388) = uVar6;
        }
        else {
          lVar7 = *(long *)(local_160[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') {
LAB_00107143:
            if (local_170 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
          if (lVar7 == 0) goto LAB_00107160;
        }
        lVar7 = *(long *)(this + 8);
      }
      else {
        uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0),this + 0x378,uVar5);
        *(undefined8 *)(this + 0x388) = uVar6;
        lVar7 = *(long *)(this + 8);
      }
LAB_0010704f:
      if (*(char *)(lVar7 + 0x29) != '\0') {
        plVar8 = (long *)operator_new(0x18,"");
        *plVar8 = (long)(this + 0x388);
        plVar8[1] = (long)(this + 0x380);
        plVar8[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar8;
      }
      this[0x380] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_138);
    }
    if (*(long *)(this + 0x388) != 0) {
      local_170 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_170,(Ref *)pOVar2);
      if ((pOVar11 == (Object *)0x0) ||
         (local_168 = pOVar11, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_168 = (Object *)0x0;
      }
      local_138 = (int)param_4;
      uStack_134 = (undefined4)((ulong)param_4 >> 0x20);
      ppOStack_80 = &local_168;
      local_78 = &local_138;
      local_88 = (Ref<GLTFState> *)&local_170;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x388))(*(undefined8 *)(this + 0x10),&local_88,0);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x378,*(code **)(this + 0x388),&local_88,0);
      }
      if (((local_168 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_168, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_168), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_170);
    }
  }
  else {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)&local_88,local_180);
    Variant::Variant(local_70,pOVar11);
    Variant::Variant(local_58,param_4);
    local_c8 = (Variant *)&local_88;
    pVStack_c0 = local_70;
    local_b8 = local_58;
    (**(code **)(*plVar8 + 0x60))(local_a8,plVar8,this + 0x378,&local_c8,3,&local_138);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_138 != 0) {
      pVVar12 = (Variant *)local_40;
      do {
        pVVar1 = pVVar12 + -0x18;
        pVVar12 = pVVar12 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar12 != (Variant *)&local_88);
      goto LAB_00106c0d;
    }
    pVVar12 = (Variant *)local_40;
    do {
      pVVar1 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar12 != (Variant *)&local_88);
  }
  if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if (((pOVar11 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
     (cVar4 = predelete_handler(pOVar11), cVar4 == '\0')) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar11,false);
      return;
    }
  }
LAB_001071d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::import_node(Ref<GLTFState>, Ref<GLTFNode>, Dictionary&, Node*) */

ulong __thiscall
GLTFDocumentExtension::import_node
          (GLTFDocumentExtension *this,long *param_2,long *param_3,Dictionary *param_4,
          Object *param_5)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  Object *pOVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  Object *local_1b0;
  Dictionary local_1a8 [8];
  undefined8 local_1a0;
  Object *local_198;
  long local_190;
  Object *local_188;
  long local_180 [5];
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  ulong local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  Ref<GLTFState> *local_a8;
  Object **ppOStack_a0;
  Dictionary *local_98;
  Object **appOStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("import_node","modules/gltf/extensions/gltf_document_extension.cpp",0x87,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else if (*param_3 == 0) {
    _err_print_error("import_node","modules/gltf/extensions/gltf_document_extension.cpp",0x88,
                     "Condition \"p_gltf_node.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  else {
    if (param_5 != (Object *)0x0) {
      Dictionary::Dictionary(local_1a8,param_4);
      pOVar10 = (Object *)*param_3;
      if ((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        pOVar10 = (Object *)0x0;
      }
      local_1b0 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1b0,(Ref *)*param_2);
      plVar8 = *(long **)(this + 0x98);
      if (plVar8 == (long *)0x0) {
LAB_001073e2:
        if ((*(long *)(this + 8) != 0) && (this[0x338] == (GLTFDocumentExtension)0x0)) {
          local_158 = 0;
          uStack_154 = 0;
          local_148 = (undefined1  [16])0x0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 6;
          local_120 = 1;
          local_118[0] = 0;
          local_108 = 0;
          local_100 = 0;
          local_f0 = 0;
          String::parse_latin1((String *)&local_158,"_import_node");
          local_120 = CONCAT44(local_120._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_188);
          PropertyInfo::operator=((PropertyInfo *)&uStack_150,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          local_100 = local_100 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Ref<GLTFNode>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFNode>,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
          Vector<int>::push_back(local_f8,0);
          uVar4 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x340) = 0;
          lVar7 = *(long *)(this + 8);
          pcVar9 = *(code **)(lVar7 + 0xd8);
          if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
            local_198 = (Object *)0x0;
            String::parse_latin1((String *)&local_198,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_188,(StringName *)&local_190);
            if (local_180[0] == 0) {
              lVar7 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') goto LAB_001079dd;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_001079fe:
              lVar7 = *(long *)(this + 8);
              pcVar9 = *(code **)(lVar7 + 200);
              if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
                 (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_001078ab;
              uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0));
              *(undefined8 *)(this + 0x340) = uVar6;
            }
            else {
              lVar7 = *(long *)(local_180[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') {
LAB_001079dd:
                if (local_190 != 0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
              if (lVar7 == 0) goto LAB_001079fe;
            }
            lVar7 = *(long *)(this + 8);
          }
          else {
            uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x330,uVar4);
            *(undefined8 *)(this + 0x340) = uVar6;
            lVar7 = *(long *)(this + 8);
          }
LAB_001078ab:
          if (*(char *)(lVar7 + 0x29) != '\0') {
            plVar8 = (long *)operator_new(0x18,"");
            *plVar8 = (long)(this + 0x340);
            plVar8[1] = (long)(this + 0x338);
            plVar8[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar8;
          }
          this[0x338] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)&local_158);
        }
        uVar5 = 0;
        if (*(long *)(this + 0x340) == 0) goto LAB_001073fa;
        local_1a0 = 0;
        Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1a0,(Ref *)local_1b0);
        if ((pOVar10 == (Object *)0x0) ||
           (local_198 = pOVar10, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_198 = (Object *)0x0;
        }
        Dictionary::Dictionary((Dictionary *)&local_190,local_1a8);
        ppOStack_a0 = &local_198;
        appOStack_90[0] = &local_188;
        local_188 = param_5;
        local_a8 = (Ref<GLTFState> *)&local_1a0;
        local_98 = (Dictionary *)&local_190;
        if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
          (**(code **)(this + 0x340))(*(undefined8 *)(this + 0x10),&local_a8,&local_158);
        }
        else {
          (**(code **)(*(long *)(this + 8) + 0xe0))
                    (*(undefined8 *)(this + 0x10),this + 0x330,*(undefined8 *)(this + 0x340),
                     &local_a8,&local_158);
        }
        uVar5 = (ulong)local_158;
        Dictionary::~Dictionary((Dictionary *)&local_190);
        if (((local_198 != (Object *)0x0) &&
            (cVar3 = RefCounted::unreference(), pOVar2 = local_198, cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_198), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1a0);
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1b0);
      }
      else {
        local_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        Variant::Variant((Variant *)&local_a8,local_1b0);
        Variant::Variant((Variant *)appOStack_90,pOVar10);
        Variant::Variant(local_78,local_1a8);
        Variant::Variant(local_60,param_5);
        local_c8 = (Variant *)&local_a8;
        pVStack_c0 = (Variant *)appOStack_90;
        local_b8 = local_78;
        pVStack_b0 = local_60;
        (**(code **)(*plVar8 + 0x60))
                  ((Variant *)local_e8,plVar8,this + 0x330,&local_c8,4,&local_158);
        if (local_158 != 0) {
          if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar11 = local_48;
          do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar11 != (Variant *)&local_a8);
          goto LAB_001073e2;
        }
        uVar5 = Variant::operator_cast_to_long((Variant *)local_e8);
        uVar5 = uVar5 & 0xffffffff;
        if (Variant::needs_deinit[local_e8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar11 = local_48;
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)&local_a8);
LAB_001073fa:
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1b0);
      }
      if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      Dictionary::~Dictionary(local_1a8);
      goto LAB_00107421;
    }
    _err_print_error("import_node","modules/gltf/extensions/gltf_document_extension.cpp",0x89,
                     "Parameter \"p_node\" is null.",0,0);
  }
  uVar5 = 0x1f;
LAB_00107421:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::generate_scene_node(Ref<GLTFState>, Ref<GLTFNode>, Node*) */

Object * __thiscall
GLTFDocumentExtension::generate_scene_node
          (GLTFDocumentExtension *this,long *param_2,long *param_3,Object *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  Object *pOVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  Object *local_180;
  undefined8 local_178;
  Object *local_170;
  Object *local_168;
  long local_160 [5];
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  Ref<GLTFState> *local_88;
  Object **ppOStack_80;
  Object **local_78;
  Variant local_70 [24];
  int local_58 [6];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("generate_scene_node","modules/gltf/extensions/gltf_document_extension.cpp",
                     0x7f,"Condition \"p_state.is_null()\" is true. Returning: nullptr",0,0);
  }
  else {
    pOVar11 = (Object *)*param_3;
    if (pOVar11 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      local_180 = (Object *)0x0;
      if (cVar4 == '\0') {
        pOVar11 = (Object *)0x0;
      }
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_180,(Ref *)*param_2);
      pOVar2 = local_180;
      plVar9 = *(long **)(this + 0x98);
      if (plVar9 == (long *)0x0) {
LAB_00107c4d:
        if ((*(long *)(this + 8) != 0) && (this[800] == (GLTFDocumentExtension)0x0)) {
          local_138 = 0;
          uStack_134 = 0;
          local_128 = (undefined1  [16])0x0;
          uStack_130 = 0;
          uStack_12c = 0;
          local_118 = 0;
          local_110 = 0;
          local_108 = 6;
          local_100 = 1;
          local_f8[0] = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d0 = 0;
          String::parse_latin1((String *)&local_138,"_generate_scene_node");
          local_100 = CONCAT44(local_100._4_4_,8);
          GetTypeInfo<Node3D*,void>::get_class_info((GetTypeInfo<Node3D*,void> *)&local_168);
          PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          local_e0 = local_e0 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          Vector<int>::push_back(local_d8,0);
          GetTypeInfo<Ref<GLTFNode>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFNode>,void> *)&local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          Vector<int>::push_back(local_d8,0);
          GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
          Vector<int>::push_back(local_d8,0);
          uVar5 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x328) = 0;
          lVar8 = *(long *)(this + 8);
          pcVar10 = *(code **)(lVar8 + 0xd8);
          if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
             (pcVar10 = *(code **)(lVar8 + 0xd0), pcVar10 == (code *)0x0)) {
            local_178 = 0;
            String::parse_latin1((String *)&local_178,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_168,(StringName *)&local_170);
            if (local_160[0] == 0) {
              lVar8 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
              if (StringName::configured != '\0') goto LAB_001081ac;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_001081c9:
              lVar8 = *(long *)(this + 8);
              pcVar10 = *(code **)(lVar8 + 200);
              if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
                 (pcVar10 = *(code **)(lVar8 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_0010808f;
              uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0));
              *(undefined8 *)(this + 0x328) = uVar7;
            }
            else {
              lVar8 = *(long *)(local_160[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
              if (StringName::configured != '\0') {
LAB_001081ac:
                if (local_170 != (Object *)0x0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              if (lVar8 == 0) goto LAB_001081c9;
            }
            lVar8 = *(long *)(this + 8);
          }
          else {
            uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 0x318,uVar5);
            *(undefined8 *)(this + 0x328) = uVar7;
            lVar8 = *(long *)(this + 8);
          }
LAB_0010808f:
          if (*(char *)(lVar8 + 0x29) != '\0') {
            plVar9 = (long *)operator_new(0x18,"");
            *plVar9 = (long)(this + 0x328);
            plVar9[1] = (long)(this + 800);
            plVar9[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar9;
          }
          this[800] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)&local_138);
        }
        pOVar6 = *(Object **)(this + 0x328);
        if (pOVar6 != (Object *)0x0) {
          local_178 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_178,(Ref *)pOVar2);
          if ((pOVar11 == (Object *)0x0) ||
             (local_170 = pOVar11, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            local_170 = (Object *)0x0;
          }
          ppOStack_80 = &local_170;
          local_78 = &local_168;
          local_168 = param_4;
          local_88 = (Ref<GLTFState> *)&local_178;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x328))(*(undefined8 *)(this + 0x10),&local_88,&local_138);
            pOVar6 = (Object *)CONCAT44(uStack_134,local_138);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x318,*(code **)(this + 0x328),&local_88,
                       &local_138);
            pOVar6 = (Object *)CONCAT44(uStack_134,local_138);
          }
          if (((local_170 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar3 = local_170, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_170), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_178);
        }
      }
      else {
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        Variant::Variant((Variant *)&local_88,local_180);
        Variant::Variant(local_70,pOVar11);
        Variant::Variant((Variant *)local_58,param_4);
        local_c8 = (Variant *)&local_88;
        pVStack_c0 = local_70;
        local_b8 = (Variant *)local_58;
        (**(code **)(*plVar9 + 0x60))
                  ((Variant *)local_a8,plVar9,this + 0x318,&local_c8,3,&local_138);
        if (local_138 != 0) {
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar12 = (Variant *)local_58;
          cVar4 = Variant::needs_deinit[local_58[0]];
          while( true ) {
            if (cVar4 != '\0') {
              Variant::_clear_internal();
            }
            if (pVVar12 == (Variant *)&local_88) break;
            pVVar1 = pVVar12 + -0x18;
            pVVar12 = pVVar12 + -0x18;
            cVar4 = Variant::needs_deinit[*(int *)pVVar1];
          }
          goto LAB_00107c4d;
        }
        pOVar6 = Variant::operator_cast_to_Object_((Variant *)local_a8);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node3D::typeinfo,0);
        }
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar12 = (Variant *)local_40;
        do {
          pVVar1 = pVVar12 + -0x18;
          pVVar12 = pVVar12 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar12 != (Variant *)&local_88);
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
      goto LAB_00107c8e;
    }
    _err_print_error("generate_scene_node","modules/gltf/extensions/gltf_document_extension.cpp",
                     0x80,"Condition \"p_gltf_node.is_null()\" is true. Returning: nullptr",0,0);
  }
  pOVar6 = (Object *)0x0;
LAB_00107c8e:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return pOVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::parse_node_extensions(Ref<GLTFState>, Ref<GLTFNode>, Dictionary&) */

ulong __thiscall
GLTFDocumentExtension::parse_node_extensions
          (GLTFDocumentExtension *this,long *param_2,long *param_3,Dictionary *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  Object *pOVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  Object *local_188;
  Dictionary local_180 [8];
  undefined8 local_178;
  Object *local_170;
  Dictionary local_168 [8];
  long local_160 [5];
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  Ref<GLTFState> *local_88;
  Object **ppOStack_80;
  Dictionary *local_78;
  Variant local_70 [24];
  int local_58 [6];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("parse_node_extensions","modules/gltf/extensions/gltf_document_extension.cpp",
                     0x4c,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    if (*param_3 != 0) {
      Dictionary::Dictionary(local_180,param_4);
      pOVar11 = (Object *)*param_3;
      if ((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        pOVar11 = (Object *)0x0;
      }
      local_188 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_188,(Ref *)*param_2);
      pOVar2 = local_188;
      plVar9 = *(long **)(this + 0x98);
      if (plVar9 == (long *)0x0) {
LAB_00108435:
        if ((*(long *)(this + 8) != 0) && (this[0x278] == (GLTFDocumentExtension)0x0)) {
          local_138 = 0;
          uStack_134 = 0;
          local_128 = (undefined1  [16])0x0;
          uStack_130 = 0;
          uStack_12c = 0;
          local_118 = 0;
          local_110 = 0;
          local_108 = 6;
          local_100 = 1;
          local_f8[0] = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d0 = 0;
          String::parse_latin1((String *)&local_138,"_parse_node_extensions");
          local_100 = CONCAT44(local_100._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)local_168);
          PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
          local_e0 = local_e0 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
          Vector<int>::push_back(local_d8,0);
          GetTypeInfo<Ref<GLTFNode>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFNode>,void> *)local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
          Vector<int>::push_back(local_d8,0);
          GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)local_168);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)local_168);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_168);
          Vector<int>::push_back(local_d8,0);
          uVar5 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x280) = 0;
          lVar8 = *(long *)(this + 8);
          pcVar10 = *(code **)(lVar8 + 0xd8);
          if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
             (pcVar10 = *(code **)(lVar8 + 0xd0), pcVar10 == (code *)0x0)) {
            local_178 = 0;
            String::parse_latin1((String *)&local_178,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)local_168,(StringName *)&local_170);
            if (local_160[0] == 0) {
              lVar8 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
              if (StringName::configured != '\0') goto LAB_001089a5;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_001089c4:
              lVar8 = *(long *)(this + 8);
              pcVar10 = *(code **)(lVar8 + 200);
              if (((pcVar10 == (code *)0x0) || (*(long *)(lVar8 + 0xe0) == 0)) &&
                 (pcVar10 = *(code **)(lVar8 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00108878;
              uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0));
              *(undefined8 *)(this + 0x280) = uVar7;
            }
            else {
              lVar8 = *(long *)(local_160[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
              if (StringName::configured != '\0') {
LAB_001089a5:
                if (local_170 != (Object *)0x0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              if (lVar8 == 0) goto LAB_001089c4;
            }
            lVar8 = *(long *)(this + 8);
          }
          else {
            uVar7 = (*pcVar10)(*(undefined8 *)(lVar8 + 0xa0),this + 0x270,uVar5);
            *(undefined8 *)(this + 0x280) = uVar7;
            lVar8 = *(long *)(this + 8);
          }
LAB_00108878:
          if (*(char *)(lVar8 + 0x29) != '\0') {
            plVar9 = (long *)operator_new(0x18,"");
            *plVar9 = (long)(this + 0x280);
            plVar9[1] = (long)(this + 0x278);
            plVar9[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar9;
          }
          this[0x278] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)&local_138);
        }
        uVar6 = 0;
        if (*(long *)(this + 0x280) != 0) {
          local_178 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_178,(Ref *)pOVar2);
          if ((pOVar11 == (Object *)0x0) ||
             (local_170 = pOVar11, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
            local_170 = (Object *)0x0;
          }
          Dictionary::Dictionary(local_168,local_180);
          ppOStack_80 = &local_170;
          local_88 = (Ref<GLTFState> *)&local_178;
          local_78 = local_168;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x280))(*(undefined8 *)(this + 0x10),&local_88,&local_138);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x270,*(undefined8 *)(this + 0x280),
                       &local_88,&local_138);
          }
          uVar6 = (ulong)local_138;
          Dictionary::~Dictionary(local_168);
          if (((local_170 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar3 = local_170, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_170), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_178);
        }
      }
      else {
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        Variant::Variant((Variant *)&local_88,local_188);
        Variant::Variant(local_70,pOVar11);
        Variant::Variant((Variant *)local_58,local_180);
        local_c8 = (Variant *)&local_88;
        pVStack_c0 = local_70;
        local_b8 = (Variant *)local_58;
        (**(code **)(*plVar9 + 0x60))
                  ((Variant *)local_a8,plVar9,this + 0x270,&local_c8,3,&local_138);
        if (local_138 != 0) {
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar12 = (Variant *)local_58;
          cVar4 = Variant::needs_deinit[local_58[0]];
          while( true ) {
            if (cVar4 != '\0') {
              Variant::_clear_internal();
            }
            if (pVVar12 == (Variant *)&local_88) break;
            pVVar1 = pVVar12 + -0x18;
            pVVar12 = pVVar12 + -0x18;
            cVar4 = Variant::needs_deinit[*(int *)pVVar1];
          }
          goto LAB_00108435;
        }
        uVar6 = Variant::operator_cast_to_long((Variant *)local_a8);
        uVar6 = uVar6 & 0xffffffff;
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar12 = (Variant *)local_40;
        do {
          pVVar1 = pVVar12 + -0x18;
          pVVar12 = pVVar12 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar12 != (Variant *)&local_88);
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
      Dictionary::~Dictionary(local_180);
      goto LAB_0010847f;
    }
    _err_print_error("parse_node_extensions","modules/gltf/extensions/gltf_document_extension.cpp",
                     0x4d,
                     "Condition \"p_gltf_node.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  uVar6 = 0x1f;
LAB_0010847f:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::export_post(Ref<GLTFState>) */

ulong __thiscall GLTFDocumentExtension::export_post(GLTFDocumentExtension *this,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  uint local_f8 [2];
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
  Ref<GLTFState> *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((Ref *)*param_2 == (Ref *)0x0) {
    uVar4 = 0x1f;
    _err_print_error("export_post","modules/gltf/extensions/gltf_document_extension.cpp",0xe5,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
    goto LAB_00108ba0;
  }
  local_140 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_140,(Ref *)*param_2);
  pOVar1 = local_140;
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_00108b73:
    if ((*(long *)(this + 8) != 0) && (this[0x458] == (GLTFDocumentExtension)0x0)) {
      local_f8[0] = 0;
      local_f8[1] = 0;
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
      String::parse_latin1((String *)local_f8,"_export_post");
      local_c0 = CONCAT44(local_c0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_128);
      PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      Vector<int>::push_back(local_98,0);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x460) = 0;
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_138 = 0;
        String::parse_latin1((String *)&local_138,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_128,(StringName *)&local_130);
        if (local_120[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') goto LAB_00108f34;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00108f53:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00108e6e;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          *(undefined8 *)(this + 0x460) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_120[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') {
LAB_00108f34:
            if (local_130 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if (lVar6 == 0) goto LAB_00108f53;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x450,uVar3);
        *(undefined8 *)(this + 0x460) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_00108e6e:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x460);
        plVar7[1] = (long)(this + 0x458);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x458] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_f8);
    }
    uVar4 = 0;
    if (*(long *)(this + 0x460) != 0) {
      local_128 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_128,(Ref *)pOVar1);
      local_58[0] = (Ref<GLTFState> *)&local_128;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x460))(*(undefined8 *)(this + 0x10),local_58,local_f8);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x450,*(undefined8 *)(this + 0x460),local_58,
                   local_f8);
      }
      uVar4 = (ulong)local_f8[0];
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_128);
    }
  }
  else {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,local_140);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x450,&local_80,1,local_f8);
    if (local_f8[0] != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00108b73;
    }
    uVar4 = Variant::operator_cast_to_long((Variant *)local_58);
    uVar4 = uVar4 & 0xffffffff;
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_00108ba0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::export_object_model_property(Ref<GLTFState>, NodePath const&, Node const*,
   int, Object const*, int) */

Ref<GLTFObjectModelProperty> *
GLTFDocumentExtension::export_object_model_property
          (Ref<GLTFObjectModelProperty> *param_1,long param_2,long *param_3,NodePath *param_4,
          Object *param_5,int param_6,Object *param_7,int param_8)

{
  Variant *pVVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  Ref *pRVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Object *local_208;
  NodePath local_200 [8];
  undefined8 local_1f8;
  NodePath local_1f0 [8];
  Object *local_1e8;
  long local_1e0;
  Object *local_1d8;
  Ref *local_1d0;
  Ref *local_1c8;
  long local_1c0 [5];
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
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
  Variant *local_e8;
  Variant *pVStack_e0;
  Ref<GLTFState> *local_d8;
  NodePath *pNStack_d0;
  Object **local_c8;
  long *plStack_c0;
  Object **local_b8;
  Ref **ppRStack_b0;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *param_3;
  *(undefined8 *)param_1 = 0;
  if (lVar4 == 0) {
    _err_print_error("export_object_model_property",
                     "modules/gltf/extensions/gltf_document_extension.cpp",0xb7,
                     "Condition \"p_state.is_null()\" is true. Returning: ret",0,0);
    goto LAB_00109261;
  }
  if (param_5 == (Object *)0x0) {
    _err_print_error("export_object_model_property",
                     "modules/gltf/extensions/gltf_document_extension.cpp",0xb8,
                     "Parameter \"p_godot_node\" is null.",0,0);
    goto LAB_00109261;
  }
  if (param_7 == (Object *)0x0) {
    _err_print_error("export_object_model_property",
                     "modules/gltf/extensions/gltf_document_extension.cpp",0xb9,
                     "Parameter \"p_target_object\" is null.",0,0);
    goto LAB_00109261;
  }
  NodePath::NodePath(local_200,param_4);
  local_208 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_208,(Ref *)*param_3);
  plVar7 = *(long **)(param_2 + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_00109239:
    if ((*(long *)(param_2 + 8) != 0) && (*(char *)(param_2 + 0x3c8) == '\0')) {
      local_198 = 0;
      uStack_194 = 0;
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
      String::parse_latin1((String *)&local_198,"_export_object_model_property");
      local_160 = CONCAT44(local_160._4_4_,8);
      GetTypeInfo<Ref<GLTFObjectModelProperty>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFObjectModelProperty>,void> *)&local_1c8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_190,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      local_140 = local_140 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,0);
      GetTypeInfo<NodePath,void>::get_class_info((GetTypeInfo<NodePath,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,0);
      GetTypeInfo<Node_const*,void>::get_class_info((GetTypeInfo<Node_const*,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,0);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,3);
      GetTypeInfo<Object_const*,void>::get_class_info((GetTypeInfo<Object_const*,void> *)&local_1c8)
      ;
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,0);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
      Vector<int>::push_back(local_138,3);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(param_2 + 8);
      *(undefined8 *)(param_2 + 0x3d0) = 0;
      pcVar8 = *(code **)(lVar4 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar4 + 0xd0), pcVar8 == (code *)0x0)) {
        local_1d8 = (Object *)0x0;
        String::parse_latin1((String *)&local_1d8,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_1d0,(String *)&local_1d8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_1c8,(StringName *)&local_1d0);
        if (local_1c0[0] == 0) {
          lVar4 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1c0);
          if (StringName::configured != '\0') goto LAB_00109993;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
LAB_001099b2:
          lVar4 = *(long *)(param_2 + 8);
          pcVar8 = *(code **)(lVar4 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar4 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00109813;
          uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0),param_2 + 0x3c0);
          *(undefined8 *)(param_2 + 0x3d0) = uVar6;
        }
        else {
          lVar4 = *(long *)(local_1c0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1c0);
          if (StringName::configured != '\0') {
LAB_00109993:
            if (local_1d0 != (Ref *)0x0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
          if (lVar4 == 0) goto LAB_001099b2;
        }
        lVar4 = *(long *)(param_2 + 8);
      }
      else {
        uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0),param_2 + 0x3c0,uVar3);
        *(undefined8 *)(param_2 + 0x3d0) = uVar6;
        lVar4 = *(long *)(param_2 + 8);
      }
LAB_00109813:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = param_2 + 0x3d0;
        plVar7[1] = param_2 + 0x3c8;
        plVar7[2] = *(long *)(param_2 + 0x168);
        *(long **)(param_2 + 0x168) = plVar7;
      }
      *(undefined1 *)(param_2 + 0x3c8) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_198);
    }
    if (*(long *)(param_2 + 0x3d0) != 0) {
      local_1f8 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1f8,(Ref *)local_208);
      NodePath::NodePath(local_1f0,local_200);
      local_1e0 = (long)param_6;
      local_1d0 = (Ref *)(long)param_8;
      local_c8 = &local_1e8;
      plStack_c0 = &local_1e0;
      local_b8 = &local_1d8;
      local_1c8 = (Ref *)0x0;
      ppRStack_b0 = &local_1d0;
      pcVar8 = *(code **)(*(long *)(param_2 + 8) + 0xe0);
      local_1e8 = param_5;
      local_1d8 = param_7;
      local_d8 = (Ref<GLTFState> *)&local_1f8;
      pNStack_d0 = local_1f0;
      if (pcVar8 == (code *)0x0) {
        (**(code **)(param_2 + 0x3d0))(*(undefined8 *)(param_2 + 0x10),&local_d8,&local_1c8);
        local_198 = 0;
        uStack_194 = 0;
        Ref<GLTFObjectModelProperty>::operator=
                  ((Ref<GLTFObjectModelProperty> *)&local_198,local_1c8);
        Ref<GLTFObjectModelProperty>::operator=(param_1,(Ref *)CONCAT44(uStack_194,local_198));
        Ref<GLTFObjectModelProperty>::unref((Ref<GLTFObjectModelProperty> *)&local_198);
      }
      else {
        (*pcVar8)(*(undefined8 *)(param_2 + 0x10),param_2 + 0x3c0,*(undefined8 *)(param_2 + 0x3d0),
                  &local_d8,&local_1c8);
        pRVar5 = local_1c8;
        if ((local_1c8 == (Ref *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          Ref<GLTFObjectModelProperty>::operator=(param_1,(Ref *)0x0);
        }
        else {
          Ref<GLTFObjectModelProperty>::operator=(param_1,pRVar5);
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pRVar5), cVar2 != '\0')) {
            (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
            Memory::free_static(pRVar5,false);
          }
        }
      }
      if (((local_1c8 != (Ref *)0x0) &&
          (cVar2 = RefCounted::unreference(), pRVar5 = local_1c8, cVar2 != '\0')) &&
         (cVar2 = predelete_handler((Object *)local_1c8), cVar2 != '\0')) {
        (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
        Memory::free_static(pRVar5,false);
      }
      NodePath::~NodePath(local_1f0);
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1f8);
    }
  }
  else {
    local_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    Variant::Variant((Variant *)&local_d8,local_208);
    Variant::Variant((Variant *)&plStack_c0,local_200);
    Variant::Variant(local_a8,param_5);
    Variant::Variant(local_90,param_6);
    Variant::Variant(local_78,param_7);
    Variant::Variant(local_60,param_8);
    local_108 = (Variant *)&local_d8;
    pVStack_100 = (Variant *)&plStack_c0;
    local_f8 = local_a8;
    pVStack_f0 = local_90;
    local_e8 = local_78;
    pVStack_e0 = local_60;
    (**(code **)(*plVar7 + 0x60))(local_128,plVar7,param_2 + 0x3c0,&local_108,6,&local_198);
    if (local_198 != 0) {
      if (Variant::needs_deinit[local_128[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar9 = local_48;
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != (Variant *)&local_d8);
      goto LAB_00109239;
    }
    local_1d0 = (Ref *)0x0;
    lVar4 = Variant::get_validated_object();
    if ((lVar4 == 0) ||
       (pRVar5 = (Ref *)__dynamic_cast(lVar4,&Object::typeinfo,&GLTFObjectModelProperty::typeinfo,0)
       , pRVar5 == (Ref *)0x0)) {
      pRVar5 = (Ref *)0x0;
    }
    else {
      local_1c8 = (Ref *)0x0;
      local_1d0 = pRVar5;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_1d0 = (Ref *)0x0;
        pRVar5 = (Ref *)0x0;
      }
      Ref<GLTFObjectModelProperty>::unref((Ref<GLTFObjectModelProperty> *)&local_1c8);
    }
    Ref<GLTFObjectModelProperty>::operator=(param_1,pRVar5);
    Ref<GLTFObjectModelProperty>::unref((Ref<GLTFObjectModelProperty> *)&local_1d0);
    if (Variant::needs_deinit[local_128[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar9 = local_48;
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)&local_d8);
  }
  Ref<GLTFState>::unref((Ref<GLTFState> *)&local_208);
  NodePath::~NodePath(local_200);
LAB_00109261:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GLTFDocumentExtension::export_preserialize(Ref<GLTFState>) */

ulong __thiscall
GLTFDocumentExtension::export_preserialize(GLTFDocumentExtension *this,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  uint local_f8 [2];
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
  Ref<GLTFState> *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((Ref *)*param_2 == (Ref *)0x0) {
    uVar4 = 0x1f;
    _err_print_error("export_preserialize","modules/gltf/extensions/gltf_document_extension.cpp",
                     0xaf,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
    goto LAB_00109b90;
  }
  local_140 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_140,(Ref *)*param_2);
  pOVar1 = local_140;
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_00109b63:
    if ((*(long *)(this + 8) != 0) && (this[0x3b0] == (GLTFDocumentExtension)0x0)) {
      local_f8[0] = 0;
      local_f8[1] = 0;
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
      String::parse_latin1((String *)local_f8,"_export_preserialize");
      local_c0 = CONCAT44(local_c0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_128);
      PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      Vector<int>::push_back(local_98,0);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x3b8) = 0;
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_138 = 0;
        String::parse_latin1((String *)&local_138,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_128,(StringName *)&local_130);
        if (local_120[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') goto LAB_00109f24;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00109f43:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00109e5e;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          *(undefined8 *)(this + 0x3b8) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_120[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') {
LAB_00109f24:
            if (local_130 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if (lVar6 == 0) goto LAB_00109f43;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x3a8,uVar3);
        *(undefined8 *)(this + 0x3b8) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_00109e5e:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x3b8);
        plVar7[1] = (long)(this + 0x3b0);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x3b0] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_f8);
    }
    uVar4 = 0;
    if (*(long *)(this + 0x3b8) != 0) {
      local_128 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_128,(Ref *)pOVar1);
      local_58[0] = (Ref<GLTFState> *)&local_128;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x3b8))(*(undefined8 *)(this + 0x10),local_58,local_f8);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x3a8,*(undefined8 *)(this + 0x3b8),local_58,
                   local_f8);
      }
      uVar4 = (ulong)local_f8[0];
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_128);
    }
  }
  else {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,local_140);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x3a8,&local_80,1,local_f8);
    if (local_f8[0] != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00109b63;
    }
    uVar4 = Variant::operator_cast_to_long((Variant *)local_58);
    uVar4 = uVar4 & 0xffffffff;
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_00109b90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::export_post_convert(Ref<GLTFState>, Node*) */

ulong __thiscall
GLTFDocumentExtension::export_post_convert
          (GLTFDocumentExtension *this,undefined8 *param_2,Object *param_3)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_160;
  undefined8 local_158;
  long local_150;
  Object *local_148;
  long local_140 [5];
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  Ref<GLTFState> *local_78;
  Object **ppOStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((Ref *)*param_2 == (Ref *)0x0) {
    _err_print_error("export_post_convert","modules/gltf/extensions/gltf_document_extension.cpp",
                     0xa7,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    if (param_3 != (Object *)0x0) {
      local_160 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_160,(Ref *)*param_2);
      pOVar1 = local_160;
      plVar7 = *(long **)(this + 0x98);
      if (plVar7 == (long *)0x0) {
LAB_0010a12f:
        if ((*(long *)(this + 8) != 0) && (this[0x398] == (GLTFDocumentExtension)0x0)) {
          local_118[0] = 0;
          local_118[1] = 0;
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
          String::parse_latin1((String *)local_118,"_export_post_convert");
          local_e0 = CONCAT44(local_e0._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
          PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
          local_c0 = local_c0 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_148);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
          Vector<int>::push_back(local_b8,0);
          GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_148);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
          Vector<int>::push_back(local_b8,0);
          uVar3 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x3a0) = 0;
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 0xd8);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
            local_158 = 0;
            String::parse_latin1((String *)&local_158,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_148,(StringName *)&local_150);
            if (local_140[0] == 0) {
              lVar6 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
              if (StringName::configured != '\0') goto LAB_0010a5ca;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010a5e9:
              lVar6 = *(long *)(this + 8);
              pcVar8 = *(code **)(lVar6 + 200);
              if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
                 (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010a4ae;
              uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
              *(undefined8 *)(this + 0x3a0) = uVar5;
            }
            else {
              lVar6 = *(long *)(local_140[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
              if (StringName::configured != '\0') {
LAB_0010a5ca:
                if (local_150 != 0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              if (lVar6 == 0) goto LAB_0010a5e9;
            }
            lVar6 = *(long *)(this + 8);
          }
          else {
            uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x390,uVar3);
            *(undefined8 *)(this + 0x3a0) = uVar5;
            lVar6 = *(long *)(this + 8);
          }
LAB_0010a4ae:
          if (*(char *)(lVar6 + 0x29) != '\0') {
            plVar7 = (long *)operator_new(0x18,"");
            *plVar7 = (long)(this + 0x3a0);
            plVar7[1] = (long)(this + 0x398);
            plVar7[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar7;
          }
          this[0x398] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)local_118);
        }
        uVar4 = 0;
        if (*(long *)(this + 0x3a0) != 0) {
          local_150 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_150,(Ref *)pOVar1);
          ppOStack_70 = &local_148;
          local_148 = param_3;
          local_78 = (Ref<GLTFState> *)&local_150;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x3a0))(*(undefined8 *)(this + 0x10),&local_78,local_118);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x390,*(undefined8 *)(this + 0x3a0),
                       &local_78,local_118);
          }
          uVar4 = (ulong)local_118[0];
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_150);
        }
      }
      else {
        local_118[0] = 0;
        local_118[1] = 0;
        uStack_110 = 0;
        Variant::Variant((Variant *)&local_78,local_160);
        Variant::Variant((Variant *)local_60,param_3);
        local_a8 = (Variant *)&local_78;
        pVStack_a0 = (Variant *)local_60;
        (**(code **)(*plVar7 + 0x60))((Variant *)local_98,plVar7,this + 0x390,&local_a8,2,local_118)
        ;
        if (local_118[0] != 0) {
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_0010a12f;
        }
        uVar4 = Variant::operator_cast_to_long((Variant *)local_98);
        uVar4 = uVar4 & 0xffffffff;
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_60[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      goto LAB_0010a15c;
    }
    _err_print_error("export_post_convert","modules/gltf/extensions/gltf_document_extension.cpp",
                     0xa8,"Parameter \"p_root\" is null.",0,0);
  }
  uVar4 = 0x1f;
LAB_0010a15c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::export_preflight(Ref<GLTFState>, Node*) */

ulong __thiscall
GLTFDocumentExtension::export_preflight
          (GLTFDocumentExtension *this,undefined8 *param_2,Object *param_3)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_160;
  undefined8 local_158;
  long local_150;
  Object *local_148;
  long local_140 [5];
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  Ref<GLTFState> *local_78;
  Object **ppOStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (Object *)0x0) {
    uVar4 = 0x1f;
    _err_print_error("export_preflight","modules/gltf/extensions/gltf_document_extension.cpp",0x99,
                     "Parameter \"p_root\" is null.",0,0);
    goto LAB_0010a7f3;
  }
  local_160 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_160,(Ref *)*param_2);
  pOVar1 = local_160;
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_0010a7c6:
    if ((*(long *)(this + 8) != 0) && (this[0x368] == (GLTFDocumentExtension)0x0)) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String *)local_118,"_export_preflight");
      local_e0 = CONCAT44(local_e0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
      PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      Vector<int>::push_back(local_b8,0);
      GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      Vector<int>::push_back(local_b8,0);
      uVar3 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x370) = 0;
      lVar6 = *(long *)(this + 8);
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_158 = 0;
        String::parse_latin1((String *)&local_158,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_148,(StringName *)&local_150);
        if (local_140[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') goto LAB_0010ac2a;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010ac49:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010ab16;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          *(undefined8 *)(this + 0x370) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_140[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') {
LAB_0010ac2a:
            if (local_150 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
          if (lVar6 == 0) goto LAB_0010ac49;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x360,uVar3);
        *(undefined8 *)(this + 0x370) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_0010ab16:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x370);
        plVar7[1] = (long)(this + 0x368);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x368] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_118);
    }
    uVar4 = 0;
    if (*(long *)(this + 0x370) != 0) {
      local_150 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_150,(Ref *)pOVar1);
      ppOStack_70 = &local_148;
      local_148 = param_3;
      local_78 = (Ref<GLTFState> *)&local_150;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x370))(*(undefined8 *)(this + 0x10),&local_78,local_118);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x360,*(undefined8 *)(this + 0x370),&local_78
                   ,local_118);
      }
      uVar4 = (ulong)local_118[0];
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_150);
    }
  }
  else {
    local_118[0] = 0;
    local_118[1] = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,local_160);
    Variant::Variant((Variant *)local_60,param_3);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_98,plVar7,this + 0x360,&local_a8,2,local_118);
    if (local_118[0] != 0) {
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a7c6;
    }
    uVar4 = Variant::operator_cast_to_long((Variant *)local_98);
    uVar4 = uVar4 & 0xffffffff;
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_0010a7f3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::import_post(Ref<GLTFState>, Node*) */

ulong __thiscall
GLTFDocumentExtension::import_post(GLTFDocumentExtension *this,undefined8 *param_2,Object *param_3)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_160;
  undefined8 local_158;
  long local_150;
  Object *local_148;
  long local_140 [5];
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  Ref<GLTFState> *local_78;
  Object **ppOStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (Object *)0x0) {
    _err_print_error("import_post","modules/gltf/extensions/gltf_document_extension.cpp",0x90,
                     "Parameter \"p_root\" is null.",0,0);
  }
  else {
    if ((Ref *)*param_2 != (Ref *)0x0) {
      local_160 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_160,(Ref *)*param_2);
      pOVar1 = local_160;
      plVar7 = *(long **)(this + 0x98);
      if (plVar7 == (long *)0x0) {
LAB_0010ae2f:
        if ((*(long *)(this + 8) != 0) && (this[0x350] == (GLTFDocumentExtension)0x0)) {
          local_118[0] = 0;
          local_118[1] = 0;
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
          String::parse_latin1((String *)local_118,"_import_post");
          local_e0 = CONCAT44(local_e0._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
          PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
          local_c0 = local_c0 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_148);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
          Vector<int>::push_back(local_b8,0);
          GetTypeInfo<Node*,void>::get_class_info((GetTypeInfo<Node*,void> *)&local_148);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
          Vector<int>::push_back(local_b8,0);
          uVar3 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x358) = 0;
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 0xd8);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
            local_158 = 0;
            String::parse_latin1((String *)&local_158,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_148,(StringName *)&local_150);
            if (local_140[0] == 0) {
              lVar6 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
              if (StringName::configured != '\0') goto LAB_0010b2ca;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010b2e9:
              lVar6 = *(long *)(this + 8);
              pcVar8 = *(code **)(lVar6 + 200);
              if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
                 (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010b1ae;
              uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
              *(undefined8 *)(this + 0x358) = uVar5;
            }
            else {
              lVar6 = *(long *)(local_140[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
              if (StringName::configured != '\0') {
LAB_0010b2ca:
                if (local_150 != 0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              if (lVar6 == 0) goto LAB_0010b2e9;
            }
            lVar6 = *(long *)(this + 8);
          }
          else {
            uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x348,uVar3);
            *(undefined8 *)(this + 0x358) = uVar5;
            lVar6 = *(long *)(this + 8);
          }
LAB_0010b1ae:
          if (*(char *)(lVar6 + 0x29) != '\0') {
            plVar7 = (long *)operator_new(0x18,"");
            *plVar7 = (long)(this + 0x358);
            plVar7[1] = (long)(this + 0x350);
            plVar7[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar7;
          }
          this[0x350] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)local_118);
        }
        uVar4 = 0;
        if (*(long *)(this + 0x358) != 0) {
          local_150 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_150,(Ref *)pOVar1);
          ppOStack_70 = &local_148;
          local_148 = param_3;
          local_78 = (Ref<GLTFState> *)&local_150;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x358))(*(undefined8 *)(this + 0x10),&local_78,local_118);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x348,*(undefined8 *)(this + 0x358),
                       &local_78,local_118);
          }
          uVar4 = (ulong)local_118[0];
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_150);
        }
      }
      else {
        local_118[0] = 0;
        local_118[1] = 0;
        uStack_110 = 0;
        Variant::Variant((Variant *)&local_78,local_160);
        Variant::Variant((Variant *)local_60,param_3);
        local_a8 = (Variant *)&local_78;
        pVStack_a0 = (Variant *)local_60;
        (**(code **)(*plVar7 + 0x60))((Variant *)local_98,plVar7,this + 0x348,&local_a8,2,local_118)
        ;
        if (local_118[0] != 0) {
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_0010ae2f;
        }
        uVar4 = Variant::operator_cast_to_long((Variant *)local_98);
        uVar4 = uVar4 & 0xffffffff;
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_60[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      goto LAB_0010ae5c;
    }
    _err_print_error("import_post","modules/gltf/extensions/gltf_document_extension.cpp",0x91,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  uVar4 = 0x1f;
LAB_0010ae5c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::import_pre_generate(Ref<GLTFState>) */

ulong __thiscall
GLTFDocumentExtension::import_pre_generate(GLTFDocumentExtension *this,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  uint local_f8 [2];
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
  Ref<GLTFState> *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((Ref *)*param_2 == (Ref *)0x0) {
    uVar4 = 0x1f;
    _err_print_error("import_pre_generate","modules/gltf/extensions/gltf_document_extension.cpp",
                     0x78,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
    goto LAB_0010b4c0;
  }
  local_140 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_140,(Ref *)*param_2);
  pOVar1 = local_140;
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_0010b493:
    if ((*(long *)(this + 8) != 0) && (this[0x308] == (GLTFDocumentExtension)0x0)) {
      local_f8[0] = 0;
      local_f8[1] = 0;
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
      String::parse_latin1((String *)local_f8,"_import_pre_generate");
      local_c0 = CONCAT44(local_c0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_128);
      PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      Vector<int>::push_back(local_98,0);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x310) = 0;
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_138 = 0;
        String::parse_latin1((String *)&local_138,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_128,(StringName *)&local_130);
        if (local_120[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') goto LAB_0010b854;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010b873:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010b78e;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          *(undefined8 *)(this + 0x310) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_120[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') {
LAB_0010b854:
            if (local_130 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if (lVar6 == 0) goto LAB_0010b873;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x300,uVar3);
        *(undefined8 *)(this + 0x310) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_0010b78e:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x310);
        plVar7[1] = (long)(this + 0x308);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x308] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_f8);
    }
    uVar4 = 0;
    if (*(long *)(this + 0x310) != 0) {
      local_128 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_128,(Ref *)pOVar1);
      local_58[0] = (Ref<GLTFState> *)&local_128;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x310))(*(undefined8 *)(this + 0x10),local_58,local_f8);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x300,*(undefined8 *)(this + 0x310),local_58,
                   local_f8);
      }
      uVar4 = (ulong)local_f8[0];
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_128);
    }
  }
  else {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,local_140);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x300,&local_80,1,local_f8);
    if (local_f8[0] != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b493;
    }
    uVar4 = Variant::operator_cast_to_long((Variant *)local_58);
    uVar4 = uVar4 & 0xffffffff;
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_0010b4c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::import_post_parse(Ref<GLTFState>) */

ulong __thiscall
GLTFDocumentExtension::import_post_parse(GLTFDocumentExtension *this,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  Object *local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  uint local_f8 [2];
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
  Ref<GLTFState> *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((Ref *)*param_2 == (Ref *)0x0) {
    uVar4 = 0x1f;
    _err_print_error("import_post_parse","modules/gltf/extensions/gltf_document_extension.cpp",0x71,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
    goto LAB_0010ba50;
  }
  local_140 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_140,(Ref *)*param_2);
  pOVar1 = local_140;
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_0010ba23:
    if ((*(long *)(this + 8) != 0) && (this[0x2f0] == (GLTFDocumentExtension)0x0)) {
      local_f8[0] = 0;
      local_f8[1] = 0;
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
      String::parse_latin1((String *)local_f8,"_import_post_parse");
      local_c0 = CONCAT44(local_c0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_128);
      PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      Vector<int>::push_back(local_98,0);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x2f8) = 0;
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_138 = 0;
        String::parse_latin1((String *)&local_138,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_128,(StringName *)&local_130);
        if (local_120[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') goto LAB_0010bde4;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010be03:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010bd1e;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          *(undefined8 *)(this + 0x2f8) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_120[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') {
LAB_0010bde4:
            if (local_130 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if (lVar6 == 0) goto LAB_0010be03;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x2e8,uVar3);
        *(undefined8 *)(this + 0x2f8) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_0010bd1e:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x2f8);
        plVar7[1] = (long)(this + 0x2f0);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x2f0] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_f8);
    }
    uVar4 = 0;
    if (*(long *)(this + 0x2f8) != 0) {
      local_128 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_128,(Ref *)pOVar1);
      local_58[0] = (Ref<GLTFState> *)&local_128;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x2f8))(*(undefined8 *)(this + 0x10),local_58,local_f8);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x2e8,*(undefined8 *)(this + 0x2f8),local_58,
                   local_f8);
      }
      uVar4 = (ulong)local_f8[0];
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_128);
    }
  }
  else {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,local_140);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x2e8,&local_80,1,local_f8);
    if (local_f8[0] != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010ba23;
    }
    uVar4 = Variant::operator_cast_to_long((Variant *)local_58);
    uVar4 = uVar4 & 0xffffffff;
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_0010ba50:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::import_object_model_property(Ref<GLTFState>, Vector<String> const&,
   TypedArray<NodePath> const&) */

Ref<GLTFObjectModelProperty> *
GLTFDocumentExtension::import_object_model_property
          (Ref<GLTFObjectModelProperty> *param_1,long param_2,long *param_3,long param_4,
          Array *param_5)

{
  Variant *pVVar1;
  char cVar2;
  Variant *pVVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 *puVar8;
  Object *pOVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  Ref<GLTFState> *this;
  GetTypeInfo<Ref<GLTFObjectModelProperty>,void> *this_00;
  long lVar11;
  CowData<String> *this_01;
  Vector<int> *this_02;
  Object *local_1a0;
  Array local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  Object *local_180;
  Vector local_178 [8];
  long local_170;
  Ref *local_168;
  long local_160 [5];
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  Ref<GLTFState> *local_88;
  int *piStack_80;
  Array *local_78;
  Variant local_70 [24];
  int local_58 [6];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *param_3;
  *(undefined8 *)param_1 = 0;
  if (lVar11 == 0) {
    _err_print_error("import_object_model_property",
                     "modules/gltf/extensions/gltf_document_extension.cpp",0x6b,
                     "Condition \"p_state.is_null()\" is true. Returning: ret",0,0);
    goto LAB_0010c0cf;
  }
  Array::Array(local_198,param_5);
  local_170 = 0;
  if (*(long *)(param_4 + 8) != 0) {
    CowData<String>::_ref((CowData<String> *)&local_170,(CowData *)(param_4 + 8));
  }
  local_1a0 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1a0,(Ref *)*param_3);
  pOVar10 = local_1a0;
  plVar6 = *(long **)(param_2 + 0x98);
  if (plVar6 == (long *)0x0) {
LAB_0010c095:
    if ((*(long *)(param_2 + 8) != 0) && (*(char *)(param_2 + 0x2d8) == '\0')) {
      this_00 = (GetTypeInfo<Ref<GLTFObjectModelProperty>,void> *)&local_168;
      local_138 = 0;
      uStack_134 = 0;
      local_128 = (undefined1  [16])0x0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String *)&local_138,"_import_object_model_property");
      local_100 = CONCAT44(local_100._4_4_,8);
      GetTypeInfo<Ref<GLTFObjectModelProperty>,void>::get_class_info(this_00);
      PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)this_00);
      PropertyInfo::~PropertyInfo((PropertyInfo *)this_00);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info((GetTypeInfo<Ref<GLTFState>,void> *)this_00);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)this_00);
      PropertyInfo::~PropertyInfo((PropertyInfo *)this_00);
      this_02 = local_d8;
      Vector<int>::push_back(this_02,0);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)this_00);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)this_00);
      PropertyInfo::~PropertyInfo((PropertyInfo *)this_00);
      Vector<int>::push_back(this_02,0);
      GetTypeInfo<TypedArray<NodePath>,void>::get_class_info
                ((GetTypeInfo<TypedArray<NodePath>,void> *)this_00);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)this_00);
      PropertyInfo::~PropertyInfo((PropertyInfo *)this_00);
      Vector<int>::push_back(this_02,0);
      MethodInfo::get_compatibility_hash();
      *(undefined8 *)(param_2 + 0x2e0) = 0;
      lVar11 = *(long *)(param_2 + 8);
      pcVar7 = *(code **)(lVar11 + 0xd8);
      if (((pcVar7 == (code *)0x0) || (*(long *)(lVar11 + 0xe0) == 0)) &&
         (pcVar7 = *(code **)(lVar11 + 0xd0), pcVar7 == (code *)0x0)) {
        local_188 = 0;
        String::parse_latin1((String *)&local_188,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_180,(String *)&local_188,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)this_00,(StringName *)&local_180);
        if (local_160[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          lVar11 = 0;
          if (StringName::configured != '\0') goto LAB_0010c830;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
LAB_0010c851:
          lVar11 = *(long *)(param_2 + 8);
          pcVar7 = *(code **)(lVar11 + 200);
          if (((pcVar7 == (code *)0x0) || (*(long *)(lVar11 + 0xe0) == 0)) &&
             (pcVar7 = *(code **)(lVar11 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010c653;
          uVar5 = (*pcVar7)(*(undefined8 *)(lVar11 + 0xa0));
          *(undefined8 *)(param_2 + 0x2e0) = uVar5;
        }
        else {
          lVar11 = *(long *)(local_160[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') {
LAB_0010c830:
            if (local_180 != (Object *)0x0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
          if (lVar11 == 0) goto LAB_0010c851;
        }
        lVar11 = *(long *)(param_2 + 8);
      }
      else {
        uVar5 = (*pcVar7)(*(undefined8 *)(lVar11 + 0xa0));
        *(undefined8 *)(param_2 + 0x2e0) = uVar5;
        lVar11 = *(long *)(param_2 + 8);
      }
LAB_0010c653:
      if (*(char *)(lVar11 + 0x29) != '\0') {
        plVar6 = (long *)operator_new(0x18,"");
        *plVar6 = param_2 + 0x2e0;
        plVar6[1] = param_2 + 0x2d8;
        plVar6[2] = *(long *)(param_2 + 0x168);
        *(long **)(param_2 + 0x168) = plVar6;
      }
      *(undefined1 *)(param_2 + 0x2d8) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_138);
    }
    if (*(long *)(param_2 + 0x2e0) != 0) {
      this = (Ref<GLTFState> *)&local_190;
      local_190 = 0;
      Ref<GLTFState>::operator=(this,(Ref *)pOVar10);
      this_01 = (CowData<String> *)&uStack_130;
      uStack_130 = 0;
      uStack_12c = 0;
      if (local_170 != 0) {
        CowData<String>::_ref(this_01,(CowData *)&local_170);
      }
      Array::Array((Array *)&local_188,local_198);
      piStack_80 = &local_138;
      local_180 = (Object *)0x0;
      pcVar7 = *(code **)(*(long *)(param_2 + 8) + 0xe0);
      local_88 = this;
      local_78 = (Array *)&local_188;
      if (pcVar7 == (code *)0x0) {
        (**(code **)(param_2 + 0x2e0))(*(undefined8 *)(param_2 + 0x10),&local_88,&local_180);
        local_168 = (Ref *)0x0;
        Ref<GLTFObjectModelProperty>::operator=
                  ((Ref<GLTFObjectModelProperty> *)&local_168,(Ref *)local_180);
        Ref<GLTFObjectModelProperty>::operator=(param_1,local_168);
        Ref<GLTFObjectModelProperty>::unref((Ref<GLTFObjectModelProperty> *)&local_168);
LAB_0010c210:
        pOVar10 = local_1a0;
        if (((local_180 != (Object *)0x0) &&
            (cVar2 = RefCounted::unreference(), pOVar4 = local_180, pOVar10 = local_1a0,
            cVar2 != '\0')) &&
           (cVar2 = predelete_handler(local_180), pOVar10 = local_1a0, cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      else {
        (*pcVar7)(*(undefined8 *)(param_2 + 0x10),param_2 + 0x2d0,*(undefined8 *)(param_2 + 0x2e0),
                  &local_88,&local_180);
        pOVar4 = local_180;
        if (local_180 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          pOVar9 = *(Object **)param_1;
          if (cVar2 == '\0') {
            if (pOVar9 != (Object *)0x0) {
              *(undefined8 *)param_1 = 0;
              cVar2 = RefCounted::unreference();
              if (cVar2 != '\0') {
                pOVar4 = (Object *)0x0;
                cVar2 = predelete_handler(pOVar9);
                goto joined_r0x0010c746;
              }
            }
          }
          else {
            if (pOVar4 != pOVar9) {
              *(Object **)param_1 = pOVar4;
              cVar2 = RefCounted::reference();
              if (cVar2 == '\0') {
                *(undefined8 *)param_1 = 0;
              }
              if (((pOVar9 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
                 && (cVar2 = predelete_handler(pOVar9), cVar2 != '\0')) goto LAB_0010c414;
            }
LAB_0010c440:
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          goto LAB_0010c210;
        }
        pOVar9 = *(Object **)param_1;
        if (pOVar9 != (Object *)0x0) {
          *(undefined8 *)param_1 = 0;
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar9);
joined_r0x0010c746:
            if (cVar2 != '\0') {
LAB_0010c414:
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
              if (pOVar4 != (Object *)0x0) goto LAB_0010c440;
            }
          }
          goto LAB_0010c210;
        }
      }
      Array::~Array((Array *)&local_188);
      CowData<String>::_unref(this_01);
      Ref<GLTFState>::unref(this);
    }
  }
  else {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)&local_88,local_1a0);
    pVVar3 = local_70;
    Variant::Variant(pVVar3,local_178);
    Variant::Variant((Variant *)local_58,local_198);
    local_c8 = (Variant *)&local_88;
    pVStack_c0 = pVVar3;
    local_b8 = (Variant *)local_58;
    (**(code **)(*plVar6 + 0x60))
              (local_a8,plVar6,param_2 + 0x2d0,&local_c8,3,&local_138,plVar6,local_a8);
    if (local_138 != 0) {
      puVar8 = Variant::needs_deinit;
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        puVar8 = Variant::needs_deinit;
        Variant::_clear_internal();
      }
      pVVar3 = (Variant *)local_58;
      cVar2 = puVar8[local_58[0]];
      while( true ) {
        if (cVar2 != '\0') {
          Variant::_clear_internal();
        }
        if (pVVar3 == (Variant *)&local_88) break;
        pVVar1 = pVVar3 + -0x18;
        pVVar3 = pVVar3 + -0x18;
        cVar2 = puVar8[*(int *)pVVar1];
      }
      goto LAB_0010c095;
    }
    local_180 = (Object *)0x0;
    lVar11 = Variant::get_validated_object();
    if ((lVar11 == 0) ||
       (pOVar4 = (Object *)
                 __dynamic_cast(lVar11,&Object::typeinfo,&GLTFObjectModelProperty::typeinfo,0),
       pOVar4 == (Object *)0x0)) {
      pOVar4 = (Object *)0x0;
    }
    else {
      local_168 = (Ref *)0x0;
      local_180 = pOVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_180 = (Object *)0x0;
        pOVar4 = (Object *)0x0;
      }
      Ref<GLTFObjectModelProperty>::unref((Ref<GLTFObjectModelProperty> *)&local_168);
    }
    Ref<GLTFObjectModelProperty>::operator=(param_1,(Ref *)pOVar4);
    Ref<GLTFObjectModelProperty>::unref((Ref<GLTFObjectModelProperty> *)&local_180);
    puVar8 = Variant::needs_deinit;
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      puVar8 = Variant::needs_deinit;
      Variant::_clear_internal();
    }
    pVVar3 = (Variant *)local_40;
    do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (puVar8[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar3 != (Variant *)&local_88);
  }
  if (((pOVar10 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
    Memory::free_static(pOVar10,false);
  }
  CowData<String>::_unref((CowData<String> *)&local_170);
  Array::~Array(local_198);
LAB_0010c0cf:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GLTFDocumentExtension::import_preflight(Ref<GLTFState>, Vector<String>) */

ulong __thiscall
GLTFDocumentExtension::import_preflight(GLTFDocumentExtension *this,long *param_2,long param_3)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  Ref *pRVar9;
  long in_FS_OFFSET;
  Object *local_170;
  undefined8 local_168;
  long local_160;
  Vector local_158 [8];
  long local_150;
  uint local_148 [2];
  long local_140 [5];
  int local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  Ref<GLTFState> *local_78;
  int *piStack_70;
  int local_60 [8];
  long local_40;
  
  pRVar9 = (Ref *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pRVar9 == (Ref *)0x0) {
    uVar4 = 0x1f;
    _err_print_error("import_preflight","modules/gltf/extensions/gltf_document_extension.cpp",0x3f,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
    goto LAB_0010ca92;
  }
  local_150 = 0;
  if (*(long *)(param_3 + 8) != 0) {
    CowData<String>::_ref((CowData<String> *)&local_150,(CowData *)(param_3 + 8));
    pRVar9 = (Ref *)*param_2;
  }
  local_170 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_170,pRVar9);
  pOVar1 = local_170;
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_0010ca5d:
    if ((*(long *)(this + 8) != 0) && (this[0x248] == (GLTFDocumentExtension)0x0)) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String *)local_118,"_import_preflight");
      local_e0 = CONCAT44(local_e0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)local_148);
      PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
      Vector<int>::push_back(local_b8,0);
      GetTypeInfo<Vector<String>,void>::get_class_info
                ((GetTypeInfo<Vector<String>,void> *)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_148);
      Vector<int>::push_back(local_b8,0);
      uVar3 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x250) = 0;
      lVar6 = *(long *)(this + 8);
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_168 = 0;
        String::parse_latin1((String *)&local_168,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_160,(String *)&local_168,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_148,(StringName *)&local_160);
        if (local_140[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') goto LAB_0010cef5;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
LAB_0010cf12:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010cde3;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          *(undefined8 *)(this + 0x250) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_140[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') {
LAB_0010cef5:
            if (local_160 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
          if (lVar6 == 0) goto LAB_0010cf12;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x240,uVar3);
        *(undefined8 *)(this + 0x250) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_0010cde3:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x250);
        plVar7[1] = (long)(this + 0x248);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x248] = (GLTFDocumentExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_118);
    }
    uVar4 = 0;
    if (*(long *)(this + 0x250) != 0) {
      local_160 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_160,(Ref *)pOVar1);
      uStack_110 = 0;
      uStack_10c = 0;
      if (local_150 != 0) {
        CowData<String>::_ref((CowData<String> *)&uStack_110,(CowData *)&local_150);
      }
      piStack_70 = local_118;
      local_78 = (Ref<GLTFState> *)&local_160;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (**(code **)(this + 0x250))(*(undefined8 *)(this + 0x10),&local_78,local_148);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x240,*(code **)(this + 0x250),&local_78,
                   local_148);
      }
      uVar4 = (ulong)local_148[0];
      CowData<String>::_unref((CowData<String> *)&uStack_110);
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_160);
    }
  }
  else {
    local_118[0] = 0;
    local_118[1] = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,local_170);
    Variant::Variant((Variant *)local_60,local_158);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_98,plVar7,this + 0x240,&local_a8,2,local_118);
    if (local_118[0] != 0) {
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010ca5d;
    }
    uVar4 = Variant::operator_cast_to_long((Variant *)local_98);
    uVar4 = uVar4 & 0xffffffff;
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  CowData<String>::_unref((CowData<String> *)&local_150);
LAB_0010ca92:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* GLTFDocumentExtension::serialize_image_to_bytes(Ref<GLTFState>, Ref<Image>, Dictionary, String
   const&, float) */

long GLTFDocumentExtension::serialize_image_to_bytes
               (float param_1,long param_2,long param_3,long *param_4,long *param_5,
               Dictionary *param_6,CowData *param_7)

{
  Variant *pVVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  Image *pIVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  bool bVar11;
  Object *local_1e8;
  Dictionary local_1e0 [8];
  long local_1d8;
  undefined8 local_1d0;
  Image *local_1c8;
  Dictionary local_1c0 [8];
  undefined8 local_1b8;
  double local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_178;
  long local_170;
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
  int local_108 [8];
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  Ref<GLTFState> *local_b8;
  Image **ppIStack_b0;
  Dictionary *local_a8;
  CowData<char32_t> *pCStack_a0;
  double *local_98;
  Variant local_88 [24];
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *param_4;
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar6 == 0) {
    _err_print_error("serialize_image_to_bytes",
                     "modules/gltf/extensions/gltf_document_extension.cpp",0xc6,
                     "Condition \"p_state.is_null()\" is true. Returning: ret",0,0);
    goto LAB_0010d23c;
  }
  if (*param_5 == 0) {
    _err_print_error("serialize_image_to_bytes",
                     "modules/gltf/extensions/gltf_document_extension.cpp",199,
                     "Condition \"p_image.is_null()\" is true. Returning: ret",0,0);
    goto LAB_0010d23c;
  }
  local_1d8 = 0;
  if (*(long *)param_7 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,param_7);
  }
  Dictionary::Dictionary(local_1e0,param_6);
  pIVar9 = (Image *)*param_5;
  if ((pIVar9 != (Image *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    pIVar9 = (Image *)0x0;
  }
  local_1e8 = (Object *)0x0;
  Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1e8,(Ref *)*param_4);
  plVar7 = *(long **)(param_3 + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_0010d1f6:
    if ((*(long *)(param_3 + 8) != 0) && (*(char *)(param_3 + 0x3f8) == '\0')) {
      local_178 = 0;
      local_168 = (undefined1  [16])0x0;
      local_170 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 6;
      local_140 = 1;
      local_138[0] = 0;
      local_128 = 0;
      local_120 = 0;
      local_110 = 0;
      String::parse_latin1((String *)&local_178,"_serialize_image_to_bytes");
      local_140 = CONCAT44(local_140._4_4_,8);
      GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_1a8);
      PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)&local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
      local_120 = local_120 & 0xffffffff00000000;
      GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                ((GetTypeInfo<Ref<GLTFState>,void> *)&local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)&local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
      Vector<int>::push_back(local_118,9);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long *)(param_3 + 8);
      *(undefined8 *)(param_3 + 0x400) = 0;
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_1b8 = 0;
        String::parse_latin1((String *)&local_1b8,"GLTFDocumentExtension");
        StringName::StringName((StringName *)&local_1b0,(String *)&local_1b8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_1a8,(StringName *)&local_1b0);
        if (CONCAT44(uStack_19c,uStack_1a0) == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_1a0);
          if (StringName::configured != '\0') goto LAB_0010d8ef;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
LAB_0010d910:
          lVar6 = *(long *)(param_3 + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010d7f0;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),param_3 + 0x3f0);
          *(undefined8 *)(param_3 + 0x400) = uVar5;
        }
        else {
          lVar6 = *(long *)(CONCAT44(uStack_19c,uStack_1a0) + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_1a0);
          if (StringName::configured != '\0') {
LAB_0010d8ef:
            if (local_1b0 != 0.0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
          if (lVar6 == 0) goto LAB_0010d910;
        }
        lVar6 = *(long *)(param_3 + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),param_3 + 0x3f0,uVar3);
        *(undefined8 *)(param_3 + 0x400) = uVar5;
        lVar6 = *(long *)(param_3 + 8);
      }
LAB_0010d7f0:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = param_3 + 0x400;
        plVar7[1] = param_3 + 0x3f8;
        plVar7[2] = *(long *)(param_3 + 0x168);
        *(long **)(param_3 + 0x168) = plVar7;
      }
      *(undefined1 *)(param_3 + 0x3f8) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_178);
    }
    if (*(long *)(param_3 + 0x400) == 0) goto LAB_0010d20b;
    local_1d0 = 0;
    Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1d0,(Ref *)local_1e8);
    if ((pIVar9 == (Image *)0x0) ||
       (local_1c8 = pIVar9, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_1c8 = (Image *)0x0;
    }
    Dictionary::Dictionary(local_1c0,local_1e0);
    local_1b8 = 0;
    if (local_1d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)&local_1d8);
    }
    ppIStack_b0 = &local_1c8;
    uStack_1a0 = 0;
    uStack_19c = 0;
    local_1b0 = (double)param_1;
    local_98 = &local_1b0;
    pcVar8 = *(code **)(*(long *)(param_3 + 8) + 0xe0);
    local_b8 = (Ref<GLTFState> *)&local_1d0;
    local_a8 = local_1c0;
    pCStack_a0 = (CowData<char32_t> *)&local_1b8;
    if (pcVar8 == (code *)0x0) {
      (**(code **)(param_3 + 0x400))(*(undefined8 *)(param_3 + 0x10),&local_b8,&local_1a8);
      lVar6 = CONCAT44(uStack_19c,uStack_1a0);
      local_170 = 0;
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + -0x10);
        do {
          lVar6 = *plVar7;
          if (lVar6 == 0) goto LAB_0010d4b0;
          LOCK();
          lVar4 = *plVar7;
          bVar11 = lVar6 == lVar4;
          if (bVar11) {
            *plVar7 = lVar6 + 1;
            lVar4 = lVar6;
          }
          UNLOCK();
        } while (!bVar11);
        goto LAB_0010d3aa;
      }
    }
    else {
      (*pcVar8)(*(undefined8 *)(param_3 + 0x10),param_3 + 0x3f0,*(code **)(param_3 + 0x400),
                &local_b8,&local_1a8);
      lVar6 = CONCAT44(uStack_19c,uStack_1a0);
      local_170 = 0;
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + -0x10);
        do {
          lVar6 = *plVar7;
          if (lVar6 == 0) goto LAB_0010d4b0;
          LOCK();
          lVar4 = *plVar7;
          bVar11 = lVar6 == lVar4;
          if (bVar11) {
            *plVar7 = lVar6 + 1;
            lVar4 = lVar6;
          }
          UNLOCK();
        } while (!bVar11);
LAB_0010d3aa:
        if (lVar4 == -1) {
LAB_0010d4b0:
          local_170 = 0;
          lVar6 = 0;
        }
        else {
          lVar6 = CONCAT44(uStack_19c,uStack_1a0);
          local_170 = lVar6;
        }
      }
    }
    if (*(long *)(param_2 + 8) != lVar6) {
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(param_2 + 8));
      *(long *)(param_2 + 8) = lVar6;
      local_170 = 0;
    }
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_170);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&uStack_1a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
    Dictionary::~Dictionary(local_1c0);
    if ((local_1c8 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
      memdelete<Image>(local_1c8);
    }
    Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1d0);
    Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1e8);
  }
  else {
    local_1a8 = 0;
    local_1a4 = 0;
    uStack_1a0 = 0;
    Variant::Variant((Variant *)&local_b8,local_1e8);
    Variant::Variant((Variant *)&pCStack_a0,(Object *)pIVar9);
    Variant::Variant(local_88,local_1e0);
    Variant::Variant(local_70,(String *)&local_1d8);
    Variant::Variant(local_58,param_1);
    local_e8 = (Variant *)&local_b8;
    pVStack_e0 = (Variant *)&pCStack_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    local_c8 = local_58;
    (**(code **)(*plVar7 + 0x60))(local_108,plVar7,param_3 + 0x3f0,&local_e8,5,&local_1a8);
    if (local_1a8 != 0) {
      if (Variant::needs_deinit[local_108[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar10 = (Variant *)local_40;
      do {
        pVVar1 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)&local_b8);
      goto LAB_0010d1f6;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_178);
    if (*(long *)(param_2 + 8) != local_170) {
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(param_2 + 8));
      lVar6 = local_170;
      local_170 = 0;
      *(long *)(param_2 + 8) = lVar6;
    }
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_170);
    if (Variant::needs_deinit[local_108[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar10 = (Variant *)local_40;
    do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar10 != (Variant *)&local_b8);
LAB_0010d20b:
    Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1e8);
  }
  if ((pIVar9 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<Image>(pIVar9);
  }
  Dictionary::~Dictionary(local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
LAB_0010d23c:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::parse_image_data(Ref<GLTFState>, Vector<unsigned char> const&, String
   const&, Ref<Image>) */

ulong __thiscall
GLTFDocumentExtension::parse_image_data
          (GLTFDocumentExtension *this,long *param_2,long param_3,CowData *param_4,long *param_5)

{
  Variant *pVVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  Image *pIVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  bool bVar12;
  Object *local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  Image *local_1a0;
  Vector local_198 [8];
  long local_190;
  uint local_188 [2];
  long local_180 [5];
  int local_158 [2];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  ulong local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  Ref<GLTFState> *local_a8;
  int *piStack_a0;
  CowData<char32_t> *local_98;
  Image **appIStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("parse_image_data","modules/gltf/extensions/gltf_document_extension.cpp",0x54,
                     "Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  else {
    pIVar10 = (Image *)*param_5;
    if (pIVar10 != (Image *)0x0) {
      cVar2 = RefCounted::reference();
      local_1b8 = 0;
      if (cVar2 == '\0') {
        pIVar10 = (Image *)0x0;
      }
      if (*(long *)param_4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,param_4);
      }
      local_190 = 0;
      plVar8 = (long *)(*(long *)(param_3 + 8) + -0x10);
      if (*(long *)(param_3 + 8) != 0) {
        do {
          lVar7 = *plVar8;
          if (lVar7 == 0) goto LAB_0010da84;
          LOCK();
          lVar4 = *plVar8;
          bVar12 = lVar7 == lVar4;
          if (bVar12) {
            *plVar8 = lVar7 + 1;
            lVar4 = lVar7;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar4 != -1) {
          local_190 = *(long *)(param_3 + 8);
        }
      }
LAB_0010da84:
      local_1c0 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1c0,(Ref *)*param_2);
      plVar8 = *(long **)(this + 0x98);
      if (plVar8 == (long *)0x0) {
LAB_0010dbc7:
        if ((*(long *)(this + 8) != 0) && (this[0x290] == (GLTFDocumentExtension)0x0)) {
          local_158[0] = 0;
          local_158[1] = 0;
          local_148 = (undefined1  [16])0x0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 6;
          local_120 = 1;
          local_118[0] = 0;
          local_108 = 0;
          local_100 = 0;
          local_f0 = 0;
          String::parse_latin1((String *)local_158,"_parse_image_data");
          local_120 = CONCAT44(local_120._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)local_188);
          PropertyInfo::operator=((PropertyInfo *)&uStack_150,(PropertyInfo *)local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
          local_100 = local_100 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                    ((GetTypeInfo<Vector<unsigned_char>,void> *)local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
          Vector<int>::push_back(local_f8,0);
          GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)local_188);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
          PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
          Vector<int>::push_back(local_f8,0);
          uVar3 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x298) = 0;
          lVar7 = *(long *)(this + 8);
          pcVar9 = *(code **)(lVar7 + 0xd8);
          if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
            local_1a8 = 0;
            String::parse_latin1((String *)&local_1a8,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_1a0,(String *)&local_1a8,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)local_188,(StringName *)&local_1a0);
            if (local_180[0] == 0) {
              lVar7 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') goto LAB_0010e187;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
LAB_0010e1a6:
              lVar7 = *(long *)(this + 8);
              pcVar9 = *(code **)(lVar7 + 200);
              if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
                 (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_0010e07b;
              uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x288);
              *(undefined8 *)(this + 0x298) = uVar6;
            }
            else {
              lVar7 = *(long *)(local_180[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
              if (StringName::configured != '\0') {
LAB_0010e187:
                if (local_1a0 != (Image *)0x0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
              if (lVar7 == 0) goto LAB_0010e1a6;
            }
            lVar7 = *(long *)(this + 8);
          }
          else {
            uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x288,uVar3);
            *(undefined8 *)(this + 0x298) = uVar6;
            lVar7 = *(long *)(this + 8);
          }
LAB_0010e07b:
          if (*(char *)(lVar7 + 0x29) != '\0') {
            plVar8 = (long *)operator_new(0x18,"");
            *plVar8 = (long)(this + 0x298);
            plVar8[1] = (long)(this + 0x290);
            plVar8[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar8;
          }
          this[0x290] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)local_158);
        }
        uVar5 = 0;
        if (*(long *)(this + 0x298) != 0) {
          local_1b0 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1b0,(Ref *)local_1c0);
          uStack_150 = 0;
          uStack_14c = 0;
          plVar8 = (long *)(local_190 + -0x10);
          if (local_190 != 0) {
            do {
              lVar7 = *plVar8;
              if (lVar7 == 0) goto LAB_0010dc9b;
              LOCK();
              lVar4 = *plVar8;
              bVar12 = lVar7 == lVar4;
              if (bVar12) {
                *plVar8 = lVar7 + 1;
                lVar4 = lVar7;
              }
              UNLOCK();
            } while (!bVar12);
            if (lVar4 != -1) {
              uStack_150 = (undefined4)local_190;
              uStack_14c = (undefined4)((ulong)local_190 >> 0x20);
            }
          }
LAB_0010dc9b:
          local_1a8 = 0;
          if (local_1b8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1b8);
          }
          if ((pIVar10 == (Image *)0x0) ||
             (local_1a0 = pIVar10, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
            local_1a0 = (Image *)0x0;
          }
          piStack_a0 = local_158;
          appIStack_90[0] = &local_1a0;
          local_a8 = (Ref<GLTFState> *)&local_1b0;
          local_98 = (CowData<char32_t> *)&local_1a8;
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x298))(*(undefined8 *)(this + 0x10),&local_a8,local_188);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x288,*(code **)(this + 0x298),&local_a8,
                       local_188);
          }
          uVar5 = (ulong)local_188[0];
          if ((local_1a0 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
            memdelete<Image>(local_1a0);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&uStack_150);
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1b0);
        }
      }
      else {
        local_158[0] = 0;
        local_158[1] = 0;
        uStack_150 = 0;
        Variant::Variant((Variant *)&local_a8,local_1c0);
        Variant::Variant((Variant *)appIStack_90,local_198);
        Variant::Variant(local_78,(String *)&local_1b8);
        Variant::Variant(local_60,(Object *)pIVar10);
        local_c8 = (Variant *)&local_a8;
        pVStack_c0 = (Variant *)appIStack_90;
        local_b8 = local_78;
        pVStack_b0 = local_60;
        (**(code **)(*plVar8 + 0x60))((Variant *)local_e8,plVar8,this + 0x288,&local_c8,4,local_158)
        ;
        if (local_158[0] != 0) {
          if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar11 = local_48;
          do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar11 != (Variant *)&local_a8);
          goto LAB_0010dbc7;
        }
        uVar5 = Variant::operator_cast_to_long((Variant *)local_e8);
        uVar5 = uVar5 & 0xffffffff;
        if (Variant::needs_deinit[local_e8[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar11 = local_48;
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)&local_a8);
      }
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1c0);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
      if ((pIVar10 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<Image>(pIVar10);
      }
      goto LAB_0010dc0e;
    }
    _err_print_error("parse_image_data","modules/gltf/extensions/gltf_document_extension.cpp",0x55,
                     "Condition \"r_image.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                    );
  }
  uVar5 = 0x1f;
LAB_0010dc0e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* GLTFDocumentExtension::save_image_at_path(Ref<GLTFState>, Ref<Image>, String const&, String
   const&, float) */

ulong __thiscall
GLTFDocumentExtension::save_image_at_path
          (float param_1,GLTFDocumentExtension *this,long *param_3,long *param_4,CowData *param_5,
          CowData *param_6)

{
  Variant *pVVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  Image *pIVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  Object *local_1e0;
  long local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  Image *local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  double local_1a8;
  long local_1a0 [5];
  uint local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
  int local_108 [8];
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  Ref<GLTFState> *local_b8;
  Image **ppIStack_b0;
  CowData<char32_t> *local_a8;
  CowData<char32_t> *pCStack_a0;
  double *local_98;
  Variant local_88 [24];
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    _err_print_error("save_image_at_path","modules/gltf/extensions/gltf_document_extension.cpp",0xcd
                     ,"Condition \"p_state.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
  }
  else {
    if (*param_4 != 0) {
      local_1d0 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d0,param_6);
      }
      local_1d8 = 0;
      if (*(long *)param_5 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,param_5);
      }
      pIVar9 = (Image *)*param_4;
      if ((pIVar9 != (Image *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        pIVar9 = (Image *)0x0;
      }
      local_1e0 = (Object *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1e0,(Ref *)*param_3);
      plVar7 = *(long **)(this + 0x98);
      if (plVar7 == (long *)0x0) {
LAB_0010e477:
        if ((*(long *)(this + 8) != 0) && (this[0x410] == (GLTFDocumentExtension)0x0)) {
          local_178 = 0;
          uStack_174 = 0;
          local_168 = (undefined1  [16])0x0;
          uStack_170 = 0;
          uStack_16c = 0;
          local_158 = 0;
          local_150 = 0;
          local_148 = 6;
          local_140 = 1;
          local_138[0] = 0;
          local_128 = 0;
          local_120 = 0;
          local_110 = 0;
          String::parse_latin1((String *)&local_178,"_save_image_at_path");
          local_140 = CONCAT44(local_140._4_4_,8);
          GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_1a8);
          PropertyInfo::operator=((PropertyInfo *)&uStack_170,(PropertyInfo *)&local_1a8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
          local_120 = local_120 & 0xffffffff00000000;
          GetTypeInfo<Ref<GLTFState>,void>::get_class_info
                    ((GetTypeInfo<Ref<GLTFState>,void> *)&local_1a8);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
          Vector<int>::push_back(local_118,0);
          GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)&local_1a8);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
          Vector<int>::push_back(local_118,0);
          GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1a8);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
          Vector<int>::push_back(local_118,0);
          GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1a8);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
          Vector<int>::push_back(local_118,0);
          GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_1a8);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)&local_1a8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
          Vector<int>::push_back(local_118,9);
          uVar3 = MethodInfo::get_compatibility_hash();
          lVar6 = *(long *)(this + 8);
          *(undefined8 *)(this + 0x418) = 0;
          pcVar8 = *(code **)(lVar6 + 0xd8);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
            local_1b8 = 0;
            String::parse_latin1((String *)&local_1b8,"GLTFDocumentExtension");
            StringName::StringName((StringName *)&local_1b0,(String *)&local_1b8,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_1a8,(StringName *)&local_1b0);
            if (local_1a0[0] == 0) {
              lVar6 = 0;
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1a0);
              if (StringName::configured != '\0') goto LAB_0010ea73;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
LAB_0010ea94:
              lVar6 = *(long *)(this + 8);
              pcVar8 = *(code **)(lVar6 + 200);
              if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
                 (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010e965;
              uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x408);
              *(undefined8 *)(this + 0x418) = uVar5;
            }
            else {
              lVar6 = *(long *)(local_1a0[0] + -8);
              CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1a0);
              if (StringName::configured != '\0') {
LAB_0010ea73:
                if (local_1b0 != 0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
              if (lVar6 == 0) goto LAB_0010ea94;
            }
            lVar6 = *(long *)(this + 8);
          }
          else {
            uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x408,uVar3);
            *(undefined8 *)(this + 0x418) = uVar5;
            lVar6 = *(long *)(this + 8);
          }
LAB_0010e965:
          if (*(char *)(lVar6 + 0x29) != '\0') {
            plVar7 = (long *)operator_new(0x18,"");
            *plVar7 = (long)(this + 0x418);
            plVar7[1] = (long)(this + 0x410);
            plVar7[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar7;
          }
          this[0x410] = (GLTFDocumentExtension)0x1;
          MethodInfo::~MethodInfo((MethodInfo *)&local_178);
        }
        uVar4 = 0;
        if (*(long *)(this + 0x418) == 0) goto LAB_0010e48f;
        local_1c8 = 0;
        Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_1c8,(Ref *)local_1e0);
        if ((pIVar9 == (Image *)0x0) ||
           (local_1c0 = pIVar9, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          local_1c0 = (Image *)0x0;
        }
        local_1b8 = 0;
        if (local_1d8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)&local_1d8);
        }
        local_1b0 = 0;
        if (local_1d0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b0,(CowData *)&local_1d0);
        }
        ppIStack_b0 = &local_1c0;
        local_1a8 = (double)param_1;
        local_98 = &local_1a8;
        local_b8 = (Ref<GLTFState> *)&local_1c8;
        local_a8 = (CowData<char32_t> *)&local_1b8;
        pCStack_a0 = (CowData<char32_t> *)&local_1b0;
        if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
          (**(code **)(this + 0x418))(*(undefined8 *)(this + 0x10),&local_b8,&local_178);
        }
        else {
          (**(code **)(*(long *)(this + 8) + 0xe0))
                    (*(undefined8 *)(this + 0x10),this + 0x408,*(code **)(this + 0x418),&local_b8,
                     &local_178);
        }
        uVar4 = (ulong)local_178;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        if ((local_1c0 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
          memdelete<Image>(local_1c0);
        }
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1c8);
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1e0);
      }
      else {
        local_178 = 0;
        uStack_174 = 0;
        uStack_170 = 0;
        Variant::Variant((Variant *)&local_b8,local_1e0);
        Variant::Variant((Variant *)&pCStack_a0,(Object *)pIVar9);
        Variant::Variant(local_88,(String *)&local_1d8);
        Variant::Variant(local_70,(String *)&local_1d0);
        Variant::Variant(local_58,param_1);
        local_e8 = (Variant *)&local_b8;
        pVStack_e0 = (Variant *)&pCStack_a0;
        local_d8 = local_88;
        pVStack_d0 = local_70;
        local_c8 = local_58;
        (**(code **)(*plVar7 + 0x60))
                  ((Variant *)local_108,plVar7,this + 0x408,&local_e8,5,&local_178);
        if (local_178 != 0) {
          if (Variant::needs_deinit[local_108[0]] != '\0') {
            Variant::_clear_internal();
          }
          pVVar10 = (Variant *)local_40;
          do {
            pVVar1 = pVVar10 + -0x18;
            pVVar10 = pVVar10 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar10 != (Variant *)&local_b8);
          goto LAB_0010e477;
        }
        uVar4 = Variant::operator_cast_to_long((Variant *)local_108);
        uVar4 = uVar4 & 0xffffffff;
        if (Variant::needs_deinit[local_108[0]] != '\0') {
          Variant::_clear_internal();
        }
        pVVar10 = (Variant *)local_40;
        do {
          pVVar1 = pVVar10 + -0x18;
          pVVar10 = pVVar10 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar10 != (Variant *)&local_b8);
LAB_0010e48f:
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_1e0);
      }
      if ((pIVar9 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<Image>(pIVar9);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
      goto LAB_0010e4be;
    }
    _err_print_error("save_image_at_path","modules/gltf/extensions/gltf_document_extension.cpp",0xce
                     ,"Condition \"p_image.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
  }
  uVar4 = 0x1f;
LAB_0010e4be:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
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



/* GLTFDocumentExtension::is_class_ptr(void*) const */

uint __thiscall GLTFDocumentExtension::is_class_ptr(GLTFDocumentExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x113e,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x113e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x113e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x113e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFDocumentExtension::_getv(StringName const&, Variant&) const */

undefined8 GLTFDocumentExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFDocumentExtension::_setv(StringName const&, Variant const&) */

undefined8 GLTFDocumentExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFDocumentExtension::_validate_propertyv(PropertyInfo&) const */

void GLTFDocumentExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFDocumentExtension::_property_can_revertv(StringName const&) const */

undefined8 GLTFDocumentExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFDocumentExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFDocumentExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFDocumentExtension::_notificationv(int, bool) */

void GLTFDocumentExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFDocumentExtension::~GLTFDocumentExtension() */

void __thiscall GLTFDocumentExtension::~GLTFDocumentExtension(GLTFDocumentExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00113ba0;
  if (bVar1) {
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x408) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x3f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x3d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x3c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x3a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x390) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x378) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x360) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x348) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010efb7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010efb7:
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFDocumentExtension::~GLTFDocumentExtension() */

void __thiscall GLTFDocumentExtension::~GLTFDocumentExtension(GLTFDocumentExtension *this)

{
  ~GLTFDocumentExtension(this);
  operator_delete(this,0x468);
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



/* GLTFDocumentExtension::_get_class_namev() const */

undefined8 * GLTFDocumentExtension::_get_class_namev(void)

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
LAB_0010f093:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010f093;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFDocumentExtension");
      goto LAB_0010f0fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFDocumentExtension");
LAB_0010f0fe:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = StringName::operator=;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
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



/* GLTFDocumentExtension::get_class() const */

void GLTFDocumentExtension::get_class(void)

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
  local_48 = &_LC2;
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
      goto joined_r0x0010f5ec;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f5ec:
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



/* GetTypeInfo<float, void>::get_class_info() */

GetTypeInfo<float,void> * __thiscall
GetTypeInfo<float,void>::get_class_info(GetTypeInfo<float,void> *this)

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
  local_48 = &_LC2;
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
      goto joined_r0x0010f76c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f76c:
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
  local_48 = &_LC2;
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
      goto joined_r0x0010f8ec;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f8ec:
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



/* GetTypeInfo<NodePath, void>::get_class_info() */

GetTypeInfo<NodePath,void> * __thiscall
GetTypeInfo<NodePath,void>::get_class_info(GetTypeInfo<NodePath,void> *this)

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
  local_48 = &_LC2;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x16;
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
      goto joined_r0x0010fa6c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fa6c:
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
  local_48 = &_LC2;
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
      goto joined_r0x0010fbec;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fbec:
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



/* GetTypeInfo<Vector<unsigned char>, void>::get_class_info() */

GetTypeInfo<Vector<unsigned_char>,void> * __thiscall
GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
          (GetTypeInfo<Vector<unsigned_char>,void> *this)

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
  local_48 = &_LC2;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1d;
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
      goto joined_r0x0010fd6c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fd6c:
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
  local_48 = &_LC2;
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
      goto joined_r0x0010feec;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010feec:
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011003b;
  }
  cVar5 = String::operator==((String *)param_1,"RefCounted");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_0011003b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==((String *)param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011003b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001101ef;
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
LAB_001101ef:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001102a3;
  }
  cVar5 = String::operator==((String *)param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001102a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::is_class(String const&) const */

undefined8 __thiscall GLTFDocumentExtension::is_class(GLTFDocumentExtension *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011036f;
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
LAB_0011036f:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00110423;
  }
  cVar5 = String::operator==((String *)param_1,"GLTFDocumentExtension");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110423:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = StringName::operator=;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* GetTypeInfo<TypedArray<NodePath>, void>::get_class_info() */

GetTypeInfo<TypedArray<NodePath>,void> * __thiscall
GetTypeInfo<TypedArray<NodePath>,void>::get_class_info(GetTypeInfo<TypedArray<NodePath>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x16);
  *(undefined4 *)this = 0x1c;
  *(undefined4 *)(this + 0x18) = 0x1f;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_38);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(this + 0x20),false);
      if (*(long *)(this + 0x10) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(this + 0x10) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x001105fc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x001105fc:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* GetTypeInfo<Ref<Image>, void>::get_class_info() */

GetTypeInfo<Ref<Image>,void> * __thiscall
GetTypeInfo<Ref<Image>,void>::get_class_info(GetTypeInfo<Ref<Image>,void> *this)

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
  local_48 = "Image";
  local_40 = 5;
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
      goto LAB_00110710;
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
LAB_00110710:
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



/* GetTypeInfo<Ref<GLTFState>, void>::get_class_info() */

GetTypeInfo<Ref<GLTFState>,void> * __thiscall
GetTypeInfo<Ref<GLTFState>,void>::get_class_info(GetTypeInfo<Ref<GLTFState>,void> *this)

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
  local_48 = "GLTFState";
  local_40 = 9;
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
      goto LAB_001108b0;
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
LAB_001108b0:
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



/* GetTypeInfo<Ref<GLTFNode>, void>::get_class_info() */

GetTypeInfo<Ref<GLTFNode>,void> * __thiscall
GetTypeInfo<Ref<GLTFNode>,void>::get_class_info(GetTypeInfo<Ref<GLTFNode>,void> *this)

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
  local_48 = "GLTFNode";
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
      goto LAB_00110a50;
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
LAB_00110a50:
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



/* GetTypeInfo<Ref<GLTFTexture>, void>::get_class_info() */

GetTypeInfo<Ref<GLTFTexture>,void> * __thiscall
GetTypeInfo<Ref<GLTFTexture>,void>::get_class_info(GetTypeInfo<Ref<GLTFTexture>,void> *this)

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
  local_48 = "GLTFTexture";
  local_40 = 0xb;
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
      goto LAB_00110bf0;
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
LAB_00110bf0:
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



/* GetTypeInfo<Ref<GLTFObjectModelProperty>, void>::get_class_info() */

GetTypeInfo<Ref<GLTFObjectModelProperty>,void> * __thiscall
GetTypeInfo<Ref<GLTFObjectModelProperty>,void>::get_class_info
          (GetTypeInfo<Ref<GLTFObjectModelProperty>,void> *this)

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
  local_48 = "GLTFObjectModelProperty";
  local_40 = 0x17;
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
      goto LAB_00110d90;
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
LAB_00110d90:
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



/* GetTypeInfo<Node3D*, void>::get_class_info() */

GetTypeInfo<Node3D*,void> * __thiscall
GetTypeInfo<Node3D*,void>::get_class_info(GetTypeInfo<Node3D*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "Node3D";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (char *)0x0)) {
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



/* GetTypeInfo<Node*, void>::get_class_info() */

GetTypeInfo<Node*,void> * __thiscall
GetTypeInfo<Node*,void>::get_class_info(GetTypeInfo<Node*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 4;
  local_38 = &_LC12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (undefined *)0x0)) {
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



/* GetTypeInfo<Node const*, void>::get_class_info() */

GetTypeInfo<Node_const*,void> * __thiscall
GetTypeInfo<Node_const*,void>::get_class_info(GetTypeInfo<Node_const*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 4;
  local_38 = &_LC12;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (undefined *)0x0)) {
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



/* GetTypeInfo<Object const*, void>::get_class_info() */

GetTypeInfo<Object_const*,void> * __thiscall
GetTypeInfo<Object_const*,void>::get_class_info(GetTypeInfo<Object_const*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "Object";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (char *)0x0)) {
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
        if (pvVar5 == (void *)0x0) goto LAB_00111414;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00111414:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
  StringName *local_a8;
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
LAB_001115fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001115fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011161f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011161f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
      goto LAB_00111951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111951:
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



/* GLTFDocumentExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GLTFDocumentExtension::_get_property_listv(GLTFDocumentExtension *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  local_78 = "GLTFDocumentExtension";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFDocumentExtension";
  local_98 = 0;
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
LAB_00111c2d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111c2d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111c4f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111c4f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GLTFDocumentExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
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
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
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



/* Ref<GLTFState>::unref() */

void __thiscall Ref<GLTFState>::unref(Ref<GLTFState> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<GLTFObjectModelProperty>::unref() */

void __thiscall Ref<GLTFObjectModelProperty>::unref(Ref<GLTFObjectModelProperty> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  long lVar2;
  
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
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x50));
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
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
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
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



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
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
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x1128f0);
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
        goto LAB_001129e5;
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
LAB_001129e5:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
LAB_00112f00:
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
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_00112f00;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00112f56;
  }
  if (lVar9 == lVar5) {
LAB_00112e7b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00112f56:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00112def;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00112e7b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_00112def:
  puVar7[-1] = param_1;
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
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
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
    lVar8 = 0;
    lVar2 = 0;
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
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_001135f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_001135f0;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_00113521;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_00113521:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GLTFDocumentExtension::_initialize_classv() */

void GLTFDocumentExtension::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00117008 != RefCounted::_bind_methods) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
    local_58 = "GLTFDocumentExtension";
    local_70 = 0;
    local_50 = 0x15;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = StringName::operator=;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* GLTFDocumentExtension::_bind_methods() */

void GLTFDocumentExtension::_GLOBAL__sub_I__bind_methods(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFDocumentExtension::~GLTFDocumentExtension() */

void __thiscall GLTFDocumentExtension::~GLTFDocumentExtension(GLTFDocumentExtension *this)

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


