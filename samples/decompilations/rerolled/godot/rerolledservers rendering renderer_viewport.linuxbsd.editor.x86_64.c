/* RendererViewport::viewport_get_render_info(RID, RenderingServer::ViewportRenderInfoType,
   RenderingServer::ViewportRenderInfo) */

undefined4 __thiscall
RendererViewport::viewport_get_render_info
          (RendererViewport *this,ulong param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_3 < 3) {
    if (param_4 < 3) {
      if ((param_2 == 0) || (*(uint *)(this + 0x5c) <= (uint)param_2)) {
        return 0;
      }
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        return *(undefined4 *)(lVar2 + ((long)(int)param_4 + 0xb0 + (long)(int)param_3 * 3) * 4);
      }
      if (0x7ffffffe < iVar1 + 0x80000000U) {
        return 0;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      return 0;
    }
    _err_print_index_error
              ("viewport_get_render_info","servers/rendering/renderer_viewport.cpp",0x5b8,
               (ulong)param_4,3,"p_info","RenderingServer::VIEWPORT_RENDER_INFO_MAX","",false,false)
    ;
  }
  else {
    _err_print_index_error
              ("viewport_get_render_info","servers/rendering/renderer_viewport.cpp",0x5b7,
               (ulong)param_3,3,"p_type","RenderingServer::VIEWPORT_RENDER_INFO_TYPE_MAX","",false,
               false);
  }
  return 0xffffffff;
}



/* RendererViewport::viewport_find_from_screen_attachment(int) const */

ulong __thiscall
RendererViewport::viewport_find_from_screen_attachment(RendererViewport *this,int param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  undefined1 *puVar14;
  undefined4 in_register_00000034;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auStack_58 [8];
  pthread_mutex_t *local_50;
  long local_40;
  undefined1 *puVar15;
  
  puVar16 = (ulong *)CONCAT44(in_register_00000034,param_1);
  puVar14 = auStack_58;
  uVar9 = *(uint *)(this + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (ulong)uVar9 * 8 + 0x17;
  puVar15 = auStack_58;
  puVar7 = auStack_58;
  while (puVar15 != auStack_58 + -(uVar10 & 0xfffffffffffff000)) {
    puVar14 = puVar7 + -0x1000;
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    puVar15 = puVar7 + -0x1000;
    puVar7 = puVar7 + -0x1000;
  }
  uVar10 = (ulong)((uint)uVar10 & 0xff0);
  lVar6 = -uVar10;
  if (uVar10 != 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  local_50 = (pthread_mutex_t *)(this + 0x70);
  puVar13 = (ulong *)((ulong)(puVar14 + lVar6 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar14 + lVar6 + -8) = 0x1001f6;
  uVar8 = pthread_mutex_lock(local_50);
  if (uVar8 != 0) {
    puVar18 = (ulong *)(ulong)uVar8;
    *(undefined8 *)(puVar14 + lVar6 + -8) = 0x10030f;
    std::__throw_system_error(uVar8);
    *(undefined1 **)(puVar14 + lVar6 + -8) = &stack0xfffffffffffffff8;
    *(ulong **)(puVar14 + lVar6 + -0x10) = puVar13;
    if (*puVar18 != 0) {
      LOCK();
      plVar1 = (long *)(*puVar18 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uVar10 = *puVar18;
        *puVar18 = 0;
        *(undefined8 *)(puVar14 + lVar6 + -0x20) = 0x100385;
        Memory::free_static((void *)(uVar10 - 0x10),false);
      }
      else {
        *puVar18 = 0;
      }
    }
    uVar10 = *puVar16;
    puVar13 = (ulong *)(uVar10 - 0x10);
    if (uVar10 != 0) {
      do {
        uVar11 = *puVar13;
        if (uVar11 == 0) {
          return 0;
        }
        LOCK();
        uVar10 = *puVar13;
        bVar19 = uVar11 == uVar10;
        if (bVar19) {
          *puVar13 = uVar11 + 1;
          uVar10 = uVar11;
        }
        UNLOCK();
      } while (!bVar19);
      if (uVar10 != 0xffffffffffffffff) {
        uVar10 = *puVar16;
        *puVar18 = uVar10;
      }
    }
    return uVar10;
  }
  uVar8 = *(uint *)(this + 0x5c);
  if (uVar8 != 0) {
    lVar12 = *(long *)(this + 0x48);
    uVar2 = *(uint *)(this + 0x58);
    uVar11 = 0;
    uVar10 = 0;
    do {
      uVar3 = *(uint *)((uVar11 % (ulong)uVar2) * 0x2f0 + *(long *)(lVar12 + (uVar11 / uVar2) * 8) +
                       0x2e8);
      uVar17 = uVar10;
      if (uVar3 != 0xffffffff) {
        uVar17 = (ulong)((int)uVar10 + 1);
        puVar13[uVar10] = (ulong)uVar3 << 0x20 | uVar11;
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar17;
    } while (uVar8 != uVar11);
  }
  *(undefined8 *)(puVar14 + lVar6 + -8) = 0x10025f;
  pthread_mutex_unlock(local_50);
  if (uVar9 != 0) {
    puVar16 = puVar13 + uVar9;
    do {
      if (*puVar13 == 0) {
LAB_0010dfc0:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar10 = *puVar13;
      if (*(uint *)(this + 0x5c) <= (uint)uVar10) goto LAB_0010dfc0;
      lVar12 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar4 = *(int *)(lVar12 + 0x2e8);
      if (iVar4 != (int)(uVar10 >> 0x20)) {
        uVar9 = iVar4 + 0x80000000;
        if (uVar9 < 0x7fffffff) {
          *(ulong *)(puVar14 + lVar6 + -8) = (ulong)uVar9;
          *(undefined8 *)(puVar14 + lVar6 + -0x10) = 0;
          *(undefined8 *)(puVar14 + lVar6 + -0x18) = 0x10dff5;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0);
        }
        goto LAB_0010dfc0;
      }
      if (*(int *)(lVar12 + 0x1fc) == param_1) goto LAB_001002ce;
      puVar13 = puVar13 + 1;
    } while (puVar16 != puVar13);
  }
  uVar10 = 0;
LAB_001002ce:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar14 + lVar6 + -8) = 0x100308;
    __stack_chk_fail();
  }
  return uVar10;
}



/* CowData<BlitToScreen>::_ref(CowData<BlitToScreen> const&) [clone .part.0] */

void __thiscall CowData<BlitToScreen>::_ref(CowData<BlitToScreen> *this,CowData *param_1)

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



/* RendererViewport::viewport_set_debug_draw(RID, RenderingServer::ViewportDebugDraw) */

void __thiscall
RendererViewport::viewport_set_debug_draw(RendererViewport *this,ulong param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  if ((param_2 == 0) || (*(uint *)(this + 0x5c) <= (uint)param_2)) {
LAB_00100474:
    _err_print_error("viewport_set_debug_draw","servers/rendering/renderer_viewport.cpp",0x5c4,
                     "Parameter \"viewport\" is null.",0,0);
    return;
  }
  lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
          *(long *)(*(long *)(this + 0x48) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
  if (*(int *)(lVar5 + 0x2e8) != (int)(param_2 >> 0x20)) {
    if (*(int *)(lVar5 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00100474;
  }
  if (*(char *)(lVar5 + 0x7c) != '\0') {
LAB_00100440:
    *(int *)(lVar5 + 0x260) = param_3;
    return;
  }
  uVar3 = *(uint *)(lVar5 + 0x38);
  if ((uVar3 < 2) || (uVar3 == 3)) {
    iVar4 = *(int *)(lVar5 + 0x260);
    cVar2 = *(char *)(lVar5 + 0x7e);
    *(int *)(lVar5 + 0x260) = param_3;
    if (iVar4 == 0x19) {
      if (param_3 == 0x19) {
        return;
      }
      if (cVar2 != '\0') {
        return;
      }
      iVar4 = *(int *)(this + 200);
      uVar3 = 0xffffffff;
      goto LAB_00100430;
    }
    if (param_3 != 0x19) {
      return;
    }
LAB_001004b8:
    if (cVar2 != '\0') {
      return;
    }
    iVar4 = *(int *)(this + 200);
    uVar3 = 1;
  }
  else {
    if ((uVar3 - 2 & 0xfffffffd) == 0) goto LAB_00100440;
    cVar2 = *(char *)(lVar5 + 0x7e);
    if (*(int *)(lVar5 + 0x260) == 0x19) {
      *(int *)(lVar5 + 0x260) = param_3;
      cVar1 = '\x01';
      if (param_3 == 0x19) {
        return;
      }
    }
    else {
      *(int *)(lVar5 + 0x260) = param_3;
      cVar1 = cVar2;
      if (param_3 == 0x19) goto LAB_001004b8;
    }
    if (cVar2 == cVar1) {
      return;
    }
    iVar4 = *(int *)(this + 200);
    uVar3 = -(uint)(cVar2 == '\0') | 1;
  }
LAB_00100430:
  *(uint *)(this + 200) = uVar3 + iVar4;
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



/* CowData<RendererViewport::Viewport*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererViewport::Viewport*>::_copy_on_write(CowData<RendererViewport::Viewport*> *this)

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



/* RendererViewport::_draw_3d(RendererViewport::Viewport*) */

void __thiscall RendererViewport::_draw_3d(RendererViewport *this,Viewport *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  Object *pOVar11;
  long in_FS_OFFSET;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  Object *local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  plVar1 = RenderingServerGlobals::utilities;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_50 = 0;
    local_48 = (Object *)0x10c25b;
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_50);
    (*pcVar3)(plVar1);
    lVar8 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  local_58 = (Object *)0x0;
  if ((param_1[0x10] == (Viewport)0x0) || (lVar8 = XRServer::get_singleton(), lVar8 == 0))
  goto LAB_0010084a;
  XRServer::get_singleton();
  XRServer::get_primary_interface();
  pOVar4 = local_58;
  pOVar11 = local_58;
  if (local_48 != local_58) {
    local_58 = local_48;
    if (local_48 == (Object *)0x0) {
      if (pOVar4 == (Object *)0x0) goto LAB_0010084a;
    }
    else {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_58 = (Object *)0x0;
      }
      pOVar11 = local_48;
      if (pOVar4 == (Object *)0x0) goto LAB_00100a39;
    }
    cVar5 = RefCounted::unreference();
    pOVar11 = local_48;
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar4), pOVar11 = local_48, cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
      pOVar11 = local_48;
    }
  }
LAB_00100a39:
  if (((pOVar11 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_48, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_0010084a:
  fVar15 = (float)*(int *)(param_1 + 0x1c);
  if ((param_1[0x1f8] != (Viewport)0x0) && (param_1[0x1f9] != (Viewport)0x0)) {
    iVar10 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c);
    iVar9 = *(int *)(WorkerThreadPool::singleton + 0x290) * *(int *)(this + 0xcc);
    fVar14 = fVar15 / (float)*(int *)(param_1 + 0x20);
    iVar6 = iVar10 + 0x3ff;
    if (-1 < iVar10) {
      iVar6 = iVar10;
    }
    iVar7 = iVar6 >> 10;
    if (iVar6 >> 10 <= iVar9) {
      iVar6 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      iVar7 = iVar6 >> 2;
      if (iVar9 < iVar6 >> 2) {
        iVar7 = iVar9;
      }
    }
    fVar12 = (float)iVar7 / fVar14;
    if (fVar12 < 0.0) {
      fVar12 = sqrtf(fVar12);
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    local_38 = CONCAT44((int)fVar12,(int)(fVar14 * fVar12));
    if (*(code **)(*RendererSceneOcclusionCull::singleton + 0x68) ==
        RendererSceneOcclusionCull::buffer_set_size) {
      if (RendererSceneOcclusionCull::_print_warning()::first_print != '\0') {
        _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd
                         ,"Occlusion culling is disabled at build-time.",0,1);
        RendererSceneOcclusionCull::_print_warning()::first_print = '\0';
        fVar15 = (float)*(int *)(param_1 + 0x1c);
      }
    }
    else {
      (**(code **)(*RendererSceneOcclusionCull::singleton + 0x68))
                (RendererSceneOcclusionCull::singleton,*(undefined8 *)param_1,&local_38);
      fVar15 = (float)*(int *)(param_1 + 0x1c);
    }
    param_1[0x1f9] = (Viewport)0x0;
  }
  plVar1 = RenderingServerGlobals::scene;
  fVar14 = *(float *)(param_1 + 0x250);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  pcVar3 = *(code **)(*RenderingServerGlobals::scene + 0x690);
  uVar13 = Vector2i::operator_cast_to_Vector2((Vector2i *)(param_1 + 0x14));
  (*pcVar3)(uVar13,fVar14 / fVar15,plVar1,param_1 + 0x68,*(undefined8 *)(param_1 + 0x28),
            *(undefined8 *)(param_1 + 0x30),*(undefined8 *)param_1,uVar2,
            *(undefined8 *)(param_1 + 0x240),&local_58,param_1 + 0x2c0);
  plVar1 = RenderingServerGlobals::utilities;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_50 = 0;
    local_48 = (Object *)0x10c26d;
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_50);
    (*pcVar3)(plVar1);
    lVar8 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
  if (((local_58 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar4 = local_58, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererViewport::_viewport_requires_motion_vectors(RendererViewport::Viewport*) */

Viewport __thiscall
RendererViewport::_viewport_requires_motion_vectors(RendererViewport *this,Viewport *param_1)

{
  uint uVar1;
  Viewport VVar2;
  
  VVar2 = param_1[0x7c];
  if (((VVar2 == (Viewport)0x0) &&
      (((uVar1 = *(uint *)(param_1 + 0x38), uVar1 < 2 || (uVar1 == 3)) ||
       (VVar2 = (Viewport)0x1, (uVar1 - 2 & 0xfffffffd) != 0)))) &&
     (VVar2 = (Viewport)0x1, *(int *)(param_1 + 0x260) != 0x19)) {
    VVar2 = param_1[0x7e];
  }
  return VVar2;
}



/* RendererViewport::viewport_set_parent_viewport(RID, RID) */

void __thiscall
RendererViewport::viewport_set_parent_viewport
          (RendererViewport *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 8) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_parent_viewport","servers/rendering/renderer_viewport.cpp",0x431,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_clear_mode(RID, RenderingServer::ViewportClearMode) */

void __thiscall
RendererViewport::viewport_set_clear_mode(RendererViewport *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x264) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_clear_mode","servers/rendering/renderer_viewport.cpp",0x438,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_attach_to_screen(RID, Rect2 const&, int) */

void __thiscall
RendererViewport::viewport_attach_to_screen
          (RendererViewport *this,ulong param_2,float *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar3 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (param_4 != -1) {
        if (((char)RendererCompositor::low_end != '\0') && (*(char *)(lVar3 + 0x210) != '\0')) {
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x208))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),
                     (int)param_3[2],
                     CONCAT44((int)((ulong)*(long *)(this + 0x48) >> 0x20),(int)param_3[3]),
                     *(undefined4 *)(lVar3 + 0x24));
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f8))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),
                     (int)*param_3,(int)param_3[1]);
        }
        uVar1 = *(undefined8 *)param_3;
        uVar2 = *(undefined8 *)(param_3 + 2);
        *(int *)(lVar3 + 0x1fc) = param_4;
        *(undefined8 *)(lVar3 + 0x200) = uVar1;
        *(undefined8 *)(lVar3 + 0x208) = uVar2;
        return;
      }
      if (((char)RendererCompositor::low_end != '\0') && (*(char *)(lVar3 + 0x210) != '\0')) {
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f8))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),0,0);
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x208))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),
                   *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                   *(undefined4 *)(lVar3 + 0x24));
      }
      *(undefined8 *)(lVar3 + 0x200) = 0;
      *(undefined8 *)(lVar3 + 0x208) = 0;
      *(undefined4 *)(lVar3 + 0x1fc) = 0xffffffff;
      return;
    }
    if (*(int *)(lVar3 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_attach_to_screen","servers/rendering/renderer_viewport.cpp",0x43f,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_render_direct_to_screen(RID, bool) */

void __thiscall
RendererViewport::viewport_set_render_direct_to_screen
          (RendererViewport *this,ulong param_2,char param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    uVar1 = *(ulong *)(this + 0x48);
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(uVar1 + ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar3 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (*(char *)(lVar3 + 0x210) != param_3) {
        if (param_3 == '\0') {
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f8))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),0,0);
          uVar1 = (ulong)*(uint *)(lVar3 + 0x20);
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x208))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),
                     *(undefined4 *)(lVar3 + 0x1c),uVar1,*(undefined4 *)(lVar3 + 0x24));
        }
        uVar2 = (undefined4)(uVar1 >> 0x20);
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x228))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),param_3);
        bVar4 = (char)RendererCompositor::low_end != '\0';
        *(char *)(lVar3 + 0x210) = param_3;
        if (((bVar4) &&
            ((((*(float *)(lVar3 + 0x200) != 0.0 || (*(float *)(lVar3 + 0x204) != 0.0)) ||
              (*(float *)(lVar3 + 0x208) != 0.0)) || (*(float *)(lVar3 + 0x20c) != 0.0)))) &&
           (param_3 != '\0')) {
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x208))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),
                     (int)*(float *)(lVar3 + 0x208),CONCAT44(uVar2,(int)*(float *)(lVar3 + 0x20c)),
                     *(undefined4 *)(lVar3 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x00101170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f8))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58),
                     (int)*(float *)(lVar3 + 0x200),(int)*(float *)(lVar3 + 0x204));
          return;
        }
      }
      return;
    }
    if (*(int *)(lVar3 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_render_direct_to_screen","servers/rendering/renderer_viewport.cpp",
                   0x459,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_update_mode(RID, RenderingServer::ViewportUpdateMode) */

void __thiscall
RendererViewport::viewport_set_update_mode(RendererViewport *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x54) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_update_mode","servers/rendering/renderer_viewport.cpp",0x471,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_get_update_mode(RID) const */

undefined4 __thiscall
RendererViewport::viewport_get_update_mode(RendererViewport *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x54);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_get_update_mode","servers/rendering/renderer_viewport.cpp",0x478,
                   "Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_get_render_target(RID) const */

undefined8 __thiscall
RendererViewport::viewport_get_render_target(RendererViewport *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x58);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_get_render_target","servers/rendering/renderer_viewport.cpp",0x47f,
                   "Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_get_texture(RID) const */

undefined8 __thiscall RendererViewport::viewport_get_texture(RendererViewport *this,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar3 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00101483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*RenderingServerGlobals::texture_storage + 0x328))
                        (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar3 + 0x58));
      return uVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_get_texture","servers/rendering/renderer_viewport.cpp",0x486,
                   "Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_get_occluder_debug_texture(RID) const */

undefined8 __thiscall
RendererViewport::viewport_get_occluder_debug_texture(RendererViewport *this,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar2 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if ((*(char *)(lVar2 + 0x1f8) != '\0') && (*(int *)(lVar2 + 0x260) == 0x18)) {
        if (*(code **)(*RendererSceneOcclusionCull::singleton + 0x78) !=
            RendererSceneOcclusionCull::buffer_get_debug_texture) {
                    /* WARNING: Could not recover jumptable at 0x0010163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*RendererSceneOcclusionCull::singleton + 0x78))();
          return uVar1;
        }
        if (RendererSceneOcclusionCull::_print_warning()::first_print != '\0') {
          _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",
                           0xcd,"Occlusion culling is disabled at build-time.",0,1);
          RendererSceneOcclusionCull::_print_warning()::first_print = '\0';
        }
      }
      return 0;
    }
    if (*(int *)(lVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_get_occluder_debug_texture","servers/rendering/renderer_viewport.cpp",
                   0x48d,"Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_set_prev_camera_data(RID, RendererSceneRender::CameraData const*) */

void __thiscall
RendererViewport::viewport_set_prev_camera_data
          (RendererViewport *this,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar3 + 0x2e8) == (int)(param_2 >> 0x20)) {
      lVar1 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
      if (*(long *)(lVar3 + 0x1f0) != lVar1) {
        puVar4 = (undefined8 *)(lVar3 + 0x80);
        for (lVar2 = 0x2d; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + (ulong)bVar5 * -2 + 1;
          puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
        }
        *(undefined4 *)puVar4 = *(undefined4 *)param_3;
        *(long *)(lVar3 + 0x1f0) = lVar1;
      }
      return;
    }
    if (*(int *)(lVar3 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_prev_camera_data","servers/rendering/renderer_viewport.cpp",0x497,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_get_prev_camera_data(RID) */

long __thiscall
RendererViewport::viewport_get_prev_camera_data(RendererViewport *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return lVar2 + 0x80;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_get_prev_camera_data","servers/rendering/renderer_viewport.cpp",0x4a1,
                   "Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_set_disable_2d(RID, bool) */

void __thiscall
RendererViewport::viewport_set_disable_2d(RendererViewport *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x211) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_disable_2d","servers/rendering/renderer_viewport.cpp",0x4a7,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_environment_mode(RID, RenderingServer::ViewportEnvironmentMode) */

void __thiscall
RendererViewport::viewport_set_environment_mode
          (RendererViewport *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x214) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_environment_mode","servers/rendering/renderer_viewport.cpp",0x4ae,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_is_environment_disabled(RendererViewport::Viewport*) */

undefined4 __thiscall
RendererViewport::viewport_is_environment_disabled(RendererViewport *this,Viewport *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 != (Viewport *)0x0) {
    do {
      iVar1 = *(int *)(param_1 + 0x214);
      if ((*(long *)(param_1 + 8) == 0) || (iVar1 != 2)) {
        return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
      }
      uVar2 = *(ulong *)(param_1 + 8);
      if (*(uint *)(this + 0x5c) <= (uint)uVar2) goto LAB_001019ef;
      param_1 = (Viewport *)
                (((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
                *(long *)(*(long *)(this + 0x48) +
                         ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    } while (*(int *)(param_1 + 0x2e8) == (int)(uVar2 >> 0x20));
    if (*(int *)(param_1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
LAB_001019ef:
  _err_print_error("viewport_is_environment_disabled","servers/rendering/renderer_viewport.cpp",
                   0x4b4,"Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_set_disable_3d(RID, bool) */

void __thiscall
RendererViewport::viewport_set_disable_3d(RendererViewport *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x218) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_disable_3d","servers/rendering/renderer_viewport.cpp",0x4bf,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_attach_camera(RID, RID) */

void __thiscall
RendererViewport::viewport_attach_camera(RendererViewport *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined8 *)(lVar2 + 0x28) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_attach_camera","servers/rendering/renderer_viewport.cpp",0x4c6,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_scenario(RID, RID) */

void __thiscall
RendererViewport::viewport_set_scenario(RendererViewport *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar1 + 0x30) != 0) {
        (**(code **)(*RenderingServerGlobals::scene + 200))
                  (RenderingServerGlobals::scene,*(undefined8 *)(lVar1 + 0x30),param_2);
      }
      *(undefined8 *)(lVar1 + 0x30) = param_3;
      if (*(char *)(lVar1 + 0x1f8) != '\0') {
        if (*(code **)(*RendererSceneOcclusionCull::singleton + 0x60) !=
            RendererSceneOcclusionCull::buffer_set_scenario) {
                    /* WARNING: Could not recover jumptable at 0x00101d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*RendererSceneOcclusionCull::singleton + 0x60))
                    (RendererSceneOcclusionCull::singleton,param_2,param_3);
          return;
        }
        if (RendererSceneOcclusionCull::_print_warning()::first_print != '\0') {
          _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",
                           0xcd,"Occlusion culling is disabled at build-time.",0,1);
          RendererSceneOcclusionCull::_print_warning()::first_print = 0;
          return;
        }
      }
      return;
    }
    if (*(int *)(lVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_scenario","servers/rendering/renderer_viewport.cpp",0x4cd,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_remove_canvas(RID, RID) */

ulong __thiscall
RendererViewport::viewport_remove_canvas(RendererViewport *this,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  ulong uVar51;
  uint uVar52;
  uint *puVar53;
  char *pcVar54;
  int iVar55;
  uint uVar56;
  long lVar57;
  long *plVar58;
  ulong uVar59;
  long lVar60;
  ulong uVar61;
  undefined8 uVar62;
  uint *puVar63;
  ulong uVar64;
  ulong uVar65;
  uint *puVar66;
  long *plVar67;
  ulong uVar68;
  uint uVar69;
  uint *puVar70;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar57 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar57 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if ((param_3 != 0) && ((uint)param_3 < *(uint *)(RenderingServerGlobals::canvas + 0xdc))) {
        plVar58 = (long *)(((param_3 & 0xffffffff) %
                           (ulong)*(uint *)(RenderingServerGlobals::canvas + 0xd8)) * 0xe0 +
                          *(long *)(*(long *)(RenderingServerGlobals::canvas + 200) +
                                   ((param_3 & 0xffffffff) /
                                   (ulong)*(uint *)(RenderingServerGlobals::canvas + 0xd8)) * 8));
        uVar50 = *(uint *)(plVar58 + 0x1b);
        uVar51 = (ulong)uVar50;
        if (uVar50 == (uint)(param_3 >> 0x20)) {
          lVar8 = *(long *)(lVar57 + 0x298);
          if ((lVar8 != 0) && (*(int *)(lVar57 + 700) != 0)) {
            lVar9 = *(long *)(lVar57 + 0x2a0);
            uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar57 + 0x2b8) * 4);
            uVar68 = CONCAT44(0,uVar50);
            lVar60 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar57 + 0x2b8) * 8);
            uVar51 = param_3 * 0x3ffff - 1;
            uVar51 = (uVar51 ^ uVar51 >> 0x1f) * 0x15;
            uVar51 = (uVar51 ^ uVar51 >> 0xb) * 0x41;
            uVar51 = uVar51 >> 0x16 ^ uVar51;
            uVar64 = uVar51 & 0xffffffff;
            if ((int)uVar51 == 0) {
              uVar64 = 1;
            }
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar64 * lVar60;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar68;
            auVar12 = auVar12 * auVar31;
            uVar51 = auVar12._0_8_;
            uVar69 = *(uint *)(lVar9 + auVar12._8_8_ * 4);
            uVar65 = (ulong)auVar12._8_4_;
            if (uVar69 != 0) {
              uVar52 = 0;
              uVar61 = auVar12._8_8_;
              do {
                auVar15._8_8_ = 0;
                auVar15._0_8_ = (ulong)((int)uVar65 + 1) * lVar60;
                auVar34._8_8_ = 0;
                auVar34._0_8_ = uVar68;
                auVar15 = auVar15 * auVar34;
                uVar59 = auVar15._8_8_;
                uVar51 = auVar15._0_8_;
                uVar56 = auVar15._8_4_;
                if (((uint)uVar64 == uVar69) &&
                   (uVar51 = *(ulong *)(lVar8 + uVar61 * 8), param_3 == *(ulong *)(uVar51 + 0x10)))
                {
                  puVar70 = (uint *)(lVar9 + uVar59 * 4);
                  uVar69 = *puVar70;
                  if ((uVar69 != 0) &&
                     (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar69 * lVar60, auVar35._8_8_ = 0,
                     auVar35._0_8_ = uVar68, auVar17._8_8_ = 0,
                     auVar17._0_8_ =
                          (ulong)((uVar56 + uVar50) - SUB164(auVar16 * auVar35,8)) * lVar60,
                     auVar36._8_8_ = 0, auVar36._0_8_ = uVar68, uVar51 = (ulong)uVar56,
                     uVar64 = uVar65, SUB164(auVar17 * auVar36,8) != 0)) {
                    while( true ) {
                      uVar65 = uVar51;
                      puVar63 = (uint *)(lVar9 + uVar64 * 4);
                      *puVar70 = *puVar63;
                      puVar1 = (undefined8 *)(lVar8 + uVar59 * 8);
                      *puVar63 = uVar69;
                      puVar2 = (undefined8 *)(lVar8 + uVar64 * 8);
                      uVar62 = *puVar1;
                      *puVar1 = *puVar2;
                      *puVar2 = uVar62;
                      auVar20._8_8_ = 0;
                      auVar20._0_8_ = (ulong)((int)uVar65 + 1) * lVar60;
                      auVar39._8_8_ = 0;
                      auVar39._0_8_ = uVar68;
                      uVar59 = SUB168(auVar20 * auVar39,8);
                      puVar70 = (uint *)(lVar9 + uVar59 * 4);
                      uVar69 = *puVar70;
                      if ((uVar69 == 0) ||
                         (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar69 * lVar60,
                         auVar37._8_8_ = 0, auVar37._0_8_ = uVar68, auVar19._8_8_ = 0,
                         auVar19._0_8_ =
                              (ulong)((SUB164(auVar20 * auVar39,8) + uVar50) -
                                     SUB164(auVar18 * auVar37,8)) * lVar60, auVar38._8_8_ = 0,
                         auVar38._0_8_ = uVar68, SUB164(auVar19 * auVar38,8) == 0)) break;
                      uVar51 = uVar59 & 0xffffffff;
                      uVar64 = uVar65;
                    }
                  }
                  plVar3 = (long *)(lVar8 + uVar65 * 8);
                  *(undefined4 *)(lVar9 + uVar65 * 4) = 0;
                  plVar67 = (long *)*plVar3;
                  if (*(long **)(lVar57 + 0x2a8) == plVar67) {
                    *(long *)(lVar57 + 0x2a8) = *plVar67;
                    plVar67 = (long *)*plVar3;
                    if (*(long **)(lVar57 + 0x2b0) == plVar67) goto LAB_001022d2;
                  }
                  else if (*(long **)(lVar57 + 0x2b0) == plVar67) {
LAB_001022d2:
                    *(long *)(lVar57 + 0x2b0) = plVar67[1];
                    plVar67 = (long *)*plVar3;
                  }
                  if ((long *)plVar67[1] != (long *)0x0) {
                    *(long *)plVar67[1] = *plVar67;
                    plVar67 = (long *)*plVar3;
                  }
                  if (*plVar67 != 0) {
                    *(long *)(*plVar67 + 8) = plVar67[1];
                    plVar67 = (long *)*plVar3;
                  }
                  Memory::free_static(plVar67,false);
                  uVar51 = *(ulong *)(lVar57 + 0x298);
                  *(undefined8 *)(uVar51 + uVar65 * 8) = 0;
                  *(int *)(lVar57 + 700) = *(int *)(lVar57 + 700) + -1;
                  break;
                }
                uVar69 = *(uint *)(lVar9 + uVar59 * 4);
                uVar65 = uVar59 & 0xffffffff;
                uVar52 = uVar52 + 1;
              } while ((uVar69 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar69 * lVar60, auVar32._8_8_ = 0,
                      auVar32._0_8_ = uVar68, auVar14._8_8_ = 0,
                      auVar14._0_8_ =
                           (ulong)((uVar50 + uVar56) - SUB164(auVar13 * auVar32,8)) * lVar60,
                      auVar33._8_8_ = 0, auVar33._0_8_ = uVar68,
                      uVar51 = SUB168(auVar14 * auVar33,0), uVar61 = uVar59,
                      uVar52 <= SUB164(auVar14 * auVar33,8)));
            }
          }
          lVar57 = *plVar58;
          if ((lVar57 != 0) &&
             (uVar51 = (ulong)*(uint *)((long)plVar58 + 0x24), *(uint *)((long)plVar58 + 0x24) != 0)
             ) {
            lVar8 = plVar58[3];
            uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar58 + 4) * 4);
            uVar68 = CONCAT44(0,uVar50);
            lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar58 + 4) * 8);
            uVar51 = param_2 * 0x3ffff - 1;
            uVar51 = (uVar51 ^ uVar51 >> 0x1f) * 0x15;
            uVar51 = (uVar51 ^ uVar51 >> 0xb) * 0x41;
            uVar51 = uVar51 >> 0x16 ^ uVar51;
            uVar64 = uVar51 & 0xffffffff;
            if ((int)uVar51 == 0) {
              uVar64 = 1;
            }
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar64 * lVar9;
            auVar40._8_8_ = 0;
            auVar40._0_8_ = uVar68;
            auVar21 = auVar21 * auVar40;
            lVar60 = auVar21._8_8_;
            uVar51 = auVar21._0_8_;
            uVar69 = *(uint *)(lVar8 + lVar60 * 4);
            iVar55 = auVar21._8_4_;
            if (uVar69 != 0) {
              uVar52 = 0;
              do {
                if ((uint)uVar64 == uVar69) {
                  lVar10 = plVar58[1];
                  uVar69 = *(uint *)(lVar10 + lVar60 * 4);
                  uVar51 = (ulong)uVar69;
                  if (param_2 == *(ulong *)(lVar57 + uVar51 * 8)) {
                    lVar11 = plVar58[2];
                    puVar70 = (uint *)(lVar11 + uVar51 * 4);
                    uVar52 = *puVar70;
                    uVar64 = (ulong)uVar52;
                    auVar25._8_8_ = 0;
                    auVar25._0_8_ = (ulong)(uVar52 + 1) * lVar9;
                    auVar44._8_8_ = 0;
                    auVar44._0_8_ = uVar68;
                    lVar60 = SUB168(auVar25 * auVar44,8) * 4;
                    uVar56 = SUB164(auVar25 * auVar44,8);
                    uVar65 = (ulong)uVar56;
                    puVar63 = (uint *)(lVar8 + lVar60);
                    if ((*puVar63 == 0) ||
                       (auVar26._8_8_ = 0, auVar26._0_8_ = (ulong)*puVar63 * lVar9,
                       auVar45._8_8_ = 0, auVar45._0_8_ = uVar68, auVar27._8_8_ = 0,
                       auVar27._0_8_ =
                            (ulong)((uVar56 + uVar50) - SUB164(auVar26 * auVar45,8)) * lVar9,
                       auVar46._8_8_ = 0, auVar46._0_8_ = uVar68, SUB164(auVar27 * auVar46,8) == 0))
                    {
                      uVar65 = (ulong)uVar52;
                    }
                    else {
                      while( true ) {
                        puVar53 = (uint *)(lVar60 + lVar10);
                        puVar6 = (uint *)(lVar10 + uVar64 * 4);
                        puVar66 = (uint *)(uVar64 * 4 + lVar8);
                        puVar4 = (undefined4 *)(lVar11 + (ulong)*puVar53 * 4);
                        puVar5 = (undefined4 *)(lVar11 + (ulong)*puVar6 * 4);
                        uVar7 = *puVar5;
                        *puVar5 = *puVar4;
                        *puVar4 = uVar7;
                        uVar52 = *puVar63;
                        *puVar63 = *puVar66;
                        *puVar66 = uVar52;
                        uVar52 = *puVar53;
                        *puVar53 = *puVar6;
                        *puVar6 = uVar52;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = (ulong)((int)uVar65 + 1) * lVar9;
                        auVar49._8_8_ = 0;
                        auVar49._0_8_ = uVar68;
                        uVar61 = SUB168(auVar30 * auVar49,8);
                        lVar60 = uVar61 * 4;
                        puVar63 = (uint *)(lVar8 + lVar60);
                        if ((*puVar63 == 0) ||
                           (auVar28._8_8_ = 0, auVar28._0_8_ = (ulong)*puVar63 * lVar9,
                           auVar47._8_8_ = 0, auVar47._0_8_ = uVar68, auVar29._8_8_ = 0,
                           auVar29._0_8_ =
                                (ulong)((SUB164(auVar30 * auVar49,8) + uVar50) -
                                       SUB164(auVar28 * auVar47,8)) * lVar9, auVar48._8_8_ = 0,
                           auVar48._0_8_ = uVar68, SUB164(auVar29 * auVar48,8) == 0)) break;
                        uVar64 = uVar65;
                        uVar65 = uVar61 & 0xffffffff;
                      }
                    }
                    *(undefined4 *)(lVar8 + uVar65 * 4) = 0;
                    uVar50 = *(int *)((long)plVar58 + 0x24) - 1;
                    uVar64 = (ulong)uVar50;
                    *(uint *)((long)plVar58 + 0x24) = uVar50;
                    if (uVar50 <= uVar69) {
                      return uVar64;
                    }
                    uVar50 = *(uint *)(lVar11 + uVar64 * 4);
                    *(undefined8 *)(lVar57 + uVar51 * 8) = *(undefined8 *)(lVar57 + uVar64 * 8);
                    *puVar70 = uVar50;
                    uVar51 = (ulong)*(uint *)(lVar11 + (ulong)*(uint *)((long)plVar58 + 0x24) * 4);
                    *(uint *)(lVar10 + uVar51 * 4) = uVar69;
                    return uVar51;
                  }
                }
                uVar52 = uVar52 + 1;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = (ulong)(iVar55 + 1) * lVar9;
                auVar41._8_8_ = 0;
                auVar41._0_8_ = uVar68;
                auVar22 = auVar22 * auVar41;
                lVar60 = auVar22._8_8_;
                uVar51 = auVar22._0_8_;
                uVar69 = *(uint *)(lVar8 + lVar60 * 4);
                iVar55 = auVar22._8_4_;
              } while ((uVar69 != 0) &&
                      (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)uVar69 * lVar9, auVar42._8_8_ = 0,
                      auVar42._0_8_ = uVar68, auVar24._8_8_ = 0,
                      auVar24._0_8_ =
                           (ulong)((uVar50 + iVar55) - SUB164(auVar23 * auVar42,8)) * lVar9,
                      auVar43._8_8_ = 0, auVar43._0_8_ = uVar68,
                      uVar51 = SUB168(auVar24 * auVar43,0), uVar52 <= SUB164(auVar24 * auVar43,8)));
            }
          }
          return uVar51;
        }
        if (uVar50 + 0x80000000 < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      uVar62 = 0x4ed;
      pcVar54 = "Parameter \"canvas\" is null.";
      goto LAB_0010230a;
    }
    if (*(int *)(lVar57 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar62 = 0x4ea;
  pcVar54 = "Parameter \"viewport\" is null.";
LAB_0010230a:
  uVar51 = _err_print_error("viewport_remove_canvas","servers/rendering/renderer_viewport.cpp",
                            uVar62,pcVar54,0,0);
  return uVar51;
}



/* RendererViewport::viewport_set_transparent_background(RID, bool) */

void __thiscall
RendererViewport::viewport_set_transparent_background
          (RendererViewport *this,ulong param_2,char param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (*(char *)(lVar1 + 0x270) != param_3) {
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x218))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar1 + 0x58),param_3);
        *(char *)(lVar1 + 0x270) = param_3;
      }
      return;
    }
    if (*(int *)(lVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_transparent_background","servers/rendering/renderer_viewport.cpp",
                   0x4fd,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_global_canvas_transform(RID, Transform2D const&) */

void __thiscall
RendererViewport::viewport_set_global_canvas_transform
          (RendererViewport *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar2 + 0x2e8) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x278) = *param_3;
      *(undefined8 *)(lVar2 + 0x280) = uVar1;
      *(undefined8 *)(lVar2 + 0x288) = param_3[2];
      return;
    }
    if (*(int *)(lVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_global_canvas_transform","servers/rendering/renderer_viewport.cpp",
                   0x508,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_positional_shadow_atlas_size(RID, int, bool) */

void __thiscall
RendererViewport::viewport_set_positional_shadow_atlas_size
          (RendererViewport *this,ulong param_2,undefined4 param_3,undefined1 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = RenderingServerGlobals::light_storage;
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      if (*(int *)(lVar2 + 0x2e8) == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x24c) = param_4;
        *(undefined4 *)(lVar2 + 0x248) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0010260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x398))(plVar1,*(undefined8 *)(lVar2 + 0x240),param_3,param_4);
        return;
      }
      if (*(int *)(lVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_positional_shadow_atlas_size",
                   "servers/rendering/renderer_viewport.cpp",0x518,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_positional_shadow_atlas_quadrant_subdivision(RID, int, int) */

void RendererViewport::viewport_set_positional_shadow_atlas_quadrant_subdivision
               (long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(param_1 + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(param_1 + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x001026dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*RenderingServerGlobals::light_storage + 0x3a0))
                  (RenderingServerGlobals::light_storage,*(undefined8 *)(lVar2 + 0x240),param_3);
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_positional_shadow_atlas_quadrant_subdivision",
                   "servers/rendering/renderer_viewport.cpp",0x522,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_msaa_2d(RID, RenderingServer::ViewportMSAA) */

void __thiscall
RendererViewport::viewport_set_msaa_2d(RendererViewport *this,ulong param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = RenderingServerGlobals::texture_storage;
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      if (*(int *)(lVar2 + 0x2e8) == (int)(param_2 >> 0x20)) {
        if (*(int *)(lVar2 + 0x70) != param_3) {
          *(int *)(lVar2 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x001027af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(lVar2 + 0x58),param_3);
          return;
        }
        return;
      }
      if (*(int *)(lVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_msaa_2d","servers/rendering/renderer_viewport.cpp",0x529,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_use_hdr_2d(RID, bool) */

void __thiscall
RendererViewport::viewport_set_use_hdr_2d(RendererViewport *this,ulong param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = RenderingServerGlobals::texture_storage;
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      if (*(int *)(lVar2 + 0x2e8) == (int)(param_2 >> 0x20)) {
        if (*(char *)(lVar2 + 0x271) != param_3) {
          *(char *)(lVar2 + 0x271) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00102898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x270))(plVar1,*(undefined8 *)(lVar2 + 0x58),param_3);
          return;
        }
        return;
      }
      if (*(int *)(lVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_use_hdr_2d","servers/rendering/renderer_viewport.cpp",0x53f,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_is_using_hdr_2d(RID) const */

undefined1 __thiscall
RendererViewport::viewport_is_using_hdr_2d(RendererViewport *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x271);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_is_using_hdr_2d","servers/rendering/renderer_viewport.cpp",0x54a,
                   "Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_set_use_occlusion_culling(RID, bool) */

void __thiscall
RendererViewport::viewport_set_use_occlusion_culling
          (RendererViewport *this,ulong param_2,char param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = RendererSceneOcclusionCull::singleton;
  if ((param_2 == 0) || (*(uint *)(this + 0x5c) <= (uint)param_2)) {
LAB_00102b5c:
    _err_print_error("viewport_set_use_occlusion_culling","servers/rendering/renderer_viewport.cpp",
                     0x58e,"Parameter \"viewport\" is null.",0,0);
    return;
  }
  lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
          *(long *)(*(long *)(this + 0x48) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
  if (*(int *)(lVar3 + 0x2e8) != (int)(param_2 >> 0x20)) {
    if (*(int *)(lVar3 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00102b5c;
  }
  if (*(char *)(lVar3 + 0x1f8) == param_3) {
    return;
  }
  *(char *)(lVar3 + 0x1f8) = param_3;
  lVar1 = *plVar4;
  if (param_3 == '\0') {
    if (*(code **)(lVar1 + 0x50) != RendererSceneOcclusionCull::remove_buffer) {
      (**(code **)(lVar1 + 0x50))(plVar4,param_2);
      goto LAB_00102a8d;
    }
joined_r0x00102abb:
    if (RendererSceneOcclusionCull::_print_warning()::first_print != '\0') {
      _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd,
                       "Occlusion culling is disabled at build-time.",0,1);
      RendererSceneOcclusionCull::_print_warning()::first_print = 0;
      *(undefined1 *)(lVar3 + 0x1f9) = 1;
      return;
    }
  }
  else {
    if (*(code **)(lVar1 + 0x48) == RendererSceneOcclusionCull::add_buffer) {
      if (RendererSceneOcclusionCull::_print_warning()::first_print != '\0') {
        _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd
                         ,"Occlusion culling is disabled at build-time.",0,1);
        RendererSceneOcclusionCull::_print_warning()::first_print = '\0';
        lVar1 = *RendererSceneOcclusionCull::singleton;
        plVar4 = RendererSceneOcclusionCull::singleton;
      }
      pcVar2 = *(code **)(lVar1 + 0x60);
      if (pcVar2 == RendererSceneOcclusionCull::buffer_set_scenario) goto LAB_00102a8d;
    }
    else {
      (**(code **)(lVar1 + 0x48))(plVar4,param_2);
      pcVar2 = *(code **)(*RendererSceneOcclusionCull::singleton + 0x60);
      plVar4 = RendererSceneOcclusionCull::singleton;
      if (pcVar2 == RendererSceneOcclusionCull::buffer_set_scenario) goto joined_r0x00102abb;
    }
    (*pcVar2)(plVar4,param_2,*(undefined8 *)(lVar3 + 0x30));
  }
LAB_00102a8d:
  *(undefined1 *)(lVar3 + 0x1f9) = 1;
  return;
}



/* RendererViewport::viewport_set_occlusion_rays_per_thread(int) */

void __thiscall
RendererViewport::viewport_set_occlusion_rays_per_thread(RendererViewport *this,int param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(this + 0xcc) != param_1) {
    plVar3 = *(long **)(this + 0xa0);
    *(int *)(this + 0xcc) = param_1;
    if ((plVar3 != (long *)0x0) && (0 < plVar3[-1])) {
      plVar1 = plVar3 + plVar3[-1];
      do {
        lVar2 = *plVar3;
        plVar3 = plVar3 + 1;
        *(undefined1 *)(lVar2 + 0x1f9) = 1;
      } while (plVar1 != plVar3);
    }
  }
  return;
}



/* RendererViewport::viewport_set_occlusion_culling_build_quality(RenderingServer::ViewportOcclusionCullingBuildQuality)
    */

void RendererViewport::viewport_set_occlusion_culling_build_quality(void)

{
  if (*(code **)(*RendererSceneOcclusionCull::singleton + 0x80) ==
      RendererSceneOcclusionCull::set_build_quality) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00102c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*RendererSceneOcclusionCull::singleton + 0x80))();
  return;
}



/* RendererViewport::viewport_set_mesh_lod_threshold(RID, float) */

void __thiscall
RendererViewport::viewport_set_mesh_lod_threshold
          (undefined4 param_1,RendererViewport *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x250) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_mesh_lod_threshold","servers/rendering/renderer_viewport.cpp",0x5b1
                   ,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_measure_render_time(RID, bool) */

void __thiscall
RendererViewport::viewport_set_measure_render_time
          (RendererViewport *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x219) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_measure_render_time","servers/rendering/renderer_viewport.cpp",
                   0x5d1,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::viewport_get_measured_render_time_cpu(RID) const */

undefined8 __thiscall
RendererViewport::viewport_get_measured_render_time_cpu(RendererViewport *this,ulong param_2)

{
  long lVar1;
  double dVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
      dVar2 = (double)(ulong)(*(long *)(lVar1 + 0x228) - *(long *)(lVar1 + 0x220)) / __LC57;
      return CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2);
    }
    if (*(int *)(lVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_get_measured_render_time_cpu","servers/rendering/renderer_viewport.cpp"
                   ,0x5d8,"Parameter \"viewport\" is null.",0,0);
  return 0;
}



/* RendererViewport::viewport_get_measured_render_time_gpu(RID) const */

long __thiscall
RendererViewport::viewport_get_measured_render_time_gpu(RendererViewport *this,ulong param_2)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
      return ((ulong)(*(long *)(lVar1 + 0x238) - *(long *)(lVar1 + 0x230)) >> 3) *
             0x20c49ba5e353f7cf;
    }
    if (*(int *)(lVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  lVar1 = _err_print_error("viewport_get_measured_render_time_gpu",
                           "servers/rendering/renderer_viewport.cpp",0x5df,
                           "Parameter \"viewport\" is null.",0,0);
  return lVar1;
}



/* RendererViewport::viewport_set_snap_2d_transforms_to_pixel(RID, bool) */

void __thiscall
RendererViewport::viewport_set_snap_2d_transforms_to_pixel
          (RendererViewport *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x21a) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_snap_2d_transforms_to_pixel",
                   "servers/rendering/renderer_viewport.cpp",0x5e6,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_snap_2d_vertices_to_pixel(RID, bool) */

void __thiscall
RendererViewport::viewport_set_snap_2d_vertices_to_pixel
          (RendererViewport *this,ulong param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined1 *)(lVar2 + 0x21b) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_snap_2d_vertices_to_pixel",
                   "servers/rendering/renderer_viewport.cpp",0x5ec,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_default_canvas_item_texture_filter(RID,
   RenderingServer::CanvasItemTextureFilter) */

void __thiscall
RendererViewport::viewport_set_default_canvas_item_texture_filter
          (RendererViewport *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == 0) {
    _err_print_error("viewport_set_default_canvas_item_texture_filter",
                     "servers/rendering/renderer_viewport.cpp",0x5f1,
                     "Condition \"p_filter == RenderingServer::CANVAS_ITEM_TEXTURE_FILTER_DEFAULT\" is true."
                     ,
                     "Viewport does not accept DEFAULT as texture filter (it\'s the topmost choice already).)"
                     ,0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(int *)(lVar2 + 0x268) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_default_canvas_item_texture_filter",
                   "servers/rendering/renderer_viewport.cpp",0x5f3,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_default_canvas_item_texture_repeat(RID,
   RenderingServer::CanvasItemTextureRepeat) */

void __thiscall
RendererViewport::viewport_set_default_canvas_item_texture_repeat
          (RendererViewport *this,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == 0) {
    _err_print_error("viewport_set_default_canvas_item_texture_repeat",
                     "servers/rendering/renderer_viewport.cpp",0x5f8,
                     "Condition \"p_repeat == RenderingServer::CANVAS_ITEM_TEXTURE_REPEAT_DEFAULT\" is true."
                     ,
                     "Viewport does not accept DEFAULT as texture repeat (it\'s the topmost choice already).)"
                     ,0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    iVar1 = *(int *)(lVar2 + 0x2e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(int *)(lVar2 + 0x26c) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_default_canvas_item_texture_repeat",
                   "servers/rendering/renderer_viewport.cpp",0x5fa,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_sdf_oversize_and_scale(RID, RenderingServer::ViewportSDFOversize,
   RenderingServer::ViewportSDFScale) */

void RendererViewport::viewport_set_sdf_oversize_and_scale
               (long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(param_1 + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(param_1 + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(param_1 + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(param_1 + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x001033f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x2a8))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar2 + 0x58),param_3);
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_sdf_oversize_and_scale","servers/rendering/renderer_viewport.cpp",
                   0x601,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_vrs_update_mode(RID, RenderingServer::ViewportVRSUpdateMode) */

void __thiscall
RendererViewport::viewport_set_vrs_update_mode
          (RendererViewport *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x001034c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x2d0))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar2 + 0x58),param_3);
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_vrs_update_mode","servers/rendering/renderer_viewport.cpp",0x61e,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::handle_timestamp(String, unsigned long, unsigned long) */

void __thiscall
RendererViewport::handle_timestamp
          (RendererViewport *this,char *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    lVar16 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar12 = String::hash();
    uVar2 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x18);
    uVar13 = 1;
    if (uVar12 != 0) {
      uVar13 = uVar12;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar16;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar2;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar12) {
          cVar11 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x10) + lVar15 * 8) + 0x10),
                                      param_2);
          if (cVar11 != '\0') {
            lVar16 = *(long *)(*(long *)(this + 0x10) + (ulong)uVar14 * 8);
            if (*(long *)(lVar16 + 0x18) == 0) {
              return;
            }
            uVar2 = *(ulong *)(lVar16 + 0x18);
            if (*(uint *)(this + 0x5c) <= (uint)uVar2) {
              return;
            }
            lVar16 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
                     *(long *)(*(long *)(this + 0x48) +
                              ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
            if (*(int *)(lVar16 + 0x2e8) != (int)(uVar2 >> 0x20)) {
              if (0x7ffffffe < *(int *)(lVar16 + 0x2e8) + 0x80000000U) {
                return;
              }
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
              return;
            }
            cVar11 = String::begins_with(param_2);
            if (cVar11 != '\0') {
              *(undefined8 *)(lVar16 + 0x220) = param_3;
              *(undefined8 *)(lVar16 + 0x230) = param_4;
            }
            cVar11 = String::begins_with(param_2);
            if (cVar11 == '\0') {
              return;
            }
            *(undefined8 *)(lVar16 + 0x228) = param_3;
            *(undefined8 *)(lVar16 + 0x238) = param_4;
            return;
          }
          lVar17 = *(long *)(this + 0x18);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar16;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar2;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
        if (uVar12 == 0) {
          return;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar12 * lVar16;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar2;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar16;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar2;
        if (SUB164(auVar6 * auVar10,8) < uVar18) {
          return;
        }
      } while( true );
    }
  }
  return;
}



/* RendererViewport::viewport_set_canvas_cull_mask(RID, unsigned int) */

void __thiscall
RendererViewport::viewport_set_canvas_cull_mask
          (RendererViewport *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      iVar1 = *(int *)(lVar2 + 0x2e8);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar2 + 0x274) = param_3;
        return;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_canvas_cull_mask","servers/rendering/renderer_viewport.cpp",0x665,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::call_set_vsync_mode(DisplayServer::VSyncMode, int) */

void RendererViewport::call_set_vsync_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0010383e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DisplayServer::singleton + 0x5a8))();
  return;
}



/* RendererViewport::get_total_objects_drawn() const */

undefined4 __thiscall RendererViewport::get_total_objects_drawn(RendererViewport *this)

{
  return *(undefined4 *)(this + 0xbc);
}



/* RendererViewport::get_total_primitives_drawn() const */

undefined4 __thiscall RendererViewport::get_total_primitives_drawn(RendererViewport *this)

{
  return *(undefined4 *)(this + 0xc0);
}



/* RendererViewport::get_total_draw_calls_used() const */

undefined4 __thiscall RendererViewport::get_total_draw_calls_used(RendererViewport *this)

{
  return *(undefined4 *)(this + 0xc4);
}



/* RendererViewport::get_num_viewports_with_motion_vectors() const */

undefined4 __thiscall
RendererViewport::get_num_viewports_with_motion_vectors(RendererViewport *this)

{
  return *(undefined4 *)(this + 200);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::RendererViewport() */

void __thiscall RendererViewport::RendererViewport(RendererViewport *this)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  uVar1 = _UNK_00115178;
  uVar3 = __LC74;
  *(undefined8 *)(this + 0x30) = 2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_viewport_get_render_info_00114ef0;
  *(undefined ***)(this + 0x40) = &PTR__RID_Alloc_00114ed0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x80) = 1;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x60) = uVar1;
  uVar3 = Memory::alloc_static(0x5d18,false);
  *(undefined8 *)(this + 0x48) = uVar3;
  uVar3 = Memory::alloc_static((ulong)*(uint *)(this + 100) << 3,false);
  *(undefined8 *)(this + 0x50) = uVar3;
  this[0xb8] = (RendererViewport)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xcc) = 0x200;
  *(undefined1 (*) [16])(this + 0xbc) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"rendering/occlusion_culling/occlusion_rays_per_thread",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0xcc) = iVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererViewport::viewport_set_canvas_transform(RID, RID, Transform2D const&) */

void __thiscall
RendererViewport::viewport_set_canvas_transform
          (RendererViewport *this,ulong param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long local_40 [2];
  
  local_40[0] = param_3;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar15 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar15 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if ((*(long *)(lVar15 + 0x298) != 0) && (*(int *)(lVar15 + 700) != 0)) {
        uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar15 + 0x2b8) * 4)
                         );
        lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar15 + 0x2b8) * 8);
        uVar11 = param_3 * 0x3ffff - 1;
        uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
        uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
        uVar11 = uVar11 >> 0x16 ^ uVar11;
        uVar14 = uVar11 & 0xffffffff;
        if ((int)uVar11 == 0) {
          uVar14 = 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar14 * lVar1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar17;
        lVar13 = SUB168(auVar2 * auVar6,8);
        uVar16 = *(uint *)(*(long *)(lVar15 + 0x2a0) + lVar13 * 4);
        iVar12 = SUB164(auVar2 * auVar6,8);
        if (uVar16 != 0) {
          uVar18 = 0;
          do {
            if (((uint)uVar14 == uVar16) &&
               (param_3 == *(long *)(*(long *)(*(long *)(lVar15 + 0x298) + lVar13 * 8) + 0x10))) {
              lVar15 = HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                       ::operator[]((HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                                     *)(lVar15 + 0x290),(RID *)local_40);
              uVar10 = param_4[1];
              *(undefined8 *)(lVar15 + 8) = *param_4;
              *(undefined8 *)(lVar15 + 0x10) = uVar10;
              *(undefined8 *)(lVar15 + 0x18) = param_4[2];
              return;
            }
            uVar18 = uVar18 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar17;
            lVar13 = SUB168(auVar3 * auVar7,8);
            uVar16 = *(uint *)(*(long *)(lVar15 + 0x2a0) + lVar13 * 4);
            iVar12 = SUB164(auVar3 * auVar7,8);
          } while ((uVar16 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar1, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(lVar15 + 0x2b8) * 4) + iVar12) -
                                        SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar17, uVar18 <= SUB164(auVar5 * auVar9,8)));
        }
      }
      _err_print_error("viewport_set_canvas_transform","servers/rendering/renderer_viewport.cpp",
                       0x4f7,"Condition \"!viewport->canvas_map.has(p_canvas)\" is true.",0,0);
      return;
    }
    if (*(int *)(lVar15 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_canvas_transform","servers/rendering/renderer_viewport.cpp",0x4f5,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_canvas_stacking(RID, RID, int, int) */

void __thiscall
RendererViewport::viewport_set_canvas_stacking
          (RendererViewport *this,ulong param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long local_40 [2];
  
  local_40[0] = param_3;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar14 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    if (*(int *)(lVar14 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if ((*(long *)(lVar14 + 0x298) != 0) && (*(int *)(lVar14 + 700) != 0)) {
        uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar14 + 0x2b8) * 4)
                         );
        lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar14 + 0x2b8) * 8);
        uVar9 = param_3 * 0x3ffff - 1;
        uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
        uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
        uVar9 = uVar9 >> 0x16 ^ uVar9;
        uVar13 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar13 = 1;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar13 * lVar10;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar16;
        lVar12 = SUB168(auVar1 * auVar5,8);
        uVar15 = *(uint *)(*(long *)(lVar14 + 0x2a0) + lVar12 * 4);
        iVar11 = SUB164(auVar1 * auVar5,8);
        if (uVar15 != 0) {
          uVar17 = 0;
          do {
            if (((uint)uVar13 == uVar15) &&
               (param_3 == *(long *)(*(long *)(*(long *)(lVar14 + 0x298) + lVar12 * 8) + 0x10))) {
              lVar10 = HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                       ::operator[]((HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                                     *)(lVar14 + 0x290),(RID *)local_40);
              *(undefined4 *)(lVar10 + 0x20) = param_4;
              lVar14 = HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                       ::operator[]((HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                                     *)(lVar14 + 0x290),(RID *)local_40);
              *(undefined4 *)(lVar14 + 0x24) = param_5;
              return;
            }
            uVar17 = uVar17 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (ulong)(iVar11 + 1) * lVar10;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar16;
            lVar12 = SUB168(auVar2 * auVar6,8);
            uVar15 = *(uint *)(*(long *)(lVar14 + 0x2a0) + lVar12 * 4);
            iVar11 = SUB164(auVar2 * auVar6,8);
          } while ((uVar15 != 0) &&
                  (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar15 * lVar10, auVar7._8_8_ = 0,
                  auVar7._0_8_ = uVar16, auVar4._8_8_ = 0,
                  auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(lVar14 + 0x2b8) * 4) + iVar11) -
                                        SUB164(auVar3 * auVar7,8)) * lVar10, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar16, uVar17 <= SUB164(auVar4 * auVar8,8)));
        }
      }
      _err_print_error("viewport_set_canvas_stacking","servers/rendering/renderer_viewport.cpp",
                       0x511,"Condition \"!viewport->canvas_map.has(p_canvas)\" is true.",0,0);
      return;
    }
    if (*(int *)(lVar14 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_canvas_stacking","servers/rendering/renderer_viewport.cpp",0x50f,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::_configure_3d_render_buffers(RendererViewport::Viewport*) [clone .part.0] */

void RendererViewport::_configure_3d_render_buffers(Viewport *param_1)

{
  long *plVar1;
  double dVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  void *pvVar11;
  byte bVar12;
  Viewport VVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  uint uVar26;
  ulong uVar27;
  long local_220;
  char *local_218;
  undefined8 local_210;
  float local_200;
  float local_1fc;
  undefined **local_1f8 [48];
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  long local_40;
  
  dVar2 = _LC99;
  uVar9 = *(uint *)(param_1 + 0x38);
  fVar22 = *(float *)(param_1 + 0x3c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VVar13 = param_1[0x4c];
  bVar8 = uVar9 < 2 || uVar9 == 3;
  fVar17 = _LC84;
  fVar19 = fVar22;
  if ((bool)bVar8) {
    if (((double)fVar22 < __LC98) || (_LC99 < (double)fVar22)) {
      bVar14 = (byte)VVar13 ^ 1;
      if (uVar9 != 3) {
        bVar12 = 2;
        bVar8 = false;
        goto LAB_00104d88;
      }
LAB_00104875:
      dVar24 = (double)fVar22;
      uVar5 = RenderingDevice::get_singleton();
      cVar4 = RenderingDevice::has_feature(uVar5,3);
      fVar22 = fVar19;
      if (cVar4 == '\0') {
        if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print == '\0') {
          bVar12 = 2;
          uVar9 = 1;
          uVar27 = (ulong)*(uint *)(param_1 + 0x74);
          bVar8 = 0;
        }
        else {
          bVar12 = 2;
          uVar9 = 1;
          _err_print_error("_configure_3d_render_buffers","servers/rendering/renderer_viewport.cpp",
                           0x9f,
                           "MetalFX spatial upscaling is not supported by the current renderer or hardware. Falling back to FSR scaling."
                           ,0,1);
          _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
          uVar27 = (ulong)*(uint *)(param_1 + 0x74);
          bVar8 = 0;
        }
      }
      else {
        bVar12 = 2;
        uVar9 = 3;
        uVar27 = (ulong)*(uint *)(param_1 + 0x74);
        bVar8 = 0;
      }
LAB_001048b8:
      VVar13 = param_1[0x7c];
LAB_001048bd:
      uVar26 = (uint)uVar27;
      if (dVar2 <= dVar24) {
        if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print == '\0') {
          if (bVar14 != 0) goto LAB_001048e5;
LAB_00104d14:
          uVar26 = (uint)uVar27;
joined_r0x00104d17:
          fVar17 = _LC84;
          if ((bVar8 & (byte)VVar13) != 0) {
            uVar26 = (uint)uVar27;
joined_r0x00104b1f:
            if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print !=
                (Viewport)0x0) {
              uVar9 = 0;
              goto LAB_00104b2f;
            }
            VVar13 = (Viewport)0x0;
            _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = (Viewport)0x0;
            fVar17 = _LC84;
          }
        }
        else {
          _err_print_error("_configure_3d_render_buffers","servers/rendering/renderer_viewport.cpp",
                           0xb7,
                           "FSR 3D resolution scaling is not designed for downsampling. Falling back to bilinear 3D resolution scaling."
                           ,0,1,uVar27);
          _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
          if (bVar14 == 0) goto LAB_00104d14;
LAB_001048e5:
          uVar26 = (uint)uVar27;
          if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print == '\0') {
            _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
            goto joined_r0x00104d17;
          }
          _err_print_error("_configure_3d_render_buffers","servers/rendering/renderer_viewport.cpp",
                           0xbe,
                           "FSR 3D resolution scaling is not available. Falling back to bilinear 3D resolution scaling."
                           ,0,1,uVar27);
          uVar26 = (uint)uVar27;
          _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
          fVar17 = _LC84;
          if ((bVar8 & (byte)VVar13) != 0) goto joined_r0x00104b1f;
        }
LAB_0010490f:
        fVar19 = (float)*(int *)(param_1 + 0x1c);
        fVar18 = fVar19 * fVar22;
        if (fVar18 < fVar17) {
          iVar7 = 1;
          fVar18 = fVar17;
        }
        else if (_LC97 < fVar18) {
          iVar7 = 0x4000;
          fVar18 = _LC97;
        }
        else {
          iVar7 = (int)fVar18;
          fVar18 = (float)iVar7;
        }
        fVar23 = (float)*(int *)(param_1 + 0x20);
        fVar25 = fVar23 * fVar22;
        if (fVar25 < fVar17) {
          iVar16 = 1;
          uVar9 = 0;
          fVar25 = fVar17;
        }
        else if (_LC97 < fVar25) {
          iVar16 = 0x4000;
          uVar9 = 0;
          fVar25 = _LC97;
        }
        else {
          iVar16 = (int)fVar25;
          uVar9 = 0;
          fVar25 = (float)iVar16;
        }
        goto LAB_001044f7;
      }
      if (bVar14 != 0) goto LAB_001048e5;
      if ((bVar8 != 0) && (VVar13 != (Viewport)0x0)) goto LAB_00104dbc;
      fVar17 = _LC84;
      if (uVar9 < 0x100) goto LAB_00104b85;
      goto LAB_00104a60;
    }
    uVar26 = *(uint *)(param_1 + 0x74);
    VVar13 = param_1[0x7c];
    bVar12 = 2;
    fVar22 = _LC84;
  }
  else {
    if ((uVar9 - 2 & 0xfffffffd) == 0) {
      bVar12 = true;
      if (VVar13 == (Viewport)0x0) goto LAB_001046b2;
LAB_001046f6:
      bVar14 = bVar8;
      bVar8 = bVar12;
      if (uVar9 == 4) {
LAB_00104715:
        dVar24 = (double)fVar22;
        uVar5 = RenderingDevice::get_singleton();
        cVar4 = RenderingDevice::has_feature(uVar5,4);
        if (cVar4 == '\0') {
          uVar5 = RenderingDevice::get_singleton();
          cVar4 = RenderingDevice::has_feature(uVar5,3);
          bVar8 = _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print;
          if (cVar4 != '\0') {
            if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print != '\0') {
              _err_print_error("_configure_3d_render_buffers",
                               "servers/rendering/renderer_viewport.cpp",0x95,
                               "MetalFX temporal upscaling is not supported by the current renderer or hardware. Falling back to MetalFX Spatial scaling."
                               ,0,1);
              _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
            }
            goto LAB_00104875;
          }
          fVar22 = fVar19;
          if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print == 0) {
            bVar12 = 1;
            uVar9 = 2;
            uVar27 = (ulong)*(uint *)(param_1 + 0x74);
            bVar8 = 1;
          }
          else {
            bVar12 = 1;
            uVar9 = 2;
            _err_print_error("_configure_3d_render_buffers",
                             "servers/rendering/renderer_viewport.cpp",0x98,
                             "MetalFX upscaling is not supported by the current renderer or hardware. Falling back to FSR 2 scaling."
                             ,0,1);
            _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = 0;
            uVar27 = (ulong)*(uint *)(param_1 + 0x74);
          }
        }
        else {
          uVar27 = (ulong)*(uint *)(param_1 + 0x74);
          uVar5 = RenderingDevice::get_singleton();
          uVar6 = RenderingDevice::limit_get(uVar5,0x2e);
          dVar20 = (double)uVar6 / __LC100;
          uVar5 = RenderingDevice::get_singleton();
          uVar6 = RenderingDevice::limit_get(uVar5,0x2f);
          dVar21 = (double)uVar6 / __LC100;
          fVar22 = fVar19;
          bVar12 = bVar8;
          if ((dVar24 < dVar20) || (dVar21 < dVar24)) {
            if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print != '\0') {
              local_218 = 
              "MetalFX temporal upscaling scale is outside limits; scale must be between %f and %f. Falling back to FSR 2 3D resolution scaling."
              ;
              local_220 = 0;
              local_210 = 0x81;
              String::parse_latin1((StrRange *)&local_220);
              vformat<double,double>((String *)&local_218,dVar20,dVar21);
              _err_print_error("_configure_3d_render_buffers",
                               "servers/rendering/renderer_viewport.cpp",0xaa,&local_218,0,1);
              if (local_218 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_218 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  pcVar10 = local_218 + -0x10;
                  local_218 = (char *)0x0;
                  Memory::free_static(pcVar10,false);
                }
              }
              if (local_220 != 0) {
                LOCK();
                plVar1 = (long *)(local_220 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  pvVar11 = (void *)(local_220 + -0x10);
                  local_220 = 0;
                  Memory::free_static(pvVar11,false);
                }
              }
              _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
            }
            uVar9 = 2;
          }
          else {
            if (((int)uVar27 != 0) &&
               (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print != '\0')) {
              _err_print_error("_configure_3d_render_buffers",
                               "servers/rendering/renderer_viewport.cpp",0xac,
                               "MetalFX temporal upscaling does not support 3D MSAA. Disabling 3D MSAA internally."
                               ,0,1);
              _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
            }
            uVar27 = 0;
            uVar9 = 4;
          }
        }
        goto LAB_001048b8;
      }
LAB_00104d88:
      uVar26 = *(uint *)(param_1 + 0x74);
      VVar13 = param_1[0x7c];
      uVar27 = (ulong)uVar26;
      if ((uVar9 != 0xff) && (uVar9 != 0)) goto LAB_00105192;
      if ((VVar13 != (Viewport)0x0) && ((bool)bVar8 != false)) goto LAB_00104dbc;
    }
    else {
      bVar12 = false;
      if (VVar13 != (Viewport)0x0) {
        uVar26 = *(uint *)(param_1 + 0x74);
        VVar13 = param_1[0x7c];
        uVar27 = (ulong)uVar26;
        if (uVar9 == 0xff) {
          bVar12 = 0;
          goto LAB_001044d3;
        }
        bVar14 = 0;
        bVar12 = 0;
LAB_00105192:
        dVar24 = (double)fVar22;
        goto LAB_001048bd;
      }
LAB_001046b2:
      if ((double)fVar22 < __LC98) {
        bVar8 = true;
        goto LAB_001046f6;
      }
      if (_LC99 < (double)fVar22) {
        bVar8 = bVar12;
        if (uVar9 != 4) {
          bVar14 = 1;
          goto LAB_00104d88;
        }
        bVar14 = true;
        goto LAB_00104715;
      }
      uVar26 = *(uint *)(param_1 + 0x74);
      VVar13 = param_1[0x7c];
      uVar27 = (ulong)uVar26;
      fVar22 = _LC84;
      if (((bool)bVar12 == false) || (VVar13 == (Viewport)0x0)) goto LAB_001044d3;
      bVar12 = 1;
      uVar9 = 0xff;
LAB_00104dbc:
      uVar26 = (uint)uVar27;
      fVar17 = _LC84;
      VVar13 = _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print;
      if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print != (Viewport)0x0) {
LAB_00104b2f:
        fVar17 = _LC84;
        uVar26 = (uint)uVar27;
        _err_print_error("_configure_3d_render_buffers","servers/rendering/renderer_viewport.cpp",
                         0xc5,
                         "FSR 2 or MetalFX Temporal is not compatible with TAA. Disabling TAA internally."
                         ,0,1,uVar27);
        _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = (Viewport)0x0;
        VVar13 = (Viewport)0x0;
      }
    }
    if (uVar9 != 0xff) {
      if (uVar9 < 0x100) {
        if (uVar9 == 0) goto LAB_0010490f;
LAB_00104b85:
        if (uVar9 - 1 < 4) {
          fVar19 = (float)*(int *)(param_1 + 0x1c);
          if (fVar19 * fVar22 <= fVar17) {
            iVar7 = 1;
            fVar18 = fVar17;
          }
          else {
            iVar7 = (int)(fVar19 * fVar22);
            fVar18 = (float)iVar7;
          }
          fVar23 = (float)*(int *)(param_1 + 0x20);
          if (fVar23 * fVar22 <= fVar17) {
            iVar16 = 1;
            fVar25 = fVar17;
          }
          else {
            iVar16 = (int)(fVar23 * fVar22);
            fVar25 = (float)iVar16;
          }
          goto LAB_001044f7;
        }
      }
LAB_00104a60:
      if (_configure_3d_render_buffers(RendererViewport::Viewport*)::first_print != '\0') {
        local_220 = 0;
        local_218 = "Unknown scaling mode: %d. Disabling 3D resolution scaling.";
        local_210 = 0x3a;
        String::parse_latin1((StrRange *)&local_220);
        vformat<RenderingServer::ViewportScaling3DMode>(&local_218,(StrRange *)&local_220,uVar9);
        _err_print_error("_configure_3d_render_buffers","servers/rendering/renderer_viewport.cpp",
                         0xe8,&local_218,0,1);
        pcVar10 = local_218;
        if (local_218 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_218 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_218 = (char *)0x0;
            Memory::free_static(pcVar10 + -0x10,false);
          }
        }
        lVar3 = local_220;
        if (local_220 != 0) {
          LOCK();
          plVar1 = (long *)(local_220 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_220 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        _configure_3d_render_buffers(RendererViewport::Viewport*)::first_print = '\0';
      }
      iVar16 = *(int *)(param_1 + 0x20);
      iVar7 = *(int *)(param_1 + 0x1c);
      uVar9 = 0xff;
      fVar18 = (float)iVar7;
      fVar23 = (float)iVar16;
      fVar22 = fVar17;
      fVar25 = fVar23;
      fVar19 = fVar18;
      goto LAB_001044f7;
    }
  }
LAB_001044d3:
  iVar16 = *(int *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar9 = 0xff;
  fVar18 = (float)iVar7;
  fVar23 = (float)iVar16;
  fVar25 = fVar23;
  fVar19 = fVar18;
LAB_001044f7:
  iVar15 = (uint)(byte)VVar13 << 4;
  if (bVar12 == 1) {
    iVar15 = (int)(long)((fVar19 / fVar18) * (fVar19 / fVar18) * __LC111);
  }
  local_1f8[0] = (undefined **)CONCAT44(fVar25,fVar18);
  uVar5 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_1f8);
  *(int *)(param_1 + 0x50) = iVar15;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  if (fVar17 <= fVar22) {
    fVar22 = fVar17;
  }
  fVar17 = log2f(fVar22);
  fVar22 = *(float *)(param_1 + 0x44);
  RefCounted::RefCounted((RefCounted *)local_1f8);
  local_1f8[0] = &PTR__initialize_classv_00114d70;
  local_44 = 0;
  local_78 = *(undefined8 *)(param_1 + 0x58);
  local_60 = __LC112;
  uStack_58 = _UNK_00115188;
  local_68 = 0;
  local_50 = 2;
  local_4c = 0;
  local_200 = fVar19;
  local_1fc = fVar23;
  local_70 = iVar7;
  local_6c = iVar16;
  local_68 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_200);
  local_50 = *(undefined4 *)(param_1 + 0x48);
  uStack_58 = CONCAT44(*(undefined4 *)(param_1 + 0x78),uVar26);
  local_60 = CONCAT44(uVar9,*(undefined4 *)(param_1 + 0x24));
  local_44 = CONCAT11(param_1[0x7d],VVar13);
  local_4c = CONCAT44(fVar17 + fVar22,*(undefined4 *)(param_1 + 0x40));
  (**(code **)(**(long **)(param_1 + 0x68) + 0x150))
            (*(long **)(param_1 + 0x68),(Vector2 *)local_1f8);
  local_1f8[0] = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)local_1f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererViewport::_configure_3d_render_buffers(RendererViewport::Viewport*) */

void __thiscall
RendererViewport::_configure_3d_render_buffers(RendererViewport *this,Viewport *param_1)

{
  Object *this_00;
  char cVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    _configure_3d_render_buffers(param_1);
    return;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') goto LAB_00105201;
  this_00 = *(Object **)(param_1 + 0x68);
  cVar1 = predelete_handler(this_00);
  if (cVar1 == '\0') goto LAB_00105201;
  if (*(code **)(*(long *)this_00 + 0x140) ==
      RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
    bVar2 = StringName::configured != '\0';
    *(code **)this_00 = RendererSceneRender::environment_get_canvas_max_layer;
    if (bVar2) {
      if (*(long *)(this_00 + 0x1e0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001052ed;
      }
      if (*(long *)(this_00 + 0x1c8) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001052ed;
      }
      if (*(long *)(this_00 + 0x1b0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001052ed;
      }
      if (*(long *)(this_00 + 0x198) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001052ed;
      }
      if (*(long *)(this_00 + 0x180) != 0) {
        StringName::unref();
      }
    }
LAB_001052ed:
    *(undefined ***)this_00 = &PTR__initialize_classv_00114c10;
    Object::~Object(this_00);
  }
  else {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
  }
  Memory::free_static(this_00,false);
LAB_00105201:
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* RendererViewport::_viewport_set_size(RendererViewport::Viewport*, int, int, unsigned int) */

void __thiscall
RendererViewport::_viewport_set_size
          (RendererViewport *this,Viewport *param_1,int param_2,int param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  long in_FS_OFFSET;
  int local_38;
  int iStack_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  iStack_34 = param_3;
  cVar2 = Vector2i::operator!=((Vector2i *)(param_1 + 0x1c),(Vector2i *)&local_38);
  plVar1 = RenderingServerGlobals::texture_storage;
  if ((cVar2 != '\0') || (*(uint *)(param_1 + 0x24) != param_4)) {
    *(uint *)(param_1 + 0x24) = param_4;
    *(ulong *)(param_1 + 0x1c) = CONCAT44(iStack_34,local_38);
    (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 0x58),param_2,param_3,param_4);
    _configure_3d_render_buffers(this,param_1);
    param_1[0x1f9] = (Viewport)0x1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererViewport::viewport_set_size(RID, int, int) */

void __thiscall
RendererViewport::viewport_set_size(RendererViewport *this,ulong param_2,uint param_3,uint param_4)

{
  Viewport *pVVar1;
  
  if ((int)(param_3 | param_4) < 0) {
    _err_print_error("viewport_set_size","servers/rendering/renderer_viewport.cpp",0x404,
                     "Condition \"p_width < 0 || p_height < 0\" is true.",0,0);
    return;
  }
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    pVVar1 = (Viewport *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (pVVar1[0x10] == (Viewport)0x0) {
        _viewport_set_size(this,pVVar1,param_3,param_4,1);
        return;
      }
      _err_print_error("viewport_set_size","servers/rendering/renderer_viewport.cpp",0x408,
                       "Condition \"viewport->use_xr\" is true.",
                       "Cannot set viewport size when using XR",0,0);
      return;
    }
    if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_size","servers/rendering/renderer_viewport.cpp",0x407,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_use_xr(RID, bool) */

void __thiscall
RendererViewport::viewport_set_use_xr(RendererViewport *this,ulong param_2,Viewport param_3)

{
  Viewport *pVVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      pVVar1 = (Viewport *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
      if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
        if ((pVVar1[0x10] != param_3) && (pVVar1[0x10] = param_3, param_3 == (Viewport)0x0)) {
          *(undefined4 *)(pVVar1 + 0x24) = 1;
          _configure_3d_render_buffers(this,pVVar1);
          return;
        }
        return;
      }
      if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_use_xr","servers/rendering/renderer_viewport.cpp",0x3b7,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_scaling_3d_mode(RID, RenderingServer::ViewportScaling3DMode) */

void __thiscall
RendererViewport::viewport_set_scaling_3d_mode(RendererViewport *this,ulong param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  Viewport *pVVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    pVVar10 = (Viewport *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
              *(long *)(*(long *)(this + 0x48) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar10 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (param_3 == 1) {
        lVar8 = OS::get_singleton();
        local_38 = 0;
        plVar1 = (long *)(*(long *)(lVar8 + 0x68) + -0x10);
        if (*(long *)(lVar8 + 0x68) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010572e;
            LOCK();
            lVar9 = *plVar1;
            bVar12 = lVar4 == lVar9;
            if (bVar12) {
              *plVar1 = lVar4 + 1;
              lVar9 = lVar4;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar9 != -1) {
            local_38 = *(long *)(lVar8 + 0x68);
          }
        }
LAB_0010572e:
        cVar6 = String::operator!=((String *)&local_38,"forward_plus");
        lVar8 = local_38;
        if (local_38 != 0) {
          LOCK();
          plVar1 = (long *)(local_38 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        if (cVar6 == '\0') goto LAB_0010566c;
        _err_print_error("viewport_set_scaling_3d_mode","servers/rendering/renderer_viewport.cpp",
                         0x3ca,
                         "Condition \"p_mode == RenderingServer::VIEWPORT_SCALING_3D_MODE_FSR && OS::get_singleton()->get_current_rendering_method() != \"forward_plus\"\" is true."
                         ,"FSR1 is only available when using the Forward+ renderer.",1,0);
      }
      else {
        if (param_3 == 2) {
          lVar8 = OS::get_singleton();
          local_38 = 0;
          plVar1 = (long *)(*(long *)(lVar8 + 0x68) + -0x10);
          if (*(long *)(lVar8 + 0x68) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_00105826;
              LOCK();
              lVar9 = *plVar1;
              bVar12 = lVar4 == lVar9;
              if (bVar12) {
                *plVar1 = lVar4 + 1;
                lVar9 = lVar4;
              }
              UNLOCK();
            } while (!bVar12);
            if (lVar9 != -1) {
              local_38 = *(long *)(lVar8 + 0x68);
            }
          }
LAB_00105826:
          cVar6 = String::operator!=((String *)&local_38,"forward_plus");
          lVar8 = local_38;
          if (cVar6 != '\0') {
            if (local_38 != 0) {
              LOCK();
              plVar1 = (long *)(local_38 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_38 = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            _err_print_error("viewport_set_scaling_3d_mode",
                             "servers/rendering/renderer_viewport.cpp",0x3cb,
                             "Condition \"p_mode == RenderingServer::VIEWPORT_SCALING_3D_MODE_FSR2 && OS::get_singleton()->get_current_rendering_method() != \"forward_plus\"\" is true."
                             ,"FSR2 is only available when using the Forward+ renderer.",1,0);
            goto LAB_00105792;
          }
          if (local_38 != 0) {
            LOCK();
            plVar1 = (long *)(local_38 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_38 = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          bVar12 = true;
        }
        else {
LAB_0010566c:
          bVar12 = false;
        }
        uVar2 = *(uint *)(pVVar10 + 0x38);
        if (uVar2 != param_3) {
          if (pVVar10[0x7c] == (Viewport)0x0) {
            bVar11 = param_3 != 3;
            bVar5 = 1 < param_3;
            if (((uVar2 < 2) || (uVar2 == 3)) || ((uVar2 - 2 & 0xfffffffd) != 0)) {
              *(uint *)(pVVar10 + 0x38) = param_3;
              if (*(int *)(pVVar10 + 0x260) == 0x19) {
                if (bVar11 && bVar5) goto LAB_001058d8;
              }
              else if (((bVar11 && bVar5) && ((param_3 == 4 || (bVar12)))) &&
                      (pVVar10[0x7e] == (Viewport)0x0)) {
                iVar3 = *(int *)(this + 200);
                iVar7 = 1;
                goto LAB_0010590e;
              }
            }
            else {
              *(uint *)(pVVar10 + 0x38) = param_3;
              if (bVar11 && bVar5) {
LAB_001058d8:
                if ((param_3 == 4) || (bVar12)) goto LAB_001057bc;
              }
              if ((*(int *)(pVVar10 + 0x260) != 0x19) && (pVVar10[0x7e] == (Viewport)0x0)) {
                iVar3 = *(int *)(this + 200);
                iVar7 = -1;
LAB_0010590e:
                *(int *)(this + 200) = iVar7 + iVar3;
              }
            }
          }
          else {
            *(uint *)(pVVar10 + 0x38) = param_3;
          }
LAB_001057bc:
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            _configure_3d_render_buffers(this,pVVar10);
            return;
          }
          goto LAB_001059e4;
        }
      }
LAB_00105792:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001059e4;
    }
    if (*(int *)(pVVar10 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("viewport_set_scaling_3d_mode","servers/rendering/renderer_viewport.cpp",0x3c9,
                     "Parameter \"viewport\" is null.",0,0);
    return;
  }
LAB_001059e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererViewport::viewport_set_fsr_sharpness(RID, float) */

void __thiscall
RendererViewport::viewport_set_fsr_sharpness
          (undefined4 param_1,RendererViewport *this,ulong param_3)

{
  Viewport *pVVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x5c))) {
    pVVar1 = (Viewport *)
             (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar1 + 0x2e8) == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(pVVar1 + 0x40) = param_1;
      _configure_3d_render_buffers(this,pVVar1);
      return;
    }
    if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_fsr_sharpness","servers/rendering/renderer_viewport.cpp",0x3de,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_texture_mipmap_bias(RID, float) */

void __thiscall
RendererViewport::viewport_set_texture_mipmap_bias
          (undefined4 param_1,RendererViewport *this,ulong param_3)

{
  Viewport *pVVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x5c))) {
    pVVar1 = (Viewport *)
             (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar1 + 0x2e8) == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(pVVar1 + 0x44) = param_1;
      _configure_3d_render_buffers(this,pVVar1);
      return;
    }
    if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_texture_mipmap_bias","servers/rendering/renderer_viewport.cpp",
                   0x3e6,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_anisotropic_filtering_level(RID,
   RenderingServer::ViewportAnisotropicFiltering) */

void __thiscall
RendererViewport::viewport_set_anisotropic_filtering_level
          (RendererViewport *this,ulong param_2,undefined4 param_3)

{
  Viewport *pVVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      pVVar1 = (Viewport *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
      if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(pVVar1 + 0x48) = param_3;
        _configure_3d_render_buffers(this,pVVar1);
        return;
      }
      if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_anisotropic_filtering_level",
                   "servers/rendering/renderer_viewport.cpp",0x3ee,"Parameter \"viewport\" is null."
                   ,0,0);
  return;
}



/* RendererViewport::viewport_set_scaling_3d_scale(RID, float) */

void __thiscall
RendererViewport::viewport_set_scaling_3d_scale(float param_1,RendererViewport *this,ulong param_3)

{
  float fVar1;
  Viewport *pVVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x5c))) {
    pVVar2 = (Viewport *)
             (((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar2 + 0x2e8) == (int)(param_3 >> 0x20)) {
      fVar1 = *(float *)(pVVar2 + 0x3c);
      if (_LC129 <= (double)param_1) {
        if (_LC128 < param_1) {
          param_1 = _LC128;
          if (fVar1 == _LC128) {
            return;
          }
        }
        else if (fVar1 == param_1) {
          return;
        }
      }
      else {
        param_1 = _LC127;
        if ((double)fVar1 == _LC129) {
          return;
        }
      }
      *(float *)(pVVar2 + 0x3c) = param_1;
      _configure_3d_render_buffers(this,pVVar2);
      return;
    }
    if (*(int *)(pVVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_scaling_3d_scale","servers/rendering/renderer_viewport.cpp",0x3f6,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_msaa_3d(RID, RenderingServer::ViewportMSAA) */

void __thiscall
RendererViewport::viewport_set_msaa_3d(RendererViewport *this,ulong param_2,int param_3)

{
  Viewport *pVVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      pVVar1 = (Viewport *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
      if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
        if (*(int *)(pVVar1 + 0x74) != param_3) {
          *(int *)(pVVar1 + 0x74) = param_3;
          _configure_3d_render_buffers(this,pVVar1);
          return;
        }
        return;
      }
      if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_msaa_3d","servers/rendering/renderer_viewport.cpp",0x534,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_screen_space_aa(RID, RenderingServer::ViewportScreenSpaceAA) */

void __thiscall
RendererViewport::viewport_set_screen_space_aa(RendererViewport *this,ulong param_2,int param_3)

{
  Viewport *pVVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      pVVar1 = (Viewport *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
      if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
        if (*(int *)(pVVar1 + 0x78) != param_3) {
          *(int *)(pVVar1 + 0x78) = param_3;
          _configure_3d_render_buffers(this,pVVar1);
          return;
        }
        return;
      }
      if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_screen_space_aa","servers/rendering/renderer_viewport.cpp",0x551,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_use_taa(RID, bool) */

void __thiscall
RendererViewport::viewport_set_use_taa(RendererViewport *this,ulong param_2,Viewport param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  Viewport VVar5;
  long lVar6;
  long lVar7;
  Viewport *pVVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    pVVar8 = (Viewport *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar8 + 0x2e8) == (int)(param_2 >> 0x20)) {
      lVar6 = OS::get_singleton();
      local_38 = 0;
      plVar1 = (long *)(*(long *)(lVar6 + 0x68) + -0x10);
      if (*(long *)(lVar6 + 0x68) != 0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_00105fa2;
          LOCK();
          lVar7 = *plVar1;
          bVar9 = lVar3 == lVar7;
          if (bVar9) {
            *plVar1 = lVar3 + 1;
            lVar7 = lVar3;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar7 != -1) {
          local_38 = *(long *)(lVar6 + 0x68);
        }
      }
LAB_00105fa2:
      cVar4 = String::operator!=((String *)&local_38,"forward_plus");
      lVar6 = local_38;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      if (cVar4 == '\0') {
        if (pVVar8[0x7c] != param_3) {
          if (pVVar8[0x7c] == (Viewport)0x0) {
            uVar2 = *(uint *)(pVVar8 + 0x38);
            if ((uVar2 < 2) || (uVar2 == 3)) {
              VVar5 = pVVar8[0x7e];
              pVVar8[0x7c] = param_3;
              if ((*(int *)(pVVar8 + 0x260) != 0x19) && (param_3 != (Viewport)0x0)) {
LAB_00106027:
                if (VVar5 == (Viewport)0x0) {
                  *(int *)(this + 200) = *(int *)(this + 200) + 1;
                }
              }
            }
            else if ((uVar2 - 2 & 0xfffffffd) == 0) {
              pVVar8[0x7c] = param_3;
            }
            else {
              VVar5 = pVVar8[0x7e];
              pVVar8[0x7c] = param_3;
              if ((*(int *)(pVVar8 + 0x260) != 0x19) &&
                 ((param_3 != (Viewport)0x0 || (*(int *)(pVVar8 + 0x260) == 0x19))))
              goto LAB_00106027;
            }
          }
          else {
            pVVar8[0x7c] = param_3;
            if ((param_3 == (Viewport)0x0) &&
               ((((uVar2 = *(uint *)(pVVar8 + 0x38), uVar2 < 2 || (uVar2 == 3)) ||
                 ((uVar2 - 2 & 0xfffffffd) != 0)) &&
                ((*(int *)(pVVar8 + 0x260) != 0x19 && (pVVar8[0x7e] == (Viewport)0x0)))))) {
              *(int *)(this + 200) = *(int *)(this + 200) + -1;
            }
          }
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            _configure_3d_render_buffers(this,pVVar8);
            return;
          }
          goto LAB_001061fe;
        }
      }
      else {
        _err_print_error("viewport_set_use_taa","servers/rendering/renderer_viewport.cpp",0x55d,
                         "Condition \"OS::get_singleton()->get_current_rendering_method() != \"forward_plus\"\" is true."
                         ,"TAA is only available when using the Forward+ renderer.",1,0);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001061fe;
    }
    if (*(int *)(pVVar8 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("viewport_set_use_taa","servers/rendering/renderer_viewport.cpp",0x55c,
                     "Parameter \"viewport\" is null.",0,0);
    return;
  }
LAB_001061fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererViewport::viewport_set_use_debanding(RID, bool) */

void __thiscall
RendererViewport::viewport_set_use_debanding(RendererViewport *this,ulong param_2,Viewport param_3)

{
  Viewport *pVVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      pVVar1 = (Viewport *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
      if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
        if (pVVar1[0x7d] != param_3) {
          pVVar1[0x7d] = param_3;
          _configure_3d_render_buffers(this,pVVar1);
          return;
        }
        return;
      }
      if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_use_debanding","servers/rendering/renderer_viewport.cpp",0x570,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_force_motion_vectors(RID, bool) */

void __thiscall
RendererViewport::viewport_set_force_motion_vectors
          (RendererViewport *this,ulong param_2,Viewport param_3)

{
  uint uVar1;
  Viewport *pVVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    pVVar2 = (Viewport *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar2 + 0x2e8) == (int)(param_2 >> 0x20)) {
      if (pVVar2[0x7e] == param_3) {
        return;
      }
      if (((pVVar2[0x7c] == (Viewport)0x0) &&
          (((uVar1 = *(uint *)(pVVar2 + 0x38), uVar1 < 2 || (uVar1 == 3)) ||
           ((uVar1 - 2 & 0xfffffffd) != 0)))) && (*(int *)(pVVar2 + 0x260) != 0x19)) {
        pVVar2[0x7e] = param_3;
        *(uint *)(this + 200) = *(int *)(this + 200) + (-(uint)(param_3 == (Viewport)0x0) | 1);
        _configure_3d_render_buffers(this,pVVar2);
        return;
      }
      pVVar2[0x7e] = param_3;
      _configure_3d_render_buffers(this,pVVar2);
      return;
    }
    if (*(int *)(pVVar2 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_force_motion_vectors","servers/rendering/renderer_viewport.cpp",
                   0x57b,"Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_vrs_mode(RID, RenderingServer::ViewportVRSMode) */

void __thiscall
RendererViewport::viewport_set_vrs_mode(RendererViewport *this,ulong param_2,undefined4 param_3)

{
  Viewport *pVVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      pVVar1 = (Viewport *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
      if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x2c0))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(pVVar1 + 0x58),param_3);
        _configure_3d_render_buffers(this,pVVar1);
        return;
      }
      if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_set_vrs_mode","servers/rendering/renderer_viewport.cpp",0x616,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_set_vrs_texture(RID, RID) */

void __thiscall
RendererViewport::viewport_set_vrs_texture(RendererViewport *this,ulong param_2,undefined8 param_3)

{
  Viewport *pVVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    pVVar1 = (Viewport *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if (*(int *)(pVVar1 + 0x2e8) == (int)(param_2 >> 0x20)) {
      (**(code **)(*RenderingServerGlobals::texture_storage + 0x2e0))
                (RenderingServerGlobals::texture_storage,*(undefined8 *)(pVVar1 + 0x58),param_3);
      _configure_3d_render_buffers(this,pVVar1);
      return;
    }
    if (*(int *)(pVVar1 + 0x2e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("viewport_set_vrs_texture","servers/rendering/renderer_viewport.cpp",0x625,
                   "Parameter \"viewport\" is null.",0,0);
  return;
}



/* RendererViewport::viewport_attach_canvas(RID, RID) */

void __thiscall
RendererViewport::viewport_attach_canvas(RendererViewport *this,ulong param_2,ulong param_3)

{
  HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
  *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  ulong local_88;
  ulong local_80;
  RID local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_3;
  local_80 = param_2;
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x5c)) {
      lVar16 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
               *(long *)(*(long *)(this + 0x48) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
      if (*(int *)(lVar16 + 0x2e8) == (int)(param_2 >> 0x20)) {
        this_00 = (HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                   *)(lVar16 + 0x290);
        if ((*(long *)(lVar16 + 0x298) != 0) && (*(int *)(lVar16 + 700) != 0)) {
          uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(lVar16 + 0x2b8) * 4));
          lVar11 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar16 + 0x2b8) * 8);
          uVar9 = param_3 * 0x3ffff - 1;
          uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
          uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
          uVar9 = uVar9 >> 0x16 ^ uVar9;
          uVar15 = uVar9 & 0xffffffff;
          if ((int)uVar9 == 0) {
            uVar15 = 1;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar15 * lVar11;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar18;
          lVar14 = SUB168(auVar1 * auVar5,8);
          uVar17 = *(uint *)(*(long *)(lVar16 + 0x2a0) + lVar14 * 4);
          iVar13 = SUB164(auVar1 * auVar5,8);
          if (uVar17 != 0) {
            uVar19 = 0;
            do {
              if (((uint)uVar15 == uVar17) &&
                 (param_3 == *(ulong *)(*(long *)(*(long *)(lVar16 + 0x298) + lVar14 * 8) + 0x10)))
              {
                _err_print_error("viewport_attach_canvas","servers/rendering/renderer_viewport.cpp",
                                 0x4dd,"Condition \"viewport->canvas_map.has(p_canvas)\" is true.",0
                                 ,0);
                goto LAB_00106879;
              }
              uVar19 = uVar19 + 1;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = (ulong)(iVar13 + 1) * lVar11;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar18;
              lVar14 = SUB168(auVar2 * auVar6,8);
              uVar17 = *(uint *)(*(long *)(lVar16 + 0x2a0) + lVar14 * 4);
              iVar13 = SUB164(auVar2 * auVar6,8);
            } while ((uVar17 != 0) &&
                    (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar17 * lVar11, auVar7._8_8_ = 0,
                    auVar7._0_8_ = uVar18, auVar4._8_8_ = 0,
                    auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(lVar16 + 0x2b8) * 4) + iVar13)
                                          - SUB164(auVar3 * auVar7,8)) * lVar11, auVar8._8_8_ = 0,
                    auVar8._0_8_ = uVar18, uVar19 <= SUB164(auVar4 * auVar8,8)));
          }
        }
        if (param_3 != 0) {
          if ((uint)param_3 < *(uint *)(RenderingServerGlobals::canvas + 0xdc)) {
            lVar16 = ((param_3 & 0xffffffff) %
                     (ulong)*(uint *)(RenderingServerGlobals::canvas + 0xd8)) * 0xe0 +
                     *(long *)(*(long *)(RenderingServerGlobals::canvas + 200) +
                              ((param_3 & 0xffffffff) /
                              (ulong)*(uint *)(RenderingServerGlobals::canvas + 0xd8)) * 8);
            iVar13 = *(int *)(lVar16 + 0xd8);
            if (iVar13 == (int)(param_3 >> 0x20)) {
              HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_78);
              puVar10 = (undefined8 *)
                        HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                        ::operator[](this_00,(RID *)&local_88);
              local_68._0_10_ = SUB1610((undefined1  [16])0x0,0);
              local_68._10_2_ = 0x3f80;
              local_68._12_4_ = 0;
              auVar1 = local_68;
              local_68._12_4_ = 0;
              local_68._8_4_ = SUB124(local_68._0_12_,8);
              local_58 = ZEXT816(0x3f80000000000000);
              puVar10[4] = 0;
              *puVar10 = 0;
              puVar10[1] = local_68._8_8_;
              puVar10[2] = 0x3f80000000000000;
              puVar10[3] = 0;
              local_68 = auVar1;
              lVar11 = HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                       ::operator[](this_00,(RID *)&local_88);
              *(undefined4 *)(lVar11 + 0x20) = 0;
              lVar11 = HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                       ::operator[](this_00,(RID *)&local_88);
              *(undefined4 *)(lVar11 + 0x24) = 0;
              plVar12 = (long *)HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
                                ::operator[](this_00,(RID *)&local_88);
              *plVar12 = lVar16;
              goto LAB_00106879;
            }
            if (iVar13 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
        }
        _err_print_error("viewport_attach_canvas","servers/rendering/renderer_viewport.cpp",0x4df,
                         "Parameter \"canvas\" is null.",0,0);
        goto LAB_00106879;
      }
      if (*(int *)(lVar16 + 0x2e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("viewport_attach_canvas","servers/rendering/renderer_viewport.cpp",0x4db,
                   "Parameter \"viewport\" is null.",0,0);
LAB_00106879:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::viewport_initialize(RID) */

void __thiscall RendererViewport::viewport_initialize(RendererViewport *this,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  
  RID_Alloc<RendererViewport::Viewport,true>::initialize_rid
            ((RID_Alloc<RendererViewport::Viewport,true> *)(this + 0x40));
  plVar2 = RenderingServerGlobals::texture_storage;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    puVar5 = (ulong *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
                      *(long *)(*(long *)(this + 0x48) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8));
    if ((int)puVar5[0x5d] == (int)(param_2 >> 0x20)) {
      *puVar5 = param_2;
      uVar4 = (**(code **)(*plVar2 + 0x1e8))();
      plVar2 = RenderingServerGlobals::light_storage;
      puVar5[0xb] = uVar4;
      uVar4 = (**(code **)(*plVar2 + 0x388))();
      *(undefined1 *)(puVar5 + 0x42) = 0;
      puVar5[0x48] = uVar4;
      bVar3 = 0;
      if ((char)RendererCompositor::low_end == '\0') {
        bVar3 = (byte)puVar5[0x43] ^ 1;
      }
      *(byte *)((long)puVar5 + 0x4c) = bVar3;
      return;
    }
    if ((int)puVar5[0x5d] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,param_2 >> 0x20);
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::free(RID) */

undefined8 __thiscall RendererViewport::free(RendererViewport *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  Object *pOVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  pthread_mutex_t *ppVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  
  __mutex = (pthread_mutex_t *)(this + 0x70);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 == 0) {
    uVar10 = (uint)param_2;
    if (((*(uint *)(this + 0x5c) <= uVar10) || (param_2 >> 0x20 == 0x7fffffff)) ||
       (uVar7 = (uint)(param_2 >> 0x20),
       uVar7 != (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
                           *(long *)(*(long *)(this + 0x48) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8) +
                          0x2e8) & 0x7fffffff))) {
      pthread_mutex_unlock(__mutex);
      return 0;
    }
    ppVar12 = __mutex;
    pthread_mutex_unlock(__mutex);
    if ((param_2 == 0) || (*(uint *)(this + 0x5c) <= uVar10)) goto LAB_0010e06b;
    lVar14 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
             *(long *)(*(long *)(this + 0x48) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    uVar1 = *(uint *)(lVar14 + 0x2e8);
    if (uVar7 != uVar1) {
      if (uVar1 + 0x80000000 < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,ppVar12);
      }
      goto LAB_0010e06b;
    }
    (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f0))
              (RenderingServerGlobals::texture_storage,*(undefined8 *)(lVar14 + 0x58));
    (**(code **)(*RenderingServerGlobals::light_storage + 0x390))();
    if (*(long *)(lVar14 + 0x68) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        pOVar2 = *(Object **)(lVar14 + 0x68);
        cVar5 = predelete_handler(pOVar2);
        if (cVar5 != '\0') {
          if (*(code **)(*(long *)pOVar2 + 0x140) ==
              RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
            bVar16 = StringName::configured != '\0';
            *(code **)pOVar2 = RendererSceneRender::environment_get_canvas_max_layer;
            if ((((bVar16) &&
                 ((*(long *)(pOVar2 + 0x1e0) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')))) &&
                ((*(long *)(pOVar2 + 0x1c8) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')))) &&
               ((((*(long *)(pOVar2 + 0x1b0) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')) &&
                 ((*(long *)(pOVar2 + 0x198) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')))) &&
                (*(long *)(pOVar2 + 0x180) != 0)))) {
              StringName::unref();
            }
            *(undefined ***)pOVar2 = &PTR__initialize_classv_00114c10;
            Object::~Object(pOVar2);
          }
          else {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          }
          Memory::free_static(pOVar2,false);
        }
      }
      *(undefined8 *)(lVar14 + 0x68) = 0;
    }
    while (*(long *)(lVar14 + 0x2a8) != 0) {
      viewport_remove_canvas(this,param_2,*(undefined8 *)(*(long *)(lVar14 + 0x2a8) + 0x10));
    }
    viewport_set_scenario(this,param_2,0);
    lVar11 = *(long *)(this + 0xa0);
    if ((lVar11 != 0) && (lVar15 = *(long *)(lVar11 + -8), 0 < lVar15)) {
      lVar8 = 0;
      do {
        if (lVar14 == *(long *)(lVar11 + lVar8 * 8)) {
          if (lVar8 < lVar15) {
            CowData<RendererViewport::Viewport*>::_copy_on_write
                      ((CowData<RendererViewport::Viewport*> *)(this + 0xa0));
            lVar11 = *(long *)(this + 0xa0);
            if (lVar11 == 0) {
              lVar15 = -1;
            }
            else {
              lVar15 = *(long *)(lVar11 + -8) + -1;
              if (lVar8 < lVar15) {
                memmove((void *)(lVar11 + lVar8 * 8),(void *)(lVar11 + 8 + lVar8 * 8),
                        (lVar15 - lVar8) * 8);
              }
            }
            CowData<RendererViewport::Viewport*>::resize<false>
                      ((CowData<RendererViewport::Viewport*> *)(this + 0xa0),lVar15);
          }
          else {
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar8,lVar15,"p_index","size()"
                       ,"",false,false);
          }
          break;
        }
        lVar8 = lVar8 + 1;
      } while (lVar15 != lVar8);
    }
    this[0xb8] = (RendererViewport)0x1;
    if (*(char *)(lVar14 + 0x1f8) != '\0') {
      if (*(code **)(*RendererSceneOcclusionCull::singleton + 0x50) ==
          RendererSceneOcclusionCull::remove_buffer) {
        if (RendererSceneOcclusionCull::_print_warning()::first_print != '\0') {
          _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",
                           0xcd,"Occlusion culling is disabled at build-time.",0,1);
          RendererSceneOcclusionCull::_print_warning()::first_print = '\0';
        }
      }
      else {
        (**(code **)(*RendererSceneOcclusionCull::singleton + 0x50))
                  (RendererSceneOcclusionCull::singleton,param_2);
      }
    }
    if ((*(char *)(lVar14 + 0x7c) != '\0') ||
       ((((uVar7 = *(uint *)(lVar14 + 0x38), 1 < uVar7 && (uVar7 != 3)) &&
         ((uVar7 - 2 & 0xfffffffd) == 0)) ||
        ((*(int *)(lVar14 + 0x260) == 0x19 || (*(char *)(lVar14 + 0x7e) != '\0')))))) {
      *(int *)(this + 200) = *(int *)(this + 200) + -1;
    }
    iVar6 = pthread_mutex_lock(__mutex);
    if (iVar6 == 0) {
      if (*(uint *)(this + 0x5c) <= uVar10) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC163,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0)
        ;
        return 1;
      }
      uVar3 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58);
      lVar14 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0;
      lVar11 = lVar14 + *(long *)(*(long *)(this + 0x48) + uVar3 * 8);
      if ((int)*(uint *)(lVar11 + 0x2e8) < 0) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC163,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                         "Attempted to free an uninitialized or invalid RID",0,0);
        return 1;
      }
      if (uVar1 != *(uint *)(lVar11 + 0x2e8)) {
        pthread_mutex_unlock(__mutex);
        _err_print_error(&_LC163,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0)
        ;
        return 1;
      }
      pvVar13 = *(void **)(lVar11 + 0x298);
      if (pvVar13 != (void *)0x0) {
        if (*(int *)(lVar11 + 700) != 0) {
          uVar7 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar11 + 0x2b8) * 4);
          if (uVar7 == 0) {
            *(undefined4 *)(lVar11 + 700) = 0;
            *(undefined1 (*) [16])(lVar11 + 0x2a8) = (undefined1  [16])0x0;
          }
          else {
            lVar15 = 0;
            do {
              piVar9 = (int *)(*(long *)(lVar11 + 0x2a0) + lVar15);
              if (*piVar9 != 0) {
                *piVar9 = 0;
                Memory::free_static(*(void **)((long)pvVar13 + lVar15 * 2),false);
                pvVar13 = *(void **)(lVar11 + 0x298);
                *(undefined8 *)((long)pvVar13 + lVar15 * 2) = 0;
              }
              lVar15 = lVar15 + 4;
            } while ((ulong)uVar7 << 2 != lVar15);
            *(undefined4 *)(lVar11 + 700) = 0;
            *(undefined1 (*) [16])(lVar11 + 0x2a8) = (undefined1  [16])0x0;
            if (pvVar13 == (void *)0x0) goto LAB_00106dbd;
          }
        }
        Memory::free_static(pvVar13,false);
        Memory::free_static(*(void **)(lVar11 + 0x2a0),false);
      }
LAB_00106dbd:
      Projection::~Projection((Projection *)(lVar11 + 0x1a0));
      Projection::~Projection((Projection *)(lVar11 + 0x160));
      Projection::~Projection((Projection *)(lVar11 + 0xc0));
      if ((*(long *)(lVar11 + 0x68) != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
        pOVar2 = *(Object **)(lVar11 + 0x68);
        cVar5 = predelete_handler(pOVar2);
        if (cVar5 != '\0') {
          if (*(code **)(*(long *)pOVar2 + 0x140) ==
              RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
            bVar16 = StringName::configured != '\0';
            *(code **)pOVar2 = RendererSceneRender::environment_get_canvas_max_layer;
            if ((((bVar16) &&
                 ((*(long *)(pOVar2 + 0x1e0) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')))) &&
                ((*(long *)(pOVar2 + 0x1c8) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')))) &&
               ((((*(long *)(pOVar2 + 0x1b0) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')) &&
                 ((*(long *)(pOVar2 + 0x198) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')))) &&
                (*(long *)(pOVar2 + 0x180) != 0)))) {
              StringName::unref();
            }
            *(undefined ***)pOVar2 = &PTR__initialize_classv_00114c10;
            Object::~Object(pOVar2);
          }
          else {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          }
          Memory::free_static(pOVar2,false);
        }
      }
      lVar11 = *(long *)(this + 0x50);
      *(undefined4 *)(*(long *)(*(long *)(this + 0x48) + uVar3 * 8) + 0x2e8 + lVar14) = 0xffffffff;
      uVar7 = *(int *)(this + 0x60) - 1;
      *(uint *)(this + 0x60) = uVar7;
      *(uint *)(*(long *)(lVar11 + ((ulong)uVar7 / (ulong)*(uint *)(this + 0x58)) * 8) +
               ((ulong)uVar7 % (ulong)*(uint *)(this + 0x58)) * 4) = uVar10;
      pthread_mutex_unlock(__mutex);
      return 1;
    }
  }
  std::__throw_system_error(iVar6);
LAB_0010e06b:
  (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f0))
            (RenderingServerGlobals::texture_storage,_DAT_00000058);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* RendererViewport::_sort_active_viewports() */

void RendererViewport::_sort_active_viewports(void)

{
  undefined1 (*pauVar1) [16];
  CowData<RendererViewport::Viewport*> *pCVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  ulong uVar13;
  long in_RSI;
  long in_RDI;
  long lVar14;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  lVar9 = *(long *)(in_RSI + 0xa0);
  if (lVar9 == 0) {
    return;
  }
  uVar12 = *(int *)(lVar9 + -8) - 1;
  if ((int)uVar12 < 0) {
    return;
  }
  uVar13 = (ulong)uVar12;
  pauVar11 = (undefined1 (*) [16])0x0;
  while (lVar9 != 0) {
    lVar14 = *(long *)(lVar9 + -8);
    if (lVar14 <= (long)uVar13) goto LAB_00107313;
    lVar9 = *(long *)(lVar9 + uVar13 * 8);
    if (*(long *)(lVar9 + 8) == 0) {
      if (pauVar11 == (undefined1 (*) [16])0x0) {
        pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar11[1] = 0;
        *pauVar11 = (undefined1  [16])0x0;
      }
      plVar8 = (long *)operator_new(0x20,DefaultAllocator::alloc);
      lVar14 = *(long *)(*pauVar11 + 8);
      plVar8[1] = 0;
      *plVar8 = lVar9;
      plVar8[2] = lVar14;
      plVar8[3] = (long)pauVar11;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar8;
      }
      lVar14 = *(long *)*pauVar11;
      *(long **)(*pauVar11 + 8) = plVar8;
      if (lVar14 == 0) {
        *(long **)*pauVar11 = plVar8;
      }
      lVar14 = *(long *)(in_RDI + 8);
      *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      pCVar2 = (CowData<RendererViewport::Viewport*> *)(in_RDI + 8);
      if (lVar14 == 0) {
        iVar7 = CowData<RendererViewport::Viewport*>::resize<false>(pCVar2,1);
        if (iVar7 == 0) {
          CowData<RendererViewport::Viewport*>::_copy_on_write(pCVar2);
          plVar8 = *(long **)(in_RDI + 8);
          goto LAB_00107286;
        }
LAB_00107450:
        _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                         "Condition \"err\" is true. Returning: err",0,0);
      }
      else {
        lVar3 = *(long *)(lVar14 + -8);
        lVar14 = lVar3 + 1;
        if (lVar14 < 1) {
          _err_print_index_error
                    ("insert","./core/templates/cowdata.h",0xf0,0,lVar14,"p_pos","new_size","",false
                     ,false);
        }
        else {
          iVar7 = CowData<RendererViewport::Viewport*>::resize<false>(pCVar2,lVar14);
          if (iVar7 != 0) goto LAB_00107450;
          CowData<RendererViewport::Viewport*>::_copy_on_write(pCVar2);
          plVar8 = *(long **)(in_RDI + 8);
          if (lVar3 != 0) {
            memmove(plVar8 + 1,plVar8,lVar3 * 8);
          }
LAB_00107286:
          *plVar8 = lVar9;
        }
      }
    }
    uVar13 = uVar13 - 1;
    if ((int)uVar13 < 0) {
LAB_00107358:
      if (pauVar11 == (undefined1 (*) [16])0x0) {
        return;
      }
      do {
        if (*(int *)pauVar11[1] == 0) goto LAB_00107368;
        puVar5 = *(undefined8 **)*pauVar11;
        plVar8 = (long *)*puVar5;
        if ((undefined1 (*) [16])puVar5[3] == pauVar11) {
          lVar9 = puVar5[1];
          lVar14 = puVar5[2];
          *(long *)*pauVar11 = lVar9;
          if (puVar5 == *(undefined8 **)(*pauVar11 + 8)) {
            *(long *)(*pauVar11 + 8) = lVar14;
          }
          if (lVar14 != 0) {
            *(long *)(lVar14 + 8) = lVar9;
            lVar9 = puVar5[1];
          }
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x10) = lVar14;
          }
          Memory::free_static(puVar5,false);
          pauVar1 = pauVar11 + 1;
          *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
          iVar7 = *(int *)*pauVar1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          iVar7 = *(int *)pauVar11[1];
        }
        if (iVar7 == 0) {
          Memory::free_static(pauVar11,false);
          lVar9 = *(long *)(in_RSI + 0xa0);
          if (lVar9 == 0) {
            return;
          }
          iVar7 = *(int *)(lVar9 + -8) + -1;
          if (iVar7 < 0) {
            return;
          }
          pauVar11 = (undefined1 (*) [16])0x0;
          break;
        }
        lVar9 = *(long *)(in_RSI + 0xa0);
      } while ((lVar9 == 0) || (iVar7 = *(int *)(lVar9 + -8) + -1, iVar7 < 0));
      uVar13 = (ulong)iVar7;
      do {
        if (lVar9 == 0) goto LAB_00107310;
        lVar14 = *(long *)(lVar9 + -8);
        if (lVar14 <= (long)uVar13) goto LAB_00107313;
        lVar9 = *(long *)(lVar9 + uVar13 * 8);
        if (*(long *)(lVar9 + 8) == *plVar8) {
          if (pauVar11 == (undefined1 (*) [16])0x0) {
            pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar11[1] = 0;
            *pauVar11 = (undefined1  [16])0x0;
          }
          else {
            for (plVar10 = *(long **)*pauVar11; plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]
                ) {
              if (lVar9 == *plVar10) goto LAB_00107520;
            }
          }
          plVar10 = (long *)operator_new(0x20,DefaultAllocator::alloc);
          lVar14 = *(long *)(*pauVar11 + 8);
          plVar10[1] = 0;
          *plVar10 = lVar9;
          plVar10[2] = lVar14;
          plVar10[3] = (long)pauVar11;
          if (lVar14 != 0) {
            *(long **)(lVar14 + 8) = plVar10;
          }
          lVar14 = *(long *)*pauVar11;
          *(long **)(*pauVar11 + 8) = plVar10;
          if (lVar14 == 0) {
            *(long **)*pauVar11 = plVar10;
          }
          lVar14 = *(long *)(in_RDI + 8);
          *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
          pCVar2 = (CowData<RendererViewport::Viewport*> *)(in_RDI + 8);
          if (lVar14 == 0) {
            iVar7 = CowData<RendererViewport::Viewport*>::resize<false>(pCVar2,1);
            if (iVar7 == 0) {
              CowData<RendererViewport::Viewport*>::_copy_on_write(pCVar2);
              plVar10 = *(long **)(in_RDI + 8);
              goto LAB_0010762a;
            }
LAB_00107770:
            _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                             "Condition \"err\" is true. Returning: err",0,0);
          }
          else {
            lVar3 = *(long *)(lVar14 + -8);
            lVar14 = lVar3 + 1;
            if (lVar14 < 1) {
              _err_print_index_error
                        ("insert","./core/templates/cowdata.h",0xf0,0,lVar14,"p_pos","new_size","",
                         false,false);
            }
            else {
              iVar7 = CowData<RendererViewport::Viewport*>::resize<false>(pCVar2,lVar14);
              if (iVar7 != 0) goto LAB_00107770;
              CowData<RendererViewport::Viewport*>::_copy_on_write(pCVar2);
              plVar10 = *(long **)(in_RDI + 8);
              if (lVar3 != 0) {
                memmove(plVar10 + 1,plVar10,lVar3 * 8);
              }
LAB_0010762a:
              *plVar10 = lVar9;
            }
          }
        }
LAB_00107520:
        uVar13 = uVar13 - 1;
        if ((int)uVar13 < 0) goto LAB_00107358;
        lVar9 = *(long *)(in_RSI + 0xa0);
      } while( true );
    }
    lVar9 = *(long *)(in_RSI + 0xa0);
  }
LAB_00107310:
  lVar14 = 0;
LAB_00107313:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar13,lVar14,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
  while( true ) {
    if (pauVar11 == *(undefined1 (**) [16])((long)pvVar4 + 0x18)) {
      lVar9 = *(long *)((long)pvVar4 + 8);
      lVar14 = *(long *)((long)pvVar4 + 0x10);
      *(long *)*pauVar11 = lVar9;
      if (pvVar4 == *(void **)(*pauVar11 + 8)) {
        *(long *)(*pauVar11 + 8) = lVar14;
      }
      if (lVar14 != 0) {
        *(long *)(lVar14 + 8) = lVar9;
        lVar9 = *(long *)((long)pvVar4 + 8);
      }
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x10) = lVar14;
      }
      Memory::free_static(pvVar4,false);
      pauVar1 = pauVar11 + 1;
      *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
      iVar7 = *(int *)*pauVar1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      iVar7 = *(int *)pauVar11[1];
    }
    if (iVar7 == 0) break;
LAB_00107368:
    pvVar4 = *(void **)*pauVar11;
    if (pvVar4 == (void *)0x0) {
      if (*(int *)pauVar11[1] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
  }
  Memory::free_static(pauVar11,false);
  return;
}



/* RendererViewport::viewport_set_active(RID, bool) */

ulong __thiscall
RendererViewport::viewport_set_active(RendererViewport *this,ulong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x5c))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
            *(long *)(*(long *)(this + 0x48) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
    uVar1 = *(uint *)(lVar4 + 0x2e8);
    uVar7 = (ulong)uVar1;
    if (uVar1 == (uint)(param_2 >> 0x20)) {
      lVar6 = *(long *)(this + 0xa0);
      if (param_3 == '\0') {
        if ((lVar6 != 0) && (lVar5 = *(long *)(lVar6 + -8), 0 < lVar5)) {
          lVar3 = 0;
          do {
            if (lVar4 == *(long *)(lVar6 + lVar3 * 8)) {
              if (lVar3 < lVar5) {
                CowData<RendererViewport::Viewport*>::_copy_on_write
                          ((CowData<RendererViewport::Viewport*> *)(this + 0xa0));
                lVar4 = *(long *)(this + 0xa0);
                if (lVar4 == 0) {
                  lVar6 = -1;
                }
                else {
                  lVar6 = *(long *)(lVar4 + -8) + -1;
                  if (lVar3 < lVar6) {
                    memmove((void *)(lVar4 + lVar3 * 8),(void *)(lVar4 + 8 + lVar3 * 8),
                            (lVar6 - lVar3) * 8);
                  }
                }
                uVar7 = CowData<RendererViewport::Viewport*>::resize<false>
                                  ((CowData<RendererViewport::Viewport*> *)(this + 0xa0),lVar6);
              }
              else {
                uVar7 = _err_print_index_error
                                  ("remove_at","./core/templates/cowdata.h",0xe4,lVar3,lVar5,
                                   "p_index","size()","",false,false);
              }
              break;
            }
            lVar3 = lVar3 + 1;
          } while (lVar5 != lVar3);
        }
      }
      else {
        if (lVar6 == 0) {
          lVar5 = 1;
        }
        else {
          lVar5 = *(long *)(lVar6 + -8);
          if (0 < lVar5) {
            lVar3 = 0;
            do {
              if (lVar4 == *(long *)(lVar6 + lVar3 * 8)) {
                uVar7 = 0;
                _err_print_error("viewport_set_active","servers/rendering/renderer_viewport.cpp",
                                 0x425,"Condition \"active_viewports.has(viewport)\" is true.",
                                 "Can\'t make active a Viewport that is already active.",0);
                return uVar7;
              }
              lVar3 = lVar3 + 1;
            } while (lVar5 != lVar3);
          }
          lVar5 = lVar5 + 1;
        }
        *(undefined1 *)(lVar4 + 0x1f9) = 1;
        iVar2 = CowData<RendererViewport::Viewport*>::resize<false>
                          ((CowData<RendererViewport::Viewport*> *)(this + 0xa0),lVar5);
        if (iVar2 == 0) {
          if (*(long *)(this + 0xa0) == 0) {
            lVar5 = -1;
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(*(long *)(this + 0xa0) + -8);
            lVar5 = lVar6 + -1;
            if (-1 < lVar5) {
              CowData<RendererViewport::Viewport*>::_copy_on_write
                        ((CowData<RendererViewport::Viewport*> *)(this + 0xa0));
              uVar7 = *(ulong *)(this + 0xa0);
              *(long *)(uVar7 + lVar5 * 8) = lVar4;
              goto LAB_00107940;
            }
          }
          uVar7 = _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar6,"p_index","size()",
                             "",false,false);
        }
        else {
          uVar7 = _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
        }
      }
LAB_00107940:
      this[0xb8] = (RendererViewport)0x1;
      return uVar7;
    }
    if (uVar1 + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar7 = _err_print_error("viewport_set_active","servers/rendering/renderer_viewport.cpp",0x422,
                           "Parameter \"viewport\" is null.",0,0);
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::_draw_viewport(RendererViewport::Viewport*) */

void __thiscall RendererViewport::_draw_viewport(RendererViewport *this,Viewport *param_1)

{
  uint uVar1;
  Vector2 *pVVar2;
  CanvasData *pCVar3;
  CanvasData *pCVar4;
  code *pcVar5;
  Object *pOVar6;
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
  long *plVar17;
  char cVar18;
  byte bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  undefined8 uVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  byte *extraout_RDX;
  byte *extraout_RDX_00;
  byte *extraout_RDX_01;
  long lVar31;
  byte *extraout_RDX_02;
  byte *extraout_RDX_03;
  byte *extraout_RDX_04;
  byte *extraout_RDX_05;
  byte *extraout_RDX_06;
  byte *extraout_RDX_07;
  byte *extraout_RDX_08;
  byte *extraout_RDX_09;
  byte *extraout_RDX_10;
  uint uVar32;
  int iVar33;
  long *plVar34;
  byte *pbVar35;
  uint uVar36;
  int iVar37;
  Object *pOVar38;
  float *pfVar39;
  long in_FS_OFFSET;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  float fVar43;
  undefined4 uVar44;
  undefined8 extraout_XMM0_Qb;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  byte *local_260;
  byte *local_258;
  byte *local_230;
  int local_218;
  byte *local_208;
  byte *local_1c8;
  byte *local_1c0;
  char local_1ad;
  int local_1ac;
  byte *local_1a8;
  char local_18d;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  CanvasData *local_160;
  byte *local_158;
  ulong local_150;
  Object *local_148;
  byte *local_140;
  undefined4 local_138;
  float local_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  Viewport local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0x219] != (Viewport)0x0) {
    itos((long)&local_148);
    operator+((char *)&local_158,(String *)"vp_begin_");
    pOVar6 = local_148;
    if (local_148 != (Object *)0x0) {
      LOCK();
      plVar34 = (long *)((long)local_148 + -0x10);
      *plVar34 = *plVar34 + -1;
      UNLOCK();
      if (*plVar34 == 0) {
        local_148 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar6 + -0x10),false);
      }
    }
    (**(code **)(*RenderingServerGlobals::utilities + 0x68))
              (RenderingServerGlobals::utilities,&local_158);
    puVar29 = (undefined8 *)
              HashMap<String,RID,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RID>>>
              ::operator[]((HashMap<String,RID,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RID>>>
                            *)(this + 8),(String *)&local_158);
    pbVar25 = local_158;
    *puVar29 = *(undefined8 *)param_1;
    if (local_158 != (byte *)0x0) {
      LOCK();
      pbVar26 = local_158 + -0x10;
      *(long *)pbVar26 = *(long *)pbVar26 + -1;
      UNLOCK();
      if (*(long *)pbVar26 == 0) {
        local_158 = (byte *)0x0;
        Memory::free_static(pbVar25 + -0x10,false);
      }
    }
  }
  lVar23 = OS::get_singleton();
  local_148 = (Object *)0x0;
  plVar34 = (long *)(*(long *)(lVar23 + 0x68) + -0x10);
  if (*(long *)(lVar23 + 0x68) != 0) {
    do {
      lVar30 = *plVar34;
      if (lVar30 == 0) goto LAB_00107b9b;
      LOCK();
      lVar28 = *plVar34;
      bVar40 = lVar30 == lVar28;
      if (bVar40) {
        *plVar34 = lVar30 + 1;
        lVar28 = lVar30;
      }
      UNLOCK();
    } while (!bVar40);
    if (lVar28 != -1) {
      local_148 = *(Object **)(lVar23 + 0x68);
    }
  }
LAB_00107b9b:
  cVar18 = String::operator==((String *)&local_148,"gl_compatibility");
  pOVar6 = local_148;
  if (local_148 != (Object *)0x0) {
    LOCK();
    pOVar38 = local_148 + -0x10;
    *(long *)pOVar38 = *(long *)pOVar38 + -1;
    UNLOCK();
    if (*(long *)pOVar38 == 0) {
      local_148 = (Object *)0x0;
      Memory::free_static(pOVar6 + -0x10,false);
    }
  }
  if (cVar18 != '\0') {
    (**(code **)(*DisplayServer::singleton + 0x640))
              (DisplayServer::singleton,*(undefined4 *)(param_1 + 0x1fc));
  }
  plVar34 = RenderingServerGlobals::scene;
  bVar40 = false;
  if (param_1[0x211] == (Viewport)0x0) {
    bVar40 = *(int *)(param_1 + 0x24) == 1;
  }
  lVar23 = *RenderingServerGlobals::scene;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x2d0) = (undefined1  [16])0x0;
  cVar18 = (**(code **)(lVar23 + 0xb0))(plVar34,*(undefined8 *)(param_1 + 0x30));
  if (cVar18 == '\0') {
    local_18d = (**(code **)(*RenderingServerGlobals::scene + 0x58))
                          (RenderingServerGlobals::scene,*(undefined8 *)(param_1 + 0x28));
    if (local_18d == '\0') {
      local_18d = '\0';
      bVar41 = false;
      local_1ac = 0;
      local_1ad = '\0';
    }
    else {
      if (param_1[0x218] == (Viewport)0x0) {
        local_1ad = '\0';
        local_1ac = 0;
        lVar23 = *(long *)(param_1 + 0x68);
        bVar41 = false;
        cVar18 = local_18d;
        goto joined_r0x00109d8f;
      }
      local_1ad = '\0';
      bVar41 = false;
      local_18d = '\0';
      local_1ac = 0;
    }
  }
  else {
    uVar24 = (**(code **)(*RenderingServerGlobals::scene + 0xb8))
                       (RenderingServerGlobals::scene,*(undefined8 *)(param_1 + 0x30));
    if (*(code **)(*RenderingServerGlobals::scene + 0x628) == RendererSceneCull::is_environment) {
      local_1ad = RendererSceneRender::is_environment(RenderingServerGlobals::scene[1],uVar24);
    }
    else {
      local_1ad = (**(code **)(*RenderingServerGlobals::scene + 0x628))
                            (RenderingServerGlobals::scene,uVar24);
    }
    cVar20 = local_1ad;
    if (local_1ad == '\0') {
      local_1ac = 0;
      bVar41 = false;
    }
    else if ((bVar40) && (cVar18 = viewport_is_environment_disabled(this,param_1), cVar18 == '\0'))
    {
      if (*(code **)(*RenderingServerGlobals::scene + 0x2c0) ==
          RendererSceneCull::environment_get_background) {
        iVar21 = RendererSceneRender::environment_get_background
                           (RenderingServerGlobals::scene[1],uVar24);
      }
      else {
        iVar21 = (**(code **)(*RenderingServerGlobals::scene + 0x2c0))
                           (RenderingServerGlobals::scene,uVar24);
      }
      local_1ad = iVar21 == 3;
      cVar18 = !(bool)local_1ad;
      bVar41 = false;
      if (*(code **)(*RenderingServerGlobals::scene + 0x2f8) ==
          RendererSceneCull::environment_get_canvas_max_layer) {
        local_1ac = RendererSceneRender::environment_get_canvas_max_layer
                              (RenderingServerGlobals::scene[1],uVar24);
      }
      else {
        local_1ac = (**(code **)(*RenderingServerGlobals::scene + 0x2f8))
                              (RenderingServerGlobals::scene,uVar24);
      }
    }
    else {
      if (*(code **)(*RenderingServerGlobals::scene + 0x2c0) ==
          RendererSceneCull::environment_get_background) {
        iVar21 = RendererSceneRender::environment_get_background
                           (RenderingServerGlobals::scene[1],uVar24);
      }
      else {
        iVar21 = (**(code **)(*RenderingServerGlobals::scene + 0x2c0))
                           (RenderingServerGlobals::scene,uVar24);
      }
      bVar41 = iVar21 == 3;
      local_1ac = 0;
      local_1ad = '\0';
      cVar18 = cVar20;
    }
    local_18d = (**(code **)(*RenderingServerGlobals::scene + 0x58))
                          (RenderingServerGlobals::scene,*(undefined8 *)(param_1 + 0x28));
    if ((local_18d == '\0') || (param_1[0x218] != (Viewport)0x0)) {
      cVar18 = '\0';
      local_18d = '\0';
      if (local_1ad == '\0') goto LAB_00107d39;
      lVar23 = *(long *)(param_1 + 0x68);
    }
    else {
      lVar23 = *(long *)(param_1 + 0x68);
    }
joined_r0x00109d8f:
    if (lVar23 == 0) {
      if (*(code **)(*RenderingServerGlobals::scene + 0x658) ==
          RendererSceneCull::render_buffers_create) {
        (**(code **)(*(long *)RenderingServerGlobals::scene[1] + 0x158))((String *)&local_148);
      }
      else {
        (**(code **)(*RenderingServerGlobals::scene + 0x658))((String *)&local_148);
      }
      pOVar6 = *(Object **)(param_1 + 0x68);
      pOVar38 = pOVar6;
      if (local_148 == pOVar6) {
LAB_00109d3b:
        if (((pOVar38 != (Object *)0x0) &&
            (cVar20 = RefCounted::unreference(), pOVar6 = local_148, cVar20 != '\0')) &&
           (cVar20 = predelete_handler(local_148), cVar20 != '\0')) {
          if (*(code **)(*(long *)pOVar6 + 0x140) ==
              RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
            bVar42 = StringName::configured != '\0';
            *(code **)pOVar6 = RendererSceneRender::environment_get_canvas_max_layer;
            if (((bVar42) &&
                ((*(long *)(pOVar6 + 0x1e0) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')))) &&
               (((*(long *)(pOVar6 + 0x1c8) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')) &&
                (((*(long *)(pOVar6 + 0x1b0) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')) &&
                 (((*(long *)(pOVar6 + 0x198) == 0 ||
                   (StringName::unref(), StringName::configured != '\0')) &&
                  (*(long *)(pOVar6 + 0x180) != 0)))))))) {
              StringName::unref();
            }
            *(undefined ***)pOVar6 = &PTR__initialize_classv_00114c10;
            Object::~Object(pOVar6);
          }
          else {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          }
          Memory::free_static(pOVar6,false);
        }
      }
      else {
        *(Object **)(param_1 + 0x68) = local_148;
        if (local_148 != (Object *)0x0) {
          cVar20 = RefCounted::reference();
          if (cVar20 == '\0') {
            *(undefined8 *)(param_1 + 0x68) = 0;
          }
          pOVar38 = local_148;
          if (pOVar6 != (Object *)0x0) goto LAB_00109d23;
          goto LAB_00109d3b;
        }
        if (pOVar6 != (Object *)0x0) {
LAB_00109d23:
          cVar20 = RefCounted::unreference();
          pOVar38 = local_148;
          if ((cVar20 != '\0') &&
             (cVar20 = predelete_handler(pOVar6), pOVar38 = local_148, cVar20 != '\0')) {
            if (*(code **)(*(long *)pOVar6 + 0x140) ==
                RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
              bVar42 = StringName::configured != '\0';
              *(code **)pOVar6 = RendererSceneRender::environment_get_canvas_max_layer;
              if ((((bVar42) &&
                   ((*(long *)(pOVar6 + 0x1e0) == 0 ||
                    (StringName::unref(), StringName::configured != '\0')))) &&
                  ((*(long *)(pOVar6 + 0x1c8) == 0 ||
                   (StringName::unref(), StringName::configured != '\0')))) &&
                 ((((*(long *)(pOVar6 + 0x1b0) == 0 ||
                    (StringName::unref(), StringName::configured != '\0')) &&
                   ((*(long *)(pOVar6 + 0x198) == 0 ||
                    (StringName::unref(), StringName::configured != '\0')))) &&
                  (*(long *)(pOVar6 + 0x180) != 0)))) {
                StringName::unref();
              }
              *(undefined ***)pOVar6 = &PTR__initialize_classv_00114c10;
              Object::~Object(pOVar6);
            }
            else {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            }
            Memory::free_static(pOVar6,false);
            pOVar38 = local_148;
          }
          goto LAB_00109d3b;
        }
      }
      _configure_3d_render_buffers(this,param_1);
    }
  }
LAB_00107d39:
  if (param_1[0x270] == (Viewport)0x0) {
    local_118 = *(undefined1 (*) [16])(RenderingServerGlobals::texture_storage + 1);
  }
  else {
    local_118 = (undefined1  [16])0x0;
  }
  if ((*(int *)(param_1 + 0x264) != 1) &&
     ((**(code **)(*RenderingServerGlobals::texture_storage + 0x280))
                (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58),local_118),
     *(int *)(param_1 + 0x264) == 2)) {
    *(undefined4 *)(param_1 + 0x264) = 1;
  }
  if (cVar18 != '\0') {
    if (bVar41) {
      (**(code **)(*RenderingServerGlobals::texture_storage + 0x2a0))
                (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
    }
    _draw_3d(this,param_1);
  }
  if (!bVar40) goto LAB_00108ebd;
  local_140 = (byte *)&_GlobalNilClass::_nil;
  local_148 = (Object *)0x0;
  local_138 = 0;
  local_108 = 0;
  local_100 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20),
                       (float)(int)*(undefined8 *)(param_1 + 0x1c));
  if (param_1[0x24d] == (Viewport)0x0) {
    (**(code **)(*RenderingServerGlobals::texture_storage + 0x2b8))
              (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58),0);
    local_208 = extraout_RDX_02;
  }
  else {
    local_258 = (byte *)0x0;
    _local_78 = (**(code **)(*RenderingServerGlobals::texture_storage + 0x2b0))
                          (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
    local_a8 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_78);
    plVar34 = *(long **)(param_1 + 0x2a8);
    if (plVar34 != (long *)0x0) {
      local_258 = (byte *)0x0;
      do {
        pCVar4 = (CanvasData *)plVar34[3];
        _canvas_get_transform
                  ((Viewport *)local_78,(Canvas *)param_1,pCVar4,(Vector2 *)(plVar34 + 3));
        iVar21 = *(int *)(pCVar4 + 0x9c);
        if (iVar21 != 0) {
          puVar29 = *(undefined8 **)(pCVar4 + 0x78);
          lVar23 = 0;
          pbVar25 = (byte *)*puVar29;
          bVar19 = *pbVar25;
          if ((bVar19 & 1) == 0) goto LAB_00107f78;
          do {
            if ((*(char *)(RenderingServerGlobals::canvas + 0x318) == '\0') || ((bVar19 & 4) == 0))
            {
              Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_78);
              auVar7._8_8_ = uStack_180;
              auVar7._0_8_ = local_188;
              *(undefined1 (*) [16])(pbVar25 + 0x60) = auVar7;
              *(undefined8 *)(pbVar25 + 0x70) = local_178;
            }
            else {
              lVar30 = Engine::get_singleton();
              TransformInterpolator::interpolate_transform_2d
                        ((Transform2D *)(pbVar25 + 0x48),(Transform2D *)(pbVar25 + 0x30),
                         (Transform2D *)(pbVar25 + 0x60),(float)*(double *)(lVar30 + 0x60));
              Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_78);
              auVar12._8_8_ = uStack_180;
              auVar12._0_8_ = local_188;
              *(undefined1 (*) [16])(pbVar25 + 0x60) = auVar12;
              *(undefined8 *)(pbVar25 + 0x70) = local_178;
            }
            cVar18 = Rect2::intersects_transformed
                               ((Transform2D *)local_a8,(Rect2 *)(pbVar25 + 0x60));
            if (cVar18 != '\0') {
              *(byte **)(pbVar25 + 0x88) = local_258;
              local_258 = pbVar25;
            }
LAB_00107f78:
            iVar22 = (int)lVar23 + 1;
            lVar30 = lVar23;
            while( true ) {
              if (iVar21 <= iVar22) goto LAB_00107fa5;
              lVar23 = lVar30 + 1;
              pbVar25 = (byte *)puVar29[lVar23];
              bVar19 = *pbVar25;
              if ((bVar19 & 1) != 0) break;
              iVar22 = (int)lVar30 + 2;
              lVar30 = lVar23;
            }
          } while( true );
        }
LAB_00107fa5:
        plVar34 = (long *)*plVar34;
      } while (plVar34 != (long *)0x0);
    }
    (**(code **)(*RenderingServerGlobals::canvas_render + 0x40))
              (RenderingServerGlobals::canvas_render,*(undefined8 *)(param_1 + 0x58),local_258);
    (**(code **)(*RenderingServerGlobals::texture_storage + 0x2b8))
              (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58),1);
    param_1[0x24d] = (Viewport)0x0;
    local_208 = extraout_RDX;
  }
  plVar34 = RenderingServerGlobals::utilities;
  _local_f8 = ZEXT816(0);
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_160 = (CanvasData *)0x0;
    local_158 = (byte *)0x10c6ff;
    local_150 = 0xe;
    String::parse_latin1((StrRange *)&local_160);
    (*pcVar5)(plVar34);
    pCVar4 = local_160;
    local_208 = extraout_RDX_07;
    if (local_160 != (CanvasData *)0x0) {
      LOCK();
      pCVar3 = local_160 + -0x10;
      *(long *)pCVar3 = *(long *)pCVar3 + -1;
      UNLOCK();
      if (*(long *)pCVar3 == 0) {
        local_160 = (CanvasData *)0x0;
        Memory::free_static(pCVar4 + -0x10,false);
        local_208 = extraout_RDX_08;
      }
    }
  }
  plVar34 = *(long **)(param_1 + 0x2a8);
  if (plVar34 == (long *)0x0) {
    local_1a8 = (byte *)0x0;
    local_1c0 = (byte *)0x0;
  }
  else {
    iVar21 = 0;
    local_1c8 = (byte *)0x0;
    local_1c0 = (byte *)0x0;
    local_1a8 = (byte *)0x0;
    local_230 = (byte *)0x0;
    do {
      pCVar4 = (CanvasData *)plVar34[3];
      pVVar2 = (Vector2 *)(plVar34 + 3);
      _canvas_get_transform((Viewport *)local_a8,(Canvas *)param_1,pCVar4,pVVar2);
      iVar22 = *(int *)(pCVar4 + 0x4c);
      if (iVar22 != 0) {
        lVar23 = *(long *)(pCVar4 + 0x28);
        lVar30 = 0;
        while( true ) {
          pbVar25 = *(byte **)(lVar23 + lVar30 * 8);
          if (((*pbVar25 & 1) != 0) && (*(long *)(pbVar25 + 0x78) != 0)) {
            uVar24 = (**(code **)(*RenderingServerGlobals::texture_storage + 0x128))
                               (RenderingServerGlobals::texture_storage,
                                *(undefined8 *)(pbVar25 + 0x78));
            fVar45 = (float)uVar24 * *(float *)(pbVar25 + 0x4c);
            fVar48 = *(float *)(pbVar25 + 0x4c) * (float)((ulong)uVar24 >> 0x20);
            uStack_c0 = CONCAT44(fVar48,fVar45);
            local_c8 = CONCAT44(*(float *)(pbVar25 + 0x84) - _LC87 * fVar48,
                                *(float *)(pbVar25 + 0x80) - _LC87 * fVar45);
            if ((*(char *)(RenderingServerGlobals::canvas + 0x318) != '\0') && ((*pbVar25 & 4) != 0)
               ) {
              lVar28 = Engine::get_singleton();
              TransformInterpolator::interpolate_transform_2d
                        ((Transform2D *)(pbVar25 + 0x2c),(Transform2D *)(pbVar25 + 0x14),
                         (Transform2D *)(pbVar25 + 0xc0),(float)*(double *)(lVar28 + 0x60));
            }
            Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_a8);
            *(undefined8 *)(pbVar25 + 0xc0) = local_188;
            *(undefined8 *)(pbVar25 + 200) = uStack_180;
            *(undefined8 *)(pbVar25 + 0xd0) = local_178;
            fVar45 = uStack_c0._4_4_ * *(float *)(pbVar25 + 200);
            fVar51 = uStack_c0._4_4_ * *(float *)(pbVar25 + 0xcc);
            fVar48 = *(float *)(pbVar25 + 200) * local_c8._4_4_ +
                     (float)local_c8 * *(float *)(pbVar25 + 0xc0) + *(float *)(pbVar25 + 0xd0);
            fVar53 = (float)uStack_c0 * *(float *)(pbVar25 + 0xc0) + fVar48;
            fVar46 = *(float *)(pbVar25 + 0xc4) * (float)local_c8 +
                     *(float *)(pbVar25 + 0xcc) * local_c8._4_4_ + *(float *)(pbVar25 + 0xd4);
            fVar47 = fVar53;
            if (fVar53 <= fVar48 + 0.0) {
              fVar47 = fVar48 + 0.0;
            }
            fVar43 = fVar53;
            if (fVar48 <= fVar53) {
              fVar43 = fVar48;
            }
            fVar55 = *(float *)(pbVar25 + 0xc4) * (float)uStack_c0 + fVar46;
            fVar48 = fVar48 + fVar45;
            fVar57 = fVar55;
            if (fVar55 <= fVar46 + 0.0) {
              fVar57 = fVar46 + 0.0;
            }
            fVar49 = fVar55;
            if (fVar46 <= fVar55) {
              fVar49 = fVar46;
            }
            fVar46 = fVar46 + fVar51;
            if ((fVar47 - fVar43 < 0.0) || (fVar57 - fVar49 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar56 = (fVar47 - fVar43) + fVar43;
            fVar57 = (fVar57 - fVar49) + fVar49;
            fVar47 = fVar48;
            if (fVar43 <= fVar48) {
              fVar47 = fVar43;
            }
            fVar45 = fVar45 + fVar53;
            fVar53 = fVar46;
            if (fVar49 <= fVar46) {
              fVar53 = fVar49;
            }
            fVar51 = fVar51 + fVar55;
            if (fVar48 <= fVar56) {
              fVar48 = fVar56;
            }
            if (fVar46 <= fVar57) {
              fVar46 = fVar57;
            }
            if ((fVar48 - fVar47 < 0.0) || (fVar46 - fVar53 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar43 = (fVar48 - fVar47) + fVar47;
            fVar46 = (fVar46 - fVar53) + fVar53;
            fVar48 = fVar45;
            if (fVar47 <= fVar45) {
              fVar48 = fVar47;
            }
            if (fVar45 <= fVar43) {
              fVar45 = fVar43;
            }
            fVar47 = fVar51;
            if (fVar51 <= fVar46) {
              fVar47 = fVar46;
            }
            if (fVar53 <= fVar51) {
              fVar51 = fVar53;
            }
            fVar45 = fVar45 - fVar48;
            *(ulong *)(pbVar25 + 0xb0) = CONCAT44(fVar51,fVar48);
            *(ulong *)(pbVar25 + 0xb8) = CONCAT44(fVar47 - fVar51,fVar45);
            if (((((float)local_100 < 0.0) || (local_100._4_4_ < 0.0)) || (fVar45 < 0.0)) ||
               (fVar47 - fVar51 < 0.0)) {
              _err_print_error("intersects","./core/math/rect2.h",0x39,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
              fVar48 = *(float *)(pbVar25 + 0xb0);
              fVar45 = *(float *)(pbVar25 + 0xb8);
            }
            if (((float)local_108 < fVar45 + fVar48) &&
               (fVar48 < (float)local_108 + (float)local_100)) {
              if ((local_108._4_4_ < *(float *)(pbVar25 + 0xbc) + *(float *)(pbVar25 + 0xb4)) &&
                 (*(float *)(pbVar25 + 0xb4) < local_108._4_4_ + local_100._4_4_)) {
                *(byte **)(pbVar25 + 0x100) = local_1a8;
                uStack_70 = 0x3f80000000000000;
                local_78 = (undefined1  [8])0x3f800000;
                local_68 = 0;
                Transform2D::scale((Vector2 *)local_78);
                local_68 = local_c8;
                Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)(pbVar25 + 0xc0));
                auVar8._8_8_ = uStack_180;
                auVar8._0_8_ = local_188;
                *(undefined1 (*) [16])(pbVar25 + 0xdc) = auVar8;
                *(undefined8 *)(pbVar25 + 0xec) = local_178;
                local_1a8 = pbVar25;
                if (pbVar25[0x90] != 0) {
                  *(byte **)(pbVar25 + 0xf8) = local_230;
                  if (local_230 == (byte *)0x0) {
                    _local_f8 = *(undefined1 (*) [16])(pbVar25 + 0xb0);
                  }
                  else {
                    if (((fStack_f0 < 0.0) || (fStack_ec < 0.0)) ||
                       ((fVar45 = *(float *)(pbVar25 + 0xb8), fVar45 < 0.0 ||
                        (fVar48 = *(float *)(pbVar25 + 0xbc), fVar48 < 0.0)))) {
                      _err_print_error("merge","./core/math/rect2.h",0xa8,
                                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                       ,0,0);
                      fVar48 = *(float *)(pbVar25 + 0xbc);
                      fVar45 = *(float *)(pbVar25 + 0xb8);
                    }
                    fVar46 = *(float *)(pbVar25 + 0xb4);
                    fVar47 = *(float *)(pbVar25 + 0xb0);
                    fVar51 = fVar46;
                    if ((float)local_f8._4_4_ <= fVar46) {
                      fVar51 = (float)local_f8._4_4_;
                    }
                    fVar53 = fVar47;
                    if ((float)local_f8._0_4_ <= fVar47) {
                      fVar53 = (float)local_f8._0_4_;
                    }
                    fVar43 = fVar46 + fVar48;
                    if (fVar46 + fVar48 <= (float)local_f8._4_4_ + fStack_ec) {
                      fVar43 = (float)local_f8._4_4_ + fStack_ec;
                    }
                    fVar48 = fVar47 + fVar45;
                    if (fVar47 + fVar45 <= (float)local_f8._0_4_ + fStack_f0) {
                      fVar48 = (float)local_f8._0_4_ + fStack_f0;
                    }
                    local_f8._4_4_ = fVar51;
                    local_f8._0_4_ = fVar53;
                    fStack_ec = fVar43 - fVar51;
                    fStack_f0 = fVar48 - fVar53;
                  }
                  uVar44 = Vector2::length();
                  *(undefined4 *)(pbVar25 + 0xd8) = uVar44;
                  local_230 = pbVar25;
                }
              }
            }
          }
          if (iVar22 <= (int)lVar30 + 1) break;
          lVar30 = lVar30 + 1;
        }
      }
      iVar22 = *(int *)(pCVar4 + 0x74);
      if (iVar22 != 0) {
        lVar23 = *(long *)(pCVar4 + 0x50);
        lVar30 = 0;
        do {
          pbVar25 = *(byte **)(lVar23 + lVar30 * 8);
          if ((*pbVar25 & 1) != 0) {
            *(byte **)(pbVar25 + 0x100) = local_1c0;
            if ((*(char *)(RenderingServerGlobals::canvas + 0x318) != '\0') && ((*pbVar25 & 4) != 0)
               ) {
              lVar28 = Engine::get_singleton();
              TransformInterpolator::interpolate_transform_2d
                        ((Transform2D *)(pbVar25 + 0x2c),(Transform2D *)(pbVar25 + 0x14),
                         (Transform2D *)(pbVar25 + 0xc0),(float)*(double *)(lVar28 + 0x60));
            }
            Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_a8);
            auVar9._8_8_ = uStack_180;
            auVar9._0_8_ = local_188;
            *(undefined1 (*) [16])(pbVar25 + 0xc0) = auVar9;
            *(undefined8 *)(pbVar25 + 0xd0) = local_178;
            pbVar25[0xd0] = 0;
            pbVar25[0xd1] = 0;
            pbVar25[0xd2] = 0;
            pbVar25[0xd3] = 0;
            pbVar25[0xd4] = 0;
            pbVar25[0xd5] = 0;
            pbVar25[0xd6] = 0;
            pbVar25[0xd7] = 0;
            if (pbVar25[0x90] != 0) {
              *(byte **)(pbVar25 + 0xf8) = local_1c8;
              local_1c8 = pbVar25;
            }
            iVar21 = iVar21 + 1;
            local_1c0 = pbVar25;
            if (iVar21 == 8) break;
          }
          if (iVar22 <= (int)lVar30 + 1) break;
          lVar30 = lVar30 + 1;
        } while( true );
      }
      uVar32 = *(uint *)(plVar34 + 7);
      local_150 = plVar34[2];
      uVar36 = -uVar32;
      if (0 < (int)uVar32) {
        uVar36 = uVar32;
      }
      local_158 = (byte *)(((ulong)uVar36 << 0x20) * ((long)(int)uVar32 >> 0x3f | 1U) +
                          (long)*(int *)((long)plVar34 + 0x3c));
      if (local_148 != (Object *)0x0) {
        pbVar25 = *(byte **)(local_148 + 0x10);
joined_r0x001086df:
        if (local_140 != pbVar25) {
          do {
            auVar58._8_8_ = local_158;
            auVar58._0_8_ = pbVar25;
            if (local_158 == *(byte **)(pbVar25 + 0x30)) {
              if (*(ulong *)(pbVar25 + 0x38) <= local_150) goto code_r0x00108702;
            }
            else if ((long)*(byte **)(pbVar25 + 0x30) <= (long)local_158) goto LAB_00108707;
            pbVar25 = *(byte **)(pbVar25 + 0x10);
            if (pbVar25 == local_140) break;
          } while( true );
        }
        goto LAB_00108710;
      }
      local_148 = (Object *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined1 (*) [16])(local_148 + 0x20) = (undefined1  [16])0x0;
      *(undefined8 *)(local_148 + 0x30) = 0;
      *(undefined8 *)(local_148 + 0x38) = 0;
      *(undefined8 *)(local_148 + 0x40) = 0;
      *(undefined4 *)local_148 = 1;
      *(byte **)(local_148 + 8) = local_140;
      *(byte **)(local_148 + 0x10) = local_140;
      *(byte **)(local_148 + 0x18) = local_140;
LAB_00108710:
      local_160 = (CanvasData *)0x0;
      auVar58 = RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
                ::_insert((RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
                           *)&local_148,(CanvasKey *)&local_158,&local_160);
LAB_00108739:
      local_208 = auVar58._8_8_;
      plVar34 = (long *)*plVar34;
      *(Vector2 **)(auVar58._0_8_ + 0x40) = pVVar2;
      plVar17 = RenderingServerGlobals::utilities;
    } while (plVar34 != (long *)0x0);
    iVar21 = 0;
    if (local_230 != (byte *)0x0) {
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_158 = (byte *)0x10c73d;
        local_160 = (CanvasData *)0x0;
        local_150 = 0x1d;
        String::parse_latin1((StrRange *)&local_160);
        (*pcVar5)(plVar17);
        pCVar4 = local_160;
        if (local_160 != (CanvasData *)0x0) {
          LOCK();
          pCVar3 = local_160 + -0x10;
          *(long *)pCVar3 = *(long *)pCVar3 + -1;
          UNLOCK();
          if (*(long *)pCVar3 == 0) {
            local_160 = (CanvasData *)0x0;
            Memory::free_static(pCVar4 + -0x10,false);
          }
        }
        plVar34 = RenderingServerGlobals::utilities;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_158 = (byte *)0x10c75b;
          local_160 = (CanvasData *)0x0;
          local_150 = 0x15;
          String::parse_latin1((StrRange *)&local_160);
          (*pcVar5)(plVar34);
          pCVar4 = local_160;
          if (local_160 != (CanvasData *)0x0) {
            LOCK();
            pCVar3 = local_160 + -0x10;
            *(long *)pCVar3 = *(long *)pCVar3 + -1;
            UNLOCK();
            if (*(long *)pCVar3 == 0) {
              local_160 = (CanvasData *)0x0;
              Memory::free_static(pCVar4 + -0x10,false);
            }
          }
        }
      }
      local_260 = (byte *)0x0;
      plVar34 = *(long **)(param_1 + 0x2a8);
      if (plVar34 != (long *)0x0) {
        do {
          pCVar4 = (CanvasData *)plVar34[3];
          _canvas_get_transform
                    ((Viewport *)local_78,(Canvas *)param_1,pCVar4,(Vector2 *)(plVar34 + 3));
          iVar21 = *(int *)(pCVar4 + 0x9c);
          if (iVar21 != 0) {
            puVar29 = *(undefined8 **)(pCVar4 + 0x78);
            lVar23 = 0;
            pbVar25 = (byte *)*puVar29;
            bVar19 = *pbVar25;
            if ((bVar19 & 1) == 0) goto LAB_00108870;
            do {
              if ((*(char *)(RenderingServerGlobals::canvas + 0x318) == '\0') || ((bVar19 & 4) == 0)
                 ) {
                Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_78);
                auVar10._8_8_ = uStack_180;
                auVar10._0_8_ = local_188;
                *(undefined1 (*) [16])(pbVar25 + 0x60) = auVar10;
                *(undefined8 *)(pbVar25 + 0x70) = local_178;
              }
              else {
                lVar30 = Engine::get_singleton();
                TransformInterpolator::interpolate_transform_2d
                          ((Transform2D *)(pbVar25 + 0x48),(Transform2D *)(pbVar25 + 0x30),
                           (Transform2D *)(pbVar25 + 0x60),(float)*(double *)(lVar30 + 0x60));
                Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_78);
                auVar11._8_8_ = uStack_180;
                auVar11._0_8_ = local_188;
                *(undefined1 (*) [16])(pbVar25 + 0x60) = auVar11;
                *(undefined8 *)(pbVar25 + 0x70) = local_178;
              }
              cVar18 = Rect2::intersects_transformed
                                 ((Transform2D *)local_f8,(Rect2 *)(pbVar25 + 0x60));
              if (cVar18 != '\0') {
                *(byte **)(pbVar25 + 0x88) = local_260;
                local_260 = pbVar25;
              }
LAB_00108870:
              iVar22 = (int)lVar23 + 1;
              lVar30 = lVar23;
              while( true ) {
                if (iVar21 <= iVar22) goto LAB_0010889d;
                lVar23 = lVar30 + 1;
                pbVar25 = (byte *)puVar29[lVar23];
                bVar19 = *pbVar25;
                if ((bVar19 & 1) != 0) break;
                iVar22 = (int)lVar30 + 2;
                lVar30 = lVar23;
              }
            } while( true );
          }
LAB_0010889d:
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      iVar22 = 0;
      do {
        plVar34 = RenderingServerGlobals::utilities;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_160 = (CanvasData *)0x0;
          local_158 = (byte *)0x10c771;
          local_150 = 0x1a;
          String::parse_latin1((StrRange *)&local_160);
          (*pcVar5)(plVar34);
          pCVar4 = local_160;
          if (local_160 != (CanvasData *)0x0) {
            LOCK();
            pCVar3 = local_160 + -0x10;
            *(long *)pCVar3 = *(long *)pCVar3 + -1;
            UNLOCK();
            if (*(long *)pCVar3 == 0) {
              local_160 = (CanvasData *)0x0;
              Memory::free_static(pCVar4 + -0x10,false);
            }
          }
        }
        plVar34 = RenderingServerGlobals::canvas_render;
        uVar44 = *(undefined4 *)(local_230 + 100);
        iVar21 = iVar22 + 1;
        pcVar5 = *(code **)(*RenderingServerGlobals::canvas_render + 0x30);
        Transform2D::affine_inverse();
        (*pcVar5)(plVar34,*(undefined8 *)(local_230 + 0x118),iVar22,(Viewport *)local_78,uVar44,
                  local_260,local_230 + 0xb0);
        plVar34 = RenderingServerGlobals::utilities;
        local_230 = *(byte **)(local_230 + 0xf8);
        iVar22 = iVar21;
      } while (local_230 != (byte *)0x0);
      local_208 = extraout_RDX_00;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_160 = (CanvasData *)0x0;
        local_158 = (byte *)0x10c78c;
        local_150 = 0x1d;
        String::parse_latin1((StrRange *)&local_160);
        (*pcVar5)(plVar34);
        pCVar4 = local_160;
        local_208 = extraout_RDX_05;
        if (local_160 != (CanvasData *)0x0) {
          LOCK();
          pCVar3 = local_160 + -0x10;
          *(long *)pCVar3 = *(long *)pCVar3 + -1;
          UNLOCK();
          if (*(long *)pCVar3 == 0) {
            local_160 = (CanvasData *)0x0;
            Memory::free_static(pCVar4 + -0x10,false);
            local_208 = extraout_RDX_06;
          }
        }
      }
    }
    if (local_1c8 != (byte *)0x0) {
      do {
        uVar24 = Vector2::normalized();
        fVar45 = (float)uVar24;
        fVar48 = (float)((ulong)uVar24 >> 0x20);
        auVar50._0_4_ = (float)((uint)_LC201 ^ (uint)fVar45);
        auVar50._4_4_ = (float)(_LC201._4_4_ ^ (uint)fVar48);
        auVar50._8_4_ = (int)extraout_XMM0_Qb;
        auVar50._12_4_ = (int)((ulong)extraout_XMM0_Qb >> 0x20);
        auVar52._4_4_ = *(undefined4 *)(local_1c8 + 0x68);
        auVar52._0_4_ = *(undefined4 *)(local_1c8 + 0x68);
        auVar52._8_8_ = 0;
        if (0.0 < fVar45) {
          fVar46 = 0.0;
          if (_LC202 <= (double)fVar45) goto LAB_001098f7;
        }
        else {
          fVar46 = 0.0;
          if ((_LC202 <= (double)auVar50._0_4_) && (fVar46 = _LC84, 0.0 <= fVar45)) {
LAB_001098f7:
            fVar46 = _LC186;
          }
        }
        if (0.0 < fVar48) {
          fVar45 = 0.0;
          if (_LC202 <= (double)fVar48) goto LAB_001098d1;
        }
        else {
          fVar45 = 0.0;
          if ((_LC202 <= (double)auVar50._4_4_) && (fVar45 = _LC84, 0.0 <= fVar48)) {
LAB_001098d1:
            fVar45 = _LC186;
          }
        }
        uVar32 = 0;
        pfVar39 = (float *)&_draw_viewport(RendererViewport::Viewport*)::signs;
        uVar36 = 0;
        local_a8._8_8_ = 0;
        local_a8._0_8_ = 0;
        local_98 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        do {
          if (_draw_viewport(RendererViewport::Viewport*)::signs == '\0') {
            iVar22 = __cxa_guard_acquire(&_draw_viewport(RendererViewport::Viewport*)::signs);
            auVar50._8_8_ = 0;
            auVar52._8_8_ = 0;
            if (iVar22 != 0) {
              _signs = _LC86;
              _DAT_0010bda8 = _UNK_001151b8;
              _DAT_0010bdb0 = __LC204;
              __cxa_guard_release(&_draw_viewport(RendererViewport::Viewport*)::signs);
              auVar52._8_8_ = 0;
              auVar50._8_8_ = 0;
            }
          }
          plVar34 = RenderingServerGlobals::utilities;
          fVar48 = (float)*(undefined8 *)pfVar39 * (float)local_100 + (float)local_108;
          fVar47 = (float)((ulong)*(undefined8 *)pfVar39 >> 0x20) *
                   (float)((ulong)local_100 >> 0x20) + (float)((ulong)local_108 >> 0x20);
          uVar24 = CONCAT44(fVar47,fVar48);
          bVar40 = (*pfVar39 + *pfVar39) - _LC84 == fVar46;
          uVar36 = uVar36 + 1;
          uVar1 = uVar32 + 1;
          if ((pfVar39[1] + pfVar39[1]) - _LC84 == fVar45) {
            if (bVar40) {
              *(ulong *)(local_a8 + (long)(int)uVar32 * 8) =
                   CONCAT44(auVar52._4_4_ * auVar50._4_4_ + fVar47,
                            auVar52._0_4_ * auVar50._0_4_ + fVar48);
            }
            else {
LAB_001091c5:
              uVar54 = CONCAT44(auVar52._4_4_ * auVar50._4_4_ + fVar47,
                                auVar52._0_4_ * auVar50._0_4_ + fVar48);
              bVar40 = ((float)(&_draw_viewport(RendererViewport::Viewport*)::signs)
                               [(ulong)(uVar36 & 3) * 2] +
                       (float)(&_draw_viewport(RendererViewport::Viewport*)::signs)
                              [(ulong)(uVar36 & 3) * 2]) - _LC84 == fVar46;
              if (!bVar40) {
                fVar48 = (*(float *)(&DAT_0010bda4 + (ulong)(uVar36 & 3) * 8) +
                         *(float *)(&DAT_0010bda4 + (ulong)(uVar36 & 3) * 8)) - _LC84;
                if (fVar48 == fVar45) {
                  bVar40 = !NAN(fVar48) && !NAN(fVar45);
                }
                if (!bVar40) {
                  *(undefined8 *)(local_a8 + (long)(int)uVar32 * 8) = uVar54;
                  if (fVar46 != 0.0 || fVar45 != 0.0) {
                    *(undefined8 *)((Viewport *)local_a8 + (long)(int)uVar1 * 8) = uVar24;
                    uVar1 = uVar32 + 2;
                  }
                  goto LAB_00109260;
                }
              }
              if (fVar46 != 0.0 || fVar45 != 0.0) {
                *(undefined8 *)((Viewport *)local_a8 + (long)(int)uVar32 * 8) = uVar24;
                uVar32 = uVar1;
              }
              *(undefined8 *)(local_a8 + (long)(int)uVar32 * 8) = uVar54;
              uVar1 = uVar32 + 1;
            }
          }
          else {
            if (bVar40) goto LAB_001091c5;
            *(undefined8 *)((Viewport *)local_a8 + (long)(int)uVar32 * 8) = uVar24;
          }
LAB_00109260:
          uVar32 = uVar1;
          pfVar39 = pfVar39 + 2;
        } while (uVar36 != 4);
        uStack_70 = 0;
        local_78 = (undefined1  [8])0x0;
        local_68 = 0;
        local_58 = (undefined1  [16])0x0;
        if ((char)RenderingServerGlobals::utilities[1] != '\0') {
          pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
          local_160 = (CanvasData *)0x0;
          local_150 = 0x23;
          local_158 = (byte *)0x10d690;
          String::parse_latin1((StrRange *)&local_160);
          (*pcVar5)(plVar34);
          pCVar4 = local_160;
          if (local_160 != (CanvasData *)0x0) {
            LOCK();
            pCVar3 = local_160 + -0x10;
            *(long *)pCVar3 = *(long *)pCVar3 + -1;
            UNLOCK();
            if (*(long *)pCVar3 == 0) {
              local_160 = (CanvasData *)0x0;
              Memory::free_static(pCVar4 + -0x10,false);
            }
          }
        }
        local_208 = (byte *)0x0;
        plVar34 = *(long **)(param_1 + 0x2a8);
        if (plVar34 != (long *)0x0) {
          do {
            pCVar4 = (CanvasData *)plVar34[3];
            _canvas_get_transform(local_e8,(Canvas *)param_1,pCVar4,(Vector2 *)(plVar34 + 3));
            iVar22 = *(int *)(pCVar4 + 0x9c);
            if (iVar22 != 0) {
              lVar23 = *(long *)(pCVar4 + 0x78);
              lVar30 = 0;
              do {
                pbVar25 = *(byte **)(lVar23 + lVar30 * 8);
                if ((*pbVar25 & 1) != 0) {
                  if ((*(char *)(RenderingServerGlobals::canvas + 0x318) == '\0') ||
                     ((*pbVar25 & 4) == 0)) {
                    Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_e8);
                    auVar13._8_8_ = uStack_180;
                    auVar13._0_8_ = local_188;
                    *(undefined1 (*) [16])(pbVar25 + 0x60) = auVar13;
                    *(undefined8 *)(pbVar25 + 0x70) = local_178;
                  }
                  else {
                    lVar28 = Engine::get_singleton();
                    TransformInterpolator::interpolate_transform_2d
                              ((Transform2D *)(pbVar25 + 0x48),(Transform2D *)(pbVar25 + 0x30),
                               (Transform2D *)(pbVar25 + 0x60),(float)*(double *)(lVar28 + 0x60));
                    Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)local_e8);
                    auVar14._8_8_ = uStack_180;
                    auVar14._0_8_ = local_188;
                    *(undefined1 (*) [16])(pbVar25 + 0x60) = auVar14;
                    *(undefined8 *)(pbVar25 + 0x70) = local_178;
                  }
                  Transform2D::affine_inverse();
                  if (0 < (int)uVar32) {
                    lVar28 = 0;
                    do {
                      uVar24 = *(undefined8 *)((Viewport *)local_a8 + lVar28 * 8);
                      fVar45 = (float)uVar24;
                      fVar48 = (float)((ulong)uVar24 >> 0x20);
                      *(ulong *)(local_78 + lVar28 * 8) =
                           CONCAT44(fVar48 * (float)((ulong)uStack_c0 >> 0x20) +
                                    fVar45 * local_c8._4_4_ + (float)((ulong)local_b8 >> 0x20),
                                    fVar48 * (float)uStack_c0 + fVar45 * (float)local_c8 +
                                    (float)local_b8);
                      lVar28 = lVar28 + 1;
                    } while ((uint)lVar28 < uVar32);
                    lVar28 = 0;
                    fVar46 = (float)*(undefined8 *)(pbVar25 + 0x20);
                    fVar47 = (float)((ulong)*(undefined8 *)(pbVar25 + 0x20) >> 0x20);
                    fVar45 = (float)*(undefined8 *)(pbVar25 + 0x28);
                    fVar48 = (float)((ulong)*(undefined8 *)(pbVar25 + 0x28) >> 0x20);
                    local_218 = 0;
                    iVar33 = 0;
                    local_130 = _LC87 * fVar45 + fVar46;
                    fStack_12c = _UNK_00115164 * fVar48 + fVar47;
                    iVar37 = uVar32 - 1;
                    do {
                      lVar31 = (long)iVar37;
                      iVar37 = (int)lVar28;
                      uVar24 = *(undefined8 *)(local_78 + lVar31 * 8);
                      local_128 = CONCAT44((float)((ulong)*(undefined8 *)(local_78 + lVar28 * 8) >>
                                                  0x20) - (float)((ulong)uVar24 >> 0x20),
                                           (float)*(undefined8 *)(local_78 + lVar28 * 8) -
                                           (float)uVar24);
                      fVar51 = (float)Vector2::length();
                      if (fVar51 != 0.0) {
                        local_120 = CONCAT44((uint)(float)local_128 ^ __LC207,local_128._4_4_);
                        fVar53 = (float)Vector2::dot((Vector2 *)&local_120);
                        fVar43 = (float)Vector2::dot((Vector2 *)&local_120);
                        if (fVar53 - fVar43 < 0.0) {
                          local_218 = local_218 + 1;
                        }
                        else {
                          iVar33 = iVar33 + 1;
                        }
                        fVar53 = *(float *)(local_78 + lVar31 * 8);
                        fVar57 = _LC84 / (local_128._4_4_ / fVar51);
                        fVar43 = (*(float *)(pbVar25 + 0x24) - *(float *)(local_78 + lVar31 * 8 + 4)
                                 ) * fVar57;
                        fVar56 = _LC84 / ((float)local_128 / fVar51);
                        fVar57 = ((fVar47 + fVar48) - *(float *)(local_78 + lVar31 * 8 + 4)) *
                                 fVar57;
                        fVar49 = (*(float *)(pbVar25 + 0x20) - fVar53) * fVar56;
                        fVar56 = ((fVar46 + fVar45) - fVar53) * fVar56;
                        fVar55 = fVar56;
                        fVar53 = fVar56;
                        if (fVar57 <= fVar43) {
                          if (fVar56 <= fVar49) {
                            if (fVar43 <= fVar57) {
                              fVar43 = fVar57;
                            }
                            fVar55 = fVar43;
                            if (fVar56 <= fVar57) {
                              fVar53 = fVar57;
                            }
                            goto LAB_0010968c;
                          }
                          fVar53 = fVar57;
                          if (fVar57 < fVar49) {
                            fVar53 = fVar49;
                          }
                          if (fVar57 < fVar43) {
                            fVar57 = fVar43;
                          }
                        }
                        else if (fVar49 < fVar56) {
                          fVar53 = fVar49;
                          if (fVar49 <= fVar43) {
                            fVar53 = fVar43;
                          }
                        }
                        else {
                          fVar55 = fVar57;
                          if (fVar56 <= fVar43) {
                            fVar53 = fVar43;
                          }
LAB_0010968c:
                          fVar57 = fVar55;
                          fVar55 = fVar49;
                          if (fVar49 <= fVar56) {
                            fVar55 = fVar56;
                          }
                        }
                        if (fVar57 <= fVar55) {
                          fVar55 = fVar57;
                        }
                        if (((0.0 <= fVar55) && (fVar53 <= fVar55)) && (fVar53 < fVar51))
                        goto LAB_001096bc;
                      }
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != (int)uVar32);
                    if (local_218 * iVar33 != 0) goto LAB_00109356;
                  }
LAB_001096bc:
                  *(byte **)(pbVar25 + 0x88) = local_208;
                  local_208 = pbVar25;
                }
LAB_00109356:
                if (iVar22 <= (int)lVar30 + 1) break;
                lVar30 = lVar30 + 1;
              } while( true );
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        (**(code **)(*RenderingServerGlobals::canvas_render + 0x38))
                  (RenderingServerGlobals::canvas_render,*(undefined8 *)(local_1c8 + 0x118),iVar21,
                   local_1c8 + 0xc0,*(undefined4 *)(local_1c8 + 100));
        plVar34 = RenderingServerGlobals::utilities;
        local_1c8 = *(byte **)(local_1c8 + 0xf8);
        iVar21 = iVar21 + 1;
      } while (local_1c8 != (byte *)0x0);
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar5 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        local_160 = (CanvasData *)0x0;
        local_158 = (byte *)0x10d6b8;
        local_150 = 0x23;
        String::parse_latin1((StrRange *)&local_160);
        (*pcVar5)(plVar34);
        pCVar4 = local_160;
        auVar16._8_8_ = uStack_70;
        auVar16._0_8_ = local_78;
        auVar15._8_8_ = local_a8._8_8_;
        auVar15._0_8_ = local_a8._0_8_;
        local_208 = extraout_RDX_09;
        if (local_160 != (CanvasData *)0x0) {
          LOCK();
          pCVar3 = local_160 + -0x10;
          *(long *)pCVar3 = *(long *)pCVar3 + -1;
          UNLOCK();
          local_a8 = auVar15;
          _local_78 = auVar16;
          if (*(long *)pCVar3 == 0) {
            local_160 = (CanvasData *)0x0;
            Memory::free_static(pCVar4 + -0x10,false);
            local_208 = extraout_RDX_10;
          }
        }
      }
    }
  }
  pbVar25 = local_140;
  if (local_1ad == '\0') {
    if ((local_148 != (Object *)0x0) &&
       (pbVar26 = *(byte **)(local_148 + 0x10), *(byte **)(local_148 + 0x10) != local_140))
    goto LAB_00108d1c;
  }
  else {
    if ((local_148 != (Object *)0x0) &&
       (pbVar26 = *(byte **)(local_148 + 0x10), pbVar35 = pbVar26, local_208 = local_140,
       pbVar26 != local_140)) {
      do {
        pbVar27 = pbVar35;
        pbVar35 = *(byte **)(pbVar27 + 0x10);
      } while (local_140 != pbVar35);
      if (local_1ac < *(int *)(pbVar27 + 0x34)) {
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x2a0))
                  (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
        if (local_18d == '\0') {
          (**(code **)(*RenderingServerGlobals::scene + 0x688))
                    (RenderingServerGlobals::scene,param_1 + 0x68,*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x240));
        }
        else {
          _draw_3d(this,param_1);
        }
        if ((local_148 == (Object *)0x0) || (*(byte **)(local_148 + 0x10) == local_140))
        goto LAB_00108e9c;
        local_1ad = '\0';
        pbVar26 = *(byte **)(local_148 + 0x10);
        pbVar25 = local_140;
      }
LAB_00108d1c:
      do {
        pbVar35 = pbVar26;
        pbVar26 = *(byte **)(pbVar35 + 0x10);
      } while (pbVar25 != *(byte **)(pbVar35 + 0x10));
      do {
        pCVar4 = *(CanvasData **)*(Vector2 **)(pbVar35 + 0x40);
        _canvas_get_transform
                  ((Viewport *)local_78,(Canvas *)param_1,pCVar4,*(Vector2 **)(pbVar35 + 0x40));
        if (local_1a8 == (byte *)0x0) {
          pbVar25 = (byte *)0x0;
          if (local_1c0 == (byte *)0x0) goto LAB_00109e6e;
LAB_00108dc9:
          pbVar26 = (byte *)0x0;
          iVar21 = *(int *)(*(long *)(pbVar35 + 0x40) + 0x20);
          pbVar27 = local_1c0;
          do {
            if ((*(int *)(pbVar27 + 0x58) <= iVar21) && (iVar21 <= *(int *)(pbVar27 + 0x5c))) {
              *(byte **)(pbVar27 + 0x108) = pbVar26;
              pbVar26 = pbVar27;
            }
            pbVar27 = *(byte **)(pbVar27 + 0x100);
          } while (pbVar27 != (byte *)0x0);
        }
        else {
          pbVar25 = (byte *)0x0;
          iVar21 = *(int *)(*(long *)(pbVar35 + 0x40) + 0x20);
          pbVar26 = local_1a8;
          do {
            if ((*(int *)(pbVar26 + 0x58) <= iVar21) && (iVar21 <= *(int *)(pbVar26 + 0x5c))) {
              *(byte **)(pbVar26 + 0x108) = pbVar25;
              pbVar25 = pbVar26;
            }
            pbVar26 = *(byte **)(pbVar26 + 0x100);
          } while (pbVar26 != (byte *)0x0);
          if (local_1c0 != (byte *)0x0) goto LAB_00108dc9;
LAB_00109e6e:
          pbVar26 = (byte *)0x0;
        }
        RendererCanvasCull::render_canvas
                  (RenderingServerGlobals::canvas,*(undefined8 *)(param_1 + 0x58),pCVar4,
                   (Viewport *)local_78,pbVar25,pbVar26,&local_108,*(undefined4 *)(param_1 + 0x268),
                   *(undefined4 *)(param_1 + 0x26c),param_1[0x21a],param_1[0x21b],
                   *(undefined4 *)(param_1 + 0x274),param_1 + 0x2c0);
        cVar18 = RendererCanvasCull::was_sdf_used();
        if (cVar18 != '\0') {
          param_1[0x24d] = (Viewport)0x1;
        }
        local_208 = extraout_RDX_01;
        if (local_1ad == '\0') {
LAB_00108e79:
          local_1ad = '\0';
        }
        else if (local_1ac <= *(int *)(pbVar35 + 0x34)) {
          (**(code **)(*RenderingServerGlobals::texture_storage + 0x2a0))
                    (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
          if (local_18d == '\0') {
            (**(code **)(*RenderingServerGlobals::scene + 0x688))
                      (RenderingServerGlobals::scene,param_1 + 0x68,*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x240));
            local_208 = extraout_RDX_03;
          }
          else {
            _draw_3d(this,param_1);
            local_208 = extraout_RDX_04;
          }
          goto LAB_00108e79;
        }
        pbVar35 = *(byte **)(pbVar35 + 0x20);
      } while (pbVar35 != (byte *)0x0);
      if (local_1ad == '\0') goto LAB_00108e9c;
    }
    (**(code **)(*RenderingServerGlobals::texture_storage + 0x2a0))
              (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58),local_208);
    if (local_18d == '\0') {
      (**(code **)(*RenderingServerGlobals::scene + 0x688))
                (RenderingServerGlobals::scene,param_1 + 0x68,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x240));
    }
    else {
      _draw_3d(this,param_1);
    }
  }
LAB_00108e9c:
  RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
  ::clear((RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
           *)&local_148);
  if (local_148 != (Object *)0x0) {
    Memory::free_static(local_148,false);
  }
LAB_00108ebd:
  cVar18 = (**(code **)(*RenderingServerGlobals::texture_storage + 0x288))
                     (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
  if (cVar18 != '\0') {
    (**(code **)(*RenderingServerGlobals::texture_storage + 0x2a0))
              (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
  }
  cVar18 = (**(code **)(*RenderingServerGlobals::texture_storage + 0x260))
                     (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
  if (cVar18 != '\0') {
    if (_draw_viewport(RendererViewport::Viewport*)::first_print != '\0') {
      _err_print_error("_draw_viewport","servers/rendering/renderer_viewport.cpp",0x2c6,
                       "2D MSAA is enabled while there is no 2D content. Disable 2D MSAA for better performance."
                       ,0,1);
      _draw_viewport(RendererViewport::Viewport*)::first_print = '\0';
    }
    (**(code **)(*RenderingServerGlobals::texture_storage + 0x268))
              (RenderingServerGlobals::texture_storage,*(undefined8 *)(param_1 + 0x58));
  }
  if (param_1[0x219] != (Viewport)0x0) {
    itos((long)&local_148);
    operator+((char *)&local_158,(String *)"vp_end_");
    pOVar6 = local_148;
    if (local_148 != (Object *)0x0) {
      LOCK();
      pOVar38 = local_148 + -0x10;
      *(long *)pOVar38 = *(long *)pOVar38 + -1;
      UNLOCK();
      if (*(long *)pOVar38 == 0) {
        local_148 = (Object *)0x0;
        Memory::free_static(pOVar6 + -0x10,false);
      }
    }
    (**(code **)(*RenderingServerGlobals::utilities + 0x68))
              (RenderingServerGlobals::utilities,&local_158);
    puVar29 = (undefined8 *)
              HashMap<String,RID,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RID>>>
              ::operator[]((HashMap<String,RID,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RID>>>
                            *)(this + 8),(String *)&local_158);
    pbVar25 = local_158;
    *puVar29 = *(undefined8 *)param_1;
    if (local_158 != (byte *)0x0) {
      LOCK();
      pbVar26 = local_158 + -0x10;
      *(long *)pbVar26 = *(long *)pbVar26 + -1;
      UNLOCK();
      if (*(long *)pbVar26 == 0) {
        local_158 = (byte *)0x0;
        Memory::free_static(pbVar25 + -0x10,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00108702:
  if (local_150 <= *(ulong *)(pbVar25 + 0x38)) goto LAB_00108739;
LAB_00108707:
  pbVar25 = *(byte **)(pbVar25 + 8);
  goto joined_r0x001086df;
}



/* Vector<BlitToScreen>::push_back(BlitToScreen) [clone .isra.0] */

void Vector<BlitToScreen>::push_back(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined8 uStack000000000000004c;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar1 = CowData<BlitToScreen>::resize<false>((CowData<BlitToScreen> *)(param_1 + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<BlitToScreen>::_copy_on_write((CowData<BlitToScreen> *)(param_1 + 8));
        puVar2 = (undefined8 *)(lVar4 * 0x50 + *(long *)(param_1 + 8));
        puVar2[6] = in_stack_00000038;
        puVar2[7] = in_stack_00000040;
        *puVar2 = in_stack_00000008;
        puVar2[1] = in_stack_00000010;
        puVar2[2] = in_stack_00000018;
        puVar2[3] = in_stack_00000020;
        puVar2[4] = in_stack_00000028;
        puVar2[5] = in_stack_00000030;
        *(ulong *)((long)puVar2 + 0x3c) = CONCAT44(uStack0000000000000048,in_stack_00000040._4_4_);
        *(undefined8 *)((long)puVar2 + 0x44) = uStack000000000000004c;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::draw_viewports(bool) */

void __thiscall RendererViewport::draw_viewports(RendererViewport *this,bool param_1)

{
  long *plVar1;
  Viewport *pVVar2;
  code *pcVar3;
  void *pvVar4;
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
  char *pcVar22;
  Object *pOVar23;
  char cVar24;
  char cVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  void *pvVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  undefined8 *puVar43;
  uint uVar44;
  long in_FS_OFFSET;
  bool bVar45;
  undefined1 auVar46 [16];
  int local_13c;
  undefined8 local_138;
  Object *local_130;
  long local_f0;
  char *local_e8;
  long local_e0;
  Object *local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
    lVar37 = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    if (uVar36 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x18) + lVar37) != 0) {
          *(int *)(*(long *)(this + 0x18) + lVar37) = 0;
          pvVar39 = *(void **)(*(long *)(this + 0x10) + lVar37 * 2);
          if (*(long *)((long)pvVar39 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar39 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar34 = *(long *)((long)pvVar39 + 0x10);
              *(undefined8 *)((long)pvVar39 + 0x10) = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          Memory::free_static(pvVar39,false);
          *(undefined8 *)(*(long *)(this + 0x10) + lVar37 * 2) = 0;
        }
        lVar37 = lVar37 + 4;
      } while (lVar37 != (ulong)uVar36 << 2);
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  }
  local_130 = (Object *)XRServer::get_singleton();
  if (local_130 != (Object *)0x0) {
    XRServer::pre_render();
    XRServer::get_primary_interface();
    pOVar23 = local_d8;
    local_130 = local_d8;
    if (local_d8 != (Object *)0x0) {
      cVar24 = RefCounted::reference();
      local_130 = (Object *)0x0;
      if (cVar24 != '\0') {
        local_130 = pOVar23;
      }
      if (((local_d8 != (Object *)0x0) &&
          (cVar24 = RefCounted::unreference(), pOVar23 = local_d8, cVar24 != '\0')) &&
         (cVar24 = predelete_handler(local_d8), cVar24 != '\0')) {
        (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
        Memory::free_static(pOVar23,false);
      }
    }
  }
  lVar37 = Engine::get_singleton();
  plVar1 = RenderingServerGlobals::texture_storage;
  if (*(char *)(lVar37 + 0xc0) != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_d8,"rendering/environment/defaults/default_clear_color",false);
    ProjectSettings::get_setting_with_override((StringName *)local_98);
    auVar46 = Variant::operator_cast_to_Color((Variant *)local_98);
    cVar24 = Variant::needs_deinit[(int)local_98._0_4_];
    *(undefined1 (*) [16])(plVar1 + 1) = auVar46;
    if (cVar24 != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  if (this[0xb8] != (RendererViewport)0x0) {
    _sort_active_viewports();
    lVar37 = *(long *)(this + 0xb0);
    if (lVar37 == local_d0._0_8_) {
      if (lVar37 != 0) {
        LOCK();
        plVar1 = (long *)(lVar37 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_d0._0_8_ + -0x10),false);
        }
      }
    }
    else {
      if (lVar37 != 0) {
        LOCK();
        plVar1 = (long *)(lVar37 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar37 = *(long *)(this + 0xb0);
          *(undefined8 *)(this + 0xb0) = 0;
          Memory::free_static((void *)(lVar37 + -0x10),false);
        }
      }
      *(undefined8 *)(this + 0xb0) = local_d0._0_8_;
    }
    this[0xb8] = (RendererViewport)0x0;
  }
  plVar1 = RenderingServerGlobals::utilities;
  local_b0 = 2;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  if ((char)RenderingServerGlobals::utilities[1] != '\0') {
    pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
    local_f0 = 0;
    local_e8 = "> Render Viewports";
    local_e0 = 0x12;
    String::parse_latin1((StrRange *)&local_f0);
    (*pcVar3)(plVar1);
    lVar37 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar37 + -0x10),false);
      }
    }
  }
  lVar37 = *(long *)(this + 0xb0);
  *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  if (lVar37 == 0) goto LAB_0010bbd0;
  uVar36 = *(int *)(lVar37 + -8) - 1;
  if (-1 < (int)uVar36) {
    uVar38 = (ulong)uVar36;
LAB_0010a8ba:
    if (lVar37 != 0) {
      do {
        lVar34 = *(long *)(lVar37 + -8);
        if (lVar34 <= (long)uVar38) goto LAB_0010ad76;
        pVVar2 = *(Viewport **)(lVar37 + uVar38 * 8);
        iVar33 = *(int *)(pVVar2 + 0x54);
        if ((iVar33 != 0) && (*(long *)(pVVar2 + 0x58) != 0)) {
          if ((*(float *)(pVVar2 + 0x200) == 0.0) &&
             ((*(float *)(pVVar2 + 0x204) == 0.0 && (*(float *)(pVVar2 + 0x208) == 0.0)))) {
            cVar24 = *(float *)(pVVar2 + 0x20c) != 0.0;
            if (pVVar2[0x10] == (Viewport)0x0) goto LAB_0010a958;
LAB_0010acc2:
            if (local_130 == (Object *)0x0) {
              local_98._0_8_ = 0;
              uVar27 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_98);
              *(undefined8 *)(pVVar2 + 0x1c) = uVar27;
              lVar37 = *(long *)(this + 0xb0);
              goto LAB_0010ad40;
            }
            uVar27 = (**(code **)(*(long *)local_130 + 0x1e8))(local_130);
            uVar36 = (**(code **)(*(long *)local_130 + 0x1f0))(local_130);
            _viewport_set_size(this,pVVar2,(int)(float)uVar27,(int)(float)((ulong)uVar27 >> 0x20),
                               uVar36);
            lVar37 = *(long *)(this + 0xb0);
          }
          else {
            cVar24 = true;
            if (pVVar2[0x10] != (Viewport)0x0) goto LAB_0010acc2;
LAB_0010a958:
            if ((iVar33 != 4) && (iVar33 != 1)) {
              if (iVar33 == 2) {
                cVar25 = (**(code **)(*RenderingServerGlobals::texture_storage + 0x238))();
                if (cVar25 == '\0') {
                  iVar33 = *(int *)(pVVar2 + 0x54);
                  goto joined_r0x0010adcb;
                }
                if (((*(int *)(pVVar2 + 0x54) != 3) || (*(long *)(pVVar2 + 8) == 0)) ||
                   (uVar32 = *(ulong *)(pVVar2 + 8), cVar24 = cVar25,
                   *(uint *)(this + 0x5c) <= (uint)uVar32)) {
                  lVar37 = *(long *)(this + 0xb0);
                  goto LAB_0010ad1b;
                }
LAB_0010adf0:
                lVar34 = ((uVar32 & 0xffffffff) % (ulong)*(uint *)(this + 0x58)) * 0x2f0 +
                         *(long *)(*(long *)(this + 0x48) +
                                  ((uVar32 & 0xffffffff) / (ulong)*(uint *)(this + 0x58)) * 8);
                iVar33 = *(int *)(lVar34 + 0x2e8);
                if (iVar33 == (int)(uVar32 >> 0x20)) {
                  lVar37 = *(long *)(this + 0xb0);
                  if (*(long *)(lVar34 + 600) == *(long *)(this + 0x38)) goto LAB_0010ad1b;
                }
                else {
                  if (0x7ffffffe < iVar33 + 0x80000000U) goto LAB_0010a97c;
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                  lVar37 = *(long *)(this + 0xb0);
                }
              }
              else {
joined_r0x0010adcb:
                if (((iVar33 == 3) && (*(long *)(pVVar2 + 8) != 0)) &&
                   (uVar32 = *(ulong *)(pVVar2 + 8), (uint)uVar32 < *(uint *)(this + 0x5c)))
                goto LAB_0010adf0;
LAB_0010a97c:
                lVar37 = *(long *)(this + 0xb0);
              }
              if (cVar24 == '\0') goto code_r0x0010a98c;
            }
          }
LAB_0010ad1b:
          if ((1 < *(int *)(pVVar2 + 0x1c)) && (1 < *(int *)(pVVar2 + 0x20))) {
            *(undefined8 *)(pVVar2 + 600) = *(undefined8 *)(this + 0x38);
          }
        }
LAB_0010ad40:
        uVar38 = uVar38 - 1;
        if ((int)uVar38 < 0) goto LAB_0010a9a0;
        if (lVar37 == 0) break;
      } while( true );
    }
    lVar34 = 0;
LAB_0010ad76:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar38,lVar34,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_0010a9a9:
  local_13c = 0;
  lVar42 = 0;
  local_138 = 0;
  do {
    plVar1 = RenderingServerGlobals::utilities;
    if (*(long *)(lVar37 + -8) <= lVar42) break;
    pVVar2 = *(Viewport **)(lVar37 + lVar42 * 8);
    if (*(long *)(pVVar2 + 600) == *(long *)(this + 0x38)) {
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        itos((long)&local_f0);
        operator+((char *)&local_e8,(String *)"> Render Viewport ");
        (*pcVar3)(plVar1);
        pcVar22 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar22 + -0x10,false);
          }
        }
        lVar37 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar37 + -0x10),false);
          }
        }
      }
      (**(code **)(*RenderingServerGlobals::texture_storage + 0x240))
                (RenderingServerGlobals::texture_storage,*(undefined8 *)(pVVar2 + 0x58));
      if ((pVVar2[0x10] == (Viewport)0x0) || (local_130 == (Object *)0x0)) {
        if (*(code **)(*RenderingServerGlobals::scene + 0x668) ==
            RendererSceneCull::set_debug_draw_mode) {
          (**(code **)(*(long *)RenderingServerGlobals::scene[1] + 0x150))();
        }
        else {
          (**(code **)(*RenderingServerGlobals::scene + 0x668))
                    (RenderingServerGlobals::scene,*(undefined4 *)(pVVar2 + 0x260));
        }
        _draw_viewport(this,pVVar2);
        if ((*(int *)(pVVar2 + 0x1fc) != -1) &&
           ((pVVar2[0x210] == (Viewport)0x0 || ((char)RendererCompositor::low_end == '\0')))) {
          local_98._0_8_ = *(undefined8 *)(pVVar2 + 0x58);
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_70 = uStack_70 & 0xffffff00;
          local_98._8_8_ = __LC213;
          uStack_88 = _UNK_001151e8;
          uStack_5c = (undefined4)__LC213;
          uStack_58 = (undefined4)((ulong)__LC213 >> 0x20);
          uStack_54 = _UNK_001151e8;
          uStack_6c = 0;
          local_68 = local_68 & 0xffffff00;
          if ((*(float *)(pVVar2 + 0x200) == 0.0) &&
             (((*(float *)(pVVar2 + 0x204) == 0.0 && (*(float *)(pVVar2 + 0x208) == 0.0)) &&
              (*(float *)(pVVar2 + 0x20c) == 0.0)))) {
            local_a0 = 0;
            uVar27 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a0);
            auVar46._8_8_ = *(undefined8 *)(pVVar2 + 0x1c);
            auVar46._0_8_ = uVar27;
          }
          else {
            auVar46 = Rect2::operator_cast_to_Rect2i((Rect2 *)(pVVar2 + 0x200));
          }
          auStack_80 = auVar46;
          lVar37 = OS::get_singleton();
          local_e8 = (char *)0x0;
          plVar1 = (long *)(*(long *)(lVar37 + 0x60) + -0x10);
          if (*(long *)(lVar37 + 0x60) != 0) {
            do {
              lVar34 = *plVar1;
              if (lVar34 == 0) goto LAB_0010af75;
              LOCK();
              lVar31 = *plVar1;
              bVar45 = lVar34 == lVar31;
              if (bVar45) {
                *plVar1 = lVar34 + 1;
                lVar31 = lVar34;
              }
              UNLOCK();
            } while (!bVar45);
            if (lVar31 != -1) {
              local_e8 = *(char **)(lVar37 + 0x60);
            }
          }
LAB_0010af75:
          cVar24 = String::begins_with((char *)&local_e8);
          pcVar22 = local_e8;
          if (local_e8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_e8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e8 = (char *)0x0;
              Memory::free_static(pcVar22 + -0x10,false);
            }
          }
          if (cVar24 == '\0') {
            uVar36 = *(uint *)(pVVar2 + 0x1fc);
            if ((local_d0._0_8_ != 0) && (local_b0._4_4_ != 0)) {
              uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4));
              uVar38 = *(ulong *)(hash_table_size_primes_inv + (local_b0 & 0xffffffff) * 8);
              uVar26 = (uVar36 >> 0x10 ^ uVar36) * -0x7a143595;
              uVar26 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
              uVar44 = uVar26 ^ uVar26 >> 0x10;
              if (uVar26 == uVar26 >> 0x10) {
                uVar44 = 1;
                uVar35 = uVar38;
              }
              else {
                uVar35 = uVar44 * uVar38;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar32;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar35;
              lVar37 = SUB168(auVar5 * auVar13,8);
              uVar26 = *(uint *)(local_d0._8_8_ + lVar37 * 4);
              uVar40 = SUB164(auVar5 * auVar13,8);
              if (uVar26 != 0) {
                uVar41 = 0;
                do {
                  if ((uVar44 == uVar26) &&
                     (uVar36 == *(uint *)(*(long *)(local_d0._0_8_ + lVar37 * 8) + 0x10))) {
                    lVar37 = *(long *)(local_d0._0_8_ + (ulong)uVar40 * 8);
                    goto LAB_0010b0e6;
                  }
                  uVar41 = uVar41 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = (uVar40 + 1) * uVar38;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = uVar32;
                  lVar37 = SUB168(auVar6 * auVar14,8);
                  uVar26 = *(uint *)(local_d0._8_8_ + lVar37 * 4);
                  uVar40 = SUB164(auVar6 * auVar14,8);
                } while ((uVar26 != 0) &&
                        (auVar7._8_8_ = 0, auVar7._0_8_ = uVar26 * uVar38, auVar15._8_8_ = 0,
                        auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                        auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                  (local_b0 & 0xffffffff) * 4) + uVar40) -
                                       SUB164(auVar7 * auVar15,8)) * uVar38, auVar16._8_8_ = 0,
                        auVar16._0_8_ = uVar32, uVar41 <= SUB164(auVar8 * auVar16,8)));
              }
            }
            local_e0 = 0;
            HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
            ::insert((int *)&local_f0,(Vector *)&local_d8,(bool)((char)pVVar2 + -4));
            lVar37 = local_f0;
LAB_0010b0e6:
            Vector<BlitToScreen>::push_back(lVar37 + 0x18);
          }
          else {
            local_e0 = 0;
            Vector<BlitToScreen>::push_back(&local_e8);
            lVar37 = local_e0;
            (**(code **)(*RenderingServerGlobals::rasterizer + 0x68))
                      (RenderingServerGlobals::rasterizer,*(undefined4 *)(pVVar2 + 0x1fc),local_e0,1
                      );
            (**(code **)(*RenderingServerGlobals::rasterizer + 0x70))();
            auVar21._8_8_ = local_98._8_8_;
            auVar21._0_8_ = local_98._0_8_;
            if (lVar37 != 0) {
              LOCK();
              plVar1 = (long *)(lVar37 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              local_98 = auVar21;
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_e0 + -0x10),false);
              }
            }
          }
        }
        goto LAB_0010b138;
      }
      lVar37 = *(long *)local_130;
      if (*(code **)(lVar37 + 0x240) != XRInterface::pre_draw_viewport) {
        cVar24 = (**(code **)(lVar37 + 0x240))(local_130);
        if (cVar24 == '\0') goto LAB_0010b138;
        lVar37 = *(long *)local_130;
      }
      plVar1 = RenderingServerGlobals::texture_storage;
      pcVar3 = *(code **)(*RenderingServerGlobals::texture_storage + 0x2f0);
      uVar27 = (**(code **)(lVar37 + 0x220))(local_130);
      uVar28 = (**(code **)(*(long *)local_130 + 0x218))(local_130);
      uVar29 = (**(code **)(*(long *)local_130 + 0x210))(local_130);
      uVar30 = (**(code **)(*(long *)local_130 + 0x208))(local_130);
      (*pcVar3)(plVar1,*(undefined8 *)(pVVar2 + 0x58),uVar30,uVar29,uVar28,uVar27);
      plVar1 = RenderingServerGlobals::texture_storage;
      pcVar3 = *(code **)(*RenderingServerGlobals::texture_storage + 0x330);
      uVar27 = (**(code **)(*(long *)local_130 + 0x228))(local_130);
      local_98._0_8_ = uVar27;
      (*pcVar3)(plVar1,*(undefined8 *)(pVVar2 + 0x58),local_98);
      lVar37 = (**(code **)(*(long *)local_130 + 0x218))(local_130);
      if (lVar37 == 0) {
        viewport_set_force_motion_vectors(this,*(undefined8 *)pVVar2,0);
      }
      else {
        viewport_set_force_motion_vectors(this,*(undefined8 *)pVVar2,1);
      }
      plVar1 = RenderingServerGlobals::texture_storage;
      pcVar3 = *(code **)(*RenderingServerGlobals::texture_storage + 0x318);
      local_98 = (**(code **)(*(long *)local_130 + 0x230))(local_130);
      (*pcVar3)(plVar1,*(undefined8 *)(pVVar2 + 0x58),local_98);
      if (*(code **)(*RenderingServerGlobals::scene + 0x668) ==
          RendererSceneCull::set_debug_draw_mode) {
        (**(code **)(*(long *)RenderingServerGlobals::scene[1] + 0x150))();
      }
      else {
        (**(code **)(*RenderingServerGlobals::scene + 0x668))
                  (RenderingServerGlobals::scene,*(undefined4 *)(pVVar2 + 0x260));
      }
      _draw_viewport(this,pVVar2);
      (**(code **)(*(long *)local_130 + 0x248))
                (&local_e8,local_130,*(undefined8 *)(pVVar2 + 0x58),pVVar2 + 0x200);
      if (*(int *)(pVVar2 + 0x1fc) == -1) {
LAB_0010ac74:
        if (local_e0 != 0) {
LAB_0010ac7d:
          lVar37 = local_e0;
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar37 + -0x10),false);
          }
        }
      }
      else {
        lVar37 = OS::get_singleton();
        local_f0 = 0;
        plVar1 = (long *)(*(long *)(lVar37 + 0x60) + -0x10);
        if (*(long *)(lVar37 + 0x60) != 0) {
          do {
            lVar34 = *plVar1;
            if (lVar34 == 0) goto LAB_0010abfe;
            LOCK();
            lVar31 = *plVar1;
            bVar45 = lVar34 == lVar31;
            if (bVar45) {
              *plVar1 = lVar34 + 1;
              lVar31 = lVar34;
            }
            UNLOCK();
          } while (!bVar45);
          if (lVar31 != -1) {
            local_f0 = *(long *)(lVar37 + 0x60);
          }
        }
LAB_0010abfe:
        cVar24 = String::begins_with((char *)&local_f0);
        lVar37 = local_f0;
        if (local_f0 == 0) {
LAB_0010ac27:
          if (cVar24 != '\0') goto LAB_0010ac38;
LAB_0010b7e0:
          if (local_e0 != 0) {
            if (0 < *(long *)(local_e0 + -8)) {
              uVar36 = *(uint *)(pVVar2 + 0x1fc);
              if ((local_d0._0_8_ != 0) && (local_b0._4_4_ != 0)) {
                uVar38 = *(ulong *)(hash_table_size_primes_inv + (local_b0 & 0xffffffff) * 8);
                uVar26 = (uVar36 >> 0x10 ^ uVar36) * -0x7a143595;
                uVar26 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
                uVar44 = uVar26 ^ uVar26 >> 0x10;
                if (uVar26 == uVar26 >> 0x10) {
                  uVar44 = 1;
                  uVar32 = uVar38;
                }
                else {
                  uVar32 = uVar44 * uVar38;
                }
                uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4))
                ;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar35;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar32;
                lVar37 = SUB168(auVar9 * auVar17,8);
                uVar26 = *(uint *)(local_d0._8_8_ + lVar37 * 4);
                iVar33 = SUB164(auVar9 * auVar17,8);
                if (uVar26 != 0) {
                  uVar40 = 0;
                  do {
                    if ((uVar26 == uVar44) &&
                       (uVar36 == *(uint *)(*(long *)(local_d0._0_8_ + lVar37 * 8) + 0x10)))
                    goto LAB_0010b933;
                    uVar40 = uVar40 + 1;
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = (iVar33 + 1) * uVar38;
                    auVar18._8_8_ = 0;
                    auVar18._0_8_ = uVar35;
                    lVar37 = SUB168(auVar10 * auVar18,8);
                    uVar26 = *(uint *)(local_d0._8_8_ + lVar37 * 4);
                    iVar33 = SUB164(auVar10 * auVar18,8);
                  } while ((uVar26 != 0) &&
                          (auVar11._8_8_ = 0, auVar11._0_8_ = uVar26 * uVar38, auVar19._8_8_ = 0,
                          auVar19._0_8_ = uVar35, auVar12._8_8_ = 0,
                          auVar12._0_8_ =
                               ((*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) +
                                iVar33) - SUB164(auVar11 * auVar19,8)) * uVar38, auVar20._8_8_ = 0,
                          auVar20._0_8_ = uVar35, uVar40 <= SUB164(auVar12 * auVar20,8)));
                }
              }
              lVar37 = HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
                       ::operator[]((HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
                                     *)&local_d8,(int *)(pVVar2 + 0x1fc));
              if (*(long *)(lVar37 + 8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar37 + 8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar34 = *(long *)(lVar37 + 8);
                  *(undefined8 *)(lVar37 + 8) = 0;
                  Memory::free_static((void *)(lVar34 + -0x10),false);
                }
                *(undefined8 *)(lVar37 + 8) = 0;
              }
              if (local_e0 != 0) {
LAB_0010b933:
                uVar38 = 0;
                do {
                  if (*(long *)(local_e0 + -8) <= (long)uVar38) goto LAB_0010ac74;
                  uVar27 = HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
                           ::operator[]((HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
                                         *)&local_d8,(int *)(pVVar2 + 0x1fc));
                  if (local_e0 == 0) {
                    lVar34 = 0;
                    goto LAB_0010ad76;
                  }
                  lVar34 = *(long *)(local_e0 + -8);
                  if (lVar34 <= (long)uVar38) goto LAB_0010ad76;
                  uVar38 = uVar38 + 1;
                  Vector<BlitToScreen>::push_back(uVar27);
                } while (local_e0 != 0);
              }
              goto LAB_0010b138;
            }
            goto LAB_0010ac7d;
          }
        }
        else {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 != 0) goto LAB_0010ac27;
          local_f0 = 0;
          Memory::free_static((void *)(lVar37 + -0x10),false);
          if (cVar24 == '\0') goto LAB_0010b7e0;
LAB_0010ac38:
          if (local_e0 != 0) {
            if (0 < *(long *)(local_e0 + -8)) {
              (**(code **)(*RenderingServerGlobals::rasterizer + 0x68))
                        (RenderingServerGlobals::rasterizer,*(undefined4 *)(pVVar2 + 0x1fc));
              (**(code **)(*RenderingServerGlobals::rasterizer + 0x70))();
              goto LAB_0010ac74;
            }
            goto LAB_0010ac7d;
          }
        }
      }
LAB_0010b138:
      if (*(int *)(pVVar2 + 0x54) == 1) {
        *(undefined4 *)(pVVar2 + 0x54) = 0;
      }
      plVar1 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
        pcVar3 = *(code **)(*RenderingServerGlobals::utilities + 0x68);
        itos((long)&local_f0);
        operator+((char *)&local_e8,(String *)"< Render Viewport ");
        (*pcVar3)(plVar1);
        pcVar22 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar22 + -0x10,false);
          }
        }
        lVar37 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar37 + -0x10),false);
          }
        }
      }
      local_13c = *(int *)(pVVar2 + 0x2d4) + *(int *)(pVVar2 + 0x2c8) + local_13c +
                  *(int *)(pVVar2 + 0x2e0);
      lVar37 = *(long *)(this + 0xb0);
      local_138 = CONCAT44((int)((ulong)*(undefined8 *)(pVVar2 + 0x2cc) >> 0x20) +
                           (int)((ulong)*(undefined8 *)(pVVar2 + 0x2c0) >> 0x20) +
                           (int)((ulong)local_138 >> 0x20) +
                           (int)((ulong)*(undefined8 *)(pVVar2 + 0x2d8) >> 0x20),
                           (int)*(undefined8 *)(pVVar2 + 0x2cc) +
                           (int)*(undefined8 *)(pVVar2 + 0x2c0) + (int)local_138 +
                           (int)*(undefined8 *)(pVVar2 + 0x2d8));
    }
    lVar42 = lVar42 + 1;
  } while (lVar37 != 0);
LAB_0010b1c2:
  if (*(code **)(*RenderingServerGlobals::scene + 0x668) == RendererSceneCull::set_debug_draw_mode)
  {
    (**(code **)(*(long *)RenderingServerGlobals::scene[1] + 0x150))();
  }
  else {
    (**(code **)(*RenderingServerGlobals::scene + 0x668))();
  }
  plVar1 = RenderingServerGlobals::utilities;
  *(undefined8 *)(this + 0xbc) = local_138;
  lVar37 = plVar1[1];
  *(int *)(this + 0xc4) = local_13c;
  if ((char)lVar37 != '\0') {
    pcVar3 = *(code **)(*plVar1 + 0x68);
    local_f0 = 0;
    local_e8 = "< Render Viewports";
    local_e0 = 0x12;
    String::parse_latin1((StrRange *)&local_f0);
    (*pcVar3)(plVar1);
    lVar37 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar37 + -0x10),false);
      }
    }
  }
  pvVar39 = (void *)local_d0._0_8_;
  if (param_1) {
    if (local_b0._4_4_ == 0) {
LAB_0010b2e8:
      if (pvVar39 != (void *)0x0) goto LAB_0010b2ed;
    }
    else {
      for (puVar43 = (undefined8 *)local_c0._0_8_; puVar43 != (undefined8 *)0x0;
          puVar43 = (undefined8 *)*puVar43) {
        (**(code **)(*RenderingServerGlobals::rasterizer + 0x68))();
      }
      if (pvVar39 != (void *)0x0) goto LAB_0010b23d;
    }
  }
  else if ((void *)local_d0._0_8_ != (void *)0x0) {
    if (local_b0._4_4_ != 0) {
LAB_0010b23d:
      uVar36 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
      if (uVar36 != 0) {
        lVar37 = 0;
        do {
          if (*(int *)(local_d0._8_8_ + lVar37) != 0) {
            *(int *)(local_d0._8_8_ + lVar37) = 0;
            puVar43 = (undefined8 *)((long)pvVar39 + lVar37 * 2);
            pvVar4 = (void *)*puVar43;
            if (*(long *)((long)pvVar4 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar4 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar34 = *(long *)((long)pvVar4 + 0x20);
                *(undefined8 *)((long)pvVar4 + 0x20) = 0;
                Memory::free_static((void *)(lVar34 + -0x10),false);
              }
              puVar43 = (undefined8 *)(local_d0._0_8_ + lVar37 * 2);
              pvVar39 = (void *)local_d0._0_8_;
            }
            Memory::free_static(pvVar4,false);
            *puVar43 = 0;
          }
          lVar37 = lVar37 + 4;
        } while (lVar37 != (ulong)uVar36 << 2);
        local_b0 = local_b0 & 0xffffffff;
        local_c0 = (undefined1  [16])0x0;
        goto LAB_0010b2e8;
      }
    }
LAB_0010b2ed:
    Memory::free_static(pvVar39,false);
    Memory::free_static((void *)local_d0._8_8_,false);
  }
  if (local_130 != (Object *)0x0) {
    cVar24 = RefCounted::unreference();
    if (cVar24 != '\0') {
      cVar24 = predelete_handler(local_130);
      if (cVar24 != '\0') {
        (**(code **)(*(long *)local_130 + 0x140))(local_130);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_130,false);
          return;
        }
        goto LAB_0010bd42;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bd42:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010a98c:
  uVar38 = uVar38 - 1;
  if ((int)uVar38 < 0) goto LAB_0010a9a0;
  goto LAB_0010a8ba;
LAB_0010a9a0:
  if (lVar37 != 0) goto LAB_0010a9a9;
LAB_0010bbd0:
  local_13c = 0;
  local_138 = 0;
  goto LAB_0010b1c2;
}



/* RendererViewport::viewport_allocate() */

void __thiscall RendererViewport::viewport_allocate(RendererViewport *this)

{
  RID_Alloc<RendererViewport::Viewport,true>::allocate_rid
            ((RID_Alloc<RendererViewport::Viewport,true> *)(this + 0x40));
  return;
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
  return (uint)CONCAT71(0x114f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RenderSceneBuffersConfiguration::is_class_ptr(void*) const */

uint __thiscall
RenderSceneBuffersConfiguration::is_class_ptr(RenderSceneBuffersConfiguration *this,void *param_1)

{
  return (uint)CONCAT71(0x114f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RenderSceneBuffersConfiguration::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneBuffersConfiguration::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneBuffersConfiguration::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneBuffersConfiguration::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneBuffersConfiguration::_validate_propertyv(PropertyInfo&) const */

void RenderSceneBuffersConfiguration::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneBuffersConfiguration::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneBuffersConfiguration::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneBuffersConfiguration::_property_get_revertv(StringName const&, Variant&) const */

undefined8
RenderSceneBuffersConfiguration::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneBuffersConfiguration::_notificationv(int, bool) */

void RenderSceneBuffersConfiguration::_notificationv(int param_1,bool param_2)

{
  return;
}



/* XRInterface::pre_draw_viewport(RID) */

undefined8 XRInterface::pre_draw_viewport(void)

{
  return 1;
}



/* RendererSceneOcclusionCull::set_build_quality(RenderingServer::ViewportOcclusionCullingBuildQuality)
    */

void RendererSceneOcclusionCull::set_build_quality(void)

{
  return;
}



/* RendererSceneCull::render_buffers_create() */

void RendererSceneCull::render_buffers_create(void)

{
  long lVar1;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(in_RSI + 8) + 0x158))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererSceneCull::set_debug_draw_mode(RenderingServer::ViewportDebugDraw) */

void RendererSceneCull::set_debug_draw_mode(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010bfdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x150))();
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* RenderSceneBuffersConfiguration::~RenderSceneBuffersConfiguration() */

void __thiscall
RenderSceneBuffersConfiguration::~RenderSceneBuffersConfiguration
          (RenderSceneBuffersConfiguration *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)this);
  return;
}



/* RenderSceneBuffersConfiguration::~RenderSceneBuffersConfiguration() */

void __thiscall
RenderSceneBuffersConfiguration::~RenderSceneBuffersConfiguration
          (RenderSceneBuffersConfiguration *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b8);
  return;
}



/* RenderSceneBuffersExtension::~RenderSceneBuffersExtension() */

void __thiscall
RenderSceneBuffersExtension::~RenderSceneBuffersExtension(RenderSceneBuffersExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RendererSceneRender::environment_get_canvas_max_layer;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c141;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c141;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c141;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c141;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010c141:
  *(undefined ***)this = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)this);
  return;
}



/* RendererSceneCull::is_environment(RID) const */

void RendererSceneCull::is_environment(long param_1)

{
  RendererSceneRender::is_environment(*(undefined8 *)(param_1 + 8));
  return;
}



/* RendererSceneCull::environment_get_canvas_max_layer(RID) const */

void RendererSceneCull::environment_get_canvas_max_layer(long param_1)

{
  RendererSceneRender::environment_get_canvas_max_layer(*(undefined8 *)(param_1 + 8));
  return;
}



/* RendererSceneCull::environment_get_background(RID) const */

void RendererSceneCull::environment_get_background(long param_1)

{
  RendererSceneRender::environment_get_background(*(undefined8 *)(param_1 + 8));
  return;
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
LAB_0010d7b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010d7b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010d81e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010d81e:
  return &_get_class_namev()::_class_name_static;
}



/* RBMap<RendererViewport::Viewport::CanvasKey, RendererViewport::Viewport::CanvasData*,
   Comparator<RendererViewport::Viewport::CanvasKey>,
   DefaultAllocator>::_cleanup_tree(RBMap<RendererViewport::Viewport::CanvasKey,
   RendererViewport::Viewport::CanvasData*, Comparator<RendererViewport::Viewport::CanvasKey>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
::_cleanup_tree(RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RenderSceneBuffersConfiguration::_get_class_namev() const */

undefined8 * RenderSceneBuffersConfiguration::_get_class_namev(void)

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
LAB_0010df13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010df13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "RenderSceneBuffersConfiguration");
      goto LAB_0010df7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneBuffersConfiguration"
            );
LAB_0010df7e:
  return &_get_class_namev()::_class_name_static;
}



/* RendererViewport::viewport_find_from_screen_attachment(int) const [clone .cold] */

void RendererViewport::viewport_find_from_screen_attachment(int param_1)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_EAX + 0x80000000U);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererViewport::Viewport*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RendererViewport::Viewport*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<BlitToScreen>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<BlitToScreen>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::viewport_initialize(RID) [clone .cold] */

void RendererViewport::viewport_initialize(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_3);
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererViewport::free(RID) [clone .cold] */

void RendererViewport::free(void)

{
  code *pcVar1;
  undefined8 in_stack_00000018;
  
  if (in_stack_00000018._4_4_ + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0);
  }
  (**(code **)(*RenderingServerGlobals::texture_storage + 0x1f0))
            (RenderingServerGlobals::texture_storage,_DAT_00000058);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererSceneOcclusionCull::add_buffer(RID) */

void RendererSceneOcclusionCull::add_buffer(void)

{
  if (_print_warning()::first_print == '\0') {
    return;
  }
  _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd,
                   "Occlusion culling is disabled at build-time.",0,1);
  _print_warning()::first_print = 0;
  return;
}



/* RendererSceneOcclusionCull::remove_buffer(RID) */

void RendererSceneOcclusionCull::remove_buffer(void)

{
  if (_print_warning()::first_print == '\0') {
    return;
  }
  _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd,
                   "Occlusion culling is disabled at build-time.",0,1);
  _print_warning()::first_print = 0;
  return;
}



/* RendererSceneOcclusionCull::buffer_set_scenario(RID, RID) */

void RendererSceneOcclusionCull::buffer_set_scenario(void)

{
  if (_print_warning()::first_print == '\0') {
    return;
  }
  _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd,
                   "Occlusion culling is disabled at build-time.",0,1);
  _print_warning()::first_print = 0;
  return;
}



/* RendererSceneOcclusionCull::buffer_set_size(RID, Vector2i const&) */

void RendererSceneOcclusionCull::buffer_set_size(void)

{
  if (_print_warning()::first_print == '\0') {
    return;
  }
  _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd,
                   "Occlusion culling is disabled at build-time.",0,1);
  _print_warning()::first_print = 0;
  return;
}



/* RendererSceneOcclusionCull::buffer_get_debug_texture(RID) */

undefined8 RendererSceneOcclusionCull::buffer_get_debug_texture(void)

{
  if (_print_warning()::first_print == '\0') {
    return 0;
  }
  _err_print_error("_print_warning","./servers/rendering/renderer_scene_occlusion_cull.h",0xcd,
                   "Occlusion culling is disabled at build-time.",0,1);
  _print_warning()::first_print = 0;
  return 0;
}



/* RenderSceneBuffersConfiguration::get_class() const */

void RenderSceneBuffersConfiguration::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010e4df;
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
LAB_0010e4df:
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
    if (cVar6 != '\0') goto LAB_0010e593;
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
              if (lVar5 == 0) goto LAB_0010e643;
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
LAB_0010e643:
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
      if (cVar6 != '\0') goto LAB_0010e593;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010e593:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneBuffersConfiguration::is_class(String const&) const */

undefined8 __thiscall
RenderSceneBuffersConfiguration::is_class(RenderSceneBuffersConfiguration *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e76f;
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
LAB_0010e76f:
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
    if (cVar5 != '\0') goto LAB_0010e823;
  }
  cVar5 = String::operator==((String *)param_1,"RenderSceneBuffersConfiguration");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e823:
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
LAB_0010eb88:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010eb88;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010eba6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010eba6:
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



/* RenderSceneBuffersConfiguration::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
RenderSceneBuffersConfiguration::_get_property_listv
          (RenderSceneBuffersConfiguration *this,List *param_1,bool param_2)

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
  local_78 = "RenderSceneBuffersConfiguration";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneBuffersConfiguration";
  local_98 = 0;
  local_70 = 0x1f;
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
LAB_0010ef88:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ef88;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010efa5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010efa5:
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
  StringName::StringName((StringName *)&local_78,"RenderSceneBuffersConfiguration",false);
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



/* RenderSceneBuffersConfiguration::_initialize_classv() */

void RenderSceneBuffersConfiguration::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_0010f3cb;
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
LAB_0010f4da:
      if ((code *)PTR__bind_methods_00119010 != RefCounted::_bind_methods) {
LAB_0010f4ea:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010f4da;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00119010 != RefCounted::_bind_methods) goto LAB_0010f4ea;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "RenderSceneBuffersConfiguration";
  local_70 = 0;
  local_50 = 0x1f;
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
  if ((code *)PTR__bind_methods_00119008 != RefCounted::_bind_methods) {
    RenderSceneBuffersConfiguration::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010f3cb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderSceneBuffersExtension::~RenderSceneBuffersExtension() */

void __thiscall
RenderSceneBuffersExtension::~RenderSceneBuffersExtension(RenderSceneBuffersExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RendererSceneRender::environment_get_canvas_max_layer;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f611;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f611;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f611;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010f611;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010f611:
  *(undefined ***)this = &PTR__initialize_classv_00114c10;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, RendererViewport::Viewport::CanvasData, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RendererViewport::Viewport::CanvasData> > >::operator[](RID const&) */

undefined1 * __thiscall
HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
::operator[](HashMap<RID,RendererViewport::Viewport::CanvasData,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RendererViewport::Viewport::CanvasData>>>
             *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
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
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [16];
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  uint uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar54;
  long lVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  void *local_f0;
  ulong uStack_b0;
  long local_a8;
  ulong uStack_68;
  long local_60;
  
  lVar55 = *(long *)param_1;
  local_f0 = *(void **)(this + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar49 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar49);
  if (local_f0 == (void *)0x0) {
    uVar40 = uVar41 * 4;
    uVar54 = uVar41 * 8;
    uVar42 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    local_f0 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = local_f0;
    if (uVar49 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)local_f0 + uVar54)) &&
         (local_f0 < (void *)((long)pvVar5 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_f0 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar41 != uVar40);
        iVar45 = *(int *)(this + 0x2c);
        lVar55 = *(long *)param_1;
      }
      else {
        memset(pvVar5,0,uVar40);
        memset(local_f0,0,uVar54);
        iVar45 = *(int *)(this + 0x2c);
        lVar55 = *(long *)param_1;
      }
      goto LAB_0010f857;
    }
    iVar45 = *(int *)(this + 0x2c);
    lVar55 = *(long *)param_1;
    if (local_f0 != (void *)0x0) goto LAB_0010f857;
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = lVar55 * 0x3ffff - 1;
      uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
      uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar54 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
        uVar54 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar54 * lVar4;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar41;
      lVar46 = SUB168(auVar6 * auVar22,8);
      uVar44 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar53 = SUB164(auVar6 * auVar22,8);
      if (uVar44 != 0) {
        uVar51 = 0;
        do {
          if (((uint)uVar54 == uVar44) &&
             (lVar55 == *(long *)(*(long *)((long)local_f0 + lVar46 * 8) + 0x10))) {
            pauVar43 = *(undefined1 (**) [16])((long)local_f0 + (ulong)uVar53 * 8);
            goto LAB_0010fda8;
          }
          uVar51 = uVar51 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar53 + 1) * lVar4;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar41;
          lVar46 = SUB168(auVar7 * auVar23,8);
          uVar44 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar53 = SUB164(auVar7 * auVar23,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar4, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar41, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar53 + uVar49) - SUB164(auVar8 * auVar24,8)) * lVar4,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar41, uVar51 <= SUB164(auVar9 * auVar25,8)));
      }
    }
LAB_0010f857:
    if (iVar45 != 0) {
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = lVar55 * 0x3ffff - 1;
      uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
      uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar54 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
        uVar54 = 1;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar54 * lVar4;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar52;
      lVar46 = SUB168(auVar10 * auVar26,8);
      uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar44 = SUB164(auVar10 * auVar26,8);
      if (uVar49 != 0) {
        uVar53 = 0;
        do {
          if (((uint)uVar54 == uVar49) &&
             (*(long *)(*(long *)((long)local_f0 + lVar46 * 8) + 0x10) == lVar55)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_f0 + (ulong)uVar44 * 8);
            uStack_b0 = (ulong)_LC84;
            local_a8 = (ulong)_LC84 << 0x20;
            *(undefined8 *)(pauVar43[3] + 8) = 0;
            *(undefined8 *)(pauVar43[1] + 8) = 0;
            *(ulong *)pauVar43[2] = uStack_b0;
            *(long *)(pauVar43[2] + 8) = local_a8;
            *(undefined8 *)pauVar43[3] = 0;
            goto LAB_0010fda8;
          }
          uVar53 = uVar53 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar44 + 1) * lVar4;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar52;
          lVar46 = SUB168(auVar11 * auVar27,8);
          uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar44 = SUB164(auVar11 * auVar27,8);
        } while ((uVar49 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar49 * lVar4, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar52, auVar13._8_8_ = 0,
                auVar13._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                             + uVar44) - SUB164(auVar12 * auVar28,8)) * lVar4, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar52, uVar53 <= SUB164(auVar13 * auVar29,8)));
      }
    }
  }
  if ((float)uVar41 * __LC79 < (float)(iVar45 + 1)) {
    uVar49 = *(uint *)(this + 0x28);
    if (uVar49 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010fda8;
    }
    uVar41 = (ulong)(uVar49 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar49 * 4);
    if (uVar49 + 1 < 2) {
      uVar41 = 2;
    }
    uVar49 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar54 = (ulong)uVar49;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar5 = *(void **)(this + 0x10);
    uVar41 = uVar54 * 4;
    uVar40 = uVar54 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar40,false);
    *(void **)(this + 8) = __s_00;
    if (uVar49 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar40)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar54 != uVar41);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar40);
      }
    }
    if (uVar44 != 0) {
      uVar41 = 0;
      do {
        uVar49 = *(uint *)((long)pvVar5 + uVar41 * 4);
        if (uVar49 != 0) {
          lVar55 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar40 = CONCAT44(0,uVar53);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar49 * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar46 = SUB168(auVar14 * auVar30,8);
          puVar1 = (uint *)(lVar55 + lVar46 * 4);
          iVar45 = SUB164(auVar14 * auVar30,8);
          uVar51 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_f0 + uVar41 * 8);
          while (uVar51 != 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar51 * lVar4;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar40;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((uVar53 + iVar45) - SUB164(auVar15 * auVar31,8)) * lVar4;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar40;
            uVar39 = SUB164(auVar16 * auVar32,8);
            uVar48 = uVar42;
            if (uVar39 < uVar50) {
              *puVar1 = uVar49;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar42;
              uVar49 = uVar51;
              uVar50 = uVar39;
            }
            uVar50 = uVar50 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(iVar45 + 1) * lVar4;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar40;
            lVar46 = SUB168(auVar17 * auVar33,8);
            puVar1 = (uint *)(lVar55 + lVar46 * 4);
            iVar45 = SUB164(auVar17 * auVar33,8);
            uVar42 = uVar48;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar49;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar41 != uVar44);
      Memory::free_static(local_f0,false);
      Memory::free_static(pvVar5,false);
    }
  }
  uVar42 = *(undefined8 *)param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x40,"");
  uVar49 = _LC84;
  *pauVar43 = (undefined1  [16])0x0;
  uStack_68 = (ulong)uVar49;
  *(undefined8 *)pauVar43[1] = uVar42;
  local_60 = (ulong)uVar49 << 0x20;
  *(undefined8 *)(pauVar43[3] + 8) = 0;
  puVar2 = *(undefined8 **)(this + 0x20);
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  *(ulong *)pauVar43[2] = uStack_68;
  *(long *)(pauVar43[2] + 8) = local_60;
  *(undefined8 *)pauVar43[3] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  lVar55 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar41 = *(long *)param_1 * 0x3ffff - 1;
  uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
  uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
  uVar41 = uVar41 >> 0x16 ^ uVar41;
  uVar40 = uVar41 & 0xffffffff;
  if ((int)uVar41 == 0) {
    uVar40 = 1;
  }
  uVar51 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar40;
  uVar49 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar49);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar40 * lVar4;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar41;
  lVar47 = SUB168(auVar18 * auVar34,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar55 + lVar47 * 4);
  iVar45 = SUB164(auVar18 * auVar34,8);
  uVar44 = *puVar1;
  pauVar38 = pauVar43;
  while (uVar44 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar44 * lVar4;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar41;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar49 + iVar45) - SUB164(auVar19 * auVar35,8)) * lVar4;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar41;
    uVar53 = SUB164(auVar20 * auVar36,8);
    pauVar56 = pauVar38;
    if (uVar53 < uVar51) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar51 = uVar53;
    }
    uVar53 = (uint)uVar40;
    uVar51 = uVar51 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(iVar45 + 1) * lVar4;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar41;
    lVar47 = SUB168(auVar21 * auVar37,8);
    puVar1 = (uint *)(lVar55 + lVar47 * 4);
    iVar45 = SUB164(auVar21 * auVar37,8);
    pauVar38 = pauVar56;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar38;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010fda8:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00110110) */
/* WARNING: Removing unreachable block (ram,0x00110240) */
/* WARNING: Removing unreachable block (ram,0x001103b9) */
/* WARNING: Removing unreachable block (ram,0x0011024c) */
/* WARNING: Removing unreachable block (ram,0x00110256) */
/* WARNING: Removing unreachable block (ram,0x0011039b) */
/* WARNING: Removing unreachable block (ram,0x00110262) */
/* WARNING: Removing unreachable block (ram,0x0011026c) */
/* WARNING: Removing unreachable block (ram,0x0011037d) */
/* WARNING: Removing unreachable block (ram,0x00110278) */
/* WARNING: Removing unreachable block (ram,0x00110282) */
/* WARNING: Removing unreachable block (ram,0x0011035f) */
/* WARNING: Removing unreachable block (ram,0x0011028e) */
/* WARNING: Removing unreachable block (ram,0x00110298) */
/* WARNING: Removing unreachable block (ram,0x00110341) */
/* WARNING: Removing unreachable block (ram,0x001102a4) */
/* WARNING: Removing unreachable block (ram,0x001102ae) */
/* WARNING: Removing unreachable block (ram,0x00110323) */
/* WARNING: Removing unreachable block (ram,0x001102b6) */
/* WARNING: Removing unreachable block (ram,0x001102c0) */
/* WARNING: Removing unreachable block (ram,0x00110308) */
/* WARNING: Removing unreachable block (ram,0x001102c8) */
/* WARNING: Removing unreachable block (ram,0x001102de) */
/* WARNING: Removing unreachable block (ram,0x001102ea) */
/* String vformat<double, double>(String const&, double const, double const) */

String * vformat<double,double>(String *param_1,double param_2,double param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  bool *in_RSI;
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
  Variant::Variant(local_88,param_2);
  Variant::Variant(local_70,param_3);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,in_RSI);
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



/* WARNING: Removing unreachable block (ram,0x001104f8) */
/* WARNING: Removing unreachable block (ram,0x00110628) */
/* WARNING: Removing unreachable block (ram,0x001107f0) */
/* WARNING: Removing unreachable block (ram,0x00110634) */
/* WARNING: Removing unreachable block (ram,0x0011063e) */
/* WARNING: Removing unreachable block (ram,0x001107d0) */
/* WARNING: Removing unreachable block (ram,0x0011064a) */
/* WARNING: Removing unreachable block (ram,0x00110654) */
/* WARNING: Removing unreachable block (ram,0x001107b0) */
/* WARNING: Removing unreachable block (ram,0x00110660) */
/* WARNING: Removing unreachable block (ram,0x0011066a) */
/* WARNING: Removing unreachable block (ram,0x00110790) */
/* WARNING: Removing unreachable block (ram,0x00110676) */
/* WARNING: Removing unreachable block (ram,0x00110680) */
/* WARNING: Removing unreachable block (ram,0x00110770) */
/* WARNING: Removing unreachable block (ram,0x0011068c) */
/* WARNING: Removing unreachable block (ram,0x00110696) */
/* WARNING: Removing unreachable block (ram,0x00110750) */
/* WARNING: Removing unreachable block (ram,0x001106a2) */
/* WARNING: Removing unreachable block (ram,0x001106ac) */
/* WARNING: Removing unreachable block (ram,0x00110730) */
/* WARNING: Removing unreachable block (ram,0x001106b4) */
/* WARNING: Removing unreachable block (ram,0x001106ca) */
/* WARNING: Removing unreachable block (ram,0x001106d6) */
/* String vformat<RenderingServer::ViewportScaling3DMode>(String const&,
   RenderingServer::ViewportScaling3DMode const) */

undefined8 *
vformat<RenderingServer::ViewportScaling3DMode>(undefined8 *param_1,bool *param_2,int param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, RID, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, RID> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,RID,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RID>>>
::operator[](HashMap<String,RID,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RID>>>
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
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00110f00:
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
        goto LAB_00110d8a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00110d8e:
      if (iVar45 != 0) {
LAB_00110d96:
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
                goto LAB_00110c3b;
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
      goto LAB_00110874;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00110874;
    if (iVar45 != 0) goto LAB_00110d96;
LAB_0011089a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00110c3b;
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
              goto LAB_00110c3b;
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
      if (*(long *)(this + 8) == 0) goto LAB_00110f00;
LAB_00110d8a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00110d8e;
    }
LAB_00110874:
    if ((float)uVar39 * __LC79 < (float)(iVar45 + 1)) goto LAB_0011089a;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00110ed4:
    *(undefined8 *)(pauVar41[1] + 8) = local_50;
LAB_00110b24:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00110b31;
LAB_00110d65:
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
    if (lVar3 == 0) goto LAB_00110ed4;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    *(undefined8 *)(pauVar41[1] + 8) = local_50;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00110b24;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00110d65;
LAB_00110b31:
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
LAB_00110c3b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */

undefined1  [16]
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_001110df;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_001110df:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00111591;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC79 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00111591;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00111591:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Removing unreachable block (ram,0x00111810) */
/* WARNING: Removing unreachable block (ram,0x00111940) */
/* WARNING: Removing unreachable block (ram,0x00111ab9) */
/* WARNING: Removing unreachable block (ram,0x0011194c) */
/* WARNING: Removing unreachable block (ram,0x00111956) */
/* WARNING: Removing unreachable block (ram,0x00111a9b) */
/* WARNING: Removing unreachable block (ram,0x00111962) */
/* WARNING: Removing unreachable block (ram,0x0011196c) */
/* WARNING: Removing unreachable block (ram,0x00111a7d) */
/* WARNING: Removing unreachable block (ram,0x00111978) */
/* WARNING: Removing unreachable block (ram,0x00111982) */
/* WARNING: Removing unreachable block (ram,0x00111a5f) */
/* WARNING: Removing unreachable block (ram,0x0011198e) */
/* WARNING: Removing unreachable block (ram,0x00111998) */
/* WARNING: Removing unreachable block (ram,0x00111a41) */
/* WARNING: Removing unreachable block (ram,0x001119a4) */
/* WARNING: Removing unreachable block (ram,0x001119ae) */
/* WARNING: Removing unreachable block (ram,0x00111a23) */
/* WARNING: Removing unreachable block (ram,0x001119b6) */
/* WARNING: Removing unreachable block (ram,0x001119c0) */
/* WARNING: Removing unreachable block (ram,0x00111a08) */
/* WARNING: Removing unreachable block (ram,0x001119c8) */
/* WARNING: Removing unreachable block (ram,0x001119de) */
/* WARNING: Removing unreachable block (ram,0x001119ea) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String * vformat<unsigned_int,char_const*>(String *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
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
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
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



/* RID_Alloc<RendererViewport::Viewport, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererViewport::Viewport,true>::~RID_Alloc
          (RID_Alloc<RendererViewport::Viewport,true> *this)

{
  long *plVar1;
  uint uVar2;
  Object *this_00;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00114ed0;
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 == 0) {
    uVar6 = (ulong)*(uint *)(this + 0x1c);
    uVar9 = (ulong)*(uint *)(this + 0x18);
    puVar11 = *(undefined8 **)(this + 8);
LAB_00111d22:
    if ((uint)uVar6 < (uint)uVar9) goto LAB_00111d65;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar11[lVar7],false);
      lVar8 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar8),false);
      if ((uint)(uVar6 / uVar9) <= (uint)lVar7) break;
      puVar11 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar2);
    print_error((String *)&local_58);
    pcVar3 = local_58;
    lVar7 = local_60;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar7 = local_60;
      }
    }
    local_60 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar9 = (ulong)*(uint *)(this + 0x18);
    puVar11 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar12 = 0;
      do {
        lVar7 = (uVar12 % uVar9) * 0x2f0 + puVar11[uVar12 / uVar9];
        if (-1 < *(int *)(lVar7 + 0x2e8)) {
          pvVar10 = *(void **)(lVar7 + 0x298);
          if (pvVar10 != (void *)0x0) {
            if (*(int *)(lVar7 + 700) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar7 + 0x2b8) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)(lVar7 + 700) = 0;
                *(undefined1 (*) [16])(lVar7 + 0x2a8) = (undefined1  [16])0x0;
              }
              else {
                lVar8 = 0;
                do {
                  piVar5 = (int *)(*(long *)(lVar7 + 0x2a0) + lVar8);
                  if (*piVar5 != 0) {
                    *piVar5 = 0;
                    Memory::free_static(*(void **)((long)pvVar10 + lVar8 * 2),false);
                    pvVar10 = *(void **)(lVar7 + 0x298);
                    *(undefined8 *)((long)pvVar10 + lVar8 * 2) = 0;
                  }
                  lVar8 = lVar8 + 4;
                } while ((ulong)uVar2 << 2 != lVar8);
                *(undefined4 *)(lVar7 + 700) = 0;
                *(undefined1 (*) [16])(lVar7 + 0x2a8) = (undefined1  [16])0x0;
                if (pvVar10 == (void *)0x0) goto LAB_00111cb7;
              }
            }
            Memory::free_static(pvVar10,false);
            Memory::free_static(*(void **)(lVar7 + 0x2a0),false);
          }
LAB_00111cb7:
          Projection::~Projection((Projection *)(lVar7 + 0x1a0));
          Projection::~Projection((Projection *)(lVar7 + 0x160));
          Projection::~Projection((Projection *)(lVar7 + 0xc0));
          if ((*(long *)(lVar7 + 0x68) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
          {
            this_00 = *(Object **)(lVar7 + 0x68);
            cVar4 = predelete_handler(this_00);
            if (cVar4 != '\0') {
              if (*(code **)(*(long *)this_00 + 0x140) ==
                  RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
                bVar13 = StringName::configured != '\0';
                *(code **)this_00 = RendererSceneRender::environment_get_canvas_max_layer;
                if ((((bVar13) &&
                     ((*(long *)(this_00 + 0x1e0) == 0 ||
                      (StringName::unref(), StringName::configured != '\0')))) &&
                    ((*(long *)(this_00 + 0x1c8) == 0 ||
                     (StringName::unref(), StringName::configured != '\0')))) &&
                   ((((*(long *)(this_00 + 0x1b0) == 0 ||
                      (StringName::unref(), StringName::configured != '\0')) &&
                     ((*(long *)(this_00 + 0x198) == 0 ||
                      (StringName::unref(), StringName::configured != '\0')))) &&
                    (*(long *)(this_00 + 0x180) != 0)))) {
                  StringName::unref();
                }
                *(undefined ***)this_00 = &PTR__initialize_classv_00114c10;
                Object::~Object(this_00);
              }
              else {
                (**(code **)(*(long *)this_00 + 0x140))(this_00);
              }
              Memory::free_static(this_00,false);
            }
          }
          uVar9 = (ulong)*(uint *)(this + 0x18);
          puVar11 = *(undefined8 **)(this + 8);
        }
        uVar6 = (ulong)*(uint *)(this + 0x1c);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar6);
      goto LAB_00111d22;
    }
    if (*(uint *)(this + 0x18) != 0) goto LAB_00111d65;
    Memory::free_static((void *)*puVar11,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar11 = *(undefined8 **)(this + 8);
LAB_00111d65:
  if (puVar11 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar11,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererViewport::Viewport, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererViewport::Viewport,true>::~RID_Alloc
          (RID_Alloc<RendererViewport::Viewport,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RendererViewport::~RendererViewport() */

void __thiscall RendererViewport::~RendererViewport(RendererViewport *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR_viewport_get_render_info_00114ef0;
  if (*(long *)(this + 0xb0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  RID_Alloc<RendererViewport::Viewport,true>::~RID_Alloc
            ((RID_Alloc<RendererViewport::Viewport,true> *)(this + 0x40));
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x34) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x18) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x18) + lVar4) = 0;
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
          pvVar5 = *(void **)(this + 0x10);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* RendererViewport::~RendererViewport() */

void __thiscall RendererViewport::~RendererViewport(RendererViewport *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR_viewport_get_render_info_00114ef0;
  if (*(long *)(this + 0xb0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  RID_Alloc<RendererViewport::Viewport,true>::~RID_Alloc
            ((RID_Alloc<RendererViewport::Viewport,true> *)(this + 0x40));
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x34) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x18) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x18) + lVar4) = 0;
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
            pvVar5 = *(void **)(this + 0x10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00112246;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x18),false);
  }
LAB_00112246:
  operator_delete(this,0xd0);
  return;
}



/* RBMap<RendererViewport::Viewport::CanvasKey, RendererViewport::Viewport::CanvasData*,
   Comparator<RendererViewport::Viewport::CanvasKey>, DefaultAllocator>::clear() */

void __thiscall
RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
::clear(RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar5) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RID_Alloc<RendererViewport::Viewport, true>::initialize_rid(RID) */

void __thiscall
RID_Alloc<RendererViewport::Viewport,true>::initialize_rid
          (RID_Alloc<RendererViewport::Viewport,true> *this,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  uVar2 = _LC146;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    pauVar3 = (undefined1 (*) [16])
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x2f0 +
              *(long *)(*(long *)(this + 8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(pauVar3[0x2e] + 8) < 0) {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar4 == (*(uint *)(pauVar3[0x2e] + 8) & 0x7fffffff)) {
        pauVar3[1][0] = 0;
        *(uint *)(pauVar3[0x2e] + 8) = uVar4;
        auVar6 = ZEXT416(_LC84);
        *(undefined8 *)pauVar3[5] = uVar2;
        *(undefined2 *)(pauVar3[7] + 0xc) = 0;
        *(undefined8 *)(pauVar3[3] + 8) = 0x3f80000000000000;
        *(undefined8 *)(pauVar3[1] + 4) = 0;
        *(undefined8 *)(pauVar3[1] + 0xc) = 0;
        *(undefined8 *)pauVar3[4] = 0x3e4ccccd;
        *(undefined4 *)(pauVar3[4] + 8) = 2;
        pauVar3[4][0xc] = 0;
        *(undefined8 *)(pauVar3[6] + 8) = 0;
        *(undefined8 *)pauVar3[7] = 0;
        *(undefined4 *)(pauVar3[7] + 8) = 0;
        pauVar3[7][0xe] = 0;
        *(undefined4 *)pauVar3[0xb] = 0x3f800000;
        *(undefined8 *)(pauVar3[0xb] + 4) = 0;
        *(undefined4 *)(pauVar3[0xb] + 0xc) = 0;
        *pauVar3 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar3[2] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar3[5] + 8) = (undefined1  [16])0x0;
        pauVar3[9] = auVar6;
        pauVar3[10] = auVar6;
        Projection::Projection((Projection *)(pauVar3 + 0xc));
        auVar6 = ZEXT416(_LC84);
        *(undefined4 *)pauVar3[0x12] = 0x3f800000;
        *(undefined8 *)(pauVar3[0x12] + 4) = 0;
        *(undefined4 *)(pauVar3[0x12] + 0xc) = 0;
        *(undefined4 *)pauVar3[0x15] = 0x3f800000;
        *(undefined8 *)(pauVar3[0x15] + 4) = 0;
        *(undefined4 *)(pauVar3[0x15] + 0xc) = 0;
        pauVar3[0x10] = auVar6;
        pauVar3[0x11] = auVar6;
        pauVar3[0x13] = auVar6;
        pauVar3[0x14] = auVar6;
        Projection::Projection((Projection *)(pauVar3 + 0x16));
        Projection::Projection((Projection *)(pauVar3 + 0x1a));
        uVar1 = _UNK_001151a8;
        uVar2 = __LC149;
        pauVar3[7][0xd] = 0;
        *(undefined8 *)pauVar3[0x28] = 0x3f80000000000000;
        *(undefined8 *)pauVar3[0x26] = uVar2;
        *(undefined8 *)(pauVar3[0x26] + 8) = uVar1;
        *(undefined8 *)pauVar3[0x1e] = 0;
        *(undefined4 *)(pauVar3[0x1e] + 8) = 0;
        *(undefined8 *)pauVar3[0x1f] = 0;
        *(undefined8 *)pauVar3[0x20] = 0;
        *(undefined8 *)(pauVar3[0x20] + 8) = 0;
        pauVar3[0x21][1] = 0;
        *(undefined8 *)(pauVar3[0x21] + 4) = 2;
        *(undefined8 *)pauVar3[0x24] = 0;
        *(undefined2 *)(pauVar3[0x24] + 0xc) = 1;
        *(undefined4 *)pauVar3[0x25] = 0x3f800000;
        *(undefined8 *)(pauVar3[0x25] + 8) = 0;
        *(undefined2 *)pauVar3[0x27] = 0;
        *(undefined4 *)(pauVar3[0x27] + 4) = 0xffffffff;
        *(undefined8 *)(pauVar3[0x27] + 8) = 0x3f800000;
        *(undefined8 *)(pauVar3[0x28] + 8) = 0;
        *(undefined8 *)(pauVar3[0x2b] + 8) = 2;
        *(undefined4 *)pauVar3[0x2e] = 0;
        *(undefined4 *)(pauVar3[2] + 4) = 1;
        *(undefined4 *)(pauVar3[5] + 4) = 2;
        *(undefined4 *)(pauVar3[0x1f] + 0xc) = 0xffffffff;
        *(undefined4 *)(pauVar3[0x24] + 8) = 0;
        *(undefined4 *)(pauVar3[7] + 8) = 0;
        *(undefined2 *)(pauVar3[0x1f] + 8) = 0x100;
        pauVar3[1][0] = 0;
        *(undefined1 (*) [16])(pauVar3[0x29] + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pauVar3[0x2a] + 8) = (undefined1  [16])0x0;
        pauVar3[0x2c] = (undefined1  [16])0x0;
        pauVar3[0x2d] = (undefined1  [16])0x0;
        pauVar3[0x22] = (undefined1  [16])0x0;
        pauVar3[0x23] = (undefined1  [16])0x0;
        return;
      }
      pcVar5 = "Attempting to initialize the wrong RID";
      uVar2 = 0xfc;
    }
    else {
      pcVar5 = "Initializing already initialized RID";
      uVar2 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar2,
                     "Method/function failed. Returning: nullptr",pcVar5,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* HashMap<int, Vector<BlitToScreen>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<BlitToScreen> > > >::_resize_and_rehash(unsigned
   int) */

void __thiscall
HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
::_resize_and_rehash
          (HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
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
/* HashMap<int, Vector<BlitToScreen>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<BlitToScreen> > > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
::operator[](HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
             *this,int *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__s;
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
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  undefined8 uVar34;
  void *__s_00;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  undefined1 (*pauVar46) [16];
  long in_FS_OFFSET;
  uint local_88;
  undefined8 local_50 [2];
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  uVar32 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  uVar31 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar42 = CONCAT44(0,uVar31);
  if (__s_00 == (void *)0x0) {
    local_50[0] = 0;
    uVar39 = uVar42 * 4;
    uVar2 = uVar42 * 8;
    uVar34 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar31 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar42 != uVar39);
        uVar32 = *param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar2);
        uVar32 = *param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
LAB_00112f86:
      if (iVar40 == 0) goto LAB_00112edc;
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar45 = *(long *)(this + 0x10);
      goto LAB_00112c2d;
    }
    uVar32 = *param_1;
    iVar40 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00112f86;
  }
  else {
    iVar40 = *(int *)(this + 0x2c);
    if (iVar40 == 0) {
      local_50[0] = 0;
LAB_00112edc:
      iVar40 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar30 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar43 = 1;
        uVar36 = uVar2;
      }
      else {
        uVar36 = uVar43 * uVar2;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar42;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar36;
      lVar37 = SUB168(auVar5 * auVar17,8);
      lVar45 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar5 * auVar17,8);
      uVar30 = *(uint *)(lVar45 + lVar37 * 4);
      if (uVar30 != 0) {
        uVar41 = 0;
        do {
          if ((uVar43 == uVar30) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10))) {
            pauVar33 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar44 * 8);
            goto LAB_00112bfb;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar44 + 1) * uVar2;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar37 = SUB168(auVar6 * auVar18,8);
          uVar30 = *(uint *)(lVar45 + lVar37 * 4);
          uVar44 = SUB164(auVar6 * auVar18,8);
        } while ((uVar30 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar30 * uVar2, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar44 + uVar31) - SUB164(auVar7 * auVar19,8)) * uVar2,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
      local_50[0] = 0;
LAB_00112c2d:
      uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar31 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar30 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar30 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar30 * uVar2;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar36;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar35;
      lVar37 = SUB168(auVar9 * auVar21,8);
      uVar31 = *(uint *)(lVar45 + lVar37 * 4);
      uVar43 = SUB164(auVar9 * auVar21,8);
      if (uVar31 != 0) {
        uVar44 = 0;
        do {
          if ((uVar31 == uVar30) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10) == uVar32)) {
            lVar45 = *(long *)((long)__s_00 + (ulong)uVar43 * 8);
            if (*(long *)(lVar45 + 0x20) != 0) {
              CowData<BlitToScreen>::_ref
                        ((CowData<BlitToScreen> *)(lVar45 + 0x20),(CowData *)local_50);
            }
            pauVar33 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar43 * 8);
            goto LAB_00112bfb;
          }
          uVar44 = uVar44 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar43 + 1) * uVar2;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar36;
          lVar37 = SUB168(auVar10 * auVar22,8);
          uVar31 = *(uint *)(lVar45 + lVar37 * 4);
          uVar43 = SUB164(auVar10 * auVar22,8);
        } while ((uVar31 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar36, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar43) -
                     SUB164(auVar11 * auVar23,8)) * uVar2, auVar24._8_8_ = 0, auVar24._0_8_ = uVar36
                , uVar44 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar42 * __LC79 < (float)(iVar40 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar33 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00112bfb;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  iVar40 = *param_1;
  pauVar33 = (undefined1 (*) [16])operator_new(0x28,"");
  *(undefined8 *)pauVar33[2] = 0;
  *(int *)pauVar33[1] = iVar40;
  *pauVar33 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar33;
  }
  else {
    *puVar3 = pauVar33;
    *(undefined8 **)(*pauVar33 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar33;
  uVar32 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar31 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
  uVar32 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar39 = 1;
    uVar32 = 1;
  }
  else {
    uVar39 = (ulong)uVar32;
  }
  uVar43 = 0;
  lVar45 = *(long *)(this + 0x10);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar31);
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar39 * lVar37;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar42;
  lVar38 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar38 * 4);
  iVar40 = SUB164(auVar13 * auVar25,8);
  uVar30 = *puVar1;
  pauVar29 = pauVar33;
  while (uVar30 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar30 * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar42;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar40 + uVar31) - SUB164(auVar14 * auVar26,8)) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar42;
    local_88 = SUB164(auVar15 * auVar27,8);
    pauVar46 = pauVar29;
    if (local_88 < uVar43) {
      *puVar1 = uVar32;
      puVar3 = (undefined8 *)(lVar4 + lVar38 * 8);
      pauVar46 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar29;
      uVar32 = uVar30;
      uVar43 = local_88;
    }
    uVar43 = uVar43 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar40 + 1) * lVar37;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar42;
    lVar38 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar45 + lVar38 * 4);
    iVar40 = SUB164(auVar16 * auVar28,8);
    pauVar29 = pauVar46;
    uVar30 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar4 + lVar38 * 8) = pauVar29;
  *puVar1 = uVar32;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00112bfb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar33[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Vector<BlitToScreen>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Vector<BlitToScreen> > > >::insert(int const&,
   Vector<BlitToScreen> const&, bool) */

int * HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
      ::insert(int *param_1,Vector *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
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
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  void *__s_00;
  long in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  char in_R8B;
  ulong uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  long in_FS_OFFSET;
  undefined1 (*local_90) [16];
  undefined1 (*pauStack_70) [16];
  long local_48;
  long local_40;
  
  puVar28 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar29 = (ulong)uVar22;
    uVar32 = uVar29 * 4;
    uVar34 = uVar29 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar29 != uVar32);
        goto LAB_001130c9;
      }
      memset(__s,0,uVar32);
      memset(__s_00,0,uVar34);
      iVar27 = *(int *)(param_2 + 0x2c);
      uVar23 = *puVar28;
      goto LAB_001130d4;
    }
    iVar27 = *(int *)(param_2 + 0x2c);
    uVar23 = *puVar28;
    if (__s_00 != (void *)0x0) goto LAB_001130d4;
  }
  else {
LAB_001130c9:
    iVar27 = *(int *)(param_2 + 0x2c);
    uVar23 = *puVar28;
LAB_001130d4:
    if (iVar27 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar21 = (uVar23 >> 0x10 ^ uVar23) * -0x7a143595;
      uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
      uVar33 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
        uVar33 = 1;
        uVar29 = uVar32;
      }
      else {
        uVar29 = uVar33 * uVar32;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29;
      lVar30 = SUB168(auVar4 * auVar12,8);
      uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar24 = SUB164(auVar4 * auVar12,8);
      if (uVar21 != 0) {
        uVar35 = 0;
        do {
          if ((uVar21 == uVar33) &&
             (uVar23 == *(uint *)(*(long *)((long)__s_00 + lVar30 * 8) + 0x10))) {
            lVar30 = *(long *)((long)__s_00 + (ulong)uVar24 * 8);
            if (*(long *)(lVar30 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<BlitToScreen>::_ref
                        ((CowData<BlitToScreen> *)(lVar30 + 0x20),(CowData *)(in_RCX + 8));
            }
            local_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar24 * 8);
            goto LAB_001133fb;
          }
          uVar35 = uVar35 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar24 + 1) * uVar32;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar34;
          lVar30 = SUB168(auVar5 * auVar13,8);
          uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar24 = SUB164(auVar5 * auVar13,8);
        } while ((uVar21 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar21 * uVar32, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar34, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar24) -
                               SUB164(auVar6 * auVar14,8)) * uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar34, uVar35 <= SUB164(auVar7 * auVar15,8)));
      }
    }
  }
  if ((float)uVar22 * __LC79 < (float)(iVar27 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined1 (*) [16])0x0;
      goto LAB_001133fb;
    }
    _resize_and_rehash((HashMap<int,Vector<BlitToScreen>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Vector<BlitToScreen>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_48 = 0;
  uVar22 = *puVar28;
  if (*(long *)(in_RCX + 8) == 0) {
    pauStack_70 = (undefined1 (*) [16])operator_new(0x28,"");
    *(uint *)pauStack_70[1] = uVar22;
    *(undefined8 *)pauStack_70[2] = 0;
    *pauStack_70 = (undefined1  [16])0x0;
LAB_001132d6:
    puVar25 = *(undefined8 **)(param_2 + 0x20);
    local_90 = pauStack_70;
    if (puVar25 != (undefined8 *)0x0) goto LAB_001132e3;
LAB_00113475:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_70;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_70;
    local_90 = pauStack_70;
  }
  else {
    CowData<BlitToScreen>::_ref((CowData<BlitToScreen> *)&local_48,(CowData *)(in_RCX + 8));
    lVar30 = local_48;
    local_90 = (undefined1 (*) [16])operator_new(0x28,"");
    *(uint *)local_90[1] = uVar22;
    *(undefined8 *)local_90[2] = 0;
    *(undefined8 *)*local_90 = 0;
    *(undefined8 *)(*local_90 + 8) = 0;
    pauStack_70 = local_90;
    if (lVar30 == 0) goto LAB_001132d6;
    CowData<BlitToScreen>::_ref((CowData<BlitToScreen> *)(local_90 + 2),(CowData *)&local_48);
    LOCK();
    plVar1 = (long *)(lVar30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001132d6;
    Memory::free_static((void *)(local_48 + -0x10),false);
    puVar25 = *(undefined8 **)(param_2 + 0x20);
    if (puVar25 == (undefined8 *)0x0) goto LAB_00113475;
LAB_001132e3:
    if (in_R8B == '\0') {
      *puVar25 = local_90;
      *(undefined8 **)(*local_90 + 8) = puVar25;
      *(undefined1 (**) [16])(param_2 + 0x20) = local_90;
    }
    else {
      lVar30 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar30 + 8) = local_90;
      *(long *)*local_90 = lVar30;
      *(undefined1 (**) [16])(param_2 + 0x18) = local_90;
    }
  }
  uVar22 = (*puVar28 >> 0x10 ^ *puVar28) * -0x7a143595;
  uVar23 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
  uVar22 = uVar23 ^ uVar23 >> 0x10;
  if (uVar23 == uVar23 >> 0x10) {
    uVar32 = 1;
    uVar22 = 1;
  }
  else {
    uVar32 = (ulong)uVar22;
  }
  lVar30 = *(long *)(param_2 + 0x10);
  uVar33 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar23);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar32 * lVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar34;
  lVar31 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar28 = (uint *)(lVar30 + lVar31 * 4);
  iVar27 = SUB164(auVar8 * auVar16,8);
  uVar21 = *puVar28;
  pauVar20 = local_90;
  while (uVar21 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar21 * lVar2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((iVar27 + uVar23) - SUB164(auVar9 * auVar17,8)) * lVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    uVar24 = SUB164(auVar10 * auVar18,8);
    pauVar36 = pauVar20;
    if (uVar24 < uVar33) {
      *puVar28 = uVar22;
      puVar25 = (undefined8 *)(lVar3 + lVar31 * 8);
      pauVar36 = (undefined1 (*) [16])*puVar25;
      *puVar25 = pauVar20;
      uVar22 = uVar21;
      uVar33 = uVar24;
    }
    uVar33 = uVar33 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar27 + 1) * lVar2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    lVar31 = SUB168(auVar11 * auVar19,8);
    puVar28 = (uint *)(lVar30 + lVar31 * 4);
    iVar27 = SUB164(auVar11 * auVar19,8);
    pauVar20 = pauVar36;
    uVar21 = *puVar28;
  }
  *(undefined1 (**) [16])(lVar3 + lVar31 * 8) = pauVar20;
  *puVar28 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001133fb:
  *(undefined1 (**) [16])param_1 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RendererViewport::Viewport*>::_realloc(long) */

undefined8 __thiscall
CowData<RendererViewport::Viewport*>::_realloc
          (CowData<RendererViewport::Viewport*> *this,long param_1)

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
/* Error CowData<RendererViewport::Viewport*>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererViewport::Viewport*>::resize<false>
          (CowData<RendererViewport::Viewport*> *this,long param_1)

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
  if (param_1 * 8 == 0) {
LAB_00113910:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00113910;
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
        goto LAB_00113821;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00113821:
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



/* RBMap<RendererViewport::Viewport::CanvasKey, RendererViewport::Viewport::CanvasData*,
   Comparator<RendererViewport::Viewport::CanvasKey>,
   DefaultAllocator>::_insert_rb_fix(RBMap<RendererViewport::Viewport::CanvasKey,
   RendererViewport::Viewport::CanvasData*, Comparator<RendererViewport::Viewport::CanvasKey>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
::_insert_rb_fix(RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
                 *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_00113a6d;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00113b90;
LAB_00113a16:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00113a16;
LAB_00113b90:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_00113a53:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00113c82:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_00113c82;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00113c50;
LAB_00113ae0:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00113ae0;
LAB_00113c50:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_00113a53;
    }
LAB_00113a6d:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<RendererViewport::Viewport::CanvasKey, RendererViewport::Viewport::CanvasData*,
   Comparator<RendererViewport::Viewport::CanvasKey>,
   DefaultAllocator>::_insert(RendererViewport::Viewport::CanvasKey const&,
   RendererViewport::Viewport::CanvasData* const&) */

Element * __thiscall
RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
::_insert(RBMap<RendererViewport::Viewport::CanvasKey,RendererViewport::Viewport::CanvasData*,Comparator<RendererViewport::Viewport::CanvasKey>,DefaultAllocator>
          *this,CanvasKey *param_1,CanvasData **param_2)

{
  CanvasData *pCVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  Element *pEVar11;
  bool bVar12;
  
  pEVar10 = *(Element **)this;
  if (*(Element **)(pEVar10 + 0x10) != *(Element **)(this + 8)) {
    pEVar6 = *(Element **)(pEVar10 + 0x10);
    do {
      pEVar10 = pEVar6;
      if (*(long *)(pEVar10 + 0x30) == *(long *)param_1) {
        if (*(ulong *)(pEVar10 + 0x38) <= *(ulong *)(param_1 + 8)) {
          if (*(ulong *)(param_1 + 8) <= *(ulong *)(pEVar10 + 0x38)) {
            *(CanvasData **)(pEVar10 + 0x40) = *param_2;
            return pEVar10;
          }
          goto LAB_00113d02;
        }
LAB_00113cda:
        pEVar6 = *(Element **)(pEVar10 + 0x10);
      }
      else {
        if (*(long *)param_1 < *(long *)(pEVar10 + 0x30)) goto LAB_00113cda;
LAB_00113d02:
        pEVar6 = *(Element **)(pEVar10 + 8);
      }
    } while (*(Element **)(this + 8) != pEVar6);
  }
  pEVar4 = (Element *)operator_new(0x48,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  pCVar1 = *param_2;
  *(Element **)(pEVar4 + 0x18) = pEVar10;
  *(undefined1 (*) [16])(pEVar4 + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(pEVar4 + 0x30) = uVar2;
  *(undefined8 *)(pEVar4 + 0x38) = uVar3;
  pEVar6 = *(Element **)(this + 8);
  *(undefined4 *)pEVar4 = 0;
  *(CanvasData **)(pEVar4 + 0x40) = pCVar1;
  *(Element **)(pEVar4 + 8) = pEVar6;
  *(Element **)(pEVar4 + 0x10) = pEVar6;
  if (*(Element **)this == pEVar10) {
LAB_00113d77:
    *(Element **)(pEVar10 + 0x10) = pEVar4;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar4 + 0x10);
    pEVar11 = *(Element **)this;
    pEVar8 = pEVar6;
    if (pEVar9 != pEVar6) goto LAB_00113d98;
    pEVar6 = pEVar10;
    pEVar5 = pEVar10;
    if (pEVar4 == *(Element **)(pEVar10 + 8)) goto LAB_00113e50;
LAB_00113e5d:
    if (pEVar6 == pEVar11) {
      pEVar6 = (Element *)0x0;
    }
  }
  else {
    if (*(long *)param_1 == *(long *)(pEVar10 + 0x30)) {
      if (*(ulong *)(param_1 + 8) < *(ulong *)(pEVar10 + 0x38)) goto LAB_00113d77;
    }
    else if (*(long *)param_1 < *(long *)(pEVar10 + 0x30)) goto LAB_00113d77;
    *(Element **)(pEVar10 + 8) = pEVar4;
    pEVar8 = *(Element **)(pEVar4 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar11 = *(Element **)this;
    pEVar5 = pEVar10;
    pEVar7 = pEVar6;
    if (pEVar9 == pEVar8) {
LAB_00113e50:
      do {
        pEVar6 = *(Element **)(pEVar5 + 0x18);
        bVar12 = pEVar5 == *(Element **)(pEVar6 + 8);
        pEVar5 = pEVar6;
      } while (bVar12);
      goto LAB_00113e5d;
    }
LAB_00113d98:
    do {
      pEVar11 = pEVar8 + 0x10;
      pEVar6 = pEVar8;
      pEVar8 = *(Element **)pEVar11;
    } while (*(Element **)pEVar11 != pEVar9);
  }
  *(Element **)(pEVar4 + 0x20) = pEVar6;
  if (*(Element **)(this + 8) == pEVar7) {
    pEVar9 = pEVar4;
    pEVar7 = pEVar10;
    if (pEVar4 == *(Element **)(pEVar10 + 0x10)) {
      do {
        pEVar10 = *(Element **)(pEVar7 + 0x18);
        bVar12 = pEVar7 == *(Element **)(pEVar10 + 0x10);
        pEVar9 = pEVar7;
        pEVar7 = pEVar10;
      } while (bVar12);
    }
    if (*(Element **)this != pEVar9) goto LAB_00113dcc;
    *(undefined8 *)(pEVar4 + 0x28) = 0;
    if (pEVar6 == (Element *)0x0) goto LAB_00113de6;
LAB_00113dd5:
    *(Element **)(pEVar6 + 0x28) = pEVar4;
    pEVar10 = *(Element **)(pEVar4 + 0x28);
    if (pEVar10 == (Element *)0x0) goto LAB_00113de6;
  }
  else {
    do {
      pEVar10 = pEVar7;
      pEVar7 = *(Element **)(pEVar10 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar10 + 8));
LAB_00113dcc:
    *(Element **)(pEVar4 + 0x28) = pEVar10;
    if (pEVar6 != (Element *)0x0) goto LAB_00113dd5;
  }
  *(Element **)(pEVar10 + 0x20) = pEVar4;
LAB_00113de6:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar4);
  return pEVar4;
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
LAB_001141e0:
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
  if (lVar10 == 0) goto LAB_001141e0;
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
LAB_0011414c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_001140df;
  }
  else {
    if (lVar11 != 0) {
      uVar8 = _realloc(this,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_0011414c;
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
  uVar3 = _UNK_001151e8;
  uVar8 = __LC213;
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
LAB_001140df:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00114368) */
/* WARNING: Removing unreachable block (ram,0x00114498) */
/* WARNING: Removing unreachable block (ram,0x00114660) */
/* WARNING: Removing unreachable block (ram,0x001144a4) */
/* WARNING: Removing unreachable block (ram,0x001144ae) */
/* WARNING: Removing unreachable block (ram,0x00114640) */
/* WARNING: Removing unreachable block (ram,0x001144ba) */
/* WARNING: Removing unreachable block (ram,0x001144c4) */
/* WARNING: Removing unreachable block (ram,0x00114620) */
/* WARNING: Removing unreachable block (ram,0x001144d0) */
/* WARNING: Removing unreachable block (ram,0x001144da) */
/* WARNING: Removing unreachable block (ram,0x00114600) */
/* WARNING: Removing unreachable block (ram,0x001144e6) */
/* WARNING: Removing unreachable block (ram,0x001144f0) */
/* WARNING: Removing unreachable block (ram,0x001145e0) */
/* WARNING: Removing unreachable block (ram,0x001144fc) */
/* WARNING: Removing unreachable block (ram,0x00114506) */
/* WARNING: Removing unreachable block (ram,0x001145c0) */
/* WARNING: Removing unreachable block (ram,0x00114512) */
/* WARNING: Removing unreachable block (ram,0x0011451c) */
/* WARNING: Removing unreachable block (ram,0x001145a0) */
/* WARNING: Removing unreachable block (ram,0x00114524) */
/* WARNING: Removing unreachable block (ram,0x0011453a) */
/* WARNING: Removing unreachable block (ram,0x00114546) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
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



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererViewport::Viewport, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererViewport::Viewport,true>::allocate_rid
          (RID_Alloc<RendererViewport::Viewport,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
    std::__throw_system_error(iVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
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
      }
      uVar13 = 0;
      goto LAB_001148b6;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar7;
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x2f0,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x2e8);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0xbc;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x2f0 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x2e8) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_001148b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererViewport::~RendererViewport() */

void __thiscall RendererViewport::~RendererViewport(RendererViewport *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererViewport::Viewport, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererViewport::Viewport,true>::~RID_Alloc
          (RID_Alloc<RendererViewport::Viewport,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderSceneBuffersExtension::~RenderSceneBuffersExtension() */

void __thiscall
RenderSceneBuffersExtension::~RenderSceneBuffersExtension(RenderSceneBuffersExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderSceneBuffersConfiguration::~RenderSceneBuffersConfiguration() */

void __thiscall
RenderSceneBuffersConfiguration::~RenderSceneBuffersConfiguration
          (RenderSceneBuffersConfiguration *this)

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



