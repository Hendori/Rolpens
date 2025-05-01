
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



/* EGLManager::_get_cache(void const*, long, void*, long) */

long EGLManager::_get_cache(void *param_1,long param_2,void *param_3,long param_4)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  ulong uVar4;
  Object *pOVar5;
  char cVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  ulong local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CryptoCore::b64_encode_str((uchar *)&local_48,(int)param_1);
  String::replace((char *)&local_60,(char *)&local_48);
  pOVar5 = local_48;
  if (local_48 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (Object *)0x0;
      Memory::free_static((void *)((long)pOVar5 + -0x10),false);
    }
  }
  local_50 = 0;
  local_48 = (Object *)0x102a2b;
  local_40 = 6;
  String::parse_latin1((StrRange *)&local_50);
  String::path_join((String *)&local_48);
  String::operator+((String *)&local_58,(String *)&local_48);
  pOVar5 = local_48;
  if (local_48 != (Object *)0x0) {
    LOCK();
    pOVar2 = local_48 + -0x10;
    *(long *)pOVar2 = *(long *)pOVar2 + -1;
    UNLOCK();
    if (*(long *)pOVar2 == 0) {
      local_48 = (Object *)0x0;
      Memory::free_static(pOVar5 + -0x10,false);
    }
  }
  uVar4 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(uVar4 - 0x10),false);
    }
  }
  local_50 = local_50 & 0xffffffff00000000;
  lVar7 = 0;
  FileAccess::open((String *)&local_48,(int)(String *)&local_58,(Error *)0x1);
  if ((int)local_50 == 0) {
    lVar7 = (**(code **)(*(long *)local_48 + 0x1d0))();
    if (lVar7 <= param_4) {
      (**(code **)(*(long *)local_48 + 0x220))(local_48,param_3,lVar7);
    }
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EGLManager::_set_cache(void const*, long, void const*, long) */

void EGLManager::_set_cache(void *param_1,long param_2,void *param_3,long param_4)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  ulong uVar4;
  Object *pOVar5;
  char cVar6;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  ulong local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CryptoCore::b64_encode_str((uchar *)&local_48,(int)param_1);
  String::replace((char *)&local_60,(char *)&local_48);
  pOVar5 = local_48;
  if (local_48 != (Object *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (Object *)0x0;
      Memory::free_static((void *)((long)pOVar5 + -0x10),false);
    }
  }
  local_50 = 0;
  local_48 = (Object *)0x102a2b;
  local_40 = 6;
  String::parse_latin1((StrRange *)&local_50);
  String::path_join((String *)&local_48);
  String::operator+((String *)&local_58,(String *)&local_48);
  pOVar5 = local_48;
  if (local_48 != (Object *)0x0) {
    LOCK();
    pOVar2 = local_48 + -0x10;
    *(long *)pOVar2 = *(long *)pOVar2 + -1;
    UNLOCK();
    if (*(long *)pOVar2 == 0) {
      local_48 = (Object *)0x0;
      Memory::free_static(pOVar5 + -0x10,false);
    }
  }
  uVar4 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(uVar4 - 0x10),false);
    }
  }
  local_50 = local_50 & 0xffffffff00000000;
  FileAccess::open((String *)&local_48,(int)(String *)&local_58,(Error *)0x2);
  if ((int)local_50 == 0) {
    (**(code **)(*(long *)local_48 + 0x2d0))(local_48,param_3,param_4);
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::window_destroy(int) */

void __thiscall EGLManager::window_destroy(EGLManager *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x18);
  if ((param_1 < 0) || ((int)uVar5 <= param_1)) {
    _err_print_index_error
              ("window_destroy","drivers/egl/egl_manager.cpp",0x140,(long)param_1,(long)(int)uVar5,
               "p_window_id","(int)windows.size()","",false,false);
    return;
  }
  lVar3 = (long)param_1;
  if ((uint)param_1 < uVar5) {
    pcVar4 = (char *)((long)param_1 * 0x10 + *(long *)(this + 0x20));
    if (*pcVar4 != '\0') {
      uVar1 = *(uint *)(pcVar4 + 4);
      lVar3 = (long)(int)uVar1;
      uVar5 = *(uint *)(this + 8);
      *pcVar4 = '\0';
      if (((int)uVar1 < 0) || ((int)uVar5 <= (int)uVar1)) {
        _err_print_index_error
                  ("window_destroy","drivers/egl/egl_manager.cpp",0x14a,lVar3,(long)(int)uVar5,
                   "glwindow.gldisplay_id","(int)displays.size()","",false,false);
        return;
      }
      if (uVar5 <= uVar1) goto LAB_001007e0;
      if (*(long *)(pcVar4 + 8) != 0) {
        (*_glad_eglDestroySurface)(*(undefined8 *)(*(long *)(this + 0x10) + 8 + lVar3 * 0x20));
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
      }
    }
    return;
  }
LAB_001007e0:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,lVar3,(ulong)uVar5,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::release_current() */

void __thiscall EGLManager::release_current(EGLManager *this)

{
  uint uVar1;
  code *pcVar2;
  
  if (*(long *)(this + 0x28) == 0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(this + 0x28) + 4);
  if (uVar1 < *(uint *)(this + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0010089b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_glad_eglMakeCurrent)(*(undefined8 *)((ulong)uVar1 * 0x20 + *(long *)(this + 0x10) + 8),0,0,0)
    ;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
             (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::swap_buffers() */

void __thiscall EGLManager::swap_buffers(EGLManager *this)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  
  pcVar2 = *(char **)(this + 0x28);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  if (*pcVar2 != '\0') {
    uVar1 = *(uint *)(pcVar2 + 4);
    if (uVar1 < *(uint *)(this + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0010092e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_glad_eglSwapBuffers)
                (*(undefined8 *)((ulong)uVar1 * 0x20 + *(long *)(this + 0x10) + 8),
                 *(undefined8 *)(pcVar2 + 8));
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
               (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_error("swap_buffers","drivers/egl/egl_manager.cpp",0x163,
                   "Current OpenGL window is uninitialized!",0,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::window_make_current(int) */

void __thiscall EGLManager::window_make_current(EGLManager *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_1 == -1) {
    return;
  }
  if ((uint)param_1 < *(uint *)(this + 0x18)) {
    pcVar4 = (char *)((ulong)(uint)param_1 * 0x10 + *(long *)(this + 0x20));
    if ((*(char **)(this + 0x28) != pcVar4) && (*pcVar4 != '\0')) {
      uVar1 = *(uint *)(pcVar4 + 4);
      *(char **)(this + 0x28) = pcVar4;
      if (uVar1 < *(uint *)(this + 8)) {
        lVar3 = (ulong)uVar1 * 0x20 + *(long *)(this + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00100a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_glad_eglMakeCurrent)
                  (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(pcVar4 + 8),
                   *(undefined8 *)(pcVar4 + 8),*(undefined8 *)(lVar3 + 0x10));
        return;
      }
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
                 (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
             (ulong)*(uint *)(this + 0x18),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::set_use_vsync(bool) */

void __thiscall EGLManager::set_use_vsync(EGLManager *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(long *)(this + 0x28) == 0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(this + 0x28) + 4);
  if (uVar1 < *(uint *)(this + 8)) {
    iVar3 = (*_glad_eglSwapInterval)
                      (*(undefined8 *)((ulong)uVar1 * 0x20 + *(long *)(this + 0x10) + 8),param_1);
    if (iVar3 != 0) {
      this[0x30] = (EGLManager)param_1;
      return;
    }
    _err_print_error("set_use_vsync","drivers/egl/egl_manager.cpp",0x18d,
                     "Could not set V-Sync mode.",0,1);
    this[0x30] = (EGLManager)param_1;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
             (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* EGLManager::is_using_vsync() const */

EGLManager __thiscall EGLManager::is_using_vsync(EGLManager *this)

{
  return this[0x30];
}



/* EGLManager::get_context(int) */

undefined8 __thiscall EGLManager::get_context(EGLManager *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(this + 0x18);
  uVar4 = (ulong)(uint)param_1;
  if ((uint)param_1 < uVar1) {
    pcVar5 = (char *)((ulong)(uint)param_1 * 0x10 + *(long *)(this + 0x20));
    if (*pcVar5 == '\0') {
      return 0;
    }
    uVar2 = *(uint *)(pcVar5 + 4);
    uVar4 = (ulong)uVar2;
    uVar1 = *(uint *)(this + 8);
    if (uVar2 < uVar1) {
      return *(undefined8 *)(uVar4 * 0x20 + *(long *)(this + 0x10) + 0x10);
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar4,(ulong)uVar1,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EGLManager::get_display(int) */

undefined8 __thiscall EGLManager::get_display(EGLManager *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(this + 0x18);
  uVar4 = (ulong)(uint)param_1;
  if ((uint)param_1 < uVar1) {
    pcVar5 = (char *)((ulong)(uint)param_1 * 0x10 + *(long *)(this + 0x20));
    if (*pcVar5 == '\0') {
      return 0;
    }
    uVar2 = *(uint *)(pcVar5 + 4);
    uVar4 = (ulong)uVar2;
    uVar1 = *(uint *)(this + 8);
    if (uVar2 < uVar1) {
      return *(undefined8 *)(uVar4 * 0x20 + *(long *)(this + 0x10) + 8);
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar4,(ulong)uVar1,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EGLManager::get_config(int) */

undefined8 __thiscall EGLManager::get_config(EGLManager *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(this + 0x18);
  uVar4 = (ulong)(uint)param_1;
  if ((uint)param_1 < uVar1) {
    pcVar5 = (char *)((ulong)(uint)param_1 * 0x10 + *(long *)(this + 0x20));
    if (*pcVar5 == '\0') {
      return 0;
    }
    uVar2 = *(uint *)(pcVar5 + 4);
    uVar4 = (ulong)uVar2;
    uVar1 = *(uint *)(this + 8);
    if (uVar2 < uVar1) {
      return *(undefined8 *)(uVar4 * 0x20 + *(long *)(this + 0x10) + 0x18);
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar4,(ulong)uVar1,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EGLManager::EGLManager() */

void __thiscall EGLManager::EGLManager(EGLManager *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00104208;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x30] = (EGLManager)0x1;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::~EGLManager() */

void __thiscall EGLManager::~EGLManager(EGLManager *this)

{
  long lVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00104208;
  if (*(int *)(this + 8) != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      (*_glad_eglTerminate)(*(undefined8 *)(lVar1 * 0x20 + *(long *)(this + 0x10) + 8));
      lVar1 = lVar2;
    } while ((uint)lVar2 < *(uint *)(this + 8));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    if (*(int *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    Memory::free_static(*(void **)(this + 0x20),false);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    if (*(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x10),false);
    return;
  }
  return;
}



/* EGLManager::~EGLManager() */

void __thiscall EGLManager::~EGLManager(EGLManager *this)

{
  ~EGLManager(this);
  operator_delete(this,0x38);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::_gldisplay_create_context(EGLManager::GLDisplay&) */

undefined8 __thiscall EGLManager::_gldisplay_create_context(EGLManager *this,GLDisplay *param_1)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_b4;
  long local_b0;
  undefined1 local_a8 [8];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0x3038;
  local_88 = __LC29;
  uStack_80 = _UNK_00104278;
  local_38 = _LC33;
  local_78 = __LC30;
  uStack_70 = _LC33;
  local_30 = 0x3038;
  local_58 = __LC31;
  uStack_50 = _UNK_00104298;
  local_b4 = 0;
  local_48 = __LC32;
  uStack_40 = _UNK_001042a8;
  lVar4 = OS::get_singleton();
  if (*(char *)(lVar4 + 0x3d) == '\0') {
    (*_glad_eglChooseConfig)(*(undefined8 *)(param_1 + 8),&local_88,param_1 + 0x18,1,&local_b4);
    iVar3 = (*_glad_eglGetError)();
  }
  else {
    (*_glad_eglChooseConfig)(*(undefined8 *)(param_1 + 8),&local_58,param_1 + 0x18,1,&local_b4);
    iVar3 = (*_glad_eglGetError)();
  }
  if (iVar3 == 0x3000) {
    if (local_b4 == 0) {
      uVar5 = 3;
      _err_print_error("_gldisplay_create_context","drivers/egl/egl_manager.cpp",0xda,
                       "Condition \"config_count == 0\" is true. Returning: ERR_UNCONFIGURED",0,0);
    }
    else {
      (**(code **)(*(long *)this + 0x20))(local_a8,this);
      lVar4 = local_a0;
      if ((local_a0 != 0) && (*(long *)(local_a0 + -8) < 1)) {
        lVar4 = 0;
      }
      lVar4 = (*_glad_eglCreateContext)
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),0,lVar4);
      *(long *)(param_1 + 0x10) = lVar4;
      uVar5 = 0;
      if (lVar4 == 0) {
        (*_glad_eglGetError)();
        local_b0 = 0;
        local_98 = "Can\'t create an EGL context. Error code: %d";
        local_90 = 0x2b;
        String::parse_latin1((StrRange *)&local_b0);
        vformat<int>((String *)&local_98,(int)(StrRange *)&local_b0);
        _err_print_error("_gldisplay_create_context","drivers/egl/egl_manager.cpp",0xde,
                         "Condition \"p_gldisplay.egl_context == (static_cast<EGLContext>(0))\" is true. Returning: ERR_CANT_CREATE"
                         ,(String *)&local_98,0);
        pcVar2 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        uVar5 = 0x14;
      }
      lVar4 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
  }
  else {
    uVar5 = 0x2f;
    _err_print_error("_gldisplay_create_context","drivers/egl/egl_manager.cpp",0xd9,
                     "Condition \"glad_eglGetError() != 0x3000\" is true. Returning: ERR_BUG",0,0);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::initialize(void*) */

undefined8 __thiscall EGLManager::initialize(EGLManager *this,void *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  Object *pOVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  long *plVar16;
  long in_FS_OFFSET;
  Object *local_90;
  long local_88;
  long local_80;
  long local_78;
  long *local_70;
  char *local_68;
  int *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = gladLoaderLoadEGL(0);
  if (iVar7 == 0) {
    _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x1c1,
                     "Method/function failed. Returning: ERR_UNAVAILABLE",
                     "Can\'t load EGL dynamic library.",0,0);
  }
  else {
    if (_GLAD_EGL_EXT_platform_base == 0) {
      _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x1d0,
                       "EGL: EGL_EXT_platform_base not found during init, using default platform.",0
                       ,1);
                    /* WARNING: Load size is inaccurate */
      lVar9 = (*_glad_eglGetDisplay)(*param_1);
    }
    else {
      local_70 = (long *)0x0;
      (**(code **)(*(long *)this + 0x18))(&local_68);
      CowData<long>::_copy_on_write((CowData<long> *)&local_60);
      piVar11 = local_60;
      CowData<long>::_copy_on_write((CowData<long> *)&local_60);
      pcVar2 = _glad_eglGetPlatformDisplayEXT;
      if (local_60 == (int *)0x0) {
        piVar15 = (int *)0x0;
        if (piVar11 != (int *)0x0) goto LAB_001012d7;
        uVar8 = (**(code **)(*(long *)this + 8))(this);
        lVar9 = (*pcVar2)(uVar8,param_1,0);
      }
      else {
        piVar15 = local_60 + *(long *)(local_60 + -2) * 2;
        if (piVar11 == piVar15) {
LAB_001012fe:
          piVar11 = local_60;
          LOCK();
          plVar16 = (long *)(local_60 + -4);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_60 = (int *)0x0;
            Memory::free_static(piVar11 + -4,false);
          }
        }
        else {
LAB_001012d7:
          do {
            iVar7 = *piVar11;
            piVar11 = piVar11 + 2;
            Vector<int>::push_back((Vector<int> *)&local_78,iVar7);
          } while (piVar15 != piVar11);
          if (local_60 != (int *)0x0) goto LAB_001012fe;
        }
        plVar16 = local_70;
        pcVar2 = _glad_eglGetPlatformDisplayEXT;
        uVar8 = (**(code **)(*(long *)this + 8))(this);
        lVar9 = (*pcVar2)(uVar8,param_1,plVar16);
        if (plVar16 != (long *)0x0) {
          LOCK();
          plVar16 = plVar16 + -2;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            Memory::free_static(local_70 + -2,false);
          }
        }
      }
    }
    if (lVar9 == 0) {
      (*_glad_eglTerminate)(0);
      _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x1d7,
                       "Method/function failed. Returning: ERR_UNAVAILABLE",
                       "Can\'t get a valid initial EGL display.",0,0);
    }
    else {
      (*_glad_eglInitialize)(lVar9,0,0);
      iVar7 = gladLoaderLoadEGL(lVar9);
      if (iVar7 == 0) {
        (*_glad_eglTerminate)(lVar9);
        _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x1df,
                         "Method/function failed. Returning: ERR_UNAVAILABLE",
                         "Can\'t load EGL dynamic library.",0,0);
      }
      else {
        cVar6 = is_print_verbose_enabled();
        if (cVar6 != '\0') {
          local_80 = 0;
          local_68 = "Loaded EGL %d.%d";
          local_60 = (int *)0x10;
          String::parse_latin1((StrRange *)&local_80);
          vformat<int,int>((String *)&local_78,(int)(StrRange *)&local_80,iVar7 / 10000);
          Variant::Variant((Variant *)local_58,(String *)&local_78);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          pcVar10 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar16 = (long *)(local_68 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar10 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar12 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar16 = (long *)(local_78 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
          lVar12 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar16 = (long *)(local_80 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
        }
        if (_GLAD_EGL_VERSION_1_4 != 0) {
          (*_glad_eglTerminate)(lVar9);
          Engine::get_singleton();
          Engine::get_shader_cache_path();
          pcVar10 = local_68;
          if (shader_cache_dir == local_68) {
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar16 = (long *)(local_68 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
              goto LAB_001013ef;
            }
LAB_00101401:
            local_60 = (int *)0x7;
            local_68 = "user://";
            String::parse_latin1((StrRange *)&shader_cache_dir);
          }
          else {
            if (shader_cache_dir != (char *)0x0) {
              LOCK();
              plVar16 = (long *)(shader_cache_dir + -0x10);
              *plVar16 = *plVar16 + -1;
              pcVar10 = shader_cache_dir;
              UNLOCK();
              if (*plVar16 == 0) {
                shader_cache_dir = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
            shader_cache_dir = local_68;
LAB_001013ef:
            if ((shader_cache_dir == (char *)0x0) || (*(uint *)(shader_cache_dir + -8) < 2))
            goto LAB_00101401;
          }
          DirAccess::open((String *)&local_90,(Error *)&shader_cache_dir);
          pOVar4 = local_90;
          if (local_90 == (Object *)0x0) {
            operator+((char *)&local_68,
                      (String *)
                      "EGL: Can\'t create shader cache folder, no shader caching will happen: ");
            _err_print_error("initialize","drivers/egl/egl_manager.cpp",500,(String *)&local_68,0,0)
            ;
            pcVar10 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar16 = (long *)(local_68 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
joined_r0x00101f43:
            if (shader_cache_dir != (char *)0x0) {
              LOCK();
              plVar16 = (long *)(shader_cache_dir + -0x10);
              *plVar16 = *plVar16 + -1;
              pcVar10 = shader_cache_dir;
              UNLOCK();
              if (*plVar16 == 0) {
                shader_cache_dir = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
              shader_cache_dir = (char *)0x0;
            }
          }
          else {
            pcVar2 = *(code **)(*(long *)local_90 + 0x1a8);
            local_68 = "shader_cache";
            local_80 = 0;
            local_60 = (int *)0xc;
            String::parse_latin1((StrRange *)&local_80);
            local_68 = "EGL";
            local_78 = 0;
            local_60 = (int *)0x3;
            String::parse_latin1((StrRange *)&local_78);
            String::path_join((String *)&local_68);
            iVar7 = (*pcVar2)(pOVar4);
            pcVar10 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar16 = (long *)(local_68 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
            lVar9 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar16 = (long *)(local_78 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            lVar9 = local_80;
            pOVar4 = local_90;
            if (local_80 != 0) {
              LOCK();
              plVar16 = (long *)(local_80 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
                pOVar4 = local_90;
              }
            }
            local_90 = pOVar4;
            if (iVar7 != 0) {
              pcVar2 = *(code **)(*(long *)pOVar4 + 0x1c0);
              local_68 = "shader_cache";
              local_80 = 0;
              local_60 = (int *)0xc;
              String::parse_latin1((StrRange *)&local_80);
              local_68 = "EGL";
              local_78 = 0;
              local_60 = (int *)0x3;
              String::parse_latin1((StrRange *)&local_78);
              String::path_join((String *)&local_68);
              iVar7 = (*pcVar2)(pOVar4);
              pcVar10 = local_68;
              if (local_68 != (char *)0x0) {
                LOCK();
                plVar16 = (long *)(local_68 + -0x10);
                *plVar16 = *plVar16 + -1;
                UNLOCK();
                if (*plVar16 == 0) {
                  local_68 = (char *)0x0;
                  Memory::free_static(pcVar10 + -0x10,false);
                }
              }
              lVar9 = local_78;
              if (local_78 != 0) {
                LOCK();
                plVar16 = (long *)(local_78 + -0x10);
                *plVar16 = *plVar16 + -1;
                UNLOCK();
                if (*plVar16 == 0) {
                  local_78 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              lVar9 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar16 = (long *)(local_80 + -0x10);
                *plVar16 = *plVar16 + -1;
                UNLOCK();
                if (*plVar16 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              if (iVar7 != 0) {
                operator+((char *)&local_68,
                          (String *)
                          "EGL: Can\'t create shader cache folder, no shader caching will happen: ")
                ;
                _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x1fc,
                                 (String *)&local_68,0,0);
                pcVar10 = local_68;
                if (local_68 != (char *)0x0) {
                  LOCK();
                  plVar16 = (long *)(local_68 + -0x10);
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (*plVar16 == 0) {
                    local_68 = (char *)0x0;
                    Memory::free_static(pcVar10 + -0x10,false);
                  }
                }
                goto joined_r0x00101f43;
              }
            }
            local_68 = "shader_cache";
            local_88 = 0;
            local_60 = (int *)0xc;
            String::parse_latin1((StrRange *)&local_88);
            local_68 = "EGL";
            local_80 = 0;
            local_60 = (int *)0x3;
            String::parse_latin1((StrRange *)&local_80);
            String::path_join((String *)&local_78);
            String::path_join((String *)&local_68);
            pcVar10 = local_68;
            if (shader_cache_dir == local_68) {
              if (shader_cache_dir != (char *)0x0) {
                LOCK();
                plVar16 = (long *)(shader_cache_dir + -0x10);
                *plVar16 = *plVar16 + -1;
                UNLOCK();
                if (*plVar16 == 0) {
                  local_68 = (char *)0x0;
                  Memory::free_static(pcVar10 + -0x10,false);
                }
              }
            }
            else {
              if (shader_cache_dir != (char *)0x0) {
                LOCK();
                plVar16 = (long *)(shader_cache_dir + -0x10);
                *plVar16 = *plVar16 + -1;
                pcVar10 = shader_cache_dir;
                UNLOCK();
                if (*plVar16 == 0) {
                  shader_cache_dir = (char *)0x0;
                  Memory::free_static(pcVar10 + -0x10,false);
                }
              }
              shader_cache_dir = local_68;
            }
            lVar9 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar16 = (long *)(local_78 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            lVar9 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar16 = (long *)(local_80 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            lVar9 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar16 = (long *)(local_88 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
          }
          pcVar10 = (char *)(*_glad_eglQueryString)(0,0x3055);
          local_88 = 0;
          piVar11 = (int *)0x0;
          if (pcVar10 != (char *)0x0) {
            piVar11 = (int *)strlen(pcVar10);
          }
          local_68 = pcVar10;
          local_60 = piVar11;
          String::parse_latin1((StrRange *)&local_88);
          iVar7 = (*_glad_eglGetError)();
          if (iVar7 == 0x3000) {
            pcVar10 = (char *)(*(code *)**(undefined8 **)this)(this);
            String::split((char *)&local_78,SUB81((StrRange *)&local_88,0),0x102b76);
            piVar11 = (int *)0x0;
            local_80 = 0;
            if (pcVar10 != (char *)0x0) {
              piVar11 = (int *)strlen(pcVar10);
            }
            local_68 = pcVar10;
            local_60 = piVar11;
            String::parse_latin1((StrRange *)&local_80);
            if (local_70 == (long *)0x0) {
              lVar9 = -1;
              if (local_80 != 0) goto LAB_00101ba8;
            }
            else {
              lVar12 = local_70[-1];
              if (lVar12 == 0) {
                lVar9 = -1;
                if (local_80 != 0) goto LAB_00101ba8;
LAB_00101bd3:
                plVar5 = local_70;
                LOCK();
                plVar16 = local_70 + -2;
                *plVar16 = *plVar16 + -1;
                UNLOCK();
                if (*plVar16 == 0) {
                  if (local_70 == (long *)0x0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  lVar12 = local_70[-1];
                  lVar13 = 0;
                  local_70 = (long *)0x0;
                  plVar16 = plVar5;
                  if (lVar12 != 0) {
                    do {
                      if (*plVar16 != 0) {
                        LOCK();
                        plVar1 = (long *)(*plVar16 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar3 = *plVar16;
                          *plVar16 = 0;
                          Memory::free_static((void *)(lVar3 + -0x10),false);
                        }
                      }
                      lVar13 = lVar13 + 1;
                      plVar16 = plVar16 + 1;
                    } while (lVar12 != lVar13);
                  }
                  Memory::free_static(plVar5 + -2,false);
                }
              }
              else {
                lVar9 = 0;
                while (lVar9 < lVar12) {
                  cVar6 = String::operator==((String *)(local_70 + lVar9),(String *)&local_80);
                  if (cVar6 != '\0') goto LAB_00101b9e;
                  lVar9 = lVar9 + 1;
                  if (local_70 == (long *)0x0) break;
                  lVar12 = local_70[-1];
                }
                lVar9 = -1;
LAB_00101b9e:
                if (local_80 != 0) {
LAB_00101ba8:
                  lVar12 = local_80;
                  LOCK();
                  plVar16 = (long *)(local_80 + -0x10);
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (*plVar16 == 0) {
                    local_80 = 0;
                    Memory::free_static((void *)(lVar12 + -0x10),false);
                  }
                }
                if (local_70 != (long *)0x0) goto LAB_00101bd3;
              }
              if (lVar9 != -1) goto LAB_0010184e;
            }
            local_78 = 0;
            local_68 = "EGL platform extension \"%s\" not found.";
            local_60 = (int *)0x26;
            String::parse_latin1((StrRange *)&local_78);
            vformat<char_const*>((String *)&local_68,(char *)&local_78);
            _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x20a,
                             "Method/function failed. Returning: ERR_UNAVAILABLE",
                             (String *)&local_68,0,0);
            pcVar10 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar16 = (long *)(local_68 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
            lVar9 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar16 = (long *)(local_78 + -0x10);
              *plVar16 = *plVar16 + -1;
              UNLOCK();
              if (*plVar16 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            uVar14 = 2;
          }
          else {
LAB_0010184e:
            uVar14 = 0;
          }
          lVar9 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar16 = (long *)(local_88 + -0x10);
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar9 + -0x10),false);
            }
          }
          if (((local_90 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
            (**(code **)(*(long *)local_90 + 0x140))(local_90);
            Memory::free_static(local_90,false);
          }
          goto LAB_001018c0;
        }
        local_78 = 0;
        local_68 = "EGL version is too old! %d.%d < 1.4";
        local_60 = (int *)0x23;
        String::parse_latin1((StrRange *)&local_78);
        vformat<int,int>((String *)&local_68,(int)(StrRange *)&local_78,iVar7 / 10000);
        _err_print_error("initialize","drivers/egl/egl_manager.cpp",0x1e7,
                         "Condition \"!GLAD_EGL_VERSION_1_4\" is true. Returning: ERR_UNAVAILABLE",
                         (String *)&local_68,0,0);
        pcVar10 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar16 = (long *)(local_68 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar10 + -0x10,false);
          }
        }
        lVar9 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar16 = (long *)(local_78 + -0x10);
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (*plVar16 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
      }
    }
  }
  uVar14 = 2;
LAB_001018c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::_get_gldisplay_id(void*) [clone .part.0] */

ulong __thiscall EGLManager::_get_gldisplay_id(EGLManager *this,void *param_1)

{
  long *plVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  uint uVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  long in_FS_OFFSET;
  Vector<int> local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  int *local_60;
  void *local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = param_1;
  if (_GLAD_EGL_VERSION_1_5 == 0) {
    if (_GLAD_EGL_EXT_platform_base != 0) {
      local_70 = 0;
      (**(code **)(*(long *)this + 0x18))(local_68);
      CowData<long>::_copy_on_write((CowData<long> *)&local_60);
      piVar13 = local_60;
      CowData<long>::_copy_on_write((CowData<long> *)&local_60);
      if (local_60 == (int *)0x0) {
        if (piVar13 != (int *)0x0) {
          piVar15 = (int *)0x0;
          goto LAB_0010226c;
        }
      }
      else {
        piVar15 = local_60 + *(long *)(local_60 + -2) * 2;
        if (piVar13 != piVar15) {
LAB_0010226c:
          do {
            iVar9 = *piVar13;
            piVar13 = piVar13 + 2;
            Vector<int>::push_back(local_78,iVar9);
          } while (piVar15 != piVar13);
          if (local_60 == (int *)0x0) goto LAB_001022b7;
        }
        piVar13 = local_60;
        LOCK();
        plVar1 = (long *)(local_60 + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = (int *)0x0;
          Memory::free_static(piVar13 + -4,false);
        }
      }
LAB_001022b7:
      pvVar11 = local_58;
      lVar4 = local_70;
      pcVar3 = _glad_eglGetPlatformDisplayEXT;
      pcVar2 = *(code **)(*(long *)this + 8);
      if (local_70 == 0) {
        uVar8 = (*pcVar2)(this);
        lStack_50 = (*pcVar3)(uVar8,pvVar11,0);
      }
      else {
        if (*(long *)(local_70 + -8) < 1) {
          uVar8 = (*pcVar2)(this);
          lStack_50 = (*pcVar3)(uVar8,pvVar11,0);
        }
        else {
          uVar8 = (*pcVar2)();
          lStack_50 = (*pcVar3)(uVar8,pvVar11,lVar4);
        }
        LOCK();
        plVar1 = (long *)(lVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_70 + -0x10),false);
        }
      }
      goto LAB_0010213b;
    }
                    /* WARNING: Load size is inaccurate */
    lStack_50 = (*_glad_eglGetDisplay)(*param_1);
    iVar9 = (*_glad_eglGetError)();
    if (iVar9 != 0x3000) goto LAB_0010233f;
LAB_0010214c:
    if (lStack_50 == 0) {
      _err_print_error("_get_gldisplay_id","drivers/egl/egl_manager.cpp",0x68,
                       "Condition \"new_gldisplay.egl_display == (static_cast<EGLDisplay>(0))\" is true. Returning: -1"
                       ,"Can\'t create an EGL display.",0,0);
    }
    else {
      iVar9 = (*_glad_eglInitialize)(lStack_50,0,0);
      pcVar2 = _glad_eglBindAPI;
      if (iVar9 == 0) {
        _err_print_error("_get_gldisplay_id","drivers/egl/egl_manager.cpp",0x6b,
                         "Method/function failed. Returning: -1","Can\'t initialize an EGL display."
                         ,0,0);
      }
      else {
        uVar8 = (**(code **)(*(long *)this + 0x10))(this);
        iVar9 = (*pcVar2)(uVar8);
        if (iVar9 == 0) {
          _err_print_error("_get_gldisplay_id","drivers/egl/egl_manager.cpp",0x6f,
                           "Method/function failed. Returning: -1","OpenGL not supported.",0,0);
        }
        else {
          iVar9 = _gldisplay_create_context(this,(GLDisplay *)&local_58);
          if (iVar9 == 0) {
            if (((_glad_eglSetBlobCacheFuncsANDROID != (code *)0x0) && (shader_cache_dir != 0)) &&
               (1 < *(uint *)(shader_cache_dir + -8))) {
              (*_glad_eglSetBlobCacheFuncsANDROID)(lStack_50,_set_cache,_get_cache);
            }
            uVar7 = uStack_40;
            uVar6 = local_48;
            lVar4 = lStack_50;
            pvVar5 = local_58;
            uVar12 = *(uint *)(this + 8);
            pvVar11 = *(void **)(this + 0x10);
            if (uVar12 == *(uint *)(this + 0xc)) {
              uVar12 = uVar12 * 2;
              if (uVar12 == 0) {
                uVar12 = 1;
              }
              *(uint *)(this + 0xc) = uVar12;
              pvVar11 = (void *)Memory::realloc_static(pvVar11,(ulong)uVar12 << 5,false);
              *(void **)(this + 0x10) = pvVar11;
              if (pvVar11 == (void *)0x0) {
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar12 = *(uint *)(this + 8);
            }
            uVar10 = (ulong)uVar12;
            *(uint *)(this + 8) = uVar12 + 1;
            puVar14 = (undefined8 *)((long)pvVar11 + uVar10 * 0x20);
            *puVar14 = pvVar5;
            puVar14[1] = lVar4;
            puVar14[2] = uVar6;
            puVar14[3] = uVar7;
            goto LAB_001021f1;
          }
          (*_glad_eglTerminate)(lStack_50);
          _err_print_error("_get_gldisplay_id","drivers/egl/egl_manager.cpp",0x76,
                           "Method/function failed. Returning: -1",0,0);
        }
      }
    }
  }
  else {
    (**(code **)(*(long *)this + 0x18))(local_68,this);
    pvVar11 = local_58;
    pcVar2 = _glad_eglGetPlatformDisplay;
    piVar13 = local_60;
    if ((local_60 != (int *)0x0) && (*(long *)(local_60 + -2) < 1)) {
      piVar13 = (int *)0x0;
    }
    uVar8 = (**(code **)(*(long *)this + 8))(this);
    lStack_50 = (*pcVar2)(uVar8,pvVar11,piVar13);
    piVar13 = local_60;
    if (local_60 != (int *)0x0) {
      LOCK();
      plVar1 = (long *)(local_60 + -4);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = (int *)0x0;
        Memory::free_static(piVar13 + -4,false);
      }
    }
LAB_0010213b:
    iVar9 = (*_glad_eglGetError)();
    if (iVar9 == 0x3000) goto LAB_0010214c;
LAB_0010233f:
    _err_print_error("_get_gldisplay_id","drivers/egl/egl_manager.cpp",0x66,
                     "Condition \"glad_eglGetError() != 0x3000\" is true. Returning: -1",0,0);
  }
  uVar10 = 0xffffffff;
LAB_001021f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EGLManager::_get_gldisplay_id(void*) */

ulong __thiscall EGLManager::_get_gldisplay_id(EGLManager *this,void *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*(uint *)(this + 8) != 0) {
    plVar1 = *(long **)(this + 0x10);
    uVar3 = 0;
    do {
      if ((void *)*plVar1 == param_1) {
        return (ulong)uVar3;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 4;
    } while (uVar3 != *(uint *)(this + 8));
  }
  uVar2 = _get_gldisplay_id(this,param_1);
  return uVar2;
}



/* EGLManager::open_display(void*) */

uint __thiscall EGLManager::open_display(EGLManager *this,void *param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(int *)(this + 8) != 0) {
    plVar2 = *(long **)(this + 0x10);
    iVar1 = 0;
    do {
      if (param_1 == (void *)*plVar2) {
        return iVar1 >> 0x1f & 0x14;
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 4;
    } while (iVar1 != *(int *)(this + 8));
  }
  iVar1 = _get_gldisplay_id(this,param_1);
  return iVar1 >> 0x1f & 0x14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::display_get_native_visual_id(void*) */

undefined4 __thiscall EGLManager::display_get_native_visual_id(EGLManager *this,void *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if (*(uint *)(this + 8) != 0) {
    plVar6 = *(long **)(this + 0x10);
    do {
      if (param_1 == (void *)*plVar6) goto joined_r0x001026a2;
      uVar2 = uVar2 + 1;
      plVar6 = plVar6 + 4;
    } while (*(uint *)(this + 8) != uVar2);
  }
  uVar2 = _get_gldisplay_id(this,param_1);
joined_r0x001026a2:
  if ((int)uVar2 < 0) {
    _err_print_error("display_get_native_visual_id","drivers/egl/egl_manager.cpp",0xee,
                     "Condition \"gldisplay_id < 0\" is true. Returning: ERR_CANT_CREATE",0,0);
    uVar4 = 0x14;
  }
  else {
    if (*(uint *)(this + 8) <= uVar2) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)uVar2,
                 (ulong)*(uint *)(this + 8),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_14 = 0xffffffff;
    lVar5 = (long)(int)uVar2 * 0x20 + *(long *)(this + 0x10);
    iVar3 = (*_glad_eglGetConfigAttrib)
                      (*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x18),0x302e,&local_14);
    uVar4 = local_14;
    if (iVar3 == 0) {
      _err_print_error("display_get_native_visual_id","drivers/egl/egl_manager.cpp",0xf5,
                       "Method/function failed. Returning: -1",0,0);
      uVar4 = 0xffffffff;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EGLManager::window_create(int, void*, void*, int, int) */

undefined8
EGLManager::window_create(int param_1,void *param_2,void *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  ulong uVar11;
  undefined4 in_register_0000003c;
  EGLManager *this;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  
  this = (EGLManager *)CONCAT44(in_register_0000003c,param_1);
  if (*(uint *)(this + 8) != 0) {
    plVar10 = *(long **)(this + 0x10);
    uVar6 = 0;
    do {
      if (param_3 == (void *)*plVar10) goto joined_r0x001027a0;
      uVar6 = uVar6 + 1;
      plVar10 = plVar10 + 4;
    } while (*(uint *)(this + 8) != uVar6);
  }
  uVar6 = _get_gldisplay_id(this,param_3);
joined_r0x001027a0:
  if ((int)uVar6 < 0) {
    _err_print_error("window_create","drivers/egl/egl_manager.cpp",0xfd,
                     "Condition \"gldisplay_id < 0\" is true. Returning: ERR_CANT_CREATE",0,0);
    return 0x14;
  }
  uVar12 = (ulong)*(uint *)(this + 8);
  uVar11 = (ulong)(int)uVar6;
  if (*(uint *)(this + 8) <= uVar6) goto LAB_0010290a;
  uVar7 = *(uint *)(this + 0x18);
  uVar12 = (ulong)uVar7;
  lVar8 = (long)(int)uVar6 * 0x20 + *(long *)(this + 0x10);
  uVar13 = (uint)param_2;
  if ((int)uVar7 <= (int)uVar13) {
    uVar14 = uVar13 + 1;
    if (uVar7 <= uVar14) {
      if (uVar14 <= uVar7) goto LAB_001027d0;
      if (*(uint *)(this + 0x1c) < uVar14) {
        uVar7 = (uint)((ulong)param_2 >> 1) & 0x7fffffff | uVar13;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
        *(uint *)(this + 0x1c) = uVar7;
        auVar16 = Memory::realloc_static(*(void **)(this + 0x20),(ulong)uVar7 << 4,false);
        *(long *)(this + 0x20) = auVar16._0_8_;
        if (auVar16._0_8_ == 0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0,auVar16._8_8_);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar12 = (ulong)*(uint *)(this + 0x18);
        if (uVar14 <= *(uint *)(this + 0x18)) goto LAB_001028fb;
      }
      lVar3 = *(long *)(this + 0x20);
      puVar15 = (undefined1 *)(uVar12 * 0x10 + lVar3);
      do {
        *puVar15 = 0;
        puVar9 = puVar15 + 0x10;
        *(undefined4 *)(puVar15 + 4) = 0xffffffff;
        *(undefined8 *)(puVar15 + 8) = 0;
        puVar15 = puVar9;
      } while (puVar9 != (undefined1 *)(lVar3 + 0x10 + ((uVar13 - (int)uVar12) + uVar12) * 0x10));
    }
LAB_001028fb:
    *(uint *)(this + 0x18) = uVar14;
    uVar12 = (ulong)uVar14;
  }
LAB_001027d0:
  iVar5 = _GLAD_EGL_VERSION_1_5;
  if (uVar13 < (uint)uVar12) {
    uVar1 = *(undefined8 *)(lVar8 + 0x18);
    puVar15 = (undefined1 *)(((ulong)param_2 & 0xffffffff) * 0x10 + *(long *)(this + 0x20));
    uVar2 = *(undefined8 *)(lVar8 + 8);
    *(uint *)(puVar15 + 4) = uVar6;
    if (iVar5 == 0) {
      lVar8 = (*_glad_eglCreateWindowSurface)
                        (uVar2,uVar1,*(undefined8 *)CONCAT44(in_register_0000000c,param_4),0);
    }
    else {
      lVar8 = (*_glad_eglCreatePlatformWindowSurface)
                        (uVar2,uVar1,(undefined8 *)CONCAT44(in_register_0000000c,param_4),0);
    }
    *(long *)(puVar15 + 8) = lVar8;
    if (lVar8 == 0) {
      return 0x14;
    }
    *puVar15 = 1;
    window_make_current(this,uVar13);
    return 0;
  }
  uVar11 = (ulong)param_2 & 0xffffffff;
LAB_0010290a:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar12,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<long>::_copy_on_write(void)

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



/* EGLManager::initialize(void*) [clone .cold] */

void EGLManager::initialize(void *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Removing unreachable block (ram,0x00103288) */
/* WARNING: Removing unreachable block (ram,0x001033b8) */
/* WARNING: Removing unreachable block (ram,0x00103580) */
/* WARNING: Removing unreachable block (ram,0x001033c4) */
/* WARNING: Removing unreachable block (ram,0x001033ce) */
/* WARNING: Removing unreachable block (ram,0x00103560) */
/* WARNING: Removing unreachable block (ram,0x001033da) */
/* WARNING: Removing unreachable block (ram,0x001033e4) */
/* WARNING: Removing unreachable block (ram,0x00103540) */
/* WARNING: Removing unreachable block (ram,0x001033f0) */
/* WARNING: Removing unreachable block (ram,0x001033fa) */
/* WARNING: Removing unreachable block (ram,0x00103520) */
/* WARNING: Removing unreachable block (ram,0x00103406) */
/* WARNING: Removing unreachable block (ram,0x00103410) */
/* WARNING: Removing unreachable block (ram,0x00103500) */
/* WARNING: Removing unreachable block (ram,0x0010341c) */
/* WARNING: Removing unreachable block (ram,0x00103426) */
/* WARNING: Removing unreachable block (ram,0x001034e0) */
/* WARNING: Removing unreachable block (ram,0x00103432) */
/* WARNING: Removing unreachable block (ram,0x0010343c) */
/* WARNING: Removing unreachable block (ram,0x001034c0) */
/* WARNING: Removing unreachable block (ram,0x00103444) */
/* WARNING: Removing unreachable block (ram,0x0010345a) */
/* WARNING: Removing unreachable block (ram,0x00103466) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x00103700) */
/* WARNING: Removing unreachable block (ram,0x00103830) */
/* WARNING: Removing unreachable block (ram,0x001039a9) */
/* WARNING: Removing unreachable block (ram,0x0010383c) */
/* WARNING: Removing unreachable block (ram,0x00103846) */
/* WARNING: Removing unreachable block (ram,0x0010398b) */
/* WARNING: Removing unreachable block (ram,0x00103852) */
/* WARNING: Removing unreachable block (ram,0x0010385c) */
/* WARNING: Removing unreachable block (ram,0x0010396d) */
/* WARNING: Removing unreachable block (ram,0x00103868) */
/* WARNING: Removing unreachable block (ram,0x00103872) */
/* WARNING: Removing unreachable block (ram,0x0010394f) */
/* WARNING: Removing unreachable block (ram,0x0010387e) */
/* WARNING: Removing unreachable block (ram,0x00103888) */
/* WARNING: Removing unreachable block (ram,0x00103931) */
/* WARNING: Removing unreachable block (ram,0x00103894) */
/* WARNING: Removing unreachable block (ram,0x0010389e) */
/* WARNING: Removing unreachable block (ram,0x00103913) */
/* WARNING: Removing unreachable block (ram,0x001038a6) */
/* WARNING: Removing unreachable block (ram,0x001038b0) */
/* WARNING: Removing unreachable block (ram,0x001038f8) */
/* WARNING: Removing unreachable block (ram,0x001038b8) */
/* WARNING: Removing unreachable block (ram,0x001038ce) */
/* WARNING: Removing unreachable block (ram,0x001038da) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
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



/* WARNING: Removing unreachable block (ram,0x00103ae8) */
/* WARNING: Removing unreachable block (ram,0x00103c18) */
/* WARNING: Removing unreachable block (ram,0x00103de0) */
/* WARNING: Removing unreachable block (ram,0x00103c24) */
/* WARNING: Removing unreachable block (ram,0x00103c2e) */
/* WARNING: Removing unreachable block (ram,0x00103dc0) */
/* WARNING: Removing unreachable block (ram,0x00103c3a) */
/* WARNING: Removing unreachable block (ram,0x00103c44) */
/* WARNING: Removing unreachable block (ram,0x00103da0) */
/* WARNING: Removing unreachable block (ram,0x00103c50) */
/* WARNING: Removing unreachable block (ram,0x00103c5a) */
/* WARNING: Removing unreachable block (ram,0x00103d80) */
/* WARNING: Removing unreachable block (ram,0x00103c66) */
/* WARNING: Removing unreachable block (ram,0x00103c70) */
/* WARNING: Removing unreachable block (ram,0x00103d60) */
/* WARNING: Removing unreachable block (ram,0x00103c7c) */
/* WARNING: Removing unreachable block (ram,0x00103c86) */
/* WARNING: Removing unreachable block (ram,0x00103d40) */
/* WARNING: Removing unreachable block (ram,0x00103c92) */
/* WARNING: Removing unreachable block (ram,0x00103c9c) */
/* WARNING: Removing unreachable block (ram,0x00103d20) */
/* WARNING: Removing unreachable block (ram,0x00103ca4) */
/* WARNING: Removing unreachable block (ram,0x00103cba) */
/* WARNING: Removing unreachable block (ram,0x00103cc6) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
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
LAB_00104140:
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
  if (lVar8 == 0) goto LAB_00104140;
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
        goto LAB_00104051;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00104051:
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



/* EGLManager::_get_gldisplay_id(void*) */

void EGLManager::_GLOBAL__sub_I__get_gldisplay_id(void)

{
  shader_cache_dir = 0;
  __cxa_atexit(String::~String,&shader_cache_dir,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


