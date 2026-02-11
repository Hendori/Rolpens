
/* OpenXRVisibilityMaskExtension::on_session_destroyed() */

void __thiscall
OpenXRVisibilityMaskExtension::on_session_destroyed(OpenXRVisibilityMaskExtension *this)

{
  long *plVar1;
  
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
    if (*(long *)(this + 0x20) != 0) {
      (**(code **)(*plVar1 + 0x11b0))(plVar1,*(undefined8 *)(this + 0x20));
      *(undefined8 *)(this + 0x20) = 0;
    }
    if (*(long *)(this + 0x18) != 0) {
      (**(code **)(*plVar1 + 0x11b0))(plVar1,*(undefined8 *)(this + 0x18));
      *(undefined8 *)(this + 0x18) = 0;
    }
    if (*(long *)(this + 0x10) != 0) {
      (**(code **)(*plVar1 + 0x11b0))(plVar1,*(undefined8 *)(this + 0x10));
      *(undefined8 *)(this + 0x10) = 0;
    }
    *(undefined4 *)(this + 0x28) = 0;
    return;
  }
  _err_print_error("on_session_destroyed",
                   "modules/openxr/extensions/openxr_visibility_mask_extension.cpp",0x77,
                   "Parameter \"rendering_server\" is null.",0,0);
  return;
}



/* OpenXRVisibilityMaskExtension::on_instance_created(XrInstance_T*) */

void OpenXRVisibilityMaskExtension::on_instance_created(XrInstance_T *param_1)

{
  int iVar1;
  
  if (param_1[8] == (XrInstance_T)0x0) {
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrGetVisibilityMaskKHR");
  if (-1 < iVar1) {
    return;
  }
  _err_print_error("on_instance_created",
                   "modules/openxr/extensions/openxr_visibility_mask_extension.cpp",0x52,
                   "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
  return;
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this)

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



/* CowData<XrVector2f>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<XrVector2f>::_copy_on_write(CowData<XrVector2f> *this)

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



/* OpenXRVisibilityMaskExtension::~OpenXRVisibilityMaskExtension() */

void __thiscall
OpenXRVisibilityMaskExtension::~OpenXRVisibilityMaskExtension(OpenXRVisibilityMaskExtension *this)

{
  long *plVar1;
  long lVar2;
  OpenXRVisibilityMaskExtension *pOVar3;
  
  pOVar3 = this + 0x90;
  *(undefined ***)this = &PTR_get_requested_extensions_001032e8;
  singleton = 0;
  do {
    if (*(long *)(pOVar3 + 0x18) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(pOVar3 + 0x18) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pOVar3 + 0x18);
        *(undefined8 *)(pOVar3 + 0x18) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (*(long *)(pOVar3 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(pOVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pOVar3 + 8);
        *(undefined8 *)(pOVar3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pOVar3 = pOVar3 + -0x20;
  } while (pOVar3 != this + 0x10);
  return;
}



/* OpenXRVisibilityMaskExtension::~OpenXRVisibilityMaskExtension() */

void __thiscall
OpenXRVisibilityMaskExtension::~OpenXRVisibilityMaskExtension(OpenXRVisibilityMaskExtension *this)

{
  long *plVar1;
  long lVar2;
  OpenXRVisibilityMaskExtension *pOVar3;
  
  pOVar3 = this + 0x90;
  *(undefined ***)this = &PTR_get_requested_extensions_001032e8;
  singleton = 0;
  do {
    if (*(long *)(pOVar3 + 0x18) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(pOVar3 + 0x18) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pOVar3 + 0x18);
        *(undefined8 *)(pOVar3 + 0x18) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (*(long *)(pOVar3 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(pOVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(pOVar3 + 8);
        *(undefined8 *)(pOVar3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    pOVar3 = pOVar3 + -0x20;
  } while (pOVar3 != this + 0x10);
  operator_delete(this,0xb8);
  return;
}



/* OpenXRVisibilityMaskExtension::get_singleton() */

undefined8 OpenXRVisibilityMaskExtension::get_singleton(void)

{
  return singleton;
}



/* OpenXRVisibilityMaskExtension::OpenXRVisibilityMaskExtension() */

void __thiscall
OpenXRVisibilityMaskExtension::OpenXRVisibilityMaskExtension(OpenXRVisibilityMaskExtension *this)

{
  OpenXRVisibilityMaskExtension *pOVar1;
  OpenXRVisibilityMaskExtension *pOVar2;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_get_requested_extensions_001032e8;
  *(undefined2 *)(this + 8) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  pOVar1 = this + 0x30;
  do {
    *(undefined8 *)(pOVar1 + 8) = 0;
    pOVar2 = pOVar1 + 0x20;
    *(undefined8 *)(pOVar1 + 0x18) = 0;
    pOVar1 = pOVar2;
  } while (pOVar2 != this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  singleton = this;
  return;
}



/* OpenXRVisibilityMaskExtension::is_available() */

OpenXRVisibilityMaskExtension __thiscall
OpenXRVisibilityMaskExtension::is_available(OpenXRVisibilityMaskExtension *this)

{
  return this[8];
}



/* OpenXRVisibilityMaskExtension::get_mesh() */

undefined8 __thiscall OpenXRVisibilityMaskExtension::get_mesh(OpenXRVisibilityMaskExtension *this)

{
  return *(undefined8 *)(this + 0x20);
}



/* OpenXRVisibilityMaskExtension::get_requested_extensions() */

void OpenXRVisibilityMaskExtension::get_requested_extensions(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
  *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(in_RDI + 0x28) = 2;
  *(undefined1 (*) [16])(in_RDI + 0x18) = (undefined1  [16])0x0;
  local_38 = "XR_KHR_visibility_mask";
  local_40 = 0;
  local_30 = 0x16;
  String::parse_latin1((StrRange *)&local_40);
  plVar2 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                   ::operator[](in_RDI,(String *)&local_40);
  lVar1 = local_40;
  *plVar2 = in_RSI + 8;
  if (local_40 != 0) {
    LOCK();
    plVar2 = (long *)(local_40 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRVisibilityMaskExtension::_update_mesh() [clone .part.0] */

void __thiscall OpenXRVisibilityMaskExtension::_update_mesh(OpenXRVisibilityMaskExtension *this)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  OpenXRVisibilityMaskExtension *pOVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  Variant *pVVar12;
  undefined8 *puVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  size_t sVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long in_FS_OFFSET;
  Array local_90 [8];
  Array local_88 [8];
  Dictionary local_80 [8];
  Vector local_78 [8];
  undefined8 *local_70;
  Vector local_68 [8];
  int *local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)RenderingServer::get_singleton();
  if (plVar5 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar18 = 0xdf;
      pcVar16 = "Parameter \"rendering_server\" is null.";
LAB_00100cab:
      _err_print_error("_update_mesh",
                       "modules/openxr/extensions/openxr_visibility_mask_extension.cpp",uVar18,
                       pcVar16,0,0);
      return;
    }
    goto LAB_00100fa6;
  }
  if (OpenXRAPI::singleton == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar18 = 0xe2;
      pcVar16 = "Parameter \"openxr_api\" is null.";
      goto LAB_00100cab;
    }
    goto LAB_00100fa6;
  }
  local_70 = (undefined8 *)0x0;
  local_60 = (int *)0x0;
  if (*(uint *)(this + 0x28) == 0) {
LAB_001009af:
    puVar8 = (undefined8 *)0x0;
  }
  else {
    lVar19 = 0;
    lVar22 = 0;
    pOVar6 = this;
    do {
      if (*(long *)(pOVar6 + 0x38) != 0) {
        lVar22 = lVar22 + *(long *)(*(long *)(pOVar6 + 0x38) + -8);
      }
      if (*(long *)(pOVar6 + 0x48) != 0) {
        lVar19 = lVar19 + *(long *)(*(long *)(pOVar6 + 0x48) + -8);
      }
      pOVar6 = pOVar6 + 0x20;
    } while (pOVar6 != this + (ulong)*(uint *)(this + 0x28) * 0x20);
    if (lVar22 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0);
LAB_00100866:
      piVar15 = local_60;
      if (-1 < lVar19) {
        if (local_60 == (int *)0x0) goto LAB_00100ec3;
        lVar22 = *(long *)(local_60 + -2);
        if (lVar22 != lVar19) {
          if (lVar19 != 0) {
            CowData<int>::_copy_on_write((CowData<int> *)&local_60);
            lVar9 = lVar22 * 4;
            if (lVar9 != 0) {
              uVar7 = lVar9 - 1U | lVar9 - 1U >> 1;
              uVar7 = uVar7 | uVar7 >> 2;
              uVar7 = uVar7 | uVar7 >> 4;
              uVar7 = uVar7 | uVar7 >> 8;
              uVar7 = uVar7 | uVar7 >> 0x10;
              lVar9 = (uVar7 | uVar7 >> 0x20) + 1;
            }
            goto LAB_001008ec;
          }
          LOCK();
          plVar1 = (long *)(local_60 + -4);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = (int *)0x0;
            Memory::free_static(piVar15 + -4,false);
          }
          else {
            local_60 = (int *)0x0;
          }
        }
        goto LAB_00100990;
      }
LAB_00100cf9:
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0);
    }
    else {
      if (lVar22 != 0) {
        sVar17 = lVar22 * 0xc;
        if ((sVar17 == 0) ||
           (uVar7 = sVar17 - 1 | sVar17 - 1 >> 1, uVar7 = uVar7 | uVar7 >> 2,
           uVar7 = uVar7 | uVar7 >> 4, uVar7 = uVar7 | uVar7 >> 8, uVar7 = uVar7 | uVar7 >> 0x10,
           uVar7 = uVar7 | uVar7 >> 0x20, uVar7 == 0xffffffffffffffff)) {
          _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                           "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                           ,0);
        }
        else {
          puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
          if (puVar8 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0);
          }
          else {
            local_70 = puVar8 + 2;
            *puVar8 = 1;
            memset(local_70,0,sVar17);
            puVar8[1] = lVar22;
          }
        }
        goto LAB_00100866;
      }
      if (lVar19 < 0) goto LAB_00100cf9;
LAB_00100ec3:
      if (lVar19 == 0) goto LAB_00100990;
      lVar22 = 0;
      CowData<int>::_copy_on_write((CowData<int> *)&local_60);
      lVar9 = 0;
LAB_001008ec:
      if (lVar19 * 4 != 0) {
        uVar7 = lVar19 * 4 - 1;
        uVar7 = uVar7 | uVar7 >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        uVar7 = uVar7 | uVar7 >> 0x10;
        uVar7 = uVar7 | uVar7 >> 0x20;
        lVar20 = uVar7 + 1;
        if (lVar20 != 0) {
          if (lVar19 <= lVar22) {
            if ((lVar20 == lVar9) ||
               (iVar4 = CowData<int>::_realloc((CowData<int> *)&local_60,lVar20), iVar4 == 0)) {
              if (local_60 == (int *)0x0) {
                FUN_001022da();
                return;
              }
              *(long *)(local_60 + -2) = lVar19;
            }
            goto LAB_00100990;
          }
          if (lVar20 == lVar9) {
LAB_00100cdc:
            if (local_60 == (int *)0x0) {
              FUN_001022da();
              return;
            }
LAB_0010098c:
            *(long *)(local_60 + -2) = lVar19;
          }
          else if (lVar22 == 0) {
            puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
            if (puVar8 != (undefined8 *)0x0) {
              local_60 = (int *)(puVar8 + 2);
              *puVar8 = 1;
              puVar8[1] = 0;
              goto LAB_0010098c;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0);
          }
          else {
            iVar4 = CowData<int>::_realloc((CowData<int> *)&local_60,lVar20);
            if (iVar4 == 0) goto LAB_00100cdc;
          }
          goto LAB_00100990;
        }
      }
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0);
    }
LAB_00100990:
    if (local_70 == (undefined8 *)0x0) goto LAB_001009af;
    puVar8 = local_70;
    if (1 < (ulong)local_70[-2]) {
      if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar19 = local_70[-1];
      uVar7 = 0x10;
      sVar17 = lVar19 * 0xc;
      if (sVar17 != 0) {
        uVar7 = sVar17 - 1 | sVar17 - 1 >> 1;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        uVar7 = uVar7 | uVar7 >> 0x10;
        uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
      }
      puVar13 = (undefined8 *)Memory::alloc_static(uVar7,false);
      puVar10 = local_70;
      if (puVar13 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0);
        puVar8 = local_70;
      }
      else {
        puVar8 = puVar13 + 2;
        *puVar13 = 1;
        puVar13[1] = lVar19;
        memcpy(puVar8,local_70,sVar17);
        puVar13 = local_70;
        LOCK();
        plVar1 = puVar10 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        local_70 = puVar8;
        if (*plVar1 == 0) {
          local_70 = (undefined8 *)0x0;
          Memory::free_static(puVar13 + -2,false);
          local_70 = puVar8;
        }
      }
    }
  }
  CowData<int>::_copy_on_write((CowData<int> *)&local_60);
  lVar19 = 0;
  uVar21 = 0;
  pOVar6 = this + 0x38;
  if (*(int *)(this + 0x28) != 0) {
    puVar10 = *(undefined8 **)pOVar6;
    piVar15 = local_60;
    while( true ) {
      iVar4 = (int)lVar19;
      if (puVar10 != (undefined8 *)0x0) {
        lVar22 = puVar10[-1];
        if (0 < lVar22) {
          uVar7 = 0;
          puVar13 = puVar8;
          do {
            uVar18 = *puVar10;
            puVar8 = (undefined8 *)((long)puVar13 + 0xc);
            *(float *)(puVar13 + 1) = (float)uVar21;
            puVar10 = puVar10 + 1;
            *puVar13 = uVar18;
            uVar7 = (ulong)((int)uVar7 + 1);
            puVar13 = puVar8;
          } while ((long)uVar7 < lVar22);
        }
        lVar19 = lVar22 + lVar19;
      }
      piVar11 = *(int **)(pOVar6 + 0x10);
      if ((piVar11 != (int *)0x0) && (lVar22 = *(long *)(piVar11 + -2), 0 < lVar22)) {
        uVar7 = 0;
        piVar14 = piVar15;
        do {
          iVar2 = *piVar11;
          piVar15 = piVar14 + 1;
          piVar11 = piVar11 + 1;
          *piVar14 = iVar2 + iVar4;
          uVar7 = (ulong)((int)uVar7 + 1);
          piVar14 = piVar15;
        } while ((long)uVar7 < lVar22);
      }
      uVar21 = uVar21 + 1;
      pOVar6 = pOVar6 + 0x20;
      if (*(uint *)(this + 0x28) <= uVar21) break;
      puVar10 = *(undefined8 **)pOVar6;
    }
  }
  Array::Array(local_90);
  iVar4 = (int)local_90;
  Array::resize(iVar4);
  Variant::Variant((Variant *)local_58,local_78);
  pVVar12 = (Variant *)Array::operator[](iVar4);
  if (pVVar12 == (Variant *)local_58) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar12 = 0;
    *(int *)pVVar12 = local_58[0];
    *(undefined8 *)(pVVar12 + 8) = local_50;
    *(undefined8 *)(pVVar12 + 0x10) = uStack_48;
  }
  Variant::Variant((Variant *)local_58,local_68);
  pVVar12 = (Variant *)Array::operator[](iVar4);
  if (pVVar12 == (Variant *)local_58) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar12 = 0;
    *(int *)pVVar12 = local_58[0];
    *(undefined8 *)(pVVar12 + 8) = local_50;
    *(undefined8 *)(pVVar12 + 0x10) = uStack_48;
  }
  (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(this + 0x20));
  pcVar3 = *(code **)(*plVar5 + 0x318);
  Dictionary::Dictionary(local_80);
  Array::Array(local_88);
  (*pcVar3)(plVar5,*(undefined8 *)(this + 0x20),3,local_90,local_88,local_80);
  Array::~Array(local_88);
  Dictionary::~Dictionary(local_80);
  (**(code **)(*plVar5 + 0x358))(plVar5,*(undefined8 *)(this + 0x20),0,*(undefined8 *)(this + 0x18))
  ;
  this[9] = (OpenXRVisibilityMaskExtension)0x0;
  Array::~Array(local_90);
  piVar15 = local_60;
  if (local_60 != (int *)0x0) {
    LOCK();
    plVar5 = (long *)(local_60 + -4);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_60 = (int *)0x0;
      Memory::free_static(piVar15 + -4,false);
    }
  }
  puVar8 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    LOCK();
    plVar5 = local_70 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_70 = (undefined8 *)0x0;
      Memory::free_static(puVar8 + -2,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100fa6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRVisibilityMaskExtension::_update_mesh() */

void __thiscall OpenXRVisibilityMaskExtension::_update_mesh(OpenXRVisibilityMaskExtension *this)

{
  if (((this[8] != (OpenXRVisibilityMaskExtension)0x0) &&
      (this[9] != (OpenXRVisibilityMaskExtension)0x0)) && (*(int *)(this + 0x28) != 0)) {
    _update_mesh(this);
    return;
  }
  return;
}



/* OpenXRVisibilityMaskExtension::on_pre_render() */

void __thiscall OpenXRVisibilityMaskExtension::on_pre_render(OpenXRVisibilityMaskExtension *this)

{
  if (((this[8] != (OpenXRVisibilityMaskExtension)0x0) &&
      (this[9] != (OpenXRVisibilityMaskExtension)0x0)) && (*(int *)(this + 0x28) != 0)) {
    _update_mesh(this);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRVisibilityMaskExtension::_update_mesh_data(unsigned int) [clone .part.0] */

void __thiscall
OpenXRVisibilityMaskExtension::_update_mesh_data(OpenXRVisibilityMaskExtension *this,uint param_1)

{
  long *plVar1;
  CowData<XrVector2f> *this_00;
  CowData<unsigned_int> *this_01;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  CowData<unsigned_int> *pCVar16;
  CowData<XrVector2f> *pCVar17;
  CowData<XrVector2f> *pCVar18;
  CowData<unsigned_int> *pCVar19;
  long lVar20;
  long in_FS_OFFSET;
  long local_90;
  undefined4 local_88;
  undefined1 local_84 [16];
  uint local_74;
  undefined8 uStack_70;
  uint uStack_68;
  uint local_64;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  lVar6 = OpenXRAPI::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    if (OpenXRAPI::singleton == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_update_mesh_data",
                         "modules/openxr/extensions/openxr_visibility_mask_extension.cpp",0xb1,
                         "Parameter \"openxr_api\" is null.",0,0);
        return;
      }
      goto LAB_0010186b;
    }
    uVar2 = *(undefined4 *)(OpenXRAPI::singleton + 0x9c);
    local_88 = 0x3b9b4318;
    local_74 = 0;
    uStack_70 = 0;
    uVar3 = *(undefined8 *)(OpenXRAPI::singleton + 0xf8);
    local_84 = (undefined1  [16])0x0;
    uStack_68 = 0;
    local_64 = 0;
    local_60 = 0;
    if (*(code **)(this + 0xb0) == (code *)0x0) {
      iVar7 = -0xc;
LAB_00101390:
      OpenXRAPI::get_error_string(&local_90,lVar6,iVar7);
      pcVar15 = "OpenXR: Unable to obtain visibility mask metrics [";
    }
    else {
      iVar7 = (**(code **)(this + 0xb0))(uVar3,uVar2,param_1,1,&local_88);
      if (iVar7 < 0) goto LAB_00101390;
      uVar14 = (ulong)param_1;
      uVar13 = (ulong)local_74;
      lVar20 = uVar14 * 0x20;
      this_00 = (CowData<XrVector2f> *)(this + lVar20 + 0x38);
      lVar4 = *(long *)(this + lVar20 + 0x38);
      if (lVar4 == 0) {
        if (uVar13 != 0) {
          CowData<XrVector2f>::_copy_on_write(this_00);
          uVar10 = 0;
LAB_00101531:
          uVar8 = uVar13 * 8 - 1;
          uVar8 = uVar8 >> 1 | uVar8;
          uVar8 = uVar8 >> 2 | uVar8;
          uVar8 = uVar8 >> 4 | uVar8;
          uVar8 = uVar8 >> 8 | uVar8;
          uVar8 = uVar8 >> 0x10 | uVar8;
          pCVar17 = (CowData<XrVector2f> *)((uVar8 >> 0x20 | uVar8) + 1);
          if ((long)uVar10 < (long)uVar13) {
LAB_00101581:
            if (uVar10 == 0) {
              puVar11 = (undefined8 *)Memory::alloc_static((ulong)(pCVar17 + 0x10),false);
              if (puVar11 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                puVar12 = puVar11 + 2;
                *puVar11 = 1;
                puVar11[1] = 0;
                *(undefined8 **)(this + uVar14 * 0x20 + 0x38) = puVar12;
LAB_001011d0:
                puVar12[-1] = uVar13;
              }
            }
            else {
              iVar7 = CowData<XrVector2f>::_realloc(this_00,(long)pCVar17);
              if (iVar7 == 0) {
LAB_001011be:
                puVar12 = *(undefined8 **)(this + uVar14 * 0x20 + 0x38);
                if (puVar12 == (undefined8 *)0x0) goto code_r0x001022e6;
                goto LAB_001011d0;
              }
            }
          }
          else {
LAB_00101750:
            pCVar18 = this_00;
            iVar7 = CowData<XrVector2f>::_realloc(this_00,(long)pCVar17);
            if (iVar7 == 0) goto LAB_001016e5;
          }
        }
      }
      else {
        uVar10 = *(ulong *)(lVar4 + -8);
        if (uVar13 != uVar10) {
          if (uVar13 == 0) {
            LOCK();
            plVar1 = (long *)(lVar4 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this + lVar20 + 0x38);
              *(undefined8 *)(this + lVar20 + 0x38) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
            else {
              *(undefined8 *)(this + lVar20 + 0x38) = 0;
            }
          }
          else {
            CowData<XrVector2f>::_copy_on_write(this_00);
            uVar8 = uVar13 * 8 - 1;
            uVar8 = uVar8 >> 1 | uVar8;
            uVar8 = uVar8 >> 2 | uVar8;
            uVar8 = uVar8 >> 4 | uVar8;
            uVar8 = uVar8 >> 8 | uVar8;
            uVar8 = uVar8 >> 0x10 | uVar8;
            uVar8 = uVar8 >> 0x20 | uVar8;
            pCVar17 = (CowData<XrVector2f> *)(uVar8 + 1);
            if (uVar10 * 8 == 0) goto LAB_00101531;
            uVar9 = uVar10 * 8 - 1;
            uVar9 = uVar9 | uVar9 >> 1;
            uVar9 = uVar9 | uVar9 >> 2;
            uVar9 = uVar9 | uVar9 >> 4;
            uVar9 = uVar9 | uVar9 >> 8;
            uVar9 = uVar9 | uVar9 >> 0x10;
            uVar9 = uVar9 | uVar9 >> 0x20;
            if ((long)uVar10 < (long)uVar13) {
              if (uVar9 != uVar8) goto LAB_00101581;
              goto LAB_001011be;
            }
            pCVar18 = pCVar17;
            if (uVar9 != uVar8) goto LAB_00101750;
LAB_001016e5:
            if (*(long *)(this + uVar14 * 0x20 + 0x38) == 0) {
              _update_mesh_data((uint)pCVar18);
              return;
            }
            *(ulong *)(*(long *)(this + uVar14 * 0x20 + 0x38) + -8) = uVar13;
          }
        }
      }
      lVar4 = *(long *)(this + lVar20 + 0x48);
      uVar14 = (ulong)local_64;
      this_01 = (CowData<unsigned_int> *)(this + lVar20 + 0x48);
      if (lVar4 == 0) {
        if (uVar14 != 0) {
          CowData<unsigned_int>::_copy_on_write(this_01);
          uVar13 = 0;
LAB_00101467:
          uVar10 = uVar14 * 4 - 1;
          uVar10 = uVar10 >> 1 | uVar10;
          uVar10 = uVar10 >> 2 | uVar10;
          uVar10 = uVar10 | uVar10 >> 4;
          uVar10 = uVar10 | uVar10 >> 8;
          uVar10 = uVar10 | uVar10 >> 0x10;
          pCVar16 = (CowData<unsigned_int> *)((uVar10 >> 0x20 | uVar10) + 1);
          if ((long)uVar13 < (long)uVar14) {
LAB_001014b7:
            if (uVar13 == 0) {
              puVar11 = (undefined8 *)Memory::alloc_static((ulong)(pCVar16 + 0x10),false);
              if (puVar11 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                puVar12 = puVar11 + 2;
                *puVar11 = 1;
                puVar11[1] = 0;
                *(undefined8 **)(this + lVar20 + 0x48) = puVar12;
LAB_001012d8:
                puVar12[-1] = uVar14;
              }
            }
            else {
              iVar7 = CowData<unsigned_int>::_realloc(this_01,(long)pCVar16);
              if (iVar7 == 0) {
LAB_001012cb:
                puVar12 = *(undefined8 **)(this + lVar20 + 0x48);
                if (puVar12 == (undefined8 *)0x0) {
code_r0x001022e6:
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                goto LAB_001012d8;
              }
            }
          }
          else {
LAB_00101780:
            pCVar19 = this_01;
            iVar7 = CowData<unsigned_int>::_realloc(this_01,(long)pCVar16);
            if (iVar7 == 0) goto LAB_001016c9;
          }
        }
      }
      else {
        uVar13 = *(ulong *)(lVar4 + -8);
        if (uVar14 != uVar13) {
          if (uVar14 == 0) {
            LOCK();
            plVar1 = (long *)(lVar4 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this + lVar20 + 0x48);
              *(undefined8 *)(this + lVar20 + 0x48) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
            else {
              *(undefined8 *)(this + lVar20 + 0x48) = 0;
            }
          }
          else {
            CowData<unsigned_int>::_copy_on_write(this_01);
            uVar10 = uVar14 * 4 - 1;
            uVar10 = uVar10 >> 1 | uVar10;
            uVar10 = uVar10 >> 2 | uVar10;
            uVar10 = uVar10 >> 4 | uVar10;
            uVar10 = uVar10 >> 8 | uVar10;
            uVar10 = uVar10 >> 0x10 | uVar10;
            uVar10 = uVar10 >> 0x20 | uVar10;
            pCVar16 = (CowData<unsigned_int> *)(uVar10 + 1);
            if (uVar13 * 4 == 0) goto LAB_00101467;
            uVar8 = uVar13 * 4 - 1;
            uVar8 = uVar8 | uVar8 >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            uVar8 = uVar8 | uVar8 >> 0x20;
            if ((long)uVar13 < (long)uVar14) {
              if (uVar8 != uVar10) goto LAB_001014b7;
              goto LAB_001012cb;
            }
            pCVar19 = pCVar16;
            if (uVar8 != uVar10) goto LAB_00101780;
LAB_001016c9:
            if (*(long *)(this + lVar20 + 0x48) == 0) {
              _update_mesh_data((uint)pCVar19);
              return;
            }
            *(ulong *)(*(long *)(this + lVar20 + 0x48) + -8) = uVar14;
          }
        }
      }
      local_84._12_4_ = local_74;
      CowData<XrVector2f>::_copy_on_write(this_00);
      uStack_70 = *(undefined8 *)(this + lVar20 + 0x38);
      uStack_68 = local_64;
      CowData<unsigned_int>::_copy_on_write(this_01);
      local_60 = *(undefined8 *)(this + lVar20 + 0x48);
      if (*(code **)(this + 0xb0) == (code *)0x0) {
        iVar7 = -0xc;
      }
      else {
        iVar7 = (**(code **)(this + 0xb0))(uVar3,uVar2,param_1,1,&local_88);
        if (-1 < iVar7) {
          this[9] = (OpenXRVisibilityMaskExtension)0x1;
          goto LAB_0010135f;
        }
      }
      OpenXRAPI::get_error_string(&local_90,lVar6,iVar7);
      pcVar15 = "OpenXR: Unable to obtain visibility mask data [";
    }
    Variant::Variant((Variant *)local_58,pcVar15);
    print_line<String,char_const*>((Variant *)local_58,&local_90,&_LC33);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar6 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    _err_print_index_error
              ("_update_mesh_data","modules/openxr/extensions/openxr_visibility_mask_extension.cpp",
               0xae,(ulong)param_1,4,"p_view","4","",false,false);
  }
LAB_0010135f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010186b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRVisibilityMaskExtension::_update_mesh_data(unsigned int) */

void __thiscall
OpenXRVisibilityMaskExtension::_update_mesh_data(OpenXRVisibilityMaskExtension *this,uint param_1)

{
  if (this[8] != (OpenXRVisibilityMaskExtension)0x0) {
    _update_mesh_data(this,param_1);
    return;
  }
  return;
}



/* OpenXRVisibilityMaskExtension::on_session_created(XrSession_T*) */

void OpenXRVisibilityMaskExtension::on_session_created(XrSession_T *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  XrSession_T XVar8;
  uint uVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[8] != (XrSession_T)0x0) {
    plVar5 = (long *)RenderingServer::get_singleton();
    if (plVar5 == (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 0x59;
        pcVar7 = "Parameter \"rendering_server\" is null.";
LAB_00101a82:
        _err_print_error("on_session_created",
                         "modules/openxr/extensions/openxr_visibility_mask_extension.cpp",uVar6,
                         pcVar7,0,0);
        return;
      }
      goto LAB_00101acc;
    }
    if (OpenXRAPI::singleton == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 0x5c;
        pcVar7 = "Parameter \"openxr_api\" is null.";
        goto LAB_00101a82;
      }
      goto LAB_00101acc;
    }
    uVar6 = (**(code **)(*plVar5 + 0x240))(plVar5);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    local_50 = 0;
    local_40 = 0x18d;
    pcVar2 = *(code **)(*plVar5 + 0x250);
    local_48 = 
    "shader_type spatial;\nrender_mode unshaded, shadows_disabled, cull_disabled;\nvoid vertex() {\n\tif (int(VERTEX.z) == VIEW_INDEX) {\n\t\tVERTEX.z = -1.0;\n\t\tVERTEX += EYE_OFFSET;\n\t\tPOSITION = PROJECTION_MATRIX * vec4(VERTEX, 1.0);\n\t\tPOSITION.xy /= POSITION.w;\n\t\tPOSITION.z = 1.0;\n\t\tPOSITION.w = 1.0;\n\t} else {\n\t\tPOSITION = vec4(2.0, 2.0, 2.0, 1.0);\n\t}\n}\nvoid fragment() {\n\tALBEDO = vec3(0.0, 0.0, 0.0);\n}\n"
    ;
    String::parse_latin1((StrRange *)&local_50);
    (*pcVar2)(plVar5,*(undefined8 *)(param_1 + 0x10),(StrRange *)&local_50);
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
    uVar6 = (**(code **)(*plVar5 + 0x290))(plVar5);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,uVar6,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*plVar5 + 0x2b8))(plVar5,*(undefined8 *)(param_1 + 0x18),99);
    uVar6 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    iVar4 = OpenXRAPI::get_view_count();
    *(int *)(param_1 + 0x28) = iVar4;
    if (iVar4 != 0) {
      XVar8 = param_1[8];
      uVar9 = 0;
      do {
        if (XVar8 != (XrSession_T)0x0) {
          _update_mesh_data((OpenXRVisibilityMaskExtension *)param_1,uVar9);
          XVar8 = param_1[8];
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      if (((XVar8 != (XrSession_T)0x0) && (param_1[9] != (XrSession_T)0x0)) &&
         (*(uint *)(param_1 + 0x28) != 0)) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_mesh((OpenXRVisibilityMaskExtension *)param_1);
          return;
        }
        goto LAB_00101acc;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101acc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRVisibilityMaskExtension::on_event_polled(XrEventDataBuffer const&) */

undefined8 __thiscall
OpenXRVisibilityMaskExtension::on_event_polled
          (OpenXRVisibilityMaskExtension *this,XrEventDataBuffer *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (*(int *)param_1 == 0x3b9b4319) {
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      String::num_uint64((ulong)&local_58,*(int *)(param_1 + 0x1c),true);
      operator+((char *)&local_60,(String *)"OpenXR EVENT: Visibility mask changed for view ");
      Variant::Variant((Variant *)local_48,(String *)&local_60);
      stringify_variants((Variant *)&local_50);
      __print_line((String *)&local_50);
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
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
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
    if (this[8] != (OpenXRVisibilityMaskExtension)0x0) {
      _update_mesh_data(this,*(uint *)(param_1 + 0x1c));
    }
    uVar4 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_session_create_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_session_create_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::get_suggested_tracker_names() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* OpenXRExtensionWrapper::on_register_metadata() */

void OpenXRExtensionWrapper::on_register_metadata(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_before_instance_created() */

void OpenXRExtensionWrapper::on_before_instance_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_instance_destroyed() */

void OpenXRExtensionWrapper::on_instance_destroyed(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_process() */

void OpenXRExtensionWrapper::on_process(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_main_swapchains_created() */

void OpenXRExtensionWrapper::on_main_swapchains_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_pre_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_post_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_idle() */

void OpenXRExtensionWrapper::on_state_idle(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_ready() */

void OpenXRExtensionWrapper::on_state_ready(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_synchronized() */

void OpenXRExtensionWrapper::on_state_synchronized(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_visible() */

void OpenXRExtensionWrapper::on_state_visible(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_focused() */

void OpenXRExtensionWrapper::on_state_focused(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_stopping() */

void OpenXRExtensionWrapper::on_state_stopping(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_loss_pending() */

void OpenXRExtensionWrapper::on_state_loss_pending(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_exiting() */

void OpenXRExtensionWrapper::on_state_exiting(void)

{
  return;
}



/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */

void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer
               (XrCompositionLayerBaseHeader *param_1,Dictionary *param_2,void *param_3)

{
  return;
}



/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */

void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed
               (XrCompositionLayerBaseHeader *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */

void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,Dictionary *param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this)

{
  Dictionary::Dictionary((Dictionary *)this);
  return this;
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<XrVector2f>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<XrVector2f>::_copy_on_write(void)

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



/* OpenXRVisibilityMaskExtension::_update_mesh() [clone .part.0] [clone .cold] */

void OpenXRVisibilityMaskExtension::_update_mesh(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001022da(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRVisibilityMaskExtension::_update_mesh_data(unsigned int) [clone .part.0] [clone .cold] */

void OpenXRVisibilityMaskExtension::_update_mesh_data(uint param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
::operator[](HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00102b08:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_0010299a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_0010299e:
      if (iVar45 != 0) {
LAB_001029a6:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar38 == uVar52) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010284b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_00102484;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00102484;
    if (iVar45 != 0) goto LAB_001029a6;
LAB_001024aa:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010284b;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_0010284b;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00102b08;
LAB_0010299a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_0010299e;
    }
LAB_00102484:
    if ((float)uVar39 * __LC12 < (float)(iVar45 + 1)) goto LAB_001024aa;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00102adb:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00102733:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00102740;
LAB_00102975:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_00102adb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00102733;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00102975;
LAB_00102740:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010284b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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



/* String stringify_variants<char const*>(Variant const&, char const*) */

Variant * stringify_variants<char_const*>(Variant *param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char *in_RDX;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC28;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)param_1,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void print_line<String, char const*>(Variant const&, String, char const*) */

void print_line<String,char_const*>(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00102f4e;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_90 = *param_2;
    }
  }
LAB_00102f4e:
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_68 = &_LC28;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  __print_line((String *)&local_88);
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<XrVector2f>::_realloc(long) */

undefined8 __thiscall CowData<XrVector2f>::_realloc(CowData<XrVector2f> *this,long param_1)

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



/* CowData<unsigned int>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this,long param_1)

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


