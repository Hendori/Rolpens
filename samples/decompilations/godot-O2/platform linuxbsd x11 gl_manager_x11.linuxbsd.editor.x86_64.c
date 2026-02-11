
/* ctxErrorHandler(_XDisplay*, XErrorEvent*) */

undefined8 ctxErrorHandler(_XDisplay *param_1,XErrorEvent *param_2)

{
  ctxErrorOccurred = 1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::GLDisplay::~GLDisplay() */

void __thiscall GLManager_X11::GLDisplay::~GLDisplay(GLDisplay *this)

{
  if (*(long *)this != 0) {
    (*_glad_glXDestroyContext)(*(undefined8 *)(this + 8));
    Memory::free_static(*(void **)this,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::_create_context(GLManager_X11::GLDisplay&) */

undefined8 __thiscall GLManager_X11::_create_context(GLManager_X11 *this,GLDisplay *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (code *)(*_glad_glXGetProcAddress)("glXCreateContextAttribsARB");
  if (pcVar3 == (code *)0x0) {
    _err_print_error("_create_context","platform/linuxbsd/x11/gl_manager_x11.cpp",0x6a,
                     "Parameter \"glXCreateContextAttribsARB\" is null.",0,0);
  }
  else {
    lVar4 = OS::get_singleton();
    if (*(char *)(lVar4 + 0x3d) == '\0') {
      plVar5 = (long *)(*_glad_glXChooseFBConfig)
                                 (lVar1,*(undefined4 *)(lVar1 + 0xe0),
                                  _create_context(GLManager_X11::GLDisplay&)::visual_attribs);
      if (plVar5 != (long *)0x0) {
        puVar6 = (undefined8 *)(*_glad_glXGetVisualFromFBConfig)(lVar1,*plVar5);
        lVar10 = *plVar5;
        (*_XFree_dylibloader_wrapper_xlib)(plVar5);
LAB_001000ea:
        uVar7 = (*_XSetErrorHandler_dylibloader_wrapper_xlib)(0x100000);
        if (*(int *)(this + 0x48) == 0) {
          puVar2 = *(undefined8 **)param_1;
          uVar8 = (*pcVar3)(lVar1,lVar10,0,1,
                            _create_context(GLManager_X11::GLDisplay&)::context_attribs);
          bVar12 = ctxErrorOccurred != '\0';
          *puVar2 = uVar8;
          if ((bVar12) || (**(long **)param_1 == 0)) {
            _err_print_error("_create_context","platform/linuxbsd/x11/gl_manager_x11.cpp",0xb7,
                             "Condition \"ctxErrorOccurred || !gl_display.context->glx_context\" is true. Returning: ERR_UNCONFIGURED"
                             ,0,0);
            goto LAB_001002c5;
          }
        }
        (*_XSync_dylibloader_wrapper_xlib)(lVar1,0);
        (*_XSetErrorHandler_dylibloader_wrapper_xlib)(uVar7);
        if (puVar6 != (undefined8 *)0x0) {
          uVar7 = puVar6[1];
          *(undefined8 *)(param_1 + 0x10) = *puVar6;
          *(undefined8 *)(param_1 + 0x18) = uVar7;
          uVar7 = puVar6[3];
          *(undefined8 *)(param_1 + 0x20) = puVar6[2];
          *(undefined8 *)(param_1 + 0x28) = uVar7;
          uVar7 = puVar6[5];
          *(undefined8 *)(param_1 + 0x30) = puVar6[4];
          *(undefined8 *)(param_1 + 0x38) = uVar7;
          uVar7 = puVar6[7];
          *(undefined8 *)(param_1 + 0x40) = puVar6[6];
          *(undefined8 *)(param_1 + 0x48) = uVar7;
        }
        (*_XFree_dylibloader_wrapper_xlib)(puVar6);
        uVar7 = 0;
        goto LAB_00100195;
      }
      _err_print_error("_create_context","platform/linuxbsd/x11/gl_manager_x11.cpp",0xa2,
                       "Parameter \"fbc\" is null.",0,0);
    }
    else {
      lVar4 = (*_glad_glXChooseFBConfig)
                        (lVar1,*(undefined4 *)(lVar1 + 0xe0),
                         _create_context(GLManager_X11::GLDisplay&)::visual_attribs_layered,
                         &local_44);
      if (lVar4 == 0) {
        _err_print_error("_create_context","platform/linuxbsd/x11/gl_manager_x11.cpp",0x89,
                         "Parameter \"fbc\" is null.",0,0);
      }
      else {
        lVar11 = 0;
        lVar10 = 0;
        if (local_44 < 1) {
          (*_XFree_dylibloader_wrapper_xlib)(lVar4);
        }
        else {
LAB_0010021c:
          do {
            puVar6 = (undefined8 *)
                     (*_glad_glXGetVisualFromFBConfig)(lVar1,*(undefined8 *)(lVar4 + lVar11 * 8));
            if (puVar6 != (undefined8 *)0x0) {
              lVar9 = (*_XRenderFindVisualFormat_dylibloader_wrapper_xrender)(lVar1,*puVar6);
              if (lVar9 != 0) {
                lVar10 = *(long *)(lVar4 + lVar11 * 8);
                if ((0 < *(short *)(lVar9 + 0x1e)) || (lVar11 = lVar11 + 1, local_44 <= (int)lVar11)
                   ) break;
                goto LAB_0010021c;
              }
              (*_XFree_dylibloader_wrapper_xlib)(puVar6);
            }
            puVar6 = (undefined8 *)0x0;
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < local_44);
          (*_XFree_dylibloader_wrapper_xlib)(lVar4);
          if (lVar10 != 0) goto LAB_001000ea;
        }
        _err_print_error("_create_context","platform/linuxbsd/x11/gl_manager_x11.cpp",0x9f,
                         "Parameter \"fbconfig\" is null.",0,0);
      }
    }
  }
LAB_001002c5:
  uVar7 = 3;
LAB_00100195:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::_find_or_create_display(_XDisplay*) */

uint __thiscall GLManager_X11::_find_or_create_display(GLManager_X11 *this,_XDisplay *param_1)

{
  GLDisplay *pGVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  
  uVar12 = *(uint *)(this + 0x20);
  pvVar8 = *(void **)(this + 0x28);
  if (uVar12 != 0) {
    plVar10 = (long *)((long)pvVar8 + 8);
    uVar5 = 0;
    do {
      if ((_XDisplay *)*plVar10 == param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      plVar10 = plVar10 + 10;
    } while (uVar5 != uVar12);
  }
  if (*(uint *)(this + 0x24) == uVar12) {
    uVar13 = (ulong)(uVar12 * 2);
    if (uVar12 * 2 == 0) {
      uVar13 = 1;
    }
    *(int *)(this + 0x24) = (int)uVar13;
    pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar13 * 0x50,false);
    *(void **)(this + 0x28) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar12 = *(uint *)(this + 0x20);
  }
  uVar13 = (ulong)uVar12;
  uVar5 = uVar12 + 1;
  *(uint *)(this + 0x20) = uVar5;
  pGVar1 = (GLDisplay *)((long)pvVar8 + uVar13 * 0x50);
  *(undefined8 *)pGVar1 = 0;
  *(_XDisplay **)(pGVar1 + 8) = param_1;
  *(undefined8 *)(pGVar1 + 0x10) = 0;
  *(undefined8 *)(pGVar1 + 0x18) = 0;
  *(undefined8 *)(pGVar1 + 0x20) = 0;
  *(undefined4 *)(pGVar1 + 0x28) = 0;
  *(undefined8 *)(pGVar1 + 0x40) = 0;
  *(undefined8 *)(pGVar1 + 0x48) = 0;
  *(undefined1 (*) [16])(pGVar1 + 0x30) = (undefined1  [16])0x0;
  if (uVar5 <= uVar12) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,0xffffffff,0,"p_index","count",""
               ,false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar7 = (undefined8 *)operator_new(8,"");
  *(undefined8 **)pGVar1 = puVar7;
  *puVar7 = 0;
  iVar6 = _create_context(this,pGVar1);
  uVar11 = (ulong)uVar5;
  if (iVar6 != 0) {
    uVar5 = *(uint *)(this + 0x20);
    if (uVar12 < uVar5) {
      uVar14 = uVar5 - 1;
      lVar2 = *(long *)(this + 0x28);
      *(uint *)(this + 0x20) = uVar14;
      if (uVar12 < uVar14) {
        puVar7 = (undefined8 *)(lVar2 + uVar11 * 0x50);
        do {
          uVar4 = puVar7[1];
          puVar9 = puVar7 + 10;
          puVar7[uVar11 * -10 + uVar13 * 10] = *puVar7;
          (puVar7 + uVar11 * -10 + uVar13 * 10)[1] = uVar4;
          uVar4 = puVar7[3];
          puVar7[uVar11 * -10 + uVar13 * 10 + 2] = puVar7[2];
          (puVar7 + uVar11 * -10 + uVar13 * 10 + 2)[1] = uVar4;
          uVar4 = puVar7[5];
          puVar7[uVar11 * -10 + uVar13 * 10 + 4] = puVar7[4];
          (puVar7 + uVar11 * -10 + uVar13 * 10 + 4)[1] = uVar4;
          uVar4 = puVar7[7];
          puVar7[uVar11 * -10 + uVar13 * 10 + 6] = puVar7[6];
          (puVar7 + uVar11 * -10 + uVar13 * 10 + 6)[1] = uVar4;
          uVar4 = puVar7[9];
          puVar7[uVar11 * -10 + uVar13 * 10 + 8] = puVar7[8];
          (puVar7 + uVar11 * -10 + uVar13 * 10 + 8)[1] = uVar4;
          puVar7 = puVar9;
        } while (puVar9 != (undefined8 *)(lVar2 + 0x50 + (uVar11 + ((uVar5 - 2) - uVar12)) * 0x50));
      }
      plVar10 = (long *)(lVar2 + (ulong)uVar14 * 0x50);
      if (*plVar10 != 0) {
        (*_glad_glXDestroyContext)(plVar10[1]);
        Memory::free_static((void *)*plVar10,false);
      }
    }
    else {
      _err_print_index_error
                ("remove_at","./core/templates/local_vector.h",0x4c,uVar13,(ulong)uVar5,"p_index",
                 "count","",false,false);
    }
    return 0xffffffff;
  }
  return uVar12;
}



/* GLManager_X11::get_vi(_XDisplay*, Error&) */

_XDisplay * GLManager_X11::get_vi(_XDisplay *param_1,Error *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined4 *in_RCX;
  _XDisplay *in_RDX;
  
  uVar10 = _find_or_create_display((GLManager_X11 *)param_2,in_RDX);
  if ((int)uVar10 < 0) {
    *in_RCX = 1;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  *in_RCX = 0;
  if (uVar10 < uVar1) {
    lVar11 = (long)(int)uVar10 * 0x50 + *(long *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(lVar11 + 0x18);
    uVar4 = *(undefined8 *)(lVar11 + 0x20);
    uVar5 = *(undefined8 *)(lVar11 + 0x28);
    uVar6 = *(undefined8 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x38);
    uVar8 = *(undefined8 *)(lVar11 + 0x40);
    uVar9 = *(undefined8 *)(lVar11 + 0x48);
    *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    return param_1;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)uVar10,(ulong)uVar1,
             "p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GLManager_X11::open_display(_XDisplay*) */

uint __thiscall GLManager_X11::open_display(GLManager_X11 *this,_XDisplay *param_1)

{
  int iVar1;
  
  iVar1 = _find_or_create_display(this,param_1);
  return iVar1 >> 0x1f & 0x14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::window_create(int, unsigned long, _XDisplay*, int, int) */

undefined8 __thiscall
GLManager_X11::window_create
          (GLManager_X11 *this,int param_1,ulong param_2,_XDisplay *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  uVar5 = *(uint *)(this + 0x10);
  if ((int)uVar5 <= param_1) {
    uVar3 = param_1 + 1;
    if (uVar5 <= uVar3) {
      if (uVar3 <= uVar5) goto LAB_00100757;
      if (*(uint *)(this + 0x14) < uVar3) {
        uVar5 = (uint)param_1 >> 1 | param_1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        *(uint *)(this + 0x14) = uVar5;
        lVar8 = Memory::realloc_static(*(void **)(this + 0x18),(ulong)uVar5 << 5,false);
        *(long *)(this + 0x18) = lVar8;
        if (lVar8 == 0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = *(uint *)(this + 0x10);
        if (uVar3 <= uVar5) goto LAB_0010089e;
      }
      uVar1 = _LC17;
      lVar8 = *(long *)(this + 0x18);
      puVar10 = (undefined1 *)((ulong)uVar5 * 0x20 + lVar8);
      do {
        *puVar10 = 0;
        puVar7 = puVar10 + 0x20;
        *(undefined8 *)(puVar10 + 4) = uVar1;
        *(undefined4 *)(puVar10 + 0xc) = 0;
        *(undefined4 *)(puVar10 + 0x18) = 0;
        puVar10 = puVar7;
      } while (puVar7 != (undefined1 *)
                         (lVar8 + 0x20 + ((ulong)(param_1 - uVar5) + (ulong)uVar5) * 0x20));
    }
LAB_0010089e:
    *(uint *)(this + 0x10) = uVar3;
    uVar5 = uVar3;
  }
LAB_00100757:
  if ((uint)param_1 < uVar5) {
    puVar10 = (undefined1 *)((ulong)(uint)param_1 * 0x20 + *(long *)(this + 0x18));
    *puVar10 = 1;
    *(int *)(puVar10 + 4) = param_1;
    *(int *)(puVar10 + 8) = param_4;
    *(int *)(puVar10 + 0xc) = param_5;
    *(ulong *)(puVar10 + 0x10) = param_2;
    uVar3 = _find_or_create_display(this,param_3);
    *(uint *)(puVar10 + 0x18) = uVar3;
    if (uVar3 == 0xffffffff) {
      return 1;
    }
    uVar5 = *(uint *)(this + 0x20);
    if (uVar3 < uVar5) {
      puVar6 = (undefined8 *)((ulong)uVar3 * 0x50 + *(long *)(this + 0x28));
      iVar4 = (*_glad_glXMakeCurrent)
                        (puVar6[1],*(undefined8 *)(puVar10 + 0x10),*(undefined8 *)*puVar6);
      if (iVar4 == 0) {
        _err_print_error("window_create","platform/linuxbsd/x11/gl_manager_x11.cpp",0xf6,
                         "glXMakeCurrent failed",0,0);
      }
      uVar1 = *(undefined8 *)(puVar10 + 0x10);
      uVar3 = *(uint *)(puVar10 + 0x18);
      uVar9 = (ulong)uVar3;
      *(undefined1 **)(this + 0x30) = puVar10;
      uVar5 = *(uint *)(this + 0x20);
      *(undefined8 *)this = uVar1;
      if (uVar3 < uVar5) {
        *(undefined8 *)(this + 8) = *(undefined8 *)(uVar9 * 0x50 + *(long *)(this + 0x28) + 8);
        return 0;
      }
      iVar4 = 0xae;
      goto LAB_001008ee;
    }
    uVar9 = (ulong)uVar3;
  }
  else {
    uVar9 = (ulong)(uint)param_1;
  }
  iVar4 = 0xb2;
LAB_001008ee:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar4,uVar9,(ulong)uVar5,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GLManager_X11::_internal_set_current_window(GLManager_X11::GLWindow*) */

void __thiscall GLManager_X11::_internal_set_current_window(GLManager_X11 *this,GLWindow *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  *(GLWindow **)(this + 0x30) = param_1;
  *(undefined8 *)this = uVar2;
  if (uVar1 < *(uint *)(this + 0x20)) {
    *(undefined8 *)(this + 8) = *(undefined8 *)((ulong)uVar1 * 0x50 + *(long *)(this + 0x28) + 8);
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
             (ulong)*(uint *)(this + 0x20),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GLManager_X11::window_resize(int, int, int) */

void __thiscall
GLManager_X11::window_resize(GLManager_X11 *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  
  if ((uint)param_1 < *(uint *)(this + 0x10)) {
    lVar2 = (ulong)(uint)param_1 * 0x20 + *(long *)(this + 0x18);
    *(int *)(lVar2 + 8) = param_2;
    *(int *)(lVar2 + 0xc) = param_3;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
             (ulong)*(uint *)(this + 0x10),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GLManager_X11::window_destroy(int) */

void __thiscall GLManager_X11::window_destroy(GLManager_X11 *this,int param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  
  if (*(uint *)(this + 0x10) <= (uint)param_1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
               (ulong)*(uint *)(this + 0x10),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar2 = (undefined1 *)((ulong)(uint)param_1 * 0x20 + *(long *)(this + 0x18));
  *puVar2 = 0;
  if (*(undefined1 **)(this + 0x30) != puVar2) {
    return;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0xffffffffffffffff;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::release_current() */

void __thiscall GLManager_X11::release_current(GLManager_X11 *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x30) == 0) {
    return;
  }
  iVar1 = (*_glad_glXMakeCurrent)(*(undefined8 *)(this + 8),0,0);
  if (iVar1 != 0) {
    *(undefined8 *)(this + 0x30) = 0;
    return;
  }
  _err_print_error("release_current","platform/linuxbsd/x11/gl_manager_x11.cpp",0x11d,
                   "glXMakeCurrent failed",0,0);
  *(undefined8 *)(this + 0x30) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::window_make_current(int) */

void __thiscall GLManager_X11::window_make_current(GLManager_X11 *this,int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  if (param_1 == -1) {
    return;
  }
  if (*(uint *)(this + 0x10) <= (uint)param_1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
               (ulong)*(uint *)(this + 0x10),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pcVar6 = (char *)((ulong)(uint)param_1 * 0x20 + *(long *)(this + 0x18));
  if ((*pcVar6 != '\0') && (*(char **)(this + 0x30) != pcVar6)) {
    uVar1 = *(uint *)(pcVar6 + 0x18);
    if (*(uint *)(this + 0x20) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x20),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar5 = (undefined8 *)((ulong)uVar1 * 0x50 + *(long *)(this + 0x28));
    iVar4 = (*_glad_glXMakeCurrent)(puVar5[1],*(undefined8 *)(pcVar6 + 0x10),*(undefined8 *)*puVar5)
    ;
    if (iVar4 == 0) {
      _err_print_error("window_make_current","platform/linuxbsd/x11/gl_manager_x11.cpp",0x134,
                       "glXMakeCurrent failed",0,0);
    }
    uVar2 = *(undefined8 *)(pcVar6 + 0x10);
    uVar1 = *(uint *)(pcVar6 + 0x18);
    *(char **)(this + 0x30) = pcVar6;
    *(undefined8 *)this = uVar2;
    if (*(uint *)(this + 0x20) <= uVar1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                 (ulong)*(uint *)(this + 0x20),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(undefined8 *)(this + 8) = *(undefined8 *)((ulong)uVar1 * 0x50 + *(long *)(this + 0x28) + 8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::swap_buffers() */

void __thiscall GLManager_X11::swap_buffers(GLManager_X11 *this)

{
  char cVar1;
  long lVar2;
  
  if (*(char **)(this + 0x30) == (char *)0x0) {
    return;
  }
  if (**(char **)(this + 0x30) != '\0') {
    lVar2 = OS::get_singleton();
    if (*(char *)(lVar2 + 0x3d) != '\0') {
      cVar1 = (**(code **)(*DisplayServer::singleton + 0x5c8))
                        (DisplayServer::singleton,3,*(undefined4 *)(*(long *)(this + 0x30) + 4));
      if (cVar1 == '\0') {
        (*_glad_glColorMask)(0,0,0,1);
        (*_glad_glClearColor)(0,0,0,_LC24);
        (*_glad_glClear)(0x4000);
        (*_glad_glColorMask)(1,1,1,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100e1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_glad_glXSwapBuffers)(*(undefined8 *)(this + 8),*(undefined8 *)this);
    return;
  }
  _err_print_error("swap_buffers","platform/linuxbsd/x11/gl_manager_x11.cpp",0x13f,
                   "current window not in use!",0,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::initialize(_XDisplay*) */

byte __thiscall GLManager_X11::initialize(GLManager_X11 *this,_XDisplay *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  pcVar1 = _XScreenNumberOfScreen_dylibloader_wrapper_xlib;
  uVar4 = (*_XDefaultScreenOfDisplay_dylibloader_wrapper_xlib)(param_1);
  uVar2 = (*pcVar1)(uVar4);
  iVar3 = gladLoaderLoadGLX(param_1,uVar2);
  return -(iVar3 == 0) & 0x14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::set_use_vsync(bool) */

void __thiscall GLManager_X11::set_use_vsync(GLManager_X11 *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(long *)(this + 0x30) == 0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(this + 0x30) + 0x18);
  if (uVar1 < *(uint *)(this + 0x20)) {
    lVar2 = *(long *)(this + 0x28);
    if (_GLAD_GLX_MESA_swap_control == 0) {
      if (_GLAD_GLX_SGI_swap_control == 0) {
        if (_GLAD_GLX_EXT_swap_control == 0) {
          if (set_use_vsync(bool)::first_print == '\0') {
            return;
          }
          _err_print_error("set_use_vsync","platform/linuxbsd/x11/gl_manager_x11.cpp",0x168,
                           "Could not set V-Sync mode, as changing V-Sync mode is not supported by the graphics driver."
                           ,0,1);
          set_use_vsync(bool)::first_print = 0;
          return;
        }
        uVar4 = (*_glad_glXGetCurrentDrawable)();
        (*_glad_glXSwapIntervalEXT)(*(undefined8 *)(lVar2 + 8 + (ulong)uVar1 * 0x50),uVar4,param_1);
      }
      else {
        (*_glad_glXSwapIntervalSGI)(param_1);
      }
    }
    else {
      (*_glad_glXSwapIntervalMESA)(param_1);
    }
    this[0x44] = (GLManager_X11)param_1;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
             (ulong)*(uint *)(this + 0x20),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GLManager_X11::is_using_vsync() const */

GLManager_X11 __thiscall GLManager_X11::is_using_vsync(GLManager_X11 *this)

{
  return this[0x44];
}



/* GLManager_X11::get_glx_context(int) */

undefined8 __thiscall GLManager_X11::get_glx_context(GLManager_X11 *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  if (param_1 == -1) {
    return 0;
  }
  if ((uint)param_1 < *(uint *)(this + 0x10)) {
    uVar1 = *(uint *)((ulong)(uint)param_1 * 0x20 + *(long *)(this + 0x18) + 0x18);
    if (uVar1 < *(uint *)(this + 0x20)) {
      return **(undefined8 **)((ulong)uVar1 * 0x50 + *(long *)(this + 0x28));
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
               (ulong)*(uint *)(this + 0x20),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)(uint)param_1,
             (ulong)*(uint *)(this + 0x10),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GLManager_X11::GLManager_X11(Vector2i const&, GLManager_X11::ContextType) */

void __thiscall
GLManager_X11::GLManager_X11(GLManager_X11 *this,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x48) = param_3;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  this[0x44] = (GLManager_X11)0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLManager_X11::~GLManager_X11() */

void __thiscall GLManager_X11::~GLManager_X11(GLManager_X11 *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  release_current(this);
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 == (void *)0x0) {
LAB_0010117c:
    pvVar2 = *(void **)(this + 0x18);
  }
  else {
    if (*(int *)(this + 0x20) != 0) {
      lVar3 = 0;
      do {
        plVar1 = (long *)(lVar3 * 0x50 + (long)pvVar2);
        if (*plVar1 != 0) {
          (*_glad_glXDestroyContext)(plVar1[1]);
          Memory::free_static((void *)*plVar1,false);
          pvVar2 = *(void **)(this + 0x28);
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(this + 0x20));
      *(undefined4 *)(this + 0x20) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_0010117c;
    }
    Memory::free_static(pvVar2,false);
    pvVar2 = *(void **)(this + 0x18);
  }
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    Memory::free_static(pvVar2,false);
    return;
  }
  return;
}


