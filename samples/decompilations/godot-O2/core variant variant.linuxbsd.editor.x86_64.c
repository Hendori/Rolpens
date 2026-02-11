
/* CowData<Face3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Face3>::_copy_on_write(CowData<Face3> *this)

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
  __n = lVar2 * 0x24;
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



/* CowData<Plane>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Plane>::_copy_on_write(CowData<Plane> *this)

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
  __n = lVar2 * 0x10;
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



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant_const*>::_copy_on_write(CowData<Variant_const*> *this)

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



/* CowData<Vector4>::_ref(CowData<Vector4> const&) [clone .part.0] */

void __thiscall CowData<Vector4>::_ref(CowData<Vector4> *this,CowData *param_1)

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



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* CowData<long>::_ref(CowData<long> const&) [clone .part.0] */

void __thiscall CowData<long>::_ref(CowData<long> *this,CowData *param_1)

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



/* CowData<Color>::_ref(CowData<Color> const&) [clone .part.0] */

void __thiscall CowData<Color>::_ref(CowData<Color> *this,CowData *param_1)

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



/* CowData<double>::_ref(CowData<double> const&) [clone .part.0] */

void __thiscall CowData<double>::_ref(CowData<double> *this,CowData *param_1)

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



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

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
  __n = lVar2 * 0xc;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar5 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar5 = lVar10 * 0xc;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc != 0) {
    uVar6 = param_1 * 0xc - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    if (uVar6 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar8 = *(undefined8 **)this;
        if (uVar6 + 1 == lVar5) {
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_00100c12:
          puVar8[-1] = param_1;
          return;
        }
        puVar3 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar6 + 0x11,false);
        if (puVar3 != (undefined8 *)0x0) {
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_00100c12;
        }
LAB_00100d70:
        pcVar4 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00100d58;
      }
      if (uVar6 + 1 == lVar5) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar5 = puVar8[-1];
LAB_00100c81:
        if (param_1 <= lVar5) goto LAB_00100be7;
      }
      else {
        if (lVar10 != 0) {
          puVar3 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_00100d70;
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          lVar5 = puVar3[1];
          goto LAB_00100c81;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          pcVar4 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00100d58;
        }
        puVar8 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar5 = 0;
      }
      memset((void *)((long)puVar8 + lVar5 * 0xc),0,(param_1 - lVar5) * 0xc);
LAB_00100be7:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar4 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00100d58:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar4,0,0);
  return;
}



/* Variant::get_type_name(Variant::Type) */

Variant * __thiscall Variant::get_type_name(Variant *this,uint param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x26 < param_2) {
    *(undefined8 *)this = 0;
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  }
  *(undefined8 *)this = 0;
  switch(param_2) {
  case 0:
    goto LAB_00100fbf;
  case 1:
    goto LAB_0010105f;
  case 2:
    goto LAB_00100fbf;
  case 3:
    break;
  case 4:
    goto LAB_00100f5f;
  case 5:
    goto LAB_001010b7;
  case 6:
    goto LAB_00100f87;
  case 7:
    break;
  case 8:
    goto LAB_00100f5f;
  case 9:
    goto LAB_001010b7;
  case 10:
    goto LAB_00100f87;
  case 0xb:
    goto LAB_00101027;
  case 0xc:
LAB_001010b7:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0xd:
    goto LAB_00100f87;
  case 0xe:
    break;
  case 0xf:
    goto LAB_00100f37;
  case 0x10:
LAB_0010105f:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x11:
    break;
  case 0x12:
LAB_00101027:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x13:
    goto LAB_00100f37;
  case 0x14:
    break;
  case 0x15:
    goto LAB_00100f37;
  case 0x16:
    goto LAB_00100f87;
  case 0x17:
LAB_00100fbf:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x18:
    goto LAB_00100f5f;
  case 0x19:
LAB_00100f87:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x1a:
LAB_00100f5f:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x1b:
LAB_00100f37:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x1c:
    break;
  case 0x1d:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x1e:
    goto LAB_00100e07;
  case 0x1f:
    goto LAB_00100e07;
  case 0x20:
    goto LAB_00100e47;
  case 0x21:
    goto LAB_00100e47;
  case 0x22:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x23:
    goto LAB_00100e47;
  case 0x24:
    goto LAB_00100e47;
  case 0x25:
LAB_00100e07:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  case 0x26:
LAB_00100e47:
    String::parse_latin1((StrRange *)this);
    goto LAB_00100e20;
  }
  String::parse_latin1((StrRange *)this);
LAB_00100e20:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::can_convert(Variant::Type, Variant::Type) */

bool Variant::can_convert(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  
  bVar1 = param_2 == 0 || param_1 == param_2;
  if (param_2 != 0 && param_1 != param_2) {
    if (param_1 == 0) {
      return param_2 == 0x18;
    }
    switch(param_2) {
    default:
      goto switchD_0010120b_caseD_0;
    case 1:
      iVar2 = 2;
      puVar3 = can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 2:
      iVar2 = 1;
      puVar3 = can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 3:
      iVar2 = 1;
      puVar3 = can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 4:
      return param_1 != 0x18;
    case 5:
      iVar2 = 6;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 6:
      iVar2 = 5;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 7:
      iVar2 = 8;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 8:
      iVar2 = 7;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 9:
      iVar2 = 10;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 10:
      iVar2 = 9;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0xb:
      iVar2 = 0x12;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0xc:
      iVar2 = 0xd;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0xd:
      iVar2 = 0xc;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0xf:
      iVar2 = 0x11;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x11:
      iVar2 = 0xf;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x12:
      iVar2 = 0xb;
      puVar3 = can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x13:
      iVar2 = 0x12;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x14:
      iVar2 = 4;
      puVar3 = can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x15:
      iVar2 = 4;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x16:
      iVar2 = 4;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x17:
      iVar2 = 0x18;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1c:
      iVar2 = 0x1d;
      puVar3 = can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1d:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1e:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1f:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x20:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x21:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x22:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x23:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x24:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x25:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
      break;
    case 0x26:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert(Variant::Type,Variant::Type)::valid;
    }
    while (puVar3 = (undefined1 *)((long)puVar3 + 4), param_1 != iVar2) {
      iVar2 = *(int *)puVar3;
      if (iVar2 == 0) {
        return bVar1;
      }
    }
    bVar1 = true;
  }
switchD_0010120b_caseD_0:
  return bVar1;
}



/* Variant::can_convert_strict(Variant::Type, Variant::Type) */

bool Variant::can_convert_strict(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  
  bVar1 = param_2 == 0 || param_1 == param_2;
  if (param_2 != 0 && param_1 != param_2) {
    if (param_1 == 0) {
      return param_2 == 0x18;
    }
    switch(param_2) {
    default:
      goto switchD_0010148b_caseD_0;
    case 1:
      iVar2 = 2;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 2:
      iVar2 = 1;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 3:
      iVar2 = 1;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 4:
      iVar2 = 0x16;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 5:
      iVar2 = 6;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 6:
      iVar2 = 5;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 7:
      iVar2 = 8;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 8:
      iVar2 = 7;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 9:
      iVar2 = 10;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 10:
      iVar2 = 9;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0xb:
      iVar2 = 0x12;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0xc:
      iVar2 = 0xd;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0xd:
      iVar2 = 0xc;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0xf:
      iVar2 = 0x11;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x11:
      iVar2 = 0xf;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x12:
      iVar2 = 0xb;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x13:
      iVar2 = 0x12;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x14:
      iVar2 = 4;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x15:
      iVar2 = 4;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x16:
      iVar2 = 4;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x17:
      iVar2 = 0x18;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1c:
      iVar2 = 0x1d;
      puVar3 = can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1d:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1e:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x1f:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x20:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x21:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x22:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x23:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x24:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x25:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
      break;
    case 0x26:
      iVar2 = 0x1c;
      puVar3 = (undefined1 *)&can_convert_strict(Variant::Type,Variant::Type)::valid;
    }
    while (puVar3 = (undefined1 *)((long)puVar3 + 4), param_1 != iVar2) {
      iVar2 = *(int *)puVar3;
      if (iVar2 == 0) {
        return bVar1;
      }
    }
    bVar1 = true;
  }
switchD_0010148b_caseD_0:
  return bVar1;
}



/* Variant::is_null() const */

bool __thiscall Variant::is_null(Variant *this)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)this == 0x18) {
    bVar1 = *(long *)(this + 0x10) == 0;
  }
  return bVar1;
}



/* Variant::ObjData::ref(Variant::ObjData const&) */

void __thiscall Variant::ObjData::ref(ObjData *this,ObjData *param_1)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)this;
  if (lVar2 != lVar1) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    pOVar3 = *(Object **)(this + 8);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 8) = uVar4;
    if ((lVar1 < 0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
    }
    if (((lVar2 < 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  return;
}



/* Variant::ObjData::ref_pointer(Object*) */

void __thiscall Variant::ObjData::ref_pointer(ObjData *this,Object *param_1)

{
  Object OVar1;
  Object *pOVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  
  pOVar2 = *(Object **)(this + 8);
  if (pOVar2 == param_1) {
    return;
  }
  lVar3 = *(long *)this;
  if (param_1 != (Object *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    OVar1 = param_1[0x120];
    *(Object **)(this + 8) = param_1;
    *(undefined8 *)this = uVar4;
    if ((OVar1 == (Object)0x0) || (cVar5 = RefCounted::init_ref(), cVar5 != '\0'))
    goto joined_r0x001017fe;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
joined_r0x001017fe:
  if (((lVar3 < 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Variant::ObjData::unref() */

void __thiscall Variant::ObjData::unref(ObjData *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this < 0) {
    pOVar1 = *(Object **)(this + 8);
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::_clear_internal() */

void __thiscall Variant::_clear_internal(Variant *this)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)this) {
  case 4:
    if (*(long *)(this + 8) != 0) {
      LOCK();
      plVar2 = (long *)(*(long *)(this + 8) + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar5 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(lVar5 + -0x10),false);
          return;
        }
        goto LAB_00101d0a;
      }
    }
    break;
  case 0xb:
    lVar5 = *(long *)(this + 8);
    if (lVar5 != 0) {
      while( true ) {
        LOCK();
        bVar6 = DAT_0010df44 == '\0';
        if (bVar6) {
          DAT_0010df44 = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while (DAT_0010df44 != '\0');
      }
LAB_00101bc6:
      *(long *)(*(long *)(DAT_0010df28 + (ulong)(DAT_0010df34 >> ((byte)DAT_0010df38 & 0x1f)) * 8) +
               (ulong)(DAT_0010df34 & _DAT_0010df3c) * 8) = lVar5;
      DAT_0010df44 = '\0';
      DAT_0010df34 = DAT_0010df34 + 1;
      *(undefined8 *)(this + 8) = 0;
    }
    break;
  case 0x10:
    lVar5 = *(long *)(this + 8);
    if (lVar5 != 0) {
      while( true ) {
        LOCK();
        bVar6 = DAT_0010df44 == '\0';
        if (bVar6) {
          DAT_0010df44 = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while (DAT_0010df44 != '\0');
      }
      goto LAB_00101bc6;
    }
    break;
  case 0x11:
    lVar5 = *(long *)(this + 8);
    if (lVar5 != 0) {
      while( true ) {
        LOCK();
        bVar6 = DAT_0010dec4 == '\0';
        if (bVar6) {
          DAT_0010dec4 = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while (DAT_0010dec4 != '\0');
      }
LAB_00101a86:
      *(long *)(*(long *)(DAT_0010dea8 + (ulong)(DAT_0010deb4 >> ((byte)DAT_0010deb8 & 0x1f)) * 8) +
               (ulong)(DAT_0010deb4 & _DAT_0010debc) * 8) = lVar5;
      DAT_0010dec4 = '\0';
      DAT_0010deb4 = DAT_0010deb4 + 1;
      *(undefined8 *)(this + 8) = 0;
    }
    break;
  case 0x12:
    lVar5 = *(long *)(this + 8);
    if (lVar5 != 0) {
      while( true ) {
        LOCK();
        bVar6 = DAT_0010dec4 == '\0';
        if (bVar6) {
          DAT_0010dec4 = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while (DAT_0010dec4 != '\0');
      }
      goto LAB_00101a86;
    }
    break;
  case 0x13:
    if (*(Projection **)(this + 8) != (Projection *)0x0) {
      Projection::~Projection(*(Projection **)(this + 8));
      while( true ) {
        LOCK();
        bVar6 = DAT_0010de44 == '\0';
        if (bVar6) {
          DAT_0010de44 = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while (DAT_0010de44 != '\0');
      }
      *(undefined8 *)
       (*(long *)(DAT_0010de28 + (ulong)(DAT_0010de34 >> ((byte)DAT_0010de38 & 0x1f)) * 8) +
       (ulong)(DAT_0010de34 & _DAT_0010de3c) * 8) = *(undefined8 *)(this + 8);
      DAT_0010de44 = '\0';
      DAT_0010de34 = DAT_0010de34 + 1;
      *(undefined8 *)(this + 8) = 0;
    }
    break;
  case 0x15:
  case 0x1a:
    if ((StringName::configured != '\0') && (*(long *)(this + 8) != 0)) {
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        StringName::unref();
        return;
      }
      goto LAB_00101d0a;
    }
    break;
  case 0x16:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      NodePath::~NodePath((NodePath *)(this + 8));
      return;
    }
    goto LAB_00101d0a;
  case 0x18:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      ObjData::unref((ObjData *)(this + 8));
      return;
    }
    goto LAB_00101d0a;
  case 0x19:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      Callable::~Callable((Callable *)(this + 8));
      return;
    }
    goto LAB_00101d0a;
  case 0x1b:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      Dictionary::~Dictionary((Dictionary *)(this + 8));
      return;
    }
    goto LAB_00101d0a;
  case 0x1c:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      Array::~Array((Array *)(this + 8));
      return;
    }
    goto LAB_00101d0a;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    puVar4 = *(undefined8 **)(this + 8);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(puVar4,false);
        return;
      }
      goto LAB_00101d0a;
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d0a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant const&) const */

bool __thiscall Variant::operator!=(Variant *this,Variant *param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  bool local_2d;
  undefined4 local_2c;
  int local_28 [2];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = true;
  if (*(int *)this == *(int *)param_1) {
    local_20 = (undefined1  [16])0x0;
    local_28[0] = 0;
    local_28[1] = 0;
    local_2c = 1;
    ::Variant::evaluate((Operator *)&local_2c,this,param_1,(Variant *)local_28,&local_2d);
    bVar1 = ::Variant::operator_cast_to_bool((Variant *)local_28);
    if ((&needs_deinit)[local_28[0]] != '\0') {
      _clear_internal((Variant *)local_28);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant const&) const */

bool __thiscall Variant::operator<(Variant *this,Variant *param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  bool local_2d;
  undefined4 local_2c;
  int local_28 [2];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)this == *(int *)param_1) {
    local_20 = (undefined1  [16])0x0;
    local_28[0] = 0;
    local_28[1] = 0;
    local_2c = 2;
    ::Variant::evaluate((Operator *)&local_2c,this,param_1,(Variant *)local_28,&local_2d);
    bVar1 = ::Variant::operator_cast_to_bool((Variant *)local_28);
    if ((&needs_deinit)[local_28[0]] != '\0') {
      _clear_internal((Variant *)local_28);
    }
  }
  else {
    bVar1 = *(int *)this < *(int *)param_1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::zero() */

void __thiscall Variant::zero(Variant *this)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_10;
  
  uVar2 = _UNK_0011f858;
  iVar1 = *(int *)this;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(iVar1) {
  case 0:
    break;
  case 1:
    this[8] = (Variant)0x0;
    break;
  case 2:
  case 5:
  case 6:
    *(undefined8 *)(this + 8) = 0;
    break;
  case 3:
    *(undefined8 *)(this + 8) = 0;
    break;
  default:
    if ((&needs_deinit)[iVar1] != '\0') {
      _clear_internal(this);
    }
    *(undefined4 *)this = 0;
    local_38 = 0;
    local_34 = 0;
    ::Variant::construct(iVar1,this,0,0,&local_38);
    break;
  case 7:
  case 8:
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    break;
  case 9:
  case 10:
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    break;
  case 0xc:
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    break;
  case 0xd:
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    break;
  case 0xe:
    local_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    break;
  case 0xf:
  case 0x14:
    *(undefined8 *)(this + 8) = __LC16;
    *(undefined8 *)(this + 0x10) = uVar2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator long() const */

long __thiscall Variant::operator_cast_to_long(Variant *this)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (long)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (ulong)(byte)this[8];
    }
    if (uVar1 == 2) {
      return *(long *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    lVar2 = String::to_int();
    return lVar2;
  }
  return 0;
}



/* Variant::operator int() const */

int __thiscall Variant::operator_cast_to_int(Variant *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (int)(byte)this[8];
    }
    if (uVar1 == 2) {
      return *(int *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    iVar2 = String::to_int();
    return iVar2;
  }
  return 0;
}



/* Variant::operator short() const */

short __thiscall Variant::operator_cast_to_short(Variant *this)

{
  uint uVar1;
  short sVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (short)(int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (short)(byte)this[8];
    }
    if (uVar1 == 2) {
      return *(short *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    sVar2 = String::to_int();
    return sVar2;
  }
  return 0;
}



/* Variant::operator signed char() const */

ulong __thiscall Variant::operator_cast_to_signed_char(Variant *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (ulong)(uint)(int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if ((uVar1 == 1) || (uVar1 == 2)) {
      return (ulong)(byte)this[8];
    }
  }
  else if (uVar1 == 4) {
    uVar2 = String::to_int();
    return uVar2;
  }
  return 0;
}



/* Variant::operator unsigned long() const */

ulong __thiscall Variant::operator_cast_to_unsigned_long(Variant *this)

{
  double dVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)this;
  if (uVar2 == 3) {
    dVar1 = *(double *)(this + 8);
    if (_LC61 <= dVar1) {
      return (long)(dVar1 - _LC61) ^ 0x8000000000000000;
    }
    return (long)dVar1;
  }
  if (uVar2 < 4) {
    if (uVar2 == 1) {
      return (ulong)(byte)this[8];
    }
    if (uVar2 == 2) {
      return *(ulong *)(this + 8);
    }
  }
  else if (uVar2 == 4) {
    uVar3 = String::to_int();
    return uVar3;
  }
  return 0;
}



/* Variant::operator unsigned int() const */

uint __thiscall Variant::operator_cast_to_unsigned_int(Variant *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (uint)(long)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (uint)(byte)this[8];
    }
    if (uVar1 == 2) {
      return *(uint *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    uVar1 = String::to_int();
    return uVar1;
  }
  return 0;
}



/* Variant::operator unsigned short() const */

ushort __thiscall Variant::operator_cast_to_unsigned_short(Variant *this)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (ushort)(int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (ushort)(byte)this[8];
    }
    if (uVar1 == 2) {
      return *(ushort *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    uVar2 = String::to_int();
    return uVar2;
  }
  return 0;
}



/* Variant::operator unsigned char() const */

uchar __thiscall Variant::operator_cast_to_unsigned_char(Variant *this)

{
  uint uVar1;
  uchar uVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (uchar)(int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if ((uVar1 == 1) || (uVar1 == 2)) {
      return (uchar)this[8];
    }
  }
  else if (uVar1 == 4) {
    uVar2 = String::to_int();
    return uVar2;
  }
  return '\0';
}



/* Variant::operator ObjectID() const */

undefined8 __thiscall Variant::operator_cast_to_ObjectID(Variant *this)

{
  if ((*(int *)this != 2) && (*(int *)this != 0x18)) {
    return 0;
  }
  return *(undefined8 *)(this + 8);
}



/* Variant::operator char32_t() const */

wchar32 __thiscall Variant::operator_cast_to_char32_t(Variant *this)

{
  uint uVar1;
  wchar32 wVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (wchar32)(long)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (wchar32)(byte)this[8];
    }
    if (uVar1 == 2) {
      return *(wchar32 *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    wVar2 = String::to_int();
    return wVar2;
  }
  return L'\0';
}



/* Variant::operator float() const */

float __thiscall Variant::operator_cast_to_float(Variant *this)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (float)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      if (this[8] != (Variant)0x0) {
        return _LC62;
      }
    }
    else if (uVar1 == 2) {
      return (float)*(long *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    dVar2 = (double)String::to_float();
    return (float)dVar2;
  }
  return 0.0;
}



/* Variant::operator double() const */

double __thiscall Variant::operator_cast_to_double(Variant *this)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return *(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      if (this[8] != (Variant)0x0) {
        return _LC63;
      }
    }
    else if (uVar1 == 2) {
      return (double)*(long *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    dVar2 = (double)String::to_float();
    return dVar2;
  }
  return 0.0;
}



/* Variant::operator StringName() const */

Variant * __thiscall Variant::operator_cast_to_StringName(Variant *this)

{
  int *in_RSI;
  
  if (*in_RSI == 0x15) {
    StringName::StringName((StringName *)this,(StringName *)(in_RSI + 2));
    return this;
  }
  if (*in_RSI != 4) {
    *(undefined8 *)this = 0;
    return this;
  }
  StringName::StringName((StringName *)this,(String *)(in_RSI + 2),false);
  return this;
}



/* Variant::to_json_string() const */

void Variant::to_json_string(void)

{
  long *plVar1;
  long lVar2;
  String *in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC56;
  local_30 = 0;
  String::parse_latin1((StrRange *)&local_40);
  JSON::stringify(in_RDI,in_RSI,SUB81((StrRange *)&local_40,0),true);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector2() const */

undefined8 __thiscall Variant::operator_cast_to_Vector2(Variant *this)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)this) {
  case 5:
  case 9:
  case 0xc:
    return *(undefined8 *)(this + 8);
  case 6:
    uVar1 = Vector2i::operator_cast_to_Vector2((Vector2i *)(this + 8));
    return uVar1;
  default:
    return 0;
  case 10:
  case 0xd:
    return CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                    (float)(int)*(undefined8 *)(this + 8));
  }
}



/* Variant::operator Vector2i() const */

undefined8 __thiscall Variant::operator_cast_to_Vector2i(Variant *this)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)this) {
  case 5:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar1 = Vector2::operator_cast_to_Vector2i((Vector2 *)(this + 8));
      return uVar1;
    }
    goto LAB_0010264e;
  case 6:
    uVar1 = *(undefined8 *)(this + 8);
    break;
  default:
    uVar1 = 0;
    break;
  case 9:
  case 0xc:
    local_18 = *(undefined8 *)(this + 8);
    uVar1 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_18);
    break;
  case 10:
  case 0xd:
    local_18 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                        (float)(int)*(undefined8 *)(this + 8));
    uVar1 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
LAB_0010264e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Rect2() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Rect2(Variant *this)

{
  undefined1 auVar1 [16];
  
  if (*(int *)this == 7) {
    return *(undefined1 (*) [16])(this + 8);
  }
  if (*(int *)this != 8) {
    return ZEXT816(0);
  }
  auVar1 = Rect2i::operator_cast_to_Rect2((Rect2i *)(this + 8));
  return auVar1;
}



/* Variant::operator Rect2i() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Rect2i(Variant *this)

{
  undefined1 auVar1 [16];
  
  if (*(int *)this == 8) {
    return *(undefined1 (*) [16])(this + 8);
  }
  if (*(int *)this != 7) {
    return ZEXT816(0);
  }
  auVar1 = Rect2::operator_cast_to_Rect2i((Rect2 *)(this + 8));
  return auVar1;
}



/* Variant::operator Vector3() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Vector3(Variant *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 local_20;
  float local_18;
  
  switch(*(undefined4 *)this) {
  case 5:
    local_20 = *(undefined8 *)(this + 8);
    local_18 = 0.0;
    break;
  case 6:
    local_18 = 0.0;
    local_20 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                        (float)(int)*(undefined8 *)(this + 8));
    break;
  default:
    local_20 = 0;
    local_18 = 0.0;
    break;
  case 9:
    local_20 = *(undefined8 *)(this + 8);
    local_18 = *(float *)(this + 0x10);
    break;
  case 10:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar1 = Vector3i::operator_cast_to_Vector3((Vector3i *)(this + 8));
      return auVar1;
    }
    goto LAB_00102809;
  case 0xc:
    local_18 = *(float *)(this + 0x10);
    local_20 = *(undefined8 *)(this + 8);
    break;
  case 0xd:
    local_18 = (float)*(int *)(this + 0x10);
    local_20 = CONCAT44((float)(int)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                        (float)(int)*(undefined8 *)(this + 8));
  }
  auVar1._8_4_ = local_18;
  auVar1._0_8_ = local_20;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    return auVar1;
  }
LAB_00102809:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector3i() const */

undefined8 __thiscall Variant::operator_cast_to_Vector3i(Variant *this)

{
  undefined8 uVar1;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_20;
  int local_18;
  
  local_18 = 0x1115a0;
  switch(*(undefined4 *)this) {
  case 5:
    local_18 = 0;
    local_20 = CONCAT44((int)(float)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                        (int)(float)*(undefined8 *)(this + 8));
    break;
  case 6:
    local_20 = *(undefined8 *)(this + 8);
    local_18 = 0;
    break;
  default:
    local_20 = 0;
    local_18 = 0;
    break;
  case 9:
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar1 = Vector3::operator_cast_to_Vector3i((Vector3 *)(this + 8));
      return uVar1;
    }
    goto LAB_0010292d;
  case 10:
    local_20 = *(undefined8 *)(this + 8);
    local_18 = *(int *)(this + 0x10);
    break;
  case 0xc:
    local_18 = (int)*(float *)(this + 0x10);
    local_20 = CONCAT44((int)(float)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                        (int)(float)*(undefined8 *)(this + 8));
    break;
  case 0xd:
    local_20 = *(undefined8 *)(this + 8);
    local_18 = *(int *)(this + 0x10);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_20;
  }
LAB_0010292d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this,in_RSI,local_18);
}



/* Variant::operator Vector4() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Vector4(Variant *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  switch(*(undefined4 *)this) {
  case 5:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulong *)(this + 8);
    return auVar1;
  case 6:
    auVar2._0_4_ = (float)(int)*(undefined8 *)(this + 8);
    auVar2._4_4_ = (float)(int)((ulong)*(undefined8 *)(this + 8) >> 0x20);
    auVar2._8_8_ = 0;
    return auVar2;
  default:
    return ZEXT816(0);
  case 9:
    auVar3._12_4_ = 0;
    auVar3._0_12_ = *(undefined1 (*) [12])(this + 8);
    return auVar3;
  case 10:
    auVar4._8_4_ = (float)*(int *)(this + 0x10);
    auVar4._0_4_ = (float)(int)*(undefined8 *)(this + 8);
    auVar4._4_4_ = (float)(int)((ulong)*(undefined8 *)(this + 8) >> 0x20);
    auVar4._12_4_ = 0;
    return auVar4;
  case 0xc:
    return *(undefined1 (*) [16])(this + 8);
  case 0xd:
    auVar4 = Vector4i::operator_cast_to_Vector4((Vector4i *)(this + 8));
    return auVar4;
  }
}



/* Variant::operator Vector4i() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Vector4i(Variant *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  switch(*(undefined4 *)this) {
  case 5:
    auVar2._0_4_ = (int)*(float *)(this + 8);
    auVar2._4_4_ = (int)*(float *)(this + 0xc);
    auVar2._8_8_ = 0;
    return auVar2;
  case 6:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulong *)(this + 8);
    return auVar3;
  default:
    return ZEXT816(0);
  case 9:
    auVar4._0_4_ = (int)*(float *)(this + 8);
    auVar4._8_4_ = (int)*(float *)(this + 0x10);
    auVar4._4_4_ = (int)*(float *)(this + 0xc);
    auVar4._12_4_ = 0;
    return auVar4;
  case 10:
    auVar5._12_4_ = 0;
    auVar5._0_12_ = *(undefined1 (*) [12])(this + 8);
    return auVar5;
  case 0xc:
    auVar1._4_4_ = (int)*(float *)(this + 0xc);
    auVar1._0_4_ = (int)*(float *)(this + 8);
    auVar1._8_4_ = (int)*(float *)(this + 0x10);
    auVar1._12_4_ = (int)*(float *)(this + 0x14);
    return auVar1;
  case 0xd:
    return *(undefined1 (*) [16])(this + 8);
  }
}



/* Variant::operator Plane() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Plane(Variant *this)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)this == 0xe) {
    local_28 = *(undefined8 *)(this + 8);
    uStack_20 = (undefined4)*(undefined8 *)(this + 0x10);
    uStack_1c = (undefined4)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
  }
  auVar1._8_4_ = uStack_20;
  auVar1._0_8_ = local_28;
  auVar1._12_4_ = uStack_1c;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator AABB() const */

Variant * __thiscall Variant::operator_cast_to_AABB(Variant *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *in_RSI;
  
  if (*in_RSI != 0x10) {
    *(undefined8 *)this = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    return this;
  }
  puVar1 = *(undefined8 **)(in_RSI + 2);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  *(undefined8 *)this = *puVar1;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar2;
  return this;
}



/* Variant::operator Basis() const */

Variant * __thiscall Variant::operator_cast_to_Basis(Variant *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int *in_RSI;
  
  uVar6 = _LC64;
  iVar1 = *in_RSI;
  if (iVar1 == 0x11) {
    puVar2 = *(undefined8 **)(in_RSI + 2);
    uVar3 = puVar2[1];
    *(undefined8 *)this = *puVar2;
    *(undefined8 *)(this + 8) = uVar3;
    uVar3 = puVar2[3];
    *(undefined8 *)(this + 0x10) = puVar2[2];
    *(undefined8 *)(this + 0x18) = uVar3;
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(puVar2 + 4);
    return this;
  }
  if (iVar1 != 0xf) {
    if (iVar1 != 0x12) {
      *(undefined4 *)(this + 0x20) = 0x3f800000;
      *(undefined1 (*) [16])this = ZEXT416(uVar6);
      *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar6);
      return this;
    }
    puVar2 = *(undefined8 **)(in_RSI + 2);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined8 *)this = *puVar2;
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)(this + 0x10) = uVar4;
    *(undefined8 *)(this + 0x18) = uVar5;
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(puVar2 + 4);
    return this;
  }
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  uVar6 = _LC64;
  *(undefined1 (*) [16])this = ZEXT416(_LC64);
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar6);
  Basis::set_quaternion(this);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::operator Quaternion() const */

Variant * __thiscall Variant::operator_cast_to_Quaternion(Variant *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *in_RSI;
  long in_FS_OFFSET;
  
  uVar3 = _UNK_0011f858;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *in_RSI;
  if (iVar1 == 0xf) {
    uVar3 = *(undefined8 *)(in_RSI + 4);
    *(undefined8 *)this = *(undefined8 *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = uVar3;
  }
  else if ((iVar1 == 0x11) || (iVar1 == 0x12)) {
    Basis::get_quaternion();
  }
  else {
    *(undefined8 *)this = __LC16;
    *(undefined8 *)(this + 8) = uVar3;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Transform3D() const */

Variant * __thiscall Variant::operator_cast_to_Transform3D(Variant *this)

{
  undefined8 *puVar1;
  undefined4 *in_RSI;
  long in_FS_OFFSET;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58 [16];
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*in_RSI) {
  case 0xb:
    puVar1 = *(undefined8 **)(in_RSI + 2);
    uStack_2c = 0;
    local_48 = *(uint *)((long)puVar1 + 0xc);
    uVar2 = CONCAT44((int)puVar1[1],(int)*puVar1);
    local_58._8_4_ = 0;
    uStack_3c = 0;
    uStack_38 = 0x3f800000;
    local_58._12_4_ = *(undefined4 *)((long)puVar1 + 4);
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_34 = (undefined4)puVar1[2];
    uStack_30 = (uint)((ulong)puVar1[2] >> 0x20);
    local_58._0_8_ = uVar2;
    *(undefined8 *)this = uVar2;
    *(undefined8 *)(this + 8) = local_58._8_8_;
    *(ulong *)(this + 0x10) = (ulong)local_48;
    *(undefined8 *)(this + 0x18) = 0;
    *(ulong *)(this + 0x20) = CONCAT44(uStack_34,0x3f800000);
    *(ulong *)(this + 0x28) = (ulong)uStack_30;
    break;
  default:
    *(undefined4 *)(this + 0x20) = 0x3f800000;
    auVar3 = ZEXT416(_LC64);
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])this = auVar3;
    *(undefined1 (*) [16])(this + 0x10) = auVar3;
    break;
  case 0xf:
    local_58 = ZEXT416(_LC64);
    local_64 = 0;
    local_5c = 0;
    uStack_38 = 0x3f800000;
    local_48 = _LC64;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    Basis::set_quaternion(local_58);
    Transform3D::Transform3D((Transform3D *)this,local_58,(Vector3 *)&local_64);
    break;
  case 0x11:
    local_58._0_12_ = ZEXT812(0);
    Transform3D::Transform3D((Transform3D *)this,*(Basis **)(in_RSI + 2),local_58);
    break;
  case 0x12:
    puVar1 = *(undefined8 **)(in_RSI + 2);
    uVar2 = puVar1[1];
    *(undefined8 *)this = *puVar1;
    *(undefined8 *)(this + 8) = uVar2;
    uVar2 = puVar1[3];
    *(undefined8 *)(this + 0x10) = puVar1[2];
    *(undefined8 *)(this + 0x18) = uVar2;
    uVar2 = puVar1[5];
    *(undefined8 *)(this + 0x20) = puVar1[4];
    *(undefined8 *)(this + 0x28) = uVar2;
    break;
  case 0x13:
    Projection::operator_cast_to_Transform3D((Projection *)this);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Projection() const */

Variant * __thiscall Variant::operator_cast_to_Projection(Variant *this)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *in_RSI;
  Quaternion *pQVar4;
  long in_FS_OFFSET;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [12];
  uint uStack_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*in_RSI) {
  case 0xb:
    puVar1 = *(uint **)(in_RSI + 2);
    local_38 = 0x3f800000;
    local_2c = 0;
    local_58._4_8_ = 0;
    local_58._0_4_ = *puVar1;
    uStack_4c = puVar1[1];
    local_58._4_4_ = puVar1[2];
    local_48 = ZEXT416(puVar1[3]);
    local_34 = *(undefined8 *)(puVar1 + 4);
    Projection::Projection((Projection *)this,local_58);
    break;
  default:
    Projection::Projection((Projection *)this);
    break;
  case 0xf:
    pQVar4 = local_88;
    local_94 = 0;
    local_88 = ZEXT416(_LC64);
    local_8c = 0;
    local_68 = 0x3f800000;
    local_78 = ZEXT416(_LC64);
    Basis::set_quaternion(pQVar4);
    puVar3 = &local_94;
    goto LAB_00102f99;
  case 0x11:
    pQVar4 = *(Quaternion **)(in_RSI + 2);
    puVar3 = (undefined8 *)local_88;
    local_88._0_12_ = ZEXT812(0);
LAB_00102f99:
    Transform3D::Transform3D((Transform3D *)local_58,pQVar4,(Vector3 *)puVar3);
    Projection::Projection((Projection *)this,(Transform3D *)local_58);
    break;
  case 0x12:
    Projection::Projection((Projection *)this,*(Transform3D **)(in_RSI + 2));
    break;
  case 0x13:
    puVar3 = *(undefined8 **)(in_RSI + 2);
    uVar2 = puVar3[1];
    *(undefined8 *)this = *puVar3;
    *(undefined8 *)(this + 8) = uVar2;
    uVar2 = puVar3[3];
    *(undefined8 *)(this + 0x10) = puVar3[2];
    *(undefined8 *)(this + 0x18) = uVar2;
    uVar2 = puVar3[5];
    *(undefined8 *)(this + 0x20) = puVar3[4];
    *(undefined8 *)(this + 0x28) = uVar2;
    uVar2 = puVar3[7];
    *(undefined8 *)(this + 0x30) = puVar3[6];
    *(undefined8 *)(this + 0x38) = uVar2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Transform2D() const */

Variant * __thiscall Variant::operator_cast_to_Transform2D(Variant *this)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int *in_RSI;
  
  if (*in_RSI == 0xb) {
    puVar2 = *(undefined8 **)(in_RSI + 2);
    uVar8 = puVar2[1];
    uVar3 = puVar2[2];
    *(undefined8 *)this = *puVar2;
    *(undefined8 *)(this + 8) = uVar8;
    *(undefined8 *)(this + 0x10) = uVar3;
    return this;
  }
  if (*in_RSI != 0x12) {
    *(undefined8 *)this = 0x3f800000;
    *(undefined8 *)(this + 8) = 0x3f80000000000000;
    *(undefined8 *)(this + 0x10) = 0;
    return this;
  }
  puVar1 = *(undefined4 **)(in_RSI + 2);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(puVar1 + 9);
  *(undefined4 *)this = uVar4;
  *(undefined4 *)(this + 4) = uVar6;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined4 *)(this + 0xc) = uVar7;
  return this;
}



/* Variant::operator RID() const */

undefined8 __thiscall Variant::operator_cast_to_RID(Variant *this)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  uint local_38 [4];
  int local_28 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)this == 0x17) {
    uVar2 = *(undefined8 *)(this + 8);
    goto LAB_001030cc;
  }
  if ((*(int *)this == 0x18) && (plVar5 = *(long **)(this + 0x10), plVar5 != (long *)0x0)) {
    if ((EngineDebugger::singleton == 0) || (EngineDebugger::script_debugger == 0)) {
LAB_00103197:
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      (**(code **)(*plVar5 + 0x68))
                ((Variant *)local_28,plVar5,CoreStringNames::singleton + 0x38,0,0,local_38);
      if ((local_38[0] == 0) && (local_28[0] == 0x17)) {
        uVar2 = operator_cast_to_RID((Variant *)local_28);
      }
      else {
        uVar2 = 0;
      }
      if ((&needs_deinit)[local_28[0]] != '\0') {
        _clear_internal((Variant *)local_28);
      }
      goto LAB_001030cc;
    }
    uVar3 = (uint)*(ulong *)(this + 8) & 0xffffff;
    if (uVar3 < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar1 = local_38[0] >> 8;
        local_38[0] = uVar1 << 8;
        LOCK();
        bVar6 = (char)ObjectDB::spin_lock == '\0';
        if (bVar6) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        local_38[0] = uVar1 << 8;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
      if ((*(ulong *)(this + 8) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        if (puVar4[1] != 0) {
          plVar5 = *(long **)(this + 0x10);
          goto LAB_00103197;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    _err_print_error(_LC71,"core/variant/variant.cpp",0x7df,
                     "Parameter \"ObjectDB::get_instance(_get_obj().id)\" is null.",
                     "Invalid pointer (object was freed).",0,0);
  }
  uVar2 = 0;
LAB_001030cc:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Variant::operator Object*() const */

Object * __thiscall Variant::operator_cast_to_Object_(Variant *this)

{
  Object *pOVar1;
  
  pOVar1 = (Object *)0x0;
  if (*(int *)this == 0x18) {
    pOVar1 = *(Object **)(this + 0x10);
  }
  return pOVar1;
}



/* Variant::get_validated_object_with_check(bool&) const */

ulong __thiscall Variant::get_validated_object_with_check(Variant *this,bool *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)this == 0x18) {
    uVar3 = (uint)*(ulong *)(this + 8) & 0xffffff;
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
      if ((*(ulong *)(this + 8) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
        uVar2 = puVar4[1];
        bVar5 = false;
        ObjectDB::spin_lock._0_1_ = '\0';
        if (uVar2 != 0) goto LAB_0010336b;
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
    bVar5 = *(long *)(this + 8) != 0;
    uVar2 = 0;
  }
  else {
    bVar5 = false;
    uVar2 = 0;
  }
LAB_0010336b:
  *param_1 = bVar5;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Variant::get_validated_object() const */

ulong __thiscall Variant::get_validated_object(Variant *this)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)this == 0x18) {
    uVar3 = (uint)*(ulong *)(this + 8) & 0xffffff;
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
      if ((*(ulong *)(this + 8) >> 0x18 & 0x7fffffffff) == (*puVar4 & 0x7fffffffff)) {
        uVar2 = puVar4[1];
        ObjectDB::spin_lock._0_1_ = '\0';
      }
      else {
        uVar2 = 0;
        ObjectDB::spin_lock._0_1_ = '\0';
      }
      goto LAB_00103470;
    }
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103470:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Variant::is_zero() const */

undefined8 Variant::is_zero(void)

{
  long *plVar1;
  float fVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  long local_70;
  ulong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)in_RDI) {
  case 0:
switchD_00103516_caseD_0:
    uVar4 = FUN_00103539();
    return uVar4;
  case 1:
    uVar4 = FUN_00103539();
    return uVar4;
  case 2:
  case 0x15:
  case 0x17:
switchD_00103516_caseD_2:
    uVar4 = FUN_00103539();
    return uVar4;
  case 3:
    uVar4 = FUN_00103539(in_RDI,in_RSI,0);
    return uVar4;
  case 4:
    local_70 = 0;
    uVar4 = String::operator==((String *)(in_RDI + 8),(String *)&local_70);
    lVar5 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
        uVar4 = FUN_00103539();
        return uVar4;
      }
    }
    break;
  case 5:
    if (*(float *)(in_RDI + 8) == 0.0) {
      uVar4 = FUN_00103539(in_RDI,in_RSI,0);
      return uVar4;
    }
    goto LAB_00103598;
  case 6:
    local_68 = 0;
    Vector2i::operator==((Vector2i *)(in_RDI + 8),(Vector2i *)&local_68);
    uVar4 = FUN_00103539();
    return uVar4;
  case 7:
  case 0xc:
  case 0xe:
    if ((*(float *)(in_RDI + 8) != 0.0) || (*(float *)(in_RDI + 0xc) != 0.0)) goto LAB_00103598;
    fVar2 = *(float *)(in_RDI + 0x10);
    goto joined_r0x001035ba;
  case 8:
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uVar4 = Vector2i::operator==((Vector2i *)(in_RDI + 8),(Vector2i *)&local_68);
    if ((char)uVar4 != '\0') {
      Vector2i::operator==((Vector2i *)(in_RDI + 0x10),(Vector2i *)&uStack_60);
      uVar4 = FUN_00103539();
      return uVar4;
    }
    break;
  case 9:
    if ((*(float *)(in_RDI + 8) == 0.0) && (*(float *)(in_RDI + 0xc) == 0.0)) {
      uVar4 = FUN_00103539(in_RDI,in_RSI,0);
      return uVar4;
    }
    goto LAB_00103598;
  case 10:
    uVar4 = 0;
    if ((*(int *)(in_RDI + 8) == 0) && (*(int *)(in_RDI + 0xc) == 0)) {
      uVar4 = FUN_00103539(*(undefined4 *)(in_RDI + 0x10));
      return uVar4;
    }
    break;
  case 0xb:
    local_68 = 0x3f800000;
    uStack_60 = 0;
    uStack_5c = 0x3f800000;
    uStack_58 = 0;
    uStack_54 = 0;
    Transform2D::operator==(*(Transform2D **)(in_RDI + 8),(Transform2D *)&local_68);
    uVar4 = FUN_00103539();
    return uVar4;
  case 0xd:
    uVar4 = 0;
    if (((*(int *)(in_RDI + 8) == 0) && (uVar4 = 0, *(int *)(in_RDI + 0xc) == 0)) &&
       (*(int *)(in_RDI + 0x10) == 0)) {
      uVar4 = FUN_00103539();
      return uVar4;
    }
    break;
  case 0xf:
  case 0x14:
    if ((*(float *)(in_RDI + 8) != 0.0) || (*(float *)(in_RDI + 0xc) != 0.0)) goto LAB_00103598;
    fVar2 = *(float *)(in_RDI + 0x10);
joined_r0x001035ba:
    if (fVar2 == 0.0) {
      uVar4 = FUN_00103539(in_RDI,in_RSI,0);
      return uVar4;
    }
LAB_00103598:
    uVar4 = FUN_00103539();
    return uVar4;
  case 0x10:
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    AABB::operator==(*(AABB **)(in_RDI + 8),(AABB *)&local_68);
    uVar4 = FUN_00103539();
    return uVar4;
  case 0x11:
    local_48 = 0x3f800000;
    local_68 = (ulong)_LC64;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = _LC64;
    uStack_54 = 0;
    uStack_50 = 0;
    Basis::operator==(*(Basis **)(in_RDI + 8),(Basis *)&local_68);
    uVar4 = FUN_00103539();
    return uVar4;
  case 0x12:
    local_48 = 0x3f800000;
    local_44 = 0;
    local_3c = 0;
    local_68 = (ulong)_LC64;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = _LC64;
    uStack_54 = 0;
    uStack_50 = 0;
    Transform3D::operator==(*(Transform3D **)(in_RDI + 8),(Transform3D *)&local_68);
    uVar4 = FUN_00103539();
    return uVar4;
  case 0x13:
    Projection::Projection((Projection *)&local_68);
    lVar5 = 0x10;
    do {
      lVar3 = lVar5 + -0x10;
      do {
        if (*(float *)(*(long *)(in_RDI + 8) + lVar3) != *(float *)((Projection *)&local_68 + lVar3)
           ) goto LAB_00103930;
        lVar3 = lVar3 + 4;
      } while (lVar5 != lVar3);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x50);
LAB_00103930:
    Projection::~Projection((Projection *)&local_68);
    uVar4 = FUN_00103539();
    return uVar4;
  case 0x16:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = NodePath::is_empty();
      return uVar4;
    }
    goto LAB_00103994;
  case 0x18:
    get_validated_object(in_RDI);
    uVar4 = FUN_00103539();
    return uVar4;
  case 0x19:
    uVar4 = 0;
    if (*(long *)(in_RDI + 8) == 0) {
      uVar4 = FUN_00103539();
      return uVar4;
    }
    break;
  case 0x1a:
    uVar4 = 0;
    if (*(long *)(in_RDI + 0x10) == 0) goto switchD_00103516_caseD_2;
    break;
  case 0x1b:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Dictionary::is_empty();
      return uVar4;
    }
    goto LAB_00103994;
  case 0x1c:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Array::is_empty();
      return uVar4;
    }
    goto LAB_00103994;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    lVar5 = *(long *)(*(long *)(in_RDI + 8) + 0x18);
    if (lVar5 == 0) goto switchD_00103516_caseD_0;
    uVar4 = CONCAT71((int7)((ulong)lVar5 >> 8),*(long *)(lVar5 + -8) == 0);
    break;
  default:
    uVar4 = FUN_00103539();
    return uVar4;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00103994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FUN_00103539(void)

{
  long in_FS_OFFSET;
  long in_stack_00000068;
  
  if (in_stack_00000068 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void switchD_00103516::caseD_0(void)

{
  FUN_00103539();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::is_one() const */

ulong __thiscall Variant::is_one(Variant *this)

{
  uint uVar1;
  undefined7 uVar3;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 auStack_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (undefined7)
          ((ulong)((long)&switchD_001039d5::switchdataD_001116f0 +
                  (long)(int)(&switchD_001039d5::switchdataD_001116f0)[*(uint *)this]) >> 8);
  switch(*(uint *)this) {
  case 0:
    uVar2 = 1;
    break;
  case 1:
    uVar2 = (ulong)(byte)this[8];
    break;
  case 2:
    uVar2 = CONCAT71(uVar3,*(long *)(this + 8) == 1);
    break;
  case 3:
    uVar2 = CONCAT71(uVar3,!NAN(_LC63) && !NAN(*(double *)(this + 8))) & 0xffffffff;
    if (_LC63 != *(double *)(this + 8)) {
      uVar2 = 0;
    }
    break;
  default:
    uVar1 = is_zero();
    uVar2 = (ulong)(uVar1 ^ 1);
    break;
  case 5:
    if (_LC62 == *(float *)(this + 8)) {
      uVar2 = CONCAT71(uVar3,!NAN(_LC62) && !NAN(*(float *)(this + 0xc))) & 0xffffffff;
      if (_LC62 != *(float *)(this + 0xc)) {
        uVar2 = 0;
      }
      break;
    }
    goto LAB_00103a30;
  case 6:
    local_28 = _LC73;
    uVar2 = Vector2i::operator==((Vector2i *)(this + 8),(Vector2i *)&local_28);
    break;
  case 7:
  case 0xc:
  case 0xe:
  case 0x14:
    if (((_LC62 == *(float *)(this + 8)) && (_LC62 == *(float *)(this + 0xc))) &&
       (_LC62 == *(float *)(this + 0x10))) {
      uVar2 = CONCAT71(uVar3,!NAN(_LC62) && !NAN(*(float *)(this + 0x14))) & 0xffffffff;
      if (_LC62 != *(float *)(this + 0x14)) {
        uVar2 = 0;
      }
      break;
    }
    goto LAB_00103a30;
  case 8:
    local_28 = _LC73;
    auStack_20[0] = _UNK_0011f878;
    uVar2 = Vector2i::operator==((Vector2i *)(this + 8),(Vector2i *)&local_28);
    if ((char)uVar2 != '\0') {
      uVar2 = Vector2i::operator==((Vector2i *)(this + 0x10),(Vector2i *)auStack_20);
    }
    break;
  case 9:
    if ((_LC62 == *(float *)(this + 8)) && (_LC62 == *(float *)(this + 0xc))) {
      uVar2 = CONCAT71(uVar3,!NAN(_LC62) && !NAN(*(float *)(this + 0x10))) & 0xffffffff;
      if (_LC62 != *(float *)(this + 0x10)) {
        uVar2 = 0;
      }
      break;
    }
LAB_00103a30:
    uVar2 = 0;
    break;
  case 10:
    uVar2 = 0;
    if ((*(int *)(this + 8) == 1) && (*(int *)(this + 0xc) == 1)) {
      uVar2 = (ulong)(*(int *)(this + 0x10) == 1);
    }
    break;
  case 0xd:
    uVar2 = 0;
    if (((*(int *)(this + 8) == 1) && (*(int *)(this + 0xc) == 1)) &&
       (uVar2 = 0, *(int *)(this + 0x10) == 1)) {
      uVar2 = (ulong)(*(int *)(this + 0x14) == 1);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Variant::operator Dictionary() const */

Variant * __thiscall Variant::operator_cast_to_Dictionary(Variant *this)

{
  int *in_RSI;
  
  if (*in_RSI != 0x1b) {
    Dictionary::Dictionary((Dictionary *)this);
    return this;
  }
  Dictionary::Dictionary((Dictionary *)this,(Dictionary *)(in_RSI + 2));
  return this;
}



/* Variant::operator Callable() const */

Variant * __thiscall Variant::operator_cast_to_Callable(Variant *this)

{
  int *in_RSI;
  
  if (*in_RSI != 0x19) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return this;
  }
  Callable::Callable((Callable *)this,(Callable *)(in_RSI + 2));
  return this;
}



/* Variant::operator Signal() const */

Variant * __thiscall Variant::operator_cast_to_Signal(Variant *this)

{
  int *in_RSI;
  
  if (*in_RSI != 0x1a) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return this;
  }
  StringName::StringName((StringName *)this,(StringName *)(in_RSI + 2));
  *(undefined8 *)(this + 8) = *(undefined8 *)(in_RSI + 4);
  return this;
}



/* Variant::operator Side() const */

ulong __thiscall Variant::operator_cast_to_Side(Variant *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (ulong)(uint)(int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (ulong)(byte)this[8];
    }
    if (uVar1 == 2) {
      return (ulong)*(uint *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    uVar2 = String::to_int();
    return uVar2;
  }
  return 0;
}



/* Variant::operator Orientation() const */

ulong __thiscall Variant::operator_cast_to_Orientation(Variant *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 == 3) {
    return (ulong)(uint)(int)*(double *)(this + 8);
  }
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      return (ulong)(byte)this[8];
    }
    if (uVar1 == 2) {
      return (ulong)*(uint *)(this + 8);
    }
  }
  else if (uVar1 == 4) {
    uVar2 = String::to_int();
    return uVar2;
  }
  return 0;
}



/* Variant::Variant(bool) */

void __thiscall Variant::Variant(Variant *this,bool param_1)

{
  *(undefined4 *)this = 1;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  this[8] = (Variant)param_1;
  return;
}



/* Variant::Variant(long) */

void __thiscall Variant::Variant(Variant *this,long param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(long *)(this + 8) = param_1;
  return;
}



/* Variant::Variant(int) */

void __thiscall Variant::Variant(Variant *this,int param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(long *)(this + 8) = (long)param_1;
  return;
}



/* Variant::Variant(short) */

void __thiscall Variant::Variant(Variant *this,short param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(long *)(this + 8) = (long)param_1;
  return;
}



/* Variant::Variant(signed char) */

void __thiscall Variant::Variant(Variant *this,char param_2)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(long *)(this + 8) = (long)param_2;
  return;
}



/* Variant::Variant(unsigned long) */

void __thiscall Variant::Variant(Variant *this,ulong param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(ulong *)(this + 8) = param_1;
  return;
}



/* Variant::Variant(unsigned int) */

void __thiscall Variant::Variant(Variant *this,uint param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(ulong *)(this + 8) = (ulong)param_1;
  return;
}



/* Variant::Variant(unsigned short) */

void __thiscall Variant::Variant(Variant *this,ushort param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(ulong *)(this + 8) = (ulong)param_1;
  return;
}



/* Variant::Variant(unsigned char) */

void __thiscall Variant::Variant(Variant *this,uchar param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(ulong *)(this + 8) = (ulong)param_1;
  return;
}



/* Variant::Variant(float) */

void __thiscall Variant::Variant(Variant *this,float param_1)

{
  *(undefined4 *)this = 3;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(double *)(this + 8) = (double)param_1;
  return;
}



/* Variant::Variant(double) */

void __thiscall Variant::Variant(Variant *this,double param_1)

{
  *(undefined4 *)this = 3;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(double *)(this + 8) = param_1;
  return;
}



/* Variant::Variant(ObjectID const&) */

void __thiscall Variant::Variant(Variant *this,ObjectID *param_1)

{
  *(undefined4 *)this = 2;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}



/* Variant::Variant(StringName const&) */

void __thiscall Variant::Variant(Variant *this,StringName *param_1)

{
  *(undefined4 *)this = 0x15;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 8),param_1);
  return;
}



/* Variant::Variant(String const&) */

void __thiscall Variant::Variant(Variant *this,String *param_1)

{
  *(undefined4 *)this = 4;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)param_1);
    return;
  }
  return;
}



/* Variant::Variant(char const*) */

void __thiscall Variant::Variant(Variant *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 4;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)(this + 8));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::Variant(char32_t const*) */

void __thiscall Variant::Variant(Variant *this,wchar32 *param_1)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 4;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (param_1 != (wchar32 *)0x0) {
    wVar2 = *param_1;
    while (wVar2 != L'\0') {
      pwVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar2 = *pwVar1;
    }
  }
  String::parse_utf32((StrRange *)(this + 8));
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::Variant(Vector3 const&) */

void __thiscall Variant::Variant(Variant *this,Vector3 *param_1)

{
  *(undefined4 *)this = 9;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Variant::Variant(Vector3i const&) */

void __thiscall Variant::Variant(Variant *this,Vector3i *param_1)

{
  *(undefined4 *)this = 10;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}



/* Variant::Variant(Vector4 const&) */

void __thiscall Variant::Variant(Variant *this,Vector4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 0xc;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* Variant::Variant(Vector4i const&) */

void __thiscall Variant::Variant(Variant *this,Vector4i *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 0xd;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* Variant::Variant(Vector2 const&) */

void __thiscall Variant::Variant(Variant *this,Vector2 *param_1)

{
  *(undefined4 *)this = 5;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}



/* Variant::Variant(Vector2i const&) */

void __thiscall Variant::Variant(Variant *this,Vector2i *param_1)

{
  *(undefined4 *)this = 6;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}



/* Variant::Variant(Rect2 const&) */

void __thiscall Variant::Variant(Variant *this,Rect2 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 7;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* Variant::Variant(Rect2i const&) */

void __thiscall Variant::Variant(Variant *this,Rect2i *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 8;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* Variant::Variant(Plane const&) */

void __thiscall Variant::Variant(Variant *this,Plane *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 0xe;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* Variant::Variant(Quaternion const&) */

void __thiscall Variant::Variant(Variant *this,Quaternion *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)this = 0xf;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  return;
}



/* Variant::Variant(Color const&) */

void __thiscall Variant::Variant(Variant *this,Color *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = 0x14;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* Variant::Variant(NodePath const&) */

void __thiscall Variant::Variant(Variant *this,NodePath *param_1)

{
  *(undefined4 *)this = 0x16;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  NodePath::NodePath((NodePath *)(this + 8),param_1);
  return;
}



/* Variant::Variant(RID const&) */

void __thiscall Variant::Variant(Variant *this,RID *param_1)

{
  *(undefined4 *)this = 0x17;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}



/* Variant::Variant(Object const*) */

void __thiscall Variant::Variant(Variant *this,Object *param_1)

{
  Object OVar1;
  undefined8 uVar2;
  char cVar3;
  
  *(undefined4 *)this = 0x18;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (param_1 == (Object *)0x0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  OVar1 = param_1[0x120];
  *(Object **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 8) = uVar2;
  if (OVar1 != (Object)0x0) {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      return;
    }
  }
  return;
}



/* Variant::Variant(Callable const&) */

void __thiscall Variant::Variant(Variant *this,Callable *param_1)

{
  *(undefined4 *)this = 0x19;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Callable::Callable((Callable *)(this + 8),param_1);
  return;
}



/* Variant::Variant(Signal const&) */

void __thiscall Variant::Variant(Variant *this,Signal *param_1)

{
  *(undefined4 *)this = 0x1a;
  StringName::StringName((StringName *)(this + 8),param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Variant::Variant(Dictionary const&) */

void __thiscall Variant::Variant(Variant *this,Dictionary *param_1)

{
  *(undefined4 *)this = 0x1b;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 8),(Dictionary *)param_1);
  return;
}



/* Variant::Variant(Array const&) */

void __thiscall Variant::Variant(Variant *this,Array *param_1)

{
  *(undefined4 *)this = 0x1c;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Array::Array((Array *)(this + 8),param_1);
  return;
}



/* Variant::Variant(Vector<unsigned char> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x1d;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f550;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<int> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x1e;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f570;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<int>::_ref((CowData<int> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<long> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x1f;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f590;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<long>::_ref((CowData<long> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<float> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x20;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f5b0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<float>::_ref((CowData<float> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<double> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x21;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f5d0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<double>::_ref((CowData<double> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<Vector2> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x23;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f610;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<Vector3> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x24;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f630;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<Vector3>::_ref((CowData<Vector3> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<Color> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x25;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f650;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<Color>::_ref((CowData<Color> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<Vector4> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x26;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f670;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<Vector4>::_ref((CowData<Vector4> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}



/* Variant::Variant(Vector<RID> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0x1c;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Array::Array((Array *)(this + 8));
  uVar2 = 0;
  iVar3 = (int)(Array *)(this + 8);
  Array::resize(iVar3);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != 0) {
    while( true ) {
      if (*(long *)(lVar1 + -8) <= (long)uVar2) goto LAB_001047e0;
      local_48 = 0x17;
      local_40._8_8_ = 0;
      local_40._0_8_ = *(ulong *)(lVar1 + uVar2 * 8);
      Array::set(iVar3,(Variant *)(uVar2 & 0xffffffff));
      if ((&needs_deinit)[(int)local_48] == '\0') break;
      uVar2 = uVar2 + 1;
      _clear_internal((Variant *)&local_48);
      lVar1 = *(long *)(param_1 + 8);
      if (lVar1 == 0) goto LAB_001047e0;
    }
    uVar2 = uVar2 + 1;
    lVar1 = *(long *)(param_1 + 8);
  }
LAB_001047e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::Variant(Vector<Plane> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  char cVar1;
  long lVar2;
  Variant *this_00;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0x1c;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Array::Array((Array *)(this + 8));
  lVar3 = 0;
  iVar4 = (int)(Array *)(this + 8);
  Array::resize(iVar4);
  lVar2 = *(long *)(param_1 + 8);
  while ((lVar2 != 0 && (lVar3 < *(long *)(lVar2 + -8)))) {
    local_58 = 0xe;
    local_50 = *(undefined1 (*) [16])(lVar2 + lVar3 * 0x10);
    this_00 = (Variant *)Array::operator[](iVar4);
    if (this_00 == (Variant *)&local_58) {
      cVar1 = (&needs_deinit)[(int)local_58];
    }
    else {
      if ((&needs_deinit)[*(int *)this_00] != '\0') {
        _clear_internal(this_00);
      }
      *(undefined4 *)this_00 = 0;
      *(int *)this_00 = (int)local_58;
      cVar1 = needs_deinit;
      local_58 = local_58 & 0xffffffff00000000;
      *(undefined8 *)(this_00 + 8) = local_50._0_8_;
      *(undefined8 *)(this_00 + 0x10) = local_50._8_8_;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_1 + 8);
      lVar3 = lVar3 + 1;
    }
    else {
      lVar3 = lVar3 + 1;
      _clear_internal((Variant *)&local_58);
      lVar2 = *(long *)(param_1 + 8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::Variant(Vector<Face3> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  Vector aVStack_68 [8];
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)this = 0;
  local_60 = 0;
  if (lVar5 == 0) {
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_60,0);
  }
  else {
    iVar2 = (int)*(undefined8 *)(lVar5 + -8);
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_60,(long)(iVar2 * 3));
    if (iVar2 != 0) {
      lVar5 = *(long *)(param_1 + 8);
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_60);
      if (0 < iVar2) {
        iVar6 = 0;
        lVar4 = local_60;
        do {
          lVar3 = 0;
          do {
            *(undefined8 *)(lVar4 + lVar3) = *(undefined8 *)(lVar5 + lVar3);
            *(undefined4 *)(lVar4 + 8 + lVar3) = *(undefined4 *)(lVar5 + 8 + lVar3);
            lVar3 = lVar3 + 0xc;
          } while (lVar3 != 0x24);
          iVar6 = iVar6 + 3;
          lVar5 = lVar5 + 0x24;
          lVar4 = lVar4 + 0x24;
        } while (iVar6 != iVar2 * 3);
      }
    }
  }
  lVar5 = local_60;
  Variant((Variant *)local_58,aVStack_68);
  if ((&needs_deinit)[*(int *)this] != '\0') {
    _clear_internal(this);
  }
  *(undefined4 *)this = local_58[0];
  *(undefined8 *)(this + 8) = local_50;
  *(undefined8 *)(this + 0x10) = uStack_48;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_60 + -0x10),false);
        return;
      }
      goto LAB_00104b24;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104b24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::Variant(IPAddress const&) */

void __thiscall Variant::Variant(Variant *this,IPAddress *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 4;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  IPAddress::operator_cast_to_String((IPAddress *)(this + 8));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00106354) */
/* Variant::recursive_hash(int) const */

ulong Variant::recursive_hash(int param_1)

{
  float *pfVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 uVar12;
  ulong uVar13;
  double *pdVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined4 in_register_0000003c;
  undefined4 *puVar19;
  long in_FS_OFFSET;
  long local_28;
  
  puVar19 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*puVar19) {
  default:
switchD_00104bb8_caseD_0:
    uVar13 = 0;
    break;
  case 1:
    uVar13 = (ulong)*(byte *)(puVar19 + 2);
    break;
  case 2:
    uVar13 = *(long *)(puVar19 + 2) * 0x3ffff - 1;
    uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
    uVar10 = uVar13 >> 0xb;
    goto LAB_0010576b;
  case 3:
    dVar4 = *(double *)(puVar19 + 2);
    uVar13 = 0x208ccbee;
    if ((dVar4 != 0.0) && (uVar13 = 0x39e15a8a, !NAN(dVar4))) {
      iVar6 = (int)((ulong)dVar4 >> 0x20);
      uVar16 = (SUB84(dVar4,0) * 0x16a88000 | (uint)(SUB84(dVar4,0) * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ 0x7f07c65;
      uVar16 = (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      uVar13 = (ulong)((uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64);
    }
    break;
  case 4:
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = String::hash();
      return uVar13;
    }
    goto LAB_0010675b;
  case 5:
    fVar3 = (float)puVar19[2];
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = (float)puVar19[3];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    uVar16 = (uVar16 >> 0x10 ^ uVar16) * -0x7a143595;
    uVar7 = uVar16 >> 0xd;
    goto LAB_0010559c;
  case 6:
    uVar16 = (puVar19[2] * 0x16a88000 | (uint)(puVar19[2] * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
             (puVar19[3] * 0x16a88000 | (uint)(puVar19[3] * -0x3361d2af) >> 0x11) * 0x1b873593;
    goto LAB_00105580;
  case 7:
    fVar3 = (float)puVar19[2];
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = (float)puVar19[3];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = (float)puVar19[4];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = (float)puVar19[5];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
LAB_00105580:
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    goto LAB_0010558a;
  case 8:
    uVar16 = (puVar19[3] * 0x16a88000 | (uint)(puVar19[3] * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar7 = (puVar19[2] * 0x16a88000 | (uint)(puVar19[2] * -0x3361d2af) >> 0x11) * 0x1b873593 ^
            0x7f07c65;
    uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
    goto LAB_001051ff;
  case 9:
    fVar3 = (float)puVar19[2];
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = (float)puVar19[3];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = (float)puVar19[4];
    uVar16 = uVar16 << 0xd | uVar16 >> 0x13;
    goto code_r0x00104c3f;
  case 10:
    uVar16 = (puVar19[2] * 0x16a88000 | (uint)(puVar19[2] * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
             (puVar19[3] * 0x16a88000 | (uint)(puVar19[3] * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
             (puVar19[4] * 0x16a88000 | (uint)(puVar19[4] * -0x3361d2af) >> 0x11) * 0x1b873593;
    goto LAB_00104d25;
  case 0xb:
  case 0x10:
    pfVar11 = *(float **)(puVar19 + 2);
    fVar3 = *pfVar11;
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = pfVar11[1];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[2];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[3];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[4];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[5];
    uVar16 = uVar16 << 0xd | uVar16 >> 0x13;
    goto code_r0x001051bf;
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x14:
    fVar3 = (float)puVar19[2];
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = (float)puVar19[3];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = (float)puVar19[4];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = (float)puVar19[5];
    uVar16 = uVar16 << 0xd | uVar16 >> 0x13;
code_r0x00104c3f:
    uVar16 = uVar16 * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    goto LAB_00104d25;
  case 0xd:
    uVar7 = (puVar19[3] * 0x16a88000 | (uint)(puVar19[3] * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar16 = (puVar19[2] * 0x16a88000 | (uint)(puVar19[2] * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
LAB_001051ff:
    uVar16 = ((uVar16 ^ uVar7) << 0xd | (uVar16 ^ uVar7) >> 0x13) * 5 + 0xe6546b64 ^
             (puVar19[4] * 0x16a88000 | (uint)(puVar19[4] * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64 ^
             (puVar19[5] * 0x16a88000 | (uint)(puVar19[5] * -0x3361d2af) >> 0x11) * 0x1b873593;
    goto LAB_00104d25;
  case 0x11:
    pfVar11 = *(float **)(puVar19 + 2);
    fVar3 = *pfVar11;
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = pfVar11[1];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[2];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[3];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[4];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[5];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[6];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[7];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[8];
    uVar16 = uVar16 << 0xd | uVar16 >> 0x13;
    goto code_r0x001051bf;
  case 0x12:
    pfVar11 = *(float **)(puVar19 + 2);
    fVar3 = *pfVar11;
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = pfVar11[1];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[2];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[3];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[4];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[5];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[6];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[7];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[8];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[9];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[10];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[0xb];
    uVar16 = uVar16 << 0xd | uVar16 >> 0x13;
    goto code_r0x001051bf;
  case 0x13:
    pfVar11 = *(float **)(puVar19 + 2);
    fVar3 = *pfVar11;
    uVar16 = 0x3413905a;
    if ((fVar3 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar3))) {
      uVar16 = ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               0x7f07c65;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    }
    fVar3 = pfVar11[1];
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[2];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[3];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[4];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[5];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[6];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[7];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[8];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[9];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[10];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[0xb];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[0xc];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[0xd];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[0xe];
    uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
    fVar3 = pfVar11[0xf];
    uVar16 = uVar16 << 0xd | uVar16 >> 0x13;
code_r0x001051bf:
    uVar16 = uVar16 * 5 + 0xe6546b64;
    if (fVar3 != 0.0) {
      if (NAN(fVar3)) {
        uVar16 = uVar16 ^ 0x2db3efa0;
      }
      else {
        uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
      }
    }
LAB_00104d25:
    uVar13 = (ulong)((uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64);
LAB_00104d2f:
    uVar16 = ((uint)(uVar13 >> 0x10) ^ (uint)uVar13) * -0x7a143595;
    uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
    uVar13 = (ulong)(uVar16 ^ uVar16 >> 0x10);
    break;
  case 0x15:
    if (*(long *)(puVar19 + 2) == 0) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar13 = StringName::get_empty_hash();
        return uVar13;
      }
      goto LAB_0010675b;
    }
    uVar13 = (ulong)*(uint *)(*(long *)(puVar19 + 2) + 0x20);
    break;
  case 0x16:
    lVar18 = *(long *)(puVar19 + 2);
    if (lVar18 == 0) goto switchD_00104bb8_caseD_0;
    if (*(char *)(lVar18 + 0x39) == '\0') {
      NodePath::_update_hash_cache();
      lVar18 = *(long *)(puVar19 + 2);
    }
    uVar13 = (ulong)*(uint *)(lVar18 + 0x3c);
    break;
  case 0x17:
    lVar18 = *(long *)(puVar19 + 2);
    goto LAB_00105e24;
  case 0x18:
    lVar18 = *(long *)(puVar19 + 4);
LAB_00105e24:
    uVar13 = lVar18 * 0x3ffff - 1;
    uVar10 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
    uVar13 = uVar10 >> 0xb;
LAB_0010576b:
    uVar13 = (uVar10 ^ uVar13) * 0x41;
    uVar13 = (ulong)((uint)(uVar13 >> 0x16) ^ (uint)uVar13);
    break;
  case 0x19:
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = Callable::hash();
      return uVar13;
    }
    goto LAB_0010675b;
  case 0x1a:
    Signal::get_name();
    if (local_28 == 0) {
      uVar16 = StringName::get_empty_hash();
    }
    else {
      uVar16 = *(uint *)(local_28 + 0x20);
      if (StringName::configured != '\0') {
        StringName::unref();
      }
    }
    uVar12 = Signal::get_object_id();
    iVar6 = (int)((ulong)uVar12 >> 0x20);
    uVar16 = ((int)uVar12 * 0x16a88000 | (uint)((int)uVar12 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             uVar16;
    uVar16 = (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    uVar13 = (ulong)((uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64);
    break;
  case 0x1b:
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = Dictionary::recursive_hash(param_1 + 8);
      return uVar13;
    }
    goto LAB_0010675b;
  case 0x1c:
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = Array::recursive_hash(param_1 + 8);
      return uVar13;
    }
    goto LAB_0010675b;
  case 0x1d:
    lVar18 = *(long *)(*(long *)(puVar19 + 2) + 0x18);
    if (lVar18 != 0) {
      uVar16 = (uint)*(undefined8 *)(lVar18 + -8);
      if (uVar16 != 0) {
        uVar7 = uVar16 + 3;
        if (-1 < (int)uVar16) {
          uVar7 = uVar16;
        }
        if (-((int)uVar7 >> 2) == 0) {
          uVar9 = 0x7f07c65;
        }
        else {
          lVar17 = (long)-((int)uVar7 >> 2);
          uVar9 = 0x7f07c65;
          do {
            iVar6 = *(int *)(lVar18 + (int)(uVar7 & 0xfffffffc) + lVar17 * 4);
            lVar17 = lVar17 + 1;
            uVar9 = (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
            uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
          } while ((int)lVar17 != 0);
        }
        pbVar15 = (byte *)(lVar18 + (int)(uVar7 & 0xfffffffc));
        uVar7 = uVar16 & 3;
        if (uVar7 == 2) {
          uVar7 = 0;
LAB_00106721:
          uVar7 = (uint)pbVar15[1] << 8 ^ uVar7;
LAB_00105f3a:
          uVar9 = uVar9 ^ ((*pbVar15 ^ uVar7) * 0x16a88000 |
                          (*pbVar15 ^ uVar7) * -0x3361d2af >> 0x11) * 0x1b873593;
        }
        else {
          if (uVar7 == 3) {
            uVar7 = (uint)pbVar15[2] << 0x10;
            goto LAB_00106721;
          }
          if (uVar7 == 1) {
            uVar7 = 0;
            goto LAB_00105f3a;
          }
        }
        uVar13 = (ulong)(uVar9 ^ uVar16);
        goto LAB_00104d2f;
      }
    }
    goto LAB_0010630a;
  case 0x1e:
    lVar18 = *(long *)(*(long *)(puVar19 + 2) + 0x18);
    if ((lVar18 == 0) || (iVar6 = (int)*(undefined8 *)(lVar18 + -8), iVar6 == 0)) goto LAB_0010630a;
    uVar7 = iVar6 * 4;
    uVar16 = uVar7 + 3;
    if (-1 < (int)uVar7) {
      uVar16 = uVar7;
    }
    if (-((int)uVar16 >> 2) == 0) {
LAB_00106733:
      uVar9 = 0x7f07c65;
    }
    else {
      lVar17 = (long)-((int)uVar16 >> 2);
      uVar9 = 0x7f07c65;
      do {
        iVar6 = *(int *)(lVar18 + (int)(uVar16 & 0xfffffffc) + lVar17 * 4);
        lVar17 = lVar17 + 1;
        uVar9 = (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
        uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
      } while ((int)lVar17 != 0);
    }
LAB_00105d94:
    uVar13 = (ulong)(uVar7 ^ uVar9);
    goto LAB_00104d2f;
  case 0x1f:
    lVar18 = *(long *)(*(long *)(puVar19 + 2) + 0x18);
    if ((lVar18 != 0) && (iVar6 = (int)*(undefined8 *)(lVar18 + -8), iVar6 != 0)) {
      uVar7 = iVar6 * 8;
      uVar16 = uVar7 + 3;
      if (-1 < (int)uVar7) {
        uVar16 = uVar7;
      }
      if (-((int)uVar16 >> 2) == 0) goto LAB_00106733;
      lVar17 = (long)-((int)uVar16 >> 2);
      uVar9 = 0x7f07c65;
      do {
        iVar6 = *(int *)(lVar18 + (int)(uVar16 & 0xfffffffc) + lVar17 * 4);
        lVar17 = lVar17 + 1;
        uVar9 = (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
        uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
      } while ((int)lVar17 != 0);
      goto LAB_00105d94;
    }
    goto LAB_0010630a;
  case 0x20:
    pfVar11 = *(float **)(*(long *)(puVar19 + 2) + 0x18);
    if ((pfVar11 == (float *)0x0) || (iVar6 = (int)*(undefined8 *)(pfVar11 + -2), iVar6 == 0)) {
      uVar13 = 0x3413905a;
    }
    else {
      if (0 < iVar6) {
        pfVar1 = pfVar11 + (ulong)(iVar6 - 1) + 1;
        uVar7 = 0x7f07c65;
        do {
          fVar3 = *pfVar11;
          if (fVar3 != 0.0) {
            if (NAN(fVar3)) {
              uVar7 = uVar7 ^ 0x2db3efa0;
            }
            else {
              uVar7 = uVar7 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                              0x1b873593;
            }
          }
          pfVar11 = pfVar11 + 1;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
        } while (pfVar1 != pfVar11);
        goto LAB_001058b4;
      }
LAB_00106270:
      uVar13 = 0xa38161af;
    }
    break;
  case 0x21:
    pdVar14 = *(double **)(*(long *)(puVar19 + 2) + 0x18);
    if ((pdVar14 != (double *)0x0) && (iVar6 = SUB84(pdVar14[-1],0), iVar6 != 0)) {
      if (iVar6 < 1) goto LAB_00106270;
      pdVar2 = pdVar14 + (ulong)(iVar6 - 1) + 1;
      uVar7 = 0x7f07c65;
      do {
        dVar4 = *pdVar14;
        uVar16 = 0;
        if ((dVar4 != 0.0) && (uVar16 = 0x7f6315f4, !NAN(dVar4))) {
          iVar6 = (int)((ulong)dVar4 >> 0x20);
          uVar16 = (iVar6 * 0x16a88000 | (uint)(iVar6 * -0x3361d2af) >> 0x11) * 0x1b873593;
          uVar7 = uVar7 ^ (SUB84(dVar4,0) * 0x16a88000 |
                          (uint)(SUB84(dVar4,0) * -0x3361d2af) >> 0x11) * 0x1b873593;
        }
        pdVar14 = pdVar14 + 1;
        uVar16 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64 ^ uVar16;
        uVar7 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      } while (pdVar2 != pdVar14);
      goto LAB_001058b4;
    }
LAB_0010630a:
    uVar13 = 0x208ccbee;
    break;
  case 0x22:
    lVar18 = *(long *)(*(long *)(puVar19 + 2) + 0x18);
    if ((lVar18 == 0) || (iVar6 = (int)*(undefined8 *)(lVar18 + -8), iVar6 == 0)) {
LAB_00106300:
      uVar13 = 0x7f07c65;
      break;
    }
    if (iVar6 < 1) goto LAB_00106270;
    uVar7 = 0x7f07c65;
    lVar17 = lVar18 + 8;
    do {
      lVar18 = lVar18 + 8;
      iVar8 = String::hash();
      uVar7 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar7;
      uVar7 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
    } while (lVar17 + (ulong)(iVar6 - 1) * 8 != lVar18);
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    goto LAB_00105591;
  case 0x23:
    pfVar11 = *(float **)(*(long *)(puVar19 + 2) + 0x18);
    if ((pfVar11 == (float *)0x0) || (iVar6 = (int)*(undefined8 *)(pfVar11 + -2), iVar6 == 0))
    goto LAB_00106300;
    if (iVar6 < 1) goto LAB_00106270;
    pfVar1 = pfVar11 + (ulong)(iVar6 - 1) * 2 + 2;
    uVar7 = 0x7f07c65;
    do {
      fVar3 = *pfVar11;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar7 = uVar7 ^ 0x2db3efa0;
        }
        else {
          uVar7 = uVar7 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                          0x1b873593;
        }
      }
      fVar3 = pfVar11[1];
      uVar16 = (uVar7 << 0xd | uVar7 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      pfVar11 = pfVar11 + 2;
      uVar7 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    } while (pfVar1 != pfVar11);
LAB_001058b4:
    uVar16 = uVar7 >> 0x10;
    goto LAB_0010558f;
  case 0x24:
    pfVar11 = *(float **)(*(long *)(puVar19 + 2) + 0x18);
    if ((pfVar11 == (float *)0x0) || (iVar6 = (int)*(undefined8 *)(pfVar11 + -2), iVar6 == 0))
    goto LAB_00106300;
    if (iVar6 < 1) goto LAB_00106270;
    pfVar1 = pfVar11 + (ulong)(iVar6 - 1) * 3 + 3;
    uVar16 = 0x7f07c65;
    do {
      fVar3 = *pfVar11;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[1];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[2];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      pfVar11 = pfVar11 + 3;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    } while (pfVar1 != pfVar11);
    goto LAB_0010558a;
  case 0x25:
    pfVar11 = *(float **)(*(long *)(puVar19 + 2) + 0x18);
    if ((pfVar11 == (float *)0x0) || (iVar6 = (int)*(undefined8 *)(pfVar11 + -2), iVar6 == 0))
    goto LAB_00106300;
    if (iVar6 < 1) goto LAB_00106270;
    pfVar1 = pfVar11 + (ulong)(iVar6 - 1) * 4 + 4;
    uVar16 = 0x7f07c65;
    do {
      fVar3 = *pfVar11;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[1];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[2];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[3];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      pfVar11 = pfVar11 + 4;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    } while (pfVar1 != pfVar11);
    goto LAB_0010558a;
  case 0x26:
    pfVar11 = *(float **)(*(long *)(puVar19 + 2) + 0x18);
    if ((pfVar11 == (float *)0x0) || (iVar6 = (int)*(undefined8 *)(pfVar11 + -2), iVar6 == 0))
    goto LAB_00106300;
    if (iVar6 < 1) goto LAB_00106270;
    pfVar1 = pfVar11 + (ulong)(iVar6 - 1) * 4 + 4;
    uVar16 = 0x7f07c65;
    do {
      fVar3 = *pfVar11;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[1];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[2];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      fVar3 = pfVar11[3];
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
      if (fVar3 != 0.0) {
        if (NAN(fVar3)) {
          uVar16 = uVar16 ^ 0x2db3efa0;
        }
        else {
          uVar16 = uVar16 ^ ((int)fVar3 * 0x16a88000 | (uint)((int)fVar3 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
        }
      }
      pfVar11 = pfVar11 + 4;
      uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
    } while (pfVar1 != pfVar11);
LAB_0010558a:
    uVar7 = uVar16 >> 0x10;
LAB_0010558f:
    uVar7 = uVar7 ^ uVar16;
LAB_00105591:
    uVar7 = uVar7 * -0x7a143595;
    uVar16 = uVar7 >> 0xd;
LAB_0010559c:
    uVar16 = (uVar16 ^ uVar7) * -0x3d4d51cb;
    uVar13 = (ulong)(uVar16 >> 0x10 ^ uVar16);
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
LAB_0010675b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::hash() const */

void __thiscall Variant::hash(Variant *this)

{
  recursive_hash((int)this);
  return;
}



/* Variant::hash_compare(Variant const&, int, bool) const */

bool __thiscall Variant::hash_compare(Variant *this,Variant *param_1,int param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  Variant *pVVar13;
  Variant *this_00;
  long in_FS_OFFSET;
  bool bVar14;
  float fVar15;
  float fVar16;
  bool local_3d;
  undefined4 local_3c;
  int local_38 [2];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)this != *(int *)param_1) goto LAB_001067d8;
  switch(*(int *)this) {
  default:
    local_30 = (undefined1  [16])0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_3c = 0;
    ::Variant::evaluate((Operator *)&local_3c,this,param_1,(Variant *)local_38,&local_3d);
    bVar3 = ::Variant::operator_cast_to_bool((Variant *)local_38);
    if ((&needs_deinit)[local_38[0]] != '\0') {
      _clear_internal((Variant *)local_38);
    }
    break;
  case 2:
    bVar3 = *(long *)(this + 8) == *(long *)(param_1 + 8);
    break;
  case 3:
    bVar3 = true;
    if (*(double *)(this + 8) != *(double *)(param_1 + 8)) {
      bVar3 = (NAN(*(double *)(param_1 + 8)) && param_3) && NAN(*(double *)(this + 8));
    }
    break;
  case 4:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==((String *)(this + 8),(String *)(param_1 + 8));
      return (bool)uVar5;
    }
    goto LAB_00107387;
  case 5:
    if ((*(float *)(this + 8) != *(float *)(param_1 + 8)) &&
       ((!NAN(*(float *)(param_1 + 8)) || (!NAN(*(float *)(this + 8)))))) goto LAB_001067d8;
    fVar16 = *(float *)(this + 0xc);
    fVar15 = *(float *)(param_1 + 0xc);
    bVar14 = fVar16 == fVar15;
    if (!NAN(fVar16) && !NAN(fVar15)) {
LAB_001068f0:
      bVar3 = true;
      if (bVar14) break;
    }
LAB_001068fb:
    bVar3 = NAN(fVar16) && NAN(fVar15);
    break;
  case 6:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pVVar13 = param_1 + 8;
      this_00 = this + 8;
LAB_001069fc:
      uVar5 = Vector2i::operator==((Vector2i *)this_00,pVVar13);
      return (bool)uVar5;
    }
    goto LAB_00107387;
  case 7:
  case 0xc:
  case 0xe:
    if ((*(float *)(this + 8) == *(float *)(param_1 + 8)) ||
       ((NAN(*(float *)(param_1 + 8)) && (NAN(*(float *)(this + 8)))))) {
      if ((*(float *)(this + 0xc) == *(float *)(param_1 + 0xc)) ||
         ((NAN(*(float *)(param_1 + 0xc)) && (NAN(*(float *)(this + 0xc)))))) {
        if ((*(float *)(this + 0x10) == *(float *)(param_1 + 0x10)) ||
           ((NAN(*(float *)(param_1 + 0x10)) && (NAN(*(float *)(this + 0x10)))))) {
          fVar16 = *(float *)(this + 0x14);
          fVar15 = *(float *)(param_1 + 0x14);
          bVar14 = fVar16 == fVar15;
          if (!NAN(fVar16) && !NAN(fVar15)) goto LAB_001068f0;
          goto LAB_001068fb;
        }
      }
    }
    goto LAB_001067d8;
  case 8:
    cVar4 = Vector2i::operator==((Vector2i *)(this + 8),param_1 + 8);
    if (cVar4 != '\0') {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        pVVar13 = param_1 + 0x10;
        this_00 = this + 0x10;
        goto LAB_001069fc;
      }
      goto LAB_00107387;
    }
    goto LAB_001067d8;
  case 9:
    if ((*(float *)(this + 8) == *(float *)(param_1 + 8)) ||
       ((NAN(*(float *)(param_1 + 8)) && (NAN(*(float *)(this + 8)))))) {
      if ((*(float *)(this + 0xc) == *(float *)(param_1 + 0xc)) ||
         ((NAN(*(float *)(param_1 + 0xc)) && (NAN(*(float *)(this + 0xc)))))) {
        fVar15 = *(float *)(this + 0x10);
        fVar16 = *(float *)(param_1 + 0x10);
        bVar14 = fVar15 == fVar16;
        if (!NAN(fVar15) && !NAN(fVar16)) goto LAB_001068f0;
        goto LAB_001068fb;
      }
    }
    goto LAB_001067d8;
  case 10:
    if ((*(int *)(param_1 + 8) != *(int *)(this + 8)) ||
       (*(int *)(this + 0xc) != *(int *)(param_1 + 0xc))) goto LAB_001067d8;
    bVar3 = *(int *)(param_1 + 0x10) == *(int *)(this + 0x10);
    break;
  case 0xb:
    lVar6 = 0;
    do {
      fVar15 = *(float *)(*(long *)(this + 8) + lVar6);
      fVar16 = *(float *)(*(long *)(param_1 + 8) + lVar6);
      if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
      fVar15 = *(float *)(*(long *)(this + 8) + 4 + lVar6);
      fVar16 = *(float *)(*(long *)(param_1 + 8) + 4 + lVar6);
      if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x18);
    goto LAB_00106af0;
  case 0xd:
    if (((*(int *)(this + 8) != *(int *)(param_1 + 8)) ||
        (*(int *)(param_1 + 0xc) != *(int *)(this + 0xc))) ||
       (*(int *)(param_1 + 0x10) != *(int *)(this + 0x10))) goto LAB_001067d8;
    bVar3 = *(int *)(param_1 + 0x14) == *(int *)(this + 0x14);
    break;
  case 0xf:
  case 0x14:
    if ((*(float *)(this + 8) == *(float *)(param_1 + 8)) ||
       ((NAN(*(float *)(param_1 + 8)) && (NAN(*(float *)(this + 8)))))) {
      if ((*(float *)(this + 0xc) == *(float *)(param_1 + 0xc)) ||
         ((NAN(*(float *)(param_1 + 0xc)) && (NAN(*(float *)(this + 0xc)))))) {
        if ((*(float *)(this + 0x10) == *(float *)(param_1 + 0x10)) ||
           ((NAN(*(float *)(param_1 + 0x10)) && (NAN(*(float *)(this + 0x10)))))) {
          fVar15 = *(float *)(this + 0x14);
          fVar16 = *(float *)(param_1 + 0x14);
          bVar14 = fVar15 == fVar16;
          if (!NAN(fVar15) && !NAN(fVar16)) goto LAB_001068f0;
          goto LAB_001068fb;
        }
      }
    }
    goto LAB_001067d8;
  case 0x10:
    pfVar7 = *(float **)(this + 8);
    pfVar10 = *(float **)(param_1 + 8);
    if ((*pfVar7 == *pfVar10) || ((NAN(*pfVar10) && (NAN(*pfVar7))))) {
      if ((pfVar7[1] == pfVar10[1]) || ((NAN(pfVar10[1]) && (NAN(pfVar7[1]))))) {
        if ((pfVar7[2] == pfVar10[2]) || ((NAN(pfVar10[2]) && (NAN(pfVar7[2]))))) {
          if ((pfVar7[3] == pfVar10[3]) || ((NAN(pfVar10[3]) && (NAN(pfVar7[3]))))) {
            if ((pfVar7[4] == pfVar10[4]) || ((NAN(pfVar10[4]) && (NAN(pfVar7[4]))))) {
              fVar15 = pfVar7[5];
              fVar16 = pfVar10[5];
              bVar14 = fVar15 == fVar16;
              if (!NAN(fVar15) && !NAN(fVar16)) goto LAB_001068f0;
              goto LAB_001068fb;
            }
          }
        }
      }
    }
    goto LAB_001067d8;
  case 0x11:
    lVar6 = *(long *)(this + 8);
    lVar11 = *(long *)(param_1 + 8);
    lVar8 = 0;
    do {
      if ((*(float *)(lVar6 + lVar8) != *(float *)(lVar11 + lVar8)) &&
         ((!NAN(*(float *)(lVar11 + lVar8)) || (!NAN(*(float *)(lVar6 + lVar8))))))
      goto LAB_001067d8;
      fVar15 = *(float *)(lVar6 + 4 + lVar8);
      fVar16 = *(float *)(lVar11 + 4 + lVar8);
      if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
      fVar15 = *(float *)(lVar6 + 8 + lVar8);
      fVar16 = *(float *)(lVar11 + 8 + lVar8);
      if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
      lVar8 = lVar8 + 0xc;
    } while (lVar8 != 0x24);
    goto LAB_00106af0;
  case 0x12:
    lVar6 = *(long *)(this + 8);
    lVar11 = *(long *)(param_1 + 8);
    lVar8 = 0;
    do {
      if ((*(float *)(lVar6 + lVar8) != *(float *)(lVar11 + lVar8)) &&
         ((!NAN(*(float *)(lVar11 + lVar8)) || (!NAN(*(float *)(lVar6 + lVar8))))))
      goto LAB_001067d8;
      fVar15 = *(float *)(lVar6 + 4 + lVar8);
      fVar16 = *(float *)(lVar11 + 4 + lVar8);
      if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
      fVar15 = *(float *)(lVar6 + 8 + lVar8);
      fVar16 = *(float *)(lVar11 + 8 + lVar8);
      if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
      lVar8 = lVar8 + 0xc;
    } while (lVar8 != 0x24);
    if ((*(float *)(lVar6 + 0x24) == *(float *)(lVar11 + 0x24)) ||
       ((NAN(*(float *)(lVar11 + 0x24)) && (NAN(*(float *)(lVar6 + 0x24)))))) {
      if ((*(float *)(lVar6 + 0x28) == *(float *)(lVar11 + 0x28)) ||
         ((NAN(*(float *)(lVar11 + 0x28)) && (NAN(*(float *)(lVar6 + 0x28)))))) {
        fVar15 = *(float *)(lVar6 + 0x2c);
        fVar16 = *(float *)(lVar11 + 0x2c);
        bVar14 = fVar15 == fVar16;
        if (!NAN(fVar15) && !NAN(fVar16)) goto LAB_001068f0;
        goto LAB_001068fb;
      }
    }
    goto LAB_001067d8;
  case 0x13:
    pfVar10 = *(float **)(this + 8);
    pfVar12 = *(float **)(param_1 + 8);
    pfVar7 = pfVar10 + 0x10;
    do {
      if ((*pfVar10 != *pfVar12) && ((!NAN(*pfVar12) || (!NAN(*pfVar10))))) goto LAB_001067d8;
      if ((pfVar10[1] != pfVar12[1]) && ((!NAN(pfVar12[1]) || (!NAN(pfVar10[1])))))
      goto LAB_001067d8;
      if ((pfVar10[2] != pfVar12[2]) && ((!NAN(pfVar12[2]) || (!NAN(pfVar10[2])))))
      goto LAB_001067d8;
      if ((pfVar10[3] != pfVar12[3]) && ((!NAN(pfVar12[3]) || (!NAN(pfVar10[3])))))
      goto LAB_001067d8;
      pfVar10 = pfVar10 + 4;
      pfVar12 = pfVar12 + 4;
    } while (pfVar7 != pfVar10);
LAB_00106af0:
    bVar3 = true;
    break;
  case 0x15:
    bVar3 = *(long *)(param_1 + 8) == *(long *)(this + 8);
    break;
  case 0x1b:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Dictionary::recursive_equal((Dictionary *)(this + 8),(int)param_1 + 8);
      return (bool)uVar5;
    }
    goto LAB_00107387;
  case 0x1c:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Array::recursive_equal((Array *)(this + 8),(int)param_1 + 8);
      return (bool)uVar5;
    }
    goto LAB_00107387;
  case 0x20:
    lVar11 = *(long *)(*(long *)(this + 8) + 0x18);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    if (lVar11 == 0) {
LAB_0010735b:
      if (lVar8 == 0) goto LAB_00106af0;
      bVar3 = *(long *)(lVar8 + -8) == 0;
    }
    else {
      lVar6 = *(long *)(lVar11 + -8);
      if (lVar8 != 0) {
        if (lVar6 == *(long *)(lVar8 + -8)) {
          if (0 < lVar6) {
            lVar9 = 0;
            do {
              fVar15 = *(float *)(lVar11 + lVar9 * 4);
              fVar16 = *(float *)(lVar8 + lVar9 * 4);
              if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
              lVar9 = lVar9 + 1;
            } while (lVar6 != lVar9);
          }
          goto LAB_00106af0;
        }
        goto LAB_001067d8;
      }
LAB_00107350:
      bVar3 = lVar6 == 0;
    }
    break;
  case 0x21:
    lVar11 = *(long *)(*(long *)(this + 8) + 0x18);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    if (lVar11 == 0) goto LAB_0010735b;
    lVar6 = *(long *)(lVar11 + -8);
    if (lVar8 == 0) goto LAB_00107350;
    if (*(long *)(lVar8 + -8) == lVar6) {
      if (0 < lVar6) {
        lVar9 = 0;
        do {
          dVar1 = *(double *)(lVar11 + lVar9 * 8);
          dVar2 = *(double *)(lVar8 + lVar9 * 8);
          if ((dVar1 != dVar2) && ((!NAN(dVar2) || (!NAN(dVar1))))) goto LAB_001067d8;
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
      }
      goto LAB_00106af0;
    }
    goto LAB_001067d8;
  case 0x23:
    lVar11 = *(long *)(*(long *)(this + 8) + 0x18);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    if (lVar11 == 0) goto LAB_0010735b;
    lVar6 = *(long *)(lVar11 + -8);
    if (lVar8 == 0) goto LAB_00107350;
    if (*(long *)(lVar8 + -8) == lVar6) {
      if (0 < lVar6) {
        lVar9 = 0;
        do {
          fVar15 = *(float *)(lVar11 + lVar9 * 8);
          fVar16 = *(float *)(lVar8 + lVar9 * 8);
          if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
          fVar15 = *(float *)(lVar11 + 4 + lVar9 * 8);
          fVar16 = *(float *)(lVar8 + 4 + lVar9 * 8);
          if ((fVar15 != fVar16) && ((!NAN(fVar16) || (!NAN(fVar15))))) goto LAB_001067d8;
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
      }
      goto LAB_00106af0;
    }
    goto LAB_001067d8;
  case 0x24:
    pfVar7 = *(float **)(*(long *)(this + 8) + 0x18);
    pfVar10 = *(float **)(*(long *)(param_1 + 8) + 0x18);
    if (pfVar7 != (float *)0x0) {
      lVar6 = *(long *)(pfVar7 + -2);
      if (pfVar10 == (float *)0x0) goto LAB_00107350;
      if (*(long *)(pfVar10 + -2) == lVar6) {
        if (0 < lVar6) {
          lVar11 = 0;
          do {
            if ((*pfVar7 != *pfVar10) && ((!NAN(*pfVar10) || (!NAN(*pfVar7))))) goto LAB_001067d8;
            if ((pfVar7[1] != pfVar10[1]) && ((!NAN(pfVar10[1]) || (!NAN(pfVar7[1])))))
            goto LAB_001067d8;
            if ((pfVar7[2] != pfVar10[2]) && ((!NAN(pfVar10[2]) || (!NAN(pfVar7[2])))))
            goto LAB_001067d8;
            lVar11 = lVar11 + 1;
            pfVar7 = pfVar7 + 3;
            pfVar10 = pfVar10 + 3;
          } while (lVar6 != lVar11);
        }
        goto LAB_00106af0;
      }
      goto LAB_001067d8;
    }
LAB_00107371:
    if (pfVar10 == (float *)0x0) goto LAB_00106af0;
    bVar3 = *(long *)(pfVar10 + -2) == 0;
    break;
  case 0x25:
    pfVar7 = *(float **)(*(long *)(this + 8) + 0x18);
    pfVar10 = *(float **)(*(long *)(param_1 + 8) + 0x18);
    if (pfVar7 == (float *)0x0) goto LAB_00107371;
    lVar6 = *(long *)(pfVar7 + -2);
    if (pfVar10 == (float *)0x0) goto LAB_00107350;
    if (*(long *)(pfVar10 + -2) == lVar6) {
      if (0 < lVar6) {
        lVar11 = 0;
        do {
          if ((*pfVar7 != *pfVar10) && ((!NAN(*pfVar10) || (!NAN(*pfVar7))))) goto LAB_001067d8;
          if ((pfVar7[1] != pfVar10[1]) && ((!NAN(pfVar10[1]) || (!NAN(pfVar7[1])))))
          goto LAB_001067d8;
          if ((pfVar7[2] != pfVar10[2]) && ((!NAN(pfVar10[2]) || (!NAN(pfVar7[2])))))
          goto LAB_001067d8;
          if ((pfVar7[3] != pfVar10[3]) && ((!NAN(pfVar10[3]) || (!NAN(pfVar7[3])))))
          goto LAB_001067d8;
          lVar11 = lVar11 + 1;
          pfVar7 = pfVar7 + 4;
          pfVar10 = pfVar10 + 4;
        } while (lVar6 != lVar11);
      }
      goto LAB_00106af0;
    }
    goto LAB_001067d8;
  case 0x26:
    pfVar7 = *(float **)(*(long *)(this + 8) + 0x18);
    pfVar10 = *(float **)(*(long *)(param_1 + 8) + 0x18);
    if (pfVar7 == (float *)0x0) goto LAB_00107371;
    lVar6 = *(long *)(pfVar7 + -2);
    if (pfVar10 == (float *)0x0) goto LAB_00107350;
    if (*(long *)(pfVar10 + -2) == lVar6) {
      if (0 < lVar6) {
        lVar11 = 0;
        do {
          if ((*pfVar7 != *pfVar10) && ((!NAN(*pfVar10) || (!NAN(*pfVar7))))) goto LAB_001067d8;
          if ((pfVar7[1] != pfVar10[1]) && ((!NAN(pfVar10[1]) || (!NAN(pfVar7[1])))))
          goto LAB_001067d8;
          if ((pfVar7[2] != pfVar10[2]) && ((!NAN(pfVar10[2]) || (!NAN(pfVar7[2])))))
          goto LAB_001067d8;
          if ((pfVar7[3] != pfVar10[3]) && ((!NAN(pfVar10[3]) || (!NAN(pfVar7[3])))))
          goto LAB_001067d8;
          lVar11 = lVar11 + 1;
          pfVar7 = pfVar7 + 4;
          pfVar10 = pfVar10 + 4;
        } while (lVar6 != lVar11);
      }
      goto LAB_00106af0;
    }
LAB_001067d8:
    bVar3 = false;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
LAB_00107387:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant const&) const */

void __thiscall Variant::operator==(Variant *this,Variant *param_1)

{
  hash_compare(this,param_1,0,true);
  return;
}



/* Variant::identity_compare(Variant const&) const */

bool __thiscall Variant::identity_compare(Variant *this,Variant *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)this;
  if (uVar1 != *(uint *)param_1) {
    return false;
  }
  if (uVar1 == 0x1c) {
    lVar3 = Array::id();
    lVar4 = Array::id();
    return lVar3 == lVar4;
  }
  if (uVar1 < 0x1d) {
    if (uVar1 == 0x18) {
      return *(long *)(param_1 + 8) == *(long *)(this + 8);
    }
    if (uVar1 == 0x1b) {
      lVar3 = Dictionary::id();
      lVar4 = Dictionary::id();
      return lVar3 == lVar4;
    }
  }
  else if (uVar1 - 0x1d < 10) {
    return *(long *)(this + 8) == *(long *)(param_1 + 8);
  }
  uVar2 = hash_compare(this,param_1,0,true);
  return (bool)uVar2;
}



/* StringLikeVariantComparator::compare(Variant const&, Variant const&) */

void StringLikeVariantComparator::compare(Variant *param_1,Variant *param_2)

{
  char cVar1;
  
  cVar1 = ::Variant::hash_compare(param_1,param_2,0,true);
  if (cVar1 == '\0') {
    if (*(int *)param_1 == 4) {
      if (*(int *)param_2 == 0x15) {
        operator==((String *)(param_1 + 8),(StringName *)(param_2 + 8));
        return;
      }
    }
    else if ((*(int *)param_1 == 0x15) && (*(int *)param_2 == 4)) {
      StringName::operator==((StringName *)(param_1 + 8),(String *)(param_2 + 8));
      return;
    }
  }
  return;
}



/* Variant::is_ref_counted() const */

ulong __thiscall Variant::is_ref_counted(Variant *this)

{
  if (*(int *)this != 0x18) {
    return 0;
  }
  return *(ulong *)(this + 8) >> 0x3f;
}



/* Variant::is_type_shared(Variant::Type) */

bool Variant::is_type_shared(int param_1)

{
  return param_1 == 0x18 || param_1 - 0x1bU < 2;
}



/* Variant::is_shared() const */

bool __thiscall Variant::is_shared(Variant *this)

{
  return *(int *)this == 0x18 || *(int *)this - 0x1bU < 2;
}



/* Variant::is_read_only() const */

undefined8 __thiscall Variant::is_read_only(Variant *this)

{
  undefined8 uVar1;
  
  if (*(int *)this == 0x1b) {
    uVar1 = Dictionary::is_read_only();
    return uVar1;
  }
  if (*(int *)this != 0x1c) {
    return 0;
  }
  uVar1 = Array::is_read_only();
  return uVar1;
}



/* Variant::_variant_call_error(String const&, Callable::CallError&) */

void __thiscall Variant::_variant_call_error(Variant *this,String *param_1,CallError *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)param_2;
  if (iVar2 == 2) {
    local_60 = 0;
    local_50 = 2;
    local_58 = "\'.";
    String::parse_latin1((StrRange *)&local_60);
    get_type_name((Variant *)&local_68,*(undefined4 *)(param_2 + 8));
    local_58 = ", expected \'";
    local_78 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_78);
    itos((long)&local_88);
    operator+((char *)&local_80,(String *)"Invalid type for argument #");
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_58,(String *)&local_70);
    String::operator+((String *)&local_90,(String *)&local_58);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
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
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
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
    String::utf8();
    uVar5 = CharString::get_data();
    _err_print_error("_variant_call_error","core/variant/variant.cpp",0xd9e,uVar5,0,0);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
  else if (iVar2 == 3) {
    local_60 = 0;
    local_50 = 1;
    local_58 = "\'";
    String::parse_latin1((StrRange *)&local_60);
    operator+((char *)&local_58,(String *)"Too many arguments for method \'");
    String::operator+((String *)&local_68,(String *)&local_58);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
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
    String::utf8();
    uVar5 = CharString::get_data();
    _err_print_error("_variant_call_error","core/variant/variant.cpp",0xda7,uVar5,0,0);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else if (iVar2 == 1) {
    local_60 = 0;
    local_50 = 2;
    local_58 = "\'.";
    String::parse_latin1((StrRange *)&local_60);
    get_type_name((Variant *)&local_68,*(undefined4 *)this);
    local_78 = 0;
    local_58 = "\' for type \'";
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_78);
    operator+((char *)&local_80,(String *)"Invalid method \'");
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_58,(String *)&local_70);
    String::operator+((String *)&local_88,(String *)&local_58);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
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
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
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
    String::utf8();
    uVar5 = CharString::get_data();
    _err_print_error("_variant_call_error","core/variant/variant.cpp",0xda3,uVar5,0,0);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::construct_from_string(String const&, Variant&, void (*)(String const&, void*, Variant&),
   void*) */

void Variant::construct_from_string
               (String *param_1,Variant *param_2,_func_void_String_ptr_void_ptr_Variant_ptr *param_3
               ,void *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((&needs_deinit)[*(int *)param_2] != '\0') {
    _clear_internal(param_2);
  }
  *(undefined4 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::get_construct_string() const */

void Variant::get_construct_string(void)

{
  Variant *in_RSI;
  String *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  VariantWriter::write_to_string
            (in_RSI,in_RDI,(_func_String_void_ptr_Ref_ptr *)0x0,(void *)0x0,true);
  return;
}



/* Variant::get_call_error_text(Object*, StringName const&, Variant const**, int,
   Callable::CallError const&) */

Variant * __thiscall
Variant::get_call_error_text
          (Variant *this,Object *param_1,StringName *param_2,Variant **param_3,int param_4,
          CallError *param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  Object *pOVar8;
  long lVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  StrRange *local_e0;
  String *local_d8;
  char *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  char *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (char *)0x0;
  switch(*(undefined4 *)param_5) {
  case 0:
    *(undefined8 *)this = 0;
    local_68 = "Call OK";
    local_60 = 7;
    String::parse_latin1((StrRange *)this);
    goto LAB_001083a8;
  case 1:
    local_60 = 0x10;
    local_68 = "Method not found";
    break;
  case 2:
    iVar3 = *(int *)(param_5 + 4);
    iVar1 = iVar3 + 1;
    if (param_3 == (Variant **)0x0) {
      get_type_name((Variant *)&local_70,*(undefined4 *)(param_5 + 8),iVar1);
      local_80 = 0;
      local_68 = " from [missing argptr, type unknown] to ";
      local_60 = 0x28;
      String::parse_latin1((StrRange *)&local_80);
      itos((long)&local_90);
      pcVar10 = "Cannot convert argument ";
      goto LAB_00107dc9;
    }
    get_type_name((Variant *)&local_70,*(undefined4 *)(param_5 + 8),iVar1);
    local_80 = 0;
    local_68 = " to ";
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_80);
    get_type_name((Variant *)&local_90,*(undefined4 *)param_3[iVar3]);
    local_a0 = 0;
    local_68 = " from ";
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_a0);
    itos((long)&local_b0);
    operator+((char *)&local_a8,(String *)"Cannot convert argument ");
    String::operator+((String *)&local_98,(String *)&local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    pcVar5 = local_68;
    pcVar10 = local_b8;
    if (local_b8 == local_68) {
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_b8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
    }
    else {
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_b8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar10 + -0x10,false);
        }
      }
      local_b8 = local_68;
    }
    lVar7 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar2 = (long *)(local_78 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar2 = (long *)(local_88 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar2 = (long *)(local_98 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar2 = (long *)(local_a8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar2 = (long *)(local_b0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar2 = (long *)(local_a0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    goto LAB_00107e93;
  case 3:
  case 4:
    itos((long)&local_70);
    local_80 = 0;
    local_68 = " arguments, but called with ";
    local_60 = 0x1c;
    String::parse_latin1((StrRange *)&local_80);
    itos((long)&local_90);
    pcVar10 = "Method expected ";
LAB_00107dc9:
    operator+((char *)&local_88,(String *)pcVar10);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    pcVar5 = local_68;
    pcVar10 = local_b8;
    if (local_b8 == local_68) {
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_b8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
    }
    else {
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_b8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar10 + -0x10,false);
        }
      }
      local_b8 = local_68;
    }
    lVar7 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar2 = (long *)(local_78 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar2 = (long *)(local_88 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
LAB_00107e93:
    pcVar10 = local_90;
    if (local_90 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_90 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_90 = (char *)0x0;
        Memory::free_static(pcVar10 + -0x10,false);
      }
    }
    lVar7 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar2 = (long *)(local_80 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    lVar7 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar2 = (long *)(local_70 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    goto switchD_00107d4a_default;
  case 5:
    local_60 = 0x10;
    local_68 = "Instance is null";
    break;
  case 6:
    local_60 = 0x22;
    local_68 = "Method not const in const instance";
    break;
  default:
    goto switchD_00107d4a_default;
  }
  String::parse_latin1((StrRange *)&local_b8);
switchD_00107d4a_default:
  local_d8 = (String *)&local_90;
  local_e0 = (StrRange *)&local_80;
  local_90 = (char *)0x0;
  if (param_1 != (Object *)0x0) {
    (**(code **)(*(long *)param_1 + 0x48))((String *)&local_68);
    pcVar5 = local_68;
    pcVar10 = local_90;
    if (local_90 == local_68) {
      if (local_90 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_90 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
    }
    else {
      if (local_90 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_90 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_90 = (char *)0x0;
          Memory::free_static(pcVar10 + -0x10,false);
        }
      }
      local_90 = local_68;
    }
    (**(code **)(*(long *)param_1 + 0x98))((Variant *)local_58,param_1);
    lVar7 = get_validated_object((Variant *)local_58);
    if (lVar7 == 0) {
LAB_00108790:
      cVar6 = (&needs_deinit)[local_58[0]];
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Resource::typeinfo,0);
      if (pOVar8 != (Object *)0x0) {
        cVar6 = RefCounted::reference();
        if (cVar6 != '\0') {
          if ((&needs_deinit)[local_58[0]] != '\0') {
            _clear_internal((Variant *)local_58);
          }
          Resource::get_path();
          cVar6 = String::is_resource_file();
          pcVar10 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar2 = (long *)(local_68 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar10 + -0x10,false);
            }
          }
          if (cVar6 != '\0') {
            local_70 = 0;
            local_68 = ")";
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_70);
            Resource::get_path();
            String::get_file();
            operator+((char *)&local_78,(String *)&_LC95);
            String::operator+((String *)&local_68,(String *)&local_78);
            String::operator+=(local_d8,(String *)&local_68);
            pcVar10 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
            lVar7 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar2 = (long *)(local_78 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar2 = (long *)(local_88 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
            lVar7 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar2 = (long *)(local_70 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
              }
            }
          }
          String::operator+=(local_d8,"::");
          cVar6 = RefCounted::unreference();
          if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar8), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
          goto LAB_001081e0;
        }
        goto LAB_00108790;
      }
      cVar6 = (&needs_deinit)[local_58[0]];
    }
    if (cVar6 != '\0') {
      _clear_internal((Variant *)local_58);
    }
    String::operator+=(local_d8,"::");
  }
LAB_001081e0:
  local_70 = 0;
  local_68 = "\': ";
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  lVar7 = *(long *)param_2;
  if (lVar7 == 0) {
    local_80 = 0;
  }
  else {
    pcVar10 = *(char **)(lVar7 + 8);
    local_80 = 0;
    if (pcVar10 == (char *)0x0) {
      plVar2 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
      if (*(long *)(lVar7 + 0x10) != 0) {
        do {
          lVar4 = *plVar2;
          if (lVar4 == 0) goto LAB_0010825b;
          LOCK();
          lVar9 = *plVar2;
          bVar11 = lVar4 == lVar9;
          if (bVar11) {
            *plVar2 = lVar4 + 1;
            lVar9 = lVar4;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar9 != -1) {
          local_80 = *(long *)(lVar7 + 0x10);
        }
      }
    }
    else {
      local_60 = strlen(pcVar10);
      local_68 = pcVar10;
      String::parse_latin1(local_e0);
    }
  }
LAB_0010825b:
  operator+((char *)&local_88,(String *)&_LC81);
  String::operator+((String *)&local_78,(String *)&local_88);
  String::operator+((String *)&local_68,(String *)&local_78);
  String::operator+((String *)this,(String *)&local_68);
  pcVar10 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar10 + -0x10,false);
    }
  }
  lVar7 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar2 = (long *)(local_78 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  lVar7 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar2 = (long *)(local_88 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  lVar7 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar2 = (long *)(local_80 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  lVar7 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar2 = (long *)(local_70 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  pcVar10 = local_90;
  if (local_90 != (char *)0x0) {
    LOCK();
    plVar2 = (long *)(local_90 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_90 = (char *)0x0;
      Memory::free_static(pcVar10 + -0x10,false);
    }
  }
LAB_001083a8:
  pcVar10 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar2 = (long *)(local_b8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static(pcVar10 + -0x10,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::get_call_error_text(StringName const&, Variant const**, int, Callable::CallError const&)
    */

Variant * __thiscall
Variant::get_call_error_text
          (Variant *this,StringName *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_call_error_text(this,(Object *)0x0,param_1,param_2,param_3,param_4);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::register_types() */

void Variant::register_types(void)

{
  ::Variant::_register_variant_operators();
  ::Variant::_register_variant_methods();
  ::Variant::_register_variant_setters_getters();
  ::Variant::_register_variant_constructors();
  ::Variant::_register_variant_destructors();
  ::Variant::_register_variant_utility_functions();
  return;
}



/* Variant::unregister_types() */

void Variant::unregister_types(void)

{
  ::Variant::_unregister_variant_operators();
  ::Variant::_unregister_variant_methods();
  ::Variant::_unregister_variant_setters_getters();
  ::Variant::_unregister_variant_destructors();
  ::Variant::_unregister_variant_utility_functions();
  return;
}



/* Variant::Variant(AABB const&) */

void __thiscall Variant::Variant(Variant *this,AABB *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BucketSmall *pBVar3;
  
  *(undefined4 *)this = 0x10;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  pBVar3 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                      &Pools::_bucket_small);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(BucketSmall **)(this + 8) = pBVar3;
  *(undefined8 *)pBVar3 = uVar1;
  *(undefined8 *)(pBVar3 + 8) = uVar2;
  *(undefined8 *)(pBVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* Variant::Variant(Transform2D const&) */

void __thiscall Variant::Variant(Variant *this,Transform2D *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BucketSmall *pBVar3;
  
  *(undefined4 *)this = 0xb;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  pBVar3 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                      &Pools::_bucket_small);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(BucketSmall **)(this + 8) = pBVar3;
  *(undefined8 *)pBVar3 = uVar1;
  *(undefined8 *)(pBVar3 + 8) = uVar2;
  *(undefined8 *)(pBVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* Variant::Variant(Basis const&) */

void __thiscall Variant::Variant(Variant *this,Basis *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BucketMedium *pBVar3;
  
  *(undefined4 *)this = 0x11;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  pBVar3 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                      &Pools::_bucket_medium);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(BucketMedium **)(this + 8) = pBVar3;
  *(undefined8 *)pBVar3 = uVar1;
  *(undefined8 *)(pBVar3 + 8) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(pBVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pBVar3 + 0x18) = uVar1;
  *(undefined4 *)(pBVar3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}



/* Variant::Variant(Transform3D const&) */

void __thiscall Variant::Variant(Variant *this,Transform3D *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BucketMedium *pBVar3;
  
  *(undefined4 *)this = 0x12;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  pBVar3 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                      &Pools::_bucket_medium);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(BucketMedium **)(this + 8) = pBVar3;
  *(undefined8 *)pBVar3 = uVar1;
  *(undefined8 *)(pBVar3 + 8) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(pBVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pBVar3 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(pBVar3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(pBVar3 + 0x28) = uVar1;
  return;
}



/* Variant::Variant(Projection const&) */

void __thiscall Variant::Variant(Variant *this,Projection *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BucketLarge *pBVar3;
  
  *(undefined4 *)this = 0x13;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  pBVar3 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                     ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                      &Pools::_bucket_large);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(BucketLarge **)(this + 8) = pBVar3;
  *(undefined8 *)pBVar3 = uVar1;
  *(undefined8 *)(pBVar3 + 8) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(pBVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pBVar3 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(pBVar3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(pBVar3 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(pBVar3 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(pBVar3 + 0x38) = uVar1;
  return;
}



/* Variant::reference(Variant const&) */

void __thiscall Variant::reference(Variant *this,Variant *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  BucketMedium *pBVar8;
  BucketSmall *pBVar9;
  BucketLarge *pBVar10;
  undefined **ppuVar11;
  bool bVar12;
  
  if (*(int *)this == 0x18) {
    if (*(int *)param_1 == 0x18) goto LAB_00108cf0;
LAB_00108cd5:
    _clear_internal(this);
  }
  else if ((&needs_deinit)[*(int *)this] != '\0') goto LAB_00108cd5;
  *(undefined4 *)this = 0;
  uVar2 = *(undefined4 *)param_1;
  *(undefined4 *)this = uVar2;
  switch(uVar2) {
  case 1:
    this[8] = param_1[8];
    break;
  case 2:
  case 5:
  case 6:
  case 0x17:
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    break;
  case 3:
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    break;
  case 4:
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(param_1 + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
      return;
    }
    break;
  case 7:
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar5;
    break;
  case 8:
  case 0x14:
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar5;
    break;
  case 9:
  case 10:
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    break;
  case 0xb:
    pBVar9 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                       ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                        &Pools::_bucket_small);
    *(BucketSmall **)(this + 8) = pBVar9;
    puVar7 = *(undefined8 **)(param_1 + 8);
    uVar5 = puVar7[1];
    *(undefined8 *)pBVar9 = *puVar7;
    *(undefined8 *)(pBVar9 + 8) = uVar5;
    *(undefined8 *)(pBVar9 + 0x10) = puVar7[2];
    break;
  case 0xc:
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar5;
    break;
  case 0xd:
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar5;
    break;
  case 0xe:
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar5;
    break;
  case 0xf:
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar5;
    break;
  case 0x10:
    pBVar9 = PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
                       ((PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *)
                        &Pools::_bucket_small);
    *(BucketSmall **)(this + 8) = pBVar9;
    puVar7 = *(undefined8 **)(param_1 + 8);
    uVar5 = puVar7[1];
    *(undefined8 *)pBVar9 = *puVar7;
    *(undefined8 *)(pBVar9 + 8) = uVar5;
    *(undefined8 *)(pBVar9 + 0x10) = puVar7[2];
    break;
  case 0x11:
    pBVar8 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                       ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                        &Pools::_bucket_medium);
    *(BucketMedium **)(this + 8) = pBVar8;
    puVar7 = *(undefined8 **)(param_1 + 8);
    uVar5 = puVar7[1];
    *(undefined8 *)pBVar8 = *puVar7;
    *(undefined8 *)(pBVar8 + 8) = uVar5;
    uVar5 = puVar7[3];
    *(undefined8 *)(pBVar8 + 0x10) = puVar7[2];
    *(undefined8 *)(pBVar8 + 0x18) = uVar5;
    *(undefined4 *)(pBVar8 + 0x20) = *(undefined4 *)(puVar7 + 4);
    break;
  case 0x12:
    pBVar8 = PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
                       ((PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *)
                        &Pools::_bucket_medium);
    *(BucketMedium **)(this + 8) = pBVar8;
    puVar7 = *(undefined8 **)(param_1 + 8);
    uVar5 = puVar7[1];
    *(undefined8 *)pBVar8 = *puVar7;
    *(undefined8 *)(pBVar8 + 8) = uVar5;
    uVar5 = puVar7[3];
    *(undefined8 *)(pBVar8 + 0x10) = puVar7[2];
    *(undefined8 *)(pBVar8 + 0x18) = uVar5;
    uVar5 = puVar7[5];
    *(undefined8 *)(pBVar8 + 0x20) = puVar7[4];
    *(undefined8 *)(pBVar8 + 0x28) = uVar5;
    break;
  case 0x13:
    pBVar10 = PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
                        ((PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *)
                         &Pools::_bucket_large);
    *(BucketLarge **)(this + 8) = pBVar10;
    puVar7 = *(undefined8 **)(param_1 + 8);
    uVar5 = puVar7[1];
    *(undefined8 *)pBVar10 = *puVar7;
    *(undefined8 *)(pBVar10 + 8) = uVar5;
    uVar5 = puVar7[3];
    *(undefined8 *)(pBVar10 + 0x10) = puVar7[2];
    *(undefined8 *)(pBVar10 + 0x18) = uVar5;
    uVar5 = puVar7[5];
    *(undefined8 *)(pBVar10 + 0x20) = puVar7[4];
    *(undefined8 *)(pBVar10 + 0x28) = uVar5;
    uVar5 = puVar7[7];
    *(undefined8 *)(pBVar10 + 0x30) = puVar7[6];
    *(undefined8 *)(pBVar10 + 0x38) = uVar5;
    break;
  case 0x15:
    StringName::StringName((StringName *)(this + 8),param_1 + 8);
    return;
  case 0x16:
    NodePath::NodePath((NodePath *)(this + 8),(NodePath *)(param_1 + 8));
    return;
  case 0x18:
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
LAB_00108cf0:
    ObjData::ref((ObjData *)(this + 8),(ObjData *)(param_1 + 8));
    return;
  case 0x19:
    Callable::Callable((Callable *)(this + 8),param_1 + 8);
    return;
  case 0x1a:
    StringName::StringName((StringName *)(this + 8),param_1 + 8);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    break;
  case 0x1b:
    Dictionary::Dictionary((Dictionary *)(this + 8),(Dictionary *)(param_1 + 8));
    return;
  case 0x1c:
    Array::Array((Array *)(this + 8),(Array *)(param_1 + 8));
    return;
  case 0x1d:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_00109382;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_00109382:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f550;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x1e:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_001093b6;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_001093b6:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f570;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x1f:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_0010939c;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_0010939c:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f590;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x20:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_0010938f;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_0010938f:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f5b0;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x21:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_00109375;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_00109375:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f5d0;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x22:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_001093c3;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_001093c3:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f5f0;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x23:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_001093d0;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_001093d0:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f610;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x24:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_0010935b;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_0010935b:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f630;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x25:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_00109368;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_00109368:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f650;
    *(undefined4 *)(puVar7 + 1) = 0;
    goto LAB_00108de0;
  case 0x26:
    lVar4 = *(long *)(param_1 + 8);
    piVar1 = (int *)(lVar4 + 8);
    do {
      iVar3 = *piVar1;
      if (iVar3 == 0) goto LAB_001093a9;
      LOCK();
      iVar6 = *piVar1;
      bVar12 = iVar3 == iVar6;
      if (bVar12) {
        *piVar1 = iVar3 + 1;
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar12);
    if (iVar6 == -1) {
LAB_001093a9:
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        return;
      }
    }
    puVar7 = (undefined8 *)operator_new(0x20,"");
    *puVar7 = &PTR__PackedArrayRefBase_0011f530;
    ppuVar11 = &PTR__PackedArrayRef_0011f670;
    *(undefined4 *)(puVar7 + 1) = 0;
LAB_00108de0:
    *puVar7 = ppuVar11;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined8 **)(this + 8) = puVar7;
  }
  return;
}



/* Variant::Variant(Variant const&) */

void __thiscall Variant::Variant(Variant *this,Variant *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  reference(this,param_1);
  return;
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  if (this == param_1) {
    return;
  }
  if (*(int *)this != *(int *)param_1) {
    reference(this,param_1);
    return;
  }
  switch(*(int *)param_1) {
  case 1:
    this[8] = param_1[8];
    break;
  case 2:
  case 5:
  case 6:
  case 0x17:
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    break;
  case 3:
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    break;
  case 4:
    if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
      return;
    }
    break;
  case 7:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar3;
    break;
  case 8:
  case 0x14:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar3;
    break;
  case 9:
  case 10:
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    break;
  case 0xb:
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(this + 8);
    uVar3 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar3;
    puVar5[2] = puVar6[2];
    break;
  case 0xc:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar3;
    break;
  case 0xd:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar3;
    break;
  case 0xe:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar3;
    break;
  case 0xf:
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar3;
    break;
  case 0x10:
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(this + 8);
    uVar3 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar3;
    puVar5[2] = puVar6[2];
    break;
  case 0x11:
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(this + 8);
    uVar3 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar3;
    uVar3 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar3;
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar6 + 4);
    break;
  case 0x12:
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(this + 8);
    uVar3 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar3;
    uVar3 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar3;
    uVar3 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar3;
    break;
  case 0x13:
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(this + 8);
    uVar3 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar3;
    uVar3 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar3;
    uVar3 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar3;
    uVar3 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar3;
    break;
  case 0x15:
    StringName::operator=((StringName *)(this + 8),(StringName *)(param_1 + 8));
    return;
  case 0x16:
    NodePath::operator=((NodePath *)(this + 8),(NodePath *)(param_1 + 8));
    return;
  case 0x18:
    ObjData::ref((ObjData *)(this + 8),(ObjData *)(param_1 + 8));
    return;
  case 0x19:
    Callable::operator=((Callable *)(this + 8),(Callable *)(param_1 + 8));
    return;
  case 0x1a:
    StringName::operator=((StringName *)(this + 8),(StringName *)(param_1 + 8));
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    break;
  case 0x1b:
    Dictionary::operator=((Dictionary *)(this + 8),(Dictionary *)(param_1 + 8));
    return;
  case 0x1c:
    Array::operator=((Array *)(this + 8),(Array *)(param_1 + 8));
    return;
  case 0x1d:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    if (puVar5 != puVar6) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
LAB_00109470:
      if ((iVar4 != -1) && (puVar7 = puVar6, puVar5 != (undefined8 *)0x0)) {
LAB_00109482:
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar6 = puVar5;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(puVar7);
          Memory::free_static(puVar7,false);
        }
      }
    }
    goto LAB_0010948f;
  case 0x1e:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    piVar1 = (int *)(puVar5 + 1);
    if (puVar5 != puVar6) {
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109470;
    }
    goto LAB_0010948f;
  case 0x1f:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    piVar1 = (int *)(puVar5 + 1);
    if (puVar5 != puVar6) {
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
LAB_00109590:
      if ((puVar5 != (undefined8 *)0x0) && (puVar7 = puVar6, iVar4 != -1)) goto LAB_00109482;
    }
    goto LAB_0010948f;
  case 0x20:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    if (puVar5 != puVar6) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109590;
    }
    goto LAB_0010948f;
  case 0x21:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    if (puVar5 != puVar6) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109470;
    }
    goto LAB_0010948f;
  case 0x22:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    if (puVar5 != puVar6) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109470;
    }
    goto LAB_0010948f;
  case 0x23:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    if (puVar5 != puVar6) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109470;
    }
    goto LAB_0010948f;
  case 0x24:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    piVar1 = (int *)(puVar5 + 1);
    if (puVar5 != puVar6) {
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109590;
    }
    goto LAB_0010948f;
  case 0x25:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    piVar1 = (int *)(puVar5 + 1);
    if (puVar5 != puVar6) {
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109470;
    }
    goto LAB_0010948f;
  case 0x26:
    puVar5 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(this + 8);
    if (puVar5 != puVar6) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar2 = *piVar1;
        if (iVar2 == 0) goto LAB_0010948f;
        LOCK();
        iVar4 = *piVar1;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          *piVar1 = iVar2 + 1;
          iVar4 = iVar2;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00109470;
    }
LAB_0010948f:
    *(undefined8 **)(this + 8) = puVar6;
  }
  return;
}



/* Variant::Variant(Vector<Variant> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  long lVar1;
  Variant *this_00;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  Array::Array(local_50);
  iVar3 = (int)local_50;
  Array::resize(iVar3);
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = 0; (lVar1 != 0 && (lVar2 < *(long *)(lVar1 + -8))); lVar2 = lVar2 + 1) {
    this_00 = (Variant *)Array::operator[](iVar3);
    operator=(this_00,(Variant *)(lVar1 + lVar2 * 0x18));
    lVar1 = *(long *)(param_1 + 8);
  }
  local_48 = 0x1c;
  local_40 = (undefined1  [16])0x0;
  Array::Array((Array *)local_40,local_50);
  if ((&needs_deinit)[*(int *)this] != '\0') {
    _clear_internal(this);
  }
  *(undefined4 *)this = (undefined4)local_48;
  *(undefined8 *)(this + 8) = local_40._0_8_;
  *(undefined8 *)(this + 0x10) = local_40._8_8_;
  Array::~Array(local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::get_type_by_name(String const&) */

undefined4 Variant::get_type_by_name(String *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((get_type_by_name(String_const&)::type_names == '\0') &&
     (iVar19 = __cxa_guard_acquire(&get_type_by_name(String_const&)::type_names), iVar19 != 0)) {
    get_type_by_name(String_const&)::type_names._40_8_ = 2;
    get_type_by_name(String_const&)::type_names._8_16_ = (undefined1  [16])0x0;
    get_type_by_name(String_const&)::type_names._24_16_ = (undefined1  [16])0x0;
    __cxa_atexit(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                 ::~HashMap,get_type_by_name(String_const&)::type_names,&__dso_handle);
    __cxa_guard_release(&get_type_by_name(String_const&)::type_names);
  }
  if (get_type_by_name(String_const&)::type_names._44_4_ == 0) {
    iVar19 = 0;
    do {
      get_type_name((Variant *)&local_48,iVar19);
      piVar15 = (int *)HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                       ::operator[]((HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                     *)get_type_by_name(String_const&)::type_names,
                                    (String *)&local_48);
      lVar3 = local_48;
      *piVar15 = iVar19;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0x27);
    if ((get_type_by_name(String_const&)::type_names._8_8_ == 0) ||
       (get_type_by_name(String_const&)::type_names._44_4_ == 0)) goto LAB_00109a4e;
  }
  else if (get_type_by_name(String_const&)::type_names._8_8_ == 0) goto LAB_00109a4e;
  uVar2 = *(uint *)(hash_table_size_primes +
                   (get_type_by_name(String_const&)::type_names._40_8_ & 0xffffffff) * 4);
  uVar21 = CONCAT44(0,uVar2);
  lVar3 = *(long *)(hash_table_size_primes_inv +
                   (get_type_by_name(String_const&)::type_names._40_8_ & 0xffffffff) * 8);
  uVar14 = String::hash();
  uVar16 = 1;
  if (uVar14 != 0) {
    uVar16 = uVar14;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (ulong)uVar16 * lVar3;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar21;
  lVar18 = SUB168(auVar4 * auVar8,8);
  uVar14 = *(uint *)(get_type_by_name(String_const&)::type_names._16_8_ + lVar18 * 4);
  uVar17 = SUB164(auVar4 * auVar8,8);
  if (uVar14 != 0) {
    uVar22 = 0;
    lVar20 = get_type_by_name(String_const&)::type_names._16_8_;
    do {
      if (uVar16 == uVar14) {
        cVar12 = String::operator==((String *)
                                    (*(long *)(get_type_by_name(String_const&)::type_names._8_8_ +
                                              lVar18 * 8) + 0x10),param_1);
        if (cVar12 != '\0') {
          uVar13 = *(undefined4 *)
                    (*(long *)(get_type_by_name(String_const&)::type_names._8_8_ + (ulong)uVar17 * 8
                              ) + 0x18);
          goto LAB_00109a53;
        }
        lVar20 = get_type_by_name(String_const&)::type_names._16_8_;
      }
      uVar22 = uVar22 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)(uVar17 + 1) * lVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar21;
      lVar18 = SUB168(auVar5 * auVar9,8);
      uVar14 = *(uint *)(lVar20 + lVar18 * 4);
      uVar17 = SUB164(auVar5 * auVar9,8);
    } while ((uVar14 != 0) &&
            (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
            auVar7._0_8_ = (ulong)((uVar2 + uVar17) - SUB164(auVar6 * auVar10,8)) * lVar3,
            auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar22 <= SUB164(auVar7 * auVar11,8)));
  }
LAB_00109a4e:
  uVar13 = 0x27;
LAB_00109a53:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* Variant::get_callable_error_text(Callable const&, Variant const**, int, Callable::CallError
   const&) */

Variant * __thiscall
Variant::get_callable_error_text
          (Variant *this,Callable *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  Variant *pVVar12;
  Variant **ppVVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  long local_60;
  char *local_58;
  Variant **local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  Callable::get_bound_arguments_ref((Vector *)param_1);
  iVar4 = Callable::get_unbound_arguments_count();
  iVar11 = param_3 - iVar4;
  if (iVar11 < 0) {
    itos((long)local_70);
    local_78 = 0;
    local_58 = " arguments, but called with ";
    local_50[0] = (Variant **)0x1c;
    String::parse_latin1((StrRange *)&local_78);
    itos((long)&local_88);
    operator+((char *)&local_80,(String *)"Callable unbinds ");
    String::operator+((String *)&local_58,(String *)&local_80);
    String::operator+((String *)this,(String *)&local_58);
    pcVar9 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar9 + -0x10,false);
      }
    }
    lVar14 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    lVar14 = local_70[0];
    if (local_70[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_70[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70[0] = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    goto LAB_00109ef3;
  }
  lVar14 = (long)iVar11;
  local_50[0] = (Variant **)0x0;
  if (local_60 == 0) {
    if (lVar14 != 0) {
      CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)local_50);
      uVar5 = lVar14 * 8 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar6 = (uVar5 | uVar5 >> 0x20) + 1;
      lVar15 = lVar14;
LAB_00109d53:
      puVar7 = (undefined8 *)Memory::alloc_static(lVar6 + 0x10,false);
      if (puVar7 == (undefined8 *)0x0) {
        uVar10 = 0x171;
        pcVar9 = "Parameter \"mem_new\" is null.";
LAB_0010a197:
        _err_print_error("resize","./core/templates/cowdata.h",uVar10,pcVar9,0,0);
        ppVVar13 = local_50[0];
      }
      else {
        local_50[0] = (Variant **)(puVar7 + 2);
        *puVar7 = 1;
        puVar7[1] = lVar15;
        ppVVar13 = local_50[0];
      }
      goto LAB_00109f61;
    }
  }
  else {
    lVar15 = lVar14 + *(long *)(local_60 + -8);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else if (lVar15 != 0) {
      CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)local_50);
      if ((lVar15 * 8 != 0) &&
         (uVar5 = lVar15 * 8 - 1, uVar5 = uVar5 | uVar5 >> 1, uVar5 = uVar5 | uVar5 >> 2,
         uVar5 = uVar5 | uVar5 >> 4, uVar5 = uVar5 | uVar5 >> 8, uVar5 = uVar5 | uVar5 >> 0x10,
         lVar6 = (uVar5 | uVar5 >> 0x20) + 1, lVar6 != 0)) goto LAB_00109d53;
      uVar10 = 0x16a;
      pcVar9 = 
      "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
      ;
      goto LAB_0010a197;
    }
    ppVVar13 = (Variant **)0x0;
LAB_00109f61:
    lVar15 = 0;
    if (iVar11 != 0) {
      do {
        pVVar2 = param_2[lVar15];
        if (ppVVar13 == (Variant **)0x0) goto LAB_00109fad;
        pVVar12 = ppVVar13[-1];
        if ((long)pVVar12 <= lVar15) goto LAB_00109fb0;
        lVar6 = lVar15 + 1;
        CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)local_50);
        local_50[0][lVar15] = pVVar2;
        lVar15 = lVar6;
        ppVVar13 = local_50[0];
      } while (lVar6 != lVar14);
    }
    if (local_60 != 0) {
      lVar14 = 0;
      lVar15 = (long)param_3 - (long)iVar4;
      do {
        if (*(long *)(local_60 + -8) <= lVar14) break;
        pVVar2 = (Variant *)(local_60 + lVar14 * 0x18);
        if (lVar15 < 0) {
          if (ppVVar13 == (Variant **)0x0) {
LAB_00109fad:
            pVVar12 = (Variant *)0x0;
          }
          else {
LAB_0010a101:
            pVVar12 = ppVVar13[-1];
          }
LAB_00109fb0:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar15,(long)pVVar12,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (ppVVar13 == (Variant **)0x0) goto LAB_00109fad;
        if ((long)ppVVar13[-1] <= lVar15) goto LAB_0010a101;
        lVar14 = lVar14 + 1;
        CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)local_50);
        local_50[0][lVar15] = pVVar2;
        lVar15 = lVar15 + 1;
        ppVVar13 = local_50[0];
      } while (local_60 != 0);
    }
    if (ppVVar13 != (Variant **)0x0) {
      pVVar2 = ppVVar13[-1];
      Callable::get_method();
      pOVar8 = (Object *)Callable::get_object();
      get_call_error_text(this,pOVar8,(StringName *)local_70,ppVVar13,(int)pVVar2,param_4);
      if ((StringName::configured != '\0') && (local_70[0] != 0)) {
        StringName::unref();
      }
      LOCK();
      ppVVar13 = ppVVar13 + -2;
      *ppVVar13 = *ppVVar13 + -1;
      UNLOCK();
      if (*ppVVar13 == (Variant *)0x0) {
        Memory::free_static(local_50[0] + -2,false);
      }
      goto LAB_00109ef3;
    }
  }
  Callable::get_method();
  pOVar8 = (Object *)Callable::get_object();
  get_call_error_text(this,pOVar8,(StringName *)local_70,(Variant **)0x0,0,param_4);
  if ((StringName::configured != '\0') && (local_70[0] != 0)) {
    StringName::unref();
  }
LAB_00109ef3:
  CowData<Variant>::_unref((CowData<Variant> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  Variant *this_00;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar5 = lVar1 * 0x18 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar6 = 0;
  *puVar4 = 1;
  puVar4[1] = lVar1;
  this_00 = (Variant *)(puVar4 + 2);
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *(undefined4 *)this_00 = 0;
      lVar6 = lVar6 + 1;
      *(undefined1 (*) [16])(this_00 + 8) = (undefined1  [16])0x0;
      ::Variant::reference(this_00,this_00 + lVar2 + (-0x10 - (long)puVar4));
      this_00 = this_00 + 0x18;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(Variant **)this = (Variant *)(puVar4 + 2);
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



/* Variant::Variant(Vector<String> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)this = 0x22;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)operator_new(0x20,"");
  *puVar1 = &PTR__PackedArrayRefBase_0011f530;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__PackedArrayRef_0011f5f0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<String>::_ref((CowData<String> *)(puVar1 + 3),(CowData *)(param_1 + 8));
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined8 **)(this + 8) = puVar1;
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



/* Error CowData<String>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
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
    lVar12 = 0;
    lVar9 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    lVar9 = lVar12 * 8;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar10 = param_1 * 8 - 1;
    uVar10 = uVar10 | uVar10 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = uVar10 | uVar10 >> 0x10;
    uVar10 = uVar10 | uVar10 >> 0x20;
    if (uVar10 != 0xffffffffffffffff) {
      if (param_1 <= lVar12) {
        puVar7 = *(undefined8 **)this;
        uVar11 = param_1;
        while( true ) {
          if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((ulong)puVar7[-1] <= uVar11) break;
          while( true ) {
            plVar2 = puVar7 + uVar11;
            if (*plVar2 != 0) break;
            uVar11 = uVar11 + 1;
            if ((ulong)puVar7[-1] <= uVar11) goto LAB_0010a6b9;
          }
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar12 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
          puVar7 = *(undefined8 **)this;
          uVar11 = uVar11 + 1;
        }
LAB_0010a6b9:
        if (uVar10 + 1 == lVar9) {
LAB_0010a6c2:
          puVar7[-1] = param_1;
          return;
        }
        puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar10 + 0x11,false);
        if (puVar4 != (undefined8 *)0x0) {
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
          goto LAB_0010a6c2;
        }
LAB_0010a85b:
        pcVar5 = "Parameter \"mem_new\" is null.";
        uVar6 = 0x1a9;
        pcVar8 = "_realloc";
        goto LAB_0010a848;
      }
      if (uVar10 + 1 == lVar9) {
        puVar7 = *(undefined8 **)this;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar12 = puVar7[-1];
LAB_0010a7a0:
        if (param_1 <= lVar12) goto LAB_0010a744;
      }
      else {
        if (lVar12 != 0) {
          puVar4 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar10 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0010a85b;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
          lVar12 = puVar4[1];
          goto LAB_0010a7a0;
        }
        puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          pcVar5 = "Parameter \"mem_new\" is null.";
          uVar6 = 0x171;
          pcVar8 = "resize";
          goto LAB_0010a848;
        }
        puVar7 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar7;
        lVar12 = 0;
      }
      memset(puVar7 + lVar12,0,(param_1 - lVar12) * 8);
LAB_0010a744:
      puVar7[-1] = param_1;
      return;
    }
  }
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar6 = 0x16a;
  pcVar8 = "resize";
LAB_0010a848:
  _err_print_error(pcVar8,"./core/templates/cowdata.h",uVar6,pcVar5,0,0);
  return;
}



/* Variant::Variant(Vector<StringName> const&) */

void __thiscall Variant::Variant(Variant *this,Vector *param_1)

{
  long *plVar1;
  char *__s;
  code *pcVar2;
  long lVar3;
  int iVar4;
  CowData<char32_t> *this_00;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_80;
  Vector local_78 [8];
  long local_70;
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)this = 0;
  local_70 = 0;
  if (lVar5 == 0) {
    CowData<String>::resize<false>((CowData<String> *)&local_70,0);
  }
  else {
    iVar4 = (int)*(undefined8 *)(lVar5 + -8);
    CowData<String>::resize<false>((CowData<String> *)&local_70,(long)iVar4);
    if (0 < iVar4) {
      uVar7 = 0;
      do {
        lVar5 = *(long *)(param_1 + 8);
        if (lVar5 == 0) {
          lVar6 = 0;
LAB_0010aaa3:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar5 + -8);
        if (lVar6 <= (long)uVar7) goto LAB_0010aaa3;
        lVar5 = *(long *)(lVar5 + uVar7 * 8);
        if (lVar5 == 0) {
          local_80 = 0;
          if (local_70 != 0) goto LAB_0010a964;
LAB_0010aa16:
          lVar5 = 0;
LAB_0010aa19:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,uVar7,lVar5,"p_index","size()","",false
                     ,false);
        }
        else {
          __s = *(char **)(lVar5 + 8);
          local_80 = 0;
          if (__s == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
            if (*(long *)(lVar5 + 0x10) != 0) {
              do {
                lVar6 = *plVar1;
                if (lVar6 == 0) goto LAB_0010a956;
                LOCK();
                lVar3 = *plVar1;
                bVar8 = lVar6 == lVar3;
                if (bVar8) {
                  *plVar1 = lVar6 + 1;
                  lVar3 = lVar6;
                }
                UNLOCK();
              } while (!bVar8);
              if (lVar3 != -1) {
                local_80 = *(long *)(lVar5 + 0x10);
              }
            }
          }
          else {
            local_60 = strlen(__s);
            local_68 = __s;
            String::parse_latin1((StrRange *)&local_80);
          }
LAB_0010a956:
          if (local_70 == 0) goto LAB_0010aa16;
LAB_0010a964:
          lVar5 = *(long *)(local_70 + -8);
          if (lVar5 <= (long)uVar7) goto LAB_0010aa19;
          CowData<String>::_copy_on_write((CowData<String> *)&local_70);
          this_00 = (CowData<char32_t> *)(uVar7 * 8 + local_70);
          if (*(long *)this_00 != local_80) {
            CowData<char32_t>::_ref(this_00,(CowData *)&local_80);
          }
        }
        lVar5 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        bVar8 = uVar7 != iVar4 - 1;
        uVar7 = uVar7 + 1;
      } while (bVar8);
    }
  }
  Variant((Variant *)local_58,local_78);
  if ((&needs_deinit)[*(int *)this] != '\0') {
    _clear_internal(this);
  }
  *(undefined4 *)this = local_58[0];
  *(undefined8 *)(this + 8) = local_50;
  *(undefined8 *)(this + 0x10) = uStack_48;
  CowData<String>::_unref((CowData<String> *)&local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* CowData<_VariantStrPair>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<_VariantStrPair>::_copy_on_write(CowData<_VariantStrPair> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  ulong uVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(lVar6 * 0x10 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar4);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar4 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x10;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Variant::stringify(int) const */

Vector * Variant::stringify(int param_1)

{
  Variant VVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  ulong *puVar19;
  int in_EDX;
  long lVar20;
  CowData<char32_t> *this;
  size_t sVar21;
  Variant *in_RSI;
  long lVar22;
  long *plVar23;
  String *pSVar24;
  undefined4 in_register_0000003c;
  Vector *this_00;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined8 in_XMM1_Qa;
  undefined1 auVar27 [12];
  long local_f0;
  long *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  char *local_b8;
  size_t local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_88 [16];
  undefined8 local_78;
  long local_40;
  
  auVar11._8_8_ = local_88._8_8_;
  auVar11._0_8_ = local_88._0_8_;
  this_00 = (Vector *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)in_RSI) {
  case 0:
    *(undefined8 *)this_00 = 0;
    local_b8 = "<null>";
    local_b0 = 6;
    String::parse_latin1((StrRange *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 1:
    VVar1 = in_RSI[8];
    local_b0 = 4;
    *(undefined8 *)this_00 = 0;
    local_b8 = "true";
    if (VVar1 == (Variant)0x0) {
      local_b0 = 5;
      local_b8 = "false";
    }
    String::parse_latin1((StrRange *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 2:
    itos((long)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 3:
    String::num_real(*(double *)(in_RSI + 8),SUB41(param_1,0));
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 4:
    *(undefined8 *)this_00 = 0;
    if (*(long *)(in_RSI + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)this_00,(CowData *)(in_RSI + 8));
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
    }
    break;
  case 5:
    local_88._0_8_ = operator_cast_to_Vector2(in_RSI);
    Vector2::operator_cast_to_String((Vector2 *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 6:
    local_88._0_8_ = operator_cast_to_Vector2i(in_RSI);
    Vector2i::operator_cast_to_String((Vector2i *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 7:
    local_88._0_8_ = *(undefined8 *)(in_RSI + 8);
    local_88._8_8_ = *(undefined8 *)(in_RSI + 0x10);
    Rect2::operator_cast_to_String((Rect2 *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 8:
    local_88._0_8_ = *(undefined8 *)(in_RSI + 8);
    local_88._8_8_ = *(undefined8 *)(in_RSI + 0x10);
    Rect2i::operator_cast_to_String((Rect2i *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 9:
    local_88._0_8_ = operator_cast_to_Vector3(in_RSI);
    local_88._8_4_ = (int)in_XMM1_Qa;
    Vector3::operator_cast_to_String((Vector3 *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 10:
    auVar27 = operator_cast_to_Vector3i(in_RSI);
    local_88._0_8_ = auVar27._0_8_;
    local_88._8_4_ = auVar27._8_4_;
    Vector3i::operator_cast_to_String((Vector3i *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0xb:
    operator_cast_to_Transform2D((Variant *)local_88);
    Transform2D::operator_cast_to_String((Transform2D *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0xc:
    local_88._0_8_ = operator_cast_to_Vector4(in_RSI);
    local_88._8_8_ = in_XMM1_Qa;
    Vector4::operator_cast_to_String((Vector4 *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0xd:
    local_88 = operator_cast_to_Vector4i(in_RSI);
    Vector4i::operator_cast_to_String((Vector4i *)this_00);
    auVar11 = local_88;
    break;
  case 0xe:
    local_a8 = *(undefined8 *)(in_RSI + 8);
    uStack_a0 = *(undefined8 *)(in_RSI + 0x10);
    local_88._0_8_ = local_a8;
    local_88._8_8_ = uStack_a0;
    Plane::operator_cast_to_String((Plane *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0xf:
    operator_cast_to_Quaternion((Variant *)local_88);
    Quaternion::operator_cast_to_String((Quaternion *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x10:
    puVar4 = *(undefined8 **)(in_RSI + 8);
    local_88._0_8_ = *puVar4;
    local_88._8_8_ = puVar4[1];
    local_78 = puVar4[2];
    AABB::operator_cast_to_String((AABB *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x11:
    operator_cast_to_Basis((Variant *)local_88);
    Basis::operator_cast_to_String((Basis *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x12:
    operator_cast_to_Transform3D((Variant *)local_88);
    Transform3D::operator_cast_to_String((Transform3D *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x13:
    operator_cast_to_Projection((Variant *)local_88);
    Projection::operator_cast_to_String((Projection *)this_00);
    Projection::~Projection((Projection *)local_88);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x14:
    local_88._0_8_ = operator_cast_to_Color(in_RSI);
    local_88._8_8_ = in_XMM1_Qa;
    Color::operator_cast_to_String((Color *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x15:
    StringName::StringName((StringName *)local_c8,in_RSI + 8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    auVar15._8_8_ = local_88._8_8_;
    auVar15._0_8_ = local_88._0_8_;
    if (local_c8._0_8_ == 0) {
      *(undefined8 *)this_00 = 0;
      auVar11 = auVar15;
      break;
    }
    pcVar2 = *(char **)(local_c8._0_8_ + 8);
    *(undefined8 *)this_00 = 0;
    if (pcVar2 == (char *)0x0) {
      if (*(long *)(local_c8._0_8_ + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)this_00,(CowData *)(local_c8._0_8_ + 0x10));
        goto LAB_0010b52a;
      }
      if (StringName::configured == '\0') break;
    }
    else {
      local_b0 = strlen(pcVar2);
      local_b8 = pcVar2;
      String::parse_latin1((StrRange *)this_00);
LAB_0010b52a:
      auVar14._8_8_ = local_88._8_8_;
      auVar14._0_8_ = local_88._0_8_;
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      if ((StringName::configured == '\0') || (auVar11 = auVar14, local_c8._0_8_ == 0)) break;
    }
    StringName::unref();
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x16:
    operator_cast_to_NodePath((Variant *)&local_b8);
    NodePath::operator_cast_to_String((NodePath *)this_00);
    NodePath::~NodePath((NodePath *)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x17:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_c8._8_8_;
    local_c8 = auVar6 << 0x40;
    local_b8 = ")";
    local_b0 = 1;
    String::parse_latin1((StrRange *)local_c8);
    itos((long)&local_d8);
    pSVar24 = (String *)&_LC140;
    goto LAB_0010b406;
  case 0x18:
    plVar23 = *(long **)(in_RSI + 0x10);
    if (plVar23 == (long *)0x0) {
      *(undefined8 *)this_00 = 0;
      local_b8 = "<Object#null>";
      local_b0 = 0xd;
      String::parse_latin1((StrRange *)this_00);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    uVar3 = *(ulong *)(in_RSI + 8);
    if ((long)uVar3 < 0) {
LAB_0010b61d:
      (**(code **)(*plVar23 + 0x78))(this_00);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
    }
    else {
      uVar18 = (uint)uVar3 & 0xffffff;
      if (uVar18 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar8 = (ulong)local_b8 >> 8;
          local_b8 = (char *)(uVar8 << 8);
          LOCK();
          bVar26 = (char)ObjectDB::spin_lock == '\0';
          if (bVar26) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar26) break;
          local_b8 = (char *)(uVar8 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
        if (uVar3 >> 0x18 == (*puVar19 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          if (puVar19[1] != 0) {
            plVar23 = *(long **)(in_RSI + 0x10);
            goto LAB_0010b61d;
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      *(undefined8 *)this_00 = 0;
      local_b8 = "<Freed Object>";
      local_b0 = 0xe;
      String::parse_latin1((StrRange *)this_00);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
    }
    break;
  case 0x19:
    Callable::operator_cast_to_String((Callable *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x1a:
    Signal::operator_cast_to_String((Signal *)this_00);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x1b:
    if (in_EDX < 0x65) {
      local_f0 = 0;
      local_b8 = "{ ";
      local_b0 = 2;
      String::parse_latin1((StrRange *)&local_f0);
      local_e8 = (long *)0x0;
      Dictionary::get_key_list((List *)(in_RSI + 8));
      local_d0 = 0;
      if (local_e8 != (long *)0x0) {
        lVar25 = *local_e8;
        if (lVar25 != 0) {
          do {
            local_c8 = (undefined1  [16])0x0;
            stringify_variant_clean((Variant *)&local_b8,(int)lVar25);
            if (local_b8 != (char *)0x0) {
              local_c8._0_8_ = local_b8;
            }
            iVar17 = Dictionary::operator[](in_RSI + 8);
            stringify_variant_clean((Variant *)&local_b8,iVar17);
            if (local_b8 == (char *)0x0) {
              if (local_c8._0_8_ != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_c8);
              }
              local_b0 = 0;
            }
            else {
              local_c8._8_8_ = local_b8;
              local_b8 = (char *)0x0;
              if (local_c8._0_8_ != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_c8);
              }
              local_b0 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_c8 + 8));
            }
            sVar21 = local_b0;
            if (local_d0 == 0) {
              lVar22 = 1;
            }
            else {
              lVar22 = *(long *)(local_d0 + -8) + 1;
            }
            iVar17 = CowData<_VariantStrPair>::resize<false>
                               ((CowData<_VariantStrPair> *)&local_d0,lVar22);
            if (iVar17 == 0) {
              if (local_d0 == 0) {
                lVar20 = -1;
                lVar22 = 0;
              }
              else {
                lVar22 = *(long *)(local_d0 + -8);
                lVar20 = lVar22 + -1;
                if (-1 < lVar20) {
                  CowData<_VariantStrPair>::_copy_on_write((CowData<_VariantStrPair> *)&local_d0);
                  this = (CowData<char32_t> *)(lVar20 * 0x10 + local_d0);
                  if (*(char **)this != local_b8) {
                    CowData<char32_t>::_ref(this,(CowData *)&local_b8);
                  }
                  if (*(size_t *)(this + 8) != sVar21) {
                    CowData<char32_t>::_ref(this + 8,(CowData *)&local_b0);
                  }
                  goto LAB_0010b00c;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar20,lVar22,"p_index","size()",""
                         ,false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_0010b00c:
            if (sVar21 != 0) {
              LOCK();
              plVar23 = (long *)(sVar21 - 0x10);
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (*plVar23 == 0) {
                Memory::free_static((void *)(local_b0 - 0x10),false);
              }
            }
            if (local_b8 != (char *)0x0) {
              LOCK();
              plVar23 = (long *)(local_b8 + -0x10);
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (*plVar23 == 0) {
                Memory::free_static(local_b8 + -0x10,false);
              }
            }
            if (local_c8._8_8_ != 0) {
              LOCK();
              plVar23 = (long *)(local_c8._8_8_ + -0x10);
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (*plVar23 == 0) {
                Memory::free_static((void *)(local_c8._8_8_ + -0x10),false);
              }
            }
            if (local_c8._0_8_ != 0) {
              LOCK();
              plVar23 = (long *)(local_c8._0_8_ + -0x10);
              *plVar23 = *plVar23 + -1;
              UNLOCK();
              if (*plVar23 == 0) {
                Memory::free_static((void *)(local_c8._0_8_ + -0x10),false);
              }
            }
            lVar25 = *(long *)(lVar25 + 0x18);
          } while (lVar25 != 0);
          if ((local_d0 != 0) && (0 < *(long *)(local_d0 + -8))) {
            lVar22 = 0;
            lVar25 = local_d0;
            do {
              local_e0 = 0;
              local_b0 = 2;
              local_b8 = ": ";
              String::parse_latin1((StrRange *)&local_e0);
              lVar20 = *(long *)(lVar25 + -8);
              if (lVar20 <= lVar22) break;
              String::operator+((String *)local_c8,(String *)(lVar22 * 0x10 + lVar25));
              String::operator+((String *)&local_b8,(String *)local_c8);
              String::operator+=((String *)&local_f0,(String *)&local_b8);
              pcVar2 = local_b8;
              if (local_b8 != (char *)0x0) {
                LOCK();
                plVar23 = (long *)(local_b8 + -0x10);
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (*plVar23 == 0) {
                  local_b8 = (char *)0x0;
                  Memory::free_static(pcVar2 + -0x10,false);
                }
              }
              uVar16 = local_c8._0_8_;
              if (local_c8._0_8_ != 0) {
                LOCK();
                plVar23 = (long *)(local_c8._0_8_ + -0x10);
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (*plVar23 == 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = local_c8._8_8_;
                  local_c8 = auVar10 << 0x40;
                  Memory::free_static((void *)(uVar16 + -0x10),false);
                }
              }
              lVar25 = local_e0;
              if (local_e0 != 0) {
                LOCK();
                plVar23 = (long *)(local_e0 + -0x10);
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (*plVar23 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void *)(lVar25 + -0x10),false);
                }
              }
              lVar25 = local_d0;
              lVar22 = lVar22 + 1;
              if ((local_d0 == 0) || (*(long *)(local_d0 + -8) <= lVar22)) goto LAB_0010bd10;
              String::operator+=((String *)&local_f0,", ");
              lVar20 = *(long *)(lVar25 + -8);
            } while (lVar22 < lVar20);
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar22,lVar20,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
      }
LAB_0010bd10:
      String::operator+=((String *)&local_f0," }");
      lVar25 = local_f0;
      local_f0 = 0;
      *(long *)this_00 = lVar25;
      CowData<_VariantStrPair>::_unref((CowData<_VariantStrPair> *)&local_d0);
      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_e8);
      lVar25 = local_f0;
      auVar13._8_8_ = local_88._8_8_;
      auVar13._0_8_ = local_88._0_8_;
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      if (local_f0 != 0) {
        LOCK();
        plVar23 = (long *)(local_f0 + -0x10);
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        auVar11 = auVar13;
        if (*plVar23 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar25 + -0x10),false);
          auVar11._8_8_ = local_88._8_8_;
          auVar11._0_8_ = local_88._0_8_;
        }
      }
    }
    else {
      _err_print_error("stringify","core/variant/variant.cpp",0x671,
                       "Condition \"recursion_count > 100\" is true. Returning: \"{ ... }\"",
                       "Maximum dictionary recursion reached!",0,0);
      *(undefined8 *)this_00 = 0;
      local_b0 = 7;
      local_b8 = "{ ... }";
      String::parse_latin1((StrRange *)this_00);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
    }
    break;
  case 0x1c:
    if (in_EDX < 0x65) {
      Array::Array((Array *)&local_b8,(Array *)(in_RSI + 8));
      stringify_vector<Array>((Array *)this_00,(int)(Array *)&local_b8);
      Array::~Array((Array *)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
    }
    else {
      _err_print_error("stringify","core/variant/variant.cpp",0x6b0,
                       "Condition \"recursion_count > 100\" is true. Returning: \"[...]\"",
                       "Maximum array recursion reached!",0,0);
      *(undefined8 *)this_00 = 0;
      local_b8 = "[...]";
      local_b0 = 5;
      String::parse_latin1((StrRange *)this_00);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
    }
    break;
  case 0x1d:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<unsigned_char>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<unsigned_char>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b716;
  case 0x1e:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<int>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<int>::_ref((CowData<int> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<int>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b9de;
  case 0x1f:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<long>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<long>::_ref((CowData<long> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<long>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
joined_r0x0010b9de:
    if (sVar21 == 0) break;
    goto LAB_0010b720;
  case 0x20:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<float>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<float>::_ref((CowData<float> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<float>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b716;
  case 0x21:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<double>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<double>::_ref((CowData<double> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<double>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b716;
  case 0x22:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) != 0) {
      CowData<String>::_ref((CowData<String> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    }
    stringify_vector<Vector<String>>(this_00,(int)&local_b8);
    CowData<String>::_unref((CowData<String> *)&local_b0);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    break;
  case 0x23:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<Vector2>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<Vector2>::_ref((CowData<Vector2> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<Vector2>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b716;
  case 0x24:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<Vector3>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<Vector3>::_ref((CowData<Vector3> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<Vector3>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b716;
  case 0x25:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<Color>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<Color>::_ref((CowData<Color> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<Color>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    goto joined_r0x0010b716;
  case 0x26:
    local_b0 = 0;
    if (*(long *)(*(long *)(in_RSI + 8) + 0x18) == 0) {
      stringify_vector<Vector<Vector4>>(this_00,(int)&local_b8);
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      break;
    }
    CowData<Vector4>::_ref((CowData<Vector4> *)&local_b0,(CowData *)(*(long *)(in_RSI + 8) + 0x18));
    sVar21 = local_b0;
    stringify_vector<Vector<Vector4>>(this_00,(int)&local_b8);
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
joined_r0x0010b716:
    if (sVar21 != 0) {
LAB_0010b720:
      auVar11._8_8_ = local_88._8_8_;
      auVar11._0_8_ = local_88._0_8_;
      LOCK();
      plVar23 = (long *)(sVar21 - 0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        Memory::free_static((void *)(local_b0 - 0x10),false);
        auVar11._8_8_ = local_88._8_8_;
        auVar11._0_8_ = local_88._0_8_;
      }
    }
    break;
  default:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_c8._8_8_;
    local_c8 = auVar9 << 0x40;
    local_b8 = ">";
    local_b0 = 1;
    String::parse_latin1((StrRange *)local_c8);
    get_type_name((Variant *)&local_d8,*(undefined4 *)in_RSI);
    pSVar24 = (String *)&_LC142;
LAB_0010b406:
    operator+((char *)&local_b8,pSVar24);
    String::operator+((String *)this_00,(String *)&local_b8);
    pcVar2 = local_b8;
    if (local_b8 != (char *)0x0) {
      LOCK();
      plVar23 = (long *)(local_b8 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_b8 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar25 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar23 = (long *)(local_d8 + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar25 + -0x10),false);
      }
    }
    auVar12._8_8_ = local_88._8_8_;
    auVar12._0_8_ = local_88._0_8_;
    auVar11._8_8_ = local_88._8_8_;
    auVar11._0_8_ = local_88._0_8_;
    uVar16 = local_c8._0_8_;
    if (local_c8._0_8_ != 0) {
      LOCK();
      plVar23 = (long *)(local_c8._0_8_ + -0x10);
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      auVar11 = auVar12;
      if (*plVar23 == 0) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_c8._8_8_;
        local_c8 = auVar7 << 0x40;
        Memory::free_static((void *)(uVar16 + -0x10),false);
        auVar11._8_8_ = local_88._8_8_;
        auVar11._0_8_ = local_88._0_8_;
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    local_88 = auVar11;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}



/* Variant::operator String() const */

Variant * __thiscall Variant::operator_cast_to_String(Variant *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  stringify((int)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Color() const */

undefined1  [16] __thiscall Variant::operator_cast_to_Color(Variant *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)this;
  if (iVar2 == 0x14) {
    auVar6 = *(undefined1 (*) [16])(this + 8);
  }
  else if (iVar2 == 4) {
    stringify((int)&local_28);
    cVar4 = Color::html_is_valid((String *)&local_28);
    if (cVar4 == '\0') {
      auVar6 = Color::named((String *)&local_28);
    }
    else {
      auVar6 = Color::html((String *)&local_28);
    }
    lVar3 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    auVar6 = ZEXT816(0x3f80000000000000) << 0x40;
    if (iVar2 == 2) {
      uVar5 = operator_cast_to_int(this);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar6 = Color::hex(uVar5);
        return auVar6;
      }
      goto LAB_0010c131;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar6;
  }
LAB_0010c131:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator NodePath() const */

Variant * __thiscall Variant::operator_cast_to_NodePath(Variant *this)

{
  long *plVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x16) {
    NodePath::NodePath((NodePath *)this,(NodePath *)(in_RSI + 2));
  }
  else if (*in_RSI == 4) {
    stringify((int)&local_28);
    NodePath::NodePath((NodePath *)this,(String *)&local_28);
    lVar2 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    *(undefined8 *)this = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<String>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x22) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<String>::_ref((CowData<String> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<String>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<StringName>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int *in_RSI;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  Variant local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x22) {
    local_50[0] = 0;
    if (*(long *)(*(long *)(in_RSI + 2) + 0x18) == 0) {
      *(undefined8 *)(this + 8) = 0;
      goto LAB_0010c518;
    }
    CowData<String>::_ref((CowData<String> *)local_50,(CowData *)(*(long *)(in_RSI + 2) + 0x18));
  }
  else {
    _convert_array_from_variant<Vector<String>>(local_58);
  }
  *(undefined8 *)(this + 8) = 0;
  if (local_50[0] != 0) {
    iVar3 = (int)*(undefined8 *)(local_50[0] + -8);
    lVar5 = (long)iVar3;
    if (lVar5 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else if (lVar5 != 0) {
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
      uVar6 = lVar5 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      puVar2 = (undefined8 *)Memory::alloc_static((uVar6 | uVar6 >> 0x20) + 0x11,false);
      if (puVar2 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        lVar5 = local_50[0];
      }
      else {
        *puVar2 = 1;
        *(undefined8 **)(this + 8) = puVar2 + 2;
        memset(puVar2 + 2,0,lVar5 * 8);
        puVar2[1] = lVar5;
        lVar5 = local_50[0];
      }
      local_50[0] = lVar5;
      if (lVar5 == 0) {
        uVar6 = 0;
        lVar7 = 0;
LAB_0010c469:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar6 = 0;
      do {
        lVar7 = *(long *)(lVar5 + -8);
        if (lVar7 <= (long)uVar6) goto LAB_0010c469;
        StringName::StringName((StringName *)&local_60,(String *)(lVar5 + uVar6 * 8),false);
        if (*(long *)(this + 8) == 0) {
          lVar7 = 0;
LAB_0010c4cb:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,uVar6,lVar7,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar7 = *(long *)(*(long *)(this + 8) + -8);
        if (lVar7 <= (long)uVar6) goto LAB_0010c4cb;
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        plVar4 = (long *)(uVar6 * 8 + *(long *)(this + 8));
        if (*plVar4 == local_60) {
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          *plVar4 = local_60;
        }
        bVar8 = iVar3 - 1 != uVar6;
        uVar6 = uVar6 + 1;
      } while (bVar8);
    }
  }
LAB_0010c518:
  CowData<String>::_unref((CowData<String> *)local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<Vector4>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x26) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<Vector4>::_ref((CowData<Vector4> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<Vector4>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<Vector2>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x23) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<Vector2>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<Vector3>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x24) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<Vector3>::_ref((CowData<Vector3> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<Vector3>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<Face3>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long *plVar1;
  CowData<Face3> *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *in_RSI;
  ulong uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  Variant local_58 [8];
  undefined8 *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x24) {
    local_50[0] = (undefined8 *)0x0;
    if (*(long *)(*(long *)(in_RSI + 2) + 0x18) == 0) {
      *(undefined8 *)(this + 8) = 0;
      goto LAB_0010c75a;
    }
    CowData<Vector3>::_ref((CowData<Vector3> *)local_50,(CowData *)(*(long *)(in_RSI + 2) + 0x18));
  }
  else {
    _convert_array_from_variant<Vector<Vector3>>(local_58);
  }
  puVar9 = local_50[0];
  *(undefined8 *)(this + 8) = 0;
  if (local_50[0] == (undefined8 *)0x0) goto LAB_0010c75a;
  uVar12 = (uint)local_50[0][-1];
  if (uVar12 != 0) {
    this_00 = (CowData<Face3> *)(this + 8);
    iVar7 = (int)uVar12 / 3;
    if ((int)uVar12 < -2) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      CowData<Face3>::_copy_on_write(this_00);
    }
    else {
      if (iVar7 == 0) {
LAB_0010c932:
        CowData<Face3>::_copy_on_write(this_00);
        lVar5 = *(long *)(this + 8);
        if ((int)uVar12 < 1) goto LAB_0010c742;
LAB_0010c89f:
        uVar11 = 0;
        puVar6 = puVar9;
        do {
          iVar7 = (int)uVar11;
          uVar2 = uVar11 / 3;
          uVar3 = uVar11 / 3;
          uVar8 = iVar7 + 1;
          uVar11 = (ulong)uVar8;
          puVar4 = (undefined8 *)
                   (lVar5 + (long)(int)uVar2 * 0x24 + (long)(iVar7 + (int)uVar3 * -3) * 0xc);
          *puVar4 = *puVar6;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
          puVar6 = (undefined8 *)((long)puVar6 + 0xc);
        } while (uVar12 != uVar8);
      }
      else {
        CowData<Face3>::_copy_on_write(this_00);
        lVar5 = (long)iVar7 * 0x24;
        uVar11 = lVar5 - 1;
        uVar11 = uVar11 | uVar11 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        puVar4 = (undefined8 *)Memory::alloc_static((uVar11 | uVar11 >> 0x20) + 0x11,false);
        puVar6 = local_50[0];
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010c932;
        }
        *puVar4 = 1;
        *(undefined8 **)(this + 8) = puVar4 + 2;
        puVar9 = puVar4 + 2;
        do {
          *puVar9 = 0;
          puVar10 = (undefined8 *)((long)puVar9 + 0x24);
          *(undefined4 *)(puVar9 + 1) = 0;
          *(undefined8 *)((long)puVar9 + 0xc) = 0;
          *(undefined4 *)((long)puVar9 + 0x14) = 0;
          puVar9[3] = 0;
          *(undefined4 *)(puVar9 + 4) = 0;
          puVar9 = puVar10;
        } while (puVar10 != (undefined8 *)((long)puVar4 + lVar5 + 0x10));
        puVar4[1] = (long)iVar7;
        CowData<Face3>::_copy_on_write(this_00);
        lVar5 = *(long *)(this + 8);
        puVar9 = puVar6;
        if (0 < (int)uVar12) goto LAB_0010c89f;
      }
      if (puVar9 == (undefined8 *)0x0) goto LAB_0010c75a;
    }
  }
LAB_0010c742:
  LOCK();
  plVar1 = puVar9 + -2;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static(local_50[0] + -2,false);
  }
LAB_0010c75a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Variant::operator Vector<Color>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x25) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<Color>::_ref((CowData<Color> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<Color>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<long>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1f) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<long>::_ref((CowData<long> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<long>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<double>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x21) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<double>::_ref((CowData<double> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<double>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<float>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x20) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<float>::_ref((CowData<float> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<float>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<int>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1e) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<int>::_ref((CowData<int> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<int>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Vector<unsigned char>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long lVar1;
  long lVar2;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1d) {
    lVar2 = *(long *)(in_RSI + 2);
    *(undefined8 *)(this + 8) = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(this + 8),(CowData *)(lVar2 + 0x18));
    }
  }
  else {
    _convert_array_from_variant<Vector<unsigned_char>>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::operator Array() const */

Variant * __thiscall Variant::operator_cast_to_Array(Variant *this)

{
  long lVar1;
  int *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1c) {
    Array::Array((Array *)this,(Array *)(in_RSI + 2));
  }
  else {
    _convert_array_from_variant<Array>(this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::operator Vector<Variant>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  CowData<Variant> *this_00;
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  Variant *pVVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  Variant *this_01;
  int *in_RSI;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1c) {
    Array::Array((Array *)local_48,(Array *)(in_RSI + 2));
  }
  else {
    _convert_array_from_variant<Array>(local_48);
  }
  *(undefined8 *)(this + 8) = 0;
  iVar2 = Array::size();
  if (iVar2 == 0) goto LAB_0010ccce;
  uVar11 = (ulong)iVar2;
  this_00 = (CowData<Variant> *)(this + 8);
  if ((long)uVar11 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    CowData<Variant>::_copy_on_write(this_00);
    goto LAB_0010ccce;
  }
  if (*(long *)(this + 8) == 0) {
    uVar12 = 0;
    CowData<Variant>::_copy_on_write(this_00);
LAB_0010ce17:
    uVar8 = uVar11 * 0x18 - 1;
    uVar8 = uVar8 >> 1 | uVar8;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uVar8 = uVar8 >> 0x10 | uVar8;
    lVar5 = (uVar8 >> 0x20 | uVar8) + 1;
    if ((long)uVar12 < (long)uVar11) {
LAB_0010ce6c:
      if (uVar12 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(lVar5 + 0x10U,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010cf03;
        }
        puVar7 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)(this + 8) = puVar7;
        lVar5 = 0;
LAB_0010cea0:
        uVar12 = lVar5 + 1;
        *(undefined4 *)(puVar7 + lVar5 * 3) = 0;
        *(undefined1 (*) [16])(puVar7 + lVar5 * 3 + 1) = (undefined1  [16])0x0;
        if ((long)uVar12 < (long)uVar11) {
          lVar5 = uVar12 * 0x18;
          do {
            uVar12 = uVar12 + 1;
            puVar9 = (undefined4 *)(*(long *)(this + 8) + lVar5);
            lVar5 = lVar5 + 0x18;
            *puVar9 = 0;
            *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
          } while (uVar11 != uVar12);
        }
        puVar7 = *(undefined8 **)(this + 8);
        if (puVar7 == (undefined8 *)0x0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      else {
        puVar4 = (undefined8 *)
                 Memory::realloc_static((void *)(*(long *)(this + 8) + -0x10),lVar5 + 0x10U,false);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0010d054;
        puVar7 = puVar4 + 2;
        *puVar4 = 1;
        *(undefined8 **)(this + 8) = puVar7;
        lVar5 = puVar4[1];
LAB_0010cdfe:
        if (lVar5 < (long)uVar11) goto LAB_0010cea0;
      }
      puVar7[-1] = uVar11;
    }
    else {
      lVar13 = 0;
LAB_0010cf44:
      puVar4 = *(undefined8 **)(this + 8);
      uVar12 = uVar11;
      while( true ) {
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((ulong)puVar4[-1] <= uVar12) break;
        if ((&needs_deinit)[*(int *)(puVar4 + uVar12 * 3)] != '\0') {
          _clear_internal((Variant *)(puVar4 + uVar12 * 3));
          puVar4 = *(undefined8 **)(this + 8);
        }
        uVar12 = uVar12 + 1;
      }
      if (lVar5 != lVar13) {
        puVar7 = (undefined8 *)Memory::realloc_static(puVar4 + -2,lVar5 + 0x10,false);
        if (puVar7 == (undefined8 *)0x0) {
LAB_0010d054:
          _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010cf03;
        }
        puVar4 = puVar7 + 2;
        *puVar7 = 1;
        *(undefined8 **)(this + 8) = puVar4;
      }
      puVar4[-1] = uVar11;
    }
  }
  else {
    uVar12 = *(ulong *)(*(long *)(this + 8) + -8);
    if (uVar11 != uVar12) {
      CowData<Variant>::_copy_on_write(this_00);
      uVar8 = uVar11 * 0x18 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = uVar8 >> 0x10 | uVar8;
      uVar8 = uVar8 >> 0x20 | uVar8;
      lVar5 = uVar8 + 1;
      if (uVar12 * 0x18 == 0) goto LAB_0010ce17;
      uVar3 = uVar12 * 0x18 - 1;
      uVar3 = uVar3 | uVar3 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = uVar3 | uVar3 >> 0x20;
      if ((long)uVar12 < (long)uVar11) {
        if (uVar3 != uVar8) goto LAB_0010ce6c;
        puVar7 = *(undefined8 **)(this + 8);
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar5 = puVar7[-1];
        goto LAB_0010cdfe;
      }
      lVar13 = uVar3 + 1;
      goto LAB_0010cf44;
    }
  }
LAB_0010cf03:
  iVar10 = 0;
  CowData<Variant>::_copy_on_write(this_00);
  this_01 = *(Variant **)(this + 8);
  do {
    iVar10 = iVar10 + 1;
    pVVar6 = (Variant *)Array::operator[]((int)(Array *)local_48);
    operator=(this_01,pVVar6);
    this_01 = this_01 + 0x18;
  } while (iVar2 != iVar10);
LAB_0010ccce:
  Array::~Array((Array *)local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::operator Vector<Plane>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  CowData<Plane> *this_00;
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int *in_RSI;
  long lVar12;
  long in_FS_OFFSET;
  int iVar13;
  Variant local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1c) {
    Array::Array((Array *)local_80,(Array *)(in_RSI + 2));
  }
  else {
    _convert_array_from_variant<Array>(local_80);
  }
  *(undefined8 *)(this + 8) = 0;
  iVar2 = Array::size();
  if (iVar2 == 0) goto LAB_0010d10d;
  lVar12 = (long)iVar2;
  this_00 = (CowData<Plane> *)(this + 8);
  if (lVar12 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    CowData<Plane>::_copy_on_write(this_00);
    goto LAB_0010d10d;
  }
  if (*(long *)(this + 8) == 0) {
    lVar11 = 0;
    CowData<Plane>::_copy_on_write(this_00);
LAB_0010d2e4:
    uVar8 = lVar12 * 0x10 - 1;
    uVar8 = uVar8 >> 1 | uVar8;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 >> 8 | uVar8;
    uVar8 = uVar8 >> 0x10 | uVar8;
    lVar9 = (uVar8 >> 0x20 | uVar8) + 1;
    if (lVar11 < lVar12) {
LAB_0010d380:
      if (lVar11 == 0) {
        puVar6 = (undefined8 *)Memory::alloc_static(lVar9 + 0x10U,false);
        if (puVar6 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010d254;
        }
        puVar5 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)(this + 8) = puVar5;
        lVar11 = 0;
LAB_0010d3b4:
        puVar6 = puVar5 + lVar11 * 2;
        do {
          *puVar6 = 0;
          puVar7 = puVar6 + 2;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined4 *)((long)puVar6 + 0xc) = 0;
          puVar6 = puVar7;
        } while (puVar5 + lVar12 * 2 != puVar7);
      }
      else {
        puVar6 = (undefined8 *)
                 Memory::realloc_static((void *)(*(long *)(this + 8) + -0x10),lVar9 + 0x10U,false);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0010d45c;
        puVar5 = puVar6 + 2;
        *puVar6 = 1;
        *(undefined8 **)(this + 8) = puVar5;
        lVar11 = puVar6[1];
LAB_0010d243:
        if (lVar11 < lVar12) goto LAB_0010d3b4;
      }
      puVar5[-1] = lVar12;
    }
    else {
      puVar6 = *(undefined8 **)(this + 8);
LAB_0010d337:
      puVar5 = (undefined8 *)Memory::realloc_static(puVar6 + -2,lVar9 + 0x10,false);
      if (puVar5 != (undefined8 *)0x0) {
        puVar6 = puVar5 + 2;
        *puVar5 = 1;
        *(undefined8 **)(this + 8) = puVar6;
        goto LAB_0010d372;
      }
LAB_0010d45c:
      _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                       "Parameter \"mem_new\" is null.",0,0);
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(this + 8) + -8);
    if (lVar12 != lVar11) {
      CowData<Plane>::_copy_on_write(this_00);
      uVar8 = lVar12 * 0x10 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = uVar8 >> 0x10 | uVar8;
      uVar8 = uVar8 >> 0x20 | uVar8;
      lVar9 = uVar8 + 1;
      if (lVar11 * 0x10 == 0) goto LAB_0010d2e4;
      uVar3 = lVar11 * 0x10 - 1;
      uVar3 = uVar3 | uVar3 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = uVar3 | uVar3 >> 0x20;
      if (lVar11 < lVar12) {
        if (uVar3 != uVar8) goto LAB_0010d380;
        puVar5 = *(undefined8 **)(this + 8);
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar11 = puVar5[-1];
        goto LAB_0010d243;
      }
      puVar6 = *(undefined8 **)(this + 8);
      if (uVar3 != uVar8) goto LAB_0010d337;
      if (puVar6 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
LAB_0010d372:
      puVar6[-1] = lVar12;
    }
  }
LAB_0010d254:
  iVar10 = 0;
  CowData<Plane>::_copy_on_write(this_00);
  puVar6 = *(undefined8 **)(this + 8);
  do {
    piVar4 = (int *)Array::operator[]((int)(Array *)local_80);
    if (*piVar4 == 0xe) {
      local_78 = *(undefined8 *)(piVar4 + 2);
      iVar13 = piVar4[5];
      uStack_70._0_4_ = (undefined4)*(undefined8 *)(piVar4 + 4);
    }
    else {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70._0_4_ = 0;
      iVar13 = 0;
    }
    uStack_70 = CONCAT44(iVar13,(undefined4)uStack_70);
    local_58 = local_78;
    uStack_50 = uStack_70;
    iVar10 = iVar10 + 1;
    *puVar6 = local_78;
    puVar6[1] = uStack_70;
    puVar6 = puVar6 + 2;
  } while (iVar2 != iVar10);
LAB_0010d10d:
  Array::~Array((Array *)local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::operator Vector<RID>() const */

Variant * __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  long *plVar1;
  CowData<RID> *this_00;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  Variant *this_01;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *in_RSI;
  long lVar11;
  long in_FS_OFFSET;
  Variant aVStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI == 0x1c) {
    Array::Array((Array *)aVStack_48,(Array *)(in_RSI + 2));
  }
  else {
    _convert_array_from_variant<Array>(aVStack_48);
  }
  *(undefined8 *)(this + 8) = 0;
  this_00 = (CowData<RID> *)(this + 8);
  iVar3 = Array::size();
  lVar9 = (long)iVar3;
  if (lVar9 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    puVar10 = *(undefined8 **)(this + 8);
LAB_0010d84a:
    if (puVar10 == (undefined8 *)0x0) goto LAB_0010d6d8;
  }
  else {
    puVar10 = *(undefined8 **)(this + 8);
    if (puVar10 == (undefined8 *)0x0) {
      if (lVar9 == 0) goto LAB_0010d6d8;
      lVar11 = 0;
      CowData<RID>::_copy_on_write(this_00);
LAB_0010d758:
      uVar4 = lVar9 * 8 - 1;
      uVar4 = uVar4 >> 1 | uVar4;
      uVar4 = uVar4 >> 2 | uVar4;
      uVar4 = uVar4 >> 4 | uVar4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar8 = (uVar4 >> 0x20 | uVar4) + 1;
      if (lVar11 < lVar9) {
LAB_0010d7e0:
        if (lVar11 == 0) {
          puVar7 = (undefined8 *)Memory::alloc_static(lVar8 + 0x10U,false);
          if (puVar7 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            puVar10 = *(undefined8 **)(this + 8);
            goto LAB_0010d84a;
          }
          puVar10 = puVar7 + 2;
          *puVar7 = 1;
          puVar7[1] = 0;
          *(undefined8 **)(this + 8) = puVar10;
          lVar11 = 0;
        }
        else {
          puVar7 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)(this + 8) + -0x10),lVar8 + 0x10U,false)
          ;
          if (puVar7 == (undefined8 *)0x0) goto LAB_0010d8b1;
          puVar10 = puVar7 + 2;
          *puVar7 = 1;
          *(undefined8 **)(this + 8) = puVar10;
          lVar11 = puVar7[1];
        }
LAB_0010d5fe:
        if (lVar11 < lVar9) {
          memset(puVar10 + lVar11,0,(lVar9 - lVar11) * 8);
          puVar10[-1] = lVar9;
          goto LAB_0010d621;
        }
      }
      else {
        puVar10 = *(undefined8 **)(this + 8);
LAB_0010d7a9:
        puVar7 = (undefined8 *)Memory::realloc_static(puVar10 + -2,lVar8 + 0x10,false);
        if (puVar7 == (undefined8 *)0x0) {
LAB_0010d8b1:
          _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                           "Parameter \"mem_new\" is null.",0,0);
          puVar10 = *(undefined8 **)(this + 8);
          goto LAB_0010d84a;
        }
        puVar10 = puVar7 + 2;
        *puVar7 = 1;
        *(undefined8 **)(this + 8) = puVar10;
      }
LAB_0010d73b:
      puVar10[-1] = lVar9;
    }
    else {
      lVar11 = puVar10[-1];
      if (lVar9 != lVar11) {
        if (lVar9 != 0) {
          CowData<RID>::_copy_on_write(this_00);
          uVar4 = lVar9 * 8 - 1;
          uVar4 = uVar4 >> 1 | uVar4;
          uVar4 = uVar4 >> 2 | uVar4;
          uVar4 = uVar4 >> 4 | uVar4;
          uVar4 = uVar4 >> 8 | uVar4;
          uVar4 = uVar4 >> 0x10 | uVar4;
          uVar4 = uVar4 >> 0x20 | uVar4;
          lVar8 = uVar4 + 1;
          if (lVar11 * 8 == 0) goto LAB_0010d758;
          uVar5 = lVar11 * 8 - 1;
          uVar5 = uVar5 | uVar5 >> 1;
          uVar5 = uVar5 | uVar5 >> 2;
          uVar5 = uVar5 | uVar5 >> 4;
          uVar5 = uVar5 | uVar5 >> 8;
          uVar5 = uVar5 | uVar5 >> 0x10;
          uVar5 = uVar5 | uVar5 >> 0x20;
          if (lVar11 < lVar9) {
            if (uVar5 != uVar4) goto LAB_0010d7e0;
            puVar10 = *(undefined8 **)(this + 8);
            if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar11 = puVar10[-1];
            goto LAB_0010d5fe;
          }
          puVar10 = *(undefined8 **)(this + 8);
          if (uVar5 != uVar4) goto LAB_0010d7a9;
          if (puVar10 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          goto LAB_0010d73b;
        }
        LOCK();
        plVar1 = puVar10 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) {
          *(undefined8 *)(this + 8) = 0;
          goto LAB_0010d6d8;
        }
        lVar9 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
        puVar10 = *(undefined8 **)(this + 8);
        goto LAB_0010d84a;
      }
    }
  }
LAB_0010d621:
  lVar9 = 0;
  do {
    if ((long)puVar10[-1] <= lVar9) break;
    this_01 = (Variant *)Array::operator[]((int)aVStack_48);
    uVar6 = operator_cast_to_RID(this_01);
    if (*(long *)(this + 8) == 0) {
      lVar11 = 0;
LAB_0010d67c:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar11,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar11 = *(long *)(*(long *)(this + 8) + -8);
    if (lVar11 <= lVar9) goto LAB_0010d67c;
    CowData<RID>::_copy_on_write(this_00);
    puVar10 = *(undefined8 **)(this + 8);
    puVar10[lVar9] = uVar6;
    lVar9 = lVar9 + 1;
  } while (puVar10 != (undefined8 *)0x0);
LAB_0010d6d8:
  Array::~Array((Array *)aVStack_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Variant::operator IPAddress() const */

Variant * __thiscall Variant::operator_cast_to_IPAddress(Variant *this)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint *in_RSI;
  long in_FS_OFFSET;
  long local_38;
  uint *local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *in_RSI;
  if ((uVar3 - 0x1e & 0xfffffffd) == 0) {
    if (uVar3 != 0x1e) goto LAB_0010d95d;
    local_30[0] = (uint *)0x0;
    if (*(long *)(*(long *)(in_RSI + 2) + 0x18) == 0) goto LAB_0010d997;
    CowData<int>::_ref((CowData<int> *)local_30,(CowData *)(*(long *)(in_RSI + 2) + 0x18));
LAB_0010d968:
    puVar2 = local_30[0];
    if (local_30[0] != (uint *)0x0) {
      if (*(long *)(local_30[0] + -2) == 4) {
        IPAddress::IPAddress
                  ((IPAddress *)this,*local_30[0],local_30[0][1],local_30[0][2],local_30[0][3],false
                  );
        LOCK();
        puVar2 = puVar2 + -4;
        *(long *)puVar2 = *(long *)puVar2 + -1;
        UNLOCK();
        if (*(long *)puVar2 == 0) {
          Memory::free_static(local_30[0] + -4,false);
        }
        goto LAB_0010d9da;
      }
      LOCK();
      puVar2 = local_30[0] + -4;
      *(long *)puVar2 = *(long *)puVar2 + -1;
      UNLOCK();
      if (*(long *)puVar2 == 0) {
        Memory::free_static(local_30[0] + -4,false);
      }
    }
  }
  else if (((uVar3 & 0xfffffffd) == 0x1d) || (uVar3 == 0x21)) {
LAB_0010d95d:
    _convert_array_from_variant<Vector<int>>((Variant *)&local_38);
    goto LAB_0010d968;
  }
LAB_0010d997:
  stringify((int)&local_38);
  IPAddress::IPAddress((IPAddress *)this,(String *)&local_38);
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_0010d9da:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* stringify_variant_clean(Variant const&, int) */

Variant * stringify_variant_clean(Variant *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 in_register_00000034;
  String *pSVar6;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::stringify((int)param_1);
  iVar2 = *(int *)CONCAT44(in_register_00000034,param_2);
  if (iVar2 == 0x15) {
    String::c_escape();
    local_48 = &_LC146;
    local_58 = 0;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_58);
    String::quote((String *)&local_50);
    pSVar6 = (String *)&_LC147;
  }
  else {
    if (iVar2 != 0x16) {
      if (iVar2 == 4) {
        String::c_escape();
        local_48 = &_LC146;
        local_50 = 0;
        local_40 = 1;
        String::parse_latin1((StrRange *)&local_50);
        String::quote((String *)&local_48);
        puVar5 = local_48;
        puVar3 = *(undefined **)param_1;
        if (puVar3 == local_48) {
          if (puVar3 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(puVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_48 = (undefined *)0x0;
              Memory::free_static(puVar5 + -0x10,false);
            }
          }
        }
        else {
          if (puVar3 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(puVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)param_1;
              *(undefined8 *)param_1 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          *(undefined **)param_1 = local_48;
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
      }
      goto LAB_0010dbb0;
    }
    String::c_escape();
    local_48 = &_LC146;
    local_58 = 0;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_58);
    String::quote((String *)&local_50);
    pSVar6 = (String *)&_LC148;
  }
  operator+((char *)&local_48,pSVar6);
  puVar5 = local_48;
  puVar3 = *(undefined **)param_1;
  if (puVar3 == local_48) {
    if (puVar3 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (undefined *)0x0;
        Memory::free_static(puVar5 + -0x10,false);
      }
    }
  }
  else {
    if (puVar3 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(puVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar4 = *(long *)param_1;
        *(undefined8 *)param_1 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    *(undefined **)param_1 = local_48;
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
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_60 + -0x10),false);
    }
  }
LAB_0010dbb0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  return;
}



/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
  operator_delete(this,0x10);
  return;
}



/* CowData<Face3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Face3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Plane>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Plane>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant_const*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Variant::is_zero() const [clone .cold] */

void Variant::is_zero(void)

{
  FUN_00103539();
  return;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

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



/* Error CowData<String>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<String>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<_VariantStrPair>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<_VariantStrPair>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::operator Vector<Variant>() const [clone .cold] */

void __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Variant::operator Vector<Plane>() const [clone .cold] */

void __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Variant::operator Vector<RID>() const [clone .cold] */

void __thiscall Variant::operator_cast_to_Vector(Variant *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f550;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f590;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f5d0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f5b0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f610;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f650;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f670;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f5d0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f610;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f5b0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f650;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f670;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f590;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f550;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f630;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f570;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f630;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__PackedArrayRef_0011f570;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x20);
      return;
    }
  }
  operator_delete(this,0x20);
  return;
}



/* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::~HashMap() */

void __thiscall
HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
::~HashMap(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
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
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::~PagedAllocator
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *pPVar1;
  long *plVar2;
  long lVar3;
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> PVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pPVar1 = this + 0x24;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar5 = (ulong)local_48 >> 8;
    local_48 = (char *)(uVar5 << 8);
    LOCK();
    PVar4 = *pPVar1;
    if (PVar4 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar4 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) break;
    local_48 = (char *)(uVar5 << 8);
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0);
  }
  if (*(uint *)(this + 0x14) < (uint)(*(int *)(this + 0x20) * *(int *)(this + 0x10))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_48 = "N7Variant5Pools11BucketSmallE";
      local_50 = 0;
      local_40 = 0x1d;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar7 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x10) != 0) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)this + lVar7 * 8),false);
      lVar3 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar3),false);
    } while ((uint)lVar7 < *(uint *)(this + 0x10));
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  this[0x24] = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::~PagedAllocator
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *pPVar1;
  long *plVar2;
  long lVar3;
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> PVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pPVar1 = this + 0x24;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar5 = (ulong)local_48 >> 8;
    local_48 = (char *)(uVar5 << 8);
    LOCK();
    PVar4 = *pPVar1;
    if (PVar4 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar4 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) break;
    local_48 = (char *)(uVar5 << 8);
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0);
  }
  if (*(uint *)(this + 0x14) < (uint)(*(int *)(this + 0x20) * *(int *)(this + 0x10))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_48 = "N7Variant5Pools11BucketLargeE";
      local_50 = 0;
      local_40 = 0x1d;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar7 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x10) != 0) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)this + lVar7 * 8),false);
      lVar3 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar3),false);
    } while ((uint)lVar7 < *(uint *)(this + 0x10));
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  this[0x24] = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PagedAllocator<Variant::Pools::BucketMedium, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::~PagedAllocator
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
  long *plVar2;
  long lVar3;
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pPVar1 = this + 0x24;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar5 = (ulong)local_48 >> 8;
    local_48 = (char *)(uVar5 << 8);
    LOCK();
    PVar4 = *pPVar1;
    if (PVar4 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar4 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
    local_48 = (char *)(uVar5 << 8);
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0);
  }
  if (*(uint *)(this + 0x14) < (uint)(*(int *)(this + 0x20) * *(int *)(this + 0x10))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_48 = "N7Variant5Pools12BucketMediumE";
      local_50 = 0;
      local_40 = 0x1e;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar7 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x10) != 0) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)this + lVar7 * 8),false);
      lVar3 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar3),false);
    } while ((uint)lVar7 < *(uint *)(this + 0x10));
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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



/* CowData<double>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<double>::_copy_on_write(CowData<double> *this)

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



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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
  __n = lVar2 * 0x10;
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



/* CowData<long>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<long>::_copy_on_write(CowData<long> *this)

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



/* CowData<Vector4>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector4>::_copy_on_write(CowData<Vector4> *this)

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
  __n = lVar2 * 0x10;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_0010fbd6:
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + -8);
    if (param_1 == lVar7) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar7 == 0) goto LAB_0010fbd6;
    uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    lVar4 = (uVar3 | uVar3 >> 0x20) + 1;
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_0010fc30:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
    }
    puVar5[-1] = param_1;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0010fc30;
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
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
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar9) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00110080:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      else {
        if (lVar9 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00110062;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00110080;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00110062:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<long>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<long>::resize<false>(CowData<long> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
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
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar9) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00110340:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      else {
        if (lVar9 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_00110322;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00110340;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00110322:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<double>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<double>::resize<false>(CowData<double> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
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
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar9) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00110600:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      else {
        if (lVar9 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_001105e2;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00110600;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001105e2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
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
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar9) {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_001108c0:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar5 = *(undefined8 **)this;
        if (puVar5 == (undefined8 *)0x0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      else {
        if (lVar9 == 0) {
          puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
            uVar8 = 0x171;
            pcVar7 = "Parameter \"mem_new\" is null.";
            goto LAB_001108a2;
          }
          *puVar5 = 1;
          puVar5[1] = 0;
        }
        else {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001108c0;
          *puVar5 = 1;
        }
        puVar5 = puVar5 + 2;
        *(undefined8 **)this = puVar5;
      }
      puVar5[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001108a2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar8 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_00110a72:
          puVar8[-1] = param_1;
          return;
        }
        puVar5 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar4 + 0x11,false);
        if (puVar5 != (undefined8 *)0x0) {
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_00110a72;
        }
LAB_00110bd0:
        pcVar6 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00110bb8;
      }
      if (uVar4 + 1 == lVar3) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = puVar8[-1];
LAB_00110ae1:
        if (param_1 <= lVar3) goto LAB_00110a4d;
      }
      else {
        if (lVar10 != 0) {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00110bd0;
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
          lVar3 = puVar5[1];
          goto LAB_00110ae1;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          pcVar6 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00110bb8;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar3 = 0;
      }
      memset(puVar8 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00110a4d:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00110bb8:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    lVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar4 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar4 = lVar12 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar5 = param_1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 | uVar5 >> 0x20;
    if (uVar5 != 0xffffffffffffffff) {
      if (param_1 <= lVar12) {
        puVar9 = *(undefined8 **)this;
        if (uVar5 + 1 == lVar4) {
          if (puVar9 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar9 + -2,uVar5 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_00110ef8:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar9 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar9;
        }
        puVar9[-1] = param_1;
        return;
      }
      if (uVar5 + 1 == lVar4) {
        puVar9 = *(undefined8 **)this;
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = puVar9[-1];
LAB_00110e21:
        if (param_1 <= lVar4) goto LAB_00110d98;
      }
      else {
        if (lVar12 != 0) {
          puVar6 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar5 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) goto LAB_00110ef8;
          puVar9 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar9;
          lVar4 = puVar6[1];
          goto LAB_00110e21;
        }
        puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          pcVar10 = "Parameter \"mem_new\" is null.";
          goto LAB_00110eda;
        }
        puVar9 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar9;
        lVar4 = 0;
      }
      uVar3 = _UNK_0011f858;
      uVar11 = __LC16;
      puVar7 = puVar9 + lVar4 * 2;
      puVar6 = puVar7;
      if (((param_1 - lVar4) * 0x10 & 0x10U) != 0) {
        *puVar7 = __LC16;
        puVar7[1] = uVar3;
        puVar6 = puVar7 + 2;
        if (puVar7 + (param_1 - lVar4) * 2 == puVar7 + 2) goto LAB_00110d98;
      }
      do {
        *puVar6 = uVar11;
        puVar6[1] = uVar3;
        puVar8 = puVar6 + 4;
        puVar6[2] = uVar11;
        puVar6[3] = uVar3;
        puVar6 = puVar8;
      } while (puVar7 + (param_1 - lVar4) * 2 != puVar8);
LAB_00110d98:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar11 = 0x16a;
  pcVar10 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00110eda:
  _err_print_error("resize","./core/templates/cowdata.h",uVar11,pcVar10,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector4>::resize<false>(CowData<Vector4> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    lVar3 = 0;
  }
  else {
    lVar12 = *(long *)(lVar3 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar12 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 != 0) {
    uVar4 = param_1 * 0x10 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar12) {
        puVar9 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar9 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar9 + -2,uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00111218:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return;
          }
          puVar9 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar9;
        }
        puVar9[-1] = param_1;
        return;
      }
      if (uVar4 + 1 == lVar3) {
        puVar9 = *(undefined8 **)this;
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = puVar9[-1];
LAB_00111141:
        if (param_1 <= lVar3) goto LAB_001110b8;
      }
      else {
        if (lVar12 != 0) {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00111218;
          puVar9 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar9;
          lVar3 = puVar5[1];
          goto LAB_00111141;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          pcVar10 = "Parameter \"mem_new\" is null.";
          goto LAB_001111fa;
        }
        puVar9 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar9;
        lVar3 = 0;
      }
      pauVar6 = (undefined1 (*) [16])(puVar9 + lVar3 * 2);
      pauVar7 = pauVar6;
      if (((param_1 - lVar3) * 0x10 & 0x10U) != 0) {
        *pauVar6 = (undefined1  [16])0x0;
        pauVar7 = pauVar6 + 1;
        if (pauVar6 + (param_1 - lVar3) == pauVar7) goto LAB_001110b8;
      }
      do {
        *pauVar7 = (undefined1  [16])0x0;
        pauVar8 = pauVar7 + 2;
        pauVar7[1] = (undefined1  [16])0x0;
        pauVar7 = pauVar8;
      } while (pauVar6 + (param_1 - lVar3) != pauVar8);
LAB_001110b8:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar11 = 0x16a;
  pcVar10 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001111fa:
  _err_print_error("resize","./core/templates/cowdata.h",uVar11,pcVar10,0,0);
  return;
}



/* Variant::Pools::BucketSmall* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::alloc<>()
    */

BucketSmall * __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketSmall,true,4096u> PVar2;
  long lVar3;
  BucketSmall *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x18,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x18;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketSmall **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketSmall,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketMedium* PagedAllocator<Variant::Pools::BucketMedium, true,
   4096u>::alloc<>() */

BucketMedium * __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketMedium,true,4096u> PVar2;
  long lVar3;
  BucketMedium *pBVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar13 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) * 0x30,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar13) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar14 = *(long **)(this + 8);
    }
    else {
      plVar14 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      plVar6 = (long *)*plVar14;
      lVar10 = 0;
      plVar11 = plVar6;
      do {
        plVar12 = plVar11 + 1;
        lVar15 = *(long *)(lVar5 + lVar13) + lVar10;
        lVar10 = lVar10 + 0x30;
        *plVar11 = lVar15;
        plVar11 = plVar12;
      } while (plVar6 + uVar7 != plVar12);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar14 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketMedium **)
            (plVar14[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketMedium,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* Variant::Pools::BucketLarge* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::alloc<>()
    */

BucketLarge * __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::alloc<>
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this)

{
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *pPVar1;
  PagedAllocator<Variant::Pools::BucketLarge,true,4096u> PVar2;
  long lVar3;
  BucketLarge *pBVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar11 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) << 6,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar12 = *(long **)(this + 8);
    }
    else {
      plVar12 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      uVar10 = 0;
      lVar6 = *plVar12;
      do {
        *(ulong *)(lVar6 + uVar10 * 8) = uVar10 * 0x40 + *(long *)(lVar5 + lVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar12 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pBVar4 = *(BucketLarge **)
            (plVar12[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
            (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<Variant::Pools::BucketLarge,true,4096u>)0x0;
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
::operator[](HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
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
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00112b38:
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
        goto LAB_001129ca;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_001129ce:
      if (iVar45 != 0) {
LAB_001129d6:
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
                *(undefined4 *)(pauVar41[1] + 8) = 0;
                goto LAB_00112883;
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
      goto LAB_001124c4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001124c4;
    if (iVar45 != 0) goto LAB_001129d6;
LAB_001124ea:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112883;
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
              goto LAB_00112883;
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
      if (*(long *)(this + 8) == 0) goto LAB_00112b38;
LAB_001129ca:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001129ce;
    }
LAB_001124c4:
    if ((float)uVar39 * __LC97 < (float)(iVar45 + 1)) goto LAB_001124ea;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00112b0b:
    *(undefined4 *)(pauVar41[1] + 8) = 0;
LAB_00112771:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_0011277e;
LAB_001129a5:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar3 = local_58;
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_00112b0b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    *(undefined4 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00112771;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_001129a5;
LAB_0011277e:
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
LAB_00112883:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  Variant *this_00;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  do {
    this_00 = (Variant *)*puVar1;
    if (this_00 == (Variant *)0x0) {
      if (*(int *)(puVar1 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(this_00 + 0x28) == puVar1) {
      *puVar1 = *(undefined8 *)(this_00 + 0x18);
      if (this_00 == (Variant *)puVar1[1]) {
        puVar1[1] = *(undefined8 *)(this_00 + 0x20);
      }
      if (*(long *)(this_00 + 0x20) != 0) {
        *(undefined8 *)(*(long *)(this_00 + 0x20) + 0x18) = *(undefined8 *)(this_00 + 0x18);
      }
      if (*(long *)(this_00 + 0x18) != 0) {
        *(undefined8 *)(*(long *)(this_00 + 0x18) + 0x20) = *(undefined8 *)(this_00 + 0x20);
      }
      if ((&::Variant::needs_deinit)[*(int *)this_00] != '\0') {
        ::Variant::_clear_internal(this_00);
      }
      Memory::free_static(this_00,false);
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar1 = *(undefined8 **)this;
  } while (*(int *)(puVar1 + 2) != 0);
  Memory::free_static(puVar1,false);
  return;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  Variant *this_00;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pVVar2 = *(Variant **)this;
    if (pVVar2 != (Variant *)0x0) {
      lVar3 = *(long *)(pVVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pVVar2;
        do {
          if ((&::Variant::needs_deinit)[*(int *)this_00] != '\0') {
            ::Variant::_clear_internal(this_00);
          }
          lVar5 = lVar5 + 1;
          this_00 = this_00 + 0x18;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pVVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
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



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_0011f5f0;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  return;
}



/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
  *(undefined ***)this = &PTR__PackedArrayRef_0011f5f0;
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  operator_delete(this,0x20);
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



/* CowData<_VariantStrPair>::_unref() */

void __thiscall CowData<_VariantStrPair>::_unref(CowData<_VariantStrPair> *this)

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
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 2;
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



/* Error CowData<_VariantStrPair>::resize<false>(long) */

undefined8 __thiscall
CowData<_VariantStrPair>::resize<false>(CowData<_VariantStrPair> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  
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
    lVar9 = 0;
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
    lVar9 = lVar8 * 0x10;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00113450:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x10 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  if (uVar10 == 0xffffffffffffffff) goto LAB_00113450;
  uVar12 = param_1;
  if (param_1 <= lVar8) {
    while (puVar7 = *(undefined8 **)this, puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar12) {
        if (uVar10 + 1 != lVar9) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar10 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0011347f;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return 0;
      }
      plVar2 = puVar7 + uVar12 * 2;
      if (plVar2[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar2[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = plVar2[1];
          plVar2[1] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar8 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar12 = uVar12 + 1;
    }
LAB_001134cd:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar10 + 1 == lVar9) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_001134cd;
    lVar8 = puVar7[-1];
LAB_001133b1:
    if (param_1 <= lVar8) goto LAB_001132b8;
  }
  else {
    if (lVar8 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar10 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_0011347f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar7;
      lVar8 = puVar4[1];
      goto LAB_001133b1;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar8 = 0;
  }
  pauVar11 = (undefined1 (*) [16])(puVar7 + param_1 * 2);
  pauVar5 = (undefined1 (*) [16])(puVar7 + lVar8 * 2);
  if (((int)pauVar11 - (int)pauVar5 & 0x10U) != 0) {
    *pauVar5 = (undefined1  [16])0x0;
    pauVar5 = pauVar5 + 1;
    if (pauVar11 == pauVar5) goto LAB_001132b8;
  }
  do {
    *pauVar5 = (undefined1  [16])0x0;
    pauVar6 = pauVar5 + 2;
    pauVar5[1] = (undefined1  [16])0x0;
    pauVar5 = pauVar6;
  } while (pauVar11 != pauVar6);
LAB_001132b8:
  puVar7[-1] = param_1;
  return 0;
}



/* String stringify_vector<Vector<Vector2> >(Vector<Vector2> const&, int) */

Vector * stringify_vector<Vector<Vector2>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011dc93;
    local_58 = 5;
    local_50._8_8_ = 0;
    local_50._0_8_ = *(ulong *)(lVar2 + lVar7 * 8);
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)&local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
      Variant::_clear_internal((Variant *)&local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011dc93:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<Vector3> >(Vector<Vector3> const&, int) */

Vector * stringify_vector<Vector<Vector3>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011de82;
    local_58 = 9;
    local_50._12_4_ = 0;
    local_50._0_12_ = *(undefined1 (*) [12])(lVar2 + lVar7 * 0xc);
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)&local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
      Variant::_clear_internal((Variant *)&local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011de82:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<Color> >(Vector<Color> const&, int) */

Vector * stringify_vector<Vector<Color>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011e06b;
    local_58 = 0x14;
    local_50 = *(undefined1 (*) [16])(lVar2 + lVar7 * 0x10);
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)&local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
      Variant::_clear_internal((Variant *)&local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011e06b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<Vector4> >(Vector<Vector4> const&, int) */

Vector * stringify_vector<Vector<Vector4>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011e24b;
    local_58 = 0xc;
    local_50 = *(undefined1 (*) [16])(lVar2 + lVar7 * 0x10);
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)&local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
      Variant::_clear_internal((Variant *)&local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011e24b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<String> >(Vector<String> const&, int) */

Vector * stringify_vector<Vector<String>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 in_register_00000034;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  lVar7 = CONCAT44(in_register_00000034,param_2);
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar3 = *(long *)(lVar7 + 8);
  while( true ) {
    if ((lVar3 == 0) || (*(long *)(lVar3 + -8) <= lVar8)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar8 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar3 = *(long *)(lVar7 + 8);
    }
    if (lVar3 == 0) break;
    lVar6 = *(long *)(lVar3 + -8);
    if (lVar6 <= lVar8) goto LAB_0011e454;
    local_58 = 4;
    plVar2 = (long *)(lVar3 + lVar8 * 8);
    local_50 = 0;
    local_48 = 0;
    lVar3 = *plVar2;
    plVar1 = (long *)(lVar3 + -0x10);
    if (lVar3 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_0011e3c2;
        LOCK();
        lVar6 = *plVar1;
        bVar9 = lVar3 == lVar6;
        if (bVar9) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar6 != -1) {
        local_50 = *plVar2;
      }
    }
LAB_0011e3c2:
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)&local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar5 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar5 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
      Variant::_clear_internal((Variant *)&local_58);
    }
    lVar3 = *(long *)(lVar7 + 8);
    lVar8 = lVar8 + 1;
  }
  lVar6 = 0;
LAB_0011e454:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* String stringify_vector<Vector<unsigned char> >(Vector<unsigned char> const&, int) */

Vector * stringify_vector<Vector<unsigned_char>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  ulong local_50;
  undefined8 local_48;
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011e633;
    local_50 = (ulong)*(byte *)(lVar2 + lVar7);
    local_58[0] = 2;
    local_48 = 0;
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal((Variant *)local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011e633:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<int> >(Vector<int> const&, int) */

Vector * stringify_vector<Vector<int>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011e812;
    local_50 = (long)*(int *)(lVar2 + lVar7 * 4);
    local_58[0] = 2;
    local_48 = 0;
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal((Variant *)local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011e812:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<long> >(Vector<long> const&, int) */

Vector * stringify_vector<Vector<long>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011e9f2;
    local_50 = *(undefined8 *)(lVar2 + lVar7 * 8);
    local_58[0] = 2;
    local_48 = 0;
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal((Variant *)local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011e9f2:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<float> >(Vector<float> const&, int) */

Vector * stringify_vector<Vector<float>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  double local_50;
  undefined8 local_48;
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011ebd9;
    local_58[0] = 3;
    local_48 = 0;
    local_50 = (double)*(float *)(lVar2 + lVar7 * 4);
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal((Variant *)local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011ebd9:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Vector<double> >(Vector<double> const&, int) */

Vector * stringify_vector<Vector<double>>(Vector *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 in_register_00000034;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar5 = CONCAT44(in_register_00000034,param_2);
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_68 = &_LC149;
  local_60 = 1;
  String::parse_latin1((StrRange *)param_1);
  lVar2 = *(long *)(lVar5 + 8);
  while( true ) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + -8) <= lVar7)) {
      String::operator+=((String *)param_1,"]");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar7 != 0) {
      String::operator+=((String *)param_1,", ");
      lVar2 = *(long *)(lVar5 + 8);
    }
    if (lVar2 == 0) break;
    lVar6 = *(long *)(lVar2 + -8);
    if (lVar6 <= lVar7) goto LAB_0011edb5;
    local_50 = *(undefined8 *)(lVar2 + lVar7 * 8);
    local_58[0] = 3;
    local_48 = 0;
    stringify_variant_clean((Variant *)&local_68,(int)(Variant *)local_58);
    String::operator+=((String *)param_1,(String *)&local_68);
    puVar4 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(puVar4 + -0x10,false);
      }
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal((Variant *)local_58);
    }
    lVar2 = *(long *)(lVar5 + 8);
    lVar7 = lVar7 + 1;
  }
  lVar6 = 0;
LAB_0011edb5:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* String stringify_vector<Array>(Array const&, int) */

Array * stringify_vector<Array>(Array *param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  iVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_58 = &_LC149;
  local_50 = 1;
  String::parse_latin1((StrRange *)param_1);
  iVar3 = Array::size();
  if (0 < iVar3) {
    while( true ) {
      iVar3 = Array::operator[](param_2);
      stringify_variant_clean((Variant *)&local_58,iVar3);
      String::operator+=((String *)param_1,(String *)&local_58);
      puVar2 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar2 + -0x10,false);
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = Array::size();
      if (iVar3 <= iVar4) break;
      String::operator+=((String *)param_1,", ");
    }
  }
  String::operator+=((String *)param_1,"]");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011f1a4) */
/* WARNING: Removing unreachable block (ram,0x0011f17a) */
/* WARNING: Removing unreachable block (ram,0x0011f1ce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Variant::Pools::_bucket_small */

void Variant::Pools::_GLOBAL__sub_I__bucket_small(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = false;
  while( true ) {
    LOCK();
    bVar2 = !bVar3;
    if (bVar2) {
      bVar3 = true;
    }
    UNLOCK();
    if (bVar2) break;
    do {
    } while (bVar3);
  }
  unique0x10000106 = 0;
  _DAT_0010df30 = _LC151;
  _DAT_0010df30 = _DAT_0010df30 << 0x40;
  _DAT_0010df40 = 0x1000;
  __bucket_small = (undefined1  [16])0x0;
  __cxa_atexit(PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::~PagedAllocator,
               &_bucket_small,&__dso_handle);
  bVar3 = false;
  while( true ) {
    LOCK();
    bVar2 = !bVar3;
    if (bVar2) {
      bVar3 = true;
    }
    UNLOCK();
    if (bVar2) break;
    do {
    } while (bVar3);
  }
  unique0x10000116 = 0;
  _DAT_0010deb0 = _LC151;
  _DAT_0010deb0 = _DAT_0010deb0 << 0x40;
  _DAT_0010dec0 = 0x1000;
  __bucket_medium = (undefined1  [16])0x0;
  __cxa_atexit(PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::~PagedAllocator,
               &_bucket_medium,&__dso_handle);
  bVar3 = false;
  while( true ) {
    LOCK();
    bVar2 = !bVar3;
    if (bVar2) {
      bVar3 = true;
    }
    UNLOCK();
    if (bVar2) break;
    do {
    } while (bVar3);
  }
  unique0x10000126 = 0;
  _DAT_0010de30 = _LC151;
  _DAT_0010de30 = _DAT_0010de30 << 0x40;
  _DAT_0010de40 = 0x1000;
  __bucket_large = (undefined1  [16])0x0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __cxa_atexit(PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::~PagedAllocator,
                 &_bucket_large,&__dso_handle);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<String>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<String>::~PackedArrayRef(PackedArrayRef<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PagedAllocator<Variant::Pools::BucketMedium, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<Variant::Pools::BucketMedium,true,4096u>::~PagedAllocator
          (PagedAllocator<Variant::Pools::BucketMedium,true,4096u> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PagedAllocator<Variant::Pools::BucketLarge, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<Variant::Pools::BucketLarge,true,4096u>::~PagedAllocator
          (PagedAllocator<Variant::Pools::BucketLarge,true,4096u> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PagedAllocator<Variant::Pools::BucketSmall, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<Variant::Pools::BucketSmall,true,4096u>::~PagedAllocator
          (PagedAllocator<Variant::Pools::BucketSmall,true,4096u> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::~HashMap() */

void __thiscall
HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
::~HashMap(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<int>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<int>::~PackedArrayRef(PackedArrayRef<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector3>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector3>::~PackedArrayRef(PackedArrayRef<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector4>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector4>::~PackedArrayRef(PackedArrayRef<Vector4> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Color>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Color>::~PackedArrayRef(PackedArrayRef<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<Vector2>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<Vector2>::~PackedArrayRef(PackedArrayRef<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<float>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<float>::~PackedArrayRef(PackedArrayRef<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<double>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<double>::~PackedArrayRef(PackedArrayRef<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<long>::~PackedArrayRef() */

void __thiscall Variant::PackedArrayRef<long>::~PackedArrayRef(PackedArrayRef<long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRef<unsigned char>::~PackedArrayRef() */

void __thiscall
Variant::PackedArrayRef<unsigned_char>::~PackedArrayRef(PackedArrayRef<unsigned_char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Variant::PackedArrayRefBase::~PackedArrayRefBase() */

void __thiscall Variant::PackedArrayRefBase::~PackedArrayRefBase(PackedArrayRefBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.