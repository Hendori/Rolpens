
/* ResourceFormatSaverBinary::recognize(Ref<Resource> const&) const */

undefined8 ResourceFormatSaverBinary::recognize(Ref *param_1)

{
  return 1;
}



/* ResourceFormatLoaderBinary::has_custom_uid_support() const */

undefined8 ResourceFormatLoaderBinary::has_custom_uid_support(void)

{
  return 1;
}



/* read_reals(float*, Ref<FileAccess>&, unsigned long) */

undefined8 read_reals(float *param_1,Ref *param_2,ulong param_3)

{
  double dVar1;
  float *pfVar2;
  long *plVar3;
  
  plVar3 = *(long **)param_2;
  if (*(char *)((long)plVar3 + 0x17d) != '\0') {
    if (param_3 != 0) {
      pfVar2 = param_1;
      while( true ) {
        dVar1 = (double)(**(code **)(*plVar3 + 0x210))();
        *pfVar2 = (float)dVar1;
        if (pfVar2 + 1 == param_1 + param_3) break;
        plVar3 = *(long **)param_2;
        pfVar2 = pfVar2 + 1;
      }
    }
    return 0;
  }
  (**(code **)(*plVar3 + 0x220))(plVar3,param_1,param_3 << 2);
  return 0;
}



/* save_ustring(Ref<FileAccess>, String const&) */

void save_ustring(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8();
  if (local_38 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(ulong *)(local_38 + -8) & 0xffffffff;
    if ((int)*(ulong *)(local_38 + -8) == 0) {
      uVar7 = 1;
    }
  }
  (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,uVar7);
  plVar2 = (long *)*param_1;
  pcVar3 = *(code **)(*plVar2 + 0x2d0);
  if (local_38 == 0) {
    lVar6 = 1;
  }
  else {
    iVar4 = (int)*(undefined8 *)(local_38 + -8);
    lVar6 = (long)iVar4;
    if (iVar4 == 0) {
      lVar6 = 1;
    }
  }
  uVar5 = CharString::get_data();
  (*pcVar3)(plVar2,uVar5,lVar6);
  if (local_38 != 0) {
    LOCK();
    plVar2 = (long *)(local_38 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_38 + -0x10),false);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Ref *param_1)

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



/* Ref<FileAccess>::TEMPNAMEPLACEHOLDERVALUE(Ref<FileAccess> const&) [clone .isra.0] */

void __thiscall Ref<FileAccess>::operator=(Ref<FileAccess> *this,Ref *param_1)

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



/* void Ref<FileAccess>::TEMPNAMEPLACEHOLDERVALUE(Ref<FileAccessCompressed> const&) [clone .isra.0]
    */

void __thiscall Ref<FileAccess>::operator=(Ref<FileAccess> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&FileAccess::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* List<Ref<Resource>, DefaultAllocator>::push_back(Ref<Resource> const&) [clone .isra.0] */

void __thiscall
List<Ref<Resource>,DefaultAllocator>::push_back
          (List<Ref<Resource>,DefaultAllocator> *this,Ref *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
  *pauVar4 = (undefined1  [16])0x0;
  pauVar4[1] = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    *(long *)*pauVar4 = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)*pauVar4 = 0;
    }
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(*pauVar4 + 8) = 0;
  *(long **)(pauVar4[1] + 8) = plVar1;
  *(long *)pauVar4[1] = lVar2;
  if (lVar2 != 0) {
    *(undefined1 (**) [16])(lVar2 + 8) = pauVar4;
  }
  plVar1[1] = (long)pauVar4;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)pauVar4;
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



/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_long>::_copy_on_write(CowData<unsigned_long> *this)

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



/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */

void __thiscall CowData<char32_t>::operator=(CowData<char32_t> *this,CowData *param_1)

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
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
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



/* ResourceLoaderBinary::get_dependencies(Ref<FileAccess>, List<String, DefaultAllocator>*, bool)
   [clone .part.0] */

void ResourceLoaderBinary::get_dependencies(long param_1,long *param_2,char param_3)

{
  long *plVar1;
  code *pcVar2;
  CowData<char32_t> *this;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  CowData *pCVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (*(long *)(lVar3 + -8) <= lVar6) break;
      local_58 = 0;
      local_50 = 0;
      lVar9 = lVar6 * 0x20;
      plVar1 = (long *)(lVar3 + lVar9);
      if (plVar1[2] == -1) {
        if (*plVar1 != 0) {
          plVar8 = (long *)(*plVar1 + -0x10);
          do {
            lVar3 = *plVar8;
            if (lVar3 == 0) goto joined_r0x00101093;
            LOCK();
            lVar4 = *plVar8;
            bVar10 = lVar3 == lVar4;
            if (bVar10) {
              *plVar8 = lVar3 + 1;
              lVar4 = lVar3;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar4 != -1) {
            local_58 = *plVar1;
          }
joined_r0x00101093:
          if (param_3 != '\0') {
            lVar3 = *(long *)(param_1 + 0x98);
            goto LAB_0010120e;
          }
LAB_0010109e:
          if ((local_50 == 0) || (*(uint *)(local_50 + -8) < 2)) goto LAB_001010ad;
          String::operator+=((String *)&local_58,"::");
          goto LAB_00101258;
        }
        if (param_3 != '\0') {
LAB_0010120e:
          if (lVar3 == 0) goto LAB_00101320;
          lVar4 = *(long *)(lVar3 + -8);
          if (lVar4 <= lVar6) goto LAB_00101323;
          pCVar7 = (CowData *)(lVar3 + lVar9);
          goto LAB_00101228;
        }
LAB_001010ad:
        lVar3 = *param_2;
      }
      else {
        ResourceUID::id_to_text((long)&local_48);
        lVar4 = local_48;
        lVar3 = local_58;
        if (local_58 == local_48) {
          if (local_58 == 0) goto LAB_00101055;
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 != 0) goto LAB_00101055;
          local_48 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
          lVar3 = *(long *)(param_1 + 0x98);
        }
        else {
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
          local_58 = local_48;
LAB_00101055:
          lVar3 = *(long *)(param_1 + 0x98);
        }
        if (lVar3 == 0) {
LAB_00101320:
          lVar4 = 0;
LAB_00101323:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar4,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = *(long *)(lVar3 + -8);
        if (lVar4 <= lVar6) goto LAB_00101323;
        pCVar7 = (CowData *)(lVar3 + lVar9);
        if (local_50 != *(long *)pCVar7) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,pCVar7);
          goto joined_r0x00101093;
        }
        if (param_3 == '\0') goto LAB_0010109e;
LAB_00101228:
        if ((*(long *)(pCVar7 + 8) != 0) && (1 < *(uint *)(*(long *)(pCVar7 + 8) + -8))) {
          operator+((char *)&local_48,(String *)&_LC24);
          String::operator+=((String *)&local_58,(String *)&local_48);
          lVar3 = local_48;
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
        }
        if ((local_50 == 0) || (*(uint *)(local_50 + -8) < 2)) goto LAB_001010ad;
LAB_00101258:
        operator+((char *)&local_48,(String *)&_LC24);
        String::operator+=((String *)&local_58,(String *)&local_48);
        lVar3 = local_48;
        if (local_48 == 0) goto LAB_001010ad;
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_001010ad;
        local_48 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *param_2;
      }
      if (lVar3 == 0) {
        pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *param_2 = (long)pauVar5;
        *(undefined4 *)pauVar5[1] = 0;
        *pauVar5 = (undefined1  [16])0x0;
      }
      this = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])this = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
      if (local_58 != 0) {
        CowData<char32_t>::_ref(this,(CowData *)&local_58);
      }
      lVar9 = local_50;
      plVar1 = (long *)*param_2;
      lVar3 = plVar1[1];
      *(undefined8 *)(this + 8) = 0;
      *(long **)(this + 0x18) = plVar1;
      *(long *)(this + 0x10) = lVar3;
      if (lVar3 != 0) {
        *(CowData<char32_t> **)(lVar3 + 8) = this;
      }
      plVar1[1] = (long)this;
      if (*plVar1 == 0) {
        *plVar1 = (long)this;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar3 = local_58;
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
      lVar3 = *(long *)(param_1 + 0x98);
      lVar6 = lVar6 + 1;
    } while (lVar3 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatSaverBinary::get_recognized_extensions(Ref<Resource> const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatSaverBinary::get_recognized_extensions
          (ResourceFormatSaverBinary *this,Ref *param_1,List *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  CowData<char32_t> *pCVar5;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(**(long **)param_1 + 0x150) == Resource::get_base_extension) {
    local_60 = 0;
    local_58 = &_LC3;
    local_50 = 3;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    (**(code **)(**(long **)param_1 + 0x150))(&local_60);
  }
  String::to_lower();
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      lVar2 = *(long *)param_2;
      goto joined_r0x001015d5;
    }
  }
  lVar2 = *(long *)param_2;
joined_r0x001015d5:
  if (lVar2 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_2 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  pCVar5 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar5 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar5 + 0x10) = (undefined1  [16])0x0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref(pCVar5,(CowData *)&local_68);
  }
  plVar1 = *(long **)param_2;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar5 + 8) = 0;
  *(long **)(pCVar5 + 0x18) = plVar1;
  *(long *)(pCVar5 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar5;
  }
  plVar1[1] = (long)pCVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  cVar4 = String::operator!=((String *)&local_68,"res");
  if (cVar4 != '\0') {
    local_58 = &_LC3;
    local_60 = 0;
    local_50 = 3;
    String::parse_latin1((StrRange *)&local_60);
    if (*(long *)param_2 == 0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    pCVar5 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar5 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar5 + 0x10) = (undefined1  [16])0x0;
    if (local_60 != 0) {
      CowData<char32_t>::_ref(pCVar5,(CowData *)&local_60);
    }
    lVar3 = local_60;
    plVar1 = *(long **)param_2;
    lVar2 = plVar1[1];
    *(undefined8 *)(pCVar5 + 8) = 0;
    *(long **)(pCVar5 + 0x18) = plVar1;
    *(long *)(pCVar5 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(CowData<char32_t> **)(lVar2 + 8) = pCVar5;
    }
    plVar1[1] = (long)pCVar5;
    if (*plVar1 == 0) {
      *plVar1 = (long)pCVar5;
    }
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_00101a08:
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
LAB_00101931:
        if (param_1 <= lVar3) goto LAB_001018a8;
      }
      else {
        if (lVar12 != 0) {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00101a08;
          puVar9 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar9;
          lVar3 = puVar5[1];
          goto LAB_00101931;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          pcVar10 = "Parameter \"mem_new\" is null.";
          goto LAB_001019ea;
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
        if (pauVar6 + (param_1 - lVar3) == pauVar7) goto LAB_001018a8;
      }
      do {
        *pauVar7 = (undefined1  [16])0x0;
        pauVar8 = pauVar7 + 2;
        pauVar7[1] = (undefined1  [16])0x0;
        pauVar7 = pauVar8;
      } while (pauVar6 + (param_1 - lVar3) != pauVar8);
LAB_001018a8:
      puVar9[-1] = param_1;
      return;
    }
  }
  uVar11 = 0x16a;
  pcVar10 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001019ea:
  _err_print_error("resize","./core/templates/cowdata.h",uVar11,pcVar10,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<char>::resize<false>(CowData<char> *this,long param_1)

{
  long *plVar1;
  size_t __n;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  
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
LAB_00101c41:
    lVar9 = 0;
    lVar4 = 0;
  }
  else {
    lVar9 = *(long *)(lVar4 + -8);
    if (param_1 == lVar9) {
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
    if (1 < *(ulong *)(lVar4 + -0x10)) {
      if (*(long *)this == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      __n = *(size_t *)(*(long *)this + -8);
      uVar3 = 0x10;
      if (__n != 0) {
        uVar3 = __n - 1 | __n - 1 >> 1;
        uVar3 = uVar3 | uVar3 >> 2;
        uVar3 = uVar3 | uVar3 >> 4;
        uVar3 = uVar3 | uVar3 >> 8;
        uVar3 = uVar3 | uVar3 >> 0x10;
        uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
      }
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        *puVar5 = 1;
        puVar5[1] = __n;
        memcpy(puVar5 + 2,*(void **)this,__n);
        if (*(long *)this != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)this + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar4 = *(long *)this;
            *(undefined8 *)this = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        *(undefined8 **)this = puVar5 + 2;
      }
    }
    if (lVar9 == 0) goto LAB_00101c41;
    uVar3 = lVar9 - 1U | lVar9 - 1U >> 1;
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
  if (param_1 <= lVar9) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_00101b9a:
      puVar5[-1] = param_1;
      return;
    }
    puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
      goto LAB_00101b9a;
    }
LAB_00101d70:
    uVar7 = 0x1a9;
    pcVar8 = "_realloc";
LAB_00101d90:
    _err_print_error(pcVar8,"./core/templates/cowdata.h",uVar7,"Parameter \"mem_new\" is null.",0,0)
    ;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_00113ee2();
      return;
    }
    goto LAB_00101b71;
  }
  if (lVar9 == 0) {
    puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      uVar7 = 0x171;
      pcVar8 = "resize";
      goto LAB_00101d90;
    }
    *puVar5 = 1;
    puVar5[1] = 0;
  }
  else {
    puVar5 = (undefined8 *)
             Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00101d70;
    *puVar5 = 1;
  }
  puVar5 = puVar5 + 2;
  *(undefined8 **)this = puVar5;
LAB_00101b71:
  puVar5[-1] = param_1;
  return;
}



/* get_ustring(Ref<FileAccess>) */

char * get_ustring(char *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (**(code **)(*(long *)*param_2 + 0x1f0))();
  local_40[0] = 0;
  CowData<char>::resize<false>((CowData<char> *)local_40,(long)iVar4);
  lVar3 = local_40[0];
  if (local_40[0] == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(local_40[0] + -8);
    if (0 < lVar5) {
      (**(code **)(*(long *)*param_2 + 0x220))((long *)*param_2,local_40[0],(long)iVar4);
      lVar5 = *(long *)(lVar3 + -8);
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      if (0 < lVar5) {
        String::parse_utf8(param_1,(int)lVar3,SUB41(iVar4,0));
        LOCK();
        plVar1 = (long *)(lVar3 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_40[0] + -0x10),false);
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ResourceLoaderBinary::_advance_padding(unsigned int) */

void __thiscall ResourceLoaderBinary::_advance_padding(ResourceLoaderBinary *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4 - (param_1 & 3);
  if (iVar2 != 4) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      (**(code **)(**(long **)(this + 0x30) + 0x1e0))();
    } while (iVar2 != iVar1);
  }
  return;
}



/* ResourceLoaderBinary::_get_string() */

void ResourceLoaderBinary::_get_string(void)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long in_RSI;
  long lVar4;
  StringName *in_RDI;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (**(code **)(**(long **)(in_RSI + 0x30) + 0x1f0))();
  if (-1 < (int)uVar1) {
    uVar3 = (ulong)uVar1;
    lVar4 = *(long *)(in_RSI + 0x68);
    if (lVar4 == 0) {
      lVar6 = 0;
      goto LAB_001020f6;
    }
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 <= (long)uVar3) goto LAB_001020f6;
    StringName::StringName(in_RDI,(StringName *)(lVar4 + uVar3 * 8));
    goto LAB_00101fad;
  }
  uVar1 = uVar1 & 0x7fffffff;
  lVar4 = *(long *)(in_RSI + 0x50);
  uVar3 = (ulong)uVar1;
  if (lVar4 == 0) {
    if (uVar1 != 0) {
      CowData<char>::resize<false>((CowData<char> *)(in_RSI + 0x50),uVar3);
LAB_001020b1:
      plVar5 = *(long **)(in_RSI + 0x30);
      lVar4 = *(long *)(in_RSI + 0x50);
      pcVar2 = *(code **)(*plVar5 + 0x220);
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + -8);
        goto LAB_0010200c;
      }
LAB_00102120:
      lVar6 = 0;
LAB_00102123:
      uVar3 = 0;
LAB_001020f6:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar3,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 < (long)uVar3) {
      CowData<char>::resize<false>((CowData<char> *)(in_RSI + 0x50),uVar3);
      if (uVar1 != 0) goto LAB_001020b1;
    }
    else if (uVar1 != 0) {
      plVar5 = *(long **)(in_RSI + 0x30);
      pcVar2 = *(code **)(*plVar5 + 0x220);
LAB_0010200c:
      if (0 < lVar6) {
        (*pcVar2)(plVar5,lVar4,uVar3);
        lVar4 = *(long *)(in_RSI + 0x50);
        local_38 = 0;
        if (lVar4 == 0) goto LAB_00102120;
        lVar6 = *(long *)(lVar4 + -8);
        if (0 < lVar6) {
          String::parse_utf8((char *)&local_38,(int)lVar4,SUB41(uVar1,0));
          StringName::StringName(in_RDI,(String *)&local_38,false);
          lVar4 = local_38;
          if (local_38 != 0) {
            LOCK();
            plVar5 = (long *)(local_38 + -0x10);
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              local_38 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          goto LAB_00101fad;
        }
      }
      goto LAB_00102123;
    }
  }
  *(undefined8 *)in_RDI = 0;
LAB_00101fad:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceLoaderBinary::get_resource() */

void ResourceLoaderBinary::get_resource(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x20) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x20);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ResourceLoaderBinary::set_translation_remapped(bool) */

void __thiscall
ResourceLoaderBinary::set_translation_remapped(ResourceLoaderBinary *this,bool param_1)

{
  *this = (ResourceLoaderBinary)param_1;
  return;
}



/* ResourceLoaderBinary::get_unicode_string() */

void ResourceLoaderBinary::get_unicode_string(void)

{
  int iVar1;
  code *pcVar2;
  long in_RSI;
  long lVar3;
  undefined8 *in_RDI;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (**(code **)(**(long **)(in_RSI + 0x30) + 0x1f0))();
  lVar3 = *(long *)(in_RSI + 0x50);
  lVar6 = (long)iVar1;
  if (lVar3 == 0) {
    if (lVar6 < 1) {
      if (iVar1 == 0) goto LAB_00102206;
    }
    else {
      CowData<char>::resize<false>((CowData<char> *)(in_RSI + 0x50),lVar6);
LAB_00102295:
      plVar4 = *(long **)(in_RSI + 0x30);
      lVar3 = *(long *)(in_RSI + 0x50);
      pcVar2 = *(code **)(*plVar4 + 0x220);
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + -8);
        goto LAB_0010223e;
      }
    }
LAB_001022c6:
    lVar5 = 0;
LAB_001022c9:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,0,lVar5,"p_index","size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar3 + -8);
  if (lVar5 < lVar6) {
    CowData<char>::resize<false>((CowData<char> *)(in_RSI + 0x50),lVar6);
    if (iVar1 != 0) goto LAB_00102295;
  }
  else if (iVar1 != 0) {
    plVar4 = *(long **)(in_RSI + 0x30);
    pcVar2 = *(code **)(*plVar4 + 0x220);
LAB_0010223e:
    if (lVar5 < 1) goto LAB_001022c9;
    (*pcVar2)(plVar4,lVar3,lVar6);
    lVar3 = *(long *)(in_RSI + 0x50);
    local_38 = 0;
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + -8);
      if (lVar5 < 1) goto LAB_001022c9;
      String::parse_utf8((char *)&local_38,(int)lVar3,SUB41(iVar1,0));
      *in_RDI = local_38;
      goto LAB_0010220e;
    }
    goto LAB_001022c6;
  }
LAB_00102206:
  *in_RDI = 0;
LAB_0010220e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverBinaryInstance::_pad_buffer(Ref<FileAccess>, int) */

void ResourceFormatSaverBinaryInstance::_pad_buffer(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(param_2 >> 0x1f) >> 0x1e;
  iVar1 = (uVar2 - (param_2 + uVar2 & 3)) + 4;
  if (iVar1 < 4) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      (**(code **)(*(long *)*param_1 + 0x268))((long *)*param_1,0);
    } while (iVar1 != iVar3);
  }
  return;
}



/* ResourceFormatSaverBinaryInstance::save_unicode_string(Ref<FileAccess>, String const&, bool) */

void ResourceFormatSaverBinaryInstance::save_unicode_string
               (undefined8 *param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8();
  if (param_3 == '\0') {
    if (local_38 == 0) {
      uVar9 = 1;
    }
    else {
      uVar9 = *(ulong *)(local_38 + -8) & 0xffffffff;
      if ((int)*(ulong *)(local_38 + -8) == 0) {
        uVar9 = 1;
      }
    }
  }
  else if (local_38 == 0) {
    uVar9 = 0x80000001;
  }
  else {
    uVar5 = (uint)*(undefined8 *)(local_38 + -8);
    uVar4 = uVar5 | 0x80000000;
    if (uVar5 == 0) {
      uVar4 = 0x80000001;
    }
    uVar9 = (ulong)uVar4;
  }
  (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,uVar9);
  plVar2 = (long *)*param_1;
  pcVar3 = *(code **)(*plVar2 + 0x2d0);
  if (local_38 == 0) {
    lVar8 = 1;
  }
  else {
    iVar6 = (int)*(undefined8 *)(local_38 + -8);
    lVar8 = (long)iVar6;
    if (iVar6 == 0) {
      lVar8 = 1;
    }
  }
  uVar7 = CharString::get_data();
  (*pcVar3)(plVar2,uVar7,lVar8);
  if (local_38 != 0) {
    LOCK();
    plVar2 = (long *)(local_38 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_38 + -0x10),false);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverBinary::ResourceFormatSaverBinary() */

void __thiscall
ResourceFormatSaverBinary::ResourceFormatSaverBinary(ResourceFormatSaverBinary *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(code **)this = CharString::get_data;
  StringName::StringName((StringName *)(this + 0x180),"_save",false);
  this[0x188] = (ResourceFormatSaverBinary)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_set_uid",false);
  this[0x1a0] = (ResourceFormatSaverBinary)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_recognize",false);
  this[0x1b8] = (ResourceFormatSaverBinary)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_get_recognized_extensions",false);
  this[0x1d0] = (ResourceFormatSaverBinary)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_recognize_path",false);
  this[0x1e8] = (ResourceFormatSaverBinary)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001214c8;
  singleton = this;
  return;
}



/* ResourceLoaderBinary::recognize(Ref<FileAccess>) */

StrRange * ResourceLoaderBinary::recognize(StrRange *param_1,long param_2,long *param_3)

{
  Ref<FileAccess> *this;
  Object *pOVar1;
  long *plVar2;
  Ref *pRVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  Object *pOVar10;
  long in_FS_OFFSET;
  Ref *local_60;
  undefined *local_58;
  undefined8 local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  long lVar9;
  
  pOVar1 = (Object *)*param_3;
  pOVar10 = *(Object **)(param_2 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_2 + 0x110) = 0;
  if (pOVar1 != pOVar10) {
    *(Object **)(param_2 + 0x30) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
    }
    if (pOVar10 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar10);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
    }
    pOVar10 = *(Object **)(param_2 + 0x30);
  }
  (**(code **)(*(long *)pOVar10 + 0x220))(pOVar10,&local_44,4);
  if ((local_44 == 'R') && (local_43 == 'S')) {
    this = (Ref<FileAccess> *)(param_2 + 0x30);
    if (local_42 == 'C') {
      if (local_41 == 'C') {
        local_60 = (Ref *)0x0;
        Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_60);
        pRVar3 = local_60;
        local_58 = (undefined *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,*(Ref **)(param_2 + 0x30));
        uVar8 = FileAccessCompressed::open_after_magic(pRVar3,(Ref<FileAccess> *)&local_58);
        *(undefined4 *)(param_2 + 0x110) = uVar8;
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
        if (*(int *)(param_2 + 0x110) != 0) {
          Ref<FileAccess>::unref(this);
          *(undefined8 *)param_1 = 0;
          local_50 = 0;
          local_58 = &_LC4;
          String::parse_latin1(param_1);
          Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_60);
          goto LAB_00102685;
        }
        Ref<FileAccess>::operator=(this,pRVar3);
        Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_60);
        goto LAB_001026df;
      }
      goto LAB_00102633;
    }
    if ((local_42 != 'R') || (local_41 != 'C')) goto LAB_00102633;
LAB_001026df:
    iVar5 = (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
    (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
    plVar2 = *(long **)(param_2 + 0x30);
    lVar9 = *plVar2;
    if (*(code **)(lVar9 + 0x248) == FileAccess::set_big_endian) {
      *(bool *)((long)plVar2 + 0x17c) = iVar5 != 0;
    }
    else {
      (**(code **)(lVar9 + 0x248))(plVar2,iVar5 != 0);
      lVar9 = **(long **)(param_2 + 0x30);
    }
    uVar6 = (**(code **)(lVar9 + 0x1f0))();
    (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
    uVar7 = (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
    if ((uVar7 < 7) && (uVar6 < 5)) {
      get_unicode_string();
      goto LAB_00102685;
    }
    Ref<FileAccess>::unref(this);
  }
  else {
LAB_00102633:
    *(undefined4 *)(param_2 + 0x110) = 0xf;
    if (*(long *)(param_2 + 0x30) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar1 = *(Object **)(param_2 + 0x30);
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  *(undefined8 *)param_1 = 0;
  local_58 = &_LC4;
  local_50 = 0;
  String::parse_latin1(param_1);
LAB_00102685:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderBinary::recognize_script_class(Ref<FileAccess>) */

StrRange *
ResourceLoaderBinary::recognize_script_class(StrRange *param_1,long param_2,long *param_3)

{
  Ref<FileAccess> *this;
  Object *pOVar1;
  long *plVar2;
  Ref *pRVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  Object *pOVar10;
  long in_FS_OFFSET;
  Ref *local_60;
  undefined *local_58;
  undefined8 local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  long lVar9;
  
  pOVar1 = (Object *)*param_3;
  pOVar10 = *(Object **)(param_2 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_2 + 0x110) = 0;
  if (pOVar1 != pOVar10) {
    *(Object **)(param_2 + 0x30) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
    }
    if (pOVar10 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar10);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
    }
    pOVar10 = *(Object **)(param_2 + 0x30);
  }
  (**(code **)(*(long *)pOVar10 + 0x220))(pOVar10,&local_44,4);
  if ((local_44 == 'R') && (local_43 == 'S')) {
    this = (Ref<FileAccess> *)(param_2 + 0x30);
    if (local_42 == 'C') {
      if (local_41 == 'C') {
        local_60 = (Ref *)0x0;
        Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_60);
        pRVar3 = local_60;
        local_58 = (undefined *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,*(Ref **)(param_2 + 0x30));
        uVar8 = FileAccessCompressed::open_after_magic(pRVar3,(Ref<FileAccess> *)&local_58);
        *(undefined4 *)(param_2 + 0x110) = uVar8;
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
        if (*(int *)(param_2 + 0x110) != 0) {
          Ref<FileAccess>::unref(this);
          *(undefined8 *)param_1 = 0;
          String::parse_latin1((String *)param_1,"");
          Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_60);
          goto LAB_00102995;
        }
        Ref<FileAccess>::operator=(this,pRVar3);
        Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_60);
        goto LAB_001029f4;
      }
    }
    else if ((local_42 == 'R') && (local_41 == 'C')) {
LAB_001029f4:
      iVar5 = (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
      (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
      plVar2 = *(long **)(param_2 + 0x30);
      lVar9 = *plVar2;
      if (*(code **)(lVar9 + 0x248) == FileAccess::set_big_endian) {
        *(bool *)((long)plVar2 + 0x17c) = iVar5 != 0;
      }
      else {
        (**(code **)(lVar9 + 0x248))(plVar2,iVar5 != 0);
        lVar9 = **(long **)(param_2 + 0x30);
      }
      uVar6 = (**(code **)(lVar9 + 0x1f0))();
      (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
      uVar7 = (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
      if ((uVar7 < 7) && (uVar6 < 5)) {
        get_unicode_string();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        (**(code **)(**(long **)(param_2 + 0x30) + 0x1f8))();
        uVar6 = (**(code **)(**(long **)(param_2 + 0x30) + 0x1f0))();
        (**(code **)(**(long **)(param_2 + 0x30) + 0x1f8))();
        if ((uVar6 & 8) == 0) {
          *(undefined8 *)param_1 = 0;
        }
        else {
          get_unicode_string();
        }
      }
      else {
        Ref<FileAccess>::unref(this);
        *(undefined8 *)param_1 = 0;
        local_50 = 0;
        local_58 = &_LC4;
        String::parse_latin1(param_1);
      }
      goto LAB_00102995;
    }
  }
  *(undefined4 *)(param_2 + 0x110) = 0xf;
  if (*(long *)(param_2 + 0x30) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar1 = *(Object **)(param_2 + 0x30);
      cVar4 = predelete_handler(pOVar1);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  local_58 = &_LC4;
  local_50 = 0;
  String::parse_latin1(param_1);
LAB_00102995:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverBinaryInstance::set_uid(String const&, long) */

int ResourceFormatSaverBinaryInstance::set_uid(String *param_1,long param_2)

{
  Ref *pRVar1;
  code *pcVar2;
  Ref *pRVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 in_R8;
  Object *pOVar11;
  long in_FS_OFFSET;
  ulong uVar12;
  CowData<char32_t> *local_b8;
  Ref<FileAccess> *local_b0;
  Ref<FileAccess> *local_98;
  Object *local_88;
  Object *local_80;
  Ref *local_78;
  Ref *local_70;
  Object *local_68;
  undefined8 local_60;
  Ref *local_58;
  undefined8 local_50;
  char local_48;
  char local_47;
  char local_46;
  char local_45;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_88,(int)param_2,(Error *)0x1);
  if (local_88 == (Object *)0x0) {
    local_60 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_2);
    }
    local_68 = (Object *)0x0;
    iVar5 = 0x13;
    local_50 = 0x16;
    local_58 = (Ref *)0x113bb3;
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_68,
                    (CowData<char32_t> *)&local_60);
    _err_print_error("set_uid","core/io/resource_format_binary.cpp",0x955,
                     "Condition \"f.is_null()\" is true. Returning: ERR_CANT_OPEN",
                     (CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    goto LAB_00102d13;
  }
  local_80 = (Object *)0x0;
  String::get_base_dir();
  pRVar3 = local_58;
  if (*(Ref **)param_1 == local_58) {
    if (local_58 != (Ref *)0x0) {
      LOCK();
      pRVar1 = local_58 + -0x10;
      *(long *)pRVar1 = *(long *)pRVar1 + -1;
      UNLOCK();
      if (*(long *)pRVar1 == 0) {
        local_58 = (Ref *)0x0;
        Memory::free_static(pRVar3 + -0x10,false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_1);
    *(Ref **)param_1 = local_58;
  }
  (**(code **)(*(long *)local_88 + 0x220))(local_88,&local_48,4);
  if ((local_48 == 'R') && (local_47 == 'S')) {
    if (local_46 == 'C') {
      if (local_45 == 'C') {
        local_78 = (Ref *)0x0;
        Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_78);
        pRVar3 = local_78;
        local_58 = (Ref *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,(Ref *)local_88);
        iVar5 = FileAccessCompressed::open_after_magic(pRVar3,(String *)&local_58);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
        if (iVar5 == 0) {
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_88,pRVar3);
          local_70 = (Ref *)0x0;
          Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_70);
          pRVar3 = local_70;
          local_58 = (Ref *)0x0;
          String::parse_latin1((String *)&local_58,"RSCC");
          FileAccessCompressed::configure(pRVar3,(String *)&local_58,2,0x1000);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pcVar2 = *(code **)(*(long *)pRVar3 + 0x188);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,".uidren");
          String::operator+((String *)&local_58,(String *)param_2);
          iVar5 = (*pcVar2)(pRVar3,(String *)&local_58,2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (iVar5 == 0) {
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_80,pRVar3);
            Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_70);
            Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_78);
            pOVar11 = local_80;
            goto LAB_00102e90;
          }
          local_60 = 0;
          if (*(long *)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_2);
          }
          iVar5 = 0x10;
          local_68 = (Object *)0x0;
          String::parse_latin1((String *)&local_68,"Cannot create file \'%s.uidren\'.");
          vformat<String>((String *)&local_58,(String *)&local_68,(String *)&local_60);
          _err_print_error("set_uid","core/io/resource_format_binary.cpp",0x969,
                           "Condition \"err\" is true. Returning: ERR_FILE_CORRUPT",
                           (String *)&local_58,0,0,in_R8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_70);
        }
        else {
          local_60 = 0;
          if (*(long *)param_2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_2);
          }
          local_68 = (Object *)0x0;
          String::parse_latin1((String *)&local_68,"Cannot open file \'%s\'.");
          vformat<String>((String *)&local_58,(String *)&local_68,(CowData<char32_t> *)&local_60);
          _err_print_error("set_uid","core/io/resource_format_binary.cpp",0x962,
                           "Condition \"err != OK\" is true. Returning: err",(String *)&local_58,0,0
                           ,param_2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_78);
        pOVar11 = local_80;
        goto LAB_00102cfe;
      }
      goto LAB_00102cf3;
    }
    if ((local_46 != 'R') || (local_45 != 'C')) goto LAB_00102cf3;
    local_68 = (Object *)0x0;
    local_58 = (Ref *)0x113bd7;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    String::operator+((String *)&local_60,(String *)param_2);
    FileAccess::open((String *)&local_58,(int)(String *)&local_60,(Error *)0x2);
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_80,local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pOVar11 = local_80;
    if (local_80 == (Object *)0x0) {
      local_60 = 0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)param_2);
      }
      local_68 = (Object *)0x0;
      iVar5 = 0x14;
      String::parse_latin1((String *)&local_68,"Cannot create file \'%s.uidren\'.");
      vformat<String>((String *)&local_58,(StrRange *)&local_68,(String *)&local_60);
      _err_print_error("set_uid","core/io/resource_format_binary.cpp",0x972,
                       "Condition \"fw.is_null()\" is true. Returning: ERR_CANT_CREATE",
                       (String *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      goto LAB_00102d13;
    }
    local_44 = 0x43525352;
    (**(code **)(*(long *)local_80 + 0x2d0))(local_80,&local_44,4);
LAB_00102e90:
    local_98 = (Ref<FileAccess> *)&local_80;
    local_b0 = (Ref<FileAccess> *)&local_68;
    local_b8 = (CowData<char32_t> *)&local_60;
    iVar5 = (**(code **)(*(long *)local_88 + 0x1f0))();
    lVar9 = *(long *)local_88;
    param_1[0x13] = (String)(iVar5 != 0);
    iVar5 = (**(code **)(lVar9 + 0x1f0))();
    if (*(code **)(*(long *)local_88 + 0x248) == FileAccess::set_big_endian) {
      *(String *)(local_88 + 0x17c) = param_1[0x13];
    }
    else {
      (**(code **)(*(long *)local_88 + 0x248))(local_88,param_1[0x13]);
    }
    (**(code **)(*(long *)pOVar11 + 0x278))(pOVar11,param_1[0x13]);
    lVar9 = *(long *)pOVar11;
    if (*(code **)(lVar9 + 0x248) == FileAccess::set_big_endian) {
      *(String *)((Ref *)pOVar11 + 0x17c) = param_1[0x13];
    }
    else {
      (**(code **)(lVar9 + 0x248))(pOVar11,param_1[0x13]);
      lVar9 = *(long *)pOVar11;
    }
    (**(code **)(lVar9 + 0x278))(pOVar11,iVar5 != 0);
    uVar6 = (**(code **)(*(long *)local_88 + 0x1f0))();
    uVar7 = (**(code **)(*(long *)local_88 + 0x1f0))();
    uVar8 = (**(code **)(*(long *)local_88 + 0x1f0))();
    if (uVar8 == 0) {
      Ref<FileAccess>::unref(local_98);
      DirAccess::create(local_b0,2);
      pOVar11 = local_68;
      pcVar2 = *(code **)(*(long *)local_68 + 0x208);
      local_60 = 0;
      String::parse_latin1((String *)local_b8,".uidren");
      String::operator+((String *)&local_58,(String *)param_2);
      (*pcVar2)(pOVar11);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref(local_b8);
      if (local_68 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar11 = local_68;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_68);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
      }
      local_60 = 0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref(local_b8,(CowData *)param_2);
      }
      local_68 = (Object *)0x0;
      iVar5 = 2;
      String::parse_latin1
                ((String *)local_b0,
                 "This file is old, so it does not support UIDs, opening and resaving \'%s\'.");
      vformat<String>((String *)&local_58,local_b0,local_b8);
      _err_print_error("set_uid","core/io/resource_format_binary.cpp",0x991,(String *)&local_58,0,1)
      ;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      CowData<char32_t>::_unref(local_b8);
      pOVar11 = local_80;
      goto LAB_00102cfe;
    }
    if ((6 < uVar8) || (4 < uVar6)) {
      local_60 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref(local_b8,(CowData *)param_1);
      }
      local_68 = (Object *)0x0;
      String::parse_latin1
                ((String *)local_b0,
                 "File \'%s\' can\'t be loaded, as it uses a format version (%d) or engine version (%d.%d) which are not supported by your engine version (%s)."
                );
      iVar5 = 0xf;
      uVar12 = 0;
      vformat<String,unsigned_int,unsigned_int,unsigned_int,char_const*>
                ((String *)&local_58,local_b0,local_b8,uVar8,uVar6,uVar7,&_LC72);
      _err_print_error("set_uid","core/io/resource_format_binary.cpp",0x996,
                       "Method/function failed. Returning: ERR_FILE_UNRECOGNIZED",
                       (String *)&local_58,0,uVar12 & 0xffffffff00000000);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      CowData<char32_t>::_unref(local_b8);
      goto LAB_00102cfe;
    }
    (**(code **)(*(long *)pOVar11 + 0x278))(pOVar11,uVar6);
    (**(code **)(*(long *)pOVar11 + 0x278))(pOVar11,uVar7);
    (**(code **)(*(long *)pOVar11 + 0x278))(pOVar11,uVar8);
    local_68 = (Object *)0x0;
    Ref<FileAccess>::operator=(local_b0,(Ref *)local_88);
    get_ustring(local_b8,local_b0);
    local_58 = (Ref *)0x0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,(Ref *)pOVar11);
    save_ustring((String *)&local_58,local_b8);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
    CowData<char32_t>::_unref(local_b8);
    Ref<FileAccess>::unref(local_b0);
    pcVar2 = *(code **)(*(long *)pOVar11 + 0x280);
    uVar10 = (**(code **)(*(long *)local_88 + 0x1f8))();
    (*pcVar2)(pOVar11,uVar10);
    uVar6 = (**(code **)(*(long *)local_88 + 0x1f0))();
    (**(code **)(*(long *)local_88 + 0x1f8))();
    (**(code **)(*(long *)pOVar11 + 0x278))(pOVar11,uVar6 | 2);
    (**(code **)(*(long *)pOVar11 + 0x280))(pOVar11);
    if ((uVar6 & 8) != 0) {
      local_68 = (Object *)0x0;
      Ref<FileAccess>::operator=(local_b0,(Ref *)local_88);
      get_ustring(local_b8,local_b0);
      local_58 = (Ref *)0x0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,(Ref *)pOVar11);
      save_ustring((String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
      CowData<char32_t>::_unref(local_b8);
      Ref<FileAccess>::unref(local_b0);
    }
    while( true ) {
      (**(code **)(*(long *)local_88 + 0x1e0))();
      cVar4 = (**(code **)(*(long *)local_88 + 0x1d8))();
      if (cVar4 != '\0') break;
      (**(code **)(*(long *)pOVar11 + 0x268))(pOVar11);
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_88);
    iVar5 = (**(code **)(*(long *)pOVar11 + 0x250))(pOVar11);
    if (iVar5 == 0) {
      Ref<FileAccess>::unref(local_98);
      DirAccess::create(&local_70,0);
      pRVar3 = local_70;
      pcVar2 = *(code **)(*(long *)local_70 + 0x208);
      local_58 = (Ref *)0x0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_2);
      }
      (*pcVar2)(pRVar3,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      pRVar3 = local_70;
      pcVar2 = *(code **)(*(long *)local_70 + 0x200);
      local_58 = (Ref *)0x0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_2);
      }
      local_68 = (Object *)0x0;
      String::parse_latin1((String *)local_b0,".uidren");
      String::operator+((String *)local_b8,(String *)param_2);
      (*pcVar2)(pRVar3,local_b8,(String *)&local_58);
      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (local_70 != (Ref *)0x0) {
        cVar4 = RefCounted::unreference();
        pRVar3 = local_70;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler((Object *)local_70);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
            Memory::free_static(pRVar3,false);
          }
        }
      }
      iVar5 = 0;
      pOVar11 = local_80;
      goto LAB_00102cfe;
    }
    iVar5 = 0x14;
  }
  else {
LAB_00102cf3:
    iVar5 = 0xf;
    pOVar11 = local_80;
LAB_00102cfe:
    if (pOVar11 == (Object *)0x0) goto LAB_00102d13;
  }
  cVar4 = RefCounted::unreference();
  if (cVar4 != '\0') {
    cVar4 = predelete_handler(pOVar11);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
  }
LAB_00102d13:
  if (local_88 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_88);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderBinary::get_recognized_extensions_for_type(String const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderBinary::get_recognized_extensions_for_type
          (ResourceFormatLoaderBinary *this,String *param_1,List *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  long *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x160))(this,param_2);
      return;
    }
  }
  else {
    cVar5 = String::operator==(param_1,"GDExtension");
    if (cVar5 == '\0') {
      local_50 = (long *)0x0;
      StringName::StringName((StringName *)&local_48,param_1,false);
      ClassDB::get_extensions_for_type((StringName *)&local_48,(List *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      List<String,DefaultAllocator>::sort_custom<Comparator<String>>
                ((List<String,DefaultAllocator> *)&local_50);
      if (local_50 != (long *)0x0) {
        for (lVar1 = *local_50; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
          String::to_lower();
          if (*(long *)param_2 == 0) {
            pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])param_2 = pauVar6;
            *(undefined4 *)pauVar6[1] = 0;
            *pauVar6 = (undefined1  [16])0x0;
          }
          this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
          if (local_48 != 0) {
            CowData<char32_t>::_ref(this_00,(CowData *)&local_48);
          }
          lVar4 = local_48;
          plVar2 = *(long **)param_2;
          lVar3 = plVar2[1];
          *(undefined8 *)(this_00 + 8) = 0;
          *(long **)(this_00 + 0x18) = plVar2;
          *(long *)(this_00 + 0x10) = lVar3;
          if (lVar3 != 0) {
            *(CowData<char32_t> **)(lVar3 + 8) = this_00;
          }
          plVar2[1] = (long)this_00;
          if (*plVar2 == 0) {
            *plVar2 = (long)this_00;
          }
          *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
          if (local_48 != 0) {
            LOCK();
            plVar2 = (long *)(local_48 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_48 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
        }
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_50);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderBinary::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderBinary::get_recognized_extensions
          (ResourceFormatLoaderBinary *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long in_FS_OFFSET;
  long *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (long *)0x0;
  ClassDB::get_resource_base_extensions((List *)&local_50);
  List<String,DefaultAllocator>::sort_custom<Comparator<String>>
            ((List<String,DefaultAllocator> *)&local_50);
  if ((local_50 != (long *)0x0) && (lVar5 = *local_50, lVar5 != 0)) {
    do {
      String::to_lower();
      if (*(long *)param_1 == 0) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar4;
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
      }
      this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      if (local_48 != 0) {
        CowData<char32_t>::_ref(this_00,(CowData *)&local_48);
      }
      lVar3 = local_48;
      plVar1 = *(long **)param_1;
      lVar2 = plVar1[1];
      *(undefined8 *)(this_00 + 8) = 0;
      *(long **)(this_00 + 0x18) = plVar1;
      *(long *)(this_00 + 0x10) = lVar2;
      if (lVar2 != 0) {
        *(CowData<char32_t> **)(lVar2 + 8) = this_00;
      }
      plVar1[1] = (long)this_00;
      if (*plVar1 == 0) {
        *plVar1 = (long)this_00;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != 0);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ResourceFormatSaverBinaryInstance::write_variant(Ref<FileAccess>, Variant const&,
   HashMap<Ref<Resource>, int, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, int> > >&, HashMap<Ref<Resource>, int,
   HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, int> > >&, HashMap<StringName, int,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >&, PropertyInfo const&) */

void ResourceFormatSaverBinaryInstance::write_variant
               (undefined8 *param_1,Variant *param_2,
               HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
               *param_3,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                        *param_4,
               HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
               *param_5)

{
  undefined8 *puVar1;
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
  byte bVar12;
  bool bVar13;
  char cVar14;
  undefined2 uVar15;
  ushort uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  long lVar23;
  char *pcVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  Variant *pVVar33;
  long in_FS_OFFSET;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  Variant local_108 [8];
  undefined8 local_100;
  Variant *local_f8;
  Variant *local_f0;
  Variant *local_e8 [2];
  long *local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  long local_b8;
  undefined4 local_b0;
  int local_a8 [8];
  undefined1 local_88 [4] [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)param_2) {
  case 0:
    plVar29 = (long *)*param_1;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105e28;
    uVar20 = 1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
    goto LAB_001044d9;
  case 1:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,2);
    bVar13 = ::Variant::operator_cast_to_bool(param_2);
    plVar29 = (long *)*param_1;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105e28;
    uVar20 = (ulong)bVar13;
    goto LAB_00104aae;
  case 2:
    lVar23 = ::Variant::operator_cast_to_long(param_2);
    plVar29 = (long *)*param_1;
    if (lVar23 + 0x80000000U >> 0x20 == 0) {
      (**(code **)(*plVar29 + 0x278))(plVar29,3);
      plVar29 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
      uVar17 = ::Variant::operator_cast_to_unsigned_int(param_2);
      uVar20 = (ulong)uVar17;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001044d9;
    }
    else {
      (**(code **)(*plVar29 + 0x278))(plVar29,0x28);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_1 + 0x280))((long *)*param_1,lVar23);
        return;
      }
    }
    goto LAB_00105e28;
  case 3:
    dVar34 = ::Variant::operator_cast_to_double(param_2);
    if ((double)(float)dVar34 == dVar34) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
        goto LAB_00104447;
      }
    }
    else {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x29);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001055b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_1 + 0x298))();
        return;
      }
    }
    goto LAB_00105e28;
  case 4:
    plVar29 = (long *)*param_1;
    uVar22 = 5;
    lVar23 = *plVar29;
    goto LAB_001046db;
  case 5:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,10);
    uVar18 = ::Variant::operator_cast_to_Vector2(param_2);
    goto LAB_001054ee;
  case 6:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x2d);
    uVar20 = ::Variant::operator_cast_to_Vector2i(param_2);
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,uVar20 & 0xffffffff);
    plVar29 = (long *)*param_1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = uVar20 >> 0x20;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
      goto LAB_001044d9;
    }
    goto LAB_00105e28;
  case 7:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0xb);
    auVar36 = ::Variant::operator_cast_to_Rect2(param_2);
    goto LAB_00105889;
  case 8:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x2e);
    auVar35 = ::Variant::operator_cast_to_Rect2i(param_2);
    goto LAB_00104479;
  case 9:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0xc);
    auVar36 = ::Variant::operator_cast_to_Vector3(param_2);
    local_88[0]._0_8_ = auVar36._0_8_;
    local_88[0]._8_4_ = auVar36._8_4_;
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105e28;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
    goto LAB_00104447;
  case 10:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x2f);
    auVar36 = ::Variant::operator_cast_to_Vector3i(param_2);
    local_88[0]._0_8_ = auVar36._0_8_;
    local_88[0]._8_4_ = auVar36._8_4_;
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,local_88[0]._0_8_ & 0xffffffff);
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,local_88[0]._4_4_);
    plVar29 = (long *)*param_1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = local_88[0]._8_8_ & 0xffffffff;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
      goto LAB_001044d9;
    }
    goto LAB_00105e28;
  case 0xb:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x12);
    ::Variant::operator_cast_to_Transform2D((Variant *)local_88);
    goto LAB_00105251;
  case 0xc:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x32);
    auVar36 = ::Variant::operator_cast_to_Vector4(param_2);
LAB_00105889:
    uVar18 = auVar36._8_4_;
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))(auVar36._0_8_ >> 0x20);
LAB_001054ee:
    (**(code **)(*(long *)*param_1 + 0x2a0))(uVar18);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
LAB_00104447:
                    /* WARNING: Could not recover jumptable at 0x00104458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    goto LAB_00105e28;
  case 0xd:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x33);
    auVar35 = ::Variant::operator_cast_to_Vector4i(param_2);
LAB_00104479:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,auVar35._0_8_ & 0xffffffff);
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,auVar35._0_8_ >> 0x20);
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,auVar35._8_8_ & 0xffffffff);
    plVar29 = (long *)*param_1;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105e28;
    uVar20 = auVar35._8_8_ >> 0x20;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
    goto LAB_001044d9;
  case 0xe:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0xd);
    local_88[0] = ::Variant::operator_cast_to_Plane(param_2);
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
      goto LAB_00104447;
    }
    goto LAB_00105e28;
  case 0xf:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0xe);
    ::Variant::operator_cast_to_Quaternion((Variant *)local_88);
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    break;
  case 0x10:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0xf);
    ::Variant::operator_cast_to_AABB((Variant *)local_88);
LAB_00105251:
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105e28;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
    goto LAB_00104447;
  case 0x11:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x10);
    ::Variant::operator_cast_to_Basis((Variant *)local_88);
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
      goto LAB_00104447;
    }
    goto LAB_00105e28;
  case 0x12:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x11);
    ::Variant::operator_cast_to_Transform3D((Variant *)local_88);
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x2a0);
      goto LAB_00104447;
    }
    goto LAB_00105e28;
  case 0x13:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x34);
    ::Variant::operator_cast_to_Projection((Variant *)local_88);
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    (**(code **)(*(long *)*param_1 + 0x2a0))();
    Projection::~Projection((Projection *)local_88);
    break;
  case 0x14:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x14);
    auVar35 = ::Variant::operator_cast_to_Color(param_2);
    (**(code **)(*(long *)*param_1 + 0x290))();
    (**(code **)(*(long *)*param_1 + 0x290))(auVar35._0_8_ >> 0x20);
    (**(code **)(*(long *)*param_1 + 0x290))(auVar35._8_8_ & 0xffffffff);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)*param_1 + 0x290);
      goto LAB_00104447;
    }
    goto LAB_00105e28;
  case 0x15:
    plVar29 = (long *)*param_1;
    uVar22 = 0x2c;
    lVar23 = *plVar29;
LAB_001046db:
    (**(code **)(lVar23 + 0x278))(plVar29,uVar22);
    ::Variant::operator_cast_to_String((Variant *)local_e8);
    local_d8 = (long *)0x0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_d8,(Ref *)*param_1);
    save_unicode_string((Ref<FileAccess> *)&local_d8,(Variant *)local_e8,0);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    break;
  case 0x16:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x16);
    ::Variant::operator_cast_to_NodePath((Variant *)&local_100);
    plVar29 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x270);
    uVar15 = NodePath::get_name_count();
    (*UNRECOVERED_JUMPTABLE_00)(plVar29,uVar15);
    uVar16 = NodePath::get_subname_count();
    bVar12 = NodePath::is_absolute();
    (**(code **)(*(long *)*param_1 + 0x270))((long *)*param_1,-(ushort)bVar12 & 0x8000 | uVar16);
    for (iVar19 = 0; iVar25 = NodePath::get_name_count(), iVar19 < iVar25; iVar19 = iVar19 + 1) {
      iVar25 = (int)(String *)&local_d8;
      NodePath::get_name(iVar25);
      local_e8[0] = (Variant *)((ulong)local_e8[0] & 0xffffffff00000000);
      cVar14 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
               ::_lookup_pos(param_5,(String *)&local_d8,(uint *)local_e8);
      if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
        StringName::unref();
      }
      if (cVar14 == '\0') {
        NodePath::get_name((int)&local_f8);
        if (local_f8 == (Variant *)0x0) {
          local_d8 = (long *)0x0;
        }
        else {
          local_d8 = (long *)0x0;
          if (*(char **)(local_f8 + 8) == (char *)0x0) {
            if (*(long *)(local_f8 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(local_f8 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_d8,*(char **)(local_f8 + 8));
          }
        }
        local_e8[0] = (Variant *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
        save_unicode_string((Ref<FileAccess> *)local_e8,(String *)&local_d8,1);
        Ref<FileAccess>::unref((Ref<FileAccess> *)local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        if ((StringName::configured != '\0') && (local_f8 != (Variant *)0x0)) {
          StringName::unref();
        }
      }
      else {
        plVar29 = (long *)*param_1;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
        NodePath::get_name(iVar25);
        puVar21 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[](param_5,(String *)&local_d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar29,*puVar21);
        if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
          StringName::unref();
        }
      }
    }
    for (iVar19 = 0; iVar25 = NodePath::get_subname_count(), iVar19 < iVar25; iVar19 = iVar19 + 1) {
      iVar25 = (int)(String *)&local_d8;
      NodePath::get_subname(iVar25);
      local_e8[0] = (Variant *)((ulong)local_e8[0] & 0xffffffff00000000);
      cVar14 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
               ::_lookup_pos(param_5,(String *)&local_d8,(uint *)local_e8);
      if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
        StringName::unref();
      }
      if (cVar14 == '\0') {
        NodePath::get_subname((int)&local_f8);
        if (local_f8 == (Variant *)0x0) {
          local_d8 = (long *)0x0;
        }
        else {
          local_d8 = (long *)0x0;
          if (*(char **)(local_f8 + 8) == (char *)0x0) {
            if (*(long *)(local_f8 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(local_f8 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_d8,*(char **)(local_f8 + 8));
          }
        }
        local_e8[0] = (Variant *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
        save_unicode_string((Ref<FileAccess> *)local_e8,(String *)&local_d8,1);
        Ref<FileAccess>::unref((Ref<FileAccess> *)local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        if ((StringName::configured != '\0') && (local_f8 != (Variant *)0x0)) {
          StringName::unref();
        }
      }
      else {
        plVar29 = (long *)*param_1;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
        NodePath::get_subname(iVar25);
        puVar21 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[](param_5,(String *)&local_d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar29,*puVar21);
        if ((StringName::configured != '\0') && (local_d8 != (long *)0x0)) {
          StringName::unref();
        }
      }
    }
    NodePath::~NodePath((NodePath *)&local_100);
    break;
  case 0x17:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x17);
    _err_print_error("write_variant","core/io/resource_format_binary.cpp",0x72e,"Can\'t save RIDs.",
                     0,1);
    uVar20 = ::Variant::operator_cast_to_RID(param_2);
    plVar29 = (long *)*param_1;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105e28;
LAB_00104aae:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
LAB_001044d9:
                    /* WARNING: Could not recover jumptable at 0x001044ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar29,uVar20);
    return;
  case 0x18:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x18);
    local_d8 = (long *)0x0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_d8,param_2);
    plVar29 = local_d8;
    if (local_d8 == (long *)0x0) {
LAB_00105bf0:
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*local_d8 + 0xb8);
      ::Variant::Variant((Variant *)local_a8,false);
      if ((write_variant(Ref<FileAccess>,Variant_const&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>&,PropertyInfo_const&)
           ::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar19 = __cxa_guard_acquire(&write_variant(Ref<FileAccess>,Variant_const&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>&,PropertyInfo_const&)
                                        ::{lambda()#1}::operator()()::sname), iVar19 != 0)) {
        _scs_create((char *)&write_variant(Ref<FileAccess>,Variant_const&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>&,PropertyInfo_const&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &write_variant(Ref<FileAccess>,Variant_const&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>&,PropertyInfo_const&)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&write_variant(Ref<FileAccess>,Variant_const&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>&,PropertyInfo_const&)
                             ::{lambda()#1}::operator()()::sname);
      }
      (*UNRECOVERED_JUMPTABLE_00)
                ((Variant *)local_88,plVar29,
                 &write_variant(Ref<FileAccess>,Variant_const&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>&,HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>&,PropertyInfo_const&)
                  ::{lambda()#1}::operator()()::sname,(Variant *)local_a8);
      bVar13 = ::Variant::operator_cast_to_bool((Variant *)local_88);
      if (::Variant::needs_deinit[(int)local_88[0]._0_4_] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_a8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (bVar13) goto LAB_00105bf0;
      if ((plVar29[0x31] == 0) || (*(uint *)(plVar29[0x31] + -8) < 2)) {
LAB_001048f2:
        if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
          uVar30 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_3 + 0x28) * 4));
          lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
          uVar20 = (long)local_d8 * 0x3ffff - 1;
          uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
          uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
          uVar20 = uVar20 >> 0x16 ^ uVar20;
          uVar32 = uVar20 & 0xffffffff;
          if ((int)uVar20 == 0) {
            uVar32 = 1;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar32 * lVar23;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar30;
          lVar28 = SUB168(auVar2 * auVar6,8);
          uVar17 = *(uint *)(*(long *)(param_3 + 0x10) + lVar28 * 4);
          iVar19 = SUB164(auVar2 * auVar6,8);
          if (uVar17 != 0) {
            uVar31 = 0;
            do {
              if (((uint)uVar32 == uVar17) &&
                 (local_d8 == *(long **)(*(long *)(*(long *)(param_3 + 8) + lVar28 * 8) + 0x10))) {
                (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,2);
                plVar29 = (long *)*param_1;
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
                puVar21 = (undefined4 *)
                          HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                          ::operator[](param_3,(Ref *)&local_d8);
                (*UNRECOVERED_JUMPTABLE_00)(plVar29,*puVar21);
                goto LAB_00104a3d;
              }
              uVar31 = uVar31 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulong)(iVar19 + 1) * lVar23;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar30;
              lVar28 = SUB168(auVar3 * auVar7,8);
              uVar17 = *(uint *)(*(long *)(param_3 + 0x10) + lVar28 * 4);
              iVar19 = SUB164(auVar3 * auVar7,8);
            } while ((uVar17 != 0) &&
                    (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar17 * lVar23, auVar8._8_8_ = 0,
                    auVar8._0_8_ = uVar30, auVar5._8_8_ = 0,
                    auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(param_3 + 0x28) * 4) + iVar19)
                                          - SUB164(auVar4 * auVar8,8)) * lVar23, auVar9._8_8_ = 0,
                    auVar9._0_8_ = uVar30, uVar31 <= SUB164(auVar5 * auVar9,8)));
          }
        }
        (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
        _err_print_error("write_variant","core/io/resource_format_binary.cpp",0x740,
                         "Method/function failed.",
                         "Resource was not pre cached for the resource section, most likely due to circular reference."
                         ,0,0);
      }
      else {
        iVar19 = String::find((char *)(plVar29 + 0x31),0x113b5b);
        if ((iVar19 != -1) ||
           (cVar14 = String::begins_with((char *)(plVar29 + 0x31)), cVar14 != '\0'))
        goto LAB_001048f2;
        (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,3);
        plVar29 = (long *)*param_1;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
        puVar21 = (undefined4 *)
                  HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                  ::operator[](param_4,(Ref *)&local_d8);
        (*UNRECOVERED_JUMPTABLE_00)(plVar29,*puVar21);
      }
    }
LAB_00104a3d:
    Ref<Resource>::unref((Ref<Resource> *)&local_d8);
    break;
  case 0x19:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x2a);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x74b;
      pcVar24 = "Can\'t save Callables.";
LAB_0010479d:
      _err_print_error("write_variant","core/io/resource_format_binary.cpp",uVar22,pcVar24,0,1);
      return;
    }
    goto LAB_00105e28;
  case 0x1a:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x2b);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar22 = 0x74f;
      pcVar24 = "Can\'t save Signals.";
      goto LAB_0010479d;
    }
    goto LAB_00105e28;
  case 0x1b:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x1a);
    ::Variant::operator_cast_to_Dictionary((Variant *)&local_100);
    plVar29 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
    uVar18 = Dictionary::size();
    (*UNRECOVERED_JUMPTABLE_00)(plVar29,uVar18);
    local_f8 = (Variant *)0x0;
    Dictionary::get_key_list((List *)&local_100);
    if ((local_f8 != (Variant *)0x0) && (lVar23 = *(long *)local_f8, lVar23 != 0)) {
      do {
        local_d8 = (long *)0x0;
        local_d0 = (undefined1  [16])0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 6;
        local_e8[0] = (Variant *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
        write_variant((Ref<FileAccess> *)local_e8,lVar23,param_3,param_4,param_5,&local_d8);
        Ref<FileAccess>::unref((Ref<FileAccess> *)local_e8);
        lVar28 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar29 = (long *)(local_b8 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar28 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_d0._8_8_ != 0)) {
          StringName::unref();
        }
        uVar22 = local_d0._0_8_;
        if (local_d0._0_8_ != 0) {
          LOCK();
          plVar29 = (long *)(local_d0._0_8_ + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = local_d0._8_8_;
            local_d0 = auVar10 << 0x40;
            Memory::free_static((void *)(uVar22 + -0x10),false);
          }
        }
        local_d8 = (long *)0x0;
        local_d0 = (undefined1  [16])0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 6;
        uVar22 = Dictionary::operator[]((Variant *)&local_100);
        local_e8[0] = (Variant *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
        write_variant((Ref<FileAccess> *)local_e8,uVar22,param_3,param_4,param_5,&local_d8);
        Ref<FileAccess>::unref((Ref<FileAccess> *)local_e8);
        lVar28 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar29 = (long *)(local_b8 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar28 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_d0._8_8_ != 0)) {
          StringName::unref();
        }
        uVar22 = local_d0._0_8_;
        if (local_d0._0_8_ != 0) {
          LOCK();
          plVar29 = (long *)(local_d0._0_8_ + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = local_d0._8_8_;
            local_d0 = auVar11 << 0x40;
            Memory::free_static((void *)(uVar22 + -0x10),false);
          }
        }
        lVar23 = *(long *)(lVar23 + 0x18);
      } while (lVar23 != 0);
    }
    List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_f8);
    Dictionary::~Dictionary((Dictionary *)&local_100);
    break;
  case 0x1c:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x1e);
    ::Variant::operator_cast_to_Array(local_108);
    plVar29 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar29 + 0x278);
    uVar18 = Array::size();
    (*UNRECOVERED_JUMPTABLE_00)(plVar29,uVar18);
    Array::begin();
    Array::end();
    if (local_f8 != local_e8[0]) {
      do {
        pVVar33 = local_f8;
        if (local_f0 != (Variant *)0x0) {
          ::Variant::operator=(local_f0,local_f8);
          pVVar33 = local_f0;
        }
        local_d8 = (long *)0x0;
        local_d0 = (undefined1  [16])0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 6;
        local_100 = 0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_100,(Ref *)*param_1);
        write_variant((Ref<FileAccess> *)&local_100,pVVar33,param_3,param_4,param_5,&local_d8);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_100);
        lVar23 = local_b8;
        if (local_b8 != 0) {
          LOCK();
          plVar29 = (long *)(local_b8 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar23 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_d0._8_8_ != 0)) {
          StringName::unref();
        }
        uVar22 = local_d0._0_8_;
        if (local_d0._0_8_ != 0) {
          LOCK();
          plVar29 = (long *)(local_d0._0_8_ + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            auVar35._8_8_ = 0;
            auVar35._0_8_ = local_d0._8_8_;
            local_d0 = auVar35 << 0x40;
            Memory::free_static((void *)(uVar22 + -0x10),false);
          }
        }
        local_f8 = local_f8 + 0x18;
      } while (local_f8 != local_e8[0]);
    }
    Array::~Array((Array *)local_108);
    break;
  case 0x1d:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x1f);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
      (**(code **)(*(long *)*param_1 + 0x2d0))((long *)*param_1,local_d0._0_8_,0);
      local_e8[0] = (Variant *)0x0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
    }
    else {
      iVar25 = (int)*(ulong *)(local_d0._0_8_ + -8);
      uVar17 = (uint)(iVar25 >> 0x1f) >> 0x1e;
      iVar19 = (uVar17 - (uVar17 + iVar25 & 3)) + 4;
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      (**(code **)(*(long *)*param_1 + 0x2d0))((long *)*param_1,local_d0._0_8_,(long)iVar25);
      local_e8[0] = (Variant *)0x0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
      pVVar33 = local_e8[0];
      if (iVar19 < 4) {
        iVar25 = 0;
        do {
          iVar25 = iVar25 + 1;
          (**(code **)(*(long *)pVVar33 + 0x268))(pVVar33,0);
        } while (iVar25 != iVar19);
      }
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)local_e8);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_d0);
    break;
  case 0x1e:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x20);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        puVar21 = (undefined4 *)(local_d0._0_8_ + ((ulong)(iVar19 - 1) + 1) * 4);
        puVar27 = (undefined4 *)local_d0._0_8_;
        do {
          uVar18 = *puVar27;
          puVar27 = puVar27 + 1;
          (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,uVar18);
        } while (puVar27 != puVar21);
      }
    }
    CowData<int>::_unref((CowData<int> *)local_d0);
    break;
  case 0x1f:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x30);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        puVar1 = (undefined8 *)(local_d0._0_8_ + ((ulong)(iVar19 - 1) + 1) * 8);
        puVar26 = (undefined8 *)local_d0._0_8_;
        do {
          uVar22 = *puVar26;
          puVar26 = puVar26 + 1;
          (**(code **)(*(long *)*param_1 + 0x280))((long *)*param_1,uVar22);
        } while (puVar26 != puVar1);
      }
    }
    CowData<long>::_unref((CowData<long> *)local_d0);
    break;
  case 0x20:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x21);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        lVar23 = local_d0._0_8_ + 4;
        lVar28 = local_d0._0_8_;
        do {
          lVar28 = lVar28 + 4;
          (**(code **)(*(long *)*param_1 + 0x290))();
        } while (lVar23 + (ulong)(iVar19 - 1) * 4 != lVar28);
      }
    }
    CowData<float>::_unref((CowData<float> *)local_d0);
    break;
  case 0x21:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x31);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        puVar1 = (undefined8 *)(local_d0._0_8_ + ((ulong)(iVar19 - 1) + 1) * 8);
        puVar26 = (undefined8 *)local_d0._0_8_;
        do {
          uVar22 = *puVar26;
          puVar26 = puVar26 + 1;
          (**(code **)(*(long *)*param_1 + 0x298))(uVar22);
        } while (puVar26 != puVar1);
      }
    }
    CowData<double>::_unref((CowData<double> *)local_d0);
    break;
  case 0x22:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x22);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        lVar23 = local_d0._0_8_ + 8;
        lVar28 = local_d0._0_8_;
        do {
          local_e8[0] = (Variant *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)local_e8,(Ref *)*param_1);
          save_unicode_string((Ref<FileAccess> *)local_e8,lVar28,0);
          lVar28 = lVar28 + 8;
          Ref<FileAccess>::unref((Ref<FileAccess> *)local_e8);
        } while (lVar23 + (ulong)(iVar19 - 1) * 8 != lVar28);
      }
    }
    CowData<String>::_unref((CowData<String> *)local_d0);
    break;
  case 0x23:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x25);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        lVar23 = local_d0._0_8_ + 8;
        lVar28 = local_d0._0_8_;
        do {
          lVar28 = lVar28 + 8;
          (**(code **)(*(long *)*param_1 + 0x2a0))();
          (**(code **)(*(long *)*param_1 + 0x2a0))();
        } while (lVar23 + (ulong)(iVar19 - 1) * 8 != lVar28);
      }
    }
    CowData<Vector2>::_unref((CowData<Vector2> *)local_d0);
    break;
  case 0x24:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x23);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        lVar23 = local_d0._0_8_ + 0xc;
        lVar28 = local_d0._0_8_;
        do {
          lVar28 = lVar28 + 0xc;
          (**(code **)(*(long *)*param_1 + 0x2a0))();
          (**(code **)(*(long *)*param_1 + 0x2a0))();
          (**(code **)(*(long *)*param_1 + 0x2a0))();
        } while (lVar23 + (ulong)(iVar19 - 1) * 0xc != lVar28);
      }
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)local_d0);
    break;
  case 0x25:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x24);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        lVar23 = local_d0._0_8_ + 0x10;
        lVar28 = local_d0._0_8_;
        do {
          lVar28 = lVar28 + 0x10;
          (**(code **)(*(long *)*param_1 + 0x290))();
          (**(code **)(*(long *)*param_1 + 0x290))();
          (**(code **)(*(long *)*param_1 + 0x290))();
          (**(code **)(*(long *)*param_1 + 0x290))();
        } while (lVar28 != lVar23 + (ulong)(iVar19 - 1) * 0x10);
      }
    }
    CowData<Color>::_unref((CowData<Color> *)local_d0);
    break;
  case 0x26:
    (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0x35);
    ::Variant::operator_cast_to_Vector((Variant *)&local_d8);
    if (local_d0._0_8_ == 0) {
      (**(code **)(*(long *)*param_1 + 0x278))((long *)*param_1,0);
    }
    else {
      iVar19 = (int)*(ulong *)(local_d0._0_8_ + -8);
      (**(code **)(*(long *)*param_1 + 0x278))
                ((long *)*param_1,*(ulong *)(local_d0._0_8_ + -8) & 0xffffffff);
      if (0 < iVar19) {
        lVar23 = local_d0._0_8_ + 0x10;
        lVar28 = local_d0._0_8_;
        do {
          lVar28 = lVar28 + 0x10;
          (**(code **)(*(long *)*param_1 + 0x2a0))();
          (**(code **)(*(long *)*param_1 + 0x2a0))();
          (**(code **)(*(long *)*param_1 + 0x2a0))();
          (**(code **)(*(long *)*param_1 + 0x2a0))();
        } while (lVar28 != lVar23 + (ulong)(iVar19 - 1) * 0x10);
      }
    }
    CowData<Vector4>::_unref((CowData<Vector4> *)local_d0);
    break;
  default:
    _err_print_error("write_variant","core/io/resource_format_binary.cpp",0x7e0,
                     "Method/function failed.","Invalid variant.",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

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
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* ResourceFormatSaverBinaryInstance::get_string_index(String const&) */

int __thiscall
ResourceFormatSaverBinaryInstance::get_string_index
          (ResourceFormatSaverBinaryInstance *this,String *param_1)

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
  int *piVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_1,false);
  if ((*(long *)(this + 0x68) != 0) && (*(int *)(this + 0x8c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x88) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x88) * 8);
    if (local_50 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_50 + 0x20);
    }
    uVar18 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar17 = *(uint *)(*(long *)(this + 0x70) + lVar14 * 4);
    iVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      do {
        if ((uVar11 == uVar17) &&
           (*(long *)(*(long *)(*(long *)(this + 0x68) + lVar14 * 8) + 0x10) == local_50)) {
          piVar12 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                           ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                         *)(this + 0x60),(StringName *)&local_50);
          iVar16 = *piVar12;
          goto LAB_00106207;
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar17 = *(uint *)(*(long *)(this + 0x70) + lVar14 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
      } while ((uVar17 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if (*(long *)(this + 0x98) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(*(long *)(this + 0x98) + -8);
  }
  puVar13 = (undefined4 *)
            HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
            ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                          *)(this + 0x60),(StringName *)&local_50);
  *puVar13 = uVar15;
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  Vector<StringName>::push_back((Vector<StringName> *)(this + 0x90),(StringName *)&local_48);
  if (StringName::configured == '\0') {
    if (*(long *)(this + 0x98) == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = (int)*(undefined8 *)(*(long *)(this + 0x98) + -8) + -1;
    }
  }
  else {
    if (local_48 == 0) {
      if (*(long *)(this + 0x98) == 0) {
        iVar16 = -1;
      }
      else {
        iVar16 = (int)*(undefined8 *)(*(long *)(this + 0x98) + -8) + -1;
      }
    }
    else {
      StringName::unref();
      if (*(long *)(this + 0x98) == 0) {
        iVar16 = -1;
      }
      else {
        iVar16 = (int)*(undefined8 *)(*(long *)(this + 0x98) + -8) + -1;
      }
LAB_00106207:
      if (StringName::configured == '\0') goto LAB_0010621b;
    }
    if (local_50 != 0) {
      StringName::unref();
    }
  }
LAB_0010621b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write
          (CowData<ResourceLoaderBinary::ExtResource> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  CowData<char32_t> *this_00;
  ulong uVar7;
  CowData *pCVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x20 != 0) {
    uVar7 = lVar1 * 0x20 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar9 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar1;
  this_00 = (CowData<char32_t> *)(puVar6 + 2);
  if (lVar1 != 0) {
    do {
      pCVar8 = (CowData *)(lVar9 * 0x20 + *(long *)this);
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar8 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar8);
      }
      *(undefined8 *)(this_00 + 8) = 0;
      if (*(long *)(pCVar8 + 8) != 0) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar8 + 8);
      }
      uVar2 = *(undefined8 *)(pCVar8 + 0x10);
      *(undefined8 *)(this_00 + 0x18) = 0;
      lVar3 = *(long *)(pCVar8 + 0x18);
      *(undefined8 *)(this_00 + 0x10) = uVar2;
      if (lVar3 != 0) {
        *(long *)(this_00 + 0x18) = lVar3;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          *(undefined8 *)(this_00 + 0x18) = 0;
        }
      }
      lVar9 = lVar9 + 1;
      this_00 = this_00 + 0x20;
    } while (lVar1 != lVar9);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar6 + 2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceLoaderBinary::parse_variant(Variant&) */

int __thiscall ResourceLoaderBinary::parse_variant(ResourceLoaderBinary *this,Variant *param_1)

{
  Error *pEVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  CowData<char32_t> *pCVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  ushort uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  Variant *pVVar22;
  CowData *pCVar23;
  long lVar24;
  ulong uVar25;
  CowData<char32_t> *pCVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  undefined8 in_R11;
  uint uVar31;
  int iVar32;
  CowData<char32_t> *pCVar33;
  size_t sVar34;
  uint uVar35;
  long in_FS_OFFSET;
  float fVar36;
  undefined4 uVar37;
  double dVar38;
  uint local_100;
  CowData<char32_t> local_e8 [8];
  ulong local_e0;
  Object *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  ulong local_b8;
  CowData<char32_t> *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
  itos((long)&local_c8);
  operator+((char *)&local_b8,(String *)"find property of type: ");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  uVar15 = uStack_9c;
  uVar14 = uStack_a0;
  uVar37 = uStack_a4;
  iVar20 = local_a8;
  local_a8 = (int)__LC99;
  uStack_a4 = (undefined4)((ulong)__LC99 >> 0x20);
  uStack_a0 = (undefined4)_UNK_00121908;
  uStack_9c = (undefined4)((ulong)_UNK_00121908 >> 0x20);
  switch(uVar18) {
  default:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x29e,
                     "Method/function failed. Returning: ERR_FILE_CORRUPT",0,0);
LAB_00106505:
    iVar20 = 0x10;
    goto LAB_00106510;
  case 1:
switchD_001064d3_caseD_1:
    uStack_9c = uVar15;
    uStack_a0 = uVar14;
    uStack_a4 = uVar37;
    local_a8 = iVar20;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_78 = 0;
    uStack_74 = 0;
    break;
  case 2:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    iVar20 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,iVar20 != 0);
    break;
  case 3:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    iVar20 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,iVar20);
    break;
  case 4:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    fVar36 = (float)(**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,fVar36);
    break;
  case 5:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    get_unicode_string();
    ::Variant::Variant((Variant *)&local_88,(String *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    iVar20 = 0;
    goto LAB_00106510;
  case 10:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Vector2 *)&local_a8);
    break;
  case 0xb:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Rect2 *)&local_a8);
    break;
  case 0xc:
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_9c = uVar15;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Vector3 *)&local_a8);
    break;
  case 0xd:
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_9c = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Plane *)&local_a8);
    break;
  case 0xe:
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Quaternion *)&local_a8);
    break;
  case 0xf:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_98 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_94 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(AABB *)&local_a8);
    break;
  case 0x10:
    local_68 = 0x3f800000;
    local_88 = _LC100;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_78 = _LC100;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    local_88 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_84 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_80 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_7c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_78 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_74 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_70 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_6c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_68 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_a8,(Basis *)&local_88);
    goto LAB_001066ee;
  case 0x11:
    local_68 = 0x3f800000;
    local_64 = 0;
    local_88 = _LC100;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_5c = 0;
    local_78 = _LC100;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    local_88 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_84 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_80 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_7c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_78 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_74 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_70 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_6c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_68 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uVar37 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_64 = CONCAT44(local_64._4_4_,uVar37);
    uVar37 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_64 = CONCAT44(uVar37,(undefined4)local_64);
    local_5c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_a8,(Transform3D *)&local_88);
LAB_001066ee:
    ::Variant::operator=(param_1,(Variant *)&local_a8);
    cVar16 = ::Variant::needs_deinit[local_a8];
    goto joined_r0x0010670b;
  case 0x12:
    local_a8 = 0x3f800000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3f800000;
    uStack_98 = 0;
    uStack_94 = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_98 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_94 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Transform2D *)&local_a8);
    break;
  case 0x14:
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x208))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x208))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x208))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x208))();
    ::Variant::Variant((Variant *)&local_88,(Color *)&local_a8);
    break;
  case 0x16:
    local_c0 = 0;
    local_b0 = (CowData<char32_t> *)0x0;
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar17 = (**(code **)(**(long **)(this + 0x30) + 0x1e8))();
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1e8))();
    uVar35 = uVar19 & 0x7fff;
    if (*(uint *)(this + 0x28) < 3) {
      uVar35 = uVar35 + 1;
      if (uVar17 != 0) {
LAB_001067ea:
        iVar20 = 0;
        do {
          _get_string();
          Vector<StringName>::push_back((Vector<StringName> *)&local_c8,&local_d0);
          if ((StringName::configured != '\0') && (local_d0 != 0)) {
            StringName::unref();
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)(uint)uVar17);
        goto LAB_00106830;
      }
LAB_00106835:
      uVar21 = 0;
      do {
        _get_string();
        Vector<StringName>::push_back((Vector<StringName> *)&local_b8,&local_d0);
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar35);
    }
    else {
      if (uVar17 != 0) goto LAB_001067ea;
LAB_00106830:
      if (uVar35 != 0) goto LAB_00106835;
    }
    local_100._0_1_ = (bool)((byte)(uVar19 >> 8) >> 7);
    NodePath::NodePath((NodePath *)&local_d0,(CowData<char32_t> *)&local_c8,
                       (CowData<char32_t> *)&local_b8,local_100._0_1_);
    ::Variant::Variant((Variant *)&local_88,(NodePath *)&local_d0);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    NodePath::~NodePath((NodePath *)&local_d0);
    CowData<StringName>::_unref((CowData<StringName> *)&local_b0);
    CowData<StringName>::_unref((CowData<StringName> *)&local_c0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x17:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,uVar19);
    break;
  case 0x18:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    if (uVar19 == 2) {
      uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
      local_e0 = 0;
      if (this[0x70] == (ResourceLoaderBinary)0x0) {
        itos((long)&local_c8);
        local_d8 = (Object *)0x0;
        String::parse_latin1((String *)&local_d8,"::");
        String::operator+((String *)&local_d0,(String *)(this + 0x10));
        String::operator+((String *)&local_b8,(String *)&local_d0);
        String::operator+=((String *)&local_e0,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
LAB_001084d3:
        if ((*(long *)(this + 0xb8) != 0) && (*(int *)(this + 0xdc) != 0)) {
          uVar19 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd8) * 4);
          lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xd8) * 8);
          uVar21 = String::hash();
          uVar27 = CONCAT44(0,uVar19);
          lVar29 = *(long *)(this + 0xc0);
          uVar35 = 1;
          if (uVar21 != 0) {
            uVar35 = uVar21;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar35 * lVar24;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar27;
          lVar30 = SUB168(auVar2 * auVar6,8);
          uVar21 = *(uint *)(lVar29 + lVar30 * 4);
          iVar20 = SUB164(auVar2 * auVar6,8);
          if (uVar21 != 0) {
            uVar31 = 0;
            do {
              if (uVar35 == uVar21) {
                cVar16 = String::operator==((String *)
                                            (*(long *)(*(long *)(this + 0xb8) + lVar30 * 8) + 0x10),
                                            (String *)&local_e0);
                if (cVar16 != '\0') {
                  puVar28 = (undefined8 *)
                            HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                            ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                                          *)(this + 0xb0),(String *)&local_e0);
                  ::Variant::Variant((Variant *)&local_88,(Object *)*puVar28);
                  goto LAB_00108699;
                }
                lVar29 = *(long *)(this + 0xc0);
              }
              uVar31 = uVar31 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulong)(iVar20 + 1) * lVar24;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar27;
              lVar30 = SUB168(auVar3 * auVar7,8);
              uVar21 = *(uint *)(lVar29 + lVar30 * 4);
              iVar20 = SUB164(auVar3 * auVar7,8);
            } while ((uVar21 != 0) &&
                    (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar21 * lVar24, auVar8._8_8_ = 0,
                    auVar8._0_8_ = uVar27, auVar5._8_8_ = 0,
                    auVar5._0_8_ = (ulong)((uVar19 + iVar20) - SUB164(auVar4 * auVar8,8)) * lVar24,
                    auVar9._8_8_ = 0, auVar9._0_8_ = uVar27, uVar31 <= SUB164(auVar5 * auVar9,8)));
          }
        }
        local_c8 = 0;
        if (local_e0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
        }
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"Couldn\'t load resource (no cache): %s.");
        vformat<String>((CowData<char32_t> *)&local_b8,(String *)&local_d0,
                        (CowData<char32_t> *)&local_c8);
        _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x19c,
                         (CowData<char32_t> *)&local_b8,0,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        local_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        local_78 = 0;
        uStack_74 = 0;
LAB_00108699:
        ::Variant::operator=(param_1,(Variant *)&local_88);
        if (::Variant::needs_deinit[local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        iVar20 = 0;
        goto LAB_00106510;
      }
      lVar24 = *(long *)(this + 0xa8);
      if ((int)uVar19 < 0) {
        if (lVar24 == 0) goto LAB_00108be7;
LAB_00108b90:
        lVar24 = *(long *)(lVar24 + -8);
      }
      else {
        if (lVar24 != 0) {
          if (*(long *)(lVar24 + -8) <= (long)(ulong)uVar19) goto LAB_00108b90;
          pCVar23 = (CowData *)(lVar24 + (ulong)uVar19 * 0x10);
          if (*(long *)pCVar23 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,pCVar23);
          }
          goto LAB_001084d3;
        }
LAB_00108be7:
        lVar24 = 0;
      }
      _err_print_index_error
                ("parse_variant","core/io/resource_format_binary.cpp",0x194,(long)(int)uVar19,lVar24
                 ,"(int)index","internal_resources.size()","",false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      iVar20 = 0x2b;
      goto LAB_00106510;
    }
    if (2 < uVar19) {
      if (uVar19 != 3) {
        _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1d5,
                         "Method/function failed. Returning: ERR_FILE_CORRUPT",0,0);
        goto LAB_00106505;
      }
      uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
      if (-1 < (int)uVar19) {
        uVar27 = (ulong)uVar19;
        if ((*(long *)(this + 0x98) != 0) && ((long)uVar27 < *(long *)(*(long *)(this + 0x98) + -8))
           ) {
          CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write
                    ((CowData<ResourceLoaderBinary::ExtResource> *)(this + 0x98));
          lVar24 = uVar27 * 0x20;
          pEVar1 = *(Error **)(*(long *)(this + 0x98) + 0x18 + lVar24);
          if (pEVar1 == (Error *)0x0) goto LAB_001065e6;
          ResourceLoader::_load_complete((LoadToken *)&local_d8,pEVar1);
          if (local_d8 == (Object *)0x0) {
            cVar16 = ResourceLoader::is_cleaning_tasks();
            if (cVar16 == '\0') {
              lVar29 = *(long *)(this + 0x98);
              if ((char)ResourceLoader::abort_on_missing_resource == '\0') {
                if (lVar29 != 0) {
                  lVar30 = *(long *)(lVar29 + -8);
                  if (lVar30 <= (long)uVar27) goto LAB_00108dd5;
                  ResourceLoader::notify_dependency_error
                            ((String *)(this + 8),(String *)(lVar29 + lVar24),
                             (String *)(lVar29 + lVar24) + 8);
                  goto LAB_00108ae7;
                }
              }
              else {
                *(undefined4 *)(this + 0x110) = 0x11;
                if (lVar29 != 0) {
                  lVar30 = *(long *)(lVar29 + -8);
                  if ((long)uVar27 < lVar30) {
                    local_c8 = 0;
                    if (*(long *)(lVar29 + lVar24) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_c8,(CowData *)(lVar29 + lVar24));
                    }
                    local_d0 = 0;
                    String::parse_latin1((String *)&local_d0,"Can\'t load dependency: \'%s\'.");
                    vformat<String>((CowData<char32_t> *)&local_b8,(String *)&local_d0,
                                    (CowData<char32_t> *)&local_c8);
                    _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1cb,
                                     "Method/function failed. Returning: error",
                                     (CowData<char32_t> *)&local_b8,0,0,in_R11);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                    iVar20 = *(int *)(this + 0x110);
                    Ref<Resource>::unref((Ref<Resource> *)&local_d8);
                    goto LAB_00106510;
                  }
                  goto LAB_00108dd5;
                }
              }
              lVar30 = 0;
LAB_00108dd5:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar27,lVar30,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar10 = (code *)invalidInstructionException();
              (*pcVar10)();
            }
          }
          else {
            ::Variant::Variant((Variant *)&local_88,local_d8);
            ::Variant::operator=(param_1,(Variant *)&local_88);
            if (::Variant::needs_deinit[local_88] != '\0') {
              ::Variant::_clear_internal();
            }
          }
LAB_00108ae7:
          Ref<Resource>::unref((Ref<Resource> *)&local_d8);
          iVar20 = 0;
          goto LAB_00106510;
        }
      }
      _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1be,
                       "Broken external resource! (index out of size)",0,1);
      iVar20 = local_a8;
      uVar37 = uStack_a4;
      uVar14 = uStack_a0;
      uVar15 = uStack_9c;
      goto switchD_001064d3_caseD_1;
    }
    if (uVar19 != 0) {
      get_unicode_string();
      get_unicode_string();
      iVar20 = String::find((char *)&local_e0,0x113ce9);
      if ((iVar20 == -1) && (cVar16 = String::is_relative_path(), cVar16 != '\0')) {
        ProjectSettings::get_singleton();
        String::get_base_dir();
        String::path_join((String *)&local_c8);
        ProjectSettings::localize_path((String *)&local_b8);
        if (local_e0 != local_b8) {
          CowData<char32_t>::operator=((CowData<char32_t> *)&local_e0,(CowData *)&local_b8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      }
      local_b8 = local_b8 & 0xffffffff00000000;
      cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)(this + 0xe0),(String *)&local_e0,(uint *)&local_b8);
      if (((cVar16 != '\0') &&
          (*(long *)(*(long *)(this + 0xe8) + (local_b8 & 0xffffffff) * 8) != 0)) &&
         (pCVar23 = (CowData *)
                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  *)(this + 0xe0),(String *)&local_e0),
         local_e0 != *(ulong *)pCVar23)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,pCVar23);
      }
      ResourceLoader::load
                ((Ref<Resource> *)&local_d8,(CowData<char32_t> *)&local_e0,local_e8,
                 *(undefined4 *)(this + 0x118),0);
      if (local_d8 == (Object *)0x0) {
        local_c8 = 0;
        if (local_e0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
        }
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"Couldn\'t load resource: %s.");
        vformat<String>((CowData<char32_t> *)&local_b8,(String *)&local_d0,
                        (CowData<char32_t> *)&local_c8);
        _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1b4,
                         (CowData<char32_t> *)&local_b8,0,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      }
      ::Variant::Variant((Variant *)&local_88,local_d8);
      ::Variant::operator=(param_1,(Variant *)&local_88);
      if (::Variant::needs_deinit[local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      Ref<Resource>::unref((Ref<Resource> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref(local_e8);
      iVar20 = 0;
      goto LAB_00106510;
    }
    goto LAB_001065e6;
  case 0x1a:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    Dictionary::Dictionary((Dictionary *)&local_b8);
    local_100 = uVar19 & 0x7fffffff;
    if ((uVar19 & 0x7fffffff) != 0) {
      uVar19 = 0;
      do {
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        iVar20 = parse_variant(this,(Variant *)&local_a8);
        if (iVar20 != 0) {
          _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1e7,
                           "Condition \"err\" is true. Returning: ERR_FILE_CORRUPT",
                           "Error when trying to parse Variant.",0,0);
LAB_00108362:
          if (::Variant::needs_deinit[local_a8] != '\0') {
            ::Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_b8);
          goto LAB_00106505;
        }
        local_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        local_78 = 0;
        uStack_74 = 0;
        iVar20 = parse_variant(this,(Variant *)&local_88);
        if (iVar20 != 0) {
          _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1ea,
                           "Condition \"err\" is true. Returning: ERR_FILE_CORRUPT",
                           "Error when trying to parse Variant.",0,0);
          if (::Variant::needs_deinit[local_88] != '\0') {
            ::Variant::_clear_internal();
          }
          goto LAB_00108362;
        }
        pVVar22 = (Variant *)Dictionary::operator[]((Variant *)&local_b8);
        ::Variant::operator=(pVVar22,(Variant *)&local_88);
        if (::Variant::needs_deinit[local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_a8] != '\0') {
          ::Variant::_clear_internal();
        }
        uVar19 = uVar19 + 1;
      } while (local_100 != uVar19);
    }
    ::Variant::Variant((Variant *)&local_88,(Dictionary *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_b8);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x1e:
    uVar35 = 0;
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    Array::Array((Array *)&local_b8);
    iVar20 = (int)(CowData<char32_t> *)&local_b8;
    Array::resize(iVar20);
    if ((uVar19 & 0x7fffffff) != 0) {
      do {
        local_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        local_78 = 0;
        uStack_74 = 0;
        iVar32 = parse_variant(this,(Variant *)&local_88);
        if (iVar32 != 0) {
          _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x1f7,
                           "Condition \"err\" is true. Returning: ERR_FILE_CORRUPT",
                           "Error when trying to parse Variant.",0,0);
          if (::Variant::needs_deinit[local_88] != '\0') {
            ::Variant::_clear_internal();
          }
          Array::~Array((Array *)&local_b8);
          goto LAB_00106505;
        }
        pVVar22 = (Variant *)Array::operator[](iVar20);
        ::Variant::operator=(pVVar22,(Variant *)&local_88);
        if (::Variant::needs_deinit[local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        uVar35 = uVar35 + 1;
      } while ((uVar19 & 0x7fffffff) != uVar35);
    }
    ::Variant::Variant((Variant *)&local_88,(Array *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Array::~Array((Array *)&local_b8);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x1f:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_b0);
      (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,0);
    }
    else {
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_b0);
      uVar25 = (ulong)uVar19;
      uVar27 = uVar25 - 1 | uVar25 - 1 >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x10) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        puVar28[1] = uVar25;
      }
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_b0);
      iVar32 = 4 - (uVar19 & 3);
      iVar20 = 0;
      (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,uVar25);
      if (iVar32 != 4) {
        do {
          iVar20 = iVar20 + 1;
          (**(code **)(**(long **)(this + 0x30) + 0x1e0))();
        } while (iVar32 != iVar20);
      }
    }
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x20:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = (ulong)uVar19 * 4;
      CowData<int>::_copy_on_write((CowData<int> *)&local_b0);
      uVar27 = lVar24 - 1U | lVar24 - 1U >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        puVar28[1] = (ulong)uVar19;
      }
    }
    CowData<int>::_copy_on_write((CowData<int> *)&local_b0);
    (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,lVar24);
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<int>::_unref((CowData<int> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x21:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = (ulong)uVar19 * 4;
      CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
      uVar27 = lVar24 - 1U | lVar24 - 1U >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        puVar28[1] = (ulong)uVar19;
      }
    }
    CowData<float>::_copy_on_write((CowData<float> *)&local_b0);
    (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,lVar24);
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<float>::_unref((CowData<float> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x22:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      CowData<String>::_copy_on_write((CowData<String> *)&local_b0);
    }
    else {
      CowData<String>::_copy_on_write((CowData<String> *)&local_b0);
      sVar34 = (ulong)uVar19 * 8;
      uVar27 = sVar34 - 1 | sVar34 - 1 >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        memset(local_b0,0,sVar34);
        puVar28[1] = (ulong)uVar19;
      }
      CowData<String>::_copy_on_write((CowData<String> *)&local_b0);
      pCVar33 = local_b0 + sVar34;
      pCVar26 = local_b0;
      do {
        get_unicode_string();
        lVar24 = local_c8;
        if (*(long *)pCVar26 != local_c8) {
          CowData<char32_t>::_unref(pCVar26);
          *(long *)pCVar26 = lVar24;
          local_c8 = 0;
        }
        pCVar26 = pCVar26 + 8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      } while (pCVar33 != pCVar26);
    }
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<String>::_unref((CowData<String> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x23:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
LAB_001082c3:
      pCVar33 = (CowData<char32_t> *)0x0;
    }
    else {
      sVar34 = (ulong)uVar19 * 0xc;
      uVar27 = sVar34 - 1;
      uVar27 = uVar27 | uVar27 >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        pCVar26 = local_b0;
        if (local_b0 == (CowData<char32_t> *)0x0) goto LAB_001082c3;
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        pCVar26 = (CowData<char32_t> *)memset(local_b0,0,sVar34);
        puVar28[1] = (ulong)uVar19;
      }
      pCVar33 = local_b0;
      if (1 < *(ulong *)(pCVar26 + -0x10)) {
        if (local_b0 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        lVar24 = *(long *)(local_b0 + -8);
        lVar29 = 0;
        sVar34 = lVar24 * 0xc;
        if (sVar34 != 0) {
          uVar27 = sVar34 - 1 | sVar34 - 1 >> 1;
          uVar27 = uVar27 | uVar27 >> 2;
          uVar27 = uVar27 | uVar27 >> 4;
          uVar27 = uVar27 | uVar27 >> 8;
          uVar27 = uVar27 | uVar27 >> 0x10;
          lVar29 = (uVar27 | uVar27 >> 0x20) + 1;
        }
        puVar28 = (undefined8 *)Memory::alloc_static(lVar29 + 0x10,false);
        pCVar26 = local_b0;
        if (puVar28 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
          pCVar33 = local_b0;
        }
        else {
          pCVar33 = (CowData<char32_t> *)(puVar28 + 2);
          *puVar28 = 1;
          puVar28[1] = lVar24;
          memcpy(pCVar33,local_b0,sVar34);
          pCVar13 = local_b0;
          LOCK();
          pCVar26 = pCVar26 + -0x10;
          *(long *)pCVar26 = *(long *)pCVar26 + -1;
          UNLOCK();
          local_b0 = pCVar33;
          if (*(long *)pCVar26 == 0) {
            local_b0 = (CowData<char32_t> *)0x0;
            Memory::free_static(pCVar13 + -0x10,false);
            local_b0 = pCVar33;
          }
        }
      }
    }
    iVar20 = read_reals((float *)pCVar33,(Ref *)(this + 0x30),(ulong)(uVar19 * 3));
    if (iVar20 == 0) {
      ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
      ::Variant::operator=(param_1,(Variant *)&local_88);
      if (::Variant::needs_deinit[local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
      iVar20 = 0;
    }
    else {
      _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x276,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
    }
    goto LAB_00106510;
  case 0x24:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = (ulong)uVar19 * 0x10;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_b0);
      uVar25 = uVar27 - 1 | uVar27 - 1 >> 1;
      uVar25 = uVar25 | uVar25 >> 2;
      uVar25 = uVar25 | uVar25 >> 4;
      uVar25 = uVar25 | uVar25 >> 8;
      uVar25 = uVar25 | uVar25 >> 0x10;
      pCVar26 = (CowData<char32_t> *)Memory::alloc_static((uVar25 | uVar25 >> 0x20) + 0x11,false);
      if (pCVar26 == (CowData<char32_t> *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = pCVar26 + 0x10;
        *(undefined8 *)pCVar26 = 1;
        uVar12 = _UNK_00121908;
        uVar11 = __LC99;
        pCVar33 = pCVar26;
        if ((uVar27 & 0x10) == 0) goto LAB_00107ef0;
        *(undefined8 *)(pCVar26 + 0x10) = __LC99;
        *(undefined8 *)(pCVar26 + 0x18) = uVar12;
        pCVar33 = local_b0;
        while (pCVar33 != pCVar26 + uVar27) {
LAB_00107ef0:
          *(undefined8 *)(pCVar33 + 0x10) = uVar11;
          *(undefined8 *)(pCVar33 + 0x18) = uVar12;
          *(undefined8 *)(pCVar33 + 0x20) = uVar11;
          *(undefined8 *)(pCVar33 + 0x28) = uVar12;
          pCVar33 = pCVar33 + 0x20;
        }
        *(ulong *)(pCVar26 + 8) = (ulong)uVar19;
      }
    }
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_b0);
    (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,uVar27);
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<Color>::_unref((CowData<Color> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x25:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 != 0) {
      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_b0);
      sVar34 = (ulong)uVar19 * 8;
      uVar27 = sVar34 - 1;
      uVar27 = uVar27 | uVar27 >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        memset(local_b0,0,sVar34);
        puVar28[1] = (ulong)uVar19;
      }
    }
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_b0);
    iVar20 = read_reals((float *)local_b0,(Ref *)(this + 0x30),(ulong)(uVar19 * 2));
    if (iVar20 == 0) {
      ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
      ::Variant::operator=(param_1,(Variant *)&local_88);
      if (::Variant::needs_deinit[local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
      iVar20 = 0;
    }
    else {
      _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x269,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
    }
    goto LAB_00106510;
  case 0x28:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    lVar24 = (**(code **)(**(long **)(this + 0x30) + 0x1f8))();
    ::Variant::Variant((Variant *)&local_88,lVar24);
    break;
  case 0x29:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    dVar38 = (double)(**(code **)(**(long **)(this + 0x30) + 0x210))();
    ::Variant::Variant((Variant *)&local_88,dVar38);
    break;
  case 0x2a:
    local_b8 = 0;
    local_b0 = (CowData<char32_t> *)0x0;
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    ::Variant::Variant((Variant *)&local_88,(Callable *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_b8);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x2b:
    local_b8 = 0;
    local_b0 = (CowData<char32_t> *)0x0;
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    ::Variant::Variant((Variant *)&local_88,(Signal *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
      iVar20 = 0;
      goto LAB_00106510;
    }
    goto LAB_001065e6;
  case 0x2c:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    get_unicode_string();
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    ::Variant::Variant((Variant *)&local_88,(StringName *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x2d:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,(Vector2i *)&local_a8);
    break;
  case 0x2e:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,(Rect2i *)&local_a8);
    break;
  case 0x2f:
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_9c = uVar15;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,(Vector3i *)&local_a8);
    break;
  case 0x30:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = (ulong)uVar19 * 8;
      CowData<long>::_copy_on_write((CowData<long> *)&local_b0);
      uVar27 = lVar24 - 1U | lVar24 - 1U >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        puVar28[1] = (ulong)uVar19;
      }
    }
    CowData<long>::_copy_on_write((CowData<long> *)&local_b0);
    (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,lVar24);
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<long>::_unref((CowData<long> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x31:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    if (uVar19 == 0) {
      lVar24 = 0;
    }
    else {
      lVar24 = (ulong)uVar19 * 8;
      CowData<double>::_copy_on_write((CowData<double> *)&local_b0);
      uVar27 = lVar24 - 1U | lVar24 - 1U >> 1;
      uVar27 = uVar27 | uVar27 >> 2;
      uVar27 = uVar27 | uVar27 >> 4;
      uVar27 = uVar27 | uVar27 >> 8;
      uVar27 = uVar27 | uVar27 >> 0x10;
      puVar28 = (undefined8 *)Memory::alloc_static((uVar27 | uVar27 >> 0x20) + 0x11,false);
      if (puVar28 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_b0 = (CowData<char32_t> *)(puVar28 + 2);
        *puVar28 = 1;
        puVar28[1] = (ulong)uVar19;
      }
    }
    CowData<double>::_copy_on_write((CowData<double> *)&local_b0);
    (**(code **)(**(long **)(this + 0x30) + 0x220))(*(long **)(this + 0x30),local_b0,lVar24);
    ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
    ::Variant::operator=(param_1,(Variant *)&local_88);
    if (::Variant::needs_deinit[local_88] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<double>::_unref((CowData<double> *)&local_b0);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x32:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_88,(Vector4 *)&local_a8);
    break;
  case 0x33:
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_a8 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a4 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_a0 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    uStack_9c = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    ::Variant::Variant((Variant *)&local_88,(Vector4i *)&local_a8);
    break;
  case 0x34:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    Projection::Projection((Projection *)&local_88);
    local_88 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_84 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_80 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_7c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_78 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_74 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_70 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uStack_6c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_68 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    uVar37 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_64 = CONCAT44(local_64._4_4_,uVar37);
    uVar37 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_64 = CONCAT44(uVar37,(undefined4)local_64);
    local_5c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_58 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_54 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_50 = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    local_4c = (**(code **)(**(long **)(this + 0x30) + 0x218))();
    ::Variant::Variant((Variant *)&local_a8,(Projection *)&local_88);
    ::Variant::operator=(param_1,(Variant *)&local_a8);
    if (::Variant::needs_deinit[local_a8] != '\0') {
      ::Variant::_clear_internal();
    }
    Projection::~Projection((Projection *)&local_88);
    iVar20 = 0;
    goto LAB_00106510;
  case 0x35:
    local_a8 = iVar20;
    uStack_a4 = uVar37;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    uVar19 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
    local_b0 = (CowData<char32_t> *)0x0;
    CowData<Vector4>::resize<false>((CowData<Vector4> *)&local_b0,(ulong)uVar19);
    CowData<Vector4>::_copy_on_write((CowData<Vector4> *)&local_b0);
    iVar20 = read_reals((float *)local_b0,(Ref *)(this + 0x30),(ulong)(uVar19 * 4));
    if (iVar20 == 0) {
      ::Variant::Variant((Variant *)&local_88,(CowData<char32_t> *)&local_b8);
      ::Variant::operator=(param_1,(Variant *)&local_88);
      if (::Variant::needs_deinit[local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<Vector4>::_unref((CowData<Vector4> *)&local_b0);
      iVar20 = 0;
    }
    else {
      _err_print_error("parse_variant","core/io/resource_format_binary.cpp",0x298,
                       "Condition \"err != OK\" is true. Returning: err",0,0);
      CowData<Vector4>::_unref((CowData<Vector4> *)&local_b0);
    }
    goto LAB_00106510;
  }
  ::Variant::operator=(param_1,(Variant *)&local_88);
  cVar16 = ::Variant::needs_deinit[local_88];
joined_r0x0010670b:
  if (cVar16 == '\0') {
LAB_001065e6:
    iVar20 = 0;
  }
  else {
    ::Variant::_clear_internal();
    iVar20 = 0;
  }
LAB_00106510:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar20;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::get_resource_type(String const&) const */

String * ResourceFormatLoaderBinary::get_resource_type(String *param_1)

{
  long *plVar1;
  Object *pOVar2;
  undefined1 auVar3 [16];
  long lVar4;
  char cVar5;
  int in_EDX;
  long in_FS_OFFSET;
  Object *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  Object *local_1a8;
  size_t local_1a0;
  undefined *local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_190._8_8_ = local_190._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1c8,in_EDX,(Error *)0x1);
  if (local_1c8 == (Object *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_198 = &_LC4;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_190._8_8_;
    local_190 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_0010917a;
  }
  local_198 = (undefined *)((ulong)local_198 & 0xffffffffffffff00);
  local_128 = 0;
  local_190 = (undefined1  [16])0x0;
  local_180 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = _LC116;
  uStack_88 = _UNK_00121928;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0xffffffffffffffff;
  local_130 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_c0 = _LC116;
  local_80 = 1;
  local_50 = _LC116;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_1a8);
  if (local_1a8 != (Object *)0x0) {
    local_190._0_8_ = local_1a8;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_190 + 8),(CowData *)local_190);
  }
  pOVar2 = local_1c8;
  if (local_1c8 == (Object *)0x0) {
LAB_001091f9:
    local_1a8 = (Object *)0x0;
    ResourceLoaderBinary::recognize(&local_1c0,&local_198,(String *)&local_1a8);
  }
  else {
    local_1a8 = local_1c8;
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') goto LAB_001091f9;
    ResourceLoaderBinary::recognize(&local_1c0,&local_198,(String *)&local_1a8);
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  StringName::StringName((StringName *)&local_1b8,(String *)&local_1c0,false);
  ClassDB::get_compatibility_remapped_class((StringName *)&local_1b0);
  if (local_1b0 == 0) {
    *(undefined8 *)param_1 = 0;
LAB_00109133:
    if (StringName::configured != '\0') {
LAB_00109137:
      if (local_1b8 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    pOVar2 = *(Object **)(local_1b0 + 8);
    *(undefined8 *)param_1 = 0;
    if (pOVar2 == (Object *)0x0) {
      if (*(long *)(local_1b0 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(local_1b0 + 0x10));
        goto LAB_00109113;
      }
      if (StringName::configured != '\0') goto LAB_00109124;
    }
    else {
      local_1a0 = strlen((char *)pOVar2);
      local_1a8 = pOVar2;
      String::parse_latin1((StrRange *)param_1);
LAB_00109113:
      if (StringName::configured != '\0') {
        if (local_1b0 != 0) {
LAB_00109124:
          StringName::unref();
          goto LAB_00109133;
        }
        goto LAB_00109137;
      }
    }
  }
  lVar4 = local_1c0;
  if (local_1c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_1c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1c0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_198);
LAB_0010917a:
  if (((local_1c8 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_1c8), cVar5 != '\0')) {
    (**(code **)(*(long *)local_1c8 + 0x140))(local_1c8);
    Memory::free_static(local_1c8,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::get_resource_script_class(String const&) const */

String * ResourceFormatLoaderBinary::get_resource_script_class(String *param_1)

{
  undefined1 auVar1 [16];
  Object *pOVar2;
  char cVar3;
  int in_EDX;
  long in_FS_OFFSET;
  Object *local_198;
  Object *local_190;
  undefined *local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_138 [16];
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  local_180._8_8_ = local_180._0_8_;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_198,in_EDX,(Error *)0x1);
  if (local_198 == (Object *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_188 = &_LC4;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_180._8_8_;
    local_180 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_0010949b;
  }
  local_188 = (undefined *)((ulong)local_188 & 0xffffffffffffff00);
  local_118 = 0;
  local_180 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = _LC116;
  uStack_78 = _UNK_00121928;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffffffffffff;
  local_120 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_b0 = _LC116;
  local_70 = 1;
  local_40 = _LC116;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_190);
  if (local_190 != (Object *)0x0) {
    local_180._0_8_ = local_190;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_180 + 8),(CowData *)local_180);
  }
  pOVar2 = local_198;
  if (local_198 == (Object *)0x0) {
LAB_00109519:
    local_190 = (Object *)0x0;
    ResourceLoaderBinary::recognize_script_class(param_1,&local_188,(String *)&local_190);
  }
  else {
    local_190 = local_198;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') goto LAB_00109519;
    ResourceLoaderBinary::recognize_script_class(param_1,&local_188,(String *)&local_190);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_188);
LAB_0010949b:
  if (((local_198 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_198), cVar3 != '\0')) {
    (**(code **)(*(long *)local_198 + 0x140))(local_198);
    Memory::free_static(local_198,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<ResourceLoaderBinary::IntResource>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ResourceLoaderBinary::IntResource>::_copy_on_write
          (CowData<ResourceLoaderBinary::IntResource> *this)

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
        lVar6 = lVar6 + 1;
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar4 + 8);
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



/* WARNING: Removing unreachable block (ram,0x00109e80) */
/* WARNING: Removing unreachable block (ram,0x0010a82e) */
/* WARNING: Removing unreachable block (ram,0x0010aa5e) */
/* WARNING: Removing unreachable block (ram,0x0010b035) */
/* WARNING: Removing unreachable block (ram,0x0010ab5f) */
/* WARNING: Removing unreachable block (ram,0x0010ab75) */
/* WARNING: Removing unreachable block (ram,0x0010ab80) */
/* WARNING: Removing unreachable block (ram,0x0010ab8a) */
/* WARNING: Removing unreachable block (ram,0x0010b026) */
/* WARNING: Removing unreachable block (ram,0x0010ab9c) */
/* WARNING: Removing unreachable block (ram,0x0010aba5) */
/* WARNING: Removing unreachable block (ram,0x0010abb0) */
/* WARNING: Removing unreachable block (ram,0x0010abba) */
/* WARNING: Removing unreachable block (ram,0x0010abcc) */
/* WARNING: Removing unreachable block (ram,0x0010a85d) */
/* ResourceLoaderBinary::load() [clone .part.0] */

int __thiscall ResourceLoaderBinary::load(ResourceLoaderBinary *this)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  String *pSVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  Ref<Resource> *pRVar19;
  long lVar20;
  Variant *this_00;
  CowData *pCVar21;
  Object *pOVar22;
  Ref *pRVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  CowData<char32_t> *this_01;
  Ref *pRVar27;
  StringName *pSVar28;
  Object *pOVar29;
  char *this_02;
  uint uVar30;
  int iVar31;
  long in_FS_OFFSET;
  bool bVar32;
  float fVar33;
  long local_1c8;
  CowData<char32_t> *local_1c0;
  String *local_1a8;
  MissingResource *local_1a0;
  CowData<char32_t> *local_170;
  Object *local_130;
  Object *local_128;
  long local_120;
  String *local_118;
  Dictionary local_110 [8];
  long local_108;
  Variant local_100;
  undefined7 uStack_ff;
  Object *local_f8;
  undefined8 local_f0;
  Ref *local_e8;
  Object *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar20 = *(long *)(this + 0x98);
  if (lVar20 != 0) {
    local_1c8 = 0;
    do {
      if (*(long *)(lVar20 + -8) <= local_1c8) break;
      local_f8 = (Object *)0x0;
      lVar24 = local_1c8 * 0x20;
      lVar18 = *(long *)(lVar20 + lVar24);
      plVar1 = (long *)(lVar18 + -0x10);
      if (lVar18 != 0) {
        do {
          lVar18 = *plVar1;
          if (lVar18 == 0) goto LAB_00109789;
          LOCK();
          lVar26 = *plVar1;
          bVar32 = lVar18 == lVar26;
          if (bVar32) {
            *plVar1 = lVar18 + 1;
            lVar26 = lVar18;
          }
          UNLOCK();
        } while (!bVar32);
        if (lVar26 != -1) {
          local_f8 = *(Object **)(lVar20 + lVar24);
        }
      }
LAB_00109789:
      if ((*(long *)(this + 0xe8) != 0) && (*(int *)(this + 0x10c) != 0)) {
        uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x108) * 4);
        lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x108) * 8);
        uVar14 = String::hash();
        uVar11 = CONCAT44(0,uVar17);
        lVar18 = *(long *)(this + 0xf0);
        uVar25 = 1;
        if (uVar14 != 0) {
          uVar25 = uVar14;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar25 * lVar20;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar11;
        lVar26 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(lVar18 + lVar26 * 4);
        iVar15 = SUB164(auVar3 * auVar7,8);
        if (uVar14 != 0) {
          uVar30 = 0;
          do {
            if (uVar14 == uVar25) {
              cVar13 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0xe8) + lVar26 * 8) + 0x10),
                                          (String *)&local_f8);
              if (cVar13 != '\0') {
                pCVar21 = (CowData *)
                          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)(this + 0xe0),(String *)&local_f8);
                if (local_f8 != *(Object **)pCVar21) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,pCVar21);
                }
                break;
              }
              lVar18 = *(long *)(this + 0xf0);
            }
            uVar30 = uVar30 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar20;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar11;
            lVar26 = SUB168(auVar4 * auVar8,8);
            uVar14 = *(uint *)(lVar18 + lVar26 * 4);
            iVar15 = SUB164(auVar4 * auVar8,8);
            if ((uVar14 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar20, auVar9._8_8_ = 0,
               auVar9._0_8_ = uVar11, auVar6._8_8_ = 0,
               auVar6._0_8_ = (ulong)((uVar17 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar20,
               auVar10._8_8_ = 0, auVar10._0_8_ = uVar11, SUB164(auVar6 * auVar10,8) < uVar30))
            break;
          } while( true );
        }
      }
      local_1c0 = (CowData<char32_t> *)&local_f8;
      iVar15 = String::find((char *)local_1c0,0x113ce9);
      if ((iVar15 == -1) && (cVar13 = String::is_relative_path(), cVar13 != '\0')) {
        ProjectSettings::get_singleton();
        String::get_base_dir();
        if (*(long *)(this + 0x98) == 0) {
LAB_0010a120:
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(*(long *)(this + 0x98) + -8);
          if (local_1c8 < lVar20) {
            String::path_join((String *)&local_e8);
            ProjectSettings::localize_path((String *)&local_e0);
            if (local_f8 != local_e0) {
              CowData<char32_t>::_unref(local_1c0);
              local_f8 = local_e0;
              local_e0 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            lVar20 = *(long *)(this + 0x98);
            if (lVar20 != 0) goto LAB_001098dc;
            goto LAB_0010a040;
          }
        }
        goto LAB_0010a0fb;
      }
      lVar20 = *(long *)(this + 0x98);
      if (lVar20 == 0) {
LAB_0010a040:
        lVar20 = 0;
        goto LAB_0010a061;
      }
LAB_001098dc:
      lVar20 = *(long *)(lVar20 + -8);
      if (lVar20 <= local_1c8) goto LAB_0010a061;
      CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write
                ((CowData<ResourceLoaderBinary::ExtResource> *)(this + 0x98));
      lVar18 = *(long *)(this + 0x98);
      if (*(Object **)(lVar18 + lVar24) != local_f8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(lVar18 + lVar24),(CowData *)local_1c0);
        lVar18 = *(long *)(this + 0x98);
      }
      if (lVar18 == 0) {
        lVar20 = 0;
        goto LAB_0010a0fb;
      }
      lVar20 = *(long *)(lVar18 + -8);
      if (lVar20 <= local_1c8) goto LAB_0010a0fb;
      ResourceLoader::_load_start
                ((CowData<char32_t> *)&local_e0,local_1c0,lVar18 + 8 + lVar24,
                 (uint)(byte)this[0x80] * 2,*(undefined4 *)(this + 0x118),0);
      if (*(long *)(this + 0x98) == 0) goto LAB_0010a040;
      lVar20 = *(long *)(*(long *)(this + 0x98) + -8);
      if (lVar20 <= local_1c8) goto LAB_0010a061;
      CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write
                ((CowData<ResourceLoaderBinary::ExtResource> *)(this + 0x98));
      lVar18 = *(long *)(this + 0x98);
      lVar20 = lVar18 + lVar24;
      pOVar22 = *(Object **)(lVar20 + 0x18);
      pOVar29 = pOVar22;
      if (local_e0 == pOVar22) {
LAB_001099ec:
        if (((pOVar29 != (Object *)0x0) &&
            (cVar13 = RefCounted::unreference(), pOVar22 = local_e0, cVar13 != '\0')) &&
           (cVar13 = predelete_handler(local_e0), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
          Memory::free_static(pOVar22,false);
        }
        lVar18 = *(long *)(this + 0x98);
      }
      else {
        *(Object **)(lVar20 + 0x18) = local_e0;
        if (local_e0 != (Object *)0x0) {
          cVar13 = RefCounted::reference();
          if (cVar13 == '\0') {
            *(undefined8 *)(lVar20 + 0x18) = 0;
          }
          pOVar29 = local_e0;
          if (pOVar22 != (Object *)0x0) {
            cVar13 = RefCounted::unreference();
            goto joined_r0x001099de;
          }
          goto LAB_001099ec;
        }
        if (pOVar22 != (Object *)0x0) {
          cVar13 = RefCounted::unreference();
joined_r0x001099de:
          pOVar29 = local_e0;
          if ((cVar13 != '\0') &&
             (cVar13 = predelete_handler(pOVar22), pOVar29 = local_e0, cVar13 != '\0')) {
            (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
            Memory::free_static(pOVar22,false);
            pOVar29 = local_e0;
          }
          goto LAB_001099ec;
        }
      }
      if (lVar18 == 0) goto LAB_0010a120;
      lVar20 = *(long *)(lVar18 + -8);
      if (lVar20 <= local_1c8) goto LAB_0010a0fb;
      if (*(long *)(lVar18 + lVar24 + 0x18) == 0) {
        if ((char)ResourceLoader::abort_on_missing_resource != '\0') {
          *(undefined4 *)(this + 0x110) = 0x11;
          local_e8 = (Ref *)0x0;
          if (local_f8 != (Object *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)local_1c0);
          }
          local_f0 = 0;
          String::parse_latin1((String *)&local_f0,"Can\'t load dependency: \'%s\'.");
          vformat<String>((CowData<char32_t> *)&local_e0,(String *)&local_f0,
                          (CowData<char32_t> *)&local_e8);
          _err_print_error(&_LC121,"core/io/resource_format_binary.cpp",0x2c1,
                           "Method/function failed. Returning: error",(CowData<char32_t> *)&local_e0
                           ,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          iVar15 = *(int *)(this + 0x110);
          CowData<char32_t>::_unref(local_1c0);
          goto LAB_0010a4cd;
        }
        ResourceLoader::notify_dependency_error
                  ((String *)(this + 8),(String *)local_1c0,(String *)(lVar18 + lVar24 + 8));
      }
      pOVar22 = local_f8;
      if (local_f8 != (Object *)0x0) {
        LOCK();
        pOVar29 = local_f8 + -0x10;
        *(long *)pOVar29 = *(long *)pOVar29 + -1;
        UNLOCK();
        if (*(long *)pOVar29 == 0) {
          local_f8 = (Object *)0x0;
          Memory::free_static(pOVar22 + -0x10,false);
        }
      }
      lVar20 = *(long *)(this + 0x98);
      local_1c8 = local_1c8 + 1;
    } while (lVar20 != 0);
  }
  lVar18 = *(long *)(this + 0xa8);
  if (lVar18 != 0) {
    local_1c8 = 0;
    this_02 = (char *)&local_d8;
    do {
      if (*(long *)(lVar18 + -8) <= local_1c8) break;
      local_130 = (Object *)0x0;
      lVar24 = *(long *)(lVar18 + -8) + -1;
      local_128 = (Object *)0x0;
      if (lVar24 == local_1c8) {
        if (*(int *)(this + 0x114) != 0) {
          cVar13 = ResourceCache::has((String *)(this + 0x10));
          if ((cVar13 == '\0') && (local_130 != *(Object **)(this + 0x10))) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)(this + 0x10));
          }
          goto LAB_00109b2b;
        }
LAB_00109b32:
        if (lVar18 == 0) {
          lVar20 = 0;
LAB_0010a0fb:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,local_1c8,lVar20,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar20 = *(long *)(lVar18 + -8);
        if (lVar20 <= local_1c8) goto LAB_0010a0fb;
        (**(code **)(**(long **)(this + 0x30) + 0x1b8))
                  (*(long **)(this + 0x30),*(undefined8 *)(lVar18 + 8 + local_1c8 * 0x10));
        get_unicode_string();
        local_118 = (String *)0x0;
        if (lVar24 == local_1c8) {
          ResourceLoader::get_resource_ref_override((String *)&local_e0);
          Ref<Resource>::operator=((Ref<Resource> *)&local_118,(Ref *)local_e0);
          Ref<Resource>::unref((Ref<Resource> *)&local_e0);
          if (local_118 == (String *)0x0) goto LAB_00109ba5;
          local_1a0 = (MissingResource *)0x0;
          pRVar23 = (Ref *)local_118;
LAB_0010a662:
          local_1a8 = (String *)&local_130;
          if ((local_130 != (Object *)0x0) && (1 < *(uint *)(local_130 + -8))) {
            if (*(int *)(this + 0x114) == 0) {
              (**(code **)(*(long *)pRVar23 + 400))(pRVar23,local_1a8);
            }
            else {
              (**(code **)(*(long *)pRVar23 + 0x188))(pRVar23,local_1a8,*(int *)(this + 0x114) == 2)
              ;
            }
          }
          Resource::set_scene_unique_id((String *)pRVar23);
LAB_00109bf5:
          local_1a8 = (String *)&local_130;
          local_170 = (CowData<char32_t> *)&local_128;
          if (lVar24 != local_1c8) {
            pRVar19 = (Ref<Resource> *)
                      HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                      ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                                    *)(this + 0xb0),local_1a8);
            Ref<Resource>::operator=(pRVar19,(Ref *)local_118);
          }
          iVar16 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
          Dictionary::Dictionary(local_110);
          if (0 < iVar16) {
            iVar31 = 0;
            do {
              _get_string();
              if (local_108 == 0) {
                *(undefined4 *)(this + 0x110) = 0x10;
                _err_print_error(&_LC121,"core/io/resource_format_binary.cpp",0x337,
                                 "Method/function failed. Returning: ERR_FILE_CORRUPT",0,0);
                iVar15 = 0x10;
LAB_0010a533:
                if ((StringName::configured != '\0') && (local_108 != 0)) {
                  StringName::unref();
                }
                goto LAB_0010a555;
              }
              local_d8 = 0;
              local_d0 = (undefined1  [16])0x0;
              iVar15 = parse_variant(this,(Variant *)&local_d8);
              *(int *)(this + 0x110) = iVar15;
              if (iVar15 != 0) {
                if (::Variant::needs_deinit[(int)local_d8] != '\0') {
                  ::Variant::_clear_internal();
                }
                goto LAB_0010a533;
              }
              if ((int)local_d8 == 0x18) {
                if ((local_1a0 != (MissingResource *)0x0) ||
                   ((char)ResourceLoader::create_missing_resources_if_class_unavailable == '\0')) {
LAB_00109c79:
                  Object::set((StringName *)local_118,(Variant *)&local_108,(bool *)&local_d8);
                  goto LAB_00109c8e;
                }
                lVar20 = ::Variant::get_validated_object();
                if ((lVar20 == 0) ||
                   ((this_02 = (char *)__dynamic_cast(lVar20,&Object::typeinfo,
                                                      &MissingResource::typeinfo,0),
                    (Object *)this_02 == (Object *)0x0 ||
                    (cVar13 = RefCounted::reference(), cVar13 == '\0')))) {
                  if ((int)local_d8 == 0x1c) goto LAB_0010a2c4;
                  if ((int)local_d8 == 0x1b) goto LAB_0010a37d;
                  goto LAB_00109c79;
                }
                ::Variant::Variant((Variant *)local_58,(Object *)this_02);
                ::Variant::Variant((Variant *)local_78,(StringName *)&local_108);
                this_00 = (Variant *)Dictionary::operator[]((Variant *)local_110);
                ::Variant::operator=(this_00,(Variant *)local_58);
                if (::Variant::needs_deinit[local_78[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                if (::Variant::needs_deinit[local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                cVar13 = RefCounted::unreference();
                if ((cVar13 == '\0') ||
                   (cVar13 = predelete_handler((Object *)this_02), cVar13 == '\0')) {
                }
                else {
                  (**(code **)(*(long *)this_02 + 0x140))(this_02);
                  Memory::free_static(this_02,false);
                }
                if ((int)local_d8 == 0x1c) {
                  bVar32 = false;
                  goto LAB_0010a2d0;
                }
                iVar15 = (int)local_d8;
                if ((int)local_d8 == 0x1b) {
                  bVar32 = false;
                  goto LAB_00109e33;
                }
              }
              else {
                if ((int)local_d8 == 0x1c) {
LAB_0010a2c4:
                  bVar32 = true;
LAB_0010a2d0:
                  ::Variant::operator_cast_to_Array((Variant *)&local_f8);
                  local_100 = (Variant)0x0;
                  Object::get((StringName *)local_98,(bool *)local_118);
                  lVar20 = (long)local_98[0];
                  if ((local_100 != (Variant)0x0) && (local_98[0] == 0x1c)) {
                    ::Variant::operator_cast_to_Array((Variant *)&local_f0);
                    cVar13 = Array::is_same_typed((Array *)&local_f8);
                    if (cVar13 == '\0') {
                      Array::get_typed_script();
                      Array::get_typed_class_name();
                      uVar17 = Array::get_typed_builtin();
                      Array::Array((Array *)&local_e0,(Array *)&local_f8,uVar17,
                                   (StringName *)&local_e8,(Variant *)local_78);
                      ::Variant::Variant((Variant *)local_58,(Array *)&local_e0);
                      ::Variant::operator=((Variant *)&local_d8,(Variant *)local_58);
                      if (::Variant::needs_deinit[local_58[0]] != '\0') {
                        ::Variant::_clear_internal();
                      }
                      Array::~Array((Array *)&local_e0);
                      if ((StringName::configured != '\0') && (local_e8 != (Ref *)0x0)) {
                        StringName::unref();
                      }
                      if (::Variant::needs_deinit[local_78[0]] != '\0') {
                        ::Variant::_clear_internal();
                      }
                    }
                    Array::~Array((Array *)&local_f0);
                    lVar20 = (long)local_98[0];
                  }
                  if (::Variant::needs_deinit[lVar20] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  Array::~Array((Array *)&local_f8);
                  if ((int)local_d8 == 0x1b) goto LAB_00109e33;
                }
                else {
                  if ((int)local_d8 != 0x1b) goto LAB_00109c79;
LAB_0010a37d:
                  bVar32 = true;
LAB_00109e33:
                  ::Variant::operator_cast_to_Dictionary(&local_100);
                  Object::get((StringName *)local_b8,(bool *)local_118);
                  if (::Variant::needs_deinit[local_b8[0]] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  Dictionary::~Dictionary((Dictionary *)&local_100);
                }
                this_02 = (char *)&local_100;
                if (bVar32) goto LAB_00109c79;
LAB_00109c8e:
                iVar15 = (int)local_d8;
              }
              if (::Variant::needs_deinit[iVar15] != '\0') {
                ::Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (local_108 != 0)) {
                StringName::unref();
              }
              iVar31 = iVar31 + 1;
            } while (iVar16 != iVar31);
          }
          if (local_1a0 != (MissingResource *)0x0) {
            MissingResource::set_recording_properties(SUB81(local_1a0,0));
          }
          cVar13 = Dictionary::is_empty();
          pSVar12 = local_118;
          if (cVar13 == '\0') {
            this_02 = (char *)&local_e0;
            pcVar2 = *(code **)(*(long *)local_118 + 0xa8);
            ::Variant::Variant((Variant *)local_58,local_110);
            StringName::StringName((StringName *)this_02,"_missing_resources",false);
            (*pcVar2)(pSVar12,this_02,(Variant *)local_58);
            if ((StringName::configured != '\0') && (local_e0 != (Object *)0x0)) {
              StringName::unref();
            }
            if (::Variant::needs_deinit[local_58[0]] != '\0') {
              ::Variant::_clear_internal();
            }
          }
          Object::set_edited(SUB81(pSVar12,0));
          if (*(float **)(this + 0x88) != (float *)0x0) {
            if (*(long *)(this + 0xa8) == 0) {
              fVar33 = 0.0;
            }
            else {
              fVar33 = (float)*(long *)(*(long *)(this + 0xa8) + -8);
            }
            **(float **)(this + 0x88) = (float)((int)local_1c8 + 1) / fVar33;
          }
          List<Ref<Resource>,DefaultAllocator>::push_back
                    ((List<Ref<Resource>,DefaultAllocator> *)(this + 0x58),(Ref *)&local_118);
          if (lVar24 != local_1c8) {
            Dictionary::~Dictionary(local_110);
            Ref<Resource>::unref((Ref<Resource> *)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
            CowData<char32_t>::_unref(local_170);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
            goto LAB_0010a4b3;
          }
          Ref<FileAccess>::unref((Ref<FileAccess> *)(this + 0x30));
          Ref<Resource>::operator=((Ref<Resource> *)(this + 0x20),(Ref *)pSVar12);
          Resource::set_as_translation_remapped(SUB81(*(undefined8 *)(this + 0x20),0));
          iVar15 = 0;
          *(undefined4 *)(this + 0x110) = 0;
LAB_0010a555:
          Dictionary::~Dictionary(local_110);
        }
        else {
LAB_00109ba5:
          if (*(int *)(this + 0x114) == 2) {
            cVar13 = ResourceCache::has((String *)&local_130);
            if (cVar13 != '\0') {
              ResourceCache::get_ref((String *)&local_e8);
              (**(code **)(*(long *)local_e8 + 0x48))((String *)&local_e0);
              cVar13 = String::operator==((String *)&local_e0,(String *)&local_120);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              if (cVar13 != '\0') {
                (**(code **)(*(long *)local_e8 + 0x170))();
                Ref<Resource>::operator=((Ref<Resource> *)&local_118,local_e8);
              }
              Ref<Resource>::unref((Ref<Resource> *)&local_e8);
            }
            if (local_118 == (String *)0x0) goto LAB_0010a598;
            local_1a0 = (MissingResource *)0x0;
            goto LAB_00109bf5;
          }
LAB_0010a598:
          StringName::StringName((StringName *)&local_e0,(String *)&local_120,false);
          pOVar22 = (Object *)ClassDB::instantiate((StringName *)&local_e0);
          if ((StringName::configured != '\0') && (local_e0 != (Object *)0x0)) {
            StringName::unref();
          }
          local_1a0 = (MissingResource *)0x0;
          if (pOVar22 == (Object *)0x0) {
            if ((char)ResourceLoader::create_missing_resources_if_class_unavailable != '\0') {
              pOVar22 = (Object *)operator_new(0x280,"");
              MissingResource::MissingResource((MissingResource *)pOVar22);
              postinitialize_handler(pOVar22);
              MissingResource::set_original_class((String *)pOVar22);
              MissingResource::set_recording_properties(SUB81(pOVar22,0));
              local_1a0 = (MissingResource *)pOVar22;
              goto LAB_0010a5e8;
            }
            *(undefined4 *)(this + 0x110) = 0x10;
            local_e8 = (Ref *)0x0;
            if (local_120 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_120);
            }
            local_f0 = 0;
            if (*(long *)(this + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(this + 8));
            }
            local_f8 = (Object *)0x0;
            String::parse_latin1
                      ((String *)&local_f8,"\'%s\': Resource of unrecognized type in file: \'%s\'.")
            ;
            vformat<String,String>
                      ((StringName *)&local_e0,(String *)&local_f8,(CowData<char32_t> *)&local_f0,
                       (CowData<char32_t> *)&local_e8);
            _err_print_error(&_LC121,"core/io/resource_format_binary.cpp",0x30d,
                             "Method/function failed. Returning: ERR_FILE_CORRUPT",
                             (StringName *)&local_e0,0,0,this_02);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          }
          else {
LAB_0010a5e8:
            pRVar23 = (Ref *)__dynamic_cast(pOVar22,&Object::typeinfo,&Resource::typeinfo,0);
            if (pRVar23 != (Ref *)0x0) {
              local_e0 = (Object *)0x0;
              local_e8 = pRVar23;
              cVar13 = RefCounted::init_ref();
              pRVar27 = pRVar23;
              if (cVar13 == '\0') {
                local_e8 = (Ref *)0x0;
                pRVar27 = (Ref *)0x0;
              }
              Ref<Resource>::unref((Ref<Resource> *)&local_e0);
              Ref<Resource>::operator=((Ref<Resource> *)&local_118,pRVar27);
              Ref<Resource>::unref((Ref<Resource> *)&local_e8);
              goto LAB_0010a662;
            }
            (**(code **)(*(long *)pOVar22 + 0x48))((CowData<char32_t> *)&local_100);
            *(undefined4 *)(this + 0x110) = 0x10;
            cVar13 = predelete_handler(pOVar22);
            if (cVar13 != '\0') {
              (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
              Memory::free_static(pOVar22,false);
            }
            local_e8 = (Ref *)0x0;
            if (CONCAT71(uStack_ff,local_100) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
            }
            local_f0 = 0;
            if (*(long *)(this + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(this + 8));
            }
            local_f8 = (Object *)0x0;
            String::parse_latin1
                      ((String *)&local_f8,
                       "\'%s\': Resource type in resource field not a resource, type is: %s.");
            pSVar28 = (StringName *)&local_e0;
            vformat<String,String>
                      ((StringName *)&local_e0,(String *)&local_f8,(CowData<char32_t> *)&local_f0,
                       (CowData<char32_t> *)&local_e8);
            _err_print_error(&_LC121,"core/io/resource_format_binary.cpp",0x316,
                             "Method/function failed. Returning: ERR_FILE_CORRUPT",
                             (StringName *)&local_e0,0,0,pSVar28);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
          }
          iVar15 = 0x10;
        }
        local_1a8 = (String *)&local_130;
        local_170 = (CowData<char32_t> *)&local_128;
        Ref<Resource>::unref((Ref<Resource> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        CowData<char32_t>::_unref(local_170);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
        goto LAB_0010a4cd;
      }
      pCVar21 = (CowData *)(lVar18 + local_1c8 * 0x10);
      if (*(long *)pCVar21 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,pCVar21);
      }
      this_02 = "local://";
      cVar13 = String::begins_with((char *)&local_130);
      if (cVar13 != '\0') {
        String::replace_first((char *)&local_e0,(char *)&local_130);
        if (local_130 != local_e0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
          local_130 = local_e0;
          local_e0 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        if (local_128 != local_130) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_130);
        }
        this_02 = (char *)&local_f0;
        local_f0 = 0;
        String::parse_latin1((String *)this_02,"::");
        String::operator+((String *)&local_e8,(String *)(this + 0x10));
        String::operator+((String *)&local_e0,(String *)&local_e8);
        if (local_130 != local_e0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
          local_130 = local_e0;
          local_e0 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)this_02);
        if (*(long *)(this + 0xa8) == 0) {
          lVar20 = 0;
LAB_0010a061:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,local_1c8,lVar20,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar20 = *(long *)(*(long *)(this + 0xa8) + -8);
        if (lVar20 <= local_1c8) goto LAB_0010a061;
        CowData<ResourceLoaderBinary::IntResource>::_copy_on_write
                  ((CowData<ResourceLoaderBinary::IntResource> *)(this + 0xa8));
        this_01 = (CowData<char32_t> *)(local_1c8 * 0x10 + *(long *)(this + 0xa8));
        if (*(Object **)this_01 != local_130) {
          CowData<char32_t>::_ref(this_01,(CowData *)&local_130);
        }
      }
      local_1a8 = (String *)&local_130;
      if ((*(int *)(this + 0x114) != 1) || (cVar13 = ResourceCache::has(local_1a8), cVar13 == '\0'))
      {
LAB_00109b2b:
        lVar18 = *(long *)(this + 0xa8);
        goto LAB_00109b32;
      }
      ResourceCache::get_ref((String *)&local_e0);
      if (local_e0 == (Object *)0x0) {
        Ref<Resource>::unref((Ref<Resource> *)&local_e0);
        lVar18 = *(long *)(this + 0xa8);
        goto LAB_00109b32;
      }
      *(undefined4 *)(this + 0x110) = 0;
      pRVar19 = (Ref<Resource> *)
                HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                              *)(this + 0xb0),local_1a8);
      Ref<Resource>::operator=(pRVar19,(Ref *)local_e0);
      Ref<Resource>::unref((Ref<Resource> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
LAB_0010a4b3:
      lVar18 = *(long *)(this + 0xa8);
      local_1c8 = local_1c8 + 1;
    } while (lVar18 != 0);
  }
  iVar15 = 0x12;
LAB_0010a4cd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}



/* ResourceLoaderBinary::load() */

void __thiscall ResourceLoaderBinary::load(ResourceLoaderBinary *this)

{
  if (*(int *)(this + 0x110) == 0) {
    load(this);
    return;
  }
  return;
}



/* ResourceLoaderBinary::open(Ref<FileAccess>, bool, bool) */

void __thiscall
ResourceLoaderBinary::open(ResourceLoaderBinary *this,undefined8 *param_2,char param_3,char param_4)

{
  long *plVar1;
  Ref<FileAccess> *this_00;
  code *pcVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  Ref *pRVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  Object *pOVar19;
  long lVar20;
  CowData<char32_t> *this_01;
  char *pcVar21;
  char *pcVar22;
  CowData<char32_t> *pCVar23;
  long lVar24;
  Object *pOVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  int local_ec;
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  Ref *local_98;
  long local_90;
  undefined1 local_88 [16];
  long local_78;
  Object *local_70;
  char *local_68;
  long local_60;
  long local_58;
  Object *local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  long local_40;
  
  pOVar19 = *(Object **)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x110) = 0;
  pOVar25 = (Object *)*param_2;
  if (pOVar25 != pOVar19) {
    *(Object **)(this + 0x30) = pOVar25;
    if ((pOVar25 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
      *(undefined8 *)(this + 0x30) = 0;
    }
    if (((pOVar19 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
       (cVar10 = predelete_handler(pOVar19), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
      Memory::free_static(pOVar19,false);
    }
    pOVar19 = *(Object **)(this + 0x30);
  }
  (**(code **)(*(long *)pOVar19 + 0x220))(pOVar19,&local_44,4);
  if ((local_44 == 'R') && (local_43 == 'S')) {
    this_00 = (Ref<FileAccess> *)(this + 0x30);
    if (local_42 == 'C') {
      if (local_41 == 'C') {
        local_98 = (Ref *)0x0;
        Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_98);
        pRVar9 = local_98;
        local_68 = (char *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,*(Ref **)(this + 0x30));
        uVar13 = FileAccessCompressed::open_after_magic(pRVar9,(Ref<FileAccess> *)&local_68);
        *(undefined4 *)(this + 0x110) = uVar13;
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
        if (*(int *)(this + 0x110) != 0) {
          Ref<FileAccess>::unref(this_00);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_88._8_8_;
          local_88 = auVar8 << 0x40;
          if (*(long *)(this + 8) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)(this + 8));
          }
          local_90 = 0;
          String::parse_latin1((String *)&local_90,"Failed to open binary resource file: \'%s\'.");
          vformat<String>((Ref<FileAccess> *)&local_68,(String *)&local_90,
                          (CowData<char32_t> *)local_88);
          _err_print_error(&_LC126,"core/io/resource_format_binary.cpp",1000,
                           "Method/function failed.",(Ref<FileAccess> *)&local_68,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_98);
          goto LAB_0010b24f;
        }
        Ref<FileAccess>::operator=(this_00,pRVar9);
        Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_98);
        goto LAB_0010b32d;
      }
    }
    else if ((local_42 == 'R') && (local_41 == 'C')) {
LAB_0010b32d:
      iVar11 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
      (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
      plVar1 = *(long **)(this + 0x30);
      lVar18 = *plVar1;
      if (*(code **)(lVar18 + 0x248) == FileAccess::set_big_endian) {
        *(bool *)((long)plVar1 + 0x17c) = iVar11 != 0;
      }
      else {
        (**(code **)(lVar18 + 0x248))(plVar1,iVar11 != 0);
        lVar18 = **(long **)(this + 0x30);
      }
      uVar12 = (**(code **)(lVar18 + 0x1f0))();
      uVar13 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
      uVar14 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
      *(undefined4 *)(this + 0x28) = uVar14;
      itos((long)local_88);
      operator+((char *)&local_68,(String *)"big endian: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      itos((long)local_88);
      operator+((char *)&local_68,(String *)"endian swap: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      itos((long)local_88);
      operator+((char *)&local_68,(String *)"real64: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      itos((long)local_88);
      operator+((char *)&local_68,(String *)"major: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      itos((long)local_88);
      operator+((char *)&local_68,(String *)"minor: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      itos((long)local_88);
      operator+((char *)&local_68,(String *)"format: ");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if ((*(uint *)(this + 0x28) < 7) && (uVar12 < 5)) {
        get_unicode_string();
        pcVar22 = local_68;
        if (*(char **)(this + 0x18) != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
          *(char **)(this + 0x18) = pcVar22;
          local_68 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        operator+((char *)&local_68,(String *)"type: ");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        uVar17 = (**(code **)(**(long **)(this + 0x30) + 0x1f8))();
        *(undefined8 *)(this + 0x38) = uVar17;
        uVar12 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
        if ((uVar12 & 1) != 0) {
          this[0x70] = (ResourceLoaderBinary)0x1;
        }
        if ((uVar12 & 2) != 0) {
          this[0x71] = (ResourceLoaderBinary)0x1;
        }
        plVar1 = *(long **)(this + 0x30);
        *(byte *)((long)plVar1 + 0x17d) = (byte)(uVar12 >> 2) & 1;
        pcVar2 = *(code **)(*plVar1 + 0x1f8);
        if (this[0x71] == (ResourceLoaderBinary)0x0) {
          (*pcVar2)();
          uVar17 = 0xffffffffffffffff;
        }
        else {
          uVar17 = (*pcVar2)();
        }
        *(undefined8 *)(this + 0x40) = uVar17;
        if ((uVar12 & 8) != 0) {
          get_unicode_string();
          pcVar22 = local_68;
          if (*(char **)(this + 0x78) != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x78));
            *(char **)(this + 0x78) = pcVar22;
            local_68 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        iVar11 = 0xb;
        do {
          (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        if (param_3 == '\0') {
          uVar26 = 0;
          uVar12 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
          CowData<StringName>::resize<false>((CowData<StringName> *)(this + 0x68),(ulong)uVar12);
          if (uVar12 != 0) {
            do {
              get_unicode_string();
              StringName::StringName((StringName *)local_88,(String *)&local_68,false);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if (*(long *)(this + 0x68) == 0) {
                lVar18 = 0;
LAB_0010b673:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,uVar26,lVar18,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              lVar18 = *(long *)(*(long *)(this + 0x68) + -8);
              if (lVar18 <= (long)uVar26) goto LAB_0010b673;
              CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 0x68));
              StringName::operator=
                        ((StringName *)(*(long *)(this + 0x68) + uVar26 * 8),(StringName *)local_88)
              ;
              if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
                StringName::unref();
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar12);
          }
          itos((long)local_88);
          operator+((char *)&local_68,(String *)"strings: ");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          iVar11 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
          if (iVar11 != 0) {
            pCVar23 = (CowData<char32_t> *)(local_88 + 8);
            local_ec = 0;
            do {
              local_78 = -1;
              local_70 = (Object *)0x0;
              local_88 = (undefined1  [16])0x0;
              get_unicode_string();
              pcVar22 = local_68;
              if (local_68 != (char *)0x0) {
                CowData<char32_t>::_unref(pCVar23);
                local_88._8_8_ = pcVar22;
                local_68 = (char *)0x0;
                pcVar22 = (char *)local_88._0_8_;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              get_unicode_string();
              pcVar21 = local_68;
              if (local_68 != pcVar22) {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                local_88._0_8_ = pcVar21;
                local_68 = (char *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              lVar18 = local_78;
              if (((this[0x71] != (ResourceLoaderBinary)0x0) &&
                  (lVar18 = (**(code **)(**(long **)(this + 0x30) + 0x1f8))(), local_78 = lVar18,
                  param_4 != '\x01')) && (lVar18 != -1)) {
                cVar10 = ResourceUID::has_id(ResourceUID::singleton);
                if (cVar10 == '\0') {
                  lVar24 = ResourceLoader::get_resource_uid((String *)(this + 0x10));
                  if (lVar18 != lVar24) {
                    local_90 = 0;
                    if (pcVar21 != (char *)0x0) {
                      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)local_88);
                    }
                    ResourceUID::id_to_text((long)local_a8);
                    local_98 = (Ref *)0x0;
                    if (*(long *)(this + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_98,(CowData *)(this + 0x10));
                    }
                    local_a0 = 0;
                    String::parse_latin1
                              ((String *)&local_a0,
                               "\'%s\': In external resource #%d, invalid UID: \'%s\' - using text path instead: \'%s\'."
                              );
                    vformat<String,unsigned_int,String,String>
                              ((CowData<char32_t> *)&local_68,(String *)&local_a0,
                               (CowData<char32_t> *)&local_98,local_ec,local_a8,
                               (CowData<char32_t> *)&local_90);
                    _err_print_error(&_LC126,"core/io/resource_format_binary.cpp",0x446,
                                     (CowData<char32_t> *)&local_68,0,1);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref(local_a8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                  }
                }
                else {
                  ResourceUID::get_id_path((long)&local_68);
                  if (pcVar21 != local_68) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                    pcVar21 = local_68;
                    local_68 = (char *)0x0;
                    local_88._0_8_ = pcVar21;
                    lVar18 = local_78;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                }
              }
              local_68 = (char *)0x0;
              if (pcVar21 != (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_88);
              }
              local_60 = 0;
              if (local_88._8_8_ != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)pCVar23);
              }
              pOVar19 = local_70;
              local_58 = lVar18;
              if (local_70 == (Object *)0x0) {
LAB_0010ba0d:
                local_50 = (Object *)0x0;
                pOVar25 = (Object *)0x0;
              }
              else {
                local_50 = local_70;
                cVar10 = RefCounted::reference();
                pOVar25 = pOVar19;
                if (cVar10 == '\0') goto LAB_0010ba0d;
              }
              if (*(long *)(this + 0x98) == 0) {
                lVar24 = 1;
              }
              else {
                lVar24 = *(long *)(*(long *)(this + 0x98) + -8) + 1;
              }
              iVar15 = CowData<ResourceLoaderBinary::ExtResource>::resize<false>
                                 ((CowData<ResourceLoaderBinary::ExtResource> *)(this + 0x98),lVar24
                                 );
              if (iVar15 == 0) {
                if (*(long *)(this + 0x98) == 0) {
                  lVar20 = -1;
                  lVar24 = 0;
LAB_0010c076:
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar20,lVar24,"p_index",
                             "size()","",false,false);
                  goto LAB_0010bcac;
                }
                lVar24 = *(long *)(*(long *)(this + 0x98) + -8);
                lVar20 = lVar24 + -1;
                if (lVar20 < 0) goto LAB_0010c076;
                CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write
                          ((CowData<ResourceLoaderBinary::ExtResource> *)(this + 0x98));
                this_01 = (CowData<char32_t> *)(lVar20 * 0x20 + *(long *)(this + 0x98));
                if (*(char **)this_01 != local_68) {
                  CowData<char32_t>::_ref(this_01,(CowData *)&local_68);
                }
                if (*(long *)(this_01 + 8) != local_60) {
                  CowData<char32_t>::_ref(this_01 + 8,(CowData *)&local_60);
                }
                *(long *)(this_01 + 0x10) = lVar18;
                pOVar3 = *(Object **)(this_01 + 0x18);
                if (pOVar3 == pOVar25) goto LAB_0010bcac;
                *(Object **)(this_01 + 0x18) = pOVar25;
                if (pOVar25 != (Object *)0x0) {
                  cVar10 = RefCounted::reference();
                  if (cVar10 == '\0') {
                    *(undefined8 *)(this_01 + 0x18) = 0;
                  }
                  if (((pOVar3 != (Object *)0x0) &&
                      (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
                     (cVar10 = predelete_handler(pOVar3), cVar10 != '\0')) goto LAB_0010bce9;
                  goto LAB_0010baeb;
                }
                if (((pOVar3 != (Object *)0x0) &&
                    (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
                   (cVar10 = predelete_handler(pOVar3), cVar10 != '\0')) {
LAB_0010bce9:
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                  goto LAB_0010bcac;
                }
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
LAB_0010bcac:
                if (pOVar25 != (Object *)0x0) {
LAB_0010baeb:
                  cVar10 = RefCounted::unreference();
                  if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar25), cVar10 != '\0')) {
                    (**(code **)(*(long *)pOVar25 + 0x140))(pOVar25);
                    Memory::free_static(pOVar25,false);
                  }
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if (((pOVar19 != (Object *)0x0) &&
                  (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
                 (cVar10 = predelete_handler(pOVar19), cVar10 != '\0')) {
                (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
                Memory::free_static(pOVar19,false);
              }
              CowData<char32_t>::_unref(pCVar23);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              local_ec = local_ec + 1;
            } while (iVar11 != local_ec);
          }
          itos((long)local_88);
          operator+((char *)&local_68,(String *)"ext resources: ");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          iVar11 = (**(code **)(**(long **)(this + 0x30) + 0x1f0))();
          if (iVar11 != 0) {
            iVar15 = 0;
            do {
              local_88._0_8_ = 0;
              get_unicode_string();
              pcVar22 = local_68;
              if (local_68 == (char *)0x0) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                lVar18 = (**(code **)(**(long **)(this + 0x30) + 0x1f8))();
                local_68 = (char *)0x0;
                local_88._8_8_ = lVar18;
              }
              else {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                local_88._0_8_ = pcVar22;
                local_68 = (char *)0x0;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                lVar18 = (**(code **)(**(long **)(this + 0x30) + 0x1f8))();
                local_68 = (char *)0x0;
                local_88._8_8_ = lVar18;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_88);
              }
              if (*(long *)(this + 0xa8) == 0) {
                lVar24 = 1;
              }
              else {
                lVar24 = *(long *)(*(long *)(this + 0xa8) + -8) + 1;
              }
              local_60 = lVar18;
              iVar16 = CowData<ResourceLoaderBinary::IntResource>::resize<false>
                                 ((CowData<ResourceLoaderBinary::IntResource> *)(this + 0xa8),lVar24
                                 );
              if (iVar16 == 0) {
                if (*(long *)(this + 0xa8) == 0) {
                  lVar20 = -1;
                  lVar24 = 0;
                }
                else {
                  lVar24 = *(long *)(*(long *)(this + 0xa8) + -8);
                  lVar20 = lVar24 + -1;
                  if (-1 < lVar20) {
                    CowData<ResourceLoaderBinary::IntResource>::_copy_on_write
                              ((CowData<ResourceLoaderBinary::IntResource> *)(this + 0xa8));
                    pCVar23 = (CowData<char32_t> *)(lVar20 * 0x10 + *(long *)(this + 0xa8));
                    if (*(char **)pCVar23 != local_68) {
                      CowData<char32_t>::_ref(pCVar23,(CowData *)&local_68);
                    }
                    *(long *)(pCVar23 + 8) = lVar18;
                    goto LAB_0010bea0;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar20,lVar24,"p_index","size()",
                           "",false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
              }
LAB_0010bea0:
              iVar15 = iVar15 + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            } while (iVar11 != iVar15);
          }
          itos((long)local_88);
          operator+((char *)&local_68,(String *)"int resources: ");
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          cVar10 = (**(code **)(**(long **)(this + 0x30) + 0x1d8))();
          if (cVar10 != '\0') {
            *(undefined4 *)(this + 0x110) = 0x10;
            Ref<FileAccess>::unref(this_00);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_88._8_8_;
            local_88 = auVar5 << 0x40;
            if (*(long *)(this + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)(this + 8));
            }
            local_90 = 0;
            String::parse_latin1((String *)&local_90,"Premature end of file (EOF): \'%s\'.");
            vformat<String>((CowData<char32_t> *)&local_68,(String *)&local_90,
                            (CowData<char32_t> *)local_88);
            _err_print_error(&_LC126,"core/io/resource_format_binary.cpp",0x461,
                             "Method/function failed.",(CowData<char32_t> *)&local_68,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          }
        }
      }
      else {
        Ref<FileAccess>::unref(this_00);
        uVar14 = *(undefined4 *)(this + 0x28);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_88._8_8_;
        local_88 = auVar7 << 0x40;
        if (*(long *)(this + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)(this + 8));
        }
        local_90 = 0;
        local_68 = 
        "File \'%s\' can\'t be loaded, as it uses a format version (%d) or engine version (%d.%d) which are not supported by your engine version (%s)."
        ;
        local_60 = 0x8a;
        String::parse_latin1((StrRange *)&local_90);
        uVar26 = 0;
        vformat<String,unsigned_int,unsigned_int,unsigned_int,char_const*>
                  ((CowData<char32_t> *)&local_68,(StrRange *)&local_90,
                   (CowData<char32_t> *)local_88,uVar14,uVar12,uVar13,&_LC72);
        _err_print_error(&_LC126,"core/io/resource_format_binary.cpp",0x409,
                         "Method/function failed.",(CowData<char32_t> *)&local_68,0,
                         uVar26 & 0xffffffff00000000);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      }
      goto LAB_0010b24f;
    }
  }
  *(undefined4 *)(this + 0x110) = 0xf;
  if ((*(long *)(this + 0x30) != 0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
    pOVar19 = *(Object **)(this + 0x30);
    cVar10 = predelete_handler(pOVar19);
    if (cVar10 != '\0') {
      (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
      Memory::free_static(pOVar19,false);
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_88._8_8_;
  local_88 = auVar6 << 0x40;
  if (*(long *)(this + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)(this + 8));
  }
  local_90 = 0;
  local_60 = 0x28;
  local_68 = "Unrecognized binary resource file: \'%s\'.";
  String::parse_latin1((StrRange *)&local_90);
  vformat<String>(&local_68,(StrRange *)&local_90,(CowData<char32_t> *)local_88);
  _err_print_error(&_LC126,"core/io/resource_format_binary.cpp",0x3f0,"Method/function failed.",
                   &local_68,0,0);
  pcVar22 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar22 + -0x10,false);
    }
  }
  lVar18 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  uVar17 = local_88._0_8_;
  if (local_88._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_88._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_88._8_8_;
      local_88 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar17 + -0x10),false);
    }
  }
LAB_0010b24f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceLoaderBinary::get_classes_used(Ref<FileAccess>, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */

void ResourceLoaderBinary::get_classes_used(ResourceLoaderBinary *param_1,undefined8 *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58 [3];
  long local_40;
  
  pOVar3 = (Object *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar3 == (Object *)0x0) ||
     (local_58[0] = pOVar3, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_58[0] = (Object *)0x0;
    open(param_1,local_58,0,1);
  }
  else {
    open(param_1,local_58,0,1);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if ((*(int *)(param_1 + 0x110) == 0) && (lVar6 = *(long *)(param_1 + 0xa8), lVar6 != 0)) {
    lVar7 = 0;
    while (lVar7 < *(long *)(lVar6 + -8)) {
      (**(code **)(*(long *)*param_2 + 0x1b8))
                ((long *)*param_2,*(undefined8 *)(lVar6 + 8 + lVar7 * 0x10));
      get_unicode_string();
      iVar5 = (**(code **)(*(long *)*param_2 + 0x250))();
      if (iVar5 != 0) {
        _err_print_error("get_classes_used","core/io/resource_format_binary.cpp",0x3b5,
                         "Condition \"p_f->get_error() != OK\" is true.",0,0);
        lVar6 = local_68;
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
        break;
      }
      local_58[0] = (Object *)0x0;
      cVar4 = String::operator!=((String *)&local_68,(String *)local_58);
      pOVar3 = local_58[0];
      if (local_58[0] != (Object *)0x0) {
        LOCK();
        pOVar2 = local_58[0] + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_58[0] = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if (cVar4 != '\0') {
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((String *)local_58);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      lVar6 = local_68;
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
      lVar6 = *(long *)(param_1 + 0xa8);
      lVar7 = lVar7 + 1;
      if (lVar6 == 0) break;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::get_classes_used(String const&, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> >*) */

void __thiscall
ResourceFormatLoaderBinary::get_classes_used
          (ResourceFormatLoaderBinary *this,String *param_1,HashSet *param_2)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_1a0;
  undefined8 local_198;
  Object *local_190;
  char *local_188;
  long local_180;
  long lStack_178;
  undefined1 local_170 [16];
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_138 [16];
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  lStack_178 = local_180;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1a0,(int)param_1,(Error *)0x1);
  if (local_1a0 == (Object *)0x0) {
    local_190 = (Object *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)param_1);
    }
    local_198 = 0;
    local_180 = 0x16;
    local_188 = "Cannot open file \'%s\'.";
    String::parse_latin1((StrRange *)&local_198);
    vformat<String>((CowData<char32_t> *)&local_188,(StrRange *)&local_198,
                    (CowData<char32_t> *)&local_190);
    _err_print_error("get_classes_used","core/io/resource_format_binary.cpp",0x5f4,
                     "Condition \"f.is_null()\" is true.",(CowData<char32_t> *)&local_188,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
    goto joined_r0x0010c8ed;
  }
  local_188 = (char *)((ulong)local_188 & 0xffffffffffffff00);
  local_118 = 0;
  local_180 = 0;
  lStack_178 = 0;
  local_170 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = _LC116;
  uStack_78 = _UNK_00121928;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffffffffffff;
  local_120 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_b0 = _LC116;
  local_70 = 1;
  local_40 = _LC116;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_190);
  lVar3 = local_180;
  pOVar2 = local_190;
  if ((Object *)local_180 == local_190) {
    pOVar5 = local_190;
    if (local_190 != (Object *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_190 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pOVar5 = (Object *)local_180;
      if (*plVar1 == 0) {
        local_190 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar2 + -0x10),false);
        pOVar5 = (Object *)local_180;
      }
    }
  }
  else {
    if (local_180 != 0) {
      LOCK();
      plVar1 = (long *)(local_180 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    local_180 = (long)local_190;
    pOVar5 = local_190;
  }
  if ((Object *)lStack_178 != pOVar5) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_178,(CowData *)&local_180);
  }
  pOVar2 = local_1a0;
  if (local_1a0 == (Object *)0x0) {
LAB_0010c710:
    local_190 = (Object *)0x0;
    ResourceLoaderBinary::get_classes_used(&local_188,(String *)&local_190,param_2);
  }
  else {
    local_190 = local_1a0;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') goto LAB_0010c710;
    ResourceLoaderBinary::get_classes_used(&local_188,(String *)&local_190,param_2);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_188);
joined_r0x0010c8ed:
  if (((local_1a0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_1a0), cVar4 != '\0')) {
    (**(code **)(*(long *)local_1a0 + 0x140))(local_1a0);
    Memory::free_static(local_1a0,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderBinary::get_dependencies(Ref<FileAccess>, List<String, DefaultAllocator>*, bool) */

void __thiscall
ResourceLoaderBinary::get_dependencies
          (ResourceLoaderBinary *this,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pOVar2 = (Object *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar2 == (Object *)0x0) ||
     (local_38 = pOVar2, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_38 = (Object *)0x0;
    open(this,&local_38,0,1);
    iVar1 = *(int *)(this + 0x110);
  }
  else {
    open(this,&local_38,0,1);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    iVar1 = *(int *)(this + 0x110);
  }
  if (iVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      get_dependencies(this,param_3,param_4);
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderBinary::load
                 (long *param_1,undefined8 param_2,CowData *param_3,CowData *param_4,int *param_5,
                 undefined1 param_6,undefined8 param_7,uint param_8)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  bool bVar8;
  int local_1b4;
  Object *local_1b0;
  long local_1a8;
  Object *local_1a0;
  char *local_198;
  long local_190;
  long lStack_188;
  undefined1 local_180 [16];
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  lStack_188 = local_190;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (int *)0x0) {
    *param_5 = 0xc;
  }
  FileAccess::open((String *)&local_1b0,(int)param_3,(Error *)0x1);
  if (local_1b4 != 0) {
    local_1a0 = (Object *)0x0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,param_3);
    }
    local_1a8 = 0;
    local_190 = 0x16;
    local_198 = "Cannot open file \'%s\'.";
    String::parse_latin1((StrRange *)&local_1a8);
    vformat<String>((CowData<char32_t> *)&local_198,(StrRange *)&local_1a8,
                    (CowData<char32_t> *)&local_1a0);
    _err_print_error(&_LC121,"core/io/resource_format_binary.cpp",0x4c9,
                     "Condition \"err != OK\" is true. Returning: Ref<Resource>()",
                     (CowData<char32_t> *)&local_198,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
    *param_1 = 0;
    goto LAB_0010ccf6;
  }
  local_198 = (char *)((ulong)local_198 & 0xffffffffffffff00);
  local_128 = 0;
  local_190 = 0;
  lStack_188 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0xffffffffffffffff;
  local_130 = 0;
  local_120 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_c0 = _LC116;
  uStack_80 = 1;
  local_50 = _LC116;
  local_180 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = _LC116;
  iStack_88 = (int)_UNK_00121928;
  uStack_84 = (uint)((ulong)_UNK_00121928 >> 0x20);
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (param_8 == 3) {
    uStack_84 = (uint)_LC144;
    uStack_80 = (undefined4)((ulong)_LC144 >> 0x20);
  }
  else if (param_8 < 4) {
    uStack_84 = param_8;
  }
  else if (param_8 == 4) {
    uStack_84 = (uint)_LC25;
    uStack_80 = (undefined4)((ulong)_LC25 >> 0x20);
  }
  lVar5 = *(long *)param_4;
  local_110 = param_7;
  if ((lVar5 == 0) || (*(uint *)(lVar5 + -8) < 2)) {
    local_1a8 = 0;
    lVar5 = *(long *)param_3;
    param_4 = param_3;
    if (lVar5 != 0) goto LAB_0010cbc1;
  }
  else {
LAB_0010cbc1:
    local_1a8 = 0;
    plVar1 = (long *)(lVar5 + -0x10);
    do {
      lVar5 = *plVar1;
      if (lVar5 == 0) goto LAB_0010cbe6;
      LOCK();
      lVar6 = *plVar1;
      bVar8 = lVar5 == lVar6;
      if (bVar8) {
        *plVar1 = lVar5 + 1;
        lVar6 = lVar5;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar6 != -1) {
      local_1a8 = *(long *)param_4;
    }
  }
LAB_0010cbe6:
  local_118 = param_6;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_1a0);
  lVar5 = local_190;
  pOVar2 = local_1a0;
  if ((Object *)local_190 == local_1a0) {
    pOVar7 = local_1a0;
    if (local_1a0 != (Object *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_1a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pOVar7 = (Object *)local_190;
      if (*plVar1 == 0) {
        local_1a0 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar2 + -0x10),false);
        pOVar7 = (Object *)local_190;
      }
    }
  }
  else {
    if (local_190 != 0) {
      LOCK();
      plVar1 = (long *)(local_190 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_190 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_190 = (long)local_1a0;
    pOVar7 = local_1a0;
  }
  if ((Object *)lStack_188 != pOVar7) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_188,(CowData *)&local_190);
  }
  pOVar2 = local_1b0;
  if (local_1b0 == (Object *)0x0) {
LAB_0010cc8a:
    local_1a0 = (Object *)0x0;
    ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_198,(String *)&local_1a0,0,0);
    if (iStack_88 != 0) goto LAB_0010ccb0;
LAB_0010cd8b:
    iVar4 = ResourceLoaderBinary::load((ResourceLoaderBinary *)&local_198);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar4;
    }
    if (iVar4 != 0) goto LAB_0010ccbb;
    *param_1 = 0;
    if (local_180._8_8_ != 0) {
      *param_1 = local_180._8_8_;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *param_1 = 0;
      }
    }
  }
  else {
    local_1a0 = local_1b0;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') goto LAB_0010cc8a;
    ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_198,(String *)&local_1a0,0,0);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    if (iStack_88 == 0) goto LAB_0010cd8b;
LAB_0010ccb0:
    if (param_5 != (int *)0x0) {
      *param_5 = iStack_88;
    }
LAB_0010ccbb:
    *param_1 = 0;
  }
  lVar5 = local_1a8;
  if (local_1a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_1a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1a8 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_198);
LAB_0010ccf6:
  if (((local_1b0 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_1b0), cVar3 != '\0')) {
    (**(code **)(*(long *)local_1b0 + 0x140))(local_1b0);
    Memory::free_static(local_1b0,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::rename_dependencies(String const&, HashMap<String, String,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&) */

int __thiscall
ResourceFormatLoaderBinary::rename_dependencies
          (ResourceFormatLoaderBinary *this,String *param_1,HashMap *param_2)

{
  code *pcVar1;
  bool bVar2;
  Object *pOVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  Ref *pRVar13;
  long lVar14;
  long lVar15;
  Ref<FileAccess> *pRVar16;
  Ref *pRVar17;
  int iVar18;
  long in_FS_OFFSET;
  Ref RVar19;
  ulong uVar20;
  Ref<FileAccess> *local_210;
  Ref<FileAccess> *local_200;
  Object *local_1d0;
  Ref *local_1c8;
  long local_1c0;
  Ref *local_1b8;
  Ref *local_1b0;
  Object *local_1a8;
  long local_1a0;
  Ref *local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148 [16];
  undefined8 local_130;
  undefined2 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  char local_48;
  char local_47;
  char local_46;
  char local_45;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1d0,(int)param_1,(Error *)0x1);
  if (local_1d0 == (Object *)0x0) {
    local_1a0 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)param_1);
    }
    local_1a8 = (Object *)0x0;
    iVar6 = 0x13;
    local_190._0_8_ = 0x16;
    local_198 = (Ref *)0x113bb3;
    String::parse_latin1((StrRange *)&local_1a8);
    vformat<String>((CowData<char32_t> *)&local_198,(StrRange *)&local_1a8,
                    (CowData<char32_t> *)&local_1a0);
    _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x520,
                     "Condition \"f.is_null()\" is true. Returning: ERR_CANT_OPEN",
                     (CowData<char32_t> *)&local_198,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
    goto LAB_0010d0e9;
  }
  local_1c8 = (Ref *)0x0;
  String::get_base_dir();
  (**(code **)(*(long *)local_1d0 + 0x220))(local_1d0,&local_48,4);
  if ((local_48 == 'R') && (local_47 == 'S')) {
    if (local_46 == 'C') {
      if (local_45 == 'C') {
        local_1b8 = (Ref *)0x0;
        Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_1b8);
        pRVar17 = local_1b8;
        local_198 = (Ref *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,(Ref *)local_1d0);
        iVar6 = FileAccessCompressed::open_after_magic(pRVar17);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
        if (iVar6 == 0) {
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1d0,pRVar17);
          local_1b0 = (Ref *)0x0;
          Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_1b0);
          pRVar17 = local_1b0;
          local_198 = (Ref *)0x0;
          String::parse_latin1((String *)&local_198,"RSCC");
          FileAccessCompressed::configure(pRVar17,(Ref<FileAccess> *)&local_198,2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          pcVar1 = *(code **)(*(long *)pRVar17 + 0x188);
          local_1a0 = 0;
          String::parse_latin1((String *)&local_1a0,".depren");
          String::operator+((String *)&local_198,param_1);
          iVar6 = (*pcVar1)(pRVar17,(Ref<FileAccess> *)&local_198,2);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          if (iVar6 == 0) {
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1c8,pRVar17);
            Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_1b0);
            Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_1b8);
            pRVar17 = local_1c8;
            goto LAB_0010d23d;
          }
          local_1a0 = 0;
          if (*(long *)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)param_1);
          }
          local_1a8 = (Object *)0x0;
          String::parse_latin1((String *)&local_1a8,"Cannot create file \'%s.depren\'.");
          vformat<String>((Ref<FileAccess> *)&local_198,(String *)&local_1a8,(String *)&local_1a0);
          _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x534,
                           "Condition \"err\" is true. Returning: ERR_FILE_CORRUPT",
                           (Ref<FileAccess> *)&local_198,0,0,param_1);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          iVar6 = 0x10;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_1b0);
        }
        else {
          local_1a0 = 0;
          if (*(long *)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)param_1);
          }
          local_1a8 = (Object *)0x0;
          String::parse_latin1((String *)&local_1a8,"Cannot open file \'%s\'.");
          pRVar16 = (Ref<FileAccess> *)&local_198;
          vformat<String>((Ref<FileAccess> *)&local_198,(String *)&local_1a8,
                          (CowData<char32_t> *)&local_1a0);
          _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x52d,
                           "Condition \"err != OK\" is true. Returning: err",
                           (Ref<FileAccess> *)&local_198,0,0,pRVar16);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
        }
        Ref<FileAccessCompressed>::unref((Ref<FileAccessCompressed> *)&local_1b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
        goto LAB_0010d0e9;
      }
    }
    else if ((local_46 == 'R') && (local_45 == 'C')) {
      local_1a8 = (Object *)0x0;
      local_198 = (Ref *)0x113de1;
      local_190._0_8_ = 7;
      String::parse_latin1((StrRange *)&local_1a8);
      String::operator+((String *)&local_1a0,param_1);
      FileAccess::open((String *)&local_198,(int)(String *)&local_1a0,(Error *)0x2);
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1c8,local_198);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
      pRVar17 = local_1c8;
      if (local_1c8 == (Ref *)0x0) {
        local_1a0 = 0;
        if (*(long *)param_1 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)param_1);
        }
        local_1a8 = (Object *)0x0;
        iVar6 = 0x14;
        String::parse_latin1((String *)&local_1a8,"Cannot create file \'%s.depren\'.");
        vformat<String>((String *)&local_198,(StrRange *)&local_1a8,(String *)&local_1a0);
        _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x53d,
                         "Condition \"fw.is_null()\" is true. Returning: ERR_CANT_CREATE",
                         (String *)&local_198,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
        goto LAB_0010d0e9;
      }
      local_44 = 0x43525352;
      (**(code **)(*(long *)local_1c8 + 0x2d0))(local_1c8,&local_44,4);
LAB_0010d23d:
      local_200 = (Ref<FileAccess> *)&local_1c8;
      local_210 = (Ref<FileAccess> *)&local_1a8;
      iVar6 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
      RVar19 = (Ref)(iVar6 != 0);
      iVar6 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
      if (*(code **)(*(long *)local_1d0 + 0x248) == FileAccess::set_big_endian) {
        *(Ref *)(local_1d0 + 0x17c) = RVar19;
      }
      else {
        (**(code **)(*(long *)local_1d0 + 0x248))(local_1d0,RVar19);
      }
      (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,RVar19);
      lVar12 = *(long *)pRVar17;
      if (*(code **)(lVar12 + 0x248) == FileAccess::set_big_endian) {
        pRVar17[0x17c] = RVar19;
      }
      else {
        (**(code **)(lVar12 + 0x248))(pRVar17,RVar19);
        lVar12 = *(long *)pRVar17;
      }
      (**(code **)(lVar12 + 0x278))(pRVar17,iVar6 != 0);
      uVar7 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
      uVar8 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
      uVar9 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
      if (uVar9 == 0) {
        Ref<FileAccess>::unref(local_200);
        DirAccess::create(local_210,2);
        pOVar3 = local_1a8;
        pcVar1 = *(code **)(*(long *)local_1a8 + 0x208);
        local_1a0 = 0;
        String::parse_latin1((String *)&local_1a0,".depren");
        String::operator+((String *)&local_198,param_1);
        (*pcVar1)(pOVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
        if (((local_1a8 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar3 = local_1a8, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_1a8), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        local_1a0 = 0;
        if (*(long *)param_1 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)param_1);
        }
        local_1a8 = (Object *)0x0;
        String::parse_latin1
                  ((String *)local_210,
                   "This file is old, so it can\'t refactor dependencies, opening and resaving \'%s\'."
                  );
        vformat<String>((Ref<FileAccess> *)&local_198,local_210,(CowData<char32_t> *)&local_1a0);
        _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x55d,
                         (Ref<FileAccess> *)&local_198,0,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
        FileAccess::open((String *)&local_198,(int)param_1,(Error *)0x1);
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1d0,local_198);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
        if ((int)local_1b0 == 0) {
          local_128 = 0;
          local_190 = (undefined1  [16])0x0;
          local_180 = (undefined1  [16])0x0;
          local_148 = (undefined1  [16])0x0;
          local_e0 = (undefined1  [16])0x0;
          local_d0 = (undefined1  [16])0x0;
          local_b0 = (undefined1  [16])0x0;
          local_a0 = (undefined1  [16])0x0;
          local_90 = _LC116;
          uStack_88 = _UNK_00121928;
          local_70 = (undefined1  [16])0x0;
          local_60 = (undefined1  [16])0x0;
          local_198 = (Ref *)((ulong)local_198 & 0xffffffffffffff00);
          local_170 = 0;
          local_168 = 0;
          local_160 = 0;
          local_158 = 0xffffffffffffffff;
          local_130 = 0;
          local_120 = 0;
          local_118 = 0;
          local_110 = 0;
          local_100 = 0;
          local_f0 = 0;
          local_c0 = _LC116;
          local_80 = 1;
          local_50 = _LC116;
          ProjectSettings::get_singleton();
          ProjectSettings::localize_path((String *)&local_1a0);
          if (local_190._0_8_ != local_1a0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
            lVar12 = local_1a0;
            local_1a0 = 0;
            local_190._0_8_ = lVar12;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          if (local_190._8_8_ != local_190._0_8_) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(local_190 + 8),(CowData *)local_190);
          }
          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
          ::operator=(local_b8,param_2);
          local_1a0 = 0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1a0,(Ref *)local_1d0);
          ResourceLoaderBinary::open
                    ((ResourceLoaderBinary *)&local_198,(CowData<char32_t> *)&local_1a0,0,0);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1a0);
          iVar6 = (int)uStack_88;
          if ((int)uStack_88 == 0) {
            iVar6 = ResourceLoaderBinary::load((ResourceLoaderBinary *)&local_198);
          }
          local_1b0 = (Ref *)CONCAT44(local_1b0._4_4_,iVar6);
          if (iVar6 == 0x12) {
            local_1a0 = 0;
            Ref<Resource>::operator=((Ref<Resource> *)&local_1a0,(Ref *)local_180._8_8_);
            if (local_1a0 == 0) {
              iVar6 = 0x10;
              _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x56e,
                               "Condition \"res.is_null()\" is true. Returning: ERR_FILE_CORRUPT",0,
                               0);
            }
            else {
              iVar6 = (**(code **)(*ResourceFormatSaverBinary::singleton + 0x150))
                                (ResourceFormatSaverBinary::singleton,
                                 (CowData<char32_t> *)&local_1a0,param_1,0);
            }
            Ref<Resource>::unref((Ref<Resource> *)&local_1a0);
          }
          else {
            iVar6 = 0x10;
            _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x56c,
                             "Condition \"err != ERR_FILE_EOF\" is true. Returning: ERR_FILE_CORRUPT"
                             ,0,0);
          }
          ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_198);
          pRVar17 = local_1c8;
        }
        else {
          local_1a0 = 0;
          if (*(long *)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)param_1);
          }
          local_1a8 = (Object *)0x0;
          String::parse_latin1((String *)local_210,"Cannot open file \'%s\'.");
          vformat<String>((Ref<FileAccess> *)&local_198,local_210,(CowData<char32_t> *)&local_1a0);
          iVar6 = 0xc;
          _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x562,
                           "Condition \"err != OK\" is true. Returning: ERR_FILE_CANT_OPEN",
                           (Ref<FileAccess> *)&local_198,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          pRVar17 = local_1c8;
        }
LAB_0010e066:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
        if (pRVar17 == (Ref *)0x0) goto LAB_0010d0e9;
      }
      else {
        if (6 < uVar9 || 4 < uVar7) {
          local_1a0 = 0;
          if (local_1c0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)&local_1c0);
          }
          local_1a8 = (Object *)0x0;
          String::parse_latin1
                    ((String *)local_210,
                     "File \'%s\' can\'t be loaded, as it uses a format version (%d) or engine version (%d.%d) which are not supported by your engine version (%s)."
                    );
          uVar20 = 0;
          iVar6 = 0xf;
          vformat<String,unsigned_int,unsigned_int,unsigned_int,char_const*>
                    ((Ref<FileAccess> *)&local_198,local_210,(CowData<char32_t> *)&local_1a0,uVar9,
                     uVar7,uVar8,&_LC72);
          _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x574,
                           "Method/function failed. Returning: ERR_FILE_UNRECOGNIZED",
                           (Ref<FileAccess> *)&local_198,0,uVar20 & 0xffffffff00000000);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          goto LAB_0010e066;
        }
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,uVar7);
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,uVar8);
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,uVar9);
        local_1a8 = (Object *)0x0;
        Ref<FileAccess>::operator=(local_210,(Ref *)local_1d0);
        get_ustring((CowData<char32_t> *)&local_1a0,local_210);
        local_198 = (Ref *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,pRVar17);
        save_ustring((Ref<FileAccess> *)&local_198,(CowData<char32_t> *)&local_1a0);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
        Ref<FileAccess>::unref(local_210);
        uVar10 = (**(code **)(*(long *)local_1d0 + 0x1c8))();
        (**(code **)(*(long *)local_1d0 + 0x1f8))();
        (**(code **)(*(long *)pRVar17 + 0x280))(pRVar17,0);
        uVar7 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
        uVar11 = (**(code **)(*(long *)local_1d0 + 0x1f8))();
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,uVar7);
        (**(code **)(*(long *)pRVar17 + 0x280))(pRVar17,uVar11);
        if ((uVar7 & 8) != 0) {
          local_1a8 = (Object *)0x0;
          Ref<FileAccess>::operator=(local_210,(Ref *)local_1d0);
          get_ustring((CowData<char32_t> *)&local_1a0,local_210);
          local_198 = (Ref *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,pRVar17);
          save_ustring((Ref<FileAccess> *)&local_198,(CowData<char32_t> *)&local_1a0);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          Ref<FileAccess>::unref(local_210);
        }
        iVar6 = 0xb;
        do {
          (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,0);
          (**(code **)(*(long *)local_1d0 + 0x1f0))();
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar6 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,iVar6);
        if (iVar6 != 0) {
          iVar18 = 0;
          do {
            iVar18 = iVar18 + 1;
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,(Ref *)local_1d0);
            get_ustring((CowData<char32_t> *)&local_1a0,(Ref<FileAccess> *)&local_198);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,pRVar17);
            save_ustring((Ref<FileAccess> *)&local_198,(CowData<char32_t> *)&local_1a0);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          } while (iVar6 != iVar18);
        }
        iVar6 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,iVar6);
        iVar18 = 0;
        if (iVar6 != 0) {
          do {
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,(Ref *)local_1d0);
            get_ustring((CowData<char32_t> *)&local_1b0,(Ref<FileAccess> *)&local_198);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,(Ref *)local_1d0);
            get_ustring(local_210,(Ref<FileAccess> *)&local_198);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            if ((((uVar7 & 2) != 0) &&
                (lVar12 = (**(code **)(*(long *)local_1d0 + 0x1f8))(), lVar12 != -1)) &&
               (cVar4 = ResourceUID::has_id(ResourceUID::singleton), cVar4 != '\0')) {
              ResourceUID::get_id_path((long)&local_198);
              if (local_1a8 != (Object *)local_198) {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
                local_1a8 = (Object *)local_198;
                local_198 = (Ref *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
            }
            bVar2 = false;
            cVar4 = String::begins_with((char *)local_210);
            if (cVar4 == '\0') {
              String::path_join((String *)&local_1a0);
              String::simplify_path();
              if (local_1a8 != (Object *)local_198) {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
                local_1a8 = (Object *)local_198;
                local_198 = (Ref *)0x0;
              }
              bVar2 = true;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
            }
            local_198 = (Ref *)((ulong)local_198 & 0xffffffff00000000);
            cVar4 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                   *)param_2,(String *)local_210,(uint *)&local_198);
            if (cVar4 != '\0') {
              local_198 = (Ref *)((ulong)local_198 & 0xffffffff00000000);
              cVar4 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                      ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                     *)param_2,(String *)local_210,(uint *)&local_198);
              if (cVar4 == '\0') {
                _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                 "FATAL: Condition \"!exists\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              lVar12 = *(long *)(*(long *)(param_2 + 8) + ((ulong)local_198 & 0xffffffff) * 8);
              local_198 = (Ref *)0x0;
              pRVar13 = *(Ref **)(lVar12 + 0x18);
              if (pRVar13 != (Ref *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)(lVar12 + 0x18));
                pRVar13 = local_198;
              }
              if (local_1a8 != (Object *)pRVar13) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_210,(CowData *)&local_198);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
            }
            local_1a0 = 0;
            if (local_1a8 != (Object *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)local_210);
            }
            if (bVar2) {
              String::path_to_file((String *)&local_198);
              if (local_1a8 != (Object *)local_198) {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
                local_1a8 = (Object *)local_198;
                local_198 = (Ref *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
            }
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,pRVar17);
            save_ustring((Ref<FileAccess> *)&local_198,(CowData<char32_t> *)&local_1b0);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,pRVar17);
            save_ustring((Ref<FileAccess> *)&local_198);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            if ((uVar7 & 2) != 0) {
              uVar11 = ResourceSaver::get_resource_id_for_path((String *)&local_1a0,false);
              (**(code **)(*(long *)pRVar17 + 0x280))(pRVar17,uVar11);
            }
            iVar18 = iVar18 + 1;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
          } while (iVar6 != iVar18);
        }
        lVar12 = (**(code **)(*(long *)pRVar17 + 0x1c8))(pRVar17);
        lVar14 = (**(code **)(*(long *)local_1d0 + 0x1c8))();
        iVar6 = (**(code **)(*(long *)local_1d0 + 0x1f0))();
        (**(code **)(*(long *)pRVar17 + 0x278))(pRVar17,iVar6);
        if (iVar6 != 0) {
          iVar18 = 0;
          do {
            iVar18 = iVar18 + 1;
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,(Ref *)local_1d0);
            get_ustring((CowData<char32_t> *)&local_1a0,(Ref<FileAccess> *)&local_198);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            lVar15 = (**(code **)(*(long *)local_1d0 + 0x1f8))();
            local_198 = (Ref *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_198,pRVar17);
            save_ustring((Ref<FileAccess> *)&local_198,(CowData<char32_t> *)&local_1a0);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_198);
            (**(code **)(*(long *)pRVar17 + 0x280))(pRVar17,lVar15 + (lVar12 - lVar14));
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          } while (iVar6 != iVar18);
        }
        while( true ) {
          uVar5 = (**(code **)(*(long *)local_1d0 + 0x1e0))();
          cVar4 = (**(code **)(*(long *)local_1d0 + 0x1d8))();
          if (cVar4 != '\0') break;
          (**(code **)(*(long *)pRVar17 + 0x268))(pRVar17,uVar5);
        }
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1d0);
        iVar6 = (**(code **)(*(long *)pRVar17 + 0x250))(pRVar17);
        (**(code **)(*(long *)pRVar17 + 0x1b8))(pRVar17,uVar10);
        (**(code **)(*(long *)pRVar17 + 0x280))(pRVar17);
        if (iVar6 == 0) {
          Ref<FileAccess>::unref(local_200);
          DirAccess::create(&local_1b0,0);
          local_1a0 = 0;
          String::parse_latin1((String *)&local_1a0,".depren");
          String::operator+((String *)&local_198,param_1);
          cVar4 = DirAccess::exists((String *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
          pRVar17 = local_1b0;
          if (cVar4 != '\0') {
            pcVar1 = *(code **)(*(long *)local_1b0 + 0x208);
            local_198 = (Ref *)0x0;
            if (*(long *)param_1 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)param_1);
            }
            (*pcVar1)(pRVar17,(Ref<FileAccess> *)&local_198);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
            pRVar17 = local_1b0;
            pcVar1 = *(code **)(*(long *)local_1b0 + 0x200);
            local_198 = (Ref *)0x0;
            if (*(long *)param_1 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)param_1);
            }
            local_1a8 = (Object *)0x0;
            String::parse_latin1((String *)local_210,".depren");
            String::operator+((String *)&local_1a0,param_1);
            (*pcVar1)(pRVar17,(CowData<char32_t> *)&local_1a0,(Ref<FileAccess> *)&local_198);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_210);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          }
          iVar6 = 0;
          pRVar17 = local_1c8;
          if (((local_1b0 != (Ref *)0x0) &&
              (cVar4 = RefCounted::unreference(), pRVar13 = local_1b0, pRVar17 = local_1c8,
              cVar4 != '\0')) &&
             (cVar4 = predelete_handler((Object *)local_1b0), pRVar17 = local_1c8, cVar4 != '\0')) {
            (**(code **)(*(long *)pRVar13 + 0x140))(pRVar13);
            Memory::free_static(pRVar13,false);
            pRVar17 = local_1c8;
          }
          goto LAB_0010e066;
        }
        iVar6 = 0x14;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar17), cVar4 != '\0')) {
        (**(code **)(*(long *)pRVar17 + 0x140))(pRVar17);
        Memory::free_static(pRVar17,false);
      }
      goto LAB_0010d0e9;
    }
  }
  local_1a0 = 0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a0,(CowData *)&local_1c0);
  }
  local_1a8 = (Object *)0x0;
  iVar6 = 0xf;
  local_190._0_8_ = 0x27;
  local_198 = (Ref *)0x116410;
  String::parse_latin1((StrRange *)&local_1a8);
  vformat<String>((CowData<char32_t> *)&local_198,(StrRange *)&local_1a8,
                  (CowData<char32_t> *)&local_1a0);
  _err_print_error("rename_dependencies","core/io/resource_format_binary.cpp",0x53a,
                   "Method/function failed. Returning: ERR_FILE_UNRECOGNIZED",
                   (CowData<char32_t> *)&local_198,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
LAB_0010d0e9:
  if (((local_1d0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_1d0), cVar4 != '\0')) {
    (**(code **)(*(long *)local_1d0 + 0x140))(local_1d0);
    Memory::free_static(local_1d0,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::get_resource_uid(String const&) const */

undefined8 __thiscall
ResourceFormatLoaderBinary::get_resource_uid(ResourceFormatLoaderBinary *this,String *param_1)

{
  long *plVar1;
  Object *pOVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  char cVar6;
  Object *pOVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  long local_190;
  Object *local_188;
  Object *local_180;
  ulong local_178;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined8 local_110;
  undefined2 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  uVar5 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar1 = (long *)(local_178 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(uVar5 - 0x10),false);
    }
  }
  StringName::StringName((StringName *)&local_178,(String *)&local_190,false);
  cVar6 = ClassDB::is_resource_extension((StringName *)&local_178);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  if (cVar6 == '\0') {
    uVar8 = 0xffffffffffffffff;
    goto LAB_0010e97a;
  }
  FileAccess::open((String *)&local_188,(int)param_1,(Error *)0x1);
  uVar8 = 0xffffffffffffffff;
  if (local_188 == (Object *)0x0) goto LAB_0010e97a;
  local_178 = local_178 & 0xffffffffffffff00;
  local_170 = (undefined1  [16])0x0;
  local_108 = 0;
  local_160 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_70 = _LC116;
  uStack_68 = _UNK_00121928;
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0xffffffffffffffff;
  local_110 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_a0 = _LC116;
  local_60 = 1;
  local_30 = _LC116;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_180);
  pOVar7 = local_180;
  uVar8 = local_170._0_8_;
  if ((Object *)local_170._0_8_ == local_180) {
    if (local_180 != (Object *)0x0) {
      LOCK();
      pOVar2 = local_180 + -0x10;
      *(long *)pOVar2 = *(long *)pOVar2 + -1;
      UNLOCK();
      if (*(long *)pOVar2 == 0) {
        local_180 = (Object *)0x0;
        Memory::free_static(pOVar7 + -0x10,false);
      }
      pOVar7 = (Object *)local_170._0_8_;
    }
  }
  else {
    if ((Object *)local_170._0_8_ != (Object *)0x0) {
      LOCK();
      pOVar7 = (Object *)(local_170._0_8_ + -0x10);
      *(long *)pOVar7 = *(long *)pOVar7 + -1;
      UNLOCK();
      if (*(long *)pOVar7 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_170._8_8_;
        local_170 = auVar3 << 0x40;
        Memory::free_static((Object *)(uVar8 + -0x10),false);
      }
    }
    local_170._0_8_ = local_180;
    pOVar7 = local_180;
  }
  if (pOVar7 != (Object *)local_170._8_8_) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_170 + 8),(CowData *)local_170);
  }
  pOVar7 = local_188;
  if (local_188 == (Object *)0x0) {
LAB_0010e932:
    local_180 = (Object *)0x0;
    ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_178,(String *)&local_180,1,0);
  }
  else {
    local_180 = local_188;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') goto LAB_0010e932;
    ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_178,(String *)&local_180,1,0);
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar7), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  uVar8 = 0xffffffffffffffff;
  if ((int)uStack_68 == 0) {
    uVar8 = local_138;
  }
  ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_178);
  if (((local_188 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_188), cVar6 != '\0')) {
    (**(code **)(*(long *)local_188 + 0x140))(local_188);
    Memory::free_static(local_188,false);
  }
LAB_0010e97a:
  lVar4 = local_190;
  if (local_190 != 0) {
    LOCK();
    plVar1 = (long *)(local_190 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_190 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceFormatLoaderBinary::get_dependencies(String const&, List<String, DefaultAllocator>*,
   bool) */

void __thiscall
ResourceFormatLoaderBinary::get_dependencies
          (ResourceFormatLoaderBinary *this,String *param_1,List *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_1a0;
  undefined8 local_198;
  Object *local_190;
  char *local_188;
  long local_180;
  long lStack_178;
  undefined1 local_170 [16];
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_138 [16];
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  lStack_178 = local_180;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_1a0,(int)param_1,(Error *)0x1);
  if (local_1a0 == (Object *)0x0) {
    local_190 = (Object *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)param_1);
    }
    local_198 = 0;
    local_180 = 0x16;
    local_188 = "Cannot open file \'%s\'.";
    String::parse_latin1((StrRange *)&local_198);
    vformat<String>((CowData<char32_t> *)&local_188,(StrRange *)&local_198,
                    (CowData<char32_t> *)&local_190);
    _err_print_error("get_dependencies","core/io/resource_format_binary.cpp",0x516,
                     "Condition \"f.is_null()\" is true.",(CowData<char32_t> *)&local_188,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
    goto joined_r0x0010ef4f;
  }
  local_188 = (char *)((ulong)local_188 & 0xffffffffffffff00);
  local_180 = 0;
  lStack_178 = 0;
  local_118 = 0;
  local_170 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = _LC116;
  uStack_78 = _UNK_00121928;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffffffffffff;
  local_120 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_b0 = _LC116;
  local_70 = 1;
  local_40 = _LC116;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_190);
  lVar2 = local_180;
  pOVar5 = local_190;
  if ((Object *)local_180 == local_190) {
    pOVar4 = local_190;
    if (local_190 != (Object *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_190 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pOVar4 = (Object *)local_180;
      if (*plVar1 == 0) {
        local_190 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar5 + -0x10),false);
        pOVar4 = (Object *)local_180;
      }
    }
  }
  else {
    if (local_180 != 0) {
      LOCK();
      plVar1 = (long *)(local_180 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_180 = (long)local_190;
    pOVar4 = local_190;
  }
  if ((Object *)lStack_178 != pOVar4) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_178,(CowData *)&local_180);
  }
  pOVar5 = local_1a0;
  if ((local_1a0 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_190 = (Object *)0x0;
    pOVar5 = (Object *)0x0;
    ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_188,(String *)&local_190,0,1);
    if ((int)uStack_78 == 0) {
LAB_0010ecae:
      ResourceLoaderBinary::get_dependencies(&local_188,param_2,param_3);
      if (pOVar5 != (Object *)0x0) goto LAB_0010ecc2;
    }
  }
  else {
    local_190 = pOVar5;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_190 = (Object *)0x0;
      ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_188,(String *)&local_190,0,1);
joined_r0x0010ed65:
      if ((int)uStack_78 == 0) goto LAB_0010ecae;
    }
    else {
      ResourceLoaderBinary::open((ResourceLoaderBinary *)&local_188,(String *)&local_190,0,1);
      cVar3 = RefCounted::unreference();
      if ((cVar3 == '\0') || (cVar3 = predelete_handler(pOVar5), cVar3 == '\0')) {
        goto joined_r0x0010ed65;
      }
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
      if ((int)uStack_78 == 0) {
        ResourceLoaderBinary::get_dependencies((ResourceLoaderBinary *)&local_188,param_2,param_3);
      }
    }
LAB_0010ecc2:
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  ResourceLoaderBinary::~ResourceLoaderBinary((ResourceLoaderBinary *)&local_188);
joined_r0x0010ef4f:
  if (((local_1a0 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_1a0), cVar3 != '\0')) {
    (**(code **)(*(long *)local_1a0 + 0x140))(local_1a0);
    Memory::free_static(local_1a0,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<Resource> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Resource>>::_copy_on_write(CowData<Ref<Resource>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Vector<unsigned long>::push_back(unsigned long) [clone .isra.0] */

void __thiscall Vector<unsigned_long>::push_back(Vector<unsigned_long> *this,ulong param_1)

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
  iVar1 = CowData<unsigned_long>::resize<false>((CowData<unsigned_long> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<unsigned_long>::_copy_on_write((CowData<unsigned_long> *)(this + 8));
        *(ulong *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* ResourceFormatSaverBinaryInstance::_find_resources(Variant const&, bool) */

void __thiscall
ResourceFormatSaverBinaryInstance::_find_resources
          (ResourceFormatSaverBinaryInstance *this,Variant *param_1,bool param_2)

{
  _Data *this_00;
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
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
  List *pLVar27;
  undefined8 uVar28;
  char cVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  ulong uVar34;
  Variant *pVVar35;
  undefined1 (*pauVar36) [16];
  undefined4 *puVar37;
  long lVar38;
  Variant *pVVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  Object *local_f8;
  List *local_b0;
  long *local_a8;
  long local_a0;
  undefined1 local_98 [16];
  Variant *local_88;
  size_t local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar41 = *(uint *)param_1;
  if (uVar41 == 0x1b) {
    ::Variant::operator_cast_to_Dictionary((Variant *)local_98);
    Dictionary::get_typed_key_script();
    _find_resources(this,(Variant *)&local_58,false);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    Dictionary::get_typed_value_script();
    _find_resources(this,(Variant *)&local_58,false);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    local_88 = (Variant *)0x0;
    Dictionary::get_key_list((List *)local_98);
    if (local_88 != (Variant *)0x0) {
      for (pVVar39 = *(Variant **)local_88; pVVar39 != (Variant *)0x0;
          pVVar39 = *(Variant **)(pVVar39 + 0x18)) {
        _find_resources(this,pVVar39,false);
        pVVar35 = (Variant *)Dictionary::operator[]((Variant *)local_98);
        ::Variant::Variant((Variant *)&local_58,pVVar35);
        _find_resources(this,(Variant *)&local_58,false);
        if (::Variant::needs_deinit[(int)local_58] != '\0') {
          ::Variant::_clear_internal();
        }
      }
    }
    List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_88);
    Dictionary::~Dictionary((Dictionary *)local_98);
  }
  else if (uVar41 < 0x1c) {
    if (uVar41 == 0x16) {
      ::Variant::operator_cast_to_NodePath((Variant *)&local_a8);
      for (iVar32 = 0; iVar31 = NodePath::get_name_count(), iVar32 < iVar31; iVar32 = iVar32 + 1) {
        NodePath::get_name((int)&local_a0);
        if (local_a0 == 0) {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = local_98._8_8_;
          local_98 = auVar22 << 0x40;
        }
        else {
          pVVar39 = *(Variant **)(local_a0 + 8);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = local_98._8_8_;
          local_98 = auVar20 << 0x40;
          if (pVVar39 == (Variant *)0x0) {
            if (*(long *)(local_a0 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)(local_a0 + 0x10));
            }
          }
          else {
            local_80 = strlen((char *)pVVar39);
            local_88 = pVVar39;
            String::parse_latin1((StrRange *)local_98);
          }
        }
        get_string_index(this,(String *)local_98);
        uVar28 = local_98._0_8_;
        if (local_98._0_8_ != 0) {
          LOCK();
          plVar3 = (long *)(local_98._0_8_ + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            auVar21._8_8_ = 0;
            auVar21._0_8_ = local_98._8_8_;
            local_98 = auVar21 << 0x40;
            Memory::free_static((void *)(uVar28 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
      }
      for (iVar32 = 0; iVar31 = NodePath::get_subname_count(), iVar32 < iVar31; iVar32 = iVar32 + 1)
      {
        NodePath::get_subname((int)&local_a0);
        if (local_a0 == 0) {
          auVar25._8_8_ = 0;
          auVar25._0_8_ = local_98._8_8_;
          local_98 = auVar25 << 0x40;
        }
        else {
          pVVar39 = *(Variant **)(local_a0 + 8);
          auVar23._8_8_ = 0;
          auVar23._0_8_ = local_98._8_8_;
          local_98 = auVar23 << 0x40;
          if (pVVar39 == (Variant *)0x0) {
            if (*(long *)(local_a0 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)(local_a0 + 0x10));
            }
          }
          else {
            local_80 = strlen((char *)pVVar39);
            local_88 = pVVar39;
            String::parse_latin1((StrRange *)local_98);
          }
        }
        get_string_index(this,(String *)local_98);
        uVar28 = local_98._0_8_;
        if (local_98._0_8_ != 0) {
          LOCK();
          plVar3 = (long *)(local_98._0_8_ + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = local_98._8_8_;
            local_98 = auVar24 << 0x40;
            Memory::free_static((void *)(uVar28 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
      }
      NodePath::~NodePath((NodePath *)&local_a8);
    }
    else if ((((uVar41 == 0x18) && (lVar33 = ::Variant::get_validated_object(), lVar33 != 0)) &&
             (local_f8 = (Object *)__dynamic_cast(lVar33,&Object::typeinfo,&Resource::typeinfo,0),
             local_f8 != (Object *)0x0)) &&
            (local_b0 = (List *)local_f8, cVar29 = RefCounted::reference(), cVar29 != '\0')) {
      if ((*(long *)(this + 0xa8) != 0) && (*(int *)(this + 0xcc) != 0)) {
        uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 200) * 4));
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 200) * 8);
        uVar34 = (long)local_f8 * 0x3ffff - 1;
        uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
        uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
        uVar34 = uVar34 >> 0x16 ^ uVar34;
        uVar43 = uVar34 & 0xffffffff;
        if ((int)uVar34 == 0) {
          uVar43 = 1;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar43 * lVar33;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar40;
        lVar38 = SUB168(auVar4 * auVar12,8);
        uVar41 = *(uint *)(*(long *)(this + 0xb0) + lVar38 * 4);
        iVar32 = SUB164(auVar4 * auVar12,8);
        if (uVar41 != 0) {
          uVar42 = 0;
          do {
            if (((uint)uVar43 == uVar41) &&
               (local_f8 ==
                (Object *)*(List **)(*(long *)(*(long *)(this + 0xa8) + lVar38 * 8) + 0x10)))
            goto LAB_0010f33d;
            uVar42 = uVar42 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar32 + 1) * lVar33;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar40;
            lVar38 = SUB168(auVar5 * auVar13,8);
            uVar41 = *(uint *)(*(long *)(this + 0xb0) + lVar38 * 4);
            iVar32 = SUB164(auVar5 * auVar13,8);
          } while ((uVar41 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar41 * lVar33, auVar14._8_8_ = 0,
                  auVar14._0_8_ = uVar40, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(this + 200) * 4) + iVar32) -
                                        SUB164(auVar6 * auVar14,8)) * lVar33, auVar15._8_8_ = 0,
                  auVar15._0_8_ = uVar40, uVar42 <= SUB164(auVar7 * auVar15,8)));
        }
      }
      pcVar2 = *(code **)(*(long *)local_f8 + 0xb8);
      ::Variant::Variant((Variant *)local_78,false);
      if ((_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar32 = __cxa_guard_acquire(&_find_resources(Variant_const&,bool)::{lambda()#1}::
                                        operator()()::sname), iVar32 != 0)) {
        _scs_create((char *)&_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname
                    ,true);
        __cxa_atexit(StringName::~StringName,
                     &_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname
                           );
      }
      (*pcVar2)((Variant *)&local_58,local_f8,
                &_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname,
                (Variant *)local_78);
      bVar30 = ::Variant::operator_cast_to_bool((Variant *)&local_58);
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      pLVar27 = local_b0;
      if (bVar30) {
LAB_0010f9fd:
        if (pLVar27 != (List *)0x0) {
          local_f8 = (Object *)pLVar27;
LAB_0010f33d:
          cVar29 = RefCounted::unreference();
          if ((cVar29 != '\0') && (cVar29 = predelete_handler(local_f8), cVar29 != '\0')) {
            (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(local_f8,false);
              return;
            }
            goto LAB_0010ffd1;
          }
        }
      }
      else {
        if ((((!param_2) && (this[0x11] == (ResourceFormatSaverBinaryInstance)0x0)) &&
            (*(long *)((List *)local_f8 + 0x188) != 0)) &&
           (1 < *(uint *)(*(long *)((List *)local_f8 + 0x188) + -8))) {
          iVar32 = String::find((char *)((List *)local_f8 + 0x188),0x113b5b);
          if ((iVar32 == -1) &&
             (cVar29 = String::begins_with((char *)((List *)local_f8 + 0x188)), cVar29 == '\0')) {
            Resource::get_path();
            cVar29 = String::operator==((String *)&local_88,(String *)(this + 8));
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (cVar29 == '\0') {
              uVar1 = *(undefined4 *)(this + 0xcc);
              puVar37 = (undefined4 *)
                        HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                        ::operator[]((HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                                      *)(this + 0xa0),(Ref *)&local_b0);
              *puVar37 = uVar1;
            }
            else {
              auVar26._8_8_ = 0;
              auVar26._0_8_ = local_98._8_8_;
              local_98 = auVar26 << 0x40;
              if (*(long *)this != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)this);
              }
              local_a0 = 0;
              String::parse_latin1
                        ((String *)&local_a0,
                         "Circular reference to resource being saved found: \'%s\' will be null next time it\'s loaded."
                        );
              vformat<String>((String *)&local_88,(String *)&local_a0,(CowData<char32_t> *)local_98)
              ;
              _err_print_error("_find_resources","core/io/resource_format_binary.cpp",0x7f0,
                               (String *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
            }
            goto LAB_0010f9fd;
          }
        }
        if ((*(long *)(this + 0x20) != 0) && (*(int *)(this + 0x44) != 0)) {
          uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4))
          ;
          lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x40) * 8);
          uVar34 = (long)pLVar27 * 0x3ffff - 1;
          uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
          uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
          uVar34 = uVar34 >> 0x16 ^ uVar34;
          uVar43 = uVar34 & 0xffffffff;
          if ((int)uVar34 == 0) {
            uVar43 = 1;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar43 * lVar33;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar40;
          lVar38 = SUB168(auVar8 * auVar16,8);
          uVar41 = *(uint *)(*(long *)(this + 0x38) + lVar38 * 4);
          uVar34 = (ulong)uVar41;
          iVar32 = SUB164(auVar8 * auVar16,8);
          if (uVar41 != 0) {
            uVar41 = 0;
            do {
              if (((int)uVar43 == (int)uVar34) &&
                 (*(Ref **)(*(long *)(this + 0x20) +
                           (ulong)*(uint *)(*(long *)(this + 0x28) + lVar38 * 4) * 8) ==
                  (Ref *)pLVar27)) goto LAB_0010f9fd;
              uVar41 = uVar41 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar32 + 1) * lVar33;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar40;
              lVar38 = SUB168(auVar9 * auVar17,8);
              uVar42 = *(uint *)(*(long *)(this + 0x38) + lVar38 * 4);
              uVar34 = (ulong)uVar42;
              iVar32 = SUB164(auVar9 * auVar17,8);
            } while ((uVar42 != 0) &&
                    (auVar10._8_8_ = 0, auVar10._0_8_ = uVar34 * lVar33, auVar18._8_8_ = 0,
                    auVar18._0_8_ = uVar40, auVar11._8_8_ = 0,
                    auVar11._0_8_ =
                         (ulong)((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x40) * 4) + iVar32) -
                                SUB164(auVar10 * auVar18,8)) * lVar33, auVar19._8_8_ = 0,
                    auVar19._0_8_ = uVar40, uVar41 <= SUB164(auVar11 * auVar19,8)));
          }
        }
        HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert
                  ((Ref *)&local_88);
        local_a8 = (long *)0x0;
        Object::get_property_list
                  ((List *)local_f8,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_a8,0));
        if (local_a8 != (long *)0x0) {
          for (lVar33 = *local_a8; lVar33 != 0; lVar33 = *(long *)(lVar33 + 0x30)) {
            if ((*(byte *)(lVar33 + 0x28) & 2) != 0) {
              StringName::StringName((StringName *)&local_88,(String *)(lVar33 + 8),false);
              Object::get((StringName *)local_78,(bool *)local_f8);
              if ((StringName::configured != '\0') && (local_88 != (Variant *)0x0)) {
                StringName::unref();
              }
              if ((*(byte *)(lVar33 + 0x2a) & 0x80) == 0) {
                _find_resources(this,(Variant *)local_78,false);
              }
              else {
                local_98 = (undefined1  [16])0x0;
                Ref<Resource>::operator=((Ref<Resource> *)local_98,(Ref *)pLVar27);
                StringName::StringName((StringName *)&local_88,(String *)(lVar33 + 8),false);
                if ((Variant *)local_98._8_8_ == local_88) {
                  if ((StringName::configured != '\0') && (local_88 != (Variant *)0x0)) {
                    StringName::unref();
                  }
                }
                else {
                  StringName::unref();
                  local_98._8_8_ = local_88;
                }
                lVar38 = *(long *)(this + 0x48);
                this_00 = (_Data *)(this + 0x48);
                if (lVar38 == 0) {
                  RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                  ::_Data::_create_root(this_00);
                  lVar38 = *(long *)(this + 0x48);
                  if (lVar38 != 0) goto LAB_0010fbda;
                  local_58 = 0;
                  local_50 = (undefined1  [16])0x0;
                  RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                  ::_Data::_create_root(this_00);
                }
                else {
LAB_0010fbda:
                  lVar38 = *(long *)(lVar38 + 0x10);
                  if (*(long *)(this + 0x50) != lVar38) {
                    do {
                      if (local_98._0_8_ == *(ulong *)(lVar38 + 0x30)) {
                        if (*(ulong *)(lVar38 + 0x38) <= (ulong)local_98._8_8_) {
                          if (*(ulong *)(lVar38 + 0x38) < (ulong)local_98._8_8_) goto LAB_0010fc17;
                          goto LAB_0010fc2f;
                        }
LAB_0010fc00:
                        lVar38 = *(long *)(lVar38 + 0x10);
                      }
                      else {
                        if ((ulong)local_98._0_8_ < *(ulong *)(lVar38 + 0x30)) goto LAB_0010fc00;
LAB_0010fc17:
                        lVar38 = *(long *)(lVar38 + 8);
                      }
                    } while (lVar38 != *(long *)(this + 0x50));
                  }
                  local_58 = 0;
                  local_50 = (undefined1  [16])0x0;
                }
                lVar38 = RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                         ::_insert((RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                                    *)this_00,(NonPersistentKey *)local_98,(Variant *)&local_58);
                if (::Variant::needs_deinit[(int)local_58] != '\0') {
                  ::Variant::_clear_internal();
                }
LAB_0010fc2f:
                ::Variant::operator=((Variant *)(lVar38 + 0x40),(Variant *)local_78);
                local_a0 = 0;
                lVar38 = ::Variant::get_validated_object();
                if ((lVar38 == 0) ||
                   (lVar38 = __dynamic_cast(lVar38,&Object::typeinfo,&Resource::typeinfo,0),
                   lVar38 == 0)) {
LAB_0010fc92:
                  _find_resources(this,(Variant *)local_78,false);
                }
                else {
                  local_a0 = lVar38;
                  cVar29 = RefCounted::reference();
                  if (cVar29 == '\0') {
                    local_a0 = 0;
                    goto LAB_0010fc92;
                  }
                  HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                  ::insert((Ref *)&local_88);
                  List<Ref<Resource>,DefaultAllocator>::push_back
                            ((List<Ref<Resource>,DefaultAllocator> *)(this + 0xd0),(Ref *)&local_a0)
                  ;
                }
                Ref<Resource>::unref((Ref<Resource> *)&local_a0);
                if ((StringName::configured != '\0') && (local_98._8_8_ != 0)) {
                  StringName::unref();
                }
                if ((local_98._0_8_ != 0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) {
                  uVar28 = local_98._0_8_;
                  cVar29 = predelete_handler((Object *)local_98._0_8_);
                  if (cVar29 != '\0') {
                    (**(code **)(*(long *)uVar28 + 0x140))(uVar28);
                    Memory::free_static((void *)uVar28,false);
                  }
                }
              }
              if (::Variant::needs_deinit[local_78[0]] != '\0') {
                ::Variant::_clear_internal();
              }
            }
          }
        }
        if (*(long *)(this + 0xd0) == 0) {
          pauVar36 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])(this + 0xd0) = pauVar36;
          *(undefined4 *)pauVar36[1] = 0;
          *pauVar36 = (undefined1  [16])0x0;
        }
        pauVar36 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
        *pauVar36 = (undefined1  [16])0x0;
        pauVar36[1] = (undefined1  [16])0x0;
        if (pLVar27 != (List *)0x0) {
          *(List **)*pauVar36 = pLVar27;
          cVar29 = RefCounted::reference();
          if (cVar29 == '\0') {
            *(undefined8 *)*pauVar36 = 0;
          }
        }
        plVar3 = *(long **)(this + 0xd0);
        lVar33 = plVar3[1];
        *(long **)(pauVar36[1] + 8) = plVar3;
        *(undefined8 *)(*pauVar36 + 8) = 0;
        *(long *)pauVar36[1] = lVar33;
        if (lVar33 != 0) {
          *(undefined1 (**) [16])(lVar33 + 8) = pauVar36;
        }
        plVar3[1] = (long)pauVar36;
        if (*plVar3 == 0) {
          *plVar3 = (long)pauVar36;
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_a8)
        ;
        Ref<Resource>::unref((Ref<Resource> *)&local_b0);
      }
    }
  }
  else if (uVar41 == 0x1c) {
    ::Variant::operator_cast_to_Array((Variant *)&local_a0);
    Array::get_typed_script();
    _find_resources(this,(Variant *)&local_58,false);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    Array::begin();
    Array::end();
    pVVar39 = (Variant *)local_98._0_8_;
    if ((Variant *)local_98._0_8_ != local_88) {
      do {
        if ((Variant *)local_98._8_8_ != (Variant *)0x0) {
          ::Variant::operator=((Variant *)local_98._8_8_,pVVar39);
          pVVar39 = (Variant *)local_98._8_8_;
        }
        _find_resources(this,pVVar39,false);
        pVVar39 = (Variant *)(local_98._0_8_ + 0x18);
        local_98._0_8_ = pVVar39;
      } while (pVVar39 != local_88);
    }
    Array::~Array((Array *)&local_a0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ffd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverBinaryInstance::save(String const&, Ref<Resource> const&, unsigned int) */

int __thiscall
ResourceFormatSaverBinaryInstance::save
          (ResourceFormatSaverBinaryInstance *this,String *param_1,Ref *param_2,uint param_3)

{
  Object *pOVar1;
  size_t __n;
  code *pcVar2;
  bool *pbVar3;
  char *pcVar4;
  String *pSVar5;
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
  undefined8 uVar23;
  char cVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  Object *pOVar29;
  long lVar30;
  undefined8 uVar31;
  undefined1 (*pauVar32) [16];
  int *piVar33;
  Variant *pVVar34;
  undefined1 (*pauVar35) [16];
  ulong uVar36;
  undefined8 *puVar37;
  long *plVar38;
  int *piVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  uint uVar43;
  undefined4 uVar44;
  CowData<char32_t> *pCVar45;
  void *pvVar46;
  long lVar47;
  undefined8 *__s;
  long *plVar48;
  undefined4 *puVar49;
  CowData<char32_t> *pCVar50;
  Object *pOVar51;
  Ref *pRVar52;
  long in_FS_OFFSET;
  CowData<char32_t> *local_250;
  CowData<char32_t> *local_238;
  Variant *local_230;
  int local_1e0;
  int local_1dc;
  int local_1b4;
  Object *local_1b0;
  long local_1a8;
  undefined1 (*local_1a0) [16];
  Object *local_198;
  undefined8 local_190;
  CowData<char32_t> local_188 [8];
  undefined8 local_180;
  CowData<char32_t> local_178 [8];
  Ref *local_170;
  Variant local_168 [8];
  undefined8 *local_160;
  undefined8 *local_158;
  long local_150;
  Object *local_148;
  long local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  void *pvStack_100;
  void *local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  int local_d8 [8];
  ulong local_b8;
  undefined1 local_b0 [16];
  int local_98 [2];
  int local_90 [2];
  undefined1 local_88 [16];
  int local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = String::hash();
  Resource::seed_scene_unique_id(uVar26);
  local_1b0 = (Object *)0x0;
  if ((param_3 & 0x20) == 0) {
    FileAccess::open((String *)&local_108,(int)param_1,(Error *)0x2);
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1b0,(Ref *)CONCAT44(uStack_104,local_108));
    if ((CONCAT44(uStack_104,local_108) != 0) &&
       (cVar24 = RefCounted::unreference(), cVar24 != '\0')) {
      pOVar51 = (Object *)CONCAT44(uStack_104,local_108);
      goto LAB_00111920;
    }
LAB_0011014c:
    local_1e0 = local_1b4;
  }
  else {
    local_148 = (Object *)0x0;
    Ref<FileAccessCompressed>::instantiate<>((Ref<FileAccessCompressed> *)&local_148);
    pOVar51 = local_148;
    local_108 = 0x113bd2;
    uStack_104 = 0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_138._8_8_;
    local_138 = auVar21 << 0x40;
    pvStack_100 = (void *)0x4;
    String::parse_latin1((StrRange *)local_138);
    FileAccessCompressed::configure(pOVar51,(StrRange *)local_138,2,0x1000);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    pOVar29 = (Object *)__dynamic_cast(pOVar51,&Object::typeinfo,&FileAccess::typeinfo,0);
    if ((pOVar29 != (Object *)0x0) &&
       (local_1b0 = pOVar29, cVar24 = RefCounted::reference(), cVar24 == '\0')) {
      local_1b0 = (Object *)0x0;
    }
    local_1b4 = (**(code **)(*(long *)pOVar51 + 0x188))(pOVar51,param_1,2);
    cVar24 = RefCounted::unreference();
    if (cVar24 == '\0') goto LAB_0011014c;
LAB_00111920:
    cVar24 = predelete_handler(pOVar51);
    if (cVar24 == '\0') goto LAB_0011014c;
    (**(code **)(*(long *)pOVar51 + 0x140))(pOVar51);
    Memory::free_static(pOVar51,false);
    local_1e0 = local_1b4;
  }
  if (local_1e0 != 0) {
    local_250 = (CowData<char32_t> *)&local_108;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = local_138._8_8_;
    local_138 = auVar22 << 0x40;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_138,(CowData *)param_1);
    }
    local_148 = (Object *)0x0;
    local_108 = 0x113e11;
    uStack_104 = 0;
    pvStack_100 = (void *)0x18;
    String::parse_latin1((StrRange *)&local_148);
    vformat<String>(local_250,(StrRange *)&local_148,(CowData<char32_t> *)local_138);
    _err_print_error(&_LC163,"core/io/resource_format_binary.cpp",0x86e,
                     "Condition \"err != OK\" is true. Returning: err",local_250,0,0);
    CowData<char32_t>::_unref(local_250);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    goto LAB_00111b43;
  }
  local_250 = (CowData<char32_t> *)&local_108;
  this[0x10] = SUB41(param_3,0);
  this[0x10] = (ResourceFormatSaverBinaryInstance)((byte)this[0x10] & 1);
  this[0x12] = (ResourceFormatSaverBinaryInstance)((byte)(param_3 >> 3) & 1);
  this[0x11] = (ResourceFormatSaverBinaryInstance)((byte)(param_3 >> 1) & 1);
  this[0x14] = (ResourceFormatSaverBinaryInstance)((byte)(param_3 >> 6) & 1);
  this[0x13] = (ResourceFormatSaverBinaryInstance)((byte)(param_3 >> 4) & 1);
  cVar24 = String::begins_with((char *)param_1);
  if (cVar24 == '\0') {
    this[0x14] = (ResourceFormatSaverBinaryInstance)0x0;
  }
  String::get_base_dir();
  if (*(long *)this != CONCAT44(uStack_104,local_108)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    uVar31 = CONCAT44(uStack_104,local_108);
    local_108 = 0;
    uStack_104 = 0;
    *(undefined8 *)this = uVar31;
  }
  CowData<char32_t>::_unref(local_250);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)local_250);
  if (*(long *)(this + 8) != CONCAT44(uStack_104,local_108)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    uVar31 = CONCAT44(uStack_104,local_108);
    local_108 = 0;
    uStack_104 = 0;
    *(undefined8 *)(this + 8) = uVar31;
  }
  CowData<char32_t>::_unref(local_250);
  ::Variant::Variant((Variant *)local_98,*(Object **)param_2);
  _find_resources(this,(Variant *)local_98,true);
  if (::Variant::needs_deinit[local_98[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  pOVar51 = local_1b0;
  if ((param_3 & 0x20) == 0) {
    (**(code **)(*(long *)local_1b0 + 0x2d0))
              (local_1b0,&save(String_const&,Ref<Resource>const&,unsigned_int)::header,4);
  }
  if (this[0x13] == (ResourceFormatSaverBinaryInstance)0x0) {
    (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,0);
    lVar30 = *(long *)pOVar51;
  }
  else {
    (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,1);
    lVar30 = *(long *)pOVar51;
    if (*(code **)(lVar30 + 0x248) == FileAccess::set_big_endian) {
      pOVar51[0x17c] = (Object)0x1;
    }
    else {
      (**(code **)(lVar30 + 0x248))(pOVar51,1);
      lVar30 = *(long *)pOVar51;
    }
  }
  (**(code **)(lVar30 + 0x278))(pOVar51,0);
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,4);
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,4);
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,6);
  iVar27 = (**(code **)(*(long *)pOVar51 + 0x250))(pOVar51);
  if ((iVar27 != 0) && (iVar27 = (**(code **)(*(long *)pOVar51 + 0x250))(pOVar51), iVar27 != 0x12))
  {
    local_1e0 = 0x14;
    goto LAB_00111b43;
  }
  local_148 = (Object *)0x0;
  pOVar29 = *(Object **)param_2;
  if ((pOVar29 != (Object *)0x0) &&
     (local_148 = pOVar29, cVar24 = RefCounted::reference(), cVar24 == '\0')) {
    local_148 = (Object *)0x0;
    pOVar29 = (Object *)0x0;
  }
  _resource_get_class((CowData<char32_t> *)local_138,(String *)&local_148);
  local_108 = SUB84(pOVar51,0);
  uStack_104 = (undefined4)((ulong)pOVar51 >> 0x20);
  cVar24 = RefCounted::reference();
  if (cVar24 == '\0') {
    local_108 = 0;
    uStack_104 = 0;
    save_unicode_string(local_250,(CowData<char32_t> *)local_138,0);
  }
  else {
    save_unicode_string(local_250,(CowData<char32_t> *)local_138,0);
    cVar24 = RefCounted::unreference();
    if ((cVar24 != '\0') && (cVar24 = predelete_handler(pOVar51), cVar24 != '\0')) {
      (**(code **)(*(long *)pOVar51 + 0x140))(pOVar51);
      Memory::free_static(pOVar51,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  if (((pOVar29 != (Object *)0x0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0')) &&
     (cVar24 = predelete_handler(pOVar29), cVar24 != '\0')) {
    (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
    Memory::free_static(pOVar29,false);
  }
  (**(code **)(*(long *)pOVar51 + 0x280))(pOVar51,0);
  plVar38 = *(long **)param_2;
  local_1a8 = 0;
  pcVar2 = *(code **)(*plVar38 + 0x58);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_138._8_8_;
  local_138 = auVar14 << 0x40;
  local_108 = 0x113e2f;
  uStack_104 = 0;
  pvStack_100 = (void *)0xb;
  String::parse_latin1((StrRange *)local_138);
  cVar24 = (*pcVar2)(plVar38,(CowData<char32_t> *)local_138);
  iVar27 = 3;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  if (cVar24 == '\0') {
    (**(code **)(**(long **)param_2 + 0x98))((Variant *)local_98);
    lVar30 = ::Variant::get_validated_object();
    if (lVar30 == 0) {
LAB_00111b7d:
      cVar24 = ::Variant::needs_deinit[local_98[0]];
    }
    else {
      pOVar29 = (Object *)__dynamic_cast(lVar30,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar29 != (Object *)0x0) {
        cVar24 = RefCounted::reference();
        if (cVar24 != '\0') {
          if (::Variant::needs_deinit[local_98[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          (**(code **)(*(long *)pOVar29 + 0x1e0))((CowData<char32_t> *)local_138);
          if (local_138._0_8_ == 0) {
LAB_00111e02:
            uStack_104 = 0;
            local_108 = 0;
            lVar30 = 0;
          }
          else {
            local_108 = 0;
            uStack_104 = 0;
            if (*(char **)(local_138._0_8_ + 8) == (char *)0x0) {
              if (*(long *)(local_138._0_8_ + 0x10) == 0) goto LAB_00111e02;
              CowData<char32_t>::_ref(local_250,(CowData *)(local_138._0_8_ + 0x10));
              lVar30 = CONCAT44(uStack_104,local_108);
            }
            else {
              String::parse_latin1((String *)local_250,*(char **)(local_138._0_8_ + 8));
              lVar30 = CONCAT44(uStack_104,local_108);
            }
          }
          if (local_1a8 != lVar30) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
            local_1a8 = CONCAT44(uStack_104,local_108);
            local_108 = 0;
            uStack_104 = 0;
          }
          CowData<char32_t>::_unref(local_250);
          if ((StringName::configured != '\0') && (local_138._0_8_ != 0)) {
            StringName::unref();
          }
          if (local_1a8 == 0) {
            iVar27 = 3;
          }
          else {
            iVar27 = (-(uint)((uint)*(undefined8 *)(local_1a8 + -8) < 2) & 0xfffffff8) + 0xb;
          }
          cVar24 = RefCounted::unreference();
          if ((cVar24 != '\0') && (cVar24 = predelete_handler(pOVar29), cVar24 != '\0')) {
            (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
            Memory::free_static(pOVar29,false);
          }
          goto LAB_001105f0;
        }
        goto LAB_00111b7d;
      }
      cVar24 = ::Variant::needs_deinit[local_98[0]];
    }
    if (cVar24 != '\0') {
      ::Variant::_clear_internal();
    }
    iVar27 = 3;
  }
LAB_001105f0:
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,iVar27);
  uVar31 = ResourceSaver::get_resource_id_for_path(param_1,true);
  (**(code **)(*(long *)pOVar51 + 0x280))(pOVar51,uVar31);
  if ((local_1a8 != 0) && (1 < *(uint *)(local_1a8 + -8))) {
    local_108 = 0;
    uStack_104 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)local_250,(Ref *)pOVar51);
    save_unicode_string(local_250,&local_1a8,0);
    Ref<FileAccess>::unref((Ref<FileAccess> *)local_250);
  }
  iVar27 = 0xb;
  do {
    (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,0);
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  local_1a0 = (undefined1 (*) [16])0x0;
  if ((*(long **)(this + 0xd0) != (long *)0x0) &&
     (plVar38 = (long *)**(long **)(this + 0xd0), plVar38 != (long *)0x0)) {
    do {
      pauVar35 = local_1a0;
      plVar48 = (long *)*plVar38;
      pcVar2 = *(code **)(*plVar48 + 0xb8);
      Dictionary::Dictionary((Dictionary *)local_138);
      ::Variant::Variant((Variant *)&local_b8,(Dictionary *)local_138);
      StringName::StringName((StringName *)local_250,"_missing_resources",false);
      (*pcVar2)((Variant *)local_98,plVar48,local_250,(Variant *)&local_b8);
      ::Variant::operator_cast_to_Dictionary(local_168);
      if (::Variant::needs_deinit[local_98[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (CONCAT44(uStack_104,local_108) != 0)) {
        StringName::unref();
      }
      if (::Variant::needs_deinit[(int)local_b8] != '\0') {
        ::Variant::_clear_internal();
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
      local_108 = 0;
      uStack_104 = 0;
      pvStack_100 = (void *)0x0;
      if (pauVar35 == (undefined1 (*) [16])0x0) {
        pauVar35 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar35[1] = 0;
        *pauVar35 = (undefined1  [16])0x0;
        local_1a0 = pauVar35;
      }
      pauVar32 = (undefined1 (*) [16])operator_new(0x28,DefaultAllocator::alloc);
      *(undefined8 *)pauVar32[1] = 0;
      *pauVar32 = (undefined1  [16])0x0;
      lVar30 = *(long *)(*pauVar35 + 8);
      *(long *)(pauVar32[1] + 8) = lVar30;
      *(undefined1 (**) [16])pauVar32[2] = pauVar35;
      if (lVar30 != 0) {
        *(undefined1 (**) [16])(lVar30 + 0x10) = pauVar32;
      }
      lVar30 = *(long *)*pauVar35;
      *(undefined1 (**) [16])(*pauVar35 + 8) = pauVar32;
      if (lVar30 == 0) {
        *(undefined1 (**) [16])*pauVar35 = pauVar32;
      }
      *(int *)pauVar35[1] = *(int *)pauVar35[1] + 1;
      List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator>::~List
                ((List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator> *)&pvStack_100)
      ;
      uVar31 = local_138._8_8_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_138._8_8_;
      local_138 = auVar15 << 0x40;
      if (*plVar38 != 0) {
        local_138._0_8_ = *plVar38;
        local_138 = CONCAT88(uVar31,local_138._0_8_);
        cVar24 = RefCounted::reference();
        if (cVar24 == '\0') {
          auVar16._8_8_ = 0;
          auVar16._0_8_ = local_138._8_8_;
          local_138 = auVar16 << 0x40;
        }
      }
      _resource_get_class(local_250);
      lVar30 = *(long *)*pauVar32;
      lVar47 = CONCAT44(uStack_104,local_108);
      if (lVar30 == lVar47) {
        if (lVar30 != 0) {
          LOCK();
          plVar48 = (long *)(lVar30 + -0x10);
          *plVar48 = *plVar48 + -1;
          UNLOCK();
          if (*plVar48 == 0) {
            lVar30 = CONCAT44(uStack_104,local_108);
            local_108 = 0;
            uStack_104 = 0;
            Memory::free_static((void *)(lVar30 + -0x10),false);
          }
        }
      }
      else {
        if (lVar30 != 0) {
          LOCK();
          plVar48 = (long *)(lVar30 + -0x10);
          *plVar48 = *plVar48 + -1;
          UNLOCK();
          if (*plVar48 == 0) {
            lVar30 = *(long *)*pauVar32;
            *(undefined8 *)*pauVar32 = 0;
            Memory::free_static((void *)(lVar30 + -0x10),false);
            lVar47 = CONCAT44(uStack_104,local_108);
          }
          else {
            *(undefined8 *)*pauVar32 = 0;
            lVar47 = CONCAT44(uStack_104,local_108);
          }
        }
        *(long *)*pauVar32 = lVar47;
      }
      uVar31 = local_138._0_8_;
      if ((((Object *)local_138._0_8_ != (Object *)0x0) &&
          (cVar24 = RefCounted::unreference(), cVar24 != '\0')) &&
         (cVar24 = predelete_handler((Object *)uVar31), cVar24 != '\0')) {
        (**(code **)(*(long *)uVar31 + 0x140))(uVar31);
        Memory::free_static((void *)uVar31,false);
      }
      local_158 = (undefined8 *)0x0;
      Object::get_property_list
                ((List *)*plVar38,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_158,0));
      if ((local_158 != (undefined8 *)0x0) && (piVar39 = (int *)*local_158, piVar39 != (int *)0x0))
      {
LAB_00110900:
        pSVar5 = (String *)(piVar39 + 2);
        if (((this[0x12] != (ResourceFormatSaverBinaryInstance)0x0) &&
            (cVar24 = String::begins_with((char *)pSVar5), cVar24 != '\0')) ||
           (cVar24 = String::operator==(pSVar5,"metadata/_missing_resources"), cVar24 != '\0'))
        goto LAB_00110e2e;
        if ((*(byte *)(piVar39 + 10) & 2) != 0) {
LAB_00110943:
          local_90[0] = 0;
          local_78 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 6;
          local_88 = (undefined1  [16])0x0;
          local_70 = (undefined1  [16])0x0;
          local_98[0] = get_string_index(this,pSVar5);
          if ((*(byte *)((long)piVar39 + 0x2a) & 0x80) != 0) {
            local_108 = 0;
            uStack_104 = 0;
            pvStack_100 = (void *)0x0;
            lVar30 = *plVar38;
            if (lVar30 != 0) {
              local_108 = (undefined4)lVar30;
              uStack_104 = (undefined4)((ulong)lVar30 >> 0x20);
              cVar24 = RefCounted::reference();
              if (cVar24 == '\0') {
                local_108 = 0;
                uStack_104 = 0;
              }
            }
            StringName::StringName((StringName *)local_138,pSVar5,false);
            if (pvStack_100 == (void *)local_138._0_8_) {
              if ((StringName::configured != '\0') && ((void *)local_138._0_8_ != (void *)0x0)) {
                StringName::unref();
              }
            }
            else {
              StringName::unref();
              pvStack_100 = (void *)local_138._0_8_;
            }
            lVar30 = *(long *)(this + 0x50);
            if ((*(long *)(this + 0x48) != 0) &&
               (lVar47 = *(long *)(*(long *)(this + 0x48) + 0x10), lVar30 != lVar47)) {
              uVar36 = CONCAT44(uStack_104,local_108);
              lVar42 = lVar47;
              do {
                while (uVar36 == *(ulong *)(lVar42 + 0x30)) {
                  if (*(void **)(lVar42 + 0x38) <= pvStack_100) {
                    if (*(void **)(lVar42 + 0x38) < pvStack_100) {
                      lVar42 = *(long *)(lVar42 + 8);
                      goto LAB_00110a69;
                    }
                    goto LAB_00110e9d;
                  }
LAB_00110a50:
                  lVar42 = *(long *)(lVar42 + 0x10);
                  if (lVar30 == lVar42) goto LAB_00110ae0;
                }
                if (uVar36 < *(ulong *)(lVar42 + 0x30)) goto LAB_00110a50;
                lVar42 = *(long *)(lVar42 + 8);
LAB_00110a69:
              } while (lVar30 != lVar42);
            }
            goto LAB_00110ae0;
          }
          pbVar3 = (bool *)*plVar38;
          StringName::StringName((StringName *)local_250,pSVar5,false);
          Object::get((StringName *)&local_b8,pbVar3);
          if (::Variant::needs_deinit[local_90[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          local_90[0] = (int)local_b8;
          local_88 = local_b0;
          if ((StringName::configured == '\0') || (CONCAT44(uStack_104,local_108) == 0))
          goto LAB_00110b18;
          StringName::unref();
          iVar27 = *piVar39;
          goto joined_r0x00110b1d;
        }
        ::Variant::Variant((Variant *)local_98,pSVar5);
        cVar24 = Dictionary::has(local_168);
        if (::Variant::needs_deinit[local_98[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (cVar24 != '\0') goto LAB_00110943;
        piVar39 = *(int **)(piVar39 + 0xc);
        goto joined_r0x00110e35;
      }
LAB_00110e3b:
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_158);
      Dictionary::~Dictionary((Dictionary *)local_168);
      plVar38 = (long *)plVar38[1];
    } while (plVar38 != (long *)0x0);
  }
  if (*(long *)(this + 0x98) == 0) {
    uVar44 = 0;
  }
  else {
    uVar44 = *(undefined4 *)(*(long *)(this + 0x98) + -8);
  }
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,uVar44);
  lVar30 = *(long *)(this + 0x98);
  for (lVar47 = 0; (lVar30 != 0 && (lVar47 < *(long *)(lVar30 + -8))); lVar47 = lVar47 + 1) {
    lVar30 = *(long *)(lVar30 + lVar47 * 8);
    if (lVar30 == 0) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = local_138._8_8_;
      local_138 = auVar20 << 0x40;
    }
    else {
      pcVar4 = *(char **)(lVar30 + 8);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = local_138._8_8_;
      local_138 = auVar19 << 0x40;
      if (pcVar4 == (char *)0x0) {
        if (*(long *)(lVar30 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_138,(CowData *)(lVar30 + 0x10));
        }
      }
      else {
        pvStack_100 = (void *)strlen(pcVar4);
        local_108 = SUB84(pcVar4,0);
        uStack_104 = (undefined4)((ulong)pcVar4 >> 0x20);
        String::parse_latin1((StrRange *)local_138);
      }
    }
    pOVar29 = local_1b0;
    if (local_1b0 == (Object *)0x0) {
LAB_0011139c:
      uStack_104 = 0;
      local_108 = 0;
      save_unicode_string(local_250,(CowData<char32_t> *)local_138,0);
    }
    else {
      local_108 = SUB84(local_1b0,0);
      uStack_104 = (undefined4)((ulong)local_1b0 >> 0x20);
      cVar24 = RefCounted::reference();
      if (cVar24 == '\0') goto LAB_0011139c;
      save_unicode_string(local_250,(CowData<char32_t> *)local_138,0);
      cVar24 = RefCounted::unreference();
      if ((cVar24 != '\0') && (cVar24 = predelete_handler(pOVar29), cVar24 != '\0')) {
        (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
        Memory::free_static(pOVar29,false);
      }
    }
    uVar31 = local_138._0_8_;
    if (local_138._0_8_ != 0) {
      LOCK();
      plVar38 = (long *)(local_138._0_8_ + -0x10);
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_138._8_8_;
        local_138 = auVar18 << 0x40;
        Memory::free_static((void *)(uVar31 + -0x10),false);
      }
    }
    lVar30 = *(long *)(this + 0x98);
  }
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51);
  uVar26 = *(uint *)(this + 0xcc);
  local_160 = (undefined8 *)0x0;
  if (uVar26 == 0) {
    plVar38 = *(long **)(this + 0xb8);
    __s = (undefined8 *)0x0;
    if (plVar38 != (long *)0x0) goto LAB_00111608;
  }
  else {
    __n = (ulong)uVar26 * 8;
    CowData<Ref<Resource>>::_copy_on_write((CowData<Ref<Resource>> *)&local_160);
    uVar36 = __n - 1;
    uVar36 = uVar36 | uVar36 >> 1;
    uVar36 = uVar36 | uVar36 >> 2;
    uVar36 = uVar36 | uVar36 >> 4;
    uVar36 = uVar36 | uVar36 >> 8;
    uVar36 = uVar36 | uVar36 >> 0x10;
    puVar37 = (undefined8 *)Memory::alloc_static((uVar36 | uVar36 >> 0x20) + 0x11,false);
    if (puVar37 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      plVar38 = *(long **)(this + 0xb8);
      __s = local_160;
      if (plVar38 != (long *)0x0) goto LAB_00111608;
LAB_00111691:
      if (__s == (undefined8 *)0x0) goto LAB_00111bca;
    }
    else {
      __s = puVar37 + 2;
      *puVar37 = 1;
      local_160 = __s;
      memset(__s,0,__n);
      plVar38 = *(long **)(this + 0xb8);
      puVar37[1] = (ulong)uVar26;
      if (plVar38 != (long *)0x0) {
LAB_00111608:
        do {
          lVar30 = (long)(int)plVar38[3];
          if (lVar30 < 0) {
            if (__s != (undefined8 *)0x0) {
LAB_00111878:
              lVar47 = __s[-1];
              goto LAB_0011187d;
            }
LAB_00111b24:
            lVar47 = 0;
LAB_0011187d:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar30,lVar47,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (__s == (undefined8 *)0x0) goto LAB_00111b24;
          if ((long)__s[-1] <= lVar30) goto LAB_00111878;
          CowData<Ref<Resource>>::_copy_on_write((CowData<Ref<Resource>> *)&local_160);
          __s = local_160;
          pOVar29 = (Object *)plVar38[2];
          plVar48 = local_160 + lVar30;
          pOVar1 = (Object *)*plVar48;
          if (pOVar29 != pOVar1) {
            *plVar48 = (long)pOVar29;
            if ((pOVar29 != (Object *)0x0) && (cVar24 = RefCounted::reference(), cVar24 == '\0')) {
              *plVar48 = 0;
            }
            if (((pOVar1 != (Object *)0x0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0'))
               && (cVar24 = predelete_handler(pOVar1), cVar24 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
          plVar38 = (long *)*plVar38;
        } while (plVar38 != (long *)0x0);
        goto LAB_00111691;
      }
    }
    for (lVar30 = 0; lVar30 < (long)__s[-1]; lVar30 = lVar30 + 1) {
      (**(code **)(*(long *)__s[lVar30] + 0x50))((CowData<char32_t> *)local_138);
      pOVar1 = local_1b0;
      local_108 = 0;
      uStack_104 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)local_250,(Ref *)local_1b0);
      save_unicode_string(local_250,(CowData<char32_t> *)local_138,0);
      pOVar29 = (Object *)CONCAT44(uStack_104,local_108);
      if (((pOVar29 != (Object *)0x0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0')) &&
         (cVar24 = predelete_handler(pOVar29), cVar24 != '\0')) {
        (**(code **)(*(long *)pOVar29 + 0x140))();
        Memory::free_static(pOVar29,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
      lVar47 = __s[-1];
      if (lVar47 <= lVar30) goto LAB_00111d5b;
      Resource::get_path();
      if (this[0x10] == (ResourceFormatSaverBinaryInstance)0x0) {
        local_108 = 0;
        uStack_104 = 0;
        if (local_138._0_8_ != 0) {
          CowData<char32_t>::_ref(local_250,(CowData *)local_138);
          goto LAB_001116d3;
        }
      }
      else {
        String::path_to_file((String *)local_250);
LAB_001116d3:
        if (local_138._0_8_ != CONCAT44(uStack_104,local_108)) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
          auVar21 = local_138;
          local_138._4_4_ = uStack_104;
          local_138._0_4_ = local_108;
          local_108 = 0;
          uStack_104 = 0;
          local_138._8_8_ = auVar21._8_8_;
        }
      }
      CowData<char32_t>::_unref(local_250);
      local_108 = 0;
      uStack_104 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)local_250,(Ref *)pOVar1);
      save_unicode_string(local_250,(CowData<char32_t> *)local_138,0);
      pOVar29 = (Object *)CONCAT44(uStack_104,local_108);
      if (((pOVar29 != (Object *)0x0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0')) &&
         (cVar24 = predelete_handler(pOVar29), cVar24 != '\0')) {
        (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
        Memory::free_static(pOVar29,false);
      }
      lVar47 = __s[-1];
      if (lVar47 <= lVar30) goto LAB_00111d5b;
      Resource::get_path();
      ResourceSaver::get_resource_id_for_path((String *)local_250,false);
      CowData<char32_t>::_unref(local_250);
      (**(code **)(*(long *)pOVar51 + 0x280))(pOVar51);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    }
  }
LAB_00111bca:
  uVar44 = 0;
  if (*(long *)(this + 0xd0) != 0) {
    uVar44 = *(undefined4 *)(*(long *)(this + 0xd0) + 0x10);
  }
  (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,uVar44);
  uVar36 = _LC116;
  local_e0 = _LC116;
  plVar38 = *(long **)(this + 0xd0);
  local_150 = 0;
  local_118 = _LC116;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  if (plVar38 == (long *)0x0) {
    pvStack_100 = (void *)0x0;
    local_f8 = (void *)0x0;
    local_f0 = (undefined1  [16])0x0;
  }
  else {
    plVar48 = (long *)*plVar38;
    if (plVar48 != (long *)0x0) {
      do {
        lVar30 = *(long *)(*plVar48 + 0x188);
        if ((lVar30 == 0) || (*(uint *)(lVar30 + -8) < 2)) {
LAB_00111ce6:
          Resource::get_scene_unique_id();
          pCVar45 = local_250;
          if ((CONCAT44(uStack_104,local_108) == 0) ||
             (iVar27 = (int)*(undefined8 *)(CONCAT44(uStack_104,local_108) + -8), iVar27 == 0)) {
LAB_00111d0a:
            CowData<char32_t>::_unref(pCVar45);
          }
          else {
            CowData<char32_t>::_unref(local_250);
            if (iVar27 != 1) {
              Resource::get_scene_unique_id();
              local_148 = (Object *)((ulong)local_148 & 0xffffffff00000000);
              cVar24 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::
                       _lookup_pos((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>
                                    *)local_138,(String *)local_250,(uint *)&local_148);
              CowData<char32_t>::_unref(local_250);
              if (cVar24 == '\0') {
                Resource::get_scene_unique_id();
                HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)local_250);
                pCVar45 = (CowData<char32_t> *)&local_148;
                goto LAB_00111d0a;
              }
              pSVar5 = (String *)*plVar48;
              local_108 = 0;
              uStack_104 = 0;
              String::parse_latin1((String *)local_250,"");
              Resource::set_scene_unique_id(pSVar5);
              CowData<char32_t>::_unref(local_250);
            }
          }
        }
        else {
          pcVar4 = (char *)(*plVar48 + 0x188);
          iVar27 = String::find(pcVar4,0x113b5b);
          if ((iVar27 != -1) || (cVar24 = String::begins_with(pcVar4), cVar24 != '\0'))
          goto LAB_00111ce6;
        }
        plVar48 = (long *)plVar48[1];
      } while (plVar48 != (long *)0x0);
      local_e0 = uVar36;
      pvStack_100 = (void *)0x0;
      local_f8 = (void *)0x0;
      plVar38 = *(long **)(this + 0xd0);
      local_f0 = (undefined1  [16])0x0;
      if (plVar38 == (long *)0x0) goto LAB_0011243b;
    }
    local_f8 = (void *)0x0;
    pvStack_100 = (void *)0x0;
    local_e0 = uVar36;
    local_f0 = (undefined1  [16])0x0;
    pRVar52 = (Ref *)*plVar38;
    if (pRVar52 != (Ref *)0x0) {
      local_1dc = 0;
      do {
        lVar30 = *(long *)(*(long *)pRVar52 + 0x188);
        if ((lVar30 == 0) || (*(uint *)(lVar30 + -8) < 2)) {
LAB_0011204e:
          Resource::get_scene_unique_id();
          if ((local_148 == (Object *)0x0) || (lVar30 = *(long *)(local_148 + -8), (int)lVar30 == 0)
             ) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
LAB_00112077:
            uVar31 = local_138._0_8_;
            local_198 = (Object *)0x0;
LAB_001120d1:
            local_238 = local_178;
            Resource::generate_scene_unique_id();
            local_148 = (Object *)&_LC167;
            local_180 = 0;
            local_140 = 1;
            String::parse_latin1((StrRange *)&local_180);
            local_190 = 0;
            Ref<Resource>::operator=((Ref<Resource> *)&local_190,*(Ref **)pRVar52);
            _resource_get_class(local_188,(Ref<Resource> *)&local_190);
            String::operator+((String *)local_238,(String *)local_188);
            String::operator+((String *)&local_148,(String *)local_238);
            if (local_198 != local_148) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
              local_198 = local_148;
              local_148 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            CowData<char32_t>::_unref(local_238);
            CowData<char32_t>::_unref(local_188);
            Ref<Resource>::unref((Ref<Resource> *)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
            if ((uVar31 != 0) && (local_118._4_4_ != 0)) {
              uVar26 = *(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4);
              lVar30 = *(long *)(hash_table_size_primes_inv + (local_118 & 0xffffffff) * 8);
              uVar28 = String::hash();
              uVar36 = CONCAT44(0,uVar26);
              uVar23 = local_128._8_8_;
              uVar41 = 1;
              if (uVar28 != 0) {
                uVar41 = uVar28;
              }
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)uVar41 * lVar30;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar36;
              lVar47 = SUB168(auVar6 * auVar10,8);
              uVar28 = *(uint *)(local_128._8_8_ + lVar47 * 4);
              iVar27 = SUB164(auVar6 * auVar10,8);
              if (uVar28 != 0) {
                uVar43 = 0;
                do {
                  if (uVar28 == uVar41) {
                    cVar24 = String::operator==((String *)
                                                (uVar31 + (ulong)*(uint *)(local_138._8_8_ +
                                                                          lVar47 * 4) * 8),
                                                (String *)&local_198);
                    if (cVar24 != '\0') goto LAB_001120d1;
                  }
                  uVar43 = uVar43 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)(iVar27 + 1) * lVar30;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar36;
                  lVar47 = SUB168(auVar7 * auVar11,8);
                  uVar28 = *(uint *)(uVar23 + lVar47 * 4);
                  iVar27 = SUB164(auVar7 * auVar11,8);
                  if ((uVar28 == 0) ||
                     (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar28 * lVar30, auVar12._8_8_ = 0,
                     auVar12._0_8_ = uVar36, auVar9._8_8_ = 0,
                     auVar9._0_8_ = (ulong)((uVar26 + iVar27) - SUB164(auVar8 * auVar12,8)) * lVar30
                     , auVar13._8_8_ = 0, auVar13._0_8_ = uVar36,
                     SUB164(auVar9 * auVar13,8) < uVar43)) break;
                } while( true );
              }
            }
            Resource::set_scene_unique_id(*(String **)pRVar52);
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                      ((String *)&local_148);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          }
          else {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            if ((int)lVar30 == 1) goto LAB_00112077;
          }
          local_238 = local_178;
          Resource::get_scene_unique_id();
          operator+((char *)&local_170,(String *)"local://");
          local_148 = (Object *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_148,(Ref *)local_1b0);
          save_unicode_string((String *)&local_148,(CowData<char32_t> *)&local_170,0);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_148);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          CowData<char32_t>::_unref(local_238);
          if (this[0x14] != (ResourceFormatSaverBinaryInstance)0x0) {
            plVar38 = *(long **)pRVar52;
            pcVar2 = *(code **)(*plVar38 + 0x188);
            Resource::get_scene_unique_id();
            local_180 = 0;
            String::parse_latin1((String *)&local_180,"::");
            String::operator+((String *)local_238,param_1);
            String::operator+((String *)&local_148,(String *)local_238);
            (*pcVar2)(plVar38,(String *)&local_148,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            CowData<char32_t>::_unref(local_238);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          }
          Object::set_edited(SUB81(*(undefined8 *)pRVar52,0));
        }
        else {
          pcVar4 = (char *)(*(long *)pRVar52 + 0x188);
          iVar27 = String::find(pcVar4,0x113b5b);
          if ((iVar27 != -1) || (cVar24 = String::begins_with(pcVar4), cVar24 != '\0'))
          goto LAB_0011204e;
          Resource::get_path();
          local_148 = (Object *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_148,(Ref *)local_1b0);
          save_unicode_string((String *)&local_148,(CowData<char32_t> *)&local_170,0);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_148);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        }
        uVar36 = (**(code **)(*(long *)pOVar51 + 0x1c8))(pOVar51);
        Vector<unsigned_long>::push_back((Vector<unsigned_long> *)&local_158,uVar36);
        (**(code **)(*(long *)pOVar51 + 0x280))(pOVar51,0);
        piVar39 = (int *)HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                         ::operator[]((HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
                                       *)local_250,pRVar52);
        pRVar52 = *(Ref **)(pRVar52 + 8);
        *piVar39 = local_1dc;
        local_1dc = local_1dc + 1;
      } while (pRVar52 != (Ref *)0x0);
    }
  }
LAB_0011243b:
  pOVar29 = local_1b0;
  local_140 = 0;
  if ((local_1a0 == (undefined1 (*) [16])0x0) || (lVar30 = *(long *)*local_1a0, lVar30 == 0)) {
LAB_001126ee:
    lVar40 = *(long *)pOVar51;
  }
  else {
    do {
      uVar36 = (**(code **)(*(long *)pOVar51 + 0x1c8))(pOVar51);
      Vector<unsigned_long>::push_back((Vector<unsigned_long> *)&local_148,uVar36);
      local_170 = (Ref *)0x0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_170,(Ref *)pOVar29);
      save_unicode_string((Ref<FileAccess> *)&local_170,lVar30,0);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_170);
      uVar44 = 0;
      if (*(long *)(lVar30 + 8) != 0) {
        uVar44 = *(undefined4 *)(*(long *)(lVar30 + 8) + 0x10);
      }
      (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,uVar44);
      if ((*(undefined8 **)(lVar30 + 8) != (undefined8 *)0x0) &&
         (puVar49 = (undefined4 *)**(undefined8 **)(lVar30 + 8), puVar49 != (undefined4 *)0x0)) {
        do {
          while( true ) {
            (**(code **)(*(long *)pOVar51 + 0x278))(pOVar51,*puVar49);
            if (pOVar29 != (Object *)0x0) break;
LAB_00112520:
            local_170 = (Ref *)0x0;
            write_variant((Ref<FileAccess> *)&local_170,puVar49 + 2,local_250,this + 0xa0,
                          this + 0x60,puVar49 + 8);
LAB_00112549:
            puVar49 = *(undefined4 **)(puVar49 + 0x14);
            if (puVar49 == (undefined4 *)0x0) goto LAB_001125e9;
          }
          local_170 = (Ref *)pOVar29;
          cVar24 = RefCounted::reference();
          if (cVar24 == '\0') goto LAB_00112520;
          write_variant((Ref<FileAccess> *)&local_170,puVar49 + 2,local_250,this + 0xa0,this + 0x60,
                        puVar49 + 8);
          cVar24 = RefCounted::unreference();
          if ((cVar24 == '\0') || (cVar24 = predelete_handler(pOVar29), cVar24 == '\0'))
          goto LAB_00112549;
          (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
          Memory::free_static(pOVar29,false);
          puVar49 = *(undefined4 **)(puVar49 + 0x14);
        } while (puVar49 != (undefined4 *)0x0);
      }
LAB_001125e9:
      lVar42 = local_140;
      lVar30 = *(long *)(lVar30 + 0x10);
    } while (lVar30 != 0);
    if (local_140 == 0) goto LAB_001126ee;
    for (lVar30 = 0; lVar40 = *(long *)pOVar51, lVar30 < *(long *)(lVar42 + -8); lVar30 = lVar30 + 1
        ) {
      if (local_150 == 0) {
        lVar47 = 0;
LAB_00111d5b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar30,lVar47,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar47 = *(long *)(local_150 + -8);
      if (lVar47 <= lVar30) goto LAB_00111d5b;
      (**(code **)(lVar40 + 0x1b8))(pOVar51,*(undefined8 *)(local_150 + lVar30 * 8));
      lVar47 = *(long *)(lVar42 + -8);
      if (lVar47 <= lVar30) goto LAB_00111d5b;
      (**(code **)(*(long *)pOVar51 + 0x280))(pOVar51);
    }
  }
  (**(code **)(lVar40 + 0x1c0))(pOVar51,0);
  (**(code **)(*(long *)pOVar51 + 0x2d0))(pOVar51,&_LC168,4);
  iVar27 = (**(code **)(*(long *)pOVar51 + 0x250))(pOVar51);
  local_1e0 = 0;
  if (iVar27 != 0) {
    iVar27 = (**(code **)(*(long *)pOVar51 + 0x250))(pOVar51);
    local_1e0 = 0x14;
    if (iVar27 == 0x12) {
      local_1e0 = 0;
    }
  }
  CowData<unsigned_long>::_unref((CowData<unsigned_long> *)&local_140);
  if (pvStack_100 != (void *)0x0) {
    pvVar46 = pvStack_100;
    if (local_e0._4_4_ != 0) {
      uVar26 = *(uint *)(hash_table_size_primes + (local_e0 & 0xffffffff) * 4);
      if (uVar26 == 0) {
        local_e0 = local_e0 & 0xffffffff;
        local_f0 = (undefined1  [16])0x0;
      }
      else {
        lVar30 = 0;
        do {
          if (*(int *)((long)local_f8 + lVar30) != 0) {
            pvVar46 = *(void **)((long)pvVar46 + lVar30 * 2);
            *(int *)((long)local_f8 + lVar30) = 0;
            if ((*(long *)((long)pvVar46 + 0x10) != 0) &&
               (cVar24 = RefCounted::unreference(), cVar24 != '\0')) {
              pOVar51 = *(Object **)((long)pvVar46 + 0x10);
              cVar24 = predelete_handler(pOVar51);
              if (cVar24 != '\0') {
                (**(code **)(*(long *)pOVar51 + 0x140))(pOVar51);
                Memory::free_static(pOVar51,false);
              }
            }
            Memory::free_static(pvVar46,false);
            *(undefined8 *)((long)pvStack_100 + lVar30 * 2) = 0;
            pvVar46 = pvStack_100;
          }
          lVar30 = lVar30 + 4;
        } while ((ulong)uVar26 * 4 - lVar30 != 0);
        local_e0 = local_e0 & 0xffffffff;
        local_f0 = (undefined1  [16])0x0;
        if (pvVar46 == (void *)0x0) goto LAB_00112809;
      }
    }
    Memory::free_static(pvVar46,false);
    Memory::free_static(local_f8,false);
  }
LAB_00112809:
  uVar31 = local_138._0_8_;
  if ((CowData<char32_t> *)local_138._0_8_ != (CowData<char32_t> *)0x0) {
    uVar36 = (ulong)local_118._4_4_;
    uVar23 = local_128._8_8_;
    if (local_118._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4) != 0) {
        memset((void *)local_128._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4) * 4);
      }
      pCVar45 = (CowData<char32_t> *)uVar31;
      do {
        pCVar50 = pCVar45 + 8;
        CowData<char32_t>::_unref(pCVar45);
        pCVar45 = pCVar50;
      } while ((CowData<char32_t> *)(uVar31 + uVar36 * 8) != pCVar50);
    }
    Memory::free_static((void *)uVar31,false);
    Memory::free_static((void *)local_128._0_8_,false);
    Memory::free_static((void *)local_138._8_8_,false);
    Memory::free_static((void *)uVar23,false);
  }
  CowData<unsigned_long>::_unref((CowData<unsigned_long> *)&local_150);
  CowData<Ref<Resource>>::_unref((CowData<Ref<Resource>> *)&local_160);
  List<ResourceFormatSaverBinaryInstance::ResourceData,DefaultAllocator>::~List
            ((List<ResourceFormatSaverBinaryInstance::ResourceData,DefaultAllocator> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
LAB_00111b43:
  Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1e0;
LAB_00110e9d:
  do {
    if (uVar36 == *(ulong *)(lVar47 + 0x30)) {
      if (pvStack_100 < *(void **)(lVar47 + 0x38)) goto LAB_00110e90;
      if (pvStack_100 <= *(void **)(lVar47 + 0x38)) goto LAB_00110ac7;
      lVar47 = *(long *)(lVar47 + 8);
    }
    else if (uVar36 < *(ulong *)(lVar47 + 0x30)) {
LAB_00110e90:
      lVar47 = *(long *)(lVar47 + 0x10);
    }
    else {
      lVar47 = *(long *)(lVar47 + 8);
    }
  } while (lVar30 != lVar47);
  local_b8 = 0;
  local_b0 = (undefined1  [16])0x0;
  lVar47 = RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
           ::_insert((RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                      *)(this + 0x48),(NonPersistentKey *)local_250,(Variant *)&local_b8);
  if (::Variant::needs_deinit[(int)local_b8] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_00110ac7:
  ::Variant::operator=((Variant *)local_90,(Variant *)(lVar47 + 0x40));
LAB_00110ae0:
  if ((StringName::configured != '\0') && (pvStack_100 != (void *)0x0)) {
    StringName::unref();
  }
  if ((CONCAT44(uStack_104,local_108) != 0) && (cVar24 = RefCounted::unreference(), cVar24 != '\0'))
  {
    pOVar29 = (Object *)CONCAT44(uStack_104,local_108);
    cVar24 = predelete_handler(pOVar29);
    if (cVar24 != '\0') {
      (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
      Memory::free_static(pOVar29,false);
    }
  }
LAB_00110b18:
  iVar27 = *piVar39;
joined_r0x00110b1d:
  if (iVar27 == 0x18) {
    local_230 = (Variant *)local_90;
    ::Variant::Variant((Variant *)&local_b8,pSVar5);
    cVar24 = Dictionary::has(local_168);
    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (cVar24 != '\0') {
      lVar30 = ::Variant::get_validated_object();
      if (((lVar30 == 0) ||
          (pOVar29 = (Object *)__dynamic_cast(lVar30,&Object::typeinfo,&Resource::typeinfo,0),
          pOVar29 == (Object *)0x0)) || (cVar24 = RefCounted::reference(), cVar24 == '\0')) {
        ::Variant::Variant((Variant *)&local_b8,pSVar5);
        pVVar34 = (Variant *)Dictionary::operator[](local_168);
        ::Variant::operator=(local_230,pVVar34);
        if (::Variant::needs_deinit[(int)local_b8] != '\0') {
          ::Variant::_clear_internal();
        }
      }
      else {
        cVar24 = RefCounted::unreference();
        if ((cVar24 != '\0') && (cVar24 = predelete_handler(pOVar29), cVar24 != '\0')) {
          (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
          Memory::free_static(pOVar29,false);
        }
      }
    }
  }
  local_230 = (Variant *)local_90;
  StringName::StringName((StringName *)local_250,pSVar5,false);
  (**(code **)(*(long *)*plVar38 + 0x48))((String *)&local_148);
  StringName::StringName((StringName *)local_138,(String *)&local_148,false);
  ClassDB::class_get_default_property_value
            ((StringName *)local_d8,(StringName *)local_138,(bool *)local_250);
  if ((StringName::configured != '\0') && (local_138._0_8_ != 0)) {
    StringName::unref();
  }
  pOVar29 = local_148;
  if (local_148 != (Object *)0x0) {
    LOCK();
    pOVar1 = local_148 + -0x10;
    *(long *)pOVar1 = *(long *)pOVar1 + -1;
    UNLOCK();
    if (*(long *)pOVar1 == 0) {
      local_148 = (Object *)0x0;
      Memory::free_static(pOVar29 + -0x10,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_104,local_108) != 0)) {
    StringName::unref();
  }
  if (local_d8[0] != 0) {
    local_108 = 0;
    local_b0 = (undefined1  [16])0x0;
    local_138[0] = 1;
    local_b8 = local_b8 & 0xffffffff00000000;
    ::Variant::evaluate((Operator *)local_250,local_230,(Variant *)local_d8,(Variant *)&local_b8,
                        (bool *)local_138);
    bVar25 = ::Variant::operator_cast_to_bool((Variant *)&local_b8);
    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
      ::Variant::_clear_internal();
    }
    if (bVar25) {
      if (::Variant::needs_deinit[local_d8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      lVar30 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar48 = (long *)(local_58 + -0x10);
        *plVar48 = *plVar48 + -1;
        UNLOCK();
        if (*plVar48 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar30 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
        StringName::unref();
      }
      goto LAB_00110de1;
    }
  }
  local_78 = *piVar39;
  if (local_70._0_8_ != *(long *)(piVar39 + 2)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_70,(CowData *)pSVar5);
  }
  StringName::operator=((StringName *)(local_70 + 8),(StringName *)(piVar39 + 4));
  local_60 = piVar39[6];
  if (local_58 != *(long *)(piVar39 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(piVar39 + 8));
  }
  local_50 = piVar39[10];
  if (*(long *)(*pauVar32 + 8) == 0) {
    pauVar35 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(*pauVar32 + 8) = pauVar35;
    *(undefined4 *)pauVar35[1] = 0;
    *pauVar35 = (undefined1  [16])0x0;
  }
  piVar33 = (int *)operator_new(0x68,DefaultAllocator::alloc);
  piVar33[2] = 0;
  piVar33[8] = 0;
  piVar33[0xe] = 0;
  piVar33[0x10] = 0;
  piVar33[0x11] = 0;
  piVar33[0x12] = 6;
  piVar33[0x18] = 0;
  piVar33[0x19] = 0;
  *(undefined1 (*) [16])(piVar33 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar33 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(piVar33 + 0x14) = (undefined1  [16])0x0;
  *piVar33 = local_98[0];
  ::Variant::operator=((Variant *)(piVar33 + 2),local_230);
  piVar33[8] = local_78;
  if (*(long *)(piVar33 + 10) != local_70._0_8_) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(piVar33 + 10),(CowData *)local_70);
  }
  StringName::operator=((StringName *)(piVar33 + 0xc),(StringName *)(local_70 + 8));
  piVar33[0xe] = local_60;
  if (*(long *)(piVar33 + 0x10) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(piVar33 + 0x10),(CowData *)&local_58);
  }
  piVar33[0x12] = local_50;
  uVar31 = *(undefined8 *)(*(long *)(*pauVar32 + 8) + 8);
  *(long *)(piVar33 + 0x18) = *(long *)(*pauVar32 + 8);
  plVar48 = *(long **)(*pauVar32 + 8);
  piVar33[0x14] = 0;
  piVar33[0x15] = 0;
  *(undefined8 *)(piVar33 + 0x16) = uVar31;
  if (plVar48[1] != 0) {
    *(int **)(plVar48[1] + 0x50) = piVar33;
  }
  plVar48[1] = (long)piVar33;
  if (*plVar48 == 0) {
    *plVar48 = (long)piVar33;
  }
  *(int *)(plVar48 + 2) = (int)plVar48[2] + 1;
  if (::Variant::needs_deinit[local_d8[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  lVar30 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar48 = (long *)(local_58 + -0x10);
    *plVar48 = *plVar48 + -1;
    UNLOCK();
    if (*plVar48 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar30 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
LAB_00110de1:
  uVar31 = local_70._0_8_;
  if (local_70._0_8_ != 0) {
    LOCK();
    plVar48 = (long *)(local_70._0_8_ + -0x10);
    *plVar48 = *plVar48 + -1;
    UNLOCK();
    if (*plVar48 == 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_70._8_8_;
      local_70 = auVar17 << 0x40;
      Memory::free_static((void *)(uVar31 + -0x10),false);
    }
  }
  if (::Variant::needs_deinit[local_90[0]] == '\0') {
LAB_00110e2e:
    piVar39 = *(int **)(piVar39 + 0xc);
  }
  else {
    ::Variant::_clear_internal();
    piVar39 = *(int **)(piVar39 + 0xc);
  }
joined_r0x00110e35:
  if (piVar39 == (int *)0x0) goto LAB_00110e3b;
  goto LAB_00110900;
}



/* ResourceFormatSaverBinary::set_uid(String const&, long) */

undefined4 ResourceFormatSaverBinary::set_uid(String *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_100;
  String local_f8 [24];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_60;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_100);
  local_f8[0] = (String)0x0;
  local_f8[1] = (String)0x0;
  local_f8[2] = (String)0x0;
  local_f8[3] = (String)0x0;
  local_f8[4] = (String)0x0;
  local_f8[5] = (String)0x0;
  local_f8[6] = (String)0x0;
  local_f8[7] = (String)0x0;
  local_f8[8] = (String)0x0;
  local_f8[9] = (String)0x0;
  local_f8[10] = (String)0x0;
  local_f8[0xb] = (String)0x0;
  local_f8[0xc] = (String)0x0;
  local_f8[0xd] = (String)0x0;
  local_f8[0xe] = (String)0x0;
  local_f8[0xf] = (String)0x0;
  local_a8 = &_GlobalNilClass::_nil;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_b8 = _LC116;
  local_b0 = 0;
  local_a0 = 0;
  local_70 = _LC116;
  local_60 = 0;
  local_30 = _LC116;
  local_28 = 0;
  uVar3 = ResourceFormatSaverBinaryInstance::set_uid(local_f8,(long)&local_100);
  ResourceFormatSaverBinaryInstance::~ResourceFormatSaverBinaryInstance
            ((ResourceFormatSaverBinaryInstance *)local_f8);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverBinary::save(Ref<Resource> const&, String const&, unsigned int) */

undefined4 __thiscall
ResourceFormatSaverBinary::save
          (ResourceFormatSaverBinary *this,Ref *param_1,String *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_110;
  ResourceFormatSaverBinaryInstance local_108 [24];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_110);
  local_108[0] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[1] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[2] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[3] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[4] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[5] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[6] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[7] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[8] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[9] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[10] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[0xb] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[0xc] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[0xd] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[0xe] = (ResourceFormatSaverBinaryInstance)0x0;
  local_108[0xf] = (ResourceFormatSaverBinaryInstance)0x0;
  local_b8 = &_GlobalNilClass::_nil;
  local_f0 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_d0 = 0;
  local_c8 = _LC116;
  local_c0 = 0;
  local_b0 = 0;
  local_80 = _LC116;
  local_70 = 0;
  local_40 = _LC116;
  local_38 = 0;
  uVar3 = ResourceFormatSaverBinaryInstance::save(local_108,(String *)&local_110,param_1,param_3);
  ResourceFormatSaverBinaryInstance::~ResourceFormatSaverBinaryInstance(local_108);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1217,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1217,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* FileAccess::set_big_endian(bool) */

void __thiscall FileAccess::set_big_endian(FileAccess *this,bool param_1)

{
  this[0x17c] = (FileAccess)param_1;
  return;
}



/* ResourceFormatLoader::is_class_ptr(void*) const */

uint __thiscall ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x1217,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1216,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1217,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatLoader::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_notificationv(int, bool) */

void ResourceFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceFormatLoader::is_import_valid(String const&) const */

undefined8 ResourceFormatLoader::is_import_valid(String *param_1)

{
  return 1;
}



/* ResourceFormatLoader::is_imported(String const&) const */

undefined8 ResourceFormatLoader::is_imported(String *param_1)

{
  return 0;
}



/* ResourceFormatLoader::get_import_order(String const&) const */

undefined8 ResourceFormatLoader::get_import_order(String *param_1)

{
  return 0;
}



/* ResourceFormatSaver::is_class_ptr(void*) const */

uint __thiscall ResourceFormatSaver::is_class_ptr(ResourceFormatSaver *this,void *param_1)

{
  return (uint)CONCAT71(0x1217,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1216,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1217,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatSaver::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatSaver::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatSaver::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatSaver::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatSaver::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatSaver::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatSaver::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatSaver::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_notificationv(int, bool) */

void ResourceFormatSaver::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String const&>::is_valid()
   const */

undefined8
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::get_object() const */

undefined8
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
get_argument_count(CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121180;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121180;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceFormatLoader::_get_class_namev() const */

undefined8 * ResourceFormatLoader::_get_class_namev(void)

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
LAB_00112fd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112fd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_0011303e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_0011303e:
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
LAB_001130b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001130b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011311e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011311e:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceFormatSaver::_get_class_namev() const */

undefined8 * ResourceFormatSaver::_get_class_namev(void)

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
LAB_001131a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001131a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatSaver");
      goto LAB_0011320e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatSaver");
LAB_0011320e:
  return &_get_class_namev()::_class_name_static;
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



/* ResourceFormatLoader::get_import_group_file(String const&) const */

String * ResourceFormatLoader::get_import_group_file(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<String, DefaultAllocator>::Element*, List<String,
   DefaultAllocator>::AuxiliaryComparator<Comparator<String> >, true>::introsort(long, long,
   List<String, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<String,DefaultAllocator>::Element*,List<String,DefaultAllocator>::AuxiliaryComparator<Comparator<String>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  String *pSVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element **ppEVar10;
  Element **ppEVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar11 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_001133c1:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar1);
    if (cVar4 == '\0') {
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar10 = ppEVar11;
      if (cVar4 != '\0') goto LAB_0011341d;
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
    }
    else {
      cVar4 = String::operator<((String *)*ppEVar1,(String *)*ppEVar5);
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_0011341d;
      cVar4 = String::operator<((String *)*ppEVar11,(String *)*ppEVar5);
      ppEVar1 = ppEVar11;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_0011341d:
    pSVar2 = (String *)*ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = String::operator<((String *)param_3[local_78],pSVar2);
      if (cVar4 == '\0') {
LAB_00113464:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = String::operator<(pSVar2,(String *)*ppEVar5), cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_001134d0;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00113464;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_00113592:
  lVar7 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar7;
  local_58 = lVar7 * 2 + 2;
  do {
    pSVar2 = (String *)*local_50;
    lVar6 = local_58;
    local_70 = lVar7;
    if (local_58 < lVar9) {
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar6],
                                  (String *)param_3[param_1 + lVar6 + -1]);
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar6 + -1;
        lVar12 = lVar6;
        if (cVar4 == '\0') {
          lVar12 = lVar6 + 1;
          lVar8 = lVar6;
          ppEVar11 = param_3 + param_1 + lVar6;
        }
        lVar6 = lVar12 * 2;
        param_3[local_70 + param_1] = *ppEVar11;
        local_70 = lVar8;
      } while (lVar6 < lVar9);
      ppEVar5 = ppEVar11;
      if (lVar6 == lVar9) {
LAB_0011385d:
        lVar8 = lVar6 + -1;
        ppEVar11 = param_3 + param_1 + lVar8;
        *ppEVar5 = *ppEVar11;
      }
      lVar6 = lVar8 + -1;
      if (lVar8 <= lVar7) goto LAB_001138ae;
      do {
        lVar12 = lVar6 >> 1;
        ppEVar11 = param_3 + param_1 + lVar12;
        cVar4 = String::operator<((String *)*ppEVar11,pSVar2);
        if (cVar4 == '\0') {
          param_3[lVar8 + param_1] = (Element *)pSVar2;
          goto joined_r0x0011371d;
        }
        param_3[lVar8 + param_1] = *ppEVar11;
        lVar6 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        lVar8 = lVar12;
      } while (lVar7 < lVar12);
      *ppEVar11 = (Element *)pSVar2;
joined_r0x0011371d:
      if (lVar7 == 0) goto LAB_0011371f;
    }
    else {
      ppEVar5 = local_50;
      ppEVar11 = local_50;
      if (local_58 == lVar9) goto LAB_0011385d;
LAB_001138ae:
      *ppEVar11 = (Element *)pSVar2;
    }
    local_50 = local_50 + -1;
    lVar7 = lVar7 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_001134d0:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_00113592;
  goto LAB_001133c1;
LAB_0011371f:
  ppEVar11 = param_3 + param_1;
  local_68 = (local_78 + -1) - param_1;
LAB_00113740:
  do {
    pSVar2 = (String *)ppEVar11[local_68];
    ppEVar11[local_68] = *ppEVar11;
    if (local_68 < 3) {
      if (local_68 != 2) {
        *ppEVar11 = (Element *)pSVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar7 = 0;
      *ppEVar11 = param_3[lVar9];
LAB_00113821:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar7;
        cVar4 = String::operator<((String *)*ppEVar1,pSVar2);
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar7 == 0) {
          local_68 = local_68 + -1;
          *ppEVar1 = (Element *)pSVar2;
          goto LAB_00113740;
        }
        lVar9 = param_1 + lVar7;
        lVar7 = (lVar7 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = String::operator<((String *)param_3[param_1 + lVar9],
                                  (String *)param_3[param_1 + lVar9 + -1]);
        lVar6 = lVar9 + -1;
        lVar7 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar7 = lVar9 + 1;
          lVar6 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar7 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar6;
      } while (lVar9 < local_68);
      if (lVar9 == local_68) {
        lVar9 = local_68 + -1 + param_1;
        lVar7 = local_68 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_00113821;
      }
      lVar9 = param_1 + lVar6;
      lVar7 = (lVar6 + -1) / 2;
      if (0 < lVar6) goto LAB_00113821;
    }
    local_68 = local_68 + -1;
    *ppEVar5 = (Element *)pSVar2;
  } while( true );
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



/* ResourceFormatSaverBinary::~ResourceFormatSaverBinary() */

void __thiscall
ResourceFormatSaverBinary::~ResourceFormatSaverBinary(ResourceFormatSaverBinary *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = CharString::get_data;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a11;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a11;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a11;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a11;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00113a11:
  *(undefined ***)this = &PTR__initialize_classv_00121180;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatSaverBinary::~ResourceFormatSaverBinary() */

void __thiscall
ResourceFormatSaverBinary::~ResourceFormatSaverBinary(ResourceFormatSaverBinary *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = CharString::get_data;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113ae1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113ae1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113ae1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113ae1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00113ae1:
  *(undefined ***)this = &PTR__initialize_classv_00121180;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<double>::_copy_on_write(void)

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



/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_long>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<long>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector4>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector4>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector4>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<char>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00113ee2(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ResourceLoaderBinary::ExtResource>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ResourceLoaderBinary::parse_variant(Variant&) [clone .cold] */

void ResourceLoaderBinary::parse_variant(Variant *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ResourceLoaderBinary::IntResource>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ResourceLoaderBinary::IntResource>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Resource> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Resource>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ResourceFormatSaver::get_class() const */

void ResourceFormatSaver::get_class(void)

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



/* ResourceFormatLoader::get_class() const */

void ResourceFormatLoader::get_class(void)

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
LAB_001144c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001144c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001144e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001144e6:
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



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

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
  local_78 = "ResourceFormatLoader";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatLoader";
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
LAB_001148c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001148c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001148e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001148e5:
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
  StringName::StringName((StringName *)&local_78,"ResourceFormatLoader",false);
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



/* ResourceFormatSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatSaver::_get_property_listv(ResourceFormatSaver *this,List *param_1,bool param_2)

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
  local_78 = "ResourceFormatSaver";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatSaver";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_00114d18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00114d18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00114d35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00114d35:
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
  StringName::StringName((StringName *)&local_78,"ResourceFormatSaver",false);
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



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::call
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  code *pcVar2;
  Variant *pVVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  pcVar2 = *(code **)(this + 0x28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_2 < 4) {
    if (param_2 == 3) {
      pVVar3 = param_1[2];
      *(undefined4 *)param_4 = 0;
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)pVVar3,4);
      uVar4 = _LC25;
      if (cVar6 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar4;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_48);
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
      uVar4 = _LC26;
      if (cVar6 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar4;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_40);
      cVar6 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,4);
      uVar4 = _LC27;
      if (cVar6 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar4;
      }
      ::Variant::operator_cast_to_String((Variant *)&local_38);
      (*pcVar2)((Variant *)&local_38,(Variant *)&local_40,&local_48);
      lVar5 = local_38;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 3;
    }
  }
  else {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 3;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::_initialize_classv() */

void ResourceFormatSaver::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_0011533b;
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
    if (local_68 == 0) {
LAB_0011544a:
      if ((code *)PTR__bind_methods_00126010 != RefCounted::_bind_methods) {
LAB_0011545a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011544a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00126010 != RefCounted::_bind_methods) goto LAB_0011545a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ResourceFormatSaver";
  local_70 = 0;
  local_50 = 0x13;
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
  if ((code *)PTR__bind_methods_00126008 != RefCounted::_bind_methods) {
    ResourceFormatSaver::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0011533b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatLoader::_initialize_classv() */

void ResourceFormatLoader::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_0011563b;
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
    if (local_68 == 0) {
LAB_0011574a:
      if ((code *)PTR__bind_methods_00126010 != RefCounted::_bind_methods) {
LAB_0011575a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011574a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00126010 != RefCounted::_bind_methods) goto LAB_0011575a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ResourceFormatLoader";
  local_70 = 0;
  local_50 = 0x14;
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
  if ((code *)PTR__bind_methods_00126018 != RefCounted::_bind_methods) {
    ResourceFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0011563b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
            if (lVar5 == 0) goto LAB_0011583f;
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
LAB_0011583f:
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
    if (cVar6 != '\0') goto LAB_001158f3;
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
              if (lVar5 == 0) goto LAB_001159a3;
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
LAB_001159a3:
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
      if (cVar6 != '\0') goto LAB_001158f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001158f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::is_class(String const&) const */

undefined8 __thiscall ResourceFormatSaver::is_class(ResourceFormatSaver *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00115acf;
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
LAB_00115acf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00115b83;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatSaver");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115b83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::is_class(String const&) const */

undefined8 __thiscall ResourceFormatLoader::is_class(ResourceFormatLoader *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00115c4f;
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
LAB_00115c4f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00115d03;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00115d03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Thread::caller_id;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116833;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00116833:
  *(undefined ***)this = &PTR__initialize_classv_00121180;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoaderBinary::~ResourceFormatLoaderBinary() */

void __thiscall
ResourceFormatLoaderBinary::~ResourceFormatLoaderBinary(ResourceFormatLoaderBinary *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001212e0;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderBinary::~ResourceFormatLoaderBinary() */

void __thiscall
ResourceFormatLoaderBinary::~ResourceFormatLoaderBinary(ResourceFormatLoaderBinary *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001212e0;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  ~ResourceFormatLoader(this);
  operator_delete(this,0x288);
  return;
}



/* ResourceLoader::notify_dependency_error(String const&, String const&, String const&) */

void ResourceLoader::notify_dependency_error(String *param_1,String *param_2,String *param_3)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  Callable *pCVar5;
  CallableCustom *this;
  long lVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_100;
  long local_f8;
  long local_f0;
  Callable local_e8 [16];
  Callable local_d8 [16];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dep_err_notify != (code *)0x0) {
    if (PTR_caller_id_00126020 != (undefined *)0x0) {
      Thread::caller_id();
    }
    pCVar5 = MessageQueue::main_singleton;
    pcVar4 = dep_err_notify;
    if (*(long *)(in_FS_OFFSET + lRam000000000011692e) == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*dep_err_notify)(param_1,param_2,param_3);
        return;
      }
      goto LAB_00116c6d;
    }
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC4;
    *(code **)(this + 0x28) = pcVar4;
    *(undefined ***)this = &PTR_hash_00121650;
    *(undefined8 *)(this + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "ep_err_notify";
    Callable::Callable(local_e8,this);
    local_f0 = 0;
    plVar1 = (long *)(*(long *)param_3 + -0x10);
    if (*(long *)param_3 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00116a17;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar3 == lVar6;
        if (bVar8) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_f0 = *(long *)param_3;
      }
    }
LAB_00116a17:
    local_f8 = 0;
    plVar1 = (long *)(*(long *)param_2 + -0x10);
    if (*(long *)param_2 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00116a4d;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar3 == lVar6;
        if (bVar8) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_f8 = *(long *)param_2;
      }
    }
LAB_00116a4d:
    local_100 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00116a85;
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar3 == lVar6;
        if (bVar8) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar6 != -1) {
        local_100 = *(long *)param_1;
      }
    }
LAB_00116a85:
    ::Variant::Variant((Variant *)local_a8,(String *)&local_100);
    ::Variant::Variant(local_90,(String *)&local_f8);
    ::Variant::Variant(local_78,(String *)&local_f0);
    local_58 = (undefined1  [16])0x0;
    pVVar7 = local_48;
    local_60 = 0;
    local_c8 = (Variant *)local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    Callable::bindp((Variant **)local_d8,(int)local_e8);
    do {
      pVVar2 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (::Variant::needs_deinit[*(int *)pVVar2] != '\0') {
        ::Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)local_a8);
    local_a0 = (undefined1  [16])0x0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    CallQueue::push_callablep(pCVar5,(Variant **)local_d8,0,false);
    if (::Variant::needs_deinit[local_a8[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    Callable::~Callable(local_d8);
    lVar3 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        Callable::~Callable(local_e8);
        goto LAB_00116bb2;
      }
    }
    Callable::~Callable(local_e8);
  }
LAB_00116bb2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116c6d:
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



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
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



/* List<Ref<Resource>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<Resource>,DefaultAllocator>::~List(List<Ref<Resource>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
::operator[](HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  Object *pOVar4;
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  undefined8 *puVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint *puVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_001178c0:
    uVar40 = (ulong)uVar56;
    uVar45 = uVar40 * 4;
    uVar49 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar56 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar44 + uVar49)) && (pvVar44 < (void *)((long)pvVar2 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00117742;
      }
      memset(pvVar2,0,uVar45);
      memset(pvVar44,0,uVar49);
      iVar46 = *(int *)(this + 0x2c);
LAB_00117746:
      if (iVar46 != 0) {
LAB_0011774e:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar53 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar54 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar53 != 0) {
          uVar39 = uVar53;
        }
        uVar55 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar3;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar47 = SUB168(auVar17 * auVar33,8);
        uVar53 = *(uint *)(lVar54 + lVar47 * 4);
        uVar52 = SUB164(auVar17 * auVar33,8);
        if (uVar53 != 0) {
          do {
            if (uVar53 == uVar39) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                pOVar4 = *(Object **)(pauVar42[1] + 8);
                if (pOVar4 != (Object *)0x0) {
                  *(undefined8 *)(pauVar42[1] + 8) = 0;
                  cVar37 = RefCounted::unreference();
                  if ((cVar37 != '\0') && (cVar37 = predelete_handler(pOVar4), cVar37 != '\0')) {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                  }
                  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                }
                goto LAB_001175cb;
              }
              lVar54 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar52 + 1) * lVar3;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar47 = SUB168(auVar18 * auVar34,8);
            uVar53 = *(uint *)(lVar54 + lVar47 * 4);
            uVar52 = SUB164(auVar18 * auVar34,8);
          } while ((uVar53 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar53 * lVar3, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar52) - SUB164(auVar19 * auVar35,8)) * lVar3,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar55 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar56;
      goto LAB_00117204;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00117204;
    if (iVar46 != 0) goto LAB_0011774e;
LAB_0011722a:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001175cb;
    }
    uVar40 = (ulong)(uVar56 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    if (uVar56 + 1 < 2) {
      uVar40 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar49 = (ulong)uVar56;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar49 * 4;
    uVar45 = uVar49 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar49);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar56 = *(uint *)((long)pvVar2 + uVar40 * 4);
        if (uVar56 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar39);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar56 * lVar54;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar47 = SUB168(auVar5 * auVar21,8);
          puVar51 = (uint *)(lVar3 + lVar47 * 4);
          iVar46 = SUB164(auVar5 * auVar21,8);
          uVar53 = *puVar51;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar53 * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar6 * auVar22,8)) * lVar54;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar55 = SUB164(auVar7 * auVar23,8);
            uVar50 = uVar41;
            if (uVar55 < uVar52) {
              *puVar51 = uVar56;
              puVar43 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar43;
              *puVar43 = uVar41;
              uVar56 = uVar53;
              uVar52 = uVar55;
            }
            uVar52 = uVar52 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar46 + 1) * lVar54;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar47 = SUB168(auVar8 * auVar24,8);
            puVar51 = (uint *)(lVar3 + lVar47 * 4);
            iVar46 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar50;
            uVar53 = *puVar51;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar51 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar56);
    if (iVar46 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar54 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar52 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar47 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar54 + lVar47 * 4);
      uVar53 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar39 == uVar38) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar53 * 8);
              goto LAB_001175cb;
            }
            lVar54 = *(long *)(this + 0x10);
          }
          uVar52 = uVar52 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar47 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar54 + lVar47 * 4);
          uVar53 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar3, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar53 + uVar56) - SUB164(auVar15 * auVar31,8)) * lVar3,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar52 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_001178c0;
LAB_00117742:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00117746;
    }
LAB_00117204:
    if ((float)uVar40 * __LC45 < (float)(iVar46 + 1)) goto LAB_0011722a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *pauVar42 = (undefined1  [16])0x0;
LAB_0011786b:
    *(undefined8 *)(pauVar42[1] + 8) = 0;
LAB_001174b3:
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 != (undefined8 *)0x0) goto LAB_001174c0;
LAB_001176fd:
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *(undefined8 *)*pauVar42 = 0;
    *(undefined8 *)(*pauVar42 + 8) = 0;
    if (lVar3 == 0) goto LAB_0011786b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar42 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar42[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001174b3;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 == (undefined8 *)0x0) goto LAB_001176fd;
LAB_001174c0:
    *puVar43 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar43;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar38 != 0) {
    uVar56 = uVar38;
  }
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar56 * lVar54;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar48 = SUB168(auVar9 * auVar25,8);
  lVar47 = *(long *)(this + 8);
  puVar51 = (uint *)(lVar3 + lVar48 * 4);
  iVar46 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar51;
  pauVar58 = pauVar42;
  if (uVar39 != 0) {
    uVar53 = 0;
    pauVar57 = pauVar42;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar54;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((iVar46 + uVar38) - SUB164(auVar10 * auVar26,8)) * lVar54;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar52 = SUB164(auVar11 * auVar27,8);
      pauVar58 = pauVar57;
      if (uVar52 < uVar53) {
        *puVar51 = uVar56;
        puVar43 = (undefined8 *)(lVar47 + lVar48 * 8);
        pauVar58 = (undefined1 (*) [16])*puVar43;
        *puVar43 = pauVar57;
        uVar53 = uVar52;
        uVar56 = uVar39;
      }
      uVar53 = uVar53 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar54;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar48 = SUB168(auVar12 * auVar28,8);
      puVar51 = (uint *)(lVar3 + lVar48 * 4);
      iVar46 = SUB164(auVar12 * auVar28,8);
      uVar39 = *puVar51;
      pauVar57 = pauVar58;
    } while (uVar39 != 0);
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar58;
  *puVar51 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001175cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00117b2c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_00117b2c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00117f78;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC45) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00117e55;
LAB_00117fb6:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_00117f78;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_00117fb6;
LAB_00117e55:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_00117f78:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* void Ref<FileAccessCompressed>::instantiate<>() */

void __thiscall Ref<FileAccessCompressed>::instantiate<>(Ref<FileAccessCompressed> *this)

{
  long lVar1;
  char cVar2;
  RefCounted *this_00;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (RefCounted *)operator_new(0x228,"");
  RefCounted::RefCounted(this_00);
  *(undefined2 *)(this_00 + 0x17c) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined2 *)(this_00 + 0x184) = 0;
  *(undefined2 *)(this_00 + 0x1bc) = 0;
  *(undefined4 *)(this_00 + 0x180) = 2;
  *(undefined8 *)(this_00 + 0x188) = 0;
  *(undefined4 *)(this_00 + 400) = 2;
  this_00[0x194] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 0x1a0) = 0;
  *(undefined4 *)(this_00 + 0x1a8) = 0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  *(undefined4 *)(this_00 + 0x1b8) = 0;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  *(undefined4 *)(this_00 + 0x1e0) = 0;
  *(undefined8 *)(this_00 + 0x1e8) = 0;
  *(undefined8 *)(this_00 + 0x1f8) = 0;
  *(undefined8 *)(this_00 + 0x200) = 0;
  *(undefined8 *)(this_00 + 0x208) = 0;
  *(undefined1 (*) [16])(this_00 + 0x1c8) = (undefined1  [16])0x0;
  String::parse_latin1((StrRange *)(this_00 + 0x208));
  *(undefined1 (*) [16])(this_00 + 0x218) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar4 = *(Object **)this;
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)this = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        this_00 = (RefCounted *)0x0;
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') goto LAB_0011831b;
      }
    }
  }
  else {
    pOVar4 = *(Object **)this;
    pOVar3 = pOVar4;
    if (this_00 != (RefCounted *)pOVar4) {
      *(RefCounted **)this = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
      pOVar3 = (Object *)this_00;
      if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
LAB_0011831b:
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pOVar3 = (Object *)this_00;
        if (this_00 == (RefCounted *)0x0) goto LAB_0011825c;
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar3,false);
        return;
      }
      goto LAB_00118358;
    }
  }
LAB_0011825c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00118358:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_001189b8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00118868;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011886c:
      if (iVar46 != 0) {
LAB_00118874:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_0011846c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_001184a3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_001184a3;
    if (iVar46 != 0) goto LAB_00118874;
LAB_001184c9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011846c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0011846c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_001189b8;
LAB_00118868:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011886c;
    }
LAB_001184a3:
    if ((float)uVar40 * __LC45 < (float)(iVar46 + 1)) goto LAB_001184c9;
  }
  StringName::StringName((StringName *)&local_58,(StringName *)param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011897d;
LAB_00118754:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00118754;
LAB_0011897d:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011846c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Ref<Resource>, int, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, int> > >::operator[](Ref<Resource> const&) */

undefined1  [16] __thiscall
HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
::operator[](HashMap<Ref<Resource>,int,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,int>>>
             *this,Ref *param_1)

{
  uint *puVar1;
  long lVar2;
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
  undefined1 (*pauVar36) [16];
  char cVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  undefined8 *puVar43;
  int iVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  uint uVar48;
  undefined8 uVar49;
  Object *pOVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  undefined1 (*pauVar58) [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pOVar50 = *(Object **)param_1;
  uVar48 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar56 = CONCAT44(0,uVar48);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar56 * 4;
    uVar39 = uVar56 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x1191a3;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar48 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      pOVar50 = *(Object **)param_1;
      if (local_70 == (void *)0x0) goto LAB_00118c33;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar56 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        pOVar50 = *(Object **)param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x1191ec;
        memset(local_70,0,uVar39);
        iVar44 = *(int *)(this + 0x2c);
        pOVar50 = *(Object **)param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00119043;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      lVar53 = *(long *)(this + 0x10);
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pOVar50 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar55 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar56;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar45 = *(uint *)(lVar53 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar45 != 0) {
        uVar52 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar45 == (uint)uVar55) &&
             (pOVar50 == *(Object **)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar59._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18;
            auVar59._8_8_ = lVar47;
            return auVar59;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar54 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar56;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar45 = *(uint *)(lVar53 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar45 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar45 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar56, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar54 + uVar48) - SUB164(auVar6 * auVar22,8)) * lVar2,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar56, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00119043:
      uVar55 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pOVar50 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar57 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar57 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar57 * lVar2;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar55;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar48 = *(uint *)(lVar53 + lVar46 * 4);
      uVar45 = SUB164(auVar16 * auVar32,8);
      if (uVar48 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar48 == (uint)uVar57) &&
             (*(Object **)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == pOVar50)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar45 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar47;
            goto LAB_00119027;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar45 + 1) * lVar2;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar55;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar48 = *(uint *)(lVar53 + lVar46 * 4);
          uVar45 = SUB164(auVar17 * auVar33,8);
        } while ((uVar48 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar48 * lVar2, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar55, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar45) -
                            SUB164(auVar18 * auVar34,8)) * lVar2, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar55, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00118c33:
  if ((float)uVar56 * __LC45 < (float)(iVar44 + 1)) {
    uVar48 = *(uint *)(this + 0x28);
    if (uVar48 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00119027;
    }
    uVar40 = (ulong)(uVar48 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar45 = *(uint *)(hash_table_size_primes + (ulong)uVar48 * 4);
    if (uVar48 + 1 < 2) {
      uVar40 = 2;
    }
    uVar48 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar48;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar56 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = __s_00;
    if (uVar48 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar56)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar56);
      }
    }
    if (uVar45 == 0) {
      pOVar50 = *(Object **)param_1;
    }
    else {
      uVar40 = 0;
      do {
        uVar48 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar48 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar56 = CONCAT44(0,uVar54);
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar48 * lVar2;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar56;
          lVar46 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar53 + lVar46 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar52 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar52 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar52 * lVar2;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar56;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((iVar44 + uVar54) - SUB164(auVar9 * auVar25,8)) * lVar2;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar56;
            uVar38 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar38 < uVar51) {
              *puVar1 = uVar48;
              puVar43 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar43;
              *puVar43 = uVar41;
              uVar48 = uVar52;
              uVar51 = uVar38;
            }
            uVar51 = uVar51 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar2;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar56;
            lVar46 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar53 + lVar46 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar52 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar41;
          *puVar1 = uVar48;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar45);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
      pOVar50 = *(Object **)param_1;
    }
  }
  if ((pOVar50 == (Object *)0x0) || (cVar37 = RefCounted::reference(), cVar37 == '\0')) {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *pauVar42 = (undefined1  [16])0x0;
    puVar43 = *(undefined8 **)(this + 0x20);
    *(undefined4 *)(pauVar42[1] + 8) = 0;
    if (puVar43 == (undefined8 *)0x0) goto LAB_00118e93;
LAB_00118ee3:
    *puVar43 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar43;
  }
  else {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(Object **)pauVar42[1] = pOVar50;
    *pauVar42 = (undefined1  [16])0x0;
    cVar37 = RefCounted::reference();
    if (cVar37 == '\0') {
      *(undefined8 *)pauVar42[1] = 0;
    }
    *(undefined4 *)(pauVar42[1] + 8) = 0;
    cVar37 = RefCounted::unreference();
    if ((cVar37 != '\0') && (cVar37 = predelete_handler(pOVar50), cVar37 != '\0')) {
      (**(code **)(*(long *)pOVar50 + 0x140))(pOVar50);
      Memory::free_static(pOVar50,false);
    }
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 != (undefined8 *)0x0) goto LAB_00118ee3;
LAB_00118e93:
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  lVar53 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = *(long *)param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar56 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar56 = 1;
  }
  uVar52 = 0;
  uVar48 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar48);
  uVar54 = (uint)uVar56;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar56 * lVar2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar40;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar45 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar45 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar45 * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar48 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar58 = pauVar36;
    if (uVar54 < uVar52) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar45;
      puVar43 = (undefined8 *)(lVar46 + lStack_90 * 8);
      pauVar58 = (undefined1 (*) [16])*puVar43;
      *puVar43 = pauVar36;
      uVar52 = uVar54;
    }
    uVar54 = (uint)uVar56;
    uVar52 = uVar52 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar2;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar53 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar58;
    uVar45 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00119027:
  auVar60._8_8_ = lStack_90;
  auVar60._0_8_ = pauVar42[1] + 8;
  return auVar60;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (::Variant::needs_deinit[*piVar1] != '\0') {
        ::Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >
   >::insert(Ref<Resource> const&) */

undefined1  [16]
HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert
          (Ref *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
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
  char cVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  long *in_RDX;
  long lVar39;
  ulong uVar40;
  long *in_RSI;
  ulong uVar41;
  uint uVar42;
  undefined4 uVar43;
  ulong uVar44;
  uint uVar45;
  undefined1 auVar46 [16];
  ulong uStack_98;
  ulong local_88;
  ulong local_70;
  
  lVar35 = *in_RSI;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar35 == 0) {
    uVar34 = (ulong)uVar33 * 4;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[3] = lVar35;
    lVar35 = Memory::alloc_static((ulong)uVar33 * 8,false);
    *in_RSI = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[2] = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[1] = lVar35;
    if (uVar33 != 0) {
      memset((void *)in_RSI[3],0,uVar34);
    }
    lVar35 = *in_RSI;
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (ulong)uVar3;
    if (lVar35 != 0) goto LAB_00119498;
  }
  else {
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
LAB_00119498:
    local_88 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar34 = lVar36 * 0x3ffff - 1;
      uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
      uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
      uVar34 = uVar34 >> 0x16 ^ uVar34;
      uVar44 = uVar34 & 0xffffffff;
      if ((int)uVar34 == 0) {
        uVar44 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar44 * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar39 = SUB168(auVar8 * auVar20,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar34 = (ulong)uVar42;
      iVar38 = SUB164(auVar8 * auVar20,8);
      if (uVar42 != 0) {
        uVar42 = 0;
        do {
          if ((int)uVar34 == (int)uVar44) {
            uVar45 = *(uint *)(in_RSI[1] + lVar39 * 4);
            uStack_98 = (ulong)uVar45;
            if (*(long *)(lVar35 + uStack_98 * 8) == lVar36) goto LAB_001195aa;
          }
          uVar42 = uVar42 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(iVar38 + 1) * lVar4;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar39 = SUB168(auVar9 * auVar21,8);
          uVar45 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar34 = (ulong)uVar45;
          iVar38 = SUB164(auVar9 * auVar21,8);
        } while ((uVar45 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar34 * lVar4, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4) +
                             iVar38) - SUB164(auVar10 * auVar22,8)) * lVar4, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, uVar42 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar33 * __LC45 < (float)(uVar3 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      lVar35 = *in_RSI;
      uVar45 = 0xffffffff;
      uVar3 = *(uint *)((long)in_RSI + 0x24);
      goto LAB_001195aa;
    }
    uVar33 = (int)in_RSI[4] + 1;
    uVar34 = (ulong)uVar33;
    if (uVar33 < 2) {
      uVar34 = 2;
    }
    uVar33 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    *(int *)(in_RSI + 4) = (int)uVar34;
    pvVar5 = (void *)in_RSI[3];
    uVar34 = (ulong)uVar33 * 4;
    pvVar6 = (void *)in_RSI[2];
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[3] = lVar35;
    lVar35 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar33 * 8,false);
    *in_RSI = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[2] = lVar35;
    lVar35 = Memory::realloc_static((void *)in_RSI[1],uVar34,false);
    in_RSI[1] = lVar35;
    if (uVar33 != 0) {
      memset((void *)in_RSI[3],0,uVar34);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar36 = in_RSI[2];
      lVar4 = in_RSI[3];
      local_70 = 0;
      do {
        uVar45 = 0;
        uVar40 = local_70 & 0xffffffff;
        uVar43 = (undefined4)local_70;
        uVar33 = *(uint *)((long)pvVar5 + (ulong)*(uint *)((long)pvVar6 + local_70 * 4) * 4);
        uVar34 = (ulong)uVar33;
        lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar3);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar34 * lVar7;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar41;
        lVar39 = SUB168(auVar12 * auVar24,8) * 4;
        iVar38 = SUB164(auVar12 * auVar24,8);
        puVar1 = (uint *)(lVar4 + lVar39);
        uVar42 = *puVar1;
        uVar44 = local_70;
        while (uVar42 != 0) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar42 * lVar7;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)((iVar38 + uVar3) - SUB164(auVar13 * auVar25,8)) * lVar7;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          uVar33 = SUB164(auVar14 * auVar26,8);
          if (uVar33 < uVar45) {
            *(int *)(lVar36 + uVar40 * 4) = iVar38;
            uVar42 = *puVar1;
            *puVar1 = (uint)uVar34;
            uVar45 = *(uint *)(lVar39 + lVar35);
            uVar34 = (ulong)uVar42;
            *(uint *)(lVar39 + lVar35) = (uint)uVar40;
            uVar40 = (ulong)uVar45;
            uVar45 = uVar33;
          }
          uVar43 = (undefined4)uVar40;
          uVar33 = (uint)uVar34;
          uVar45 = uVar45 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(iVar38 + 1) * lVar7;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar41;
          lVar39 = SUB168(auVar15 * auVar27,8) * 4;
          iVar38 = SUB164(auVar15 * auVar27,8);
          puVar1 = (uint *)(lVar4 + lVar39);
          uVar44 = uVar40;
          uVar42 = *puVar1;
        }
        *puVar1 = uVar33;
        *(int *)(lVar36 + uVar44 * 4) = iVar38;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar35 + lVar39) = uVar43;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(pvVar6,false);
    lVar35 = *in_RSI;
    local_88 = (ulong)*(uint *)((long)in_RSI + 0x24);
  }
  lVar36 = *in_RDX;
  plVar2 = (long *)(lVar35 + local_88 * 8);
  *plVar2 = 0;
  uVar34 = lVar36 * 0x3ffff - 1;
  uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
  uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
  uVar34 = uVar34 >> 0x16 ^ uVar34;
  uVar40 = uVar34 & 0xffffffff;
  if ((int)uVar34 == 0) {
    uVar40 = 1;
  }
  uVar33 = (uint)uVar40;
  if (*in_RDX != 0) {
    *plVar2 = *in_RDX;
    cVar32 = RefCounted::reference();
    if (cVar32 == '\0') {
      *plVar2 = 0;
    }
    lVar35 = *in_RSI;
    local_88 = (ulong)*(uint *)((long)in_RSI + 0x24);
  }
  uVar45 = 0;
  lVar4 = in_RSI[3];
  lVar39 = in_RSI[1];
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar41 = CONCAT44(0,uVar3);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar40 * lVar7;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar41;
  lVar36 = SUB168(auVar16 * auVar28,8) * 4;
  iVar38 = SUB164(auVar16 * auVar28,8);
  uVar34 = in_RSI[2];
  puVar1 = (uint *)(lVar4 + lVar36);
  uVar42 = *puVar1;
  uStack_98 = uVar34;
  uVar44 = local_88;
  while (uVar42 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar42 * lVar7;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar41;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar3 + iVar38) - SUB164(auVar17 * auVar29,8)) * lVar7;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar41;
    uVar33 = SUB164(auVar18 * auVar30,8);
    if (uVar33 < uVar45) {
      puVar37 = (uint *)(lVar36 + lVar39);
      *(int *)(uVar34 + uVar44 * 4) = iVar38;
      uVar42 = *puVar1;
      *puVar1 = (uint)uVar40;
      uVar45 = *puVar37;
      uVar40 = (ulong)uVar42;
      *puVar37 = (uint)local_88;
      local_88 = (ulong)uVar45;
      uVar44 = local_88;
      uVar45 = uVar33;
    }
    uVar33 = (uint)uVar40;
    uVar45 = uVar45 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar38 + 1) * lVar7;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar41;
    uStack_98 = SUB168(auVar19 * auVar31,8);
    lVar36 = uStack_98 * 4;
    iVar38 = SUB164(auVar19 * auVar31,8);
    puVar1 = (uint *)(lVar4 + lVar36);
    uVar42 = *puVar1;
  }
  *puVar1 = uVar33;
  *(int *)(uVar34 + uVar44 * 4) = iVar38;
  *(uint *)(lVar39 + lVar36) = (uint)local_88;
  uVar45 = *(uint *)((long)in_RSI + 0x24);
  *(uint *)((long)in_RSI + 0x24) = uVar45 + 1;
  uVar3 = uVar45 + 1;
LAB_001195aa:
  local_88._0_4_ = uVar3;
  *(uint *)(param_1 + 0xc) = uVar45;
  *(long *)param_1 = lVar35;
  *(uint *)(param_1 + 8) = (uint)local_88;
  auVar46._8_8_ = uStack_98;
  auVar46._0_8_ = param_1;
  return auVar46;
}



/* List<ResourceFormatSaverBinaryInstance::Property, DefaultAllocator>::~List() */

void __thiscall
List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator>::~List
          (List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 == (void *)0x0) {
      if (*(int *)(puVar4 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar2 + 0x60) == puVar4) {
      *puVar4 = *(undefined8 *)((long)pvVar2 + 0x50);
      if (pvVar2 == (void *)puVar4[1]) {
        puVar4[1] = *(undefined8 *)((long)pvVar2 + 0x58);
      }
      if (*(long *)((long)pvVar2 + 0x58) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x58) + 0x50) =
             *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (*(long *)((long)pvVar2 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x58) =
             *(undefined8 *)((long)pvVar2 + 0x58);
      }
      if (*(long *)((long)pvVar2 + 0x40) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x40) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x40);
          *(undefined8 *)((long)pvVar2 + 0x40) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x30) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x28);
          *(undefined8 *)((long)pvVar2 + 0x28) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (::Variant::needs_deinit[*(int *)((long)pvVar2 + 8)] != '\0') {
        ::Variant::_clear_internal();
      }
      Memory::free_static(pvVar2,false);
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar4 = *(undefined8 **)this;
  } while (*(int *)(puVar4 + 2) != 0);
  Memory::free_static(puVar4,false);
  return;
}



/* List<ResourceFormatSaverBinaryInstance::ResourceData, DefaultAllocator>::~List() */

void __thiscall
List<ResourceFormatSaverBinaryInstance::ResourceData,DefaultAllocator>::~List
          (List<ResourceFormatSaverBinaryInstance::ResourceData,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[4] == plVar5) {
      lVar4 = plVar2[2];
      lVar3 = plVar2[3];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar4;
        lVar4 = plVar2[2];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x18) = lVar3;
      }
      List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator>::~List
                ((List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator> *)(plVar2 + 1))
      ;
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00119dcc;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_00119dcc:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_0011a149;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC45 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_0011a149;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_0011a149:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
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



/* WARNING: Removing unreachable block (ram,0x0011a5c8) */
/* WARNING: Removing unreachable block (ram,0x0011a75d) */
/* WARNING: Removing unreachable block (ram,0x0011a769) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* WARNING: Removing unreachable block (ram,0x0011a900) */
/* WARNING: Removing unreachable block (ram,0x0011aa95) */
/* WARNING: Removing unreachable block (ram,0x0011aaa1) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011ac70) */
/* WARNING: Removing unreachable block (ram,0x0011adfe) */
/* WARNING: Removing unreachable block (ram,0x0011ae0a) */
/* String vformat<String, unsigned int, unsigned int, unsigned int, char const*>(String const&,
   String const, unsigned int const, unsigned int const, unsigned int const, char const* const) */

undefined8 *
vformat<String,unsigned_int,unsigned_int,unsigned_int,char_const*>
          (undefined8 *param_1,bool *param_2,String *param_3,uint param_4,uint param_5,uint param_6,
          char *param_7)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_4);
  iVar4 = 0;
  Variant::Variant(local_a8,param_5);
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar3 = (int)local_128;
  Array::resize(iVar3);
  pVVar2 = local_d8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 5);
  String::sprintf((Array *)local_120,param_2);
  *param_1 = local_120[0];
  pVVar2 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0011afb8) */
/* WARNING: Removing unreachable block (ram,0x0011b14d) */
/* WARNING: Removing unreachable block (ram,0x0011b159) */
/* String vformat<String, unsigned int, String, String>(String const&, String const, unsigned int
   const, String const, String const) */

undefined8 *
vformat<String,unsigned_int,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,uint param_4,String *param_5,
          String *param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  iVar4 = 0;
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar3 = (int)local_108;
  Array::resize(iVar3);
  pVVar2 = local_b8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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



/* RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,
   DefaultAllocator>::_cleanup_tree(RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,
   Variant, Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
::_cleanup_tree(RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Object *pOVar2;
  char cVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar4 = *(Element **)(this + 8);
  if (pEVar1 != pEVar4) {
    pEVar8 = *(Element **)(pEVar1 + 0x10);
    if (pEVar4 != pEVar8) {
      pEVar5 = *(Element **)(pEVar8 + 0x10);
      if (pEVar4 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar4 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar4 != pEVar7) {
            _cleanup_tree(this,pEVar7);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
        if (pEVar4 != pEVar6) {
          if (*(Element **)(pEVar4 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar4 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar4 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar4 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar4 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar4,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar4 = *(Element **)(pEVar8 + 8);
      if (pEVar4 != pEVar5) {
        pEVar6 = *(Element **)(pEVar4 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar4 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar4 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar4 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar4,false);
      }
      if (::Variant::needs_deinit[*(int *)(pEVar8 + 0x40)] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar8 + 0x38) != 0)) {
        StringName::unref();
      }
      if (*(long *)(pEVar8 + 0x30) != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = *(Object **)(pEVar8 + 0x30);
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
      Memory::free_static(pEVar8,false);
      pEVar8 = *(Element **)(this + 8);
    }
    pEVar4 = *(Element **)(pEVar1 + 8);
    if (pEVar4 != pEVar8) {
      pEVar5 = *(Element **)(pEVar4 + 0x10);
      if (pEVar5 != pEVar8) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar8) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar8 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
          pEVar8 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar8) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar8 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
        pEVar8 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar4 + 8);
      if (pEVar5 != pEVar8) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar8) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar8 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar8 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar8) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar8 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar8) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
      }
      if (::Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
        StringName::unref();
      }
      if (*(long *)(pEVar4 + 0x30) != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = *(Object **)(pEVar4 + 0x30);
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
      Memory::free_static(pEVar4,false);
    }
    if (::Variant::needs_deinit[*(int *)(pEVar1 + 0x40)] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x38) != 0)) {
      StringName::unref();
    }
    if (*(long *)(pEVar1 + 0x30) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar2 = *(Object **)(pEVar1 + 0x30);
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    Memory::free_static(pEVar1,false);
    pEVar4 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar4) {
    pEVar8 = *(Element **)(pEVar1 + 0x10);
    if (pEVar8 != pEVar4) {
      pEVar5 = *(Element **)(pEVar8 + 0x10);
      if (pEVar5 != pEVar4) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar4) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar4) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar8 + 8);
      if (pEVar5 != pEVar4) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar4) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar4) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
      }
      if (::Variant::needs_deinit[*(int *)(pEVar8 + 0x40)] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar8 + 0x38) != 0)) {
        StringName::unref();
      }
      if (*(long *)(pEVar8 + 0x30) != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = *(Object **)(pEVar8 + 0x30);
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
      Memory::free_static(pEVar8,false);
      pEVar4 = *(Element **)(this + 8);
    }
    pEVar8 = *(Element **)(pEVar1 + 8);
    if (pEVar8 != pEVar4) {
      pEVar5 = *(Element **)(pEVar8 + 0x10);
      if (pEVar5 != pEVar4) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar4) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
              pOVar2 = *(Object **)(pEVar6 + 0x30);
              cVar3 = predelete_handler(pOVar2);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar4) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar8 + 8);
      if (pEVar5 != pEVar4) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar4 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar4 != pEVar7) {
            _cleanup_tree(this,pEVar7);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar4) {
          pEVar7 = *(Element **)(pEVar4 + 0x10);
          if (pEVar6 != pEVar7) {
            _cleanup_tree(this,pEVar7);
            pEVar7 = *(Element **)(this + 8);
          }
          if (pEVar7 != *(Element **)(pEVar4 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar4 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar4 + 0x30));
          Memory::free_static(pEVar4,false);
        }
        if (::Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
          StringName::unref();
        }
        if (*(long *)(pEVar5 + 0x30) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)(pEVar5 + 0x30);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pEVar5,false);
      }
      if (::Variant::needs_deinit[*(int *)(pEVar8 + 0x40)] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar8 + 0x38) != 0)) {
        StringName::unref();
      }
      if (*(long *)(pEVar8 + 0x30) != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = *(Object **)(pEVar8 + 0x30);
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
      Memory::free_static(pEVar8,false);
    }
    if (::Variant::needs_deinit[*(int *)(pEVar1 + 0x40)] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x38) != 0)) {
      StringName::unref();
    }
    if (*(long *)(pEVar1 + 0x30) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        pOVar2 = *(Object **)(pEVar1 + 0x30);
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    Memory::free_static(pEVar1,false);
  }
  if (::Variant::needs_deinit[*(int *)(param_1 + 0x40)] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x38) != 0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(param_1 + 0x30);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              *this,String *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* Ref<FileAccessCompressed>::unref() */

void __thiscall Ref<FileAccessCompressed>::unref(Ref<FileAccessCompressed> *this)

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



/* void List<String, DefaultAllocator>::sort_custom<Comparator<String> >() */

void __thiscall
List<String,DefaultAllocator>::sort_custom<Comparator<String>>(List<String,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  Element *pEVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar10 = (Element *)**(long **)this; pEVar10 != (Element *)0x0;
        pEVar10 = *(Element **)(pEVar10 + 8)) {
      *ppEVar5 = pEVar10;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar7 = 0;
  pEVar10 = pEVar4;
  do {
    pEVar10 = (Element *)((long)pEVar10 >> 1);
    lVar7 = lVar7 + 1;
  } while (pEVar10 != (Element *)0x1);
  SortArray<List<String,DefaultAllocator>::Element*,List<String,DefaultAllocator>::AuxiliaryComparator<Comparator<String>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar7 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar10 = (Element *)0x1;
    pEVar11 = *__src;
    do {
      while( true ) {
        pSVar8 = (String *)__src[(long)pEVar10];
        ppEVar5 = __src + (long)pEVar10;
        cVar3 = String::operator<(pSVar8,(String *)pEVar11);
        if (cVar3 != '\0') break;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        pEVar10 = pEVar10 + 1;
        *ppEVar5 = (Element *)pSVar8;
        pSVar8 = (String *)*__src;
        pEVar11 = (Element *)pSVar8;
        if (pEVar4 == pEVar10) goto LAB_0011cf35;
      }
      __n = (long)pEVar10 * 8;
      pEVar10 = pEVar10 + 1;
      memmove(__src + 1,__src,__n);
      *__src = (Element *)pSVar8;
      pEVar11 = (Element *)pSVar8;
    } while (pEVar4 != pEVar10);
  }
  else {
    lVar7 = 1;
    do {
      while( true ) {
        lVar9 = lVar7;
        pSVar8 = (String *)__src[lVar9];
        cVar3 = String::operator<(pSVar8,(String *)*__src);
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar9;
        while (cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]), cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = (Element *)pSVar8;
        lVar7 = lVar9 + 1;
        if (lVar9 + 1 == 0x10) goto LAB_0011cdb6;
      }
      memmove(__src + 1,__src,lVar9 * 8);
      *__src = (Element *)pSVar8;
      lVar7 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
LAB_0011cdb6:
    pEVar10 = (Element *)(lVar9 + 1);
    do {
      pSVar8 = (String *)__src[(long)pEVar10];
      ppEVar5 = __src + (long)pEVar10;
      pEVar11 = pEVar10;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::operator<(pSVar8,(String *)ppEVar5[-1]);
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = (Element *)pSVar8;
      pEVar10 = pEVar10 + 1;
    } while (pEVar4 != pEVar10);
    pSVar8 = (String *)*__src;
  }
LAB_0011cf35:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pSVar8;
  *(undefined8 *)(pSVar8 + 0x10) = 0;
  *(Element **)(*__src + 8) = __src[1];
  pEVar10 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar10;
  *(Element **)(pEVar10 + 0x10) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (__src + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(__src,true);
  return;
}



/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::_lookup_pos(HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
              *this,StringName *param_1,uint *param_2)

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
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
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
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)::Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Resource::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,
   DefaultAllocator>::_Data::_create_root() */

void __thiscall
RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
::_Data::_create_root(_Data *this)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined4 *)operator_new(0x58,DefaultAllocator::alloc);
  local_80 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_68 = (Object *)0x0;
  StringName::StringName((StringName *)&local_60,(StringName *)(local_98 + 8));
  ::Variant::Variant((Variant *)local_58,(Variant *)&local_88);
  *puVar4 = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 10) = (undefined1  [16])0x0;
  if (local_68 != (Object *)0x0) {
    *(Object **)(puVar4 + 0xc) = local_68;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)(puVar4 + 0xc) = 0;
    }
  }
  StringName::StringName((StringName *)(puVar4 + 0xe),(StringName *)&local_60);
  ::Variant::Variant((Variant *)(puVar4 + 0x10),(Variant *)local_58);
  *(undefined4 **)this = puVar4;
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (((local_68 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar2 = local_68, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if ((StringName::configured != '\0') && (local_98._8_8_ != 0)) {
    StringName::unref();
  }
  if ((local_98._0_8_ != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    uVar1 = local_98._0_8_;
    cVar3 = predelete_handler((Object *)local_98._0_8_);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)uVar1 + 0x140))(uVar1);
      Memory::free_static((void *)uVar1,false);
      cVar3 = ::Variant::needs_deinit[(int)local_88];
      goto joined_r0x0011d331;
    }
  }
  cVar3 = ::Variant::needs_deinit[(int)local_88];
joined_r0x0011d331:
  if (cVar3 != '\0') {
    ::Variant::_clear_internal();
  }
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(*(long *)this + 8) = uVar1;
  *(undefined8 *)(*(long *)this + 0x10) = uVar1;
  *(undefined8 *)(*(long *)this + 0x18) = uVar1;
  **(undefined4 **)this = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::_lookup_pos(String
   const&, unsigned int&) const */

undefined8 __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)this != 0) && (*(int *)(this + 0x24) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar11 = String::hash();
    uVar16 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x18);
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)
                                      (*(long *)this +
                                      (ulong)*(uint *)(*(long *)(this + 8) + lVar15 * 4) * 8),
                                      param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = *(uint *)(*(long *)(this + 8) + lVar15 * 4);
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x18);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<long>::_unref() */

void __thiscall CowData<long>::_unref(CowData<long> *this)

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



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

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



/* CowData<double>::_unref() */

void __thiscall CowData<double>::_unref(CowData<double> *this)

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



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<Vector4>::_unref() */

void __thiscall CowData<Vector4>::_unref(CowData<Vector4> *this)

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



/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
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
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar7 * 8;
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
LAB_0011dd50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  if (uVar4 == 0xffffffffffffffff) goto LAB_0011dd50;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    uVar6 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar6) {
LAB_0011dbfa:
        if (uVar4 + 1 != lVar3) {
          puVar2 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar2 == (undefined8 *)0x0) goto LAB_0011dd7f;
          puVar5 = puVar2 + 2;
          *puVar2 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (puVar5[uVar6] == 0))) {
        uVar6 = uVar6 + 1;
        if ((ulong)puVar5[-1] <= uVar6) goto LAB_0011dbfa;
      }
      uVar6 = uVar6 + 1;
      StringName::unref();
      puVar5 = *(undefined8 **)this;
    }
LAB_0011dbca:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar4 + 1 == lVar3) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011dbca;
    lVar7 = puVar5[-1];
LAB_0011dcb0:
    if (param_1 <= lVar7) goto LAB_0011dc5d;
  }
  else {
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar2 == (undefined8 *)0x0) {
LAB_0011dd7f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar5 = puVar2 + 2;
      *puVar2 = 1;
      *(undefined8 **)this = puVar5;
      lVar7 = puVar2[1];
      goto LAB_0011dcb0;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar7 = 0;
  }
  memset(puVar5 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0011dc5d:
  puVar5[-1] = param_1;
  return 0;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_resize_and_rehash
          (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
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
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  long *plVar1;
  ulong __n;
  void *__s;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  char cVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  void *__s_00;
  ulong uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  uint *puVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  long lVar42;
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  uint uVar45;
  uint uVar46;
  long in_FS_OFFSET;
  undefined1 (*local_88) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar36 = (ulong)uVar28;
  if (*(long *)(this + 8) == 0) {
LAB_0011e510:
    local_70 = 0;
    uVar32 = uVar36 * 4;
    __n = uVar36 * 8;
    uVar31 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar31;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar36 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar36 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,__n);
      }
LAB_0011e3ca:
      uVar28 = (uint)uVar36;
      iVar33 = *(int *)(this + 0x2c);
      if (iVar33 != 0) {
LAB_0011e3d7:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar40 = String::hash();
        uVar36 = CONCAT44(0,uVar39);
        lVar42 = *(long *)(this + 0x10);
        uVar29 = 1;
        if (uVar40 != 0) {
          uVar29 = uVar40;
        }
        uVar46 = 0;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar29 * lVar38;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar36;
        lVar35 = SUB168(auVar10 * auVar22,8);
        uVar40 = *(uint *)(lVar42 + lVar35 * 4);
        uVar45 = SUB164(auVar10 * auVar22,8);
        if (uVar40 != 0) {
          do {
            if (uVar40 == uVar29) {
              cVar27 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar35 * 8) + 0x10),
                                          param_1);
              if (cVar27 != '\0') {
                local_88 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar45 * 8);
                if (*(long *)(local_88[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_88[1] + 8),(CowData *)&local_70);
                  local_88 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar45 * 8);
                }
                goto LAB_0011e288;
              }
              lVar42 = *(long *)(this + 0x10);
            }
            uVar46 = uVar46 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(uVar45 + 1) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar36;
            lVar35 = SUB168(auVar11 * auVar23,8);
            uVar40 = *(uint *)(lVar42 + lVar35 * 4);
            uVar45 = SUB164(auVar11 * auVar23,8);
          } while ((uVar40 != 0) &&
                  (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar40 * lVar38, auVar24._8_8_ = 0,
                  auVar24._0_8_ = uVar36, auVar13._8_8_ = 0,
                  auVar13._0_8_ = (ulong)((uVar39 + uVar45) - SUB164(auVar12 * auVar24,8)) * lVar38,
                  auVar25._8_8_ = 0, auVar25._0_8_ = uVar36, uVar46 <= SUB164(auVar13 * auVar25,8)))
          ;
        }
        uVar36 = (ulong)uVar28;
        iVar33 = *(int *)(this + 0x2c);
      }
      goto LAB_0011e068;
    }
    iVar33 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011e068;
    uVar28 = 0;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011e3d7;
LAB_0011e08a:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_88 = (undefined1 (*) [16])0x0;
      goto LAB_0011e288;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar29 = String::hash();
      uVar36 = CONCAT44(0,uVar28);
      lVar42 = *(long *)(this + 0x10);
      uVar39 = 1;
      if (uVar29 != 0) {
        uVar39 = uVar29;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar39 * lVar38;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar36;
      lVar35 = SUB168(auVar6 * auVar18,8);
      uVar29 = *(uint *)(lVar42 + lVar35 * 4);
      uVar40 = SUB164(auVar6 * auVar18,8);
      if (uVar29 == 0) {
        lVar41 = *(long *)(this + 8);
      }
      else {
        lVar41 = *(long *)(this + 8);
        uVar45 = 0;
        do {
          if (uVar29 == uVar39) {
            cVar27 = String::operator==((String *)(*(long *)(lVar41 + lVar35 * 8) + 0x10),param_1);
            if (cVar27 != '\0') {
              local_88 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar40 * 8);
              goto LAB_0011e288;
            }
            lVar42 = *(long *)(this + 0x10);
            lVar41 = *(long *)(this + 8);
          }
          uVar45 = uVar45 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar40 + 1) * lVar38;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar36;
          lVar35 = SUB168(auVar7 * auVar19,8);
          uVar29 = *(uint *)(lVar42 + lVar35 * 4);
          uVar40 = SUB164(auVar7 * auVar19,8);
        } while ((uVar29 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar29 * lVar38, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar36, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar40 + uVar28) - SUB164(auVar8 * auVar20,8)) * lVar38,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar36, uVar45 <= SUB164(auVar9 * auVar21,8)));
      }
      local_70 = 0;
      uVar36 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar41 == 0) goto LAB_0011e510;
      goto LAB_0011e3ca;
    }
    local_70 = 0;
    iVar33 = 0;
LAB_0011e068:
    if ((float)uVar36 * __LC45 < (float)(iVar33 + 1)) goto LAB_0011e08a;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_88 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_88[1] = 0;
    *local_88 = (undefined1  [16])0x0;
LAB_0011e5dd:
    lVar38 = 0;
    *(undefined8 *)(local_88[1] + 8) = 0;
    puVar30 = *(undefined8 **)(this + 0x20);
    if (puVar30 != (undefined8 *)0x0) goto LAB_0011e14d;
LAB_0011e5fa:
    *(undefined1 (**) [16])(this + 0x18) = local_88;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar38 = local_58[0];
    uVar31 = local_68._0_8_;
    uVar26 = local_68._8_8_;
    local_58[1] = 0;
    local_88 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_88[1] = 0;
    *(undefined8 *)*local_88 = uVar31;
    *(undefined8 *)(*local_88 + 8) = uVar26;
    if (lVar38 == 0) goto LAB_0011e5dd;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_88 + 1),(CowData *)local_58);
    *(undefined8 *)(local_88[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar30 = *(undefined8 **)(this + 0x20);
    lVar38 = local_70;
    if (puVar30 == (undefined8 *)0x0) goto LAB_0011e5fa;
LAB_0011e14d:
    *puVar30 = local_88;
    *(undefined8 **)(*local_88 + 8) = puVar30;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_88;
  uVar28 = String::hash();
  lVar42 = *(long *)(this + 0x10);
  uVar36 = 1;
  if (uVar28 != 0) {
    uVar36 = (ulong)uVar28;
  }
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = (uint)uVar36;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar28);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar36 * lVar35;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar32;
  lVar34 = SUB168(auVar2 * auVar14,8);
  lVar41 = *(long *)(this + 8);
  puVar37 = (uint *)(lVar42 + lVar34 * 4);
  iVar33 = SUB164(auVar2 * auVar14,8);
  uVar39 = *puVar37;
  pauVar44 = local_88;
  if (uVar39 != 0) {
    uVar40 = 0;
    pauVar43 = local_88;
    do {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar39 * lVar35;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar32;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)((uVar28 + iVar33) - SUB164(auVar3 * auVar15,8)) * lVar35;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar32;
      uVar29 = SUB164(auVar4 * auVar16,8);
      pauVar44 = pauVar43;
      if (uVar29 < uVar40) {
        *puVar37 = (uint)uVar36;
        uVar36 = (ulong)uVar39;
        puVar30 = (undefined8 *)(lVar41 + lVar34 * 8);
        pauVar44 = (undefined1 (*) [16])*puVar30;
        *puVar30 = pauVar43;
        uVar40 = uVar29;
      }
      uVar29 = (uint)uVar36;
      uVar40 = uVar40 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)(iVar33 + 1) * lVar35;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      lVar34 = SUB168(auVar5 * auVar17,8);
      puVar37 = (uint *)(lVar42 + lVar34 * 4);
      iVar33 = SUB164(auVar5 * auVar17,8);
      uVar39 = *puVar37;
      pauVar43 = pauVar44;
    } while (uVar39 != 0);
  }
  *(undefined1 (**) [16])(lVar41 + lVar34 * 8) = pauVar44;
  *puVar37 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar38 != 0) {
    LOCK();
    plVar1 = (long *)(lVar38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_0011e288:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_88[1] + 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::insert(String const&, String const&,
   bool) */

String * HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::insert(String *param_1,String *param_2,bool param_3)

{
  void *__s;
  undefined1 auVar1 [16];
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
  char cVar17;
  uint uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  void *__s_00;
  ulong uVar22;
  CowData *in_RCX;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined7 in_register_00000011;
  String *pSVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  uint uVar30;
  char in_R8B;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  long *plVar36;
  uint uVar37;
  ulong uVar38;
  long in_FS_OFFSET;
  uint local_98;
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar26 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar34 = (ulong)uVar23;
    uVar22 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar21 = Memory::alloc_static(uVar22,false);
    *(undefined8 *)(param_2 + 0x10) = uVar21;
    __s_00 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar22))) {
        uVar22 = 0;
        do {
          *(undefined4 *)((long)__s + uVar22 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar22 * 8) = 0;
          uVar22 = uVar22 + 1;
        } while (uVar34 != uVar22);
      }
      else {
        memset(__s,0,uVar22);
        memset(__s_00,0,uVar38);
      }
      goto LAB_0011e6ff;
    }
    iVar24 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011e70f;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011e988;
LAB_0011e731:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar19 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011e939;
    }
    _resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0011e6ff:
    iVar24 = *(int *)(param_2 + 0x2c);
    if (iVar24 != 0) {
LAB_0011e988:
      uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar31 = String::hash();
      uVar22 = CONCAT44(0,uVar18);
      lVar32 = *(long *)(param_2 + 0x10);
      uVar30 = 1;
      if (uVar31 != 0) {
        uVar30 = uVar31;
      }
      uVar37 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar33;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar22;
      lVar28 = SUB168(auVar5 * auVar13,8);
      uVar31 = *(uint *)(lVar32 + lVar28 * 4);
      uVar25 = SUB164(auVar5 * auVar13,8);
      if (uVar31 != 0) {
        do {
          if (uVar31 == uVar30) {
            cVar17 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar28 * 8) + 0x10),
                                        pSVar26);
            if (cVar17 != '\0') {
              plVar19 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar25 * 8);
              if (plVar19[3] != *(long *)in_RCX) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(plVar19 + 3),in_RCX);
                plVar19 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar25 * 8);
              }
              goto LAB_0011e939;
            }
            lVar32 = *(long *)(param_2 + 0x10);
          }
          uVar37 = uVar37 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar25 + 1) * lVar33;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar22;
          lVar28 = SUB168(auVar6 * auVar14,8);
          uVar31 = *(uint *)(lVar32 + lVar28 * 4);
          uVar25 = SUB164(auVar6 * auVar14,8);
        } while ((uVar31 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar31 * lVar33, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar22, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar18 + uVar25) - SUB164(auVar7 * auVar15,8)) * lVar33,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar22, uVar37 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar24 = *(int *)(param_2 + 0x2c);
    }
LAB_0011e70f:
    if ((float)uVar23 * __LC45 < (float)(iVar24 + 1)) goto LAB_0011e731;
  }
  local_58 = 0;
  if (*(long *)pSVar26 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar26);
  }
  local_50[0] = 0;
  lVar33 = *(long *)in_RCX;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
    lVar33 = local_50[0];
  }
  plVar19 = (long *)operator_new(0x20,"");
  lVar32 = local_58;
  plVar19[2] = 0;
  *plVar19 = 0;
  plVar19[1] = 0;
  if (local_58 == 0) {
    plVar19[3] = 0;
    if (lVar33 != 0) goto LAB_0011e7e2;
LAB_0011e812:
    puVar20 = *(undefined8 **)(param_2 + 0x20);
    if (puVar20 != (undefined8 *)0x0) goto LAB_0011e820;
LAB_0011eace:
    *(long **)(param_2 + 0x18) = plVar19;
    *(long **)(param_2 + 0x20) = plVar19;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar19 + 2),(CowData *)&local_58);
    plVar19[3] = 0;
    if (lVar33 != 0) {
LAB_0011e7e2:
      CowData<char32_t>::_ref((CowData<char32_t> *)(plVar19 + 3),(CowData *)local_50);
      LOCK();
      plVar36 = (long *)(lVar33 + -0x10);
      *plVar36 = *plVar36 + -1;
      UNLOCK();
      lVar32 = local_58;
      if (*plVar36 == 0) {
        Memory::free_static((void *)(local_50[0] + -0x10),false);
        lVar32 = local_58;
      }
      local_58 = lVar32;
      if (lVar32 == 0) goto LAB_0011e812;
    }
    LOCK();
    plVar36 = (long *)(lVar32 + -0x10);
    *plVar36 = *plVar36 + -1;
    UNLOCK();
    if (*plVar36 != 0) goto LAB_0011e812;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar20 = *(undefined8 **)(param_2 + 0x20);
    if (puVar20 == (undefined8 *)0x0) goto LAB_0011eace;
LAB_0011e820:
    if (in_R8B == '\0') {
      *puVar20 = plVar19;
      plVar19[1] = (long)puVar20;
      *(long **)(param_2 + 0x20) = plVar19;
    }
    else {
      lVar33 = *(long *)(param_2 + 0x18);
      *(long **)(lVar33 + 8) = plVar19;
      *plVar19 = lVar33;
      *(long **)(param_2 + 0x18) = plVar19;
    }
  }
  uVar18 = String::hash();
  lVar33 = *(long *)(param_2 + 0x10);
  uVar23 = 1;
  if (uVar18 != 0) {
    uVar23 = uVar18;
  }
  uVar38 = (ulong)uVar23;
  uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar22 = CONCAT44(0,uVar18);
  lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar38 * lVar32;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar22;
  lVar27 = SUB168(auVar1 * auVar9,8);
  lVar28 = *(long *)(param_2 + 8);
  puVar29 = (uint *)(lVar33 + lVar27 * 4);
  iVar24 = SUB164(auVar1 * auVar9,8);
  uVar30 = *puVar29;
  plVar36 = plVar19;
  if (uVar30 != 0) {
    uVar31 = 0;
    plVar35 = plVar19;
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar30 * lVar32;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)((iVar24 + uVar18) - SUB164(auVar2 * auVar10,8)) * lVar32;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar22;
      local_98 = SUB164(auVar3 * auVar11,8);
      plVar36 = plVar35;
      if (local_98 < uVar31) {
        *puVar29 = (uint)uVar38;
        uVar38 = (ulong)uVar30;
        puVar20 = (undefined8 *)(lVar28 + lVar27 * 8);
        plVar36 = (long *)*puVar20;
        *puVar20 = plVar35;
        uVar31 = local_98;
      }
      uVar23 = (uint)uVar38;
      uVar31 = uVar31 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar24 + 1) * lVar32;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar22;
      lVar27 = SUB168(auVar4 * auVar12,8);
      puVar29 = (uint *)(lVar33 + lVar27 * 4);
      iVar24 = SUB164(auVar4 * auVar12,8);
      uVar30 = *puVar29;
      plVar35 = plVar36;
    } while (uVar30 != 0);
  }
  *(long **)(lVar28 + lVar27 * 8) = plVar36;
  *puVar29 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011e939:
  *(long **)param_1 = plVar19;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&) */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator=(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  String local_48 [8];
  long local_40;
  ulong uVar4;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               *)param_1) {
    uVar5 = *(uint *)(this + 0x28);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar5 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar7 * 2);
            if (*(long *)((long)pvVar1 + 0x18) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar1 + 0x18) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar2 = *(long *)((long)pvVar1 + 0x18);
                *(undefined8 *)((long)pvVar1 + 0x18) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar1 + 0x10) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar1 + 0x10) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar2 = *(long *)((long)pvVar1 + 0x10);
                *(undefined8 *)((long)pvVar1 + 0x10) = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar3 << 2);
        uVar5 = *(uint *)(this + 0x28);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar5 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar3 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar5 != 0x1c) {
        uVar4 = (ulong)uVar5;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar4 * 4)) {
            if (uVar3 != uVar5) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar3;
              }
              else {
                _resize_and_rehash(this,uVar3);
              }
            }
            goto LAB_0011ed69;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0011ed69:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar6 = *(long **)(param_1 + 0x18), plVar6 != (long *)0x0)) {
      do {
        insert(local_48,(String *)this,(bool)((char)plVar6 + '\x10'));
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ResourceLoaderBinary::ExtResource>::_unref() */

void __thiscall
CowData<ResourceLoaderBinary::ExtResource>::_unref(CowData<ResourceLoaderBinary::ExtResource> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  
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
        lVar9 = 0;
        plVar8 = plVar1;
        do {
          if (plVar8[3] != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              pOVar5 = (Object *)plVar8[3];
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          if (plVar8[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar8[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar8[1];
              plVar8[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*plVar8 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar8;
              *plVar8 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 4;
        } while (lVar3 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<ResourceLoaderBinary::IntResource>::_unref() */

void __thiscall
CowData<ResourceLoaderBinary::IntResource>::_unref(CowData<ResourceLoaderBinary::IntResource> *this)

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



/* ResourceLoaderBinary::~ResourceLoaderBinary() */

void __thiscall ResourceLoaderBinary::~ResourceLoaderBinary(ResourceLoaderBinary *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  
  pvVar7 = *(void **)(this + 0x128);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x14c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x148) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x14c) = 0;
        *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x130) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x130) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar4 = *(Object **)((long)pvVar7 + 0x18);
                cVar5 = predelete_handler(pOVar4);
                if (cVar5 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
              }
            }
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x128);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 << 2 != lVar6);
        *(undefined4 *)(this + 0x14c) = 0;
        *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011f1bf;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x130),false);
  }
LAB_0011f1bf:
  pvVar7 = *(void **)(this + 0xe8);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x10c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x108) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x10c) = 0;
        *(undefined1 (*) [16])(this + 0xf8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xf0) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xf0) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x18);
                *(undefined8 *)((long)pvVar7 + 0x18) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0xe8);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 << 2 != lVar6);
        *(undefined4 *)(this + 0x10c) = 0;
        *(undefined1 (*) [16])(this + 0xf8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011f2b9;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xf0),false);
  }
LAB_0011f2b9:
  pvVar7 = *(void **)(this + 0xb8);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xdc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xdc) = 0;
        *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xc0) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xc0) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar4 = *(Object **)((long)pvVar7 + 0x18);
                cVar5 = predelete_handler(pOVar4);
                if (cVar5 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
              }
            }
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0xb8);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xdc) = 0;
        *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011f3a5;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xc0),false);
  }
LAB_0011f3a5:
  CowData<ResourceLoaderBinary::IntResource>::_unref
            ((CowData<ResourceLoaderBinary::IntResource> *)(this + 0xa8));
  CowData<ResourceLoaderBinary::ExtResource>::_unref
            ((CowData<ResourceLoaderBinary::ExtResource> *)(this + 0x98));
  if (*(long *)(this + 0x78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 0x78);
      *(undefined8 *)(this + 0x78) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x68));
  List<Ref<Resource>,DefaultAllocator>::~List((List<Ref<Resource>,DefaultAllocator> *)(this + 0x58))
  ;
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 0x50);
      *(undefined8 *)(this + 0x50) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x30);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (*(long *)(this + 0x20) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x20);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar6 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
      return;
    }
  }
  return;
}



/* Error CowData<ResourceLoaderBinary::ExtResource>::resize<false>(long) */

undefined8 __thiscall
CowData<ResourceLoaderBinary::ExtResource>::resize<false>
          (CowData<ResourceLoaderBinary::ExtResource> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
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
    lVar10 = 0;
    lVar11 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar11 = lVar10 * 0x20;
    if (lVar11 != 0) {
      uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      lVar11 = (uVar12 | uVar12 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_0011f9e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar12 = param_1 * 0x20 - 1;
  uVar12 = uVar12 >> 1 | uVar12;
  uVar12 = uVar12 | uVar12 >> 2;
  uVar12 = uVar12 | uVar12 >> 4;
  uVar12 = uVar12 | uVar12 >> 8;
  uVar12 = uVar12 | uVar12 >> 0x10;
  uVar12 = uVar12 | uVar12 >> 0x20;
  if (uVar12 == 0xffffffffffffffff) goto LAB_0011f9e0;
  uVar13 = param_1;
  if (param_1 <= lVar10) {
    while (puVar8 = *(undefined8 **)this, puVar8 != (undefined8 *)0x0) {
      if ((ulong)puVar8[-1] <= uVar13) {
        if (uVar12 + 1 != lVar11) {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar12 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0011fa0f;
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
        }
        puVar8[-1] = param_1;
        return 0;
      }
      plVar9 = puVar8 + uVar13 * 4;
      if ((plVar9[3] != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        pOVar2 = (Object *)plVar9[3];
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      if (plVar9[1] != 0) {
        LOCK();
        plVar1 = (long *)(plVar9[1] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar10 = plVar9[1];
          plVar9[1] = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      if (*plVar9 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar9 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar10 = *plVar9;
          *plVar9 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      uVar13 = uVar13 + 1;
    }
LAB_0011fa5d:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar12 + 1 == lVar11) {
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) goto LAB_0011fa5d;
    lVar10 = puVar8[-1];
LAB_0011f940:
    if (param_1 <= lVar10) goto LAB_0011f805;
  }
  else {
    if (lVar10 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar12 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_0011fa0f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar8;
      lVar10 = puVar5[1];
      goto LAB_0011f940;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar12 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar10 = 0;
  }
  pauVar6 = (undefined1 (*) [16])(puVar8 + lVar10 * 4);
  do {
    *(undefined8 *)pauVar6[1] = 0xffffffffffffffff;
    pauVar7 = pauVar6 + 2;
    *pauVar6 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar6[1] + 8) = 0;
    pauVar6 = pauVar7;
  } while ((undefined1 (*) [16])(puVar8 + param_1 * 4) != pauVar7);
LAB_0011f805:
  puVar8[-1] = param_1;
  return 0;
}



/* Error CowData<ResourceLoaderBinary::IntResource>::resize<false>(long) */

undefined8 __thiscall
CowData<ResourceLoaderBinary::IntResource>::resize<false>
          (CowData<ResourceLoaderBinary::IntResource> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar11 = 0;
    lVar8 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar11 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0011fd78:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  if (uVar9 == 0xffffffffffffffff) goto LAB_0011fd78;
  if (param_1 <= lVar11) {
    puVar7 = *(undefined8 **)this;
    uVar10 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar10) {
LAB_0011fbbf:
        if (uVar9 + 1 != lVar8) {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar9 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0011fda7;
          puVar7 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return 0;
      }
      while( true ) {
        plVar3 = puVar7 + uVar10 * 2;
        if (*plVar3 != 0) break;
        uVar10 = uVar10 + 1;
        if ((ulong)puVar7[-1] <= uVar10) goto LAB_0011fbbf;
      }
      LOCK();
      plVar1 = (long *)(*plVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar11 = *plVar3;
        *plVar3 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      puVar7 = *(undefined8 **)this;
    }
LAB_0011fdf5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar9 + 1 == lVar8) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_0011fdf5;
    lVar11 = puVar7[-1];
LAB_0011fcd0:
    if (param_1 <= lVar11) goto LAB_0011fc80;
  }
  else {
    if (lVar11 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar9 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_0011fda7:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar7;
      lVar11 = puVar5[1];
      goto LAB_0011fcd0;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar11 = 0;
  }
  puVar6 = puVar7 + param_1 * 2;
  puVar4 = puVar7 + lVar11 * 2;
  puVar5 = puVar4;
  if (((int)puVar6 - (int)puVar4 & 0x10U) != 0) {
    *puVar4 = 0;
    puVar5 = puVar4 + 2;
    if (puVar4 + 2 == puVar6) goto LAB_0011fc80;
  }
  do {
    *puVar5 = 0;
    puVar4 = puVar5 + 4;
    puVar5[2] = 0;
    puVar5 = puVar4;
  } while (puVar4 != puVar6);
LAB_0011fc80:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Ref<Resource> >::_unref() */

void __thiscall CowData<Ref<Resource>>::_unref(CowData<Ref<Resource>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0011fe5d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011fe5d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<unsigned long>::_unref() */

void __thiscall CowData<unsigned_long>::_unref(CowData<unsigned_long> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned long>::resize<false>(long) */

undefined8 __thiscall
CowData<unsigned_long>::resize<false>(CowData<unsigned_long> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
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
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + -8);
    if (param_1 == lVar7) {
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
    lVar3 = lVar7 * 8;
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
      if (lVar7 < param_1) {
        if (uVar4 + 1 == lVar3) {
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) goto LAB_001200b9;
        }
        else {
          if (lVar7 == 0) {
            puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              return 6;
            }
            *puVar5 = 1;
            puVar5[1] = 0;
          }
          else {
            puVar5 = (undefined8 *)
                     Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) goto LAB_001201a0;
            *puVar5 = 1;
          }
          puVar5 = puVar5 + 2;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      else {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
LAB_001200b9:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_001201a0:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return 6;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      return 0;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                   "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                   ,0,0);
  return 6;
}



/* RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,
   DefaultAllocator>::_insert_rb_fix(RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,
   Variant, Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
::_insert_rb_fix(RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                 *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar6 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar7 = pEVar6;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar4 = *(Element **)(pEVar7 + 0x18);
      pEVar5 = *(Element **)(pEVar4 + 0x10);
      pEVar6 = pEVar7;
      if (pEVar5 == pEVar7) break;
      if (*(int *)pEVar5 == 0) goto LAB_001202fa;
      if (*(Element **)(pEVar7 + 0x10) == param_1) {
        lVar2 = *(long *)(param_1 + 8);
        *(long *)(pEVar7 + 0x10) = lVar2;
        pEVar6 = pEVar4;
        if (lVar2 != *(long *)(this + 8)) {
          *(Element **)(lVar2 + 0x18) = pEVar7;
          pEVar6 = *(Element **)(pEVar7 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar6;
        if (pEVar7 == *(Element **)(pEVar6 + 8)) {
          *(Element **)(pEVar6 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar6 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar7;
        *(Element **)(pEVar7 + 0x18) = param_1;
        pEVar5 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar6 = param_1;
        if (pEVar4 == pEVar5) goto LAB_00120418;
LAB_001202a6:
        *(int *)pEVar4 = 0;
      }
      else {
        pEVar5 = *(Element **)(this + 8);
        *(int *)pEVar7 = 1;
        pEVar7 = param_1;
        if (pEVar4 != pEVar5) goto LAB_001202a6;
LAB_00120418:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar4 + 8);
      lVar3 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar4 + 8) = lVar3;
      if (lVar3 != *(long *)(this + 8)) {
        *(Element **)(lVar3 + 0x18) = pEVar4;
      }
      lVar3 = *(long *)(pEVar4 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar4 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar4;
      *(long *)(pEVar4 + 0x18) = lVar2;
LAB_001202e0:
      iVar1 = *(int *)pEVar6;
      param_1 = pEVar7;
    }
    pEVar5 = *(Element **)(pEVar4 + 8);
    if (*(int *)pEVar5 != 0) {
      if (*(Element **)(pEVar7 + 8) == param_1) {
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar7 + 8) = lVar2;
        pEVar6 = pEVar4;
        if (lVar2 != *(long *)(this + 8)) {
          *(Element **)(lVar2 + 0x18) = pEVar7;
          pEVar6 = *(Element **)(pEVar7 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar6;
        if (pEVar7 == *(Element **)(pEVar6 + 0x10)) {
          *(Element **)(pEVar6 + 0x10) = param_1;
        }
        else {
          *(Element **)(pEVar6 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar7;
        *(Element **)(pEVar7 + 0x18) = param_1;
        pEVar5 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar6 = param_1;
        if (pEVar4 == pEVar5) goto LAB_001204e0;
LAB_00120370:
        *(int *)pEVar4 = 0;
      }
      else {
        pEVar5 = *(Element **)(this + 8);
        *(int *)pEVar7 = 1;
        pEVar7 = param_1;
        if (pEVar4 != pEVar5) goto LAB_00120370;
LAB_001204e0:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar4 + 0x10);
      lVar3 = *(long *)(lVar2 + 8);
      *(long *)(pEVar4 + 0x10) = lVar3;
      if (lVar3 != *(long *)(this + 8)) {
        *(Element **)(lVar3 + 0x18) = pEVar4;
      }
      lVar3 = *(long *)(pEVar4 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar4 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar4;
      *(long *)(pEVar4 + 0x18) = lVar2;
      goto LAB_001202e0;
    }
LAB_001202fa:
    pEVar6 = *(Element **)(this + 8);
    *(int *)pEVar7 = 1;
    *(int *)pEVar5 = 1;
    if (pEVar4 == pEVar6) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar4 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar4 + 0x18);
    pEVar6 = *(Element **)(pEVar4 + 0x18);
    param_1 = pEVar4;
  } while( true );
}



/* RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,
   DefaultAllocator>::_insert(ResourceFormatSaverBinaryInstance::NonPersistentKey const&, Variant
   const&) */

Element * __thiscall
RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
::_insert(RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
          *this,NonPersistentKey *param_1,Variant *param_2)

{
  Object *pOVar1;
  undefined8 uVar2;
  char cVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  long in_FS_OFFSET;
  bool bVar10;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar7 = *(Element **)this;
  if (*(Element **)(pEVar7 + 0x10) != *(Element **)(this + 8)) {
    pEVar4 = *(Element **)(pEVar7 + 0x10);
    do {
      pEVar7 = pEVar4;
      if (*(ulong *)param_1 == *(ulong *)(pEVar7 + 0x30)) {
        if (*(ulong *)(param_1 + 8) < *(ulong *)(pEVar7 + 0x38)) goto LAB_00120568;
        if (*(ulong *)(param_1 + 8) <= *(ulong *)(pEVar7 + 0x38)) {
          ::Variant::operator=((Variant *)(pEVar7 + 0x40),param_2);
          goto LAB_0012074a;
        }
LAB_00120580:
        pEVar4 = *(Element **)(pEVar7 + 8);
      }
      else {
        if (*(ulong *)(pEVar7 + 0x30) <= *(ulong *)param_1) goto LAB_00120580;
LAB_00120568:
        pEVar4 = *(Element **)(pEVar7 + 0x10);
      }
    } while (*(Element **)(this + 8) != pEVar4);
  }
  pEVar4 = (Element *)operator_new(0x58,DefaultAllocator::alloc);
  pOVar1 = *(Object **)param_1;
  local_68 = (Object *)0x0;
  if ((pOVar1 != (Object *)0x0) &&
     (cVar3 = RefCounted::reference(), local_68 = pOVar1, cVar3 == '\0')) {
    local_68 = (Object *)0x0;
  }
  StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 8));
  ::Variant::Variant((Variant *)local_58,param_2);
  *(undefined4 *)pEVar4 = 0;
  *(undefined1 (*) [16])(pEVar4 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pEVar4 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pEVar4 + 0x28) = (undefined1  [16])0x0;
  if (local_68 != (Object *)0x0) {
    *(Object **)(pEVar4 + 0x30) = local_68;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)(pEVar4 + 0x30) = 0;
    }
  }
  StringName::StringName((StringName *)(pEVar4 + 0x38),(StringName *)&local_60);
  ::Variant::Variant((Variant *)(pEVar4 + 0x40),(Variant *)local_58);
  if (::Variant::needs_deinit[local_58[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
  *(Element **)(pEVar4 + 0x18) = pEVar7;
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(pEVar4 + 8) = uVar2;
  *(undefined8 *)(pEVar4 + 0x10) = uVar2;
  if (*(Element **)this == pEVar7) {
LAB_001206a4:
    *(Element **)(pEVar7 + 0x10) = pEVar4;
    pEVar7 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar6 = pEVar4;
    pEVar8 = *(Element **)(pEVar4 + 8);
    if (pEVar7 != *(Element **)(pEVar4 + 8)) goto LAB_001206c0;
LAB_001207a0:
    do {
      pEVar5 = *(Element **)(pEVar6 + 0x18);
      bVar10 = pEVar6 == *(Element **)(pEVar5 + 8);
      pEVar6 = pEVar5;
    } while (bVar10);
    if (pEVar9 == pEVar5) {
      pEVar5 = (Element *)0x0;
    }
  }
  else {
    if (*(ulong *)param_1 == *(ulong *)(pEVar7 + 0x30)) {
      if (*(ulong *)(param_1 + 8) < *(ulong *)(pEVar7 + 0x38)) goto LAB_001206a4;
    }
    else if (*(ulong *)param_1 < *(ulong *)(pEVar7 + 0x30)) goto LAB_001206a4;
    *(Element **)(pEVar7 + 8) = pEVar4;
    pEVar7 = *(Element **)(this + 8);
    pEVar8 = *(Element **)(pEVar4 + 8);
    pEVar9 = *(Element **)this;
    pEVar6 = pEVar4;
    if (pEVar7 == pEVar8) goto LAB_001207a0;
LAB_001206c0:
    do {
      pEVar9 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar9;
    } while (pEVar7 != *(Element **)pEVar9);
  }
  *(Element **)(pEVar4 + 0x20) = pEVar5;
  pEVar9 = *(Element **)(pEVar4 + 0x10);
  pEVar7 = pEVar4;
  if (*(Element **)(this + 8) == *(Element **)(pEVar4 + 0x10)) {
    do {
      pEVar9 = pEVar7;
      pEVar7 = *(Element **)(pEVar9 + 0x18);
    } while (pEVar9 == *(Element **)(pEVar7 + 0x10));
    if (*(Element **)this != pEVar9) goto LAB_001206f4;
    *(undefined8 *)(pEVar4 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0012070e;
LAB_001206fd:
    *(Element **)(pEVar5 + 0x28) = pEVar4;
    pEVar7 = *(Element **)(pEVar4 + 0x28);
    if (pEVar7 == (Element *)0x0) goto LAB_0012070e;
  }
  else {
    do {
      pEVar7 = pEVar9;
      pEVar9 = *(Element **)(pEVar7 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar7 + 8));
LAB_001206f4:
    *(Element **)(pEVar4 + 0x28) = pEVar7;
    if (pEVar5 != (Element *)0x0) goto LAB_001206fd;
  }
  *(Element **)(pEVar7 + 0x20) = pEVar4;
LAB_0012070e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar4);
  pEVar7 = pEVar4;
LAB_0012074a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete_allocator<RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>, DefaultAllocator>::Element,
   DefaultAllocator>(RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>, DefaultAllocator>::Element*) */

void memdelete_allocator<RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  if (Variant::needs_deinit[*(int *)(param_1 + 0x40)] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x38) != 0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(param_1 + 0x30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Memory::free_static(param_1,false);
        return;
      }
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* ResourceFormatSaverBinaryInstance::~ResourceFormatSaverBinaryInstance() */

void __thiscall
ResourceFormatSaverBinaryInstance::~ResourceFormatSaverBinaryInstance
          (ResourceFormatSaverBinaryInstance *this)

{
  RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
  *this_00;
  long *plVar1;
  uint uVar2;
  Element *pEVar3;
  Object *pOVar4;
  char cVar5;
  Element *pEVar6;
  long lVar7;
  Element *pEVar8;
  Element *pEVar9;
  void *pvVar10;
  Element *pEVar11;
  bool bVar12;
  
  List<Ref<Resource>,DefaultAllocator>::~List((List<Ref<Resource>,DefaultAllocator> *)(this + 0xd0))
  ;
  pvVar10 = *(void **)(this + 0xa8);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0xcc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 200) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xcc) = 0;
        *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb0) + lVar7) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            *(int *)(*(long *)(this + 0xb0) + lVar7) = 0;
            if (*(long *)((long)pvVar10 + 0x10) != 0) {
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar4 = *(Object **)((long)pvVar10 + 0x10);
                cVar5 = predelete_handler(pOVar4);
                if (cVar5 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
              }
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0xa8);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        *(undefined4 *)(this + 0xcc) = 0;
        *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_001209ff;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0xb0),false);
  }
LAB_001209ff:
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x98));
  pvVar10 = *(void **)(this + 0x68);
  if (pvVar10 != (void *)0x0) {
    if (*(int *)(this + 0x8c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x88) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x70) + lVar7) != 0) {
            bVar12 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x70) + lVar7) = 0;
            pvVar10 = *(void **)((long)pvVar10 + lVar7 * 2);
            if ((bVar12) && (*(long *)((long)pvVar10 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar10,false);
            pvVar10 = *(void **)(this + 0x68);
            *(undefined8 *)((long)pvVar10 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        *(undefined4 *)(this + 0x8c) = 0;
        *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
        if (pvVar10 == (void *)0x0) goto LAB_00120ac1;
      }
    }
    Memory::free_static(pvVar10,false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
LAB_00120ac1:
  lVar7 = *(long *)(this + 0x48);
  if (lVar7 != 0) {
    pEVar3 = *(Element **)(lVar7 + 0x10);
    pEVar6 = *(Element **)(this + 0x50);
    if (pEVar3 != pEVar6) {
      pEVar11 = *(Element **)(pEVar3 + 0x10);
      this_00 = (RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
                 *)(this + 0x48);
      if (pEVar6 != pEVar11) {
        pEVar8 = *(Element **)(pEVar11 + 0x10);
        if (pEVar6 != pEVar8) {
          pEVar9 = *(Element **)(pEVar8 + 0x10);
          if (pEVar6 != pEVar9) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,pEVar9);
            pEVar9 = *(Element **)(this + 0x50);
          }
          if (pEVar9 != *(Element **)(pEVar8 + 8)) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,*(Element **)(pEVar8 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar8 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar8 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar8 + 0x30) != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar4 = *(Object **)(pEVar8 + 0x30);
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          Memory::free_static(pEVar8,false);
          pEVar8 = *(Element **)(this + 0x50);
        }
        pEVar6 = *(Element **)(pEVar11 + 8);
        if (pEVar6 != pEVar8) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar8) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,*(Element **)(pEVar6 + 0x10));
            pEVar8 = *(Element **)(this + 0x50);
          }
          if (pEVar8 != *(Element **)(pEVar6 + 8)) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,*(Element **)(pEVar6 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar6 + 0x30) != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar4 = *(Object **)(pEVar6 + 0x30);
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          Memory::free_static(pEVar6,false);
        }
        memdelete_allocator<RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar11);
        pEVar11 = *(Element **)(this + 0x50);
      }
      pEVar6 = *(Element **)(pEVar3 + 8);
      if (pEVar6 != pEVar11) {
        pEVar8 = *(Element **)(pEVar6 + 0x10);
        if (pEVar11 != pEVar8) {
          pEVar9 = *(Element **)(pEVar8 + 0x10);
          if (pEVar11 != pEVar9) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,pEVar9);
            pEVar9 = *(Element **)(this + 0x50);
          }
          if (pEVar9 != *(Element **)(pEVar8 + 8)) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,*(Element **)(pEVar8 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar8 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar8 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar8 + 0x30) != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar4 = *(Object **)(pEVar8 + 0x30);
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          Memory::free_static(pEVar8,false);
          pEVar8 = *(Element **)(this + 0x50);
        }
        pEVar11 = *(Element **)(pEVar6 + 8);
        if (pEVar11 != pEVar8) {
          if (*(Element **)(pEVar11 + 0x10) != pEVar8) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,*(Element **)(pEVar11 + 0x10));
            pEVar8 = *(Element **)(this + 0x50);
          }
          if (pEVar8 != *(Element **)(pEVar11 + 8)) {
            RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree(this_00,*(Element **)(pEVar11 + 8));
          }
          if (::Variant::needs_deinit[*(int *)(pEVar11 + 0x40)] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar11 + 0x38) != 0)) {
            StringName::unref();
          }
          if (*(long *)(pEVar11 + 0x30) != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar4 = *(Object **)(pEVar11 + 0x30);
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          Memory::free_static(pEVar11,false);
        }
        memdelete_allocator<RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar6);
      }
      memdelete_allocator<RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar3);
      lVar7 = *(long *)(this + 0x48);
      pEVar6 = *(Element **)(this + 0x50);
    }
    *(Element **)(lVar7 + 0x10) = pEVar6;
    *(undefined4 *)(this + 0x58) = 0;
    if (*(Element **)(this + 0x48) != (Element *)0x0) {
      memdelete_allocator<RBMap<ResourceFormatSaverBinaryInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverBinaryInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                (*(Element **)(this + 0x48));
    }
  }
  pvVar10 = *(void **)(this + 0x20);
  if (pvVar10 == (void *)0x0) goto LAB_00120e17;
  if (*(int *)(this + 0x44) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4) != 0) {
      memset(*(void **)(this + 0x38),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x40) * 4) << 2);
      if (*(int *)(this + 0x44) == 0) goto LAB_00120dec;
    }
    lVar7 = 0;
    do {
      plVar1 = (long *)((long)pvVar10 + lVar7 * 8);
      if (*plVar1 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar4 = (Object *)*plVar1;
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
        pvVar10 = *(void **)(this + 0x20);
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(this + 0x44));
    *(undefined4 *)(this + 0x44) = 0;
    if (pvVar10 == (void *)0x0) goto LAB_00120e17;
  }
LAB_00120dec:
  Memory::free_static(pvVar10,false);
  Memory::free_static(*(void **)(this + 0x30),false);
  Memory::free_static(*(void **)(this + 0x28),false);
  Memory::free_static(*(void **)(this + 0x38),false);
LAB_00120e17:
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatSaverBinary::~ResourceFormatSaverBinary() */

void __thiscall
ResourceFormatSaverBinary::~ResourceFormatSaverBinary(ResourceFormatSaverBinary *this)

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
/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* ResourceLoaderBinary::~ResourceLoaderBinary() */

void __thiscall ResourceLoaderBinary::~ResourceLoaderBinary(ResourceLoaderBinary *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatSaverBinaryInstance::~ResourceFormatSaverBinaryInstance() */

void __thiscall
ResourceFormatSaverBinaryInstance::~ResourceFormatSaverBinaryInstance
          (ResourceFormatSaverBinaryInstance *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ResourceFormatSaverBinaryInstance::ResourceData, DefaultAllocator>::~List() */

void __thiscall
List<ResourceFormatSaverBinaryInstance::ResourceData,DefaultAllocator>::~List
          (List<ResourceFormatSaverBinaryInstance::ResourceData,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ResourceFormatSaverBinaryInstance::Property, DefaultAllocator>::~List() */

void __thiscall
List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator>::~List
          (List<ResourceFormatSaverBinaryInstance::Property,DefaultAllocator> *this)

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
/* List<Ref<Resource>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<Resource>,DefaultAllocator>::~List(List<Ref<Resource>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* ResourceFormatLoaderBinary::~ResourceFormatLoaderBinary() */

void __thiscall
ResourceFormatLoaderBinary::~ResourceFormatLoaderBinary(ResourceFormatLoaderBinary *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


