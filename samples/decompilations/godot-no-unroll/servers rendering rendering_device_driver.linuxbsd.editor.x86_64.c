
/* RenderingDeviceDriver::api_trait_get(RenderingDeviceDriver::ApiTrait) */

bool __thiscall RenderingDeviceDriver::api_trait_get(undefined8 param_1,uint param_2)

{
  if (param_2 < 6) {
    return param_2 != 1;
  }
  if (param_2 - 6 < 2) {
    return false;
  }
  _err_print_error("api_trait_get","servers/rendering/rendering_device_driver.cpp",0x17e,
                   "Method/function failed. Returning: 0",0,0);
  return false;
}



/* CowData<RenderingDeviceCommons::ShaderUniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::ShaderUniform>::_copy_on_write
          (CowData<RenderingDeviceCommons::ShaderUniform> *this)

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
  __n = lVar2 * 0x20;
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



/* CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write() [clone .isra.0]
    */

void __thiscall
CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write
          (CowData<RenderingDeviceCommons::ShaderSpecializationConstant> *this)

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
  __n = lVar2 * 0x18;
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



/* CowData<SpvReflectSpecializationConstant*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<SpvReflectSpecializationConstant*>::_copy_on_write
          (CowData<SpvReflectSpecializationConstant*> *this)

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



/* CowData<SpvReflectBlockVariable*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<SpvReflectBlockVariable*>::_copy_on_write(CowData<SpvReflectBlockVariable*> *this)

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



/* CowData<SpvReflectDescriptorBinding*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<SpvReflectDescriptorBinding*>::_copy_on_write(CowData<SpvReflectDescriptorBinding*> *this)

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



/* CowData<SpvReflectInterfaceVariable*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<SpvReflectInterfaceVariable*>::_copy_on_write(CowData<SpvReflectInterfaceVariable*> *this)

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



/* RenderingDeviceDriver::~RenderingDeviceDriver() */

void __thiscall RenderingDeviceDriver::~RenderingDeviceDriver(RenderingDeviceDriver *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106bb0;
  Object::~Object((Object *)this);
  return;
}



/* RenderingDeviceDriver::~RenderingDeviceDriver() */

void __thiscall RenderingDeviceDriver::~RenderingDeviceDriver(RenderingDeviceDriver *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106bb0;
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* CowData<Vector<RenderingDeviceCommons::ShaderUniform> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_copy_on_write
          (CowData<Vector<RenderingDeviceCommons::ShaderUniform>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar10 = 0x10;
  if (lVar2 * 0x10 != 0) {
    uVar10 = lVar2 * 0x10 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar10,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar7 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar2;
  puVar9 = puVar5 + 2;
  if (lVar2 != 0) {
    do {
      lVar8 = lVar7 * 0x10 + *(long *)this;
      puVar9[1] = 0;
      lVar3 = *(long *)(lVar8 + 8);
      plVar1 = (long *)(lVar3 + -0x10);
      if (lVar3 != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00100858;
          LOCK();
          lVar6 = *plVar1;
          bVar11 = lVar3 == lVar6;
          if (bVar11) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar6 != -1) {
          puVar9[1] = *(undefined8 *)(lVar8 + 8);
        }
      }
LAB_00100858:
      lVar7 = lVar7 + 1;
      puVar9 = puVar9 + 2;
    } while (lVar2 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Error CowData<SpvReflectDescriptorBinding*>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<SpvReflectDescriptorBinding*>::resize<false>
          (CowData<SpvReflectDescriptorBinding*> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<SpvReflectDescriptorBinding*> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<SpvReflectDescriptorBinding*> *pCVar10;
  CowData<SpvReflectDescriptorBinding*> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<SpvReflectDescriptorBinding*> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<SpvReflectDescriptorBinding*> *)(lVar12 * 8);
    if (pCVar4 != (CowData<SpvReflectDescriptorBinding*> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<SpvReflectDescriptorBinding*> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<SpvReflectDescriptorBinding*> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<SpvReflectDescriptorBinding*> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00105318();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_001009c1;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00100ab2;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_001009c1:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00100ab2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector<RenderingDeviceCommons::ShaderUniform> >::resize<false>(long) [clone
   .isra.0] */

void __thiscall
CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::resize<false>
          (CowData<Vector<RenderingDeviceCommons::ShaderUniform>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar10 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar10 = lVar6 * 0x10;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar11 = param_1 * 0x10 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    uVar11 = uVar11 | uVar11 >> 0x20;
    lVar12 = uVar11 + 1;
    if (lVar12 != 0) {
      if (param_1 <= lVar6) {
        lVar6 = *(long *)this;
        uVar11 = param_1;
        while( true ) {
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (*(ulong *)(lVar6 + -8) <= uVar11) break;
          while( true ) {
            lVar4 = uVar11 * 0x10 + lVar6;
            if (*(long *)(lVar4 + 8) != 0) break;
            uVar11 = uVar11 + 1;
            if (*(ulong *)(lVar6 + -8) <= uVar11) goto LAB_00100c42;
          }
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar6 = *(long *)(lVar4 + 8);
            *(undefined8 *)(lVar4 + 8) = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
          lVar6 = *(long *)this;
          uVar11 = uVar11 + 1;
        }
LAB_00100c42:
        if (lVar12 != lVar10) {
          iVar3 = _realloc(this,lVar12);
          if (iVar3 != 0) {
            return;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return;
      }
      if (lVar12 == lVar10) {
LAB_00100d1b:
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
          FUN_0010533a();
          return;
        }
        lVar6 = puVar8[-1];
        if (param_1 <= lVar6) goto LAB_00100cf1;
      }
      else {
        if (lVar6 != 0) {
          iVar3 = _realloc(this,lVar12);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_00100d1b;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00100d92;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar6 = 0;
      }
      puVar5 = puVar8 + lVar6 * 2;
      do {
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar8 + param_1 * 2);
LAB_00100cf1:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00100d92:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* Error CowData<SpvReflectSpecializationConstant*>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<SpvReflectSpecializationConstant*>::resize<false>
          (CowData<SpvReflectSpecializationConstant*> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<SpvReflectSpecializationConstant*> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<SpvReflectSpecializationConstant*> *pCVar10;
  CowData<SpvReflectSpecializationConstant*> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<SpvReflectSpecializationConstant*> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<SpvReflectSpecializationConstant*> *)(lVar12 * 8);
    if (pCVar4 != (CowData<SpvReflectSpecializationConstant*> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<SpvReflectSpecializationConstant*> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<SpvReflectSpecializationConstant*> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<SpvReflectSpecializationConstant*> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00105350();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_00100ef1;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00100fe2;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_00100ef1:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00100fe2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* Error CowData<SpvReflectInterfaceVariable*>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<SpvReflectInterfaceVariable*>::resize<false>
          (CowData<SpvReflectInterfaceVariable*> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<SpvReflectInterfaceVariable*> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<SpvReflectInterfaceVariable*> *pCVar10;
  CowData<SpvReflectInterfaceVariable*> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<SpvReflectInterfaceVariable*> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<SpvReflectInterfaceVariable*> *)(lVar12 * 8);
    if (pCVar4 != (CowData<SpvReflectInterfaceVariable*> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<SpvReflectInterfaceVariable*> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<SpvReflectInterfaceVariable*> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<SpvReflectInterfaceVariable*> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00105368();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_00101141;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00101232;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_00101141:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101232:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* Error CowData<SpvReflectBlockVariable*>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<SpvReflectBlockVariable*>::resize<false>
          (CowData<SpvReflectBlockVariable*> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<SpvReflectBlockVariable*> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<SpvReflectBlockVariable*> *pCVar10;
  CowData<SpvReflectBlockVariable*> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<SpvReflectBlockVariable*> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<SpvReflectBlockVariable*> *)(lVar12 * 8);
    if (pCVar4 != (CowData<SpvReflectBlockVariable*> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<SpvReflectBlockVariable*> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<SpvReflectBlockVariable*> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<SpvReflectBlockVariable*> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00105380();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_00101391;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00101482;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_00101391:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00101482:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* RenderingDeviceDriver::_reflect_spirv(VectorView<RenderingDeviceCommons::ShaderStageSPIRVData>,
   RenderingDeviceCommons::ShaderReflection&) */

undefined8
RenderingDeviceDriver::_reflect_spirv(undefined8 param_1,int *param_2,uint param_3,ulong *param_4)

{
  CowData<Vector<RenderingDeviceCommons::ShaderUniform>> *this;
  CowData<RenderingDeviceCommons::ShaderSpecializationConstant> *this_00;
  ulong *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  size_t sVar22;
  long lVar23;
  char *pcVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  int iVar31;
  long in_FS_OFFSET;
  CowData<char32_t> *local_628;
  CowData<char32_t> *local_620;
  CowData<char32_t> *local_618;
  CowData<char32_t> *local_610;
  CowData<char32_t> *local_608;
  CowData<char32_t> *local_600;
  CowData<char32_t> *local_5f8;
  CowData<char32_t> *local_5f0;
  CowData<char32_t> *local_5e8;
  CowData<char32_t> *local_5e0;
  CowData<char32_t> *local_5d8;
  uint local_5bc;
  long local_5b8;
  long local_5b0;
  long local_5a8;
  long local_5a0;
  long local_598;
  long local_590;
  long local_588;
  long local_580;
  long local_578;
  long local_570;
  ulong local_568;
  undefined8 local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  char *local_538;
  long *local_530;
  char *local_528;
  size_t local_520;
  long local_508 [5];
  CowData<Vector<RenderingDeviceCommons::ShaderUniform>> local_4e0 [16];
  ulong local_4d0;
  ulong local_4c0;
  ulong local_4b8;
  ulong local_4b0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = param_4[5];
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  *(undefined1 *)((long)param_4 + 0xc) = 0;
  param_4[2] = 0;
  plVar29 = local_508;
  for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
    *plVar29 = 0;
    plVar29 = plVar29 + 1;
  }
  this = (CowData<Vector<RenderingDeviceCommons::ShaderUniform>> *)(param_4 + 5);
  *(undefined4 *)(param_4 + 3) = 0;
  *(undefined4 *)((long)param_4 + 0x1c) = 0;
  if (uVar15 != 0) {
    CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_unref(this);
    param_4[5] = 0;
  }
  if (param_4[7] == 0) {
    uVar15 = param_4[9];
    if (uVar15 == 0) {
      param_4[10] = local_4b8;
      param_4[0xb] = local_4b0;
      goto LAB_001015c0;
    }
LAB_001018a5:
    LOCK();
    plVar29 = (long *)(uVar15 - 0x10);
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (*plVar29 == 0) {
      uVar15 = param_4[9];
      param_4[9] = 0;
      Memory::free_static((void *)(uVar15 - 0x10),false);
    }
  }
  else {
    LOCK();
    plVar29 = (long *)(param_4[7] - 0x10);
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (*plVar29 == 0) {
      uVar15 = param_4[7];
      param_4[7] = 0;
      Memory::free_static((void *)(uVar15 - 0x10),false);
    }
    uVar15 = local_4d0;
    local_4d0 = 0;
    param_4[7] = uVar15;
    uVar15 = param_4[9];
    if (uVar15 == local_4c0) {
      param_4[10] = local_4b8;
      param_4[0xb] = local_4b0;
      if (uVar15 != 0) {
        LOCK();
        plVar29 = (long *)(uVar15 - 0x10);
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (*plVar29 == 0) {
          Memory::free_static((void *)(local_4c0 - 0x10),false);
        }
      }
      goto LAB_001015c0;
    }
    if (uVar15 != 0) goto LAB_001018a5;
  }
  param_4[9] = local_4c0;
  param_4[10] = local_4b8;
  param_4[0xb] = local_4b0;
LAB_001015c0:
  if (local_4d0 != 0) {
    LOCK();
    plVar29 = (long *)(local_4d0 - 0x10);
    *plVar29 = *plVar29 + -1;
    UNLOCK();
    if (*plVar29 == 0) {
      Memory::free_static((void *)(local_4d0 - 0x10),false);
    }
  }
  CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_unref(local_4e0);
  if (param_3 == 0) {
LAB_0010181f:
    uVar17 = 0;
LAB_00101dfa:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar17;
  }
  piVar3 = param_2 + (ulong)param_3 * 6;
LAB_0010160c:
  iVar13 = *param_2;
  if ((iVar13 != 4) || (*(undefined1 *)((long)param_4 + 0xc) = 1, param_3 == 1)) {
    uVar15 = (ulong)(uint)(1 << ((byte)iVar13 & 0x1f));
    if ((uVar15 & param_4[10]) != 0) {
      local_538 = (char *)0x0;
      local_520 = 0x1a;
      local_528 = " submitted more than once.";
      String::parse_latin1((StrRange *)&local_538);
      local_550 = 0;
      pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
      sVar22 = 0;
      if (pcVar24 != (char *)0x0) {
        sVar22 = strlen(pcVar24);
      }
      local_528 = pcVar24;
      local_520 = sVar22;
      String::parse_latin1((StrRange *)&local_550);
      operator+((char *)&local_548,(String *)"Stage ");
      String::operator+((String *)&local_528,(String *)&local_548);
      pcVar24 = "Condition \"r_reflection.stages.has_flag(stage_flag)\" is true. Returning: FAILED";
      uVar17 = 0x33;
      goto LAB_00101d0f;
    }
    lVar23 = *(long *)(param_2 + 4);
    if (lVar23 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar23 + -8);
    }
    iVar12 = spvReflectCreateShaderModule(uVar17,lVar23,local_508);
    if (iVar12 != 0) {
      local_538 = (char *)0x0;
      local_520 = 0x18;
      local_528 = "\' failed parsing shader.";
      String::parse_latin1((StrRange *)&local_538);
      local_550 = 0;
      pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
      sVar22 = 0;
      if (pcVar24 != (char *)0x0) {
        sVar22 = strlen(pcVar24);
      }
      local_528 = pcVar24;
      local_520 = sVar22;
      String::parse_latin1((StrRange *)&local_550);
      operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
      String::operator+((String *)&local_528,(String *)&local_548);
      pcVar24 = "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED";
      uVar17 = 0x3a;
      goto LAB_00101d0f;
    }
    if (*(char *)((long)param_4 + 0xc) != '\0') {
      param_4[2] = *(ulong *)(local_508[3] + 0x80);
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(local_508[3] + 0x88);
    }
    local_5bc = 0;
    iVar12 = spvReflectEnumerateDescriptorBindings(local_508,&local_5bc,0);
    if (iVar12 != 0) {
      local_538 = (char *)0x0;
      local_520 = 0x29;
      local_528 = "\' failed enumerating descriptor bindings.";
      String::parse_latin1((StrRange *)&local_538);
      local_550 = 0;
      pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
      sVar22 = 0;
      if (pcVar24 != (char *)0x0) {
        sVar22 = strlen(pcVar24);
      }
      local_528 = pcVar24;
      local_520 = sVar22;
      String::parse_latin1((StrRange *)&local_550);
      operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
      String::operator+((String *)&local_528,(String *)&local_548);
      pcVar24 = "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED";
      uVar17 = 0x44;
      goto LAB_00101d0f;
    }
    if (local_5bc == 0) {
LAB_001016ad:
      local_568 = local_568 & 0xffffffff00000000;
      iVar12 = spvReflectEnumerateSpecializationConstants(local_508,&local_568,0);
      if (iVar12 != 0) {
        local_538 = (char *)0x0;
        local_520 = 0x2e;
        local_528 = "\' failed enumerating specialization constants.";
        String::parse_latin1((StrRange *)&local_538);
        local_550 = 0;
        pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
        sVar22 = 0;
        if (pcVar24 != (char *)0x0) {
          sVar22 = strlen(pcVar24);
        }
        local_528 = pcVar24;
        local_520 = sVar22;
        String::parse_latin1((StrRange *)&local_550);
        operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
        String::operator+((String *)&local_528,(String *)&local_548);
        pcVar24 = "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED";
        uVar17 = 0xdb;
        goto LAB_00101d0f;
      }
      if ((uint)local_568 != 0) {
        local_540 = 0;
        CowData<SpvReflectSpecializationConstant*>::resize<false>
                  ((CowData<SpvReflectSpecializationConstant*> *)&local_540,local_568 & 0xffffffff);
        CowData<SpvReflectSpecializationConstant*>::_copy_on_write
                  ((CowData<SpvReflectSpecializationConstant*> *)&local_540);
        lVar23 = local_540;
        iVar12 = spvReflectEnumerateSpecializationConstants(local_508,&local_568,local_540);
        if (iVar12 != 0) {
          local_538 = (char *)0x0;
          local_520 = 0x2c;
          local_528 = "\' failed obtaining specialization constants.";
          String::parse_latin1((StrRange *)&local_538);
          local_558 = 0;
          pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
          sVar22 = 0;
          if (pcVar24 != (char *)0x0) {
            sVar22 = strlen(pcVar24);
          }
          local_528 = pcVar24;
          local_520 = sVar22;
          String::parse_latin1((StrRange *)&local_558);
          operator+((char *)&local_550,(String *)"Reflection of SPIR-V shader stage \'");
          String::operator+((String *)&local_528,(String *)&local_550);
          _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0xe3,
                           "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED"
                           ,(String *)&local_528,0,0);
          pcVar24 = local_528;
          if (local_528 != (char *)0x0) {
            LOCK();
            plVar29 = (long *)(local_528 + -0x10);
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (*plVar29 == 0) {
              local_528 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
          lVar23 = local_550;
          if (local_550 != 0) {
            LOCK();
            plVar29 = (long *)(local_550 + -0x10);
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (*plVar29 == 0) {
              local_550 = 0;
              Memory::free_static((void *)(lVar23 + -0x10),false);
            }
          }
          lVar23 = local_558;
          if (local_558 != 0) {
            LOCK();
            plVar29 = (long *)(local_558 + -0x10);
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (*plVar29 == 0) {
              local_558 = 0;
              Memory::free_static((void *)(lVar23 + -0x10),false);
            }
          }
          pcVar24 = local_538;
          if (local_538 != (char *)0x0) {
            LOCK();
            plVar29 = (long *)(local_538 + -0x10);
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (*plVar29 == 0) {
              local_538 = (char *)0x0;
              Memory::free_static(pcVar24 + -0x10,false);
            }
          }
LAB_0010365d:
          if (local_540 != 0) {
            LOCK();
            plVar29 = (long *)(local_540 + -0x10);
            *plVar29 = *plVar29 + -1;
            UNLOCK();
            if (*plVar29 == 0) {
              Memory::free_static((void *)(local_540 + -0x10),false);
            }
          }
          goto LAB_00101df5;
        }
        if ((uint)local_568 != 0) {
          local_520 = local_520 & 0xffffffff00000000;
          if (lVar23 != 0) {
            this_00 = (CowData<RenderingDeviceCommons::ShaderSpecializationConstant> *)(param_4 + 7)
            ;
            lVar26 = 0;
            uVar21 = 0;
            do {
              local_618 = *(CowData<char32_t> **)(lVar23 + -8);
              if ((long)local_618 <= (long)uVar21) goto LAB_0010239d;
              lVar28 = *(long *)(lVar23 + lVar26 * 8);
              iVar12 = *(int *)(lVar28 + 0x10);
              iVar31 = *(int *)(lVar28 + 4);
              if (iVar12 == 1) {
                local_520 = CONCAT44(local_520._4_4_,*(undefined4 *)(lVar28 + 0x14));
              }
              else if (iVar12 == 2) {
                local_520 = CONCAT44(local_520._4_4_,*(undefined4 *)(lVar28 + 0x14));
              }
              else {
                if (iVar12 == 0) {
                  local_520 = CONCAT71(local_520._1_7_,*(int *)(lVar28 + 0x14) != 0);
                }
                iVar12 = 0;
              }
              uVar21 = param_4[7];
              iVar6 = (int)local_520;
              if (uVar21 != 0) {
                lVar28 = *(long *)(uVar21 - 8);
                lVar20 = 0;
                lVar10 = 0;
                do {
                  lVar27 = lVar10;
                  lVar18 = lVar20;
                  if (lVar28 <= lVar18) {
                    lVar28 = lVar28 + 1;
                    goto LAB_00102d61;
                  }
                  lVar20 = lVar18 + 1;
                  lVar10 = lVar27 + 0x18;
                } while (iVar31 != *(int *)(uVar21 + 4 + lVar27));
                if (*(int *)(uVar21 + lVar27) == iVar12) {
                  if (((int *)(uVar21 + lVar27))[2] == (int)local_520) {
                    uVar21 = (ulong)(int)lVar18;
                    if (lVar28 <= (long)uVar21) {
LAB_00102e04:
                      _err_print_index_error
                                ("operator[]","./core/templates/vector.h",0x38,uVar21,lVar28,
                                 "p_index","((Vector<T> *)(this))->_cowdata.size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar7 = (code *)invalidInstructionException();
                      (*pcVar7)();
                    }
                    CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write
                              (this_00);
                    puVar1 = (ulong *)(lVar27 + param_4[7] + 0x10);
                    *puVar1 = *puVar1 | uVar15;
                    goto LAB_0010220c;
                  }
                  local_550 = 0;
                  local_538 = "), but their default values differ.";
                  local_530 = (long *)0x23;
                  String::parse_latin1((StrRange *)&local_550);
                  itos((long)&local_560);
                  operator+((char *)&local_558,
                            (String *)"More than one specialization constant used for id (");
                  String::operator+((String *)&local_538,(String *)&local_558);
                  pcVar24 = 
                  "Condition \"r_reflection.specialization_constants[k].int_value != sconst.int_value\" is true. Returning: FAILED"
                  ;
                  uVar17 = 0x100;
                }
                else {
                  local_550 = 0;
                  local_538 = "), but their types differ.";
                  local_530 = (long *)0x1a;
                  String::parse_latin1((StrRange *)&local_550);
                  itos((long)&local_560);
                  operator+((char *)&local_558,
                            (String *)"More than one specialization constant used for id (");
                  String::operator+((String *)&local_538,(String *)&local_558);
                  pcVar24 = 
                  "Condition \"r_reflection.specialization_constants[k].type != sconst.type\" is true. Returning: FAILED"
                  ;
                  uVar17 = 0xff;
                }
                _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",
                                 uVar17,pcVar24,&local_538,0,0);
                pcVar24 = local_538;
                if (local_538 != (char *)0x0) {
                  LOCK();
                  plVar29 = (long *)(local_538 + -0x10);
                  *plVar29 = *plVar29 + -1;
                  UNLOCK();
                  if (*plVar29 == 0) {
                    local_538 = (char *)0x0;
                    Memory::free_static(pcVar24 + -0x10,false);
                  }
                }
                lVar23 = local_558;
                if (local_558 != 0) {
                  LOCK();
                  plVar29 = (long *)(local_558 + -0x10);
                  *plVar29 = *plVar29 + -1;
                  UNLOCK();
                  if (*plVar29 == 0) {
                    local_558 = 0;
                    Memory::free_static((void *)(lVar23 + -0x10),false);
                  }
                }
                uVar15 = local_560;
                if (local_560 != 0) {
                  LOCK();
                  plVar29 = (long *)(local_560 - 0x10);
                  *plVar29 = *plVar29 + -1;
                  UNLOCK();
                  if (*plVar29 == 0) {
                    local_560 = 0;
                    Memory::free_static((void *)(uVar15 - 0x10),false);
                  }
                }
                lVar23 = local_550;
                if (local_550 != 0) {
                  LOCK();
                  plVar29 = (long *)(local_550 + -0x10);
                  *plVar29 = *plVar29 + -1;
                  UNLOCK();
                  if (*plVar29 == 0) {
                    local_550 = 0;
                    Memory::free_static((void *)(lVar23 + -0x10),false);
                  }
                }
                goto LAB_0010365d;
              }
              lVar28 = 1;
LAB_00102d61:
              iVar14 = CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::resize<false>
                                 (this_00,lVar28);
              if (iVar14 == 0) {
                if (param_4[7] == 0) {
                  lVar28 = 0;
                  lVar20 = -1;
                }
                else {
                  lVar28 = *(long *)(param_4[7] - 8);
                  lVar20 = lVar28 + -1;
                  if (-1 < lVar20) {
                    CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write
                              (this_00);
                    puVar4 = (undefined8 *)(param_4[7] + lVar20 * 0x18);
                    *(int *)(puVar4 + 1) = iVar6;
                    puVar4[2] = uVar15;
                    *puVar4 = CONCAT44(iVar31,iVar12);
                    goto LAB_0010220c;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar20,lVar28,"p_index","size()",
                           "",false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true");
              }
LAB_0010220c:
              uVar21 = (ulong)((int)lVar26 + 1);
              lVar26 = lVar26 + 1;
              if ((uint)local_568 <= (uint)lVar26) goto LAB_001038fa;
              local_520 = local_520 & 0xffffffff00000000;
            } while( true );
          }
          goto LAB_00102e27;
        }
        Vector<RenderingDeviceCommons::ShaderSpecializationConstant>::
        sort_custom<_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,true>
                  ((Vector<RenderingDeviceCommons::ShaderSpecializationConstant> *)(param_4 + 6));
        if (lVar23 == 0) goto LAB_001016e5;
        goto LAB_00103911;
      }
      goto LAB_001016e5;
    }
    local_530 = (long *)0x0;
    CowData<SpvReflectDescriptorBinding*>::resize<false>
              ((CowData<SpvReflectDescriptorBinding*> *)&local_530,(ulong)local_5bc);
    CowData<SpvReflectDescriptorBinding*>::_copy_on_write
              ((CowData<SpvReflectDescriptorBinding*> *)&local_530);
    plVar29 = local_530;
    iVar12 = spvReflectEnumerateDescriptorBindings(local_508,&local_5bc,local_530);
    if (iVar12 == 0) {
      if (local_5bc == 0) {
        if (plVar29 == (long *)0x0) goto LAB_001016ad;
LAB_00101b02:
        LOCK();
        plVar29 = plVar29 + -2;
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (*plVar29 == 0) {
          Memory::free_static(local_530 + -2,false);
        }
        goto LAB_001016ad;
      }
      if (plVar29 != (long *)0x0) {
        uVar21 = 0;
        lVar23 = 0;
        do {
          local_618 = (CowData<char32_t> *)plVar29[-1];
          if ((long)local_618 <= (long)uVar21) goto LAB_0010239d;
          lVar28 = plVar29[lVar23];
          iVar12 = *(int *)(lVar28 + 0x1c);
          switch(iVar12) {
          case 0:
            uVar21 = (ulong)*(uint *)(lVar28 + 0x1a8);
            iVar12 = 0;
            if (*(uint *)(lVar28 + 0x1a8) == 0) {
LAB_00102521:
              local_5f8._0_1_ = 0;
              iVar31 = 1;
              goto LAB_001019e8;
            }
            bVar8 = false;
            goto LAB_001024da;
          case 1:
            uVar5 = *(uint *)(lVar28 + 0x1a8);
            iVar31 = iVar12;
            goto joined_r0x001019dc;
          case 2:
          case 4:
            uVar5 = *(uint *)(lVar28 + 0x1a8);
            iVar31 = 1;
joined_r0x001019dc:
            local_5f8._0_1_ = 0;
            if (uVar5 != 0) {
LAB_00102457:
              uVar21 = (ulong)uVar5;
              bVar8 = false;
LAB_001024da:
              iVar31 = 0;
              uVar19 = 0;
              do {
                if (uVar19 == 0) {
                  iVar31 = *(int *)(lVar28 + 0x1ac);
                }
                else {
                  iVar31 = iVar31 * *(int *)(lVar28 + 0x1ac + uVar19 * 4);
                }
                uVar19 = uVar19 + 1;
              } while (uVar21 != uVar19);
              if (bVar8) {
LAB_001023e0:
                local_5f8._0_1_ = 0;
                if ((*(byte *)(*(long *)(lVar28 + 0x250) + 0x20) & 0x80) == 0) {
                  local_5f8._0_1_ = ((byte)(*(uint *)(lVar28 + 0x60) >> 7) ^ 1) & 1;
                }
              }
              else {
                local_5f8._0_1_ = 0;
              }
            }
LAB_001019e8:
            uVar5 = *(uint *)(lVar28 + 0x18);
            uVar21 = (ulong)uVar5;
            iVar6 = *(int *)(lVar28 + 0x10);
            if (0xf < uVar5) {
              local_528 = ").";
              local_548 = 0;
              local_520 = 2;
              String::parse_latin1((StrRange *)&local_548);
              itos((long)&local_558);
              local_568 = 0;
              local_528 = ") index larger than what is supported (";
              local_520 = 0x27;
              String::parse_latin1((StrRange *)&local_568);
              itos((long)&local_578);
              local_528 = "\' uses a set (";
              local_588 = 0;
              local_520 = 0xe;
              String::parse_latin1((StrRange *)&local_588);
              sVar22 = 0;
              pcVar24 = *(char **)(lVar28 + 8);
              local_598 = 0;
              if (pcVar24 != (char *)0x0) {
                sVar22 = strlen(pcVar24);
              }
              local_528 = pcVar24;
              local_520 = sVar22;
              String::parse_latin1((StrRange *)&local_598);
              local_5a8 = 0;
              local_528 = "\', uniform \'";
              local_520 = 0xc;
              String::parse_latin1((StrRange *)&local_5a8);
              local_5b8 = 0;
              pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[iVar13];
              sVar22 = 0;
              if (pcVar24 != (char *)0x0) {
                sVar22 = strlen(pcVar24);
              }
              local_528 = pcVar24;
              local_520 = sVar22;
              String::parse_latin1((StrRange *)&local_5b8);
              operator+((char *)&local_5b0,(String *)"On shader stage \'");
              String::operator+((String *)&local_5a0,(String *)&local_5b0);
              String::operator+((String *)&local_590,(String *)&local_5a0);
              String::operator+((String *)&local_580,(String *)&local_590);
              String::operator+((String *)&local_570,(String *)&local_580);
              String::operator+((String *)&local_560,(String *)&local_570);
              String::operator+((String *)&local_550,(String *)&local_560);
              String::operator+((String *)&local_528,(String *)&local_550);
              _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0xac
                               ,"Condition \"set >= MAX_UNIFORM_SETS\" is true. Returning: FAILED",
                               (String *)&local_528,0,0);
              pcVar24 = local_528;
              if (local_528 != (char *)0x0) {
                LOCK();
                plVar29 = (long *)(local_528 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_528 = (char *)0x0;
                  Memory::free_static(pcVar24 + -0x10,false);
                }
              }
              lVar23 = local_550;
              if (local_550 != 0) {
                LOCK();
                plVar29 = (long *)(local_550 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_550 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              uVar15 = local_560;
              if (local_560 != 0) {
                LOCK();
                plVar29 = (long *)(local_560 - 0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_560 = 0;
                  Memory::free_static((void *)(uVar15 - 0x10),false);
                }
              }
              lVar23 = local_570;
              if (local_570 != 0) {
                LOCK();
                plVar29 = (long *)(local_570 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_570 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_580;
              if (local_580 != 0) {
                LOCK();
                plVar29 = (long *)(local_580 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_580 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_590;
              if (local_590 != 0) {
                LOCK();
                plVar29 = (long *)(local_590 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_590 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_5a0;
              if (local_5a0 != 0) {
                LOCK();
                plVar29 = (long *)(local_5a0 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_5a0 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_5b0;
              if (local_5b0 != 0) {
                LOCK();
                plVar29 = (long *)(local_5b0 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_5b0 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_5b8;
              if (local_5b8 != 0) {
                LOCK();
                plVar29 = (long *)(local_5b8 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_5b8 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_5a8;
              if (local_5a8 != 0) {
                LOCK();
                plVar29 = (long *)(local_5a8 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_5a8 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_598;
              if (local_598 != 0) {
                LOCK();
                plVar29 = (long *)(local_598 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_598 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_588;
              if (local_588 != 0) {
                LOCK();
                plVar29 = (long *)(local_588 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_588 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              lVar23 = local_578;
              if (local_578 != 0) {
                LOCK();
                plVar29 = (long *)(local_578 + -0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_578 = 0;
                  Memory::free_static((void *)(lVar23 + -0x10),false);
                }
              }
              uVar15 = local_568;
              if (local_568 != 0) {
                LOCK();
                plVar29 = (long *)(local_568 - 0x10);
                *plVar29 = *plVar29 + -1;
                UNLOCK();
                if (*plVar29 == 0) {
                  local_568 = 0;
                  Memory::free_static((void *)(uVar15 - 0x10),false);
                }
              }
              goto LAB_00102cc0;
            }
            uVar19 = param_4[5];
            if ((uVar19 == 0) ||
               (local_618 = *(CowData<char32_t> **)(uVar19 - 8), (uint)local_618 <= uVar5)) {
              CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::resize<false>
                        (this,(ulong)(uVar5 + 1));
              uVar19 = param_4[5];
              if (uVar19 == 0) {
                lVar28 = 0;
                goto LAB_00102e04;
              }
            }
            else {
              if ((long)local_618 <= (long)uVar21) goto LAB_0010239d;
              piVar16 = *(int **)(uVar19 + 8 + uVar21 * 0x10);
              if (piVar16 != (int *)0x0) {
                piVar9 = piVar16;
                uVar11 = 0;
                do {
                  uVar30 = uVar11;
                  piVar25 = piVar9;
                  if (*(long *)(piVar16 + -2) <= (long)uVar30) goto LAB_00101a36;
                  piVar9 = piVar25 + 8;
                  uVar11 = uVar30 + 1;
                } while (iVar6 != piVar25[2]);
                if (*piVar25 == iVar12) {
                  if (piVar25[6] == iVar31) {
                    if (*(byte *)(piVar25 + 1) == (byte)local_5f8) {
                      CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_copy_on_write(this);
                      lVar26 = uVar21 * 0x10 + param_4[5];
                      uVar21 = uVar30;
                      if (*(long *)(lVar26 + 8) == 0) {
                        lVar28 = 0;
                      }
                      else {
                        lVar28 = *(long *)(*(long *)(lVar26 + 8) + -8);
                        if ((long)uVar30 < lVar28) {
                          CowData<RenderingDeviceCommons::ShaderUniform>::_copy_on_write
                                    ((CowData<RenderingDeviceCommons::ShaderUniform> *)(lVar26 + 8))
                          ;
                          puVar1 = (ulong *)(uVar30 * 0x20 + *(long *)(lVar26 + 8) + 0x10);
                          *puVar1 = *puVar1 | uVar15;
                          break;
                        }
                      }
                      goto LAB_00102e04;
                    }
                    local_528 = " with different writability.";
                    local_548 = 0;
                    local_520 = 0x1c;
                    String::parse_latin1((StrRange *)&local_548);
                    itos((long)&local_558);
                    local_568 = 0;
                    local_528 = ", binding=";
                    local_520 = 10;
                    String::parse_latin1((StrRange *)&local_568);
                    itos((long)&local_578);
                    local_528 = "\' trying to reuse location for set=";
                    local_588 = 0;
                    local_520 = 0x23;
                    String::parse_latin1((StrRange *)&local_588);
                    sVar22 = 0;
                    pcVar24 = *(char **)(lVar28 + 8);
                    local_598 = 0;
                    if (pcVar24 != (char *)0x0) {
                      sVar22 = strlen(pcVar24);
                    }
                    local_528 = pcVar24;
                    local_520 = sVar22;
                    String::parse_latin1((StrRange *)&local_598);
                    local_5a8 = 0;
                    local_528 = "\', uniform \'";
                    local_520 = 0xc;
                    String::parse_latin1((StrRange *)&local_5a8);
                    local_5b8 = 0;
                    pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[iVar13];
                    sVar22 = 0;
                    if (pcVar24 != (char *)0x0) {
                      sVar22 = strlen(pcVar24);
                    }
                    local_528 = pcVar24;
                    local_520 = sVar22;
                    String::parse_latin1((StrRange *)&local_5b8);
                    operator+((char *)&local_5b0,(String *)"On shader stage \'");
                    String::operator+((String *)&local_5a0,(String *)&local_5b0);
                    String::operator+((String *)&local_590,(String *)&local_5a0);
                    String::operator+((String *)&local_580,(String *)&local_590);
                    String::operator+((String *)&local_570,(String *)&local_580);
                    String::operator+((String *)&local_560,(String *)&local_570);
                    String::operator+((String *)&local_550,(String *)&local_560);
                    String::operator+((String *)&local_528,(String *)&local_550);
                    pcVar24 = 
                    "Condition \"r_reflection.uniform_sets[set][k].writable != uniform.writable\" is true. Returning: FAILED"
                    ;
                    uVar17 = 0xbd;
                  }
                  else {
                    local_528 = " with different uniform size.";
                    local_548 = 0;
                    local_520 = 0x1d;
                    String::parse_latin1((StrRange *)&local_548);
                    itos((long)&local_558);
                    local_568 = 0;
                    local_528 = ", binding=";
                    local_520 = 10;
                    String::parse_latin1((StrRange *)&local_568);
                    itos((long)&local_578);
                    local_528 = "\' trying to reuse location for set=";
                    local_588 = 0;
                    local_520 = 0x23;
                    String::parse_latin1((StrRange *)&local_588);
                    sVar22 = 0;
                    pcVar24 = *(char **)(lVar28 + 8);
                    local_598 = 0;
                    if (pcVar24 != (char *)0x0) {
                      sVar22 = strlen(pcVar24);
                    }
                    local_528 = pcVar24;
                    local_520 = sVar22;
                    String::parse_latin1((StrRange *)&local_598);
                    local_5a8 = 0;
                    local_528 = "\', uniform \'";
                    local_520 = 0xc;
                    String::parse_latin1((StrRange *)&local_5a8);
                    local_5b8 = 0;
                    pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[iVar13];
                    sVar22 = 0;
                    if (pcVar24 != (char *)0x0) {
                      sVar22 = strlen(pcVar24);
                    }
                    local_528 = pcVar24;
                    local_520 = sVar22;
                    String::parse_latin1((StrRange *)&local_5b8);
                    operator+((char *)&local_5b0,(String *)"On shader stage \'");
                    String::operator+((String *)&local_5a0,(String *)&local_5b0);
                    String::operator+((String *)&local_590,(String *)&local_5a0);
                    String::operator+((String *)&local_580,(String *)&local_590);
                    String::operator+((String *)&local_570,(String *)&local_580);
                    String::operator+((String *)&local_560,(String *)&local_570);
                    String::operator+((String *)&local_550,(String *)&local_560);
                    String::operator+((String *)&local_528,(String *)&local_550);
                    pcVar24 = 
                    "Condition \"r_reflection.uniform_sets[set][k].length != uniform.length\" is true. Returning: FAILED"
                    ;
                    uVar17 = 0xb9;
                  }
                }
                else {
                  local_528 = " with different uniform type.";
                  local_548 = 0;
                  local_520 = 0x1d;
                  String::parse_latin1((StrRange *)&local_548);
                  itos((long)&local_558);
                  local_568 = 0;
                  local_528 = ", binding=";
                  local_520 = 10;
                  String::parse_latin1((StrRange *)&local_568);
                  itos((long)&local_578);
                  local_528 = "\' trying to reuse location for set=";
                  local_588 = 0;
                  local_520 = 0x23;
                  String::parse_latin1((StrRange *)&local_588);
                  sVar22 = 0;
                  pcVar24 = *(char **)(lVar28 + 8);
                  local_598 = 0;
                  if (pcVar24 != (char *)0x0) {
                    sVar22 = strlen(pcVar24);
                  }
                  local_528 = pcVar24;
                  local_520 = sVar22;
                  String::parse_latin1((StrRange *)&local_598);
                  local_5a8 = 0;
                  local_528 = "\', uniform \'";
                  local_520 = 0xc;
                  String::parse_latin1((StrRange *)&local_5a8);
                  local_5b8 = 0;
                  pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[iVar13];
                  sVar22 = 0;
                  if (pcVar24 != (char *)0x0) {
                    sVar22 = strlen(pcVar24);
                  }
                  local_528 = pcVar24;
                  local_520 = sVar22;
                  String::parse_latin1((StrRange *)&local_5b8);
                  operator+((char *)&local_5b0,(String *)"On shader stage \'");
                  String::operator+((String *)&local_5a0,(String *)&local_5b0);
                  String::operator+((String *)&local_590,(String *)&local_5a0);
                  String::operator+((String *)&local_580,(String *)&local_590);
                  String::operator+((String *)&local_570,(String *)&local_580);
                  String::operator+((String *)&local_560,(String *)&local_570);
                  String::operator+((String *)&local_550,(String *)&local_560);
                  String::operator+((String *)&local_528,(String *)&local_550);
                  pcVar24 = 
                  "Condition \"r_reflection.uniform_sets[set][k].type != uniform.type\" is true. Returning: FAILED"
                  ;
                  uVar17 = 0xb5;
                }
                local_5d8 = (CowData<char32_t> *)&local_550;
                local_5e0 = (CowData<char32_t> *)&local_560;
                local_5e8 = (CowData<char32_t> *)&local_570;
                local_5f0 = (CowData<char32_t> *)&local_580;
                local_5f8 = (CowData<char32_t> *)&local_590;
                local_600 = (CowData<char32_t> *)&local_5a0;
                local_608 = (CowData<char32_t> *)&local_5b0;
                local_610 = (CowData<char32_t> *)&local_5b8;
                local_618 = (CowData<char32_t> *)&local_558;
                local_620 = (CowData<char32_t> *)&local_568;
                local_628 = (CowData<char32_t> *)&local_5a8;
                _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",
                                 uVar17,pcVar24,(CowData<char32_t> *)&local_528,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
                CowData<char32_t>::_unref(local_5d8);
                CowData<char32_t>::_unref(local_5e0);
                CowData<char32_t>::_unref(local_5e8);
                CowData<char32_t>::_unref(local_5f0);
                CowData<char32_t>::_unref(local_5f8);
                CowData<char32_t>::_unref(local_600);
                CowData<char32_t>::_unref(local_608);
                CowData<char32_t>::_unref(local_610);
                CowData<char32_t>::_unref(local_628);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_598);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_588);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_578);
                CowData<char32_t>::_unref(local_620);
                CowData<char32_t>::_unref(local_618);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_548);
                goto LAB_00102d39;
              }
            }
LAB_00101a36:
            lVar28 = *(long *)(uVar19 - 8);
            if (lVar28 <= (long)uVar21) goto LAB_00102e04;
            CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_copy_on_write(this);
            lVar28 = uVar21 * 0x10 + param_4[5];
            if (*(long *)(lVar28 + 8) == 0) {
              lVar26 = 1;
            }
            else {
              lVar26 = *(long *)(*(long *)(lVar28 + 8) + -8) + 1;
            }
            iVar14 = CowData<RenderingDeviceCommons::ShaderUniform>::resize<false>
                               ((CowData<RenderingDeviceCommons::ShaderUniform> *)(lVar28 + 8),
                                lVar26);
            if (iVar14 == 0) {
              if (*(long *)(lVar28 + 8) == 0) {
                local_5f0 = (CowData<char32_t> *)0xffffffffffffffff;
                lVar26 = 0;
              }
              else {
                lVar26 = *(long *)(*(long *)(lVar28 + 8) + -8);
                local_5f0 = (CowData<char32_t> *)(lVar26 + -1);
                if (-1 < (long)local_5f0) {
                  CowData<RenderingDeviceCommons::ShaderUniform>::_copy_on_write
                            ((CowData<RenderingDeviceCommons::ShaderUniform> *)(lVar28 + 8));
                  piVar16 = (int *)((long)local_5f0 * 0x20 + *(long *)(lVar28 + 8));
                  *piVar16 = iVar12;
                  piVar16[2] = iVar6;
                  *(byte *)(piVar16 + 1) = (byte)local_5f8;
                  piVar16[6] = iVar31;
                  *(ulong *)(piVar16 + 4) = uVar15;
                  break;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,(long)local_5f0,lVar26,"p_index",
                         "size()","",false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true");
            }
            break;
          case 3:
            uVar5 = *(uint *)(lVar28 + 0x1a8);
            goto joined_r0x001023d5;
          case 5:
            uVar5 = *(uint *)(lVar28 + 0x1a8);
            iVar12 = 6;
joined_r0x001023d5:
            iVar31 = 1;
            if (uVar5 != 0) {
              uVar21 = (ulong)uVar5;
              bVar8 = true;
              goto LAB_001024da;
            }
            goto LAB_001023e0;
          case 6:
            local_5f8._0_1_ = 0;
            iVar31 = *(int *)(lVar28 + 0x58);
            iVar12 = 7;
            goto LAB_001019e8;
          case 7:
            iVar31 = *(int *)(lVar28 + 0x58);
            iVar12 = 8;
            goto LAB_001023e0;
          case 8:
            _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0x7f,
                             "Dynamic uniform buffer not supported.");
            break;
          case 9:
            _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0x83,
                             "Dynamic storage buffer not supported.");
            break;
          case 10:
            uVar5 = *(uint *)(lVar28 + 0x1a8);
            iVar12 = 9;
            if (uVar5 == 0) goto LAB_00102521;
            goto LAB_00102457;
          default:
            if (iVar12 != 0x3b9d13f0) {
              local_5f8._0_1_ = 0;
              iVar31 = 0;
              iVar12 = 10;
              goto LAB_001019e8;
            }
            _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0x8b,
                             "Acceleration structure not supported.");
          }
          uVar21 = (ulong)((int)lVar23 + 1);
          lVar23 = lVar23 + 1;
        } while ((uint)lVar23 < local_5bc);
        goto LAB_00101b02;
      }
      goto LAB_00102e27;
    }
    local_548 = 0;
    local_520 = 0x25;
    local_528 = "\' failed getting descriptor bindings.";
    String::parse_latin1((StrRange *)&local_548);
    local_558 = 0;
    pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
    sVar22 = 0;
    if (pcVar24 != (char *)0x0) {
      sVar22 = strlen(pcVar24);
    }
    local_528 = pcVar24;
    local_520 = sVar22;
    String::parse_latin1((StrRange *)&local_558);
    operator+((char *)&local_550,(String *)"Reflection of SPIR-V shader stage \'");
    String::operator+((String *)&local_528,(String *)&local_550);
    uVar17 = 0x4e;
    goto LAB_0010301e;
  }
  _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0x30,
                   "Condition \"p_spirv.size() != 1\" is true. Returning: FAILED",
                   "Compute shaders can only receive one stage, dedicated to compute.",0,0);
  goto LAB_00101df5;
LAB_001038fa:
  Vector<RenderingDeviceCommons::ShaderSpecializationConstant>::
  sort_custom<_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,true>
            ((Vector<RenderingDeviceCommons::ShaderSpecializationConstant> *)(param_4 + 6));
LAB_00103911:
  LOCK();
  plVar29 = (long *)(lVar23 + -0x10);
  *plVar29 = *plVar29 + -1;
  UNLOCK();
  if (*plVar29 == 0) {
    Memory::free_static((void *)(local_540 + -0x10),false);
  }
LAB_001016e5:
  if (iVar13 == 0) {
    local_560 = (ulong)local_560._4_4_ << 0x20;
    iVar13 = spvReflectEnumerateInputVariables(local_508,&local_560,0);
    if (iVar13 == 0) {
      if ((int)local_560 != 0) {
        local_530 = (long *)0x0;
        CowData<SpvReflectInterfaceVariable*>::resize<false>
                  ((CowData<SpvReflectInterfaceVariable*> *)&local_530,local_560 & 0xffffffff);
        CowData<SpvReflectInterfaceVariable*>::_copy_on_write
                  ((CowData<SpvReflectInterfaceVariable*> *)&local_530);
        plVar29 = local_530;
        iVar13 = spvReflectEnumerateInputVariables(local_508,&local_560,local_530);
        if (iVar13 == 0) {
          if ((int)local_560 == 0) {
            if (plVar29 == (long *)0x0) goto LAB_0010172e;
          }
          else {
            if (plVar29 == (long *)0x0) {
LAB_00102e27:
              uVar21 = 0;
              local_618 = (CowData<char32_t> *)0x0;
              goto LAB_0010239d;
            }
            uVar21 = 0;
            do {
              local_618 = (CowData<char32_t> *)plVar29[-1];
              if ((long)local_618 <= (long)uVar21) goto LAB_0010239d;
              lVar23 = plVar29[uVar21];
              if ((lVar23 != 0) && (*(int *)(lVar23 + 0x28) == 0)) {
                *param_4 = *param_4 | 1L << ((byte)*(undefined4 *)(lVar23 + 0x10) & 0x3f);
              }
              uVar21 = uVar21 + 1;
            } while ((local_560 & 0xffffffff) != uVar21);
          }
          LOCK();
          plVar29 = plVar29 + -2;
          *plVar29 = *plVar29 + -1;
          lVar23 = *plVar29;
          UNLOCK();
joined_r0x0010326e:
          if (lVar23 == 0) {
            Memory::free_static(local_530 + -2,false);
          }
          goto LAB_0010172e;
        }
        local_548 = 0;
        local_520 = 0x23;
        local_528 = "\' failed obtaining input variables.";
        String::parse_latin1((StrRange *)&local_548);
        local_558 = 0;
        pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
        sVar22 = 0;
        if (pcVar24 != (char *)0x0) {
          sVar22 = strlen(pcVar24);
        }
        local_528 = pcVar24;
        local_520 = sVar22;
        String::parse_latin1((StrRange *)&local_558);
        operator+((char *)&local_550,(String *)"Reflection of SPIR-V shader stage \'");
        String::operator+((String *)&local_528,(String *)&local_550);
        _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0x11c,
                         "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED"
                         ,(String *)&local_528,0,0);
        pcVar24 = local_528;
        if (local_528 != (char *)0x0) {
          LOCK();
          plVar29 = (long *)(local_528 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_528 = (char *)0x0;
            Memory::free_static(pcVar24 + -0x10,false);
          }
        }
        lVar23 = local_550;
        if (local_550 != 0) {
          LOCK();
          plVar29 = (long *)(local_550 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_550 = 0;
            Memory::free_static((void *)(lVar23 + -0x10),false);
          }
        }
        lVar23 = local_558;
        if (local_558 != 0) {
          LOCK();
          plVar29 = (long *)(local_558 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_558 = 0;
            Memory::free_static((void *)(lVar23 + -0x10),false);
          }
        }
        lVar23 = local_548;
        if (local_548 != 0) {
          LOCK();
          plVar29 = (long *)(local_548 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_548 = 0;
            Memory::free_static((void *)(lVar23 + -0x10),false);
          }
        }
        if (local_530 == (long *)0x0) goto LAB_00101df5;
        LOCK();
        plVar29 = local_530 + -2;
        *plVar29 = *plVar29 + -1;
        lVar23 = *plVar29;
        UNLOCK();
        goto joined_r0x00103b88;
      }
LAB_0010172e:
      local_560 = local_560 & 0xffffffff00000000;
      iVar13 = spvReflectEnumeratePushConstantBlocks(local_508,&local_560,0);
      if (iVar13 == 0) {
        if ((int)local_560 == 0) goto LAB_00101800;
        if ((int)local_560 == 1) {
          local_530 = (long *)0x0;
          CowData<SpvReflectBlockVariable*>::resize<false>
                    ((CowData<SpvReflectBlockVariable*> *)&local_530,1);
          CowData<SpvReflectBlockVariable*>::_copy_on_write
                    ((CowData<SpvReflectBlockVariable*> *)&local_530);
          plVar29 = local_530;
          iVar13 = spvReflectEnumeratePushConstantBlocks(local_508,&local_560,local_530);
          if (iVar13 != 0) {
            local_548 = 0;
            local_520 = 0x22;
            local_528 = "\' failed obtaining push constants.";
            String::parse_latin1((StrRange *)&local_548);
            local_558 = 0;
            pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
            sVar22 = 0;
            if (pcVar24 != (char *)0x0) {
              sVar22 = strlen(pcVar24);
            }
            local_528 = pcVar24;
            local_520 = sVar22;
            String::parse_latin1((StrRange *)&local_558);
            operator+((char *)&local_550,(String *)"Reflection of SPIR-V shader stage \'");
            String::operator+((String *)&local_528,(String *)&local_550);
            uVar17 = 0x14a;
LAB_0010301e:
            _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",uVar17
                             ,
                             "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED"
                             ,&local_528,0,0);
            pcVar24 = local_528;
            if (local_528 != (char *)0x0) {
              LOCK();
              plVar29 = (long *)(local_528 + -0x10);
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (*plVar29 == 0) {
                local_528 = (char *)0x0;
                Memory::free_static(pcVar24 + -0x10,false);
              }
            }
            lVar23 = local_550;
            if (local_550 != 0) {
              LOCK();
              plVar29 = (long *)(local_550 + -0x10);
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (*plVar29 == 0) {
                local_550 = 0;
                Memory::free_static((void *)(lVar23 + -0x10),false);
              }
            }
LAB_00102cc0:
            lVar23 = local_558;
            if (local_558 != 0) {
              LOCK();
              plVar29 = (long *)(local_558 + -0x10);
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (*plVar29 == 0) {
                local_558 = 0;
                Memory::free_static((void *)(lVar23 + -0x10),false);
              }
            }
            lVar23 = local_548;
            plVar29 = local_530;
            if (local_548 != 0) {
              LOCK();
              plVar2 = (long *)(local_548 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_548 = 0;
                Memory::free_static((void *)(lVar23 + -0x10),false);
                plVar29 = local_530;
              }
            }
            goto joined_r0x00103ce9;
          }
          local_618 = (CowData<char32_t> *)0x0;
          if (*(int *)((long)param_4 + 0x1c) == 0) {
            if ((plVar29 != (long *)0x0) &&
               (local_618 = (CowData<char32_t> *)plVar29[-1], 0 < (long)local_618)) {
              iVar13 = *(int *)(*plVar29 + 0x18);
LAB_001017dd:
              param_4[0xb] = param_4[0xb] | uVar15;
              *(int *)((long)param_4 + 0x1c) = iVar13;
              LOCK();
              plVar29 = plVar29 + -2;
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (*plVar29 == 0) {
                Memory::free_static(local_530 + -2,false);
              }
LAB_00101800:
              param_2 = param_2 + 6;
              spvReflectDestroyShaderModule();
              param_4[10] = param_4[10] | uVar15;
              if (param_2 == piVar3) goto LAB_0010181f;
              goto LAB_0010160c;
            }
          }
          else if ((plVar29 != (long *)0x0) &&
                  (local_618 = (CowData<char32_t> *)plVar29[-1], 0 < (long)local_618)) {
            iVar13 = *(int *)(*plVar29 + 0x18);
            if (*(int *)((long)param_4 + 0x1c) != iVar13) {
              local_548 = 0;
              local_520 = 0x3d;
              local_528 = "\': Push constant block must be the same across shader stages.";
              String::parse_latin1((StrRange *)&local_548);
              local_558 = 0;
              pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
              sVar22 = 0;
              if (pcVar24 != (char *)0x0) {
                sVar22 = strlen(pcVar24);
              }
              local_528 = pcVar24;
              local_520 = sVar22;
              String::parse_latin1((StrRange *)&local_558);
              operator+((char *)&local_550,(String *)"Reflection of SPIR-V shader stage \'");
              String::operator+((String *)&local_528,(String *)&local_550);
              _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",
                               0x153,
                               "Condition \"r_reflection.push_constant_size && r_reflection.push_constant_size != pconstants[0]->size\" is true. Returning: FAILED"
                               ,(String *)&local_528,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_550);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_558);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_548);
              goto LAB_00102d39;
            }
            goto LAB_001017dd;
          }
          uVar21 = 0;
LAB_0010239d:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar21,(long)local_618,"p_index",
                     "size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        local_538 = (char *)0x0;
        local_520 = 0x56;
        local_528 = 
        "\': Only one push constant is supported, which should be the same across shader stages.";
        String::parse_latin1((StrRange *)&local_538);
        local_550 = 0;
        pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
        sVar22 = 0;
        if (pcVar24 != (char *)0x0) {
          sVar22 = strlen(pcVar24);
        }
        local_528 = pcVar24;
        local_520 = sVar22;
        String::parse_latin1((StrRange *)&local_550);
        operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
        String::operator+((String *)&local_528,(String *)&local_548);
        pcVar24 = "Condition \"pc_count > 1\" is true. Returning: FAILED";
        uVar17 = 0x144;
      }
      else {
        local_538 = (char *)0x0;
        local_520 = 0x24;
        local_528 = "\' failed enumerating push constants.";
        String::parse_latin1((StrRange *)&local_538);
        local_550 = 0;
        pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
        sVar22 = 0;
        if (pcVar24 != (char *)0x0) {
          sVar22 = strlen(pcVar24);
        }
        local_528 = pcVar24;
        local_520 = sVar22;
        String::parse_latin1((StrRange *)&local_550);
        operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
        String::operator+((String *)&local_528,(String *)&local_548);
        pcVar24 = "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED";
        uVar17 = 0x140;
      }
    }
    else {
      local_538 = (char *)0x0;
      local_520 = 0x25;
      local_528 = "\' failed enumerating input variables.";
      String::parse_latin1((StrRange *)&local_538);
      local_550 = 0;
      pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
      sVar22 = 0;
      if (pcVar24 != (char *)0x0) {
        sVar22 = strlen(pcVar24);
      }
      local_528 = pcVar24;
      local_520 = sVar22;
      String::parse_latin1((StrRange *)&local_550);
      operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
      String::operator+((String *)&local_528,(String *)&local_548);
      pcVar24 = "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED";
      uVar17 = 0x114;
    }
LAB_00101d0f:
    _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",uVar17,pcVar24
                     ,&local_528,0,0);
    pcVar24 = local_528;
    if (local_528 != (char *)0x0) {
      LOCK();
      plVar29 = (long *)(local_528 + -0x10);
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (*plVar29 == 0) {
        local_528 = (char *)0x0;
        Memory::free_static(pcVar24 + -0x10,false);
      }
    }
    lVar23 = local_548;
    if (local_548 != 0) {
      LOCK();
      plVar29 = (long *)(local_548 + -0x10);
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (*plVar29 == 0) {
        local_548 = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    lVar23 = local_550;
    if (local_550 != 0) {
      LOCK();
      plVar29 = (long *)(local_550 + -0x10);
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (*plVar29 == 0) {
        local_550 = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    pcVar24 = local_538;
    if (local_538 != (char *)0x0) {
      LOCK();
      plVar29 = (long *)(local_538 + -0x10);
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (*plVar29 == 0) {
        local_538 = (char *)0x0;
        Memory::free_static(pcVar24 + -0x10,false);
      }
    }
  }
  else {
    if (iVar13 != 1) goto LAB_0010172e;
    local_560 = (ulong)local_560._4_4_ << 0x20;
    iVar13 = spvReflectEnumerateOutputVariables(local_508,&local_560,0);
    if (iVar13 != 0) {
      local_538 = (char *)0x0;
      local_520 = 0x26;
      local_528 = "\' failed enumerating output variables.";
      String::parse_latin1((StrRange *)&local_538);
      local_550 = 0;
      pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
      sVar22 = 0;
      if (pcVar24 != (char *)0x0) {
        sVar22 = strlen(pcVar24);
      }
      local_528 = pcVar24;
      local_520 = sVar22;
      String::parse_latin1((StrRange *)&local_550);
      operator+((char *)&local_548,(String *)"Reflection of SPIR-V shader stage \'");
      String::operator+((String *)&local_528,(String *)&local_548);
      pcVar24 = "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED";
      uVar17 = 0x12a;
      goto LAB_00101d0f;
    }
    if ((int)local_560 == 0) goto LAB_0010172e;
    local_530 = (long *)0x0;
    CowData<SpvReflectInterfaceVariable*>::resize<false>
              ((CowData<SpvReflectInterfaceVariable*> *)&local_530,local_560 & 0xffffffff);
    CowData<SpvReflectInterfaceVariable*>::_copy_on_write
              ((CowData<SpvReflectInterfaceVariable*> *)&local_530);
    plVar29 = local_530;
    iVar13 = spvReflectEnumerateOutputVariables(local_508,&local_560,local_530);
    if (iVar13 == 0) {
      if ((int)local_560 == 0) {
        if (plVar29 == (long *)0x0) goto LAB_0010172e;
      }
      else {
        if (plVar29 == (long *)0x0) goto LAB_00102e27;
        local_618 = (CowData<char32_t> *)plVar29[-1];
        uVar21 = 0;
        do {
          if ((long)local_618 <= (long)uVar21) goto LAB_0010239d;
          lVar23 = plVar29[uVar21];
          if ((lVar23 != 0) && (*(int *)(lVar23 + 0x2c) != 0x16)) {
            *(uint *)(param_4 + 1) =
                 (uint)param_4[1] | 1 << ((byte)*(undefined4 *)(lVar23 + 0x10) & 0x1f);
          }
          uVar21 = uVar21 + 1;
        } while ((local_560 & 0xffffffff) != uVar21);
      }
      LOCK();
      plVar29 = plVar29 + -2;
      *plVar29 = *plVar29 + -1;
      lVar23 = *plVar29;
      UNLOCK();
      goto joined_r0x0010326e;
    }
    local_548 = 0;
    local_520 = 0x24;
    local_528 = "\' failed obtaining output variables.";
    String::parse_latin1((StrRange *)&local_548);
    local_558 = 0;
    pcVar24 = (char *)(&RenderingDeviceCommons::SHADER_STAGE_NAMES)[*param_2];
    sVar22 = 0;
    if (pcVar24 != (char *)0x0) {
      sVar22 = strlen(pcVar24);
    }
    local_528 = pcVar24;
    local_520 = sVar22;
    String::parse_latin1((StrRange *)&local_558);
    operator+((char *)&local_550,(String *)"Reflection of SPIR-V shader stage \'");
    String::operator+((String *)&local_528,(String *)&local_550);
    _err_print_error("_reflect_spirv","servers/rendering/rendering_device_driver.cpp",0x132,
                     "Condition \"result != SPV_REFLECT_RESULT_SUCCESS\" is true. Returning: FAILED"
                     ,(String *)&local_528,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_528);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_550);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_558);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_548);
joined_r0x00103ce9:
    if (plVar29 == (long *)0x0) goto LAB_00101df5;
LAB_00102d39:
    LOCK();
    plVar29 = plVar29 + -2;
    *plVar29 = *plVar29 + -1;
    lVar23 = *plVar29;
    UNLOCK();
joined_r0x00103b88:
    if (lVar23 == 0) {
      Memory::free_static(local_530 + -2,false);
    }
  }
LAB_00101df5:
  uVar17 = 1;
  goto LAB_00101dfa;
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



/* Object::_setv(StringName const&, Variant const&) */

undefined8 Object::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_getv(StringName const&, Variant&) const */

undefined8 Object::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Object::_get_property_listv(List *param_1,bool param_2)

{
  return;
}



/* Object::_validate_propertyv(PropertyInfo&) const */

void Object::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revertv(StringName const&) const */

undefined8 Object::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Object::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notificationv(int, bool) */

void Object::_notificationv(int param_1,bool param_2)

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



/* Object::is_class_ptr(void*) const */

undefined8 __thiscall Object::is_class_ptr(Object *this,void *param_1)

{
  return CONCAT71(0x1072,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RenderingDeviceDriver::swap_chain_get_pre_rotation_degrees(RenderingDeviceDriver::SwapChainID) */

undefined8 RenderingDeviceDriver::swap_chain_get_pre_rotation_degrees(void)

{
  return 0;
}



/* RenderingDeviceDriver::swap_chain_set_max_fps(RenderingDeviceDriver::SwapChainID, int) */

void RenderingDeviceDriver::swap_chain_set_max_fps(void)

{
  return;
}



/* RenderingDeviceDriver::shader_get_layout_hash(RenderingDeviceDriver::ShaderID) */

undefined8 RenderingDeviceDriver::shader_get_layout_hash(void)

{
  return 0;
}



/* RenderingDeviceDriver::linear_uniform_set_pools_reset(int) */

void RenderingDeviceDriver::linear_uniform_set_pools_reset(int param_1)

{
  return;
}



/* RenderingDeviceDriver::uniform_sets_have_linear_pools() const */

undefined8 RenderingDeviceDriver::uniform_sets_have_linear_pools(void)

{
  return 0;
}



/* RenderingDeviceDriver::is_composite_alpha_supported(RenderingDeviceDriver::CommandQueueID) const
    */

undefined8 RenderingDeviceDriver::is_composite_alpha_supported(void)

{
  return 0;
}



/* RenderingDeviceCommons::~RenderingDeviceCommons() */

void __thiscall RenderingDeviceCommons::~RenderingDeviceCommons(RenderingDeviceCommons *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106bb0;
  Object::~Object((Object *)this);
  return;
}



/* Object::_initialize_classv() */

void Object::_initialize_classv(void)

{
  Object::initialize_class();
  return;
}



/* RenderingDeviceCommons::~RenderingDeviceCommons() */

void __thiscall RenderingDeviceCommons::~RenderingDeviceCommons(RenderingDeviceCommons *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106bb0;
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* CowData<RenderingDeviceCommons::ShaderUniform>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::ShaderUniform>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SpvReflectSpecializationConstant*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SpvReflectSpecializationConstant*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SpvReflectBlockVariable*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SpvReflectBlockVariable*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SpvReflectDescriptorBinding*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SpvReflectDescriptorBinding*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SpvReflectInterfaceVariable*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SpvReflectInterfaceVariable*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<RenderingDeviceCommons::ShaderUniform> >::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<SpvReflectDescriptorBinding*>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<SpvReflectDescriptorBinding*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105318(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector<RenderingDeviceCommons::ShaderUniform> >::resize<false>(long) [clone
   .isra.0] [clone .cold] */

void CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0010533a(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<SpvReflectSpecializationConstant*>::resize<false>(long) [clone .isra.0] [clone
   .cold] */

void CowData<SpvReflectSpecializationConstant*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105350(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<SpvReflectInterfaceVariable*>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<SpvReflectInterfaceVariable*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105368(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<SpvReflectBlockVariable*>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<SpvReflectBlockVariable*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105380(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Object::_get_class_namev() const */

undefined8 * Object::_get_class_namev(void)

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
LAB_001053d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001053d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Object");
      goto LAB_0010543e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Object");
LAB_0010543e:
  return &_get_class_namev()::_class_name_static;
}



/* SortArray<RenderingDeviceCommons::ShaderSpecializationConstant,
   _DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>, true>::introsort(long,
   long, RenderingDeviceCommons::ShaderSpecializationConstant*, long) const [clone .isra.0] */

void SortArray<RenderingDeviceCommons::ShaderSpecializationConstant,_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,true>
     ::introsort(long param_1,long param_2,ShaderSpecializationConstant *param_3,long param_4)

{
  ShaderSpecializationConstant *pSVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ShaderSpecializationConstant *pSVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ShaderSpecializationConstant *pSVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ShaderSpecializationConstant *pSVar18;
  bool bVar19;
  uint uStack_74;
  
  lVar11 = param_2 - param_1;
  if (lVar11 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar17 = param_2;
LAB_0010552f:
    param_4 = param_4 + -1;
    uVar16 = *(uint *)(param_3 + param_1 * 0x18 + 4);
    uVar2 = *(uint *)(param_3 + ((lVar11 >> 1) + param_1) * 0x18 + 4);
    uVar3 = *(uint *)(param_3 + lVar17 * 0x18 + -0x14);
    if (uVar16 < uVar2) {
      if (uVar16 < uVar3) {
        uVar16 = uVar3;
      }
      if (uVar2 < uVar3) {
        uVar16 = uVar2;
      }
    }
    else {
      if (uVar2 < uVar3) {
        uVar2 = uVar3;
      }
      if (uVar3 <= uVar16) {
        uVar16 = uVar2;
      }
    }
    lVar11 = lVar17;
    pSVar18 = param_3 + param_1 * 0x18;
    param_2 = param_1;
    do {
      if (*(uint *)(pSVar18 + 4) < uVar16) {
        if (lVar17 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_001055ac;
        }
      }
      else {
LAB_001055ac:
        lVar11 = lVar11 + -1;
        pSVar14 = param_3 + lVar11 * 0x18;
        if (uVar16 < *(uint *)(pSVar14 + 4)) {
          pSVar10 = param_3 + lVar11 * 0x18 + -0x18;
          while (param_1 != lVar11) {
            lVar11 = lVar11 + -1;
            pSVar14 = pSVar10;
            if (*(uint *)(pSVar10 + 4) <= uVar16) goto LAB_0010561f;
            pSVar10 = pSVar10 + -0x18;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
        }
LAB_0010561f:
        if (lVar11 <= param_2) goto LAB_00105660;
        uVar5 = *(undefined8 *)(pSVar14 + 8);
        uVar6 = *(undefined8 *)pSVar18;
        uVar7 = *(undefined8 *)(pSVar18 + 8);
        uVar4 = *(undefined8 *)(pSVar18 + 0x10);
        *(undefined8 *)pSVar18 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar18 + 8) = uVar5;
        *(undefined8 *)(pSVar18 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
        *(undefined8 *)(pSVar14 + 0x10) = uVar4;
        *(undefined8 *)pSVar14 = uVar6;
        *(undefined8 *)(pSVar14 + 8) = uVar7;
      }
      pSVar18 = pSVar18 + 0x18;
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_001058a0:
  lVar15 = lVar11 + -2 >> 1;
  lVar17 = lVar15 * 2 + 2;
  pSVar18 = param_3 + (param_1 + lVar15) * 0x18;
  do {
    uVar5 = *(undefined8 *)pSVar18;
    uVar6 = *(undefined8 *)(pSVar18 + 8);
    uVar4 = *(undefined8 *)(pSVar18 + 0x10);
    uStack_74 = (uint)((ulong)uVar5 >> 0x20);
    lVar8 = lVar17;
    lVar13 = lVar15;
    if (lVar17 < lVar11) {
      do {
        lVar9 = lVar8 + -1;
        lVar12 = lVar8;
        pSVar14 = param_3 + (param_1 + lVar8 + -1) * 0x18;
        if (*(uint *)(param_3 + (param_1 + lVar8 + -1) * 0x18 + 4) <=
            *(uint *)(param_3 + (param_1 + lVar8) * 0x18 + 4)) {
          lVar12 = lVar8 + 1;
          lVar9 = lVar8;
          pSVar14 = param_3 + (param_1 + lVar8) * 0x18;
        }
        uVar7 = *(undefined8 *)(pSVar14 + 8);
        lVar8 = lVar12 * 2;
        pSVar10 = param_3 + (lVar13 + param_1) * 0x18;
        *(undefined8 *)pSVar10 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar10 + 8) = uVar7;
        *(undefined8 *)(pSVar10 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
        lVar13 = lVar9;
      } while (lVar11 != lVar8 && SBORROW8(lVar11,lVar8) == lVar11 + lVar12 * -2 < 0);
      pSVar10 = pSVar14;
      if (lVar11 == lVar8) {
LAB_00105a10:
        lVar9 = lVar8 + -1;
        pSVar14 = param_3 + (param_1 + lVar9) * 0x18;
        uVar7 = *(undefined8 *)(pSVar14 + 8);
        *(undefined8 *)pSVar10 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar10 + 8) = uVar7;
        *(undefined8 *)(pSVar10 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
      }
      lVar8 = lVar9 + -1;
      if (lVar9 <= lVar15) goto LAB_00105ac4;
      do {
        lVar13 = lVar8 >> 1;
        pSVar14 = param_3 + (param_1 + lVar13) * 0x18;
        pSVar10 = param_3 + (lVar9 + param_1) * 0x18;
        if (uStack_74 <= *(uint *)(pSVar14 + 4)) break;
        uVar7 = *(undefined8 *)(pSVar14 + 8);
        *(undefined8 *)pSVar10 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar10 + 8) = uVar7;
        *(undefined8 *)(pSVar10 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
        lVar8 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
        pSVar10 = pSVar14;
        lVar9 = lVar13;
      } while (lVar15 < lVar13);
      *(undefined8 *)(pSVar10 + 0x10) = uVar4;
      *(undefined8 *)pSVar10 = uVar5;
      *(undefined8 *)(pSVar10 + 8) = uVar6;
      if (lVar15 == 0) goto LAB_001056ff;
    }
    else {
      pSVar10 = pSVar18;
      pSVar14 = pSVar18;
      if (lVar17 == lVar11) goto LAB_00105a10;
LAB_00105ac4:
      *(undefined8 *)(pSVar14 + 0x10) = uVar4;
      *(undefined8 *)pSVar14 = uVar5;
      *(undefined8 *)(pSVar14 + 8) = uVar6;
    }
    lVar15 = lVar15 + -1;
    pSVar18 = pSVar18 + -0x18;
    lVar17 = lVar17 + -2;
  } while( true );
LAB_00105660:
  introsort(param_2,lVar17,param_3,param_4);
  lVar11 = param_2 - param_1;
  if (lVar11 < 0x11) {
    return;
  }
  lVar17 = param_2;
  if (param_4 == 0) goto LAB_001058a0;
  goto LAB_0010552f;
LAB_001056ff:
  pSVar18 = param_3 + param_1 * 0x18;
  pSVar14 = param_3 + (param_2 + -1) * 0x18 + -0x18;
  lVar11 = (param_2 + -1) - param_1;
  do {
    uVar5 = *(undefined8 *)(pSVar18 + 8);
    uVar6 = *(undefined8 *)(pSVar14 + 0x18);
    uVar7 = *(undefined8 *)(pSVar14 + 0x20);
    uVar4 = *(undefined8 *)(pSVar14 + 0x28);
    *(undefined8 *)(pSVar14 + 0x18) = *(undefined8 *)pSVar18;
    *(undefined8 *)(pSVar14 + 0x20) = uVar5;
    *(undefined8 *)(pSVar14 + 0x28) = *(undefined8 *)(pSVar18 + 0x10);
    uStack_74 = (uint)((ulong)uVar6 >> 0x20);
    if (lVar11 < 3) {
      pSVar10 = pSVar18;
      if (lVar11 == 2) goto LAB_00105a48;
    }
    else {
      lVar17 = 2;
      lVar15 = 0;
      do {
        lVar8 = lVar17 + -1;
        lVar13 = lVar17;
        pSVar10 = param_3 + (param_1 + lVar17 + -1) * 0x18;
        if (*(uint *)(param_3 + (param_1 + lVar17 + -1) * 0x18 + 4) <=
            *(uint *)(param_3 + (param_1 + lVar17) * 0x18 + 4)) {
          lVar13 = lVar17 + 1;
          lVar8 = lVar17;
          pSVar10 = param_3 + (param_1 + lVar17) * 0x18;
        }
        uVar5 = *(undefined8 *)(pSVar10 + 8);
        lVar17 = lVar13 * 2;
        pSVar1 = param_3 + (lVar15 + param_1) * 0x18;
        *(undefined8 *)pSVar1 = *(undefined8 *)pSVar10;
        *(undefined8 *)(pSVar1 + 8) = uVar5;
        *(undefined8 *)(pSVar1 + 0x10) = *(undefined8 *)(pSVar10 + 0x10);
        lVar15 = lVar8;
      } while (lVar17 < lVar11);
      if (lVar17 == lVar11) {
LAB_00105a48:
        uVar5 = *(undefined8 *)(pSVar14 + 8);
        *(undefined8 *)pSVar10 = *(undefined8 *)pSVar14;
        *(undefined8 *)(pSVar10 + 8) = uVar5;
        *(undefined8 *)(pSVar10 + 0x10) = *(undefined8 *)(pSVar14 + 0x10);
        lVar8 = lVar11 + -1;
        lVar17 = lVar11 + -2 >> 1;
      }
      else {
        lVar17 = (lVar8 + -1) / 2;
        if (lVar8 == 0) goto LAB_0010584f;
      }
      do {
        pSVar1 = param_3 + (param_1 + lVar17) * 0x18;
        pSVar10 = param_3 + (lVar8 + param_1) * 0x18;
        if (uStack_74 <= *(uint *)(pSVar1 + 4)) break;
        uVar5 = *(undefined8 *)(pSVar1 + 8);
        *(undefined8 *)pSVar10 = *(undefined8 *)pSVar1;
        *(undefined8 *)(pSVar10 + 8) = uVar5;
        *(undefined8 *)(pSVar10 + 0x10) = *(undefined8 *)(pSVar1 + 0x10);
        bVar19 = lVar17 != 0;
        lVar8 = lVar17;
        lVar17 = (lVar17 + -1) / 2;
        pSVar10 = pSVar1;
      } while (bVar19);
    }
LAB_0010584f:
    pSVar14 = pSVar14 + -0x18;
    *(undefined8 *)(pSVar10 + 0x10) = uVar4;
    *(undefined8 *)pSVar10 = uVar6;
    *(undefined8 *)(pSVar10 + 8) = uVar7;
    bVar19 = lVar11 < 2;
    lVar11 = lVar11 + -1;
    if (bVar19) {
      return;
    }
  } while( true );
}



/* Object::get_class() const */

void Object::get_class(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *__s;
  long lVar4;
  long lVar5;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar3 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar3 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00105b5d;
            LOCK();
            lVar5 = *plVar1;
            bVar6 = lVar4 == lVar5;
            if (bVar6) {
              *plVar1 = lVar4 + 1;
              lVar5 = lVar4;
            }
            UNLOCK();
          } while (!bVar6);
          if (lVar5 != -1) {
            *(undefined8 *)in_RDI = *(undefined8 *)(lVar3 + 0x10);
          }
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
LAB_00105b5d:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_00105d4f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00105c63;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00105c63:
    uVar5 = String::operator==(param_1,(String *)&local_50);
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_00105d4f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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



/* void 
   Vector<RenderingDeviceCommons::ShaderSpecializationConstant>::sort_custom<_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,
   true>() */

void __thiscall
Vector<RenderingDeviceCommons::ShaderSpecializationConstant>::
sort_custom<_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,true>
          (Vector<RenderingDeviceCommons::ShaderSpecializationConstant> *this)

{
  ShaderSpecializationConstant *__dest;
  uint uVar1;
  long lVar2;
  ShaderSpecializationConstant *__src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ShaderSpecializationConstant *pSVar13;
  ShaderSpecializationConstant *pSVar14;
  size_t sVar15;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(this + 8) + -8);
  if (lVar2 != 0) {
    CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_copy_on_write
              ((CowData<RenderingDeviceCommons::ShaderSpecializationConstant> *)(this + 8));
    __src = *(ShaderSpecializationConstant **)(this + 8);
    if (lVar2 == 1) {
      SortArray<RenderingDeviceCommons::ShaderSpecializationConstant,_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,true>
      ::introsort(0,1,__src,0);
      return;
    }
    lVar8 = 0;
    lVar12 = lVar2;
    do {
      lVar12 = lVar12 >> 1;
      lVar8 = lVar8 + 1;
    } while (lVar12 != 1);
    SortArray<RenderingDeviceCommons::ShaderSpecializationConstant,_DefaultComparator<RenderingDeviceCommons::ShaderSpecializationConstant>,true>
    ::introsort(0,lVar2,__src,lVar8 * 2);
    __dest = __src + 0x18;
    if (0x10 < lVar2) {
      pSVar13 = __dest;
      lVar12 = 0;
      sVar15 = 0x18;
      do {
        while( true ) {
          uVar4 = *(undefined8 *)pSVar13;
          uVar5 = *(undefined8 *)(pSVar13 + 8);
          uVar3 = *(undefined8 *)(pSVar13 + 0x10);
          uVar1 = *(uint *)(pSVar13 + 4);
          lVar8 = lVar12 + 1;
          if (uVar1 < *(uint *)(__src + 4)) break;
          pSVar14 = pSVar13;
          if (uVar1 < *(uint *)(pSVar13 + -0x14)) {
            sVar7 = sVar15;
            while (lVar12 != 0) {
              uVar6 = *(undefined8 *)(pSVar13 + sVar7 + -sVar15 + -0x18 + 8);
              *(undefined8 *)(__src + sVar7) = *(undefined8 *)(pSVar13 + sVar7 + -sVar15 + -0x18);
              *(undefined8 *)(__src + sVar7 + 8) = uVar6;
              *(undefined8 *)(__src + sVar7 + 0x10) =
                   *(undefined8 *)(pSVar13 + sVar7 + -sVar15 + -8);
              if (*(uint *)(__src + (sVar7 - 0x2c)) <= uVar1) {
                pSVar14 = __src + lVar12 * 0x18;
                goto LAB_00105f2d;
              }
              sVar7 = sVar7 - 0x18;
              lVar12 = lVar12 + -1;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pSVar14 = __dest;
          }
LAB_00105f2d:
          pSVar13 = pSVar13 + 0x18;
          *(undefined8 *)(pSVar14 + 0x10) = uVar3;
          *(undefined8 *)pSVar14 = uVar4;
          *(undefined8 *)(pSVar14 + 8) = uVar5;
          lVar12 = lVar8;
          sVar15 = sVar15 + 0x18;
          if (lVar8 == 0xf) goto LAB_00105f51;
        }
        memmove(__dest,__src,sVar15);
        pSVar13 = pSVar13 + 0x18;
        *(undefined8 *)(__src + 0x10) = uVar3;
        *(undefined8 *)__src = uVar4;
        *(undefined8 *)(__src + 8) = uVar5;
        lVar12 = lVar8;
        sVar15 = sVar15 + 0x18;
      } while (lVar8 != 0xf);
LAB_00105f51:
      pSVar13 = __src + 0x180;
      lVar8 = -0x180;
      lVar12 = 0x10;
      do {
        uVar3 = *(undefined8 *)(pSVar13 + 0x10);
        uVar4 = *(undefined8 *)pSVar13;
        uVar5 = *(undefined8 *)(pSVar13 + 8);
        lVar9 = lVar12 + -1;
        uVar1 = *(uint *)(pSVar13 + 4);
        lVar11 = -lVar8;
        pSVar14 = pSVar13;
        if (uVar1 < *(uint *)(pSVar13 + -0x14)) {
          do {
            uVar6 = *(undefined8 *)(pSVar13 + lVar11 + lVar8 + -0x18 + 8);
            *(undefined8 *)(__src + lVar11) = *(undefined8 *)(pSVar13 + lVar11 + lVar8 + -0x18);
            *(undefined8 *)(__src + lVar11 + 8) = uVar6;
            *(undefined8 *)(__src + lVar11 + 0x10) = *(undefined8 *)(pSVar13 + lVar11 + lVar8 + -8);
            lVar10 = lVar9 + -1;
            if (*(uint *)(__src + lVar11 + -0x2c) <= uVar1) {
              pSVar14 = __src + lVar9 * 0x18;
              goto LAB_00105ff6;
            }
            lVar11 = lVar11 + -0x18;
            lVar9 = lVar10;
          } while (lVar10 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pSVar14 = __dest;
        }
LAB_00105ff6:
        lVar12 = lVar12 + 1;
        pSVar13 = pSVar13 + 0x18;
        lVar8 = lVar8 + -0x18;
        *(undefined8 *)pSVar14 = uVar4;
        *(undefined8 *)(pSVar14 + 8) = uVar5;
        *(undefined8 *)(pSVar14 + 0x10) = uVar3;
        if (lVar2 == lVar12) {
          return;
        }
      } while( true );
    }
    sVar15 = 0x18;
    lVar12 = 1;
    pSVar13 = __dest;
    do {
      uVar4 = *(undefined8 *)pSVar13;
      uVar5 = *(undefined8 *)(pSVar13 + 8);
      uVar3 = *(undefined8 *)(pSVar13 + 0x10);
      uVar1 = *(uint *)(pSVar13 + 4);
      if (uVar1 < *(uint *)(__src + 4)) {
        memmove(__dest,__src,sVar15);
        *(undefined8 *)(__src + 0x10) = uVar3;
        *(undefined8 *)__src = uVar4;
        *(undefined8 *)(__src + 8) = uVar5;
      }
      else {
        pSVar14 = pSVar13;
        if (uVar1 < *(uint *)(pSVar13 + -0x14)) {
          sVar7 = sVar15;
          lVar8 = lVar12;
          while (lVar8 = lVar8 + -1, lVar8 != 0) {
            uVar6 = *(undefined8 *)(pSVar13 + sVar7 + -sVar15 + -0x18 + 8);
            *(undefined8 *)(__src + sVar7) = *(undefined8 *)(pSVar13 + sVar7 + -sVar15 + -0x18);
            *(undefined8 *)(__src + sVar7 + 8) = uVar6;
            *(undefined8 *)(__src + sVar7 + 0x10) = *(undefined8 *)(pSVar13 + sVar7 + -sVar15 + -8);
            if (*(uint *)(__src + (sVar7 - 0x2c)) <= uVar1) {
              pSVar14 = __src + lVar8 * 0x18;
              goto LAB_00106109;
            }
            sVar7 = sVar7 - 0x18;
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pSVar14 = __dest;
        }
LAB_00106109:
        *(undefined8 *)pSVar14 = uVar4;
        *(undefined8 *)(pSVar14 + 8) = uVar5;
        *(undefined8 *)(pSVar14 + 0x10) = uVar3;
      }
      lVar12 = lVar12 + 1;
      sVar15 = sVar15 + 0x18;
      pSVar13 = pSVar13 + 0x18;
    } while (lVar2 != lVar12);
  }
  return;
}



/* CowData<Vector<RenderingDeviceCommons::ShaderUniform> >::_unref() */

void __thiscall
CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_unref
          (CowData<Vector<RenderingDeviceCommons::ShaderUniform>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<SpvReflectDescriptorBinding*>::_realloc(long) */

undefined8 __thiscall
CowData<SpvReflectDescriptorBinding*>::_realloc
          (CowData<SpvReflectDescriptorBinding*> *this,long param_1)

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



/* CowData<Vector<RenderingDeviceCommons::ShaderUniform> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<RenderingDeviceCommons::ShaderUniform>>::_realloc
          (CowData<Vector<RenderingDeviceCommons::ShaderUniform>> *this,long param_1)

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



/* CowData<SpvReflectSpecializationConstant*>::_realloc(long) */

undefined8 __thiscall
CowData<SpvReflectSpecializationConstant*>::_realloc
          (CowData<SpvReflectSpecializationConstant*> *this,long param_1)

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



/* CowData<SpvReflectInterfaceVariable*>::_realloc(long) */

undefined8 __thiscall
CowData<SpvReflectInterfaceVariable*>::_realloc
          (CowData<SpvReflectInterfaceVariable*> *this,long param_1)

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



/* CowData<SpvReflectBlockVariable*>::_realloc(long) */

undefined8 __thiscall
CowData<SpvReflectBlockVariable*>::_realloc(CowData<SpvReflectBlockVariable*> *this,long param_1)

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



/* CowData<RenderingDeviceCommons::ShaderUniform>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::ShaderUniform>::_realloc
          (CowData<RenderingDeviceCommons::ShaderUniform> *this,long param_1)

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
/* Error CowData<RenderingDeviceCommons::ShaderUniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::ShaderUniform>::resize<false>
          (CowData<RenderingDeviceCommons::ShaderUniform> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar3 = lVar9 * 0x20;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00106740:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x20 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar10 = uVar4 + 1;
  if (lVar10 == 0) goto LAB_00106740;
  if (param_1 <= lVar9) {
    if ((lVar10 != lVar3) && (uVar7 = _realloc(this,lVar10), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar10 == lVar3) {
LAB_001066ac:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00106639;
  }
  else {
    if (lVar9 != 0) {
      uVar7 = _realloc(this,lVar10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_001066ac;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = puVar8 + lVar3 * 4;
  do {
    *(undefined4 *)puVar5 = 10;
    puVar6 = puVar5 + 4;
    *(undefined1 *)((long)puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 4);
LAB_00106639:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::_realloc
          (CowData<RenderingDeviceCommons::ShaderSpecializationConstant> *this,long param_1)

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
/* Error CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::ShaderSpecializationConstant>::resize<false>
          (CowData<RenderingDeviceCommons::ShaderSpecializationConstant> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
    lVar3 = lVar10 * 0x18;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00106a90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x18 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00106a90;
  if (param_1 <= lVar10) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar9 == lVar3) {
LAB_001069fc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_0010698b;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_001069fc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  uVar7 = _LC27;
  puVar5 = puVar8 + lVar3 * 3;
  do {
    *puVar5 = uVar7;
    puVar6 = puVar5 + 3;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 3);
LAB_0010698b:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderingDeviceCommons::~RenderingDeviceCommons() */

void __thiscall RenderingDeviceCommons::~RenderingDeviceCommons(RenderingDeviceCommons *this)

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


