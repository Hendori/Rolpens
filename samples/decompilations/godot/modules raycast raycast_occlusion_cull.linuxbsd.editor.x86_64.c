
/* RaycastOcclusionCull::set_build_quality(RenderingServer::ViewportOcclusionCullingBuildQuality) */

void __thiscall RaycastOcclusionCull::set_build_quality(RaycastOcclusionCull *this,int param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(this + 200) != param_2) {
    puVar1 = *(undefined8 **)(this + 0x80);
    *(int *)(this + 200) = param_2;
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      *(undefined1 *)((long)puVar1 + 0x21) = 1;
    }
  }
  return;
}



/* RaycastOcclusionCull::is_occluder(RID) */

ulong __thiscall RaycastOcclusionCull::is_occluder(RaycastOcclusionCull *this,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((uint)param_2 < *(uint *)(this + 0x2c)) {
    uVar2 = 0;
    if (param_2 >> 0x20 != 0x7fffffff) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
              *(long *)(*(long *)(this + 0x18) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
      uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),
                       (*(uint *)(lVar1 + 8) & 0x7fffffff) == (uint)(param_2 >> 0x20));
    }
    return uVar2 & 0xffffffff;
  }
  return 0;
}



/* RaycastOcclusionCull::Scenario::_commit_scene(void*) */

void RaycastOcclusionCull::Scenario::_commit_scene(void *param_1)

{
  rtcCommitScene(*(undefined8 *)
                  ((long)param_1 + (long)(1 - *(int *)((long)param_1 + 0x20)) * 8 + 0x10));
  *(undefined1 *)((long)param_1 + 8) = 1;
  return;
}



/* RaycastOcclusionCull::Scenario::_raycast(unsigned int,
   RaycastOcclusionCull::Scenario::RaycastThreadData const*) const */

void __thiscall
RaycastOcclusionCull::Scenario::_raycast(Scenario *this,uint param_1,RaycastThreadData *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *local_30;
  undefined1 local_28 [16];
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0xffffffff;
  local_38 = _LC0;
  local_30 = &local_14;
  local_28 = (undefined1  [16])0x0;
  rtcIntersect16(*(long *)(param_2 + 8) + (ulong)(param_1 << 4) * 4,
                 *(undefined8 *)(this + (long)*(int *)(this + 0x20) * 8 + 0x10),
                 (ulong)param_1 * 0x500 + *(long *)param_2,&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<float, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<float,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RaycastOcclusionCull::occluder_initialize(RID) */

void __thiscall RaycastOcclusionCull::occluder_initialize(RaycastOcclusionCull *this,ulong param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  
  pvVar3 = operator_new(0x48,"");
  *(undefined1 (*) [16])((long)pvVar3 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)pvVar3 + 0x28) = (undefined1  [16])0x0;
  lVar2 = *(long *)(this + 0x18);
  *(undefined8 *)((long)pvVar3 + 0x40) = 2;
  uVar6 = *(uint *)(this + 0x28);
  *(undefined8 *)((long)pvVar3 + 8) = 0;
  uVar1 = *(uint *)(this + 0x2c);
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  if ((param_2 != 0) && ((uint)param_2 < uVar1)) {
    puVar4 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)uVar6) * 0x10 +
             *(long *)(lVar2 + ((param_2 & 0xffffffff) / (ulong)uVar6) * 8));
    if ((int)*(uint *)(puVar4 + 1) < 0) {
      uVar6 = (uint)(param_2 >> 0x20);
      if (uVar6 == (*(uint *)(puVar4 + 1) & 0x7fffffff)) {
        *(uint *)(puVar4 + 1) = uVar6;
        *puVar4 = pvVar3;
        return;
      }
      pcVar7 = "Attempting to initialize the wrong RID";
      uVar5 = 0xfc;
    }
    else {
      pcVar7 = "Initializing already initialized RID";
      uVar5 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar5,
                     "Method/function failed. Returning: nullptr",pcVar7,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
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



/* RaycastOcclusionCull::RaycastHZBuffer::clear() */

void __thiscall RaycastOcclusionCull::RaycastHZBuffer::clear(RaycastHZBuffer *this)

{
  RendererSceneOcclusionCull::HZBuffer::clear();
  if (*(void **)(this + 0x80) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x80),false);
    *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  }
  if (*(int *)(this + 0x90) != 0) {
    *(undefined4 *)(this + 0x90) = 0;
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}



/* RaycastOcclusionCull::RaycastHZBuffer::resize(Vector2i const&) */

void __thiscall
RaycastOcclusionCull::RaycastHZBuffer::resize(RaycastHZBuffer *this,Vector2i *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  void *__s;
  uint uVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  cVar2 = Vector2i::operator==(param_1,(Vector2i *)&local_28);
  if (cVar2 == '\0') {
    if (*(int *)(this + 0x18) != 0) {
      cVar2 = Vector2i::operator==(param_1,*(Vector2i **)(this + 0x20));
      if (cVar2 != '\0') goto LAB_001005c3;
    }
    RendererSceneOcclusionCull::HZBuffer::resize((Vector2i *)this);
    fVar7 = (float)*(int *)(param_1 + 4) * _LC15;
    if ((float)((uint)fVar7 & _LC17) < _LC16) {
      fVar7 = (float)((uint)((float)(int)fVar7 + (float)(-(uint)((float)(int)fVar7 < fVar7) & _LC18)
                            ) | ~_LC17 & (uint)fVar7);
    }
    fVar6 = (float)*(int *)param_1 * _LC15;
    if ((float)((uint)fVar6 & _LC17) < _LC16) {
      fVar6 = (float)((uint)((float)(int)fVar6 + (float)(-(uint)((float)(int)fVar6 < fVar6) & _LC18)
                            ) | ~_LC17 & (uint)fVar6);
    }
    uVar3 = (int)fVar6 * (int)fVar7;
    *(ulong *)(this + 0x70) = CONCAT44((int)fVar7,(int)fVar6);
    *(uint *)(this + 0x78) = uVar3;
    if (*(void **)(this + 0x80) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x80),false);
      uVar3 = *(uint *)(this + 0x78);
    }
    uVar4 = Memory::alloc_static((ulong)uVar3 * 0x500 + 0x40,false);
    *(ulong *)(this + 0x80) = uVar4;
    uVar5 = *(int *)(this + 0x78) * 0x10;
    *(ulong *)(this + 0x88) = (uVar4 & 0xffffffffffffffc0) + 0x40;
    uVar3 = uVar5;
    if (uVar5 < *(uint *)(this + 0x90)) {
      *(uint *)(this + 0x90) = uVar5;
      __s = *(void **)(this + 0x98);
    }
    else {
      __s = *(void **)(this + 0x98);
      if (*(uint *)(this + 0x90) < uVar5) {
        if (*(uint *)(this + 0x94) < uVar5) {
          uVar3 = uVar5 - 1 >> 1 | uVar5 - 1;
          uVar3 = uVar3 >> 2 | uVar3;
          uVar3 = uVar3 >> 4 | uVar3;
          uVar3 = uVar3 | uVar3 >> 8;
          uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
          *(uint *)(this + 0x94) = uVar3;
          __s = (void *)Memory::realloc_static(__s,(ulong)uVar3 * 4,false);
          *(void **)(this + 0x98) = __s;
          if (__s == (void *)0x0) {
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar3 = *(int *)(this + 0x78) << 4;
        }
        *(uint *)(this + 0x90) = uVar5;
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      memset(__s,-1,(ulong)uVar3 << 2);
      return;
    }
  }
  else {
    if ((code *)**(undefined8 **)this != clear) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001005fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)this)(this);
        return;
      }
      goto LAB_0010068d;
    }
    RendererSceneOcclusionCull::HZBuffer::clear();
    if (*(void **)(this + 0x80) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x80),false);
      *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
    }
    if (*(int *)(this + 0x90) != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
LAB_001005c3:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010068d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::RaycastHZBuffer::_generate_camera_rays(RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData
   const*, int, int) */

void __thiscall
RaycastOcclusionCull::RaycastHZBuffer::_generate_camera_rays
          (RaycastHZBuffer *this,CameraRayThreadData *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  CameraRayThreadData CVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  float fVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar19 = _LC24;
  if (*(int *)(this + 0x18) == 0) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar18 = (code *)invalidInstructionException();
    (*pcVar18)();
  }
  if (param_2 < param_3) {
    fVar1 = *(float *)(param_1 + 0x38);
    iVar15 = *(int *)(this + 0x70);
    iVar16 = **(int **)(this + 0x20);
    fVar2 = *(float *)(param_1 + 8);
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x34);
    iVar17 = (*(int **)(this + 0x20))[1];
    fVar5 = *(float *)(param_1 + 0x40);
    fVar6 = *(float *)(param_1 + 0x3c);
    fVar7 = *(float *)(param_1 + 0x30);
    fVar8 = *(float *)(param_1 + 4);
    CVar14 = param_1[0x48];
    fVar9 = *(float *)(param_1 + 0x2c);
    pfVar22 = (float *)((long)param_2 * 0x500 + *(long *)(this + 0x88));
    fVar10 = *(float *)(param_1 + 0x28);
    fVar11 = *(float *)(param_1 + 0x24);
    do {
      uVar21 = 0;
      pfVar20 = pfVar22;
      do {
        pfVar20[0x30] = fVar8;
        fVar25 = ((float)(int)((uVar21 & 3) + (param_2 % iVar15) * 4) + fVar19) / (float)iVar16;
        fVar26 = ((float)(((int)uVar21 >> 2) + (param_2 / iVar15) * 4) + fVar19) / (float)iVar17;
        fVar23 = fVar26 * fVar3 + fVar1 * fVar25 + fVar9;
        fVar28 = fVar26 * fVar5 + fVar4 * fVar25 + fVar10;
        fVar25 = fVar26 * fVar6 + fVar25 * fVar7 + fVar11;
        if (CVar14 == (CameraRayThreadData)0x0) {
          fVar12 = *(float *)(param_1 + 0x1c);
          fVar13 = *(float *)(param_1 + 0x20);
          fVar28 = fVar28 - fVar12;
          fVar25 = fVar25 - *(float *)(param_1 + 0x18);
          fVar23 = fVar23 - fVar13;
          fVar27 = fVar28 * fVar28 + fVar25 * fVar25 + fVar23 * fVar23;
          if (fVar27 == 0.0) {
            fVar27 = 0.0;
            fVar24 = 0.0;
            fVar26 = 0.0;
          }
          else {
            fVar27 = SQRT(fVar27);
            fVar26 = fVar25 / fVar27;
            fVar24 = fVar28 / fVar27;
            fVar27 = fVar23 / fVar27;
          }
          *pfVar20 = *(float *)(param_1 + 0x18);
          pfVar20[0x10] = fVar12;
          pfVar20[0x20] = fVar13;
          pfVar20[0x30] =
               fVar8 / (*(float *)(param_1 + 0xc) * fVar26 + *(float *)(param_1 + 0x10) * fVar24 +
                       *(float *)(param_1 + 0x14) * fVar27);
        }
        else {
          fVar26 = *(float *)(param_1 + 0xc);
          fVar24 = *(float *)(param_1 + 0x10);
          fVar27 = *(float *)(param_1 + 0x14);
          *pfVar20 = fVar25 - fVar8 * fVar26;
          pfVar20[0x10] = fVar28 - fVar8 * fVar24;
          pfVar20[0x20] = fVar23 - fVar8 * fVar27;
        }
        uVar21 = uVar21 + 1;
        pfVar20[0x40] = fVar26;
        pfVar20[0x50] = fVar24;
        pfVar20[0x60] = fVar27;
        pfVar20[0x80] = fVar2;
        pfVar20[0x70] = 0.0;
        pfVar20[0xb0] = 0.0;
        pfVar20[0x90] = -NAN;
        pfVar20[0x120] = -NAN;
        pfVar20 = pfVar20 + 1;
      } while (uVar21 != 0x10);
      param_2 = param_2 + 1;
      pfVar22 = pfVar22 + 0x140;
    } while (param_3 != param_2);
  }
  return;
}



/* RaycastOcclusionCull::RaycastHZBuffer::_camera_rays_threaded(unsigned int,
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData const*) */

void __thiscall
RaycastOcclusionCull::RaycastHZBuffer::_camera_rays_threaded
          (RaycastHZBuffer *this,uint param_1,CameraRayThreadData *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)param_2;
  uVar2 = *(uint *)(this + 0x78);
  uVar3 = uVar2 * param_1;
  if (param_1 + 1 != uVar1) {
    uVar2 = (uVar2 + uVar3) / uVar1;
  }
  _generate_camera_rays(this,param_2,uVar3 / uVar1,uVar2);
  return;
}



/* RaycastOcclusionCull::RaycastHZBuffer::sort_rays(Vector3 const&, bool) */

void RaycastOcclusionCull::RaycastHZBuffer::sort_rays(Vector3 *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_4c;
  
  cVar6 = RendererSceneOcclusionCull::HZBuffer::is_empty();
  if (cVar6 != '\0') {
    _err_print_error("sort_rays","modules/raycast/raycast_occlusion_cull.cpp",0xa2,
                     "Condition \"is_empty()\" is true.",0,0);
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_00100bc0:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar1 = **(int **)(param_1 + 0x20);
  iVar2 = (*(int **)(param_1 + 0x20))[1];
  iVar3 = *(int *)(param_1 + 0x74);
  if (0 < iVar3) {
    local_4c = 0;
    iVar4 = *(int *)(param_1 + 0x70);
    iVar9 = 0;
    iVar11 = 0;
    iVar16 = 0;
    do {
      iVar15 = 0;
      iVar8 = 4;
      iVar13 = 0;
      if (0 < iVar4) {
        do {
          iVar10 = 4 - iVar8;
          iVar14 = local_4c;
          iVar12 = iVar16;
          do {
            iVar7 = iVar15;
            do {
              if ((iVar7 < iVar1) && (iVar14 < iVar2)) {
                if (*(int *)(param_1 + 0x28) == 0) goto LAB_00100bc0;
                *(undefined4 *)(**(long **)(param_1 + 0x30) + (long)(iVar7 + iVar12) * 4) =
                     *(undefined4 *)
                      ((long)(iVar7 + iVar10) * 4 + 0x200 + *(long *)(param_1 + 0x88) +
                      (long)(iVar13 + iVar9) * 0x500);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != iVar8);
            iVar10 = iVar10 + 4;
            iVar14 = iVar14 + 1;
            iVar12 = iVar12 + iVar1;
          } while (iVar10 != 0x14 - iVar8);
          iVar8 = iVar8 + 4;
          iVar15 = iVar15 + 4;
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar4);
      }
      iVar11 = iVar11 + 1;
      local_4c = local_4c + 4;
      iVar16 = iVar16 + iVar1 * 4;
      iVar9 = iVar9 + iVar4;
    } while (iVar11 != iVar3);
  }
  return;
}



/* RaycastOcclusionCull::Scenario::_transform_vertices_range(Vector3 const*, float*, Transform3D
   const&, int, int) */

void __thiscall
RaycastOcclusionCull::Scenario::_transform_vertices_range
          (Scenario *this,Vector3 *param_1,float *param_2,Transform3D *param_3,int param_4,
          int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Vector3 *pVVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  if (param_4 < param_5) {
    pVVar8 = param_1 + (long)(param_4 * 3) * 4;
    pfVar9 = param_2 + param_4 * 3;
    do {
      pfVar10 = pfVar9 + 3;
      fVar1 = *(float *)(pVVar8 + 8);
      fVar11 = (float)*(undefined8 *)pVVar8;
      fVar12 = (float)((ulong)*(undefined8 *)pVVar8 >> 0x20);
      fVar2 = *(float *)(param_3 + 0x10);
      uVar4 = *(undefined8 *)param_3;
      uVar5 = *(undefined8 *)(param_3 + 8);
      fVar3 = *(float *)(param_3 + 4);
      uVar6 = *(undefined8 *)(param_3 + 0x10);
      uVar7 = *(undefined8 *)(param_3 + 0x24);
      pfVar9[2] = *(float *)(param_3 + 0x18) * fVar11 + *(float *)(param_3 + 0x1c) * fVar12 +
                  *(float *)(param_3 + 0x20) * fVar1 + *(float *)(param_3 + 0x2c);
      *(ulong *)pfVar9 =
           CONCAT44(fVar2 * fVar12 + fVar11 * (float)((ulong)uVar5 >> 0x20) +
                    (float)((ulong)uVar6 >> 0x20) * fVar1 + (float)((ulong)uVar7 >> 0x20),
                    fVar3 * fVar12 + fVar11 * (float)uVar4 + (float)uVar5 * fVar1 + (float)uVar7);
      pVVar8 = pVVar8 + 0xc;
      pfVar9 = pfVar10;
    } while (param_2 + param_4 * 3 + (ulong)(uint)(param_5 - param_4) * 3 != pfVar10);
  }
  return;
}



/* RaycastOcclusionCull::Scenario::_transform_vertices_thread(unsigned int,
   RaycastOcclusionCull::Scenario::TransformThreadData*) */

void __thiscall
RaycastOcclusionCull::Scenario::_transform_vertices_thread
          (Scenario *this,uint param_1,TransformThreadData *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar1 = *(uint *)param_2;
  uVar3 = uVar2 * param_1;
  if (param_1 + 1 != uVar1) {
    uVar2 = (uVar2 + uVar3) / uVar1;
  }
  _transform_vertices_range
            (this,*(Vector3 **)(param_2 + 0x38),*(float **)(param_2 + 0x40),
             (Transform3D *)(param_2 + 8),uVar3 / uVar1,uVar2);
  return;
}



/* RaycastOcclusionCull::Scenario::free() */

void __thiscall RaycastOcclusionCull::Scenario::free(Scenario *this)

{
  Thread *this_00;
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = Thread::is_started();
    if (cVar1 != '\0') {
      Thread::wait_to_finish();
    }
    this_00 = *(Thread **)this;
    Thread::~Thread(this_00);
    Memory::free_static(this_00,false);
    *(undefined8 *)this = 0;
  }
  if (*(long *)(this + 0x10) != 0) {
    rtcReleaseScene();
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (*(long *)(this + 0x18) != 0) {
    rtcReleaseScene();
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}



/* RaycastOcclusionCull::remove_scenario(RID) */

ulong __thiscall RaycastOcclusionCull::remove_scenario(RaycastOcclusionCull *this,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
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
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  long *plVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  uint *puVar46;
  
  lVar5 = *(long *)(this + 0x70);
  if ((lVar5 != 0) && (*(int *)(this + 0x94) != 0)) {
    uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4));
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
    uVar34 = param_2 * 0x3ffff - 1;
    uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
    uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
    uVar34 = uVar34 >> 0x16 ^ uVar34;
    uVar41 = uVar34 & 0xffffffff;
    if ((int)uVar34 == 0) {
      uVar41 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar41 * lVar6;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar44;
    lVar39 = SUB168(auVar8 * auVar21,8);
    uVar43 = *(uint *)(*(long *)(this + 0x78) + lVar39 * 4);
    uVar37 = SUB164(auVar8 * auVar21,8);
    if (uVar43 != 0) {
      uVar45 = 0;
      do {
        if (((uint)uVar41 == uVar43) && (param_2 == *(long *)(*(long *)(lVar5 + lVar39 * 8) + 0x10))
           ) {
          uVar34 = Scenario::free((Scenario *)(*(long *)(lVar5 + (ulong)uVar37 * 8) + 0x18));
          lVar5 = *(long *)(this + 0x70);
          if (lVar5 == 0) {
            return uVar34;
          }
          if (*(uint *)(this + 0x94) == 0) {
            return (ulong)*(uint *)(this + 0x94);
          }
          lVar6 = *(long *)(this + 0x78);
          uVar43 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4);
          uVar44 = CONCAT44(0,uVar43);
          lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar41 * lVar39;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar44;
          auVar12 = auVar12 * auVar25;
          uVar37 = *(uint *)(lVar6 + auVar12._8_8_ * 4);
          uVar34 = (ulong)auVar12._8_4_;
          if (uVar37 == 0) {
            return auVar12._0_8_;
          }
          uVar45 = 0;
          uVar36 = auVar12._8_8_;
          while( true ) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((int)uVar34 + 1) * lVar39;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar44;
            auVar15 = auVar15 * auVar28;
            uVar40 = auVar15._8_8_;
            uVar35 = auVar15._0_8_;
            uVar38 = auVar15._8_4_;
            if (((uint)uVar41 == uVar37) &&
               (uVar35 = *(ulong *)(lVar5 + uVar36 * 8), param_2 == *(long *)(uVar35 + 0x10)))
            break;
            uVar37 = *(uint *)(lVar6 + uVar40 * 4);
            uVar34 = uVar40 & 0xffffffff;
            uVar45 = uVar45 + 1;
            if (uVar37 == 0) {
              return uVar35;
            }
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar37 * lVar39;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar44;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar43 + uVar38) - SUB164(auVar13 * auVar26,8)) * lVar39;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar44;
            uVar36 = uVar40;
            if (SUB164(auVar14 * auVar27,8) < uVar45) {
              return SUB168(auVar14 * auVar27,0);
            }
          }
          puVar46 = (uint *)(lVar6 + uVar40 * 4);
          uVar37 = *puVar46;
          if ((uVar37 != 0) &&
             (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar37 * lVar39, auVar29._8_8_ = 0,
             auVar29._0_8_ = uVar44, auVar17._8_8_ = 0,
             auVar17._0_8_ = (ulong)((uVar38 + uVar43) - SUB164(auVar16 * auVar29,8)) * lVar39,
             auVar30._8_8_ = 0, auVar30._0_8_ = uVar44, uVar41 = (ulong)uVar38, uVar36 = uVar34,
             SUB164(auVar17 * auVar30,8) != 0)) {
            while( true ) {
              uVar34 = uVar41;
              puVar1 = (uint *)(lVar6 + uVar36 * 4);
              *puVar46 = *puVar1;
              puVar2 = (undefined8 *)(lVar5 + uVar40 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar5 + uVar36 * 8);
              uVar7 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar7;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)((int)uVar34 + 1) * lVar39;
              auVar33._8_8_ = 0;
              auVar33._0_8_ = uVar44;
              uVar40 = SUB168(auVar20 * auVar33,8);
              puVar46 = (uint *)(lVar6 + uVar40 * 4);
              uVar37 = *puVar46;
              if ((uVar37 == 0) ||
                 (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar37 * lVar39, auVar31._8_8_ = 0,
                 auVar31._0_8_ = uVar44, auVar19._8_8_ = 0,
                 auVar19._0_8_ =
                      (ulong)((SUB164(auVar20 * auVar33,8) + uVar43) - SUB164(auVar18 * auVar31,8))
                      * lVar39, auVar32._8_8_ = 0, auVar32._0_8_ = uVar44,
                 SUB164(auVar19 * auVar32,8) == 0)) break;
              uVar41 = uVar40 & 0xffffffff;
              uVar36 = uVar34;
            }
          }
          plVar4 = (long *)(lVar5 + uVar34 * 8);
          *(undefined4 *)(lVar6 + uVar34 * 4) = 0;
          plVar42 = (long *)*plVar4;
          if (*(long **)(this + 0x80) == plVar42) {
            *(long *)(this + 0x80) = *plVar42;
            plVar42 = (long *)*plVar4;
            if (*(long **)(this + 0x88) != plVar42) goto LAB_001010aa;
          }
          else if (*(long **)(this + 0x88) != plVar42) goto LAB_001010aa;
          *(long *)(this + 0x88) = plVar42[1];
          plVar42 = (long *)*plVar4;
LAB_001010aa:
          if ((long *)plVar42[1] != (long *)0x0) {
            *(long *)plVar42[1] = *plVar42;
            plVar42 = (long *)*plVar4;
          }
          if (*plVar42 != 0) {
            *(long *)(*plVar42 + 8) = plVar42[1];
            plVar42 = (long *)*plVar4;
          }
          Scenario::~Scenario((Scenario *)(plVar42 + 3));
          Memory::free_static(plVar42,false);
          uVar41 = *(ulong *)(this + 0x70);
          *(undefined8 *)(uVar41 + uVar34 * 8) = 0;
          *(int *)(this + 0x94) = *(int *)(this + 0x94) + -1;
          return uVar41;
        }
        uVar45 = uVar45 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar37 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar44;
        lVar39 = SUB168(auVar9 * auVar22,8);
        uVar43 = *(uint *)(*(long *)(this + 0x78) + lVar39 * 4);
        uVar37 = SUB164(auVar9 * auVar22,8);
      } while ((uVar43 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar43 * lVar6, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar44, auVar11._8_8_ = 0,
              auVar11._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4) +
                           uVar37) - SUB164(auVar10 * auVar23,8)) * lVar6, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar44, uVar45 <= SUB164(auVar11 * auVar24,8)));
    }
  }
  uVar34 = _err_print_error("remove_scenario","modules/raycast/raycast_occlusion_cull.cpp",0xf1,
                            "Parameter \"scenario\" is null.",0,0);
  return uVar34;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaycastOcclusionCull::_get_jitter(Rect2 const&, Vector2i const&) */

undefined8 __thiscall
RaycastOcclusionCull::_get_jitter(RaycastOcclusionCull *this,Rect2 *param_1,Vector2i *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  if (((this[0xcc] != (RaycastOcclusionCull)0x0) && (0 < *(int *)param_2)) &&
     (0 < *(int *)(param_2 + 4))) {
    Engine::get_singleton();
    iVar1 = Engine::get_frames_drawn();
    fVar5 = 0.0;
    fVar6 = 0.0;
    uVar2 = iVar1 % 9 - 1;
    if (uVar2 < 8) {
      fVar6 = *(float *)(CSWTCH_568 + (ulong)uVar2 * 4);
      fVar5 = *(float *)(CSWTCH_567 + (ulong)uVar2 * 4);
    }
    auVar3._0_4_ = (float)*(undefined8 *)(param_1 + 8) * _LC24;
    auVar3._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * _UNK_0010c2c4;
    auVar3._8_8_ = 0;
    auVar4._0_4_ = (float)(int)*(undefined8 *)param_2;
    auVar4._4_4_ = (float)(int)((ulong)*(undefined8 *)param_2 >> 0x20);
    auVar4._8_8_ = _LC31;
    auVar4 = divps(auVar3,auVar4);
    return CONCAT44(auVar4._4_4_ * fVar6 * _LC32._4_4_,auVar4._0_4_ * fVar5 * (float)_LC32);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaycastOcclusionCull::RaycastOcclusionCull() */

void __thiscall RaycastOcclusionCull::RaycastOcclusionCull(RaycastOcclusionCull *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RaycastOcclusionCull RVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  uVar2 = _UNK_0010c318;
  uVar1 = __LC34;
  *(undefined ***)this = &PTR_is_occluder_0010bfa8;
  *(undefined ***)(this + 0x10) = &PTR__RID_Alloc_0010bf58;
  uVar3 = _LC7;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  RendererSceneOcclusionCull::singleton = this;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined8 *)(this + 0xc0) = uVar3;
  this[0xcc] = (RaycastOcclusionCull)0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  raycast_singleton = this;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,"rendering/occlusion_culling/bvh_build_quality",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_60,"rendering/occlusion_culling/jitter_projection",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  RVar4 = (RaycastOcclusionCull)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0xcc] = RVar4;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  *(int *)(this + 200) = iVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaycastOcclusionCull::RaycastHZBuffer::update_camera_rays(Transform3D const&, Vector3 const&,
   Vector2 const&, float, bool) */

void __thiscall
RaycastOcclusionCull::RaycastHZBuffer::update_camera_rays
          (RaycastHZBuffer *this,Transform3D *param_1,Vector3 *param_2,Vector2 *param_3,
          float param_4,bool param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char *__s;
  Callable *pCVar12;
  long lVar13;
  int iVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long local_a0;
  char *local_98;
  size_t local_90;
  int local_88;
  undefined8 local_84;
  undefined8 local_7c;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  float local_44;
  undefined1 local_40;
  undefined8 local_3c;
  long local_30;
  
  pCVar12 = WorkerThreadPool::singleton;
  fVar20 = *(float *)(param_2 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = *(int *)(WorkerThreadPool::singleton + 0x290);
  fVar2 = *(float *)(param_1 + 0x20);
  local_3c = 0;
  fVar24 = *(float *)(param_1 + 0x14);
  fVar18 = (float)*(undefined8 *)(param_1 + 8);
  local_70 = *(undefined8 *)(param_1 + 0x24);
  local_68 = *(undefined4 *)(param_1 + 0x2c);
  local_74 = _LC33 ^ (uint)fVar2;
  local_84 = CONCAT44(param_4 * __LC38,(uint)fVar20 ^ _LC33);
  local_7c = CONCAT44((uint)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) ^ _LC39._4_4_,
                      (uint)fVar18 ^ (uint)_LC39);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar19 = *(float *)param_2;
  fVar21 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x2c);
  fVar8 = *(float *)param_1;
  fVar9 = *(float *)(param_1 + 0x24);
  fVar10 = *(float *)(param_1 + 0x28);
  fVar22 = fVar4 * fVar19 + fVar3 * fVar21 + fVar20 * fVar2 + fVar7;
  fVar11 = *(float *)(param_1 + 4);
  fVar25 = fVar19 * fVar5 + fVar21 * fVar6 + fVar20 * fVar24 + fVar10;
  fVar16 = fVar19 + *(float *)param_3;
  fVar17 = fVar21 * fVar11 + fVar19 * fVar8 + fVar20 * fVar18 + fVar9;
  fVar23 = *(float *)(param_3 + 4);
  *(float *)(this + 0x58) = param_4 * __LC38;
  fVar23 = fVar23 + fVar21;
  fVar20 = fVar20 + 0.0;
  fVar21 = fVar21 + 0.0;
  fVar19 = fVar19 + 0.0;
  fVar24 = fVar24 * fVar20;
  local_64 = CONCAT44(fVar25,fVar17);
  uStack_5c = CONCAT44((fVar16 * fVar8 + fVar21 * fVar11 + fVar20 * fVar18 + fVar9) - fVar17,fVar22)
  ;
  uStack_4c = CONCAT44((fVar5 * fVar19 + fVar6 * fVar23 + fVar24 + fVar10) - fVar25,
                       (fVar11 * fVar23 + fVar8 * fVar19 + fVar20 * fVar18 + fVar9) - fVar17);
  local_44 = (fVar19 * fVar4 + fVar23 * fVar3 + fVar2 * fVar20 + fVar7) - fVar22;
  local_54 = CONCAT44((fVar16 * fVar4 + fVar21 * fVar3 + fVar2 * fVar20 + fVar7) - fVar22,
                      (fVar16 * fVar5 + fVar21 * fVar6 + fVar24 + fVar10) - fVar25);
  local_40 = param_5;
  if ((update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)::{lambda()#1}
       ::operator()()::sname == '\0') &&
     (iVar14 = __cxa_guard_acquire(&update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)
                                    ::{lambda()#1}::operator()()::sname), iVar14 != 0)) {
    _scs_create((char *)&update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)::
                  {lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)
                         ::{lambda()#1}::operator()()::sname);
  }
  if (update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)::{lambda()#1}
      ::operator()()::sname == 0) {
    local_a0 = 0;
  }
  else {
    __s = *(char **)(update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)
                     ::{lambda()#1}::operator()()::sname + 8);
    local_a0 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_a0,
                 (CowData *)
                 (update_camera_rays(Transform3D_const&,Vector3_const&,Vector2_const&,float,bool)::
                  {lambda()#1}::operator()()::sname + 0x10));
    }
    else {
      local_90 = strlen(__s);
      local_98 = __s;
      String::parse_latin1((StrRange *)&local_a0);
    }
  }
  iVar14 = local_88;
  puVar15 = (undefined8 *)operator_new(0x28,"");
  *puVar15 = &PTR_callback_0010c050;
  puVar15[2] = _camera_rays_threaded;
  puVar15[1] = this;
  puVar15[3] = 0;
  puVar15[4] = &local_88;
  local_98 = (char *)0x0;
  local_90 = 0;
  WorkerThreadPool::_add_group_task
            (pCVar12,(_func_void_void_ptr_uint *)&local_98,(void *)0x0,(BaseTemplateUserdata *)0x0,
             (int)puVar15,iVar14,true,(String_conflict *)0x1);
  Callable::~Callable((Callable *)&local_98);
  lVar13 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::Scenario::raycast(RTCRayHit16*, unsigned int const*, unsigned int) const */

void __thiscall
RaycastOcclusionCull::Scenario::raycast
          (Scenario *this,RTCRayHit16 *param_1,uint *param_2,uint param_3)

{
  long *plVar1;
  char *__s;
  Callable *pCVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  long local_60;
  RTCRayHit16 *local_58;
  uint *local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  pCVar2 = WorkerThreadPool::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (RendererSceneOcclusionCull::singleton == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("raycast","modules/raycast/raycast_occlusion_cull.cpp",0x1e8,
                       "Parameter \"singleton\" is null.",0,0);
      return;
    }
    goto LAB_00101bf1;
  }
  if ((*(long *)(raycast_singleton + 8) != 0) &&
     (*(long *)(this + (long)*(int *)(this + 0x20) * 8 + 0x10) != 0)) {
    local_58 = param_1;
    local_50 = param_2;
    if (const::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
      }
    }
    if (const::{lambda()#1}::operator()()::sname == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(const::{lambda()#1}::operator()()::sname + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_60,
                   (CowData *)(const::{lambda()#1}::operator()()::sname + 0x10));
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    puVar5 = (undefined8 *)operator_new(0x28,"");
    *puVar5 = &PTR_callback_0010c0e0;
    puVar5[2] = _raycast;
    puVar5[1] = this;
    puVar5[3] = 0;
    puVar5[4] = &local_58;
    local_48 = (char *)0x0;
    local_40 = 0;
    WorkerThreadPool::_add_group_task
              (pCVar2,(_func_void_void_ptr_uint *)&local_48,(void *)0x0,(BaseTemplateUserdata *)0x0,
               (int)puVar5,param_3,true,(String_conflict *)0x1);
    Callable::~Callable((Callable *)&local_48);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
        goto LAB_00101ace;
      }
    }
    WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
  }
LAB_00101ace:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101bf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::Scenario::_update_dirty_instance(int, RID*) */

void __thiscall
RaycastOcclusionCull::Scenario::_update_dirty_instance(Scenario *this,int param_1,RID *param_2)

{
  long lVar1;
  long lVar2;
  char *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  Callable *pCVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  void *__dest;
  long lVar18;
  long *plVar19;
  size_t __n;
  ulong uVar20;
  Vector3 *pVVar21;
  void *__src;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  long local_a0;
  char *local_98;
  size_t local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  Vector3 *local_50;
  float *local_48;
  long local_40;
  
  lVar1 = *(long *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar1 != 0) && (*(int *)(this + 0x54) != 0)) {
    uVar22 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x50) * 8);
    uVar15 = *(long *)(param_2 + (long)param_1 * 8) * 0x3ffff - 1;
    uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
    uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
    uVar15 = uVar15 >> 0x16 ^ uVar15;
    uVar20 = uVar15 & 0xffffffff;
    if ((int)uVar15 == 0) {
      uVar20 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar22;
    lVar18 = SUB168(auVar3 * auVar7,8);
    uVar24 = *(uint *)(*(long *)(this + 0x38) + lVar18 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar24 != 0) {
      uVar23 = 0;
      while (((uint)uVar20 != uVar24 ||
             (*(long *)(param_2 + (long)param_1 * 8) !=
              *(long *)(*(long *)(lVar1 + lVar18 * 8) + 0x10)))) {
        uVar23 = uVar23 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar22;
        lVar18 = SUB168(auVar4 * auVar8,8);
        uVar24 = *(uint *)(*(long *)(this + 0x38) + lVar18 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
        if ((uVar24 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar24 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar22, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x50) * 4) + uVar13) -
                                 SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar22, SUB164(auVar6 * auVar10,8) < uVar23)) goto LAB_00101fb0;
      }
      lVar1 = *(long *)(lVar1 + (ulong)uVar13 * 8);
      uVar15 = *(ulong *)(lVar1 + 0x18);
      if ((uVar15 != 0) && ((uint)uVar15 < *(uint *)(raycast_singleton + 0x2c))) {
        plVar19 = (long *)(((uVar15 & 0xffffffff) % (ulong)*(uint *)(raycast_singleton + 0x28)) *
                           0x10 + *(long *)(*(long *)(raycast_singleton + 0x18) +
                                           ((uVar15 & 0xffffffff) /
                                           (ulong)*(uint *)(raycast_singleton + 0x28)) * 8));
        iVar14 = (int)plVar19[1];
        if (iVar14 == (int)(uVar15 >> 0x20)) {
          lVar2 = *plVar19;
          if (lVar2 != 0) {
            pVVar21 = *(Vector3 **)(lVar2 + 8);
            if (pVVar21 == (Vector3 *)0x0) {
              uVar24 = 3;
              iVar14 = 0;
            }
            else {
              iVar14 = (int)*(undefined8 *)(pVVar21 + -8);
              uVar24 = iVar14 * 3 + 3;
            }
            pfVar17 = *(float **)(lVar1 + 0x38);
            if (uVar24 < *(uint *)(lVar1 + 0x30)) {
LAB_00101dab:
              *(uint *)(lVar1 + 0x30) = uVar24;
            }
            else if (*(uint *)(lVar1 + 0x30) < uVar24) {
              if (*(uint *)(lVar1 + 0x34) < uVar24) {
                uVar13 = uVar24 - 1 | uVar24 - 1 >> 1;
                uVar13 = uVar13 | uVar13 >> 2;
                uVar13 = uVar13 | uVar13 >> 4;
                uVar13 = uVar13 | uVar13 >> 8;
                uVar13 = (uVar13 | uVar13 >> 0x10) + 1;
                *(uint *)(lVar1 + 0x34) = uVar13;
                pfVar17 = (float *)Memory::realloc_static(pfVar17,(ulong)uVar13 * 4,false);
                *(float **)(lVar1 + 0x38) = pfVar17;
                if (pfVar17 == (float *)0x0) goto LAB_001021a3;
                pVVar21 = *(Vector3 **)(lVar2 + 8);
              }
              goto LAB_00101dab;
            }
            pCVar12 = WorkerThreadPool::singleton;
            if (iVar14 < 0x401) {
              _transform_vertices_range(this,pVVar21,pfVar17,(Transform3D *)(lVar1 + 0x40),0,iVar14)
              ;
            }
            else {
              local_80 = *(undefined8 *)(lVar1 + 0x40);
              uStack_78 = *(undefined8 *)(lVar1 + 0x48);
              local_70 = *(undefined8 *)(lVar1 + 0x50);
              uStack_68 = *(undefined8 *)(lVar1 + 0x58);
              local_60 = *(undefined8 *)(lVar1 + 0x60);
              uStack_58 = *(undefined8 *)(lVar1 + 0x68);
              local_88 = CONCAT44(iVar14,*(undefined4 *)(WorkerThreadPool::singleton + 0x290));
              local_50 = pVVar21;
              local_48 = pfVar17;
              if ((_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::sname == '\0') &&
                 (iVar14 = __cxa_guard_acquire(&_update_dirty_instance(int,RID*)::{lambda()#1}::
                                                operator()()::sname), iVar14 != 0)) {
                _scs_create((char *)&_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::
                                     sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::sname,
                             &__dso_handle);
                __cxa_guard_release(&_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::
                                     sname);
              }
              if (_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::sname == 0) {
                local_a0 = 0;
              }
              else {
                __s = *(char **)(_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::sname
                                + 8);
                local_a0 = 0;
                if (__s == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_a0,
                             (CowData *)
                             (_update_dirty_instance(int,RID*)::{lambda()#1}::operator()()::sname +
                             0x10));
                }
                else {
                  local_90 = strlen(__s);
                  local_98 = __s;
                  String::parse_latin1((StrRange *)&local_a0);
                }
              }
              iVar14 = (int)local_88;
              puVar16 = (undefined8 *)operator_new(0x28,"");
              *puVar16 = &PTR_callback_0010c080;
              puVar16[2] = _transform_vertices_thread;
              puVar16[1] = this;
              puVar16[3] = 0;
              puVar16[4] = &local_88;
              local_98 = (char *)0x0;
              local_90 = 0;
              WorkerThreadPool::_add_group_task
                        (pCVar12,(_func_void_void_ptr_uint *)&local_98,(void *)0x0,
                         (BaseTemplateUserdata *)0x0,(int)puVar16,iVar14,true,(String_conflict *)0x1
                        );
              Callable::~Callable((Callable *)&local_98);
              lVar18 = local_a0;
              if (local_a0 != 0) {
                LOCK();
                plVar19 = (long *)(local_a0 + -0x10);
                *plVar19 = *plVar19 + -1;
                UNLOCK();
                if (*plVar19 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void *)(lVar18 + -0x10),false);
                }
              }
              WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
            }
            __src = *(void **)(lVar2 + 0x18);
            uVar24 = *(uint *)(lVar1 + 0x20);
            __dest = *(void **)(lVar1 + 0x28);
            if (__src == (void *)0x0) {
              if (uVar24 != 0) {
                *(undefined4 *)(lVar1 + 0x20) = 0;
              }
              __n = 0;
            }
            else {
              lVar18 = *(long *)((long)__src + -8);
              uVar13 = (uint)lVar18;
              if (uVar13 < uVar24) {
LAB_0010201e:
                *(uint *)(lVar1 + 0x20) = uVar13;
LAB_00102021:
                lVar18 = *(long *)((long)__src + -8);
              }
              else if (uVar24 < uVar13) {
                if (uVar13 <= *(uint *)(lVar1 + 0x24)) goto LAB_0010201e;
                uVar24 = uVar13 - 1 | uVar13 - 1 >> 1;
                uVar24 = uVar24 | uVar24 >> 2;
                uVar24 = uVar24 | uVar24 >> 4;
                uVar24 = uVar24 >> 8 | uVar24;
                uVar24 = (uVar24 | uVar24 >> 0x10) + 1;
                *(uint *)(lVar1 + 0x24) = uVar24;
                __dest = (void *)Memory::realloc_static(__dest,(ulong)uVar24 * 4,false);
                *(void **)(lVar1 + 0x28) = __dest;
                if (__dest == (void *)0x0) {
LAB_001021a3:
                  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar11 = (code *)invalidInstructionException();
                  (*pcVar11)();
                }
                __src = *(void **)(lVar2 + 0x18);
                __n = 0;
                *(uint *)(lVar1 + 0x20) = uVar13;
                if (__src == (void *)0x0) goto LAB_0010202d;
                goto LAB_00102021;
              }
              __n = lVar18 * 4;
            }
LAB_0010202d:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              memcpy(__dest,__src,__n);
              return;
            }
            goto LAB_001021d9;
          }
        }
        else if (iVar14 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
  }
LAB_00101fb0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001021d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::Scenario::_update_dirty_instance_thread(int, RID*) */

void __thiscall
RaycastOcclusionCull::Scenario::_update_dirty_instance_thread
          (Scenario *this,int param_1,RID *param_2)

{
  _update_dirty_instance(this,param_1,param_2);
  return;
}



/* RaycastOcclusionCull::free_occluder(RID) */

undefined1  [16] __thiscall
RaycastOcclusionCull::free_occluder(RaycastOcclusionCull *this,ulong param_2)

{
  int iVar1;
  int iVar2;
  Occluder *pOVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulong uStack_30;
  
  if ((param_2 != 0) && (uVar8 = (uint)param_2, uVar8 < *(uint *)(this + 0x2c))) {
    puVar5 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
             *(long *)(*(long *)(this + 0x18) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    iVar1 = *(int *)(puVar5 + 1);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      pOVar3 = (Occluder *)*puVar5;
      if (pOVar3 != (Occluder *)0x0) {
        uStack_30 = 0x10224c;
        memdelete<RaycastOcclusionCull::Occluder>(pOVar3);
        if (*(uint *)(this + 0x2c) <= uVar8) {
          uVar7 = 0x161;
LAB_0010230a:
          auVar9 = _err_print_error(&_LC54,"./core/templates/rid_owner.h",uVar7,
                                    "Method/function failed.",0,0);
          return auVar9;
        }
        lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
                *(long *)(*(long *)(this + 0x18) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8);
        iVar2 = *(int *)(lVar6 + 8);
        if (iVar2 < 0) {
          lVar6 = 0;
          _err_print_error(&_LC54,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                           "Attempted to free an uninitialized or invalid RID",0);
        }
        else {
          if (iVar1 != iVar2) {
            uVar7 = 0x171;
            goto LAB_0010230a;
          }
          *(undefined4 *)(lVar6 + 8) = 0xffffffff;
          uVar4 = *(int *)(this + 0x30) - 1;
          *(uint *)(this + 0x30) = uVar4;
          uStack_30 = (ulong)uVar4 % (ulong)*(uint *)(this + 0x28);
          lVar6 = *(long *)(*(long *)(this + 0x20) +
                           ((ulong)uVar4 / (ulong)*(uint *)(this + 0x28)) * 8);
          *(uint *)(lVar6 + uStack_30 * 4) = uVar8;
        }
        auVar9._8_8_ = uStack_30;
        auVar9._0_8_ = lVar6;
        return auVar9;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  auVar9 = _err_print_error("free_occluder","modules/raycast/raycast_occlusion_cull.cpp",0xe3,
                            "Parameter \"occluder\" is null.",0,0);
  return auVar9;
}



/* RaycastOcclusionCull::_init_embree() */

void __thiscall RaycastOcclusionCull::_init_embree(RaycastOcclusionCull *this)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  MXCSR = MXCSR | 0x8040;
  plVar3 = (long *)OS::get_singleton();
  (**(code **)(*plVar3 + 0x2d8))(plVar3);
  local_50 = 0;
  local_40 = 10;
  local_48 = "threads=%d";
  String::parse_latin1((StrRange *)&local_50);
  vformat<int>((String_conflict *)&local_58,(int)(StrRange *)&local_50);
  lVar1 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar3 = (long *)(local_50 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  String::utf8();
  uVar4 = rtcNewDevice(local_48);
  pcVar2 = local_48;
  *(undefined8 *)(this + 8) = uVar4;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  lVar1 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar3 = (long *)(local_58 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::Scenario::update() */

void __thiscall RaycastOcclusionCull::Scenario::update(Scenario *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *__s;
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
  Callable *pCVar25;
  char cVar26;
  int iVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  Thread *this_00;
  uint uVar31;
  ulong uVar32;
  long *plVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  long *plVar37;
  ulong uVar38;
  ulong uVar39;
  uint uVar40;
  uint *puVar41;
  long lVar42;
  long in_FS_OFFSET;
  long *local_80;
  long local_60;
  undefined8 local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (RendererSceneOcclusionCull::singleton == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update","modules/raycast/raycast_occlusion_cull.cpp",0x193,
                       "Parameter \"singleton\" is null.",0,0);
      return;
    }
    goto LAB_00102e44;
  }
  if (*(long *)this == 0) {
    this_00 = (Thread *)operator_new(0x10,"");
    Thread::Thread(this_00);
    *(Thread **)this = this_00;
  }
  cVar26 = Thread::is_started();
  if (cVar26 == '\0') {
LAB_001025c7:
    if ((this[9] == (Scenario)0x0) && (*(uint *)(this + 0x90) == 0)) {
      if (*(uint *)(this + 0x80) == 0) goto LAB_00102ae5;
      if (0x80 < *(uint *)(this + 0x80) / *(uint *)(WorkerThreadPool::singleton + 0x290))
      goto LAB_00102b5d;
LAB_001028bc:
      uVar34 = 0;
      do {
        uVar35 = uVar34 + 1;
        _update_dirty_instance(this,uVar34,*(RID **)(this + 0x88));
        uVar34 = uVar35;
      } while (uVar35 < *(uint *)(this + 0x80));
LAB_001028ec:
      if (*(long *)(this + 0x58) != 0) {
LAB_001028f3:
        if (*(int *)(this + 0x7c) != 0) {
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x78) * 4) != 0) {
            memset(*(void **)(this + 0x70),0,
                   (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x78) * 4) * 4)
            ;
          }
          *(undefined4 *)(this + 0x7c) = 0;
        }
      }
      if (*(int *)(this + 0x80) != 0) {
        *(undefined4 *)(this + 0x80) = 0;
      }
    }
    else {
      local_80 = *(long **)(this + 0x98);
      plVar33 = local_80 + *(uint *)(this + 0x90);
      if (local_80 != plVar33) {
        lVar42 = *(long *)(this + 0x30);
        do {
          if ((lVar42 != 0) && (*(int *)(this + 0x54) != 0)) {
            lVar5 = *(long *)(this + 0x38);
            uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4);
            uVar39 = CONCAT44(0,uVar34);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x50) * 8);
            uVar28 = *local_80 * 0x3ffff - 1;
            uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
            uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
            uVar28 = uVar28 >> 0x16 ^ uVar28;
            uVar36 = uVar28 & 0xffffffff;
            if ((int)uVar28 == 0) {
              uVar36 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar36 * lVar6;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar39;
            uVar28 = SUB168(auVar7 * auVar16,8);
            uVar35 = *(uint *)(lVar5 + uVar28 * 4);
            uVar38 = (ulong)SUB164(auVar7 * auVar16,8);
            if (uVar35 != 0) {
              uVar40 = 0;
LAB_001026ec:
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((int)uVar38 + 1) * lVar6;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar39;
              uVar32 = SUB168(auVar10 * auVar19,8);
              uVar31 = SUB164(auVar10 * auVar19,8);
              if (((uint)uVar36 != uVar35) ||
                 (*local_80 != *(long *)(*(long *)(lVar42 + uVar28 * 8) + 0x10))) goto LAB_001026b0;
              puVar41 = (uint *)(lVar5 + uVar32 * 4);
              uVar35 = *puVar41;
              if ((uVar35 != 0) &&
                 (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar35 * lVar6, auVar20._8_8_ = 0,
                 auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
                 auVar12._0_8_ = (ulong)((uVar31 + uVar34) - SUB164(auVar11 * auVar20,8)) * lVar6,
                 auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar28 = (ulong)uVar31, uVar36 = uVar38,
                 SUB164(auVar12 * auVar21,8) != 0)) {
                while( true ) {
                  uVar38 = uVar28;
                  puVar1 = (uint *)(lVar5 + uVar36 * 4);
                  *puVar41 = *puVar1;
                  puVar30 = (undefined8 *)(lVar42 + uVar32 * 8);
                  *puVar1 = uVar35;
                  puVar2 = (undefined8 *)(lVar42 + uVar36 * 8);
                  uVar29 = *puVar30;
                  *puVar30 = *puVar2;
                  *puVar2 = uVar29;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = (ulong)((int)uVar38 + 1) * lVar6;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar39;
                  uVar32 = SUB168(auVar15 * auVar24,8);
                  puVar41 = (uint *)(lVar5 + uVar32 * 4);
                  uVar35 = *puVar41;
                  if ((uVar35 == 0) ||
                     (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar35 * lVar6, auVar22._8_8_ = 0,
                     auVar22._0_8_ = uVar39, auVar14._8_8_ = 0,
                     auVar14._0_8_ =
                          (ulong)((SUB164(auVar15 * auVar24,8) + uVar34) -
                                 SUB164(auVar13 * auVar22,8)) * lVar6, auVar23._8_8_ = 0,
                     auVar23._0_8_ = uVar39, SUB164(auVar14 * auVar23,8) == 0)) break;
                  uVar28 = uVar32 & 0xffffffff;
                  uVar36 = uVar38;
                }
              }
              plVar3 = (long *)(lVar42 + uVar38 * 8);
              *(undefined4 *)(lVar5 + uVar38 * 4) = 0;
              plVar37 = (long *)*plVar3;
              if (*(long **)(this + 0x40) == plVar37) {
                *(long *)(this + 0x40) = *plVar37;
                plVar37 = (long *)*plVar3;
              }
              if (*(long **)(this + 0x48) == plVar37) {
                *(long *)(this + 0x48) = plVar37[1];
                plVar37 = (long *)*plVar3;
              }
              if ((long *)plVar37[1] != (long *)0x0) {
                *(long *)plVar37[1] = *plVar37;
                plVar37 = (long *)*plVar3;
              }
              if (*plVar37 != 0) {
                *(long *)(*plVar37 + 8) = plVar37[1];
                plVar37 = (long *)*plVar3;
              }
              if ((void *)plVar37[7] != (void *)0x0) {
                if ((int)plVar37[6] != 0) {
                  *(undefined4 *)(plVar37 + 6) = 0;
                }
                Memory::free_static((void *)plVar37[7],false);
              }
              if ((void *)plVar37[5] != (void *)0x0) {
                if ((int)plVar37[4] != 0) {
                  *(undefined4 *)(plVar37 + 4) = 0;
                }
                Memory::free_static((void *)plVar37[5],false);
              }
              Memory::free_static(plVar37,false);
              lVar42 = *(long *)(this + 0x30);
              *(undefined8 *)(lVar42 + uVar38 * 8) = 0;
              *(int *)(this + 0x54) = *(int *)(this + 0x54) + -1;
            }
          }
LAB_0010287b:
          local_80 = local_80 + 1;
        } while (plVar33 != local_80);
      }
      if (0x80 < *(uint *)(this + 0x80) / *(uint *)(WorkerThreadPool::singleton + 0x290)) {
LAB_00102b5d:
        pCVar25 = WorkerThreadPool::singleton;
        if ((update()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar27 = __cxa_guard_acquire(&update()::{lambda()#1}::operator()()::sname), iVar27 != 0)
           ) {
          _scs_create((char *)&update()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update()::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&update()::{lambda()#1}::operator()()::sname);
        }
        if (update()::{lambda()#1}::operator()()::sname == 0) {
          local_60 = 0;
        }
        else {
          __s = *(char **)(update()::{lambda()#1}::operator()()::sname + 8);
          local_60 = 0;
          if (__s == (char *)0x0) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)&local_60,
                       (CowData *)(update()::{lambda()#1}::operator()()::sname + 0x10));
          }
          else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        iVar27 = *(int *)(this + 0x80);
        uVar29 = *(undefined8 *)(this + 0x88);
        puVar30 = (undefined8 *)operator_new(0x28,"");
        *puVar30 = &PTR_callback_0010c0b0;
        puVar30[1] = this;
        puVar30[2] = _update_dirty_instance_thread;
        puVar30[3] = 0;
        puVar30[4] = uVar29;
        local_58 = (char *)0x0;
        local_50 = 0;
        WorkerThreadPool::_add_group_task
                  (pCVar25,(_func_void_void_ptr_uint *)&local_58,(void *)0x0,
                   (BaseTemplateUserdata *)0x0,(int)puVar30,iVar27,true,(String_conflict *)0x1);
        Callable::~Callable((Callable *)&local_58);
        lVar42 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar33 = (long *)(local_60 + -0x10);
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (*plVar33 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar42 + -0x10),false);
          }
        }
        WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
        goto LAB_001028ec;
      }
      if (*(uint *)(this + 0x80) != 0) goto LAB_001028bc;
      if (*(long *)(this + 0x58) != 0) goto LAB_001028f3;
    }
    if (*(int *)(this + 0x90) != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    if (*(long *)(raycast_singleton + 8) == 0) {
      _init_embree(raycast_singleton);
    }
    iVar27 = 1 - *(int *)(this + 0x20);
    if (*(long *)(this + (long)iVar27 * 8 + 0x10) != 0) {
      rtcReleaseScene();
    }
    uVar29 = rtcNewScene(*(undefined8 *)(raycast_singleton + 8));
    *(undefined8 *)(this + (long)iVar27 * 8 + 0x10) = uVar29;
    rtcSetSceneBuildQuality(uVar29,*(undefined4 *)(raycast_singleton + 200));
    for (puVar30 = *(undefined8 **)(this + 0x40); puVar30 != (undefined8 *)0x0;
        puVar30 = (undefined8 *)*puVar30) {
      uVar28 = puVar30[3];
      if ((uVar28 != 0) && ((uint)uVar28 < *(uint *)(raycast_singleton + 0x2c))) {
        plVar33 = (long *)(((uVar28 & 0xffffffff) % (ulong)*(uint *)(raycast_singleton + 0x28)) *
                           0x10 + *(long *)(*(long *)(raycast_singleton + 0x18) +
                                           ((uVar28 & 0xffffffff) /
                                           (ulong)*(uint *)(raycast_singleton + 0x28)) * 8));
        iVar4 = (int)plVar33[1];
        if (iVar4 == (int)(uVar28 >> 0x20)) {
          if ((*plVar33 != 0) && (*(char *)(puVar30 + 0xe) != '\0')) {
            uVar29 = rtcNewGeometry(*(undefined8 *)(raycast_singleton + 8),0);
            rtcSetSharedGeometryBuffer
                      (uVar29,1,0,0x9003,puVar30[7],0,0xc,(ulong)*(uint *)(puVar30 + 6) / 3);
            rtcSetSharedGeometryBuffer
                      (uVar29,0,0,0x5003,puVar30[5],0,0xc,(ulong)*(uint *)(puVar30 + 4) / 3);
            rtcCommitGeometry(uVar29);
            rtcAttachGeometry(*(undefined8 *)(this + (long)iVar27 * 8 + 0x10),uVar29);
            rtcReleaseGeometry(uVar29);
          }
        }
        else if (iVar4 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    *(undefined2 *)(this + 8) = 0;
    uVar28 = (ulong)local_58 >> 0x20;
    local_58 = (char *)CONCAT44((int)uVar28,1);
    Thread::start(*(_func_void_void_ptr **)this,_commit_scene,(Settings *)this);
  }
  else if (this[8] != (Scenario)0x0) {
    Thread::wait_to_finish();
    *(int *)(this + 0x20) = 1 - *(int *)(this + 0x20);
    goto LAB_001025c7;
  }
LAB_00102ae5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102e44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001026b0:
  uVar35 = *(uint *)(lVar5 + uVar32 * 4);
  uVar38 = uVar32 & 0xffffffff;
  uVar40 = uVar40 + 1;
  if ((uVar35 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar35 * lVar6, auVar17._8_8_ = 0,
     auVar17._0_8_ = uVar39, auVar9._8_8_ = 0,
     auVar9._0_8_ = (ulong)((uVar34 + uVar31) - SUB164(auVar8 * auVar17,8)) * lVar6,
     auVar18._8_8_ = 0, auVar18._0_8_ = uVar39, uVar28 = uVar32, SUB164(auVar9 * auVar18,8) < uVar40
     )) goto LAB_0010287b;
  goto LAB_001026ec;
}



/* RaycastOcclusionCull::occluder_allocate() */

void __thiscall RaycastOcclusionCull::occluder_allocate(RaycastOcclusionCull *this)

{
  RID_Alloc<RaycastOcclusionCull::Occluder*,false>::allocate_rid
            ((RID_Alloc<RaycastOcclusionCull::Occluder*,false> *)(this + 0x10));
  return;
}



/* HashSet<RaycastOcclusionCull::InstanceID, RaycastOcclusionCull::InstanceID,
   HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>
   >::erase(RaycastOcclusionCull::InstanceID const&) [clone .isra.0] */

void __thiscall
HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
::erase(HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
        *this,InstanceID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  uint uVar24;
  char cVar25;
  uint uVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  uint *puVar33;
  uint *puVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar25 = _lookup_pos(this,param_1,&local_44);
  uVar24 = local_44;
  if (cVar25 != '\0') {
    uVar36 = (ulong)local_44;
    lVar7 = *(long *)(this + 0x10);
    lVar8 = *(long *)(this + 0x18);
    puVar3 = (uint *)(lVar7 + uVar36 * 4);
    local_44 = *puVar3;
    uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar31 = CONCAT44(0,uVar26);
    lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(local_44 + 1) * lVar9;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar31;
    lVar27 = SUB168(auVar11 * auVar17,8) * 4;
    uVar29 = SUB164(auVar11 * auVar17,8);
    puVar34 = (uint *)(lVar8 + lVar27);
    if ((*puVar34 == 0) ||
       (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)*puVar34 * lVar9, auVar18._8_8_ = 0,
       auVar18._0_8_ = uVar31, auVar13._8_8_ = 0,
       auVar13._0_8_ = (ulong)((uVar26 + uVar29) - SUB164(auVar12 * auVar18,8)) * lVar9,
       auVar19._8_8_ = 0, auVar19._0_8_ = uVar31, SUB164(auVar13 * auVar19,8) == 0)) {
      uVar35 = (ulong)local_44;
    }
    else {
      lVar10 = *(long *)(this + 8);
      uVar32 = (ulong)local_44;
      uVar35 = (ulong)uVar29;
      while( true ) {
        puVar28 = (uint *)(lVar27 + lVar10);
        puVar1 = (uint *)(lVar10 + uVar32 * 4);
        puVar33 = (uint *)(uVar32 * 4 + lVar8);
        puVar4 = (undefined4 *)(lVar7 + (ulong)*puVar28 * 4);
        puVar5 = (undefined4 *)(lVar7 + (ulong)*puVar1 * 4);
        uVar6 = *puVar5;
        *puVar5 = *puVar4;
        *puVar4 = uVar6;
        uVar29 = *puVar34;
        *puVar34 = *puVar33;
        *puVar33 = uVar29;
        uVar29 = *puVar28;
        *puVar28 = *puVar1;
        local_44 = (uint)uVar35;
        *puVar1 = uVar29;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)(local_44 + 1) * lVar9;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar31;
        uVar30 = SUB168(auVar16 * auVar22,8);
        lVar27 = uVar30 * 4;
        puVar34 = (uint *)(lVar8 + lVar27);
        if ((*puVar34 == 0) ||
           (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)*puVar34 * lVar9, auVar20._8_8_ = 0,
           auVar20._0_8_ = uVar31, auVar15._8_8_ = 0,
           auVar15._0_8_ =
                (ulong)((SUB164(auVar16 * auVar22,8) + uVar26) - SUB164(auVar14 * auVar20,8)) *
                lVar9, auVar21._8_8_ = 0, auVar21._0_8_ = uVar31, SUB164(auVar15 * auVar21,8) == 0))
        break;
        uVar32 = uVar35;
        uVar35 = uVar30 & 0xffffffff;
      }
    }
    *(undefined4 *)(lVar8 + uVar35 * 4) = 0;
    uVar26 = *(int *)(this + 0x24) - 1;
    *(uint *)(this + 0x24) = uVar26;
    puVar37 = (undefined8 *)(uVar36 * 0x10 + *(long *)this);
    if (uVar24 < uVar26) {
      uVar29 = *(uint *)(lVar7 + (ulong)uVar26 * 4);
      puVar2 = (undefined8 *)(*(long *)this + (ulong)uVar26 * 0x10);
      uVar23 = puVar2[1];
      *puVar37 = *puVar2;
      puVar37[1] = uVar23;
      *puVar3 = uVar29;
      *(uint *)(*(long *)(this + 8) +
               (ulong)*(uint *)(lVar7 + (ulong)*(uint *)(this + 0x24) * 4) * 4) = uVar24;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RaycastOcclusionCull::RaycastHZBuffer::~RaycastHZBuffer() */

void __thiscall RaycastOcclusionCull::RaycastHZBuffer::~RaycastHZBuffer(RaycastHZBuffer *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  *(undefined ***)this = &PTR_clear_0010bf78;
  if (*(void **)(this + 0x80) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x80),false);
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (*(int *)(this + 0x90) != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    Memory::free_static(*(void **)(this + 0x98),false);
  }
  *(code **)this = rtcReleaseDevice;
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x50);
      *(undefined8 *)(this + 0x50) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x40));
    }
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    Memory::free_static(*(void **)(this + 0x30),false);
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



/* RaycastOcclusionCull::RaycastHZBuffer::~RaycastHZBuffer() */

void __thiscall RaycastOcclusionCull::RaycastHZBuffer::~RaycastHZBuffer(RaycastHZBuffer *this)

{
  ~RaycastHZBuffer(this);
  operator_delete(this,0xa8);
  return;
}



/* RaycastOcclusionCull::remove_buffer(RID) */

long __thiscall RaycastOcclusionCull::remove_buffer(RaycastOcclusionCull *this,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
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
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  long *plVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  
  lVar36 = *(long *)(this + 0xa0);
  if ((lVar36 != 0) && (*(int *)(this + 0xc4) != 0)) {
    lVar6 = *(long *)(this + 0xa8);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc0) * 8);
    uVar42 = CONCAT44(0,uVar5);
    uVar34 = param_2 * 0x3ffff - 1;
    uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
    uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
    uVar33 = (uint)(uVar34 >> 0x16) ^ (uint)uVar34;
    uVar37 = 1;
    if (uVar33 != 0) {
      uVar37 = uVar33;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar37 * lVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    uVar34 = SUB168(auVar9 * auVar21,8);
    uVar33 = *(uint *)(lVar6 + uVar34 * 4);
    if (uVar33 != 0) {
      uVar44 = 0;
      uVar39 = uVar34;
      uVar40 = uVar34;
      uVar43 = uVar33;
      do {
        if ((uVar37 == uVar43) && (param_2 == *(long *)(*(long *)(lVar36 + uVar39 * 8) + 0x10))) {
          uVar39 = (ulong)SUB164(auVar9 * auVar21,8);
          uVar43 = 0;
          do {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((int)uVar39 + 1) * lVar7;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar42;
            auVar15 = auVar15 * auVar27;
            uVar40 = auVar15._8_8_;
            lVar35 = auVar15._0_8_;
            uVar44 = auVar15._8_4_;
            if ((uVar37 == uVar33) &&
               (lVar35 = *(long *)(lVar36 + uVar34 * 8), param_2 == *(long *)(lVar35 + 0x10))) {
              puVar45 = (uint *)(lVar6 + uVar40 * 4);
              uVar37 = *puVar45;
              if ((uVar37 != 0) &&
                 (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar37 * lVar7, auVar28._8_8_ = 0,
                 auVar28._0_8_ = uVar42, auVar17._8_8_ = 0,
                 auVar17._0_8_ = (ulong)((uVar5 + uVar44) - SUB164(auVar16 * auVar28,8)) * lVar7,
                 auVar29._8_8_ = 0, auVar29._0_8_ = uVar42, uVar34 = (ulong)uVar44,
                 SUB164(auVar17 * auVar29,8) != 0)) {
                while( true ) {
                  puVar1 = (uint *)(lVar6 + uVar39 * 4);
                  *puVar45 = *puVar1;
                  puVar2 = (undefined8 *)(lVar36 + uVar40 * 8);
                  *puVar1 = uVar37;
                  puVar3 = (undefined8 *)(lVar36 + uVar39 * 8);
                  uVar8 = *puVar2;
                  *puVar2 = *puVar3;
                  *puVar3 = uVar8;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = (ulong)((int)uVar34 + 1) * lVar7;
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = uVar42;
                  uVar40 = SUB168(auVar20 * auVar32,8);
                  puVar45 = (uint *)(lVar6 + uVar40 * 4);
                  uVar37 = *puVar45;
                  uVar39 = uVar34;
                  if ((uVar37 == 0) ||
                     (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar37 * lVar7, auVar30._8_8_ = 0,
                     auVar30._0_8_ = uVar42, auVar19._8_8_ = 0,
                     auVar19._0_8_ =
                          (ulong)((SUB164(auVar20 * auVar32,8) + uVar5) -
                                 SUB164(auVar18 * auVar30,8)) * lVar7, auVar31._8_8_ = 0,
                     auVar31._0_8_ = uVar42, SUB164(auVar19 * auVar31,8) == 0)) break;
                  uVar34 = uVar40 & 0xffffffff;
                }
              }
              plVar4 = (long *)(lVar36 + uVar39 * 8);
              *(undefined4 *)(lVar6 + uVar39 * 4) = 0;
              plVar41 = (long *)*plVar4;
              if (*(long **)(this + 0xb0) == plVar41) {
                *(long *)(this + 0xb0) = *plVar41;
                plVar41 = (long *)*plVar4;
              }
              if (plVar41 == *(long **)(this + 0xb8)) {
                *(long *)(this + 0xb8) = plVar41[1];
                plVar41 = (long *)*plVar4;
              }
              if ((long *)plVar41[1] != (long *)0x0) {
                *(long *)plVar41[1] = *plVar41;
                plVar41 = (long *)*plVar4;
              }
              if (*plVar41 != 0) {
                *(long *)(*plVar41 + 8) = plVar41[1];
                plVar41 = (long *)*plVar4;
              }
              RaycastHZBuffer::~RaycastHZBuffer((RaycastHZBuffer *)(plVar41 + 3));
              Memory::free_static(plVar41,false);
              lVar36 = *(long *)(this + 0xa0);
              *(undefined8 *)(lVar36 + uVar39 * 8) = 0;
              *(int *)(this + 0xc4) = *(int *)(this + 0xc4) + -1;
              return lVar36;
            }
            uVar33 = *(uint *)(lVar6 + uVar40 * 4);
            uVar39 = uVar40 & 0xffffffff;
            uVar43 = uVar43 + 1;
            if (uVar33 == 0) {
              return lVar35;
            }
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar33 * lVar7;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar5 + uVar44) - SUB164(auVar13 * auVar25,8)) * lVar7;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar42;
            uVar34 = uVar40;
          } while (uVar43 <= SUB164(auVar14 * auVar26,8));
          return SUB168(auVar14 * auVar26,0);
        }
        uVar44 = uVar44 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((int)uVar40 + 1) * lVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        uVar39 = SUB168(auVar10 * auVar22,8);
        uVar43 = *(uint *)(lVar6 + uVar39 * 4);
        uVar38 = SUB164(auVar10 * auVar22,8);
        uVar40 = (ulong)uVar38;
      } while ((uVar43 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar43 * lVar7, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar12._8_8_ = 0,
              auVar12._0_8_ = (ulong)((uVar5 + uVar38) - SUB164(auVar11 * auVar23,8)) * lVar7,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar44 <= SUB164(auVar12 * auVar24,8)));
    }
  }
  lVar36 = _err_print_error("remove_buffer","modules/raycast/raycast_occlusion_cull.cpp",0x201,
                            "Condition \"!buffers.has(p_buffer)\" is true.",0,0);
  return lVar36;
}



/* RaycastOcclusionCull::~RaycastOcclusionCull() */

void __thiscall RaycastOcclusionCull::~RaycastOcclusionCull(RaycastOcclusionCull *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar5 = *(undefined8 **)(this + 0x80);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_is_occluder_0010bfa8;
  for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
    Scenario::free((Scenario *)(puVar5 + 3));
  }
  if (*(long *)(this + 8) != 0) {
    rtcReleaseDevice();
  }
  pvVar8 = *(void **)(this + 0xa0);
  raycast_singleton = 0;
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0xc4) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0xc4) = 0;
        *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa8) + lVar7) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
            *(int *)(*(long *)(this + 0xa8) + lVar7) = 0;
            RaycastHZBuffer::~RaycastHZBuffer((RaycastHZBuffer *)((long)pvVar8 + 0x18));
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0xa0);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 << 2 != lVar7);
        *(undefined4 *)(this + 0xc4) = 0;
        *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00103653;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0xa8),false);
  }
LAB_00103653:
  pvVar8 = *(void **)(this + 0x70);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(this + 0x94) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x94) = 0;
        *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x78) + lVar7) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
            *(int *)(*(long *)(this + 0x78) + lVar7) = 0;
            Scenario::~Scenario((Scenario *)((long)pvVar8 + 0x18));
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(this + 0x70);
            *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 << 2 != lVar7);
        *(undefined4 *)(this + 0x94) = 0;
        *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_001036ed;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(this + 0x78),false);
  }
LAB_001036ed:
  uVar3 = *(uint *)(this + 0x30);
  *(undefined ***)(this + 0x10) = &PTR__RID_Alloc_0010bf58;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar6 = local_48;
    lVar7 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
        lVar7 = local_50;
      }
    }
    local_50 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x2c);
  uVar4 = *(uint *)(this + 0x28);
  lVar7 = 0;
  if (uVar4 <= uVar3) {
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar7 * 8),false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x20) + lVar2),false);
    } while ((uint)lVar7 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x18),false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
  RendererSceneOcclusionCull::singleton = 0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RaycastOcclusionCull::~RaycastOcclusionCull() */

void __thiscall RaycastOcclusionCull::~RaycastOcclusionCull(RaycastOcclusionCull *this)

{
  ~RaycastOcclusionCull(this);
  operator_delete(this,0xd0);
  return;
}



/* RaycastOcclusionCull::occluder_set_mesh(RID, Vector<Vector3> const&, Vector<int> const&) */

void __thiscall
RaycastOcclusionCull::occluder_set_mesh
          (RaycastOcclusionCull *this,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
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
  code *pcVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  long in_FS_OFFSET;
  bool bVar39;
  long *local_90;
  int local_78;
  long local_68;
  long local_60;
  RID local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x2c))) {
    plVar31 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
                      *(long *)(*(long *)(this + 0x18) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
    iVar1 = (int)plVar31[1];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      lVar2 = *plVar31;
      if (lVar2 != 0) {
        lVar32 = *(long *)(lVar2 + 8);
        lVar29 = *(long *)(param_3 + 8);
        if (lVar32 != lVar29) {
          if (lVar32 != 0) {
            LOCK();
            plVar31 = (long *)(lVar32 + -0x10);
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (*plVar31 == 0) {
              lVar32 = *(long *)(lVar2 + 8);
              *(undefined8 *)(lVar2 + 8) = 0;
              Memory::free_static((void *)(lVar32 + -0x10),false);
              lVar29 = *(long *)(param_3 + 8);
            }
            else {
              *(undefined8 *)(lVar2 + 8) = 0;
              lVar29 = *(long *)(param_3 + 8);
            }
          }
          if (lVar29 != 0) {
            plVar31 = (long *)(lVar29 + -0x10);
            do {
              lVar32 = *plVar31;
              if (lVar32 == 0) goto LAB_001039c9;
              LOCK();
              lVar29 = *plVar31;
              bVar39 = lVar32 == lVar29;
              if (bVar39) {
                *plVar31 = lVar32 + 1;
                lVar29 = lVar32;
              }
              UNLOCK();
            } while (!bVar39);
            if (lVar29 != -1) {
              *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_3 + 8);
            }
          }
        }
LAB_001039c9:
        lVar32 = *(long *)(lVar2 + 0x18);
        lVar29 = *(long *)(param_4 + 8);
        if (lVar32 != lVar29) {
          if (lVar32 != 0) {
            LOCK();
            plVar31 = (long *)(lVar32 + -0x10);
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (*plVar31 == 0) {
              lVar32 = *(long *)(lVar2 + 0x18);
              *(undefined8 *)(lVar2 + 0x18) = 0;
              Memory::free_static((void *)(lVar32 + -0x10),false);
              lVar29 = *(long *)(param_4 + 8);
            }
            else {
              *(undefined8 *)(lVar2 + 0x18) = 0;
              lVar29 = *(long *)(param_4 + 8);
            }
          }
          if (lVar29 != 0) {
            plVar31 = (long *)(lVar29 + -0x10);
            do {
              lVar32 = *plVar31;
              if (lVar32 == 0) goto LAB_00103a1d;
              LOCK();
              lVar29 = *plVar31;
              bVar39 = lVar32 == lVar29;
              if (bVar39) {
                *plVar31 = lVar32 + 1;
                lVar29 = lVar32;
              }
              UNLOCK();
            } while (!bVar39);
            if (lVar29 != -1) {
              *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_4 + 8);
            }
          }
        }
LAB_00103a1d:
        iVar1 = *(int *)(lVar2 + 0x44);
        if (iVar1 != 0) {
          local_90 = *(long **)(lVar2 + 0x20);
          local_78 = 0;
LAB_00103a50:
          local_68 = *local_90;
          local_60 = local_90[1];
          if ((*(long *)(this + 0x70) != 0) && (*(int *)(this + 0x94) != 0)) {
            uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4
                                         ));
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
            uVar28 = local_68 * 0x3ffff - 1;
            uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
            uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
            uVar28 = uVar28 >> 0x16 ^ uVar28;
            uVar35 = uVar28 & 0xffffffff;
            if ((int)uVar28 == 0) {
              uVar35 = 1;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar35 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar36;
            lVar32 = SUB168(auVar3 * auVar15,8);
            uVar34 = *(uint *)(*(long *)(this + 0x78) + lVar32 * 4);
            iVar30 = SUB164(auVar3 * auVar15,8);
            if (uVar34 != 0) {
              uVar38 = 0;
              do {
                if (((uint)uVar35 == uVar34) &&
                   (local_68 == *(long *)(*(long *)(*(long *)(this + 0x70) + lVar32 * 8) + 0x10))) {
                  lVar32 = HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                           ::operator[]((HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                                         *)(this + 0x68),(RID *)&local_68);
                  lVar2 = local_60;
                  if ((*(long *)(lVar32 + 0x30) == 0) || (*(int *)(lVar32 + 0x54) == 0))
                  goto LAB_00103e10;
                  uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(lVar32 + 0x50) * 4));
                  lVar29 = *(long *)(hash_table_size_primes_inv +
                                    (ulong)*(uint *)(lVar32 + 0x50) * 8);
                  uVar28 = local_60 * 0x3ffff - 1;
                  uVar28 = (uVar28 ^ uVar28 >> 0x1f) * 0x15;
                  uVar28 = (uVar28 ^ uVar28 >> 0xb) * 0x41;
                  uVar34 = (uint)(uVar28 >> 0x16) ^ (uint)uVar28;
                  if (uVar34 == 0) {
                    uVar34 = 1;
                  }
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = lVar29 * (ulong)uVar34;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar35;
                  lVar33 = SUB168(auVar7 * auVar19,8);
                  uVar38 = *(uint *)(*(long *)(lVar32 + 0x38) + lVar33 * 4);
                  iVar30 = SUB164(auVar7 * auVar19,8);
                  if (uVar38 == 0) goto LAB_00103e10;
                  uVar37 = 0;
                  goto LAB_00103c82;
                }
                uVar38 = uVar38 + 1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (ulong)(iVar30 + 1) * lVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar36;
                lVar32 = SUB168(auVar4 * auVar16,8);
                uVar34 = *(uint *)(*(long *)(this + 0x78) + lVar32 * 4);
                iVar30 = SUB164(auVar4 * auVar16,8);
              } while ((uVar34 != 0) &&
                      (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar34 * lVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar36, auVar6._8_8_ = 0,
                      auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(this + 0x90) * 4) + iVar30)
                                            - SUB164(auVar5 * auVar17,8)) * lVar2, auVar18._8_8_ = 0
                      , auVar18._0_8_ = uVar36, uVar38 <= SUB164(auVar6 * auVar18,8)));
            }
          }
          _err_print_error("occluder_set_mesh","modules/raycast/raycast_occlusion_cull.cpp",0xd6,
                           "Condition \"!scenarios.has(scenario_rid)\" is true. Continuing.",0,0);
          goto LAB_00103d58;
        }
LAB_00103d78:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00103f7b;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("occluder_set_mesh","modules/raycast/raycast_occlusion_cull.cpp",0xce,
                     "Parameter \"occluder\" is null.",0,0);
    return;
  }
LAB_00103f7b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar37 = uVar37 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar30 + 1) * lVar29;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar33 = SUB168(auVar8 * auVar20,8);
    uVar38 = *(uint *)(*(long *)(lVar32 + 0x38) + lVar33 * 4);
    iVar30 = SUB164(auVar8 * auVar20,8);
    if ((uVar38 == 0) ||
       (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar38 * lVar29, auVar21._8_8_ = 0,
       auVar21._0_8_ = uVar35, auVar10._8_8_ = 0,
       auVar10._0_8_ =
            (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar32 + 0x50) * 4) +
                    iVar30) - SUB164(auVar9 * auVar21,8)) * lVar29, auVar22._8_8_ = 0,
       auVar22._0_8_ = uVar35, SUB164(auVar10 * auVar22,8) < uVar37)) break;
LAB_00103c82:
    if ((uVar34 == uVar38) &&
       (local_60 == *(long *)(*(long *)(*(long *)(lVar32 + 0x30) + lVar33 * 8) + 0x10))) {
      if ((*(long *)(lVar32 + 0x58) == 0) || (*(int *)(lVar32 + 0x7c) == 0)) goto LAB_00103da0;
      uVar28 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar32 + 0x78) * 4));
      lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar32 + 0x78) * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar34 * lVar29;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar28;
      lVar33 = SUB168(auVar11 * auVar23,8);
      uVar38 = *(uint *)(*(long *)(lVar32 + 0x70) + lVar33 * 4);
      iVar30 = SUB164(auVar11 * auVar23,8);
      if (uVar38 == 0) goto LAB_00103da0;
      uVar37 = 0;
      goto LAB_00103d42;
    }
  }
LAB_00103e10:
  _err_print_error("occluder_set_mesh","modules/raycast/raycast_occlusion_cull.cpp",0xd8,
                   "Condition \"!scenario.instances.has(instance_rid)\" is true. Continuing.",0,0);
  goto LAB_00103d58;
  while( true ) {
    uVar37 = uVar37 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar30 + 1) * lVar29;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar28;
    lVar33 = SUB168(auVar12 * auVar24,8);
    uVar38 = *(uint *)(*(long *)(lVar32 + 0x70) + lVar33 * 4);
    iVar30 = SUB164(auVar12 * auVar24,8);
    if ((uVar38 == 0) ||
       (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar38 * lVar29, auVar25._8_8_ = 0,
       auVar25._0_8_ = uVar28, auVar14._8_8_ = 0,
       auVar14._0_8_ =
            (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar32 + 0x78) * 4) +
                    iVar30) - SUB164(auVar13 * auVar25,8)) * lVar29, auVar26._8_8_ = 0,
       auVar26._0_8_ = uVar28, SUB164(auVar14 * auVar26,8) < uVar37)) break;
LAB_00103d42:
    if ((uVar34 == uVar38) &&
       (local_60 ==
        *(long *)(*(long *)(lVar32 + 0x58) +
                 (ulong)*(uint *)(*(long *)(lVar32 + 0x60) + lVar33 * 4) * 8))) goto LAB_00103d58;
  }
LAB_00103da0:
  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_58);
  uVar34 = *(uint *)(lVar32 + 0x80);
  if (uVar34 == *(uint *)(lVar32 + 0x84)) {
    uVar28 = (ulong)(uVar34 * 2);
    if (uVar34 * 2 == 0) {
      uVar28 = 1;
    }
    *(int *)(lVar32 + 0x84) = (int)uVar28;
    lVar29 = Memory::realloc_static(*(void **)(lVar32 + 0x88),uVar28 * 8,false);
    *(long *)(lVar32 + 0x88) = lVar29;
    if (lVar29 == 0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar27 = (code *)invalidInstructionException();
      (*pcVar27)();
    }
    uVar34 = *(uint *)(lVar32 + 0x80);
  }
  else {
    lVar29 = *(long *)(lVar32 + 0x88);
  }
  *(uint *)(lVar32 + 0x80) = uVar34 + 1;
  *(long *)(lVar29 + (ulong)uVar34 * 8) = lVar2;
LAB_00103d58:
  local_78 = local_78 + 1;
  if (iVar1 <= local_78) goto LAB_00103d78;
  local_90 = local_90 + 2;
  goto LAB_00103a50;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaycastOcclusionCull::add_scenario(RID) */

void __thiscall RaycastOcclusionCull::add_scenario(RaycastOcclusionCull *this,long param_2)

{
  void *pvVar1;
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
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long in_FS_OFFSET;
  long local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  uVar10 = _LC7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = param_2;
  if ((*(long *)(this + 0x70) != 0) && (*(int *)(this + 0x94) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4));
    lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
    uVar11 = param_2 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar15 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar15 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15 * lVar19;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar16 = *(uint *)(*(long *)(this + 0x78) + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar16 != 0) {
      uVar18 = 0;
      do {
        if ((uVar16 == (uint)uVar15) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0x70) + lVar14 * 8) + 0x10))) {
          _err_print_error("add_scenario","modules/raycast/raycast_occlusion_cull.cpp",0xeb,
                           "Condition \"scenarios.has(p_scenario)\" is true.",0,0);
          goto LAB_001042f5;
        }
        uVar18 = uVar18 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar19;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar16 = *(uint *)(*(long *)(this + 0x78) + lVar14 * 4);
        iVar13 = SUB164(auVar3 * auVar7,8);
      } while ((uVar16 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar19, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x90) * 4) + iVar13) -
                                    SUB164(auVar4 * auVar8,8)) * lVar19, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, uVar18 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  local_d8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_e8._0_9_ = (unkuint9)1 << 0x40;
  local_e8._9_7_ = 0;
  local_98 = _LC7;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_70 = _LC7;
  uStack_68 = _UNK_0010c328;
  puVar12 = (undefined8 *)
            HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
            ::operator[]((HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                          *)(this + 0x68),(RID *)&local_f0);
  *(undefined2 *)(puVar12 + 1) = 1;
  *puVar12 = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
  uVar16 = *(uint *)(puVar12 + 10);
  uVar18 = *(uint *)(hash_table_size_primes + (ulong)uVar16 * 4);
  if ((*(int *)((long)puVar12 + 0x54) == 0) || (puVar12[6] == 0)) {
LAB_001041ab:
    if (0x16 < uVar18) goto LAB_00104202;
  }
  else {
    lVar19 = 0;
    if (uVar18 != 0) {
      do {
        if (*(int *)(puVar12[7] + lVar19) != 0) {
          *(int *)(puVar12[7] + lVar19) = 0;
          pvVar1 = *(void **)(puVar12[6] + lVar19 * 2);
          if (*(void **)((long)pvVar1 + 0x38) != (void *)0x0) {
            if (*(int *)((long)pvVar1 + 0x30) != 0) {
              *(undefined4 *)((long)pvVar1 + 0x30) = 0;
            }
            Memory::free_static(*(void **)((long)pvVar1 + 0x38),false);
          }
          if (*(void **)((long)pvVar1 + 0x28) != (void *)0x0) {
            if (*(int *)((long)pvVar1 + 0x20) != 0) {
              *(undefined4 *)((long)pvVar1 + 0x20) = 0;
            }
            Memory::free_static(*(void **)((long)pvVar1 + 0x28),false);
          }
          Memory::free_static(pvVar1,false);
          *(undefined8 *)(puVar12[6] + lVar19 * 2) = 0;
        }
        lVar19 = lVar19 + 4;
      } while ((ulong)uVar18 << 2 != lVar19);
      uVar16 = *(uint *)(puVar12 + 10);
      *(undefined4 *)((long)puVar12 + 0x54) = 0;
      *(undefined1 (*) [16])(puVar12 + 8) = (undefined1  [16])0x0;
      uVar18 = *(uint *)(hash_table_size_primes + (ulong)uVar16 * 4);
      goto LAB_001041ab;
    }
    *(undefined4 *)((long)puVar12 + 0x54) = 0;
    *(undefined1 (*) [16])(puVar12 + 8) = (undefined1  [16])0x0;
  }
  if (uVar16 != 0x1c) {
    uVar11 = (ulong)uVar16;
    do {
      uVar18 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar18;
      if (0x16 < *(uint *)(hash_table_size_primes + uVar11 * 4)) {
        if (uVar18 != uVar16) {
          if (puVar12[6] == 0) {
            *(uint *)(puVar12 + 10) = uVar18;
          }
          else {
            HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
            ::_resize_and_rehash
                      ((HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                        *)(puVar12 + 5),uVar18);
          }
        }
        goto LAB_00104202;
      }
    } while (uVar18 != 0x1c);
  }
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00104202:
  pvVar1 = (void *)puVar12[0xb];
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((long)puVar12 + 0x7c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar12 + 0xf) * 4) != 0) {
        memset((void *)puVar12[0xe],0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(puVar12 + 0xf) * 4) * 4);
      }
      *(undefined4 *)((long)puVar12 + 0x7c) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static((void *)puVar12[0xd],false);
    Memory::free_static((void *)puVar12[0xc],false);
    Memory::free_static((void *)puVar12[0xe],false);
    *(undefined1 (*) [16])(puVar12 + 0xb) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar12 + 0xd) = (undefined1  [16])0x0;
  }
  puVar12[0xf] = uVar10;
  if (*(int *)(puVar12 + 0x10) != 0) {
    *(undefined4 *)(puVar12 + 0x10) = 0;
  }
  if ((void *)puVar12[0x11] != (void *)0x0) {
    Memory::free_static((void *)puVar12[0x11],false);
  }
  puVar12[0x11] = 0;
  puVar12[0x10] = 0;
  if (*(int *)(puVar12 + 0x12) != 0) {
    *(undefined4 *)(puVar12 + 0x12) = 0;
  }
  if ((void *)puVar12[0x13] != (void *)0x0) {
    Memory::free_static((void *)puVar12[0x13],false);
  }
  puVar12[0x13] = 0;
  puVar12[0x12] = 0;
  Scenario::~Scenario((Scenario *)local_e8);
LAB_001042f5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RaycastOcclusionCull::scenario_set_instance(RID, RID, RID, Transform3D const&, bool) */

void __thiscall
RaycastOcclusionCull::scenario_set_instance
          (RaycastOcclusionCull *this,long param_2,long param_3,long *param_4,Transform3D *param_5,
          char param_6)

{
  HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
  *this_00;
  long lVar1;
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
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  char cVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong *puVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  char cVar43;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = param_3;
  local_d0 = param_2;
  if ((*(long *)(this + 0x70) != 0) && (*(int *)(this + 0x94) != 0)) {
    uVar42 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
    uVar30 = param_2 * 0x3ffff - 1;
    uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
    uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
    uVar30 = uVar30 >> 0x16 ^ uVar30;
    uVar39 = uVar30 & 0xffffffff;
    if ((int)uVar30 == 0) {
      uVar39 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar39 * lVar1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar42;
    lVar35 = SUB168(auVar2 * auVar14,8);
    uVar40 = *(uint *)(*(long *)(this + 0x78) + lVar35 * 4);
    iVar34 = SUB164(auVar2 * auVar14,8);
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        if ((uVar40 == (uint)uVar39) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0x70) + lVar35 * 8) + 0x10))) {
          lVar35 = HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                   ::operator[]((HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                                 *)(this + 0x68),(RID *)&local_d0);
          lVar1 = local_d8;
          this_00 = (HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                     *)(lVar35 + 0x28);
          if ((*(long *)(lVar35 + 0x30) == 0) || (*(int *)(lVar35 + 0x54) == 0)) goto LAB_001046e5;
          uVar39 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar35 + 0x50) * 4
                                       ));
          lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar35 + 0x50) * 8);
          uVar30 = local_d8 * 0x3ffff - 1;
          uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
          uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
          uVar30 = uVar30 >> 0x16 ^ uVar30;
          uVar42 = uVar30 & 0xffffffff;
          if ((int)uVar30 == 0) {
            uVar42 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar42 * lVar33;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar39;
          lVar36 = SUB168(auVar6 * auVar18,8);
          uVar40 = *(uint *)(*(long *)(lVar35 + 0x38) + lVar36 * 4);
          iVar34 = SUB164(auVar6 * auVar18,8);
          if (uVar40 == 0) goto LAB_001046e5;
          uVar41 = 0;
          goto LAB_001046c2;
        }
        uVar41 = uVar41 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar34 + 1) * lVar1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar42;
        lVar35 = SUB168(auVar3 * auVar15,8);
        uVar40 = *(uint *)(*(long *)(this + 0x78) + lVar35 * 4);
        iVar34 = SUB164(auVar3 * auVar15,8);
      } while ((uVar40 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar40 * lVar1, auVar16._8_8_ = 0,
              auVar16._0_8_ = uVar42, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x90) * 4) + iVar34) -
                                    SUB164(auVar4 * auVar16,8)) * lVar1, auVar17._8_8_ = 0,
              auVar17._0_8_ = uVar42, uVar41 <= SUB164(auVar5 * auVar17,8)));
    }
  }
  _err_print_error("scenario_set_instance","modules/raycast/raycast_occlusion_cull.cpp",0xf7,
                   "Condition \"!scenarios.has(p_scenario)\" is true.",0,0);
  goto LAB_001048f2;
  while( true ) {
    uVar41 = uVar41 + 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)(iVar34 + 1) * lVar33;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar39;
    lVar36 = SUB168(auVar7 * auVar19,8);
    uVar40 = *(uint *)(*(long *)(lVar35 + 0x38) + lVar36 * 4);
    iVar34 = SUB164(auVar7 * auVar19,8);
    if ((uVar40 == 0) ||
       (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar40 * lVar33, auVar20._8_8_ = 0,
       auVar20._0_8_ = uVar39, auVar9._8_8_ = 0,
       auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                        (ulong)*(uint *)(lVar35 + 0x50) * 4) + iVar34) -
                             SUB164(auVar8 * auVar20,8)) * lVar33, auVar21._8_8_ = 0,
       auVar21._0_8_ = uVar39, SUB164(auVar9 * auVar21,8) < uVar41)) break;
LAB_001046c2:
    if (((uint)uVar42 == uVar40) &&
       (local_d8 == *(long *)(*(long *)(*(long *)(lVar35 + 0x30) + lVar36 * 8) + 0x10)))
    goto LAB_001047d3;
  }
LAB_001046e5:
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  puVar31 = (undefined8 *)
            HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
            ::operator[](this_00,(RID *)&local_d8);
  *puVar31 = 0;
  if (*(int *)(puVar31 + 1) != 0) {
    *(undefined4 *)(puVar31 + 1) = 0;
  }
  if ((void *)puVar31[2] != (void *)0x0) {
    Memory::free_static((void *)puVar31[2],false);
  }
  puVar31[2] = 0;
  puVar31[1] = 0;
  if (*(int *)(puVar31 + 3) != 0) {
    *(undefined4 *)(puVar31 + 3) = 0;
  }
  if ((void *)puVar31[4] != (void *)0x0) {
    Memory::free_static((void *)puVar31[4],false);
  }
  uVar28 = _UNK_0010c338;
  local_80 = ZEXT416(_LC18);
  local_60 = 0x3f800000;
  uVar27 = CONCAT44(_UNK_0010c334,_LC18);
  puVar31[4] = 0;
  puVar31[3] = 0;
  *(undefined2 *)(puVar31 + 0xb) = 1;
  puVar31[5] = uVar27;
  puVar31[6] = uVar28;
  puVar31[7] = uVar27;
  puVar31[8] = uVar28;
  puVar31[9] = CONCAT44(uStack_5c,0x3f800000);
  puVar31[10] = CONCAT44(uStack_54,uStack_58);
  local_70 = local_80;
LAB_001047d3:
  puVar32 = (ulong *)HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                     ::operator[](this_00,(RID *)&local_d8);
  cVar43 = *(char *)((long)puVar32 + 0x59);
  if (cVar43 != '\0') {
    uVar40 = *(uint *)(lVar35 + 0x90);
    *(undefined1 *)((long)puVar32 + 0x59) = 0;
    if (uVar40 != 0) {
      lVar33 = *(long *)(lVar35 + 0x98);
      uVar30 = 0;
      do {
        if (*(long *)(lVar33 + uVar30 * 8) == lVar1) {
          *(uint *)(lVar35 + 0x90) = uVar40 - 1;
          uVar41 = (uint)uVar30;
          if (uVar41 < uVar40 - 1) {
            memmove((void *)(lVar33 + uVar30 * 8),(void *)(lVar33 + (ulong)(uVar41 + 1) * 8),
                    (ulong)((uVar40 - 2) - uVar41) * 8 + 8);
          }
          break;
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar40);
    }
  }
  plVar38 = (long *)*puVar32;
  if (param_4 != plVar38) {
    if ((plVar38 != (long *)0x0) && ((uint)plVar38 < *(uint *)(this + 0x2c))) {
      plVar37 = (long *)((((ulong)plVar38 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
                        *(long *)(*(long *)(this + 0x18) +
                                 (((ulong)plVar38 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8
                                 ));
      iVar34 = (int)plVar37[1];
      if (iVar34 == (int)((ulong)plVar38 >> 0x20)) {
        lVar33 = *plVar37;
        if (lVar33 != 0) {
          lStack_b0 = lVar1;
          local_b8 = param_2;
          HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
          ::erase((HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
                   *)(lVar33 + 0x20),(InstanceID *)&local_b8);
        }
      }
      else if (iVar34 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    *puVar32 = (ulong)param_4;
    if (param_4 != (long *)0x0) {
      if ((uint)param_4 < *(uint *)(this + 0x2c)) {
        plVar38 = (long *)((((ulong)param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
                          *(long *)(*(long *)(this + 0x18) +
                                   (((ulong)param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) *
                                   8));
        iVar34 = (int)plVar38[1];
        if (iVar34 == (int)((ulong)param_4 >> 0x20)) {
          if (*plVar38 != 0) {
            lStack_c0 = lVar1;
            local_c8 = param_2;
            HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
            ::insert((InstanceID *)&local_b8);
            goto LAB_001048b8;
          }
        }
        else if (iVar34 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("scenario_set_instance","modules/raycast/raycast_occlusion_cull.cpp",0x112,
                       "Parameter \"occluder\" is null.",0,0);
      goto LAB_001048f2;
    }
LAB_001048b8:
    cVar43 = '\x01';
  }
  cVar29 = Transform3D::operator!=((Transform3D *)(puVar32 + 5),param_5);
  if (cVar29 == '\0') {
    if ((char)puVar32[0xb] != param_6) {
      *(char *)(puVar32 + 0xb) = param_6;
      *(undefined1 *)(lVar35 + 9) = 1;
    }
    if (cVar43 == '\0') goto LAB_001048f2;
  }
  else {
    lVar33 = HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
             ::operator[](this_00,(RID *)&local_d8);
    uVar27 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(lVar33 + 0x28) = *(undefined8 *)param_5;
    *(undefined8 *)(lVar33 + 0x30) = uVar27;
    param_4 = *(long **)(param_5 + 0x10);
    uVar27 = *(undefined8 *)(param_5 + 0x18);
    *(long **)(lVar33 + 0x38) = param_4;
    *(undefined8 *)(lVar33 + 0x40) = uVar27;
    uVar27 = *(undefined8 *)(param_5 + 0x28);
    *(undefined8 *)(lVar33 + 0x48) = *(undefined8 *)(param_5 + 0x20);
    *(undefined8 *)(lVar33 + 0x50) = uVar27;
    if (param_6 != (char)puVar32[0xb]) {
      *(char *)(puVar32 + 0xb) = param_6;
      *(undefined1 *)(lVar35 + 9) = 1;
    }
  }
  if ((*(long *)(lVar35 + 0x58) != 0) && (*(int *)(lVar35 + 0x7c) != 0)) {
    uVar39 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar35 + 0x78) * 4));
    lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar35 + 0x78) * 8);
    uVar30 = lVar1 * 0x3ffff - 1;
    uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
    uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
    uVar30 = uVar30 >> 0x16 ^ uVar30;
    uVar42 = uVar30 & 0xffffffff;
    if ((int)uVar30 == 0) {
      uVar42 = 1;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar42 * lVar33;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar39;
    lVar36 = SUB168(auVar10 * auVar22,8);
    uVar40 = *(uint *)(*(long *)(lVar35 + 0x70) + lVar36 * 4);
    iVar34 = SUB164(auVar10 * auVar22,8);
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        if (((uint)uVar42 == uVar40) &&
           (lVar1 == *(long *)(*(long *)(lVar35 + 0x58) +
                              (ulong)*(uint *)(*(long *)(lVar35 + 0x60) + lVar36 * 4) * 8)))
        goto LAB_001048f2;
        uVar41 = uVar41 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar33;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar39;
        lVar36 = SUB168(auVar11 * auVar23,8);
        uVar40 = *(uint *)(*(long *)(lVar35 + 0x70) + lVar36 * 4);
        iVar34 = SUB164(auVar11 * auVar23,8);
        param_4 = &local_d8;
      } while ((uVar40 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar40 * lVar33, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar39, auVar13._8_8_ = 0,
              auVar13._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar35 + 0x78) * 4)
                           + iVar34) - SUB164(auVar12 * auVar24,8)) * lVar33, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar39, uVar41 <= SUB164(auVar13 * auVar25,8)));
    }
  }
  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert((RID *)&local_b8);
  uVar40 = *(uint *)(lVar35 + 0x80);
  if (uVar40 == *(uint *)(lVar35 + 0x84)) {
    uVar30 = (ulong)(uVar40 * 2);
    if (uVar40 * 2 == 0) {
      uVar30 = 1;
    }
    *(int *)(lVar35 + 0x84) = (int)uVar30;
    lVar33 = Memory::realloc_static(*(void **)(lVar35 + 0x88),uVar30 * 8,false);
    *(long *)(lVar35 + 0x88) = lVar33;
    if (lVar33 == 0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0,param_4);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar26 = (code *)invalidInstructionException();
      (*pcVar26)();
    }
    uVar40 = *(uint *)(lVar35 + 0x80);
  }
  else {
    lVar33 = *(long *)(lVar35 + 0x88);
  }
  *(uint *)(lVar35 + 0x80) = uVar40 + 1;
  *(long *)(lVar33 + (ulong)uVar40 * 8) = lVar1;
  *(undefined1 *)(lVar35 + 9) = 1;
LAB_001048f2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RaycastOcclusionCull::scenario_remove_instance(RID, RID) */

void __thiscall
RaycastOcclusionCull::scenario_remove_instance(RaycastOcclusionCull *this,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
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
  code *pcVar19;
  ulong uVar20;
  ulong *puVar21;
  void *pvVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_3;
  local_60 = param_2;
  if ((*(long *)(this + 0x70) != 0) && (*(int *)(this + 0x94) != 0)) {
    uVar30 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
    uVar20 = param_2 * 0x3ffff - 1;
    uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
    uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
    uVar20 = uVar20 >> 0x16 ^ uVar20;
    uVar27 = uVar20 & 0xffffffff;
    if ((int)uVar20 == 0) {
      uVar27 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar27 * lVar1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar30;
    lVar24 = SUB168(auVar3 * auVar11,8);
    uVar28 = *(uint *)(*(long *)(this + 0x78) + lVar24 * 4);
    iVar23 = SUB164(auVar3 * auVar11,8);
    if (uVar28 != 0) {
      uVar29 = 0;
      do {
        if (((uint)uVar27 == uVar28) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0x70) + lVar24 * 8) + 0x10))) {
          lVar24 = HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                   ::operator[]((HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                                 *)(this + 0x68),(RID *)&local_60);
          lVar1 = local_68;
          if ((*(long *)(lVar24 + 0x30) == 0) || (*(int *)(lVar24 + 0x54) == 0)) goto LAB_00104fa0;
          uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar24 + 0x50) * 4
                                       ));
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar24 + 0x50) * 8);
          uVar20 = local_68 * 0x3ffff - 1;
          uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
          uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
          uVar20 = uVar20 >> 0x16 ^ uVar20;
          uVar30 = uVar20 & 0xffffffff;
          if ((int)uVar20 == 0) {
            uVar30 = 1;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar30 * lVar2;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar27;
          lVar25 = SUB168(auVar7 * auVar15,8);
          uVar28 = *(uint *)(*(long *)(lVar24 + 0x38) + lVar25 * 4);
          iVar23 = SUB164(auVar7 * auVar15,8);
          if (uVar28 == 0) goto LAB_00104fa0;
          uVar29 = 0;
          goto LAB_00104eea;
        }
        uVar29 = uVar29 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar23 + 1) * lVar1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar30;
        lVar24 = SUB168(auVar4 * auVar12,8);
        uVar28 = *(uint *)(*(long *)(this + 0x78) + lVar24 * 4);
        iVar23 = SUB164(auVar4 * auVar12,8);
      } while ((uVar28 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar28 * lVar1, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar30, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x90) * 4) + iVar23) -
                                    SUB164(auVar5 * auVar13,8)) * lVar1, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar30, uVar29 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  _err_print_error("scenario_remove_instance","modules/raycast/raycast_occlusion_cull.cpp",0x12a,
                   "Condition \"!scenarios.has(p_scenario)\" is true.",0,0);
LAB_00104fa0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104eea:
  if (((uint)uVar30 == uVar28) &&
     (local_68 == *(long *)(*(long *)(*(long *)(lVar24 + 0x30) + lVar25 * 8) + 0x10))) {
    puVar21 = (ulong *)HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                       ::operator[]((HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                                     *)(lVar24 + 0x28),(RID *)&local_68);
    if (*(char *)((long)puVar21 + 0x59) == '\0') {
      uVar20 = *puVar21;
      if (uVar20 != 0) {
        if ((uint)uVar20 < *(uint *)(this + 0x2c)) {
          plVar26 = (long *)(((uVar20 & 0xffffffff) % (ulong)*(uint *)(this + 0x28)) * 0x10 +
                            *(long *)(*(long *)(this + 0x18) +
                                     ((uVar20 & 0xffffffff) / (ulong)*(uint *)(this + 0x28)) * 8));
          iVar23 = (int)plVar26[1];
          if (iVar23 == (int)(uVar20 >> 0x20)) {
            lVar2 = *plVar26;
            if (lVar2 != 0) {
              lStack_50 = lVar1;
              local_58 = param_2;
              HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
              ::erase((HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
                       *)(lVar2 + 0x20),(InstanceID *)&local_58);
            }
          }
          else if (iVar23 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
      }
      uVar28 = *(uint *)(lVar24 + 0x90);
      pvVar22 = *(void **)(lVar24 + 0x98);
      if (uVar28 == *(uint *)(lVar24 + 0x94)) {
        uVar20 = (ulong)(uVar28 * 2);
        if (uVar28 * 2 == 0) {
          uVar20 = 1;
        }
        *(int *)(lVar24 + 0x94) = (int)uVar20;
        pvVar22 = (void *)Memory::realloc_static(pvVar22,uVar20 * 8,false);
        *(void **)(lVar24 + 0x98) = pvVar22;
        if (pvVar22 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar28 = *(uint *)(lVar24 + 0x90);
      }
      *(uint *)(lVar24 + 0x90) = uVar28 + 1;
      *(long *)((long)pvVar22 + (ulong)uVar28 * 8) = lVar1;
      *(undefined1 *)((long)puVar21 + 0x59) = 1;
    }
    goto LAB_00104fa0;
  }
  uVar29 = uVar29 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)(iVar23 + 1) * lVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar27;
  lVar25 = SUB168(auVar8 * auVar16,8);
  uVar28 = *(uint *)(*(long *)(lVar24 + 0x38) + lVar25 * 4);
  iVar23 = SUB164(auVar8 * auVar16,8);
  if ((uVar28 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar28 * lVar2, auVar17._8_8_ = 0,
     auVar17._0_8_ = uVar27, auVar10._8_8_ = 0,
     auVar10._0_8_ =
          (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar24 + 0x50) * 4) + iVar23)
                 - SUB164(auVar9 * auVar17,8)) * lVar2, auVar18._8_8_ = 0, auVar18._0_8_ = uVar27,
     SUB164(auVar10 * auVar18,8) < uVar29)) goto LAB_00104fa0;
  goto LAB_00104eea;
}



/* RaycastOcclusionCull::add_buffer(RID) */

void __thiscall RaycastOcclusionCull::add_buffer(RaycastOcclusionCull *this,long param_2)

{
  Image *pIVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  long local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  CowData local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = param_2;
  if ((*(long *)(this + 0xa0) != 0) && (*(int *)(this + 0xc4) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4));
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc0) * 8);
    uVar11 = param_2 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar15 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar15 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15 * lVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar16 = *(uint *)(*(long *)(this + 0xa8) + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar16 != 0) {
      uVar18 = 0;
      do {
        if ((uVar16 == (uint)uVar15) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0xa0) + lVar14 * 8) + 0x10))) {
          _err_print_error("add_buffer","modules/raycast/raycast_occlusion_cull.cpp",0x1fc,
                           "Condition \"buffers.has(p_buffer)\" is true.",0,0);
          goto LAB_00105381;
        }
        uVar18 = uVar18 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar12;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar16 = *(uint *)(*(long *)(this + 0xa8) + lVar14 * 4);
        iVar13 = SUB164(auVar3 * auVar7,8);
      } while ((uVar16 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar12, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xc0) * 4) + iVar13) -
                                    SUB164(auVar4 * auVar8,8)) * lVar12, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, uVar18 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_e8 = &PTR_clear_0010bf78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_98[0] = (CowData)0x0;
  local_98[1] = (CowData)0x0;
  local_98[2] = (CowData)0x0;
  local_98[3] = (CowData)0x0;
  local_98[4] = (CowData)0x0;
  local_98[5] = (CowData)0x0;
  local_98[6] = (CowData)0x0;
  local_98[7] = (CowData)0x0;
  local_98[8] = (CowData)0x0;
  local_98[9] = (CowData)0x0;
  local_98[10] = (CowData)0x0;
  local_98[0xb] = (CowData)0x0;
  local_98[0xc] = (CowData)0x0;
  local_98[0xd] = (CowData)0x0;
  local_98[0xe] = (CowData)0x0;
  local_98[0xf] = (CowData)0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  lVar12 = HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
           ::operator[]((HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                         *)(this + 0x98),(RID *)&local_f0);
  if (*(int *)(lVar12 + 8) != 0) {
    *(undefined4 *)(lVar12 + 8) = 0;
  }
  if (*(int *)(lVar12 + 0x18) != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
  }
  if (*(int *)(lVar12 + 0x28) != 0) {
    *(undefined4 *)(lVar12 + 0x28) = 0;
  }
  pIVar1 = *(Image **)(lVar12 + 0x40);
  *(undefined8 *)(lVar12 + 0x38) = local_b0;
  if (pIVar1 != (Image *)0x0) {
    *(undefined8 *)(lVar12 + 0x40) = 0;
    cVar10 = RefCounted::unreference();
    if (cVar10 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
  if (*(long *)(lVar12 + 0x50) != 0) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(lVar12 + 0x50),local_98);
  }
  *(undefined4 *)(lVar12 + 0x58) = 0;
  *(undefined8 *)(lVar12 + 0x60) = 0;
  *(undefined8 *)(lVar12 + 0x68) = local_88._8_8_;
  *(undefined4 *)(lVar12 + 0x78) = 0;
  *(undefined8 *)(lVar12 + 0x70) = local_78._0_8_;
  *(undefined1 (*) [16])(lVar12 + 0x80) = (undefined1  [16])0x0;
  if (*(int *)(lVar12 + 0x90) != 0) {
    *(undefined4 *)(lVar12 + 0x90) = 0;
  }
  *(undefined8 *)(lVar12 + 0xa0) = local_48;
  RaycastHZBuffer::~RaycastHZBuffer((RaycastHZBuffer *)&local_e8);
LAB_00105381:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::buffer_set_scenario(RID, RID) */

void __thiscall
RaycastOcclusionCull::buffer_set_scenario(RaycastOcclusionCull *this,long param_2,long param_3)

{
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
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long local_40 [2];
  
  local_40[0] = param_2;
  if ((*(long *)(this + 0xa0) != 0) && (*(int *)(this + 0xc4) != 0)) {
    uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4));
    lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc0) * 8);
    uVar17 = param_2 * 0x3ffff - 1;
    uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
    uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
    uVar17 = uVar17 >> 0x16 ^ uVar17;
    uVar21 = uVar17 & 0xffffffff;
    if ((int)uVar17 == 0) {
      uVar21 = 1;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar21 * lVar18;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar24;
    lVar20 = SUB168(auVar1 * auVar9,8);
    uVar23 = *(uint *)(*(long *)(this + 0xa8) + lVar20 * 4);
    iVar19 = SUB164(auVar1 * auVar9,8);
    if (uVar23 != 0) {
      uVar22 = 0;
      do {
        if (((uint)uVar21 == uVar23) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0xa0) + lVar20 * 8) + 0x10))) {
          if (param_3 == 0) goto LAB_00105527;
          if ((*(long *)(this + 0x70) != 0) && (*(int *)(this + 0x94) != 0)) {
            uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x90) * 4
                                         ));
            lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x90) * 8);
            uVar17 = param_3 * 0x3ffff - 1;
            uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
            uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
            uVar17 = uVar17 >> 0x16 ^ uVar17;
            uVar24 = uVar17 & 0xffffffff;
            if ((int)uVar17 == 0) {
              uVar24 = 1;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar24 * lVar18;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar21;
            lVar20 = SUB168(auVar5 * auVar13,8);
            uVar23 = *(uint *)(*(long *)(this + 0x78) + lVar20 * 4);
            iVar19 = SUB164(auVar5 * auVar13,8);
            if (uVar23 != 0) {
              uVar22 = 0;
              do {
                if (((uint)uVar24 == uVar23) &&
                   (param_3 == *(long *)(*(long *)(*(long *)(this + 0x70) + lVar20 * 8) + 0x10))) {
LAB_00105527:
                  lVar18 = HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                           ::operator[]((HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                                         *)(this + 0x98),(RID *)local_40);
                  *(long *)(lVar18 + 0xa0) = param_3;
                  return;
                }
                uVar22 = uVar22 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)(iVar19 + 1) * lVar18;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar21;
                lVar20 = SUB168(auVar6 * auVar14,8);
                uVar23 = *(uint *)(*(long *)(this + 0x78) + lVar20 * 4);
                iVar19 = SUB164(auVar6 * auVar14,8);
              } while ((uVar23 != 0) &&
                      (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar23 * lVar18, auVar15._8_8_ = 0,
                      auVar15._0_8_ = uVar21, auVar8._8_8_ = 0,
                      auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(this + 0x90) * 4) + iVar19)
                                            - SUB164(auVar7 * auVar15,8)) * lVar18,
                      auVar16._8_8_ = 0, auVar16._0_8_ = uVar21,
                      uVar22 <= SUB164(auVar8 * auVar16,8)));
            }
          }
          _err_print_error("buffer_set_scenario","modules/raycast/raycast_occlusion_cull.cpp",0x207,
                           "Condition \"p_scenario.is_valid() && !scenarios.has(p_scenario)\" is true."
                           ,0,0);
          return;
        }
        uVar22 = uVar22 + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)(iVar19 + 1) * lVar18;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar24;
        lVar20 = SUB168(auVar2 * auVar10,8);
        uVar23 = *(uint *)(*(long *)(this + 0xa8) + lVar20 * 4);
        iVar19 = SUB164(auVar2 * auVar10,8);
      } while ((uVar23 != 0) &&
              (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar23 * lVar18, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar24, auVar4._8_8_ = 0,
              auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xc0) * 4) + iVar19) -
                                    SUB164(auVar3 * auVar11,8)) * lVar18, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar24, uVar22 <= SUB164(auVar4 * auVar12,8)));
    }
  }
  _err_print_error("buffer_set_scenario","modules/raycast/raycast_occlusion_cull.cpp",0x206,
                   "Condition \"!buffers.has(p_buffer)\" is true.",0,0);
  return;
}



/* RaycastOcclusionCull::buffer_set_size(RID, Vector2i const&) */

void __thiscall
RaycastOcclusionCull::buffer_set_size(RaycastOcclusionCull *this,long param_2,undefined8 param_3)

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
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long local_40 [2];
  
  local_40[0] = param_2;
  if ((*(long *)(this + 0xa0) != 0) && (*(int *)(this + 0xc4) != 0)) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc0) * 8);
    uVar10 = param_2 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar14 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar14 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa8) + lVar13 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if (((uint)uVar14 == uVar15) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0xa0) + lVar13 * 8) + 0x10))) {
          plVar11 = (long *)HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                            ::operator[]((HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                                          *)(this + 0x98),(RID *)local_40);
          (**(code **)(*plVar11 + 8))(plVar11,param_3);
          return;
        }
        uVar17 = uVar17 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(this + 0xa8) + lVar13 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar15 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xc0) * 4) + iVar12) -
                                    SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, uVar17 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  _err_print_error("buffer_set_size","modules/raycast/raycast_occlusion_cull.cpp",0x20c,
                   "Condition \"!buffers.has(p_buffer)\" is true.",0,0);
  return;
}



/* RaycastOcclusionCull::buffer_update(RID, Transform3D const&, Projection const&, bool) */

void RaycastOcclusionCull::buffer_update
               (undefined8 param_1,undefined8 param_2,RaycastOcclusionCull *param_3,long param_4,
               Transform3D *param_5,Projection *param_6,bool param_7)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  ulong uVar19;
  RaycastHZBuffer *this;
  Scenario *this_00;
  int iVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  float fVar26;
  undefined8 uVar27;
  long local_80 [2];
  undefined8 local_70;
  uint local_68;
  undefined1 local_64 [12];
  undefined8 local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80[0] = param_4;
  if ((*(long *)(param_3 + 0xa0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) {
    uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0xc0) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0xc0) * 8);
    uVar19 = param_4 * 0x3ffff - 1;
    uVar19 = (uVar19 ^ uVar19 >> 0x1f) * 0x15;
    uVar19 = (uVar19 ^ uVar19 >> 0xb) * 0x41;
    uVar19 = uVar19 >> 0x16 ^ uVar19;
    uVar25 = uVar19 & 0xffffffff;
    if ((int)uVar19 == 0) {
      uVar25 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar25 * lVar1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar23;
    lVar21 = SUB168(auVar2 * auVar10,8);
    uVar22 = *(uint *)(*(long *)(param_3 + 0xa8) + lVar21 * 4);
    iVar20 = SUB164(auVar2 * auVar10,8);
    if (uVar22 != 0) {
      uVar24 = 0;
      while (((uint)uVar25 != uVar22 ||
             (param_4 != *(long *)(*(long *)(*(long *)(param_3 + 0xa0) + lVar21 * 8) + 0x10)))) {
        uVar24 = uVar24 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar20 + 1) * lVar1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar23;
        lVar21 = SUB168(auVar3 * auVar11,8);
        uVar22 = *(uint *)(*(long *)(param_3 + 0xa8) + lVar21 * 4);
        iVar20 = SUB164(auVar3 * auVar11,8);
        if ((uVar22 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar22 * lVar1, auVar12._8_8_ = 0,
           auVar12._0_8_ = uVar23, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(param_3 + 0xc0) * 4) + iVar20) -
                                 SUB164(auVar4 * auVar12,8)) * lVar1, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar23, SUB164(auVar5 * auVar13,8) < uVar24)) goto LAB_00105bc0;
      }
      this = (RaycastHZBuffer *)
             HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
             ::operator[]((HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                           *)(param_3 + 0x98),(RID *)local_80);
      cVar18 = RendererSceneOcclusionCull::HZBuffer::is_empty();
      if (cVar18 == '\0') {
        if ((*(long *)(param_3 + 0x70) != 0) && (*(int *)(param_3 + 0x94) != 0)) {
          uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_3 + 0x90) * 4));
          lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x90) * 8);
          uVar19 = *(long *)(this + 0xa0) * 0x3ffff - 1;
          uVar19 = (uVar19 ^ uVar19 >> 0x1f) * 0x15;
          uVar19 = (uVar19 ^ uVar19 >> 0xb) * 0x41;
          uVar19 = uVar19 >> 0x16 ^ uVar19;
          uVar25 = uVar19 & 0xffffffff;
          if ((int)uVar19 == 0) {
            uVar25 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar25 * lVar1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar23;
          lVar21 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(*(long *)(param_3 + 0x78) + lVar21 * 4);
          iVar20 = SUB164(auVar6 * auVar14,8);
          if (uVar22 != 0) {
            uVar24 = 0;
            goto LAB_00105ada;
          }
        }
      }
    }
  }
LAB_00105bc0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105ada:
  if (((uint)uVar25 == uVar22) &&
     (*(long *)(this + 0xa0) == *(long *)(*(long *)(*(long *)(param_3 + 0x70) + lVar21 * 8) + 0x10))
     ) {
    this_00 = (Scenario *)
              HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
              ::operator[]((HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
                            *)(param_3 + 0x68),this + 0xa0);
    Scenario::update(this_00);
    local_58 = _get_viewport_rect(param_6);
    uVar19 = (ulong)local_58 >> 0x20;
    fVar26 = (float)local_58;
    local_50[0] = param_2;
    uVar27 = _get_jitter(param_3,(Rect2 *)&local_58,(Vector2i *)(this + 0x68));
    local_68 = Projection::get_z_near();
    local_68 = local_68 ^ _LC33;
    local_70 = CONCAT44((float)uVar19 + (float)((ulong)uVar27 >> 0x20),fVar26 + (float)uVar27);
    fVar26 = (float)Projection::get_z_far();
    RaycastHZBuffer::update_camera_rays
              (this,param_5,(Vector3 *)&local_70,(Vector2 *)local_50,fVar26,param_7);
    Scenario::raycast(this_00,*(RTCRayHit16 **)(this + 0x88),*(uint **)(this + 0x98),
                      *(uint *)(this + 0x78));
    RaycastHZBuffer::sort_rays((Vector3 *)this,SUB81(local_64,0));
    RendererSceneOcclusionCull::HZBuffer::update_mips();
    goto LAB_00105bc0;
  }
  uVar24 = uVar24 + 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)(iVar20 + 1) * lVar1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar23;
  lVar21 = SUB168(auVar7 * auVar15,8);
  uVar22 = *(uint *)(*(long *)(param_3 + 0x78) + lVar21 * 4);
  iVar20 = SUB164(auVar7 * auVar15,8);
  if ((uVar22 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar22 * lVar1, auVar16._8_8_ = 0,
     auVar16._0_8_ = uVar23, auVar9._8_8_ = 0,
     auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x90) * 4
                                      ) + iVar20) - SUB164(auVar8 * auVar16,8)) * lVar1,
     auVar17._8_8_ = 0, auVar17._0_8_ = uVar23, SUB164(auVar9 * auVar17,8) < uVar24))
  goto LAB_00105bc0;
  goto LAB_00105ada;
}



/* RaycastOcclusionCull::buffer_get_ptr(RID) */

long __thiscall RaycastOcclusionCull::buffer_get_ptr(RaycastOcclusionCull *this,long param_2)

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
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long local_40 [2];
  
  lVar11 = *(long *)(this + 0xa0);
  if (lVar11 != 0) {
    if (*(int *)(this + 0xc4) != 0) {
      uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc0) * 8);
      uVar10 = param_2 * 0x3ffff - 1;
      uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
      uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar14 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
        uVar14 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      lVar13 = SUB168(auVar2 * auVar6,8);
      uVar16 = *(uint *)(*(long *)(this + 0xa8) + lVar13 * 4);
      iVar12 = SUB164(auVar2 * auVar6,8);
      if (uVar16 != 0) {
        uVar15 = 0;
        do {
          if (((uint)uVar14 == uVar16) &&
             (param_2 == *(long *)(*(long *)(lVar11 + lVar13 * 8) + 0x10))) {
            local_40[0] = param_2;
            lVar11 = HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                     ::operator[]((HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                                   *)(this + 0x98),(RID *)local_40);
            return lVar11;
          }
          uVar15 = uVar15 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar17;
          lVar13 = SUB168(auVar3 * auVar7,8);
          uVar16 = *(uint *)(*(long *)(this + 0xa8) + lVar13 * 4);
          iVar12 = SUB164(auVar3 * auVar7,8);
        } while ((uVar16 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar1, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0xc0) * 4) + iVar12) -
                                      SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar17, uVar15 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    lVar11 = 0;
  }
  return lVar11;
}



/* RaycastOcclusionCull::buffer_get_debug_texture(RID) */

undefined8 __thiscall
RaycastOcclusionCull::buffer_get_debug_texture(RaycastOcclusionCull *this,long param_2)

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
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long local_40 [2];
  
  local_40[0] = param_2;
  if ((*(long *)(this + 0xa0) != 0) && (*(int *)(this + 0xc4) != 0)) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc0) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xc0) * 8);
    uVar10 = param_2 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar14 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar14 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa8) + lVar13 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if (((uint)uVar14 == uVar15) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0xa0) + lVar13 * 8) + 0x10))) {
          HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
          ::operator[]((HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
                        *)(this + 0x98),(RID *)local_40);
          uVar11 = RendererSceneOcclusionCull::HZBuffer::get_debug_texture();
          return uVar11;
        }
        uVar17 = uVar17 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(this + 0xa8) + lVar13 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar15 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xc0) * 4) + iVar12) -
                                    SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, uVar17 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  _err_print_error("buffer_get_debug_texture","modules/raycast/raycast_occlusion_cull.cpp",0x273,
                   "Condition \"!buffers.has(p_buffer)\" is true. Returning: RID()",0,0);
  return 0;
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



/* WorkerThreadPool::BaseTemplateUserdata::callback() */

void WorkerThreadPool::BaseTemplateUserdata::callback(void)

{
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario const, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::RaycastThreadData const*) const,
   RaycastOcclusionCull::Scenario::RaycastThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
                 *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(int, RID*), RID*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
                 *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::TransformThreadData*),
   RaycastOcclusionCull::Scenario::TransformThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
                 *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::RaycastHZBuffer, void
   (RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned int,
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData const*),
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
                 *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario const, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::RaycastThreadData const*) const,
   RaycastOcclusionCull::Scenario::RaycastThreadData*>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
::callback_indexed(GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
                   *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00105fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,
             *(undefined8 *)(this + 0x20),UNRECOVERED_JUMPTABLE);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(int, RID*), RID*>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
::callback_indexed(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
                   *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00105ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,
             *(undefined8 *)(this + 0x20),UNRECOVERED_JUMPTABLE);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::TransformThreadData*),
   RaycastOcclusionCull::Scenario::TransformThreadData*>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
::callback_indexed(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
                   *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00106024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,
             *(undefined8 *)(this + 0x20),UNRECOVERED_JUMPTABLE);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::RaycastHZBuffer, void
   (RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned int,
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData const*),
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
::callback_indexed(GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
                   *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00106054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,
             *(undefined8 *)(this + 0x20),UNRECOVERED_JUMPTABLE);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::RaycastHZBuffer, void
   (RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned int,
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData const*),
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
                 *this)

{
  operator_delete(this,0x28);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::TransformThreadData*),
   RaycastOcclusionCull::Scenario::TransformThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
                 *this)

{
  operator_delete(this,0x28);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(int, RID*), RID*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
                 *this)

{
  operator_delete(this,0x28);
  return;
}



/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario const, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::RaycastThreadData const*) const,
   RaycastOcclusionCull::Scenario::RaycastThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
                 *this)

{
  operator_delete(this,0x28);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* RaycastOcclusionCull::Scenario::~Scenario() */

void __thiscall RaycastOcclusionCull::Scenario::~Scenario(Scenario *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (*(int *)(this + 0x90) != 0) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    Memory::free_static(*(void **)(this + 0x98),false);
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    if (*(int *)(this + 0x80) != 0) {
      *(undefined4 *)(this + 0x80) = 0;
    }
    Memory::free_static(*(void **)(this + 0x88),false);
  }
  pvVar3 = *(void **)(this + 0x58);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x7c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x78) * 4) != 0) {
        memset(*(void **)(this + 0x70),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x78) * 4) << 2);
      }
      *(undefined4 *)(this + 0x7c) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x68),false);
    Memory::free_static(*(void **)(this + 0x60),false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x54) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x54) = 0;
      *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x38) + lVar2) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x38) + lVar2) = 0;
          if (*(void **)((long)pvVar3 + 0x38) != (void *)0x0) {
            if (*(int *)((long)pvVar3 + 0x30) != 0) {
              *(undefined4 *)((long)pvVar3 + 0x30) = 0;
            }
            Memory::free_static(*(void **)((long)pvVar3 + 0x38),false);
          }
          if (*(void **)((long)pvVar3 + 0x28) != (void *)0x0) {
            if (*(int *)((long)pvVar3 + 0x20) != 0) {
              *(undefined4 *)((long)pvVar3 + 0x20) = 0;
            }
            Memory::free_static(*(void **)((long)pvVar3 + 0x28),false);
          }
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 0x30);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x54) = 0;
      *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x38),false);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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
    if (lVar34 != 0) goto LAB_00106aef;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_00106aef:
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
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00106fa1;
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
  if ((float)uVar31 * __LC46 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00106fa1;
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
LAB_00106fa1:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* void memdelete<RaycastOcclusionCull::Occluder>(RaycastOcclusionCull::Occluder*) */

void memdelete<RaycastOcclusionCull::Occluder>(Occluder *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4) != 0) {
        memset(*(void **)(param_1 + 0x38),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4) << 2)
        ;
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(param_1 + 0x30),false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
    Memory::free_static(*(void **)(param_1 + 0x38),false);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      Memory::free_static(param_1,false);
      return;
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >
   const&) */

void __thiscall
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::operator=
          (HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *this,HashSet *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (this == (HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)param_1) {
    return;
  }
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) != 0) {
        memset(*(void **)(this + 0x18),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x18),false);
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  *(ulong *)(this + 0x20) = uVar1;
  if ((int)(uVar1 >> 0x20) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
    uVar1 = (ulong)uVar2 * 4;
    uVar8 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x18) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar2 * 8,false);
    *(undefined8 *)this = uVar8;
    uVar8 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x10) = uVar8;
    lVar9 = Memory::alloc_static(uVar1,false);
    *(long *)(this + 8) = lVar9;
    if (*(int *)(this + 0x24) != 0) {
      lVar4 = *(long *)this;
      lVar5 = *(long *)param_1;
      lVar10 = 0;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(this + 0x10);
      do {
        *(undefined8 *)(lVar4 + lVar10 * 8) = *(undefined8 *)(lVar5 + lVar10 * 8);
        *(undefined4 *)(lVar7 + lVar10 * 4) = *(undefined4 *)(lVar6 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this + 0x24));
    }
    if (uVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(this + 0x18);
      uVar11 = 0;
      lVar6 = *(long *)(param_1 + 8);
      do {
        *(undefined4 *)(lVar5 + uVar11) = *(undefined4 *)(lVar4 + uVar11);
        *(undefined4 *)(lVar9 + uVar11) = *(undefined4 *)(lVar6 + uVar11);
        uVar11 = uVar11 + 4;
      } while (uVar11 != uVar1);
      return;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001074d8) */
/* WARNING: Removing unreachable block (ram,0x00107608) */
/* WARNING: Removing unreachable block (ram,0x001077d0) */
/* WARNING: Removing unreachable block (ram,0x00107614) */
/* WARNING: Removing unreachable block (ram,0x0010761e) */
/* WARNING: Removing unreachable block (ram,0x001077b0) */
/* WARNING: Removing unreachable block (ram,0x0010762a) */
/* WARNING: Removing unreachable block (ram,0x00107634) */
/* WARNING: Removing unreachable block (ram,0x00107790) */
/* WARNING: Removing unreachable block (ram,0x00107640) */
/* WARNING: Removing unreachable block (ram,0x0010764a) */
/* WARNING: Removing unreachable block (ram,0x00107770) */
/* WARNING: Removing unreachable block (ram,0x00107656) */
/* WARNING: Removing unreachable block (ram,0x00107660) */
/* WARNING: Removing unreachable block (ram,0x00107750) */
/* WARNING: Removing unreachable block (ram,0x0010766c) */
/* WARNING: Removing unreachable block (ram,0x00107676) */
/* WARNING: Removing unreachable block (ram,0x00107730) */
/* WARNING: Removing unreachable block (ram,0x00107682) */
/* WARNING: Removing unreachable block (ram,0x0010768c) */
/* WARNING: Removing unreachable block (ram,0x00107710) */
/* WARNING: Removing unreachable block (ram,0x00107694) */
/* WARNING: Removing unreachable block (ram,0x001076aa) */
/* WARNING: Removing unreachable block (ram,0x001076b6) */
/* String vformat<int>(String const&, int const) */

String_conflict * vformat<int>(String_conflict *param_1,int param_2)

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



/* RID_Alloc<RaycastOcclusionCull::Occluder*, false>::allocate_rid() */

ulong __thiscall
RID_Alloc<RaycastOcclusionCull::Occluder*,false>::allocate_rid
          (RID_Alloc<RaycastOcclusionCull::Occluder*,false> *this)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar5 = *(uint *)(this + 0x20);
  if (uVar5 == *(uint *)(this + 0x1c)) {
    if (uVar5 == 0) {
      lVar12 = 0;
      uVar13 = 8;
    }
    else {
      uVar13 = (ulong)((int)((ulong)uVar5 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar12 = ((ulong)uVar5 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar6 = Memory::realloc_static(*(void **)(this + 8),uVar13,false);
    *(long *)(this + 8) = lVar6;
    uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar12) = uVar7;
    lVar6 = Memory::realloc_static(pvVar2,uVar13,false);
    *(long *)(this + 0x10) = lVar6;
    uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    iVar1 = *(int *)(this + 0x18);
    *(undefined8 *)(lVar6 + lVar12) = uVar7;
    if (iVar1 == 0) {
      lVar6 = *(long *)(this + 0x10);
      uVar9 = 0;
    }
    else {
      lVar6 = *(long *)(this + 0x10);
      lVar3 = *(long *)(lVar6 + lVar12);
      lVar12 = *(long *)(*(long *)(this + 8) + lVar12);
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar12 + 8 + lVar8 * 0x10) = 0xffffffff;
        *(int *)(lVar3 + lVar8 * 4) = *(int *)(this + 0x20) + (int)lVar8;
        uVar9 = *(uint *)(this + 0x18);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < uVar9);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar9;
    uVar5 = *(uint *)(this + 0x20);
  }
  else {
    lVar6 = *(long *)(this + 0x10);
    uVar9 = *(uint *)(this + 0x18);
  }
  uVar5 = *(uint *)(*(long *)(lVar6 + ((ulong)uVar5 / (ulong)uVar9) * 8) +
                   ((ulong)uVar5 % (ulong)uVar9) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 != 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(((ulong)uVar5 % (ulong)uVar9) * 0x10 +
              *(long *)(*(long *)(this + 8) + ((ulong)uVar5 / (ulong)uVar9) * 8) + 8) =
         uVar11 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    return CONCAT44(uVar10,uVar5) & 0x7fffffffffffffff;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* HashSet<RaycastOcclusionCull::InstanceID, RaycastOcclusionCull::InstanceID,
   HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>
   >::_lookup_pos(RaycastOcclusionCull::InstanceID const&, unsigned int&) const */

undefined8 __thiscall
HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
::_lookup_pos(HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
              *this,InstanceID *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  
  if (*(long *)this != 0) {
    if (*(int *)(this + 0x24) == 0) {
      return 0;
    }
    lVar1 = *(long *)param_1;
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    iVar13 = (int)((ulong)lVar1 >> 0x20);
    uVar12 = ((int)lVar1 * 0x16a88000 | (uint)((int)lVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             0x7f07c65;
    uVar12 = (iVar13 * 0x16a88000 | (uint)(iVar13 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar12 << 0xd | uVar12 >> 0x13) * 5 + 0xe6546b64;
    uVar12 = (uVar12 << 0xd | uVar12 >> 0x13) * 5 + 0xe6546b64 ^
             ((int)lVar2 * 0x16a88000 | (uint)((int)lVar2 * -0x3361d2af) >> 0x11) * 0x1b873593;
    iVar13 = (int)((ulong)lVar2 >> 0x20);
    uVar12 = (iVar13 * 0x16a88000 | (uint)(iVar13 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar12 << 0xd | uVar12 >> 0x13) * 5 + 0xe6546b64;
    uVar12 = (uVar12 << 0xd | uVar12 >> 0x13) * 5 + 0xe6546b64;
    uVar12 = (uVar12 >> 0x10 ^ uVar12) * -0x7a143595;
    uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar17 = 1;
      uVar15 = uVar3;
    }
    else {
      uVar15 = uVar17 * uVar3;
    }
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar15;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar12 = *(uint *)(*(long *)(this + 0x18) + lVar16 * 4);
    iVar13 = SUB164(auVar4 * auVar8,8);
    if (uVar12 != 0) {
      uVar19 = 0;
      do {
        if (uVar17 == uVar12) {
          uVar12 = *(uint *)(*(long *)(this + 8) + lVar16 * 4);
          plVar14 = (long *)((ulong)uVar12 * 0x10 + *(long *)this);
          if ((plVar14[1] == lVar2) && (*plVar14 == lVar1)) {
            *param_2 = uVar12;
            return 1;
          }
        }
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar13 + 1) * uVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar12 = *(uint *)(*(long *)(this + 0x18) + lVar16 * 4);
        iVar13 = SUB164(auVar5 * auVar9,8);
      } while ((uVar12 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar12 * uVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4)
                              + iVar13) - SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar18, uVar19 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RaycastOcclusionCull::InstanceID, RaycastOcclusionCull::InstanceID,
   HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>
   >::insert(RaycastOcclusionCull::InstanceID const&) */

InstanceID *
HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
::insert(InstanceID *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
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
  char cVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  uint uVar32;
  InstanceID *in_RDX;
  ulong uVar33;
  uint uVar34;
  HashSet<RaycastOcclusionCull::InstanceID,RaycastOcclusionCull::InstanceID,HashMapComparatorDefault<RaycastOcclusionCull::InstanceID>>
  *in_RSI;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  undefined4 uVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  uint local_98;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar35 = (ulong)uVar32 * 4;
    uVar27 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar27;
    uVar27 = Memory::alloc_static((ulong)uVar32 << 4,false);
    *(undefined8 *)in_RSI = uVar27;
    uVar27 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar27;
    uVar27 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(in_RSI + 8) = uVar27;
    if (uVar32 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar35);
    }
  }
  local_44 = 0;
  cVar24 = _lookup_pos(in_RSI,in_RDX,&local_44);
  if (cVar24 == '\0') {
    uVar39 = *(uint *)(in_RSI + 0x24);
    uVar2 = *(uint *)(in_RSI + 0x20);
    if ((float)uVar32 * __LC46 < (float)(uVar39 + 1)) {
      if (uVar2 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar25 = *(int *)(in_RSI + 0x24);
        lVar28 = *(long *)in_RSI;
        uVar32 = 0xffffffff;
        goto LAB_0010805a;
      }
      uVar35 = (ulong)(uVar2 + 1);
      if (uVar2 + 1 < 2) {
        uVar35 = 2;
      }
      uVar32 = *(uint *)(hash_table_size_primes + uVar35 * 4);
      pvVar3 = *(void **)(in_RSI + 0x18);
      *(int *)(in_RSI + 0x20) = (int)uVar35;
      uVar35 = (ulong)uVar32 * 4;
      pvVar4 = *(void **)(in_RSI + 0x10);
      uVar27 = Memory::alloc_static(uVar35,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar27;
      uVar27 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar32 << 4,false);
      *(undefined8 *)in_RSI = uVar27;
      uVar27 = Memory::alloc_static(uVar35,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar27;
      lVar28 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar35,false);
      *(long *)(in_RSI + 8) = lVar28;
      if (uVar32 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar35);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar35 = 0;
        lVar5 = *(long *)(in_RSI + 0x18);
        lVar6 = *(long *)(in_RSI + 0x10);
        do {
          uVar40 = uVar35 & 0xffffffff;
          uVar38 = (undefined4)uVar35;
          uVar41 = 0;
          uVar32 = *(uint *)((long)pvVar3 + (ulong)*(uint *)((long)pvVar4 + uVar35 * 4) * 4);
          uVar33 = (ulong)uVar32;
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar37 = CONCAT44(0,uVar2);
          lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar33 * lVar29;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar37;
          lVar30 = SUB168(auVar8 * auVar16,8) * 4;
          iVar25 = SUB164(auVar8 * auVar16,8);
          puVar42 = (uint *)(lVar5 + lVar30);
          uVar39 = *puVar42;
          if (uVar39 == 0) {
            lVar29 = uVar35 * 4;
          }
          else {
            do {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar39 * lVar29;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar37;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((uVar2 + iVar25) - SUB164(auVar9 * auVar17,8)) * lVar29;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar37;
              local_98 = SUB164(auVar10 * auVar18,8);
              if (local_98 < uVar41) {
                *(int *)(lVar6 + uVar40 * 4) = iVar25;
                uVar32 = *puVar42;
                *puVar42 = (uint)uVar33;
                uVar39 = *(uint *)(lVar30 + lVar28);
                uVar33 = (ulong)uVar32;
                *(uint *)(lVar30 + lVar28) = (uint)uVar40;
                uVar40 = (ulong)uVar39;
                uVar41 = local_98;
              }
              uVar38 = (undefined4)uVar40;
              uVar32 = (uint)uVar33;
              uVar41 = uVar41 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar25 + 1) * lVar29;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar37;
              lVar30 = SUB168(auVar11 * auVar19,8) * 4;
              iVar25 = SUB164(auVar11 * auVar19,8);
              puVar42 = (uint *)(lVar5 + lVar30);
              uVar39 = *puVar42;
            } while (uVar39 != 0);
            lVar29 = uVar40 << 2;
          }
          *puVar42 = uVar32;
          uVar35 = uVar35 + 1;
          *(int *)(lVar6 + lVar29) = iVar25;
          *(undefined4 *)(lVar28 + lVar30) = uVar38;
        } while ((uint)uVar35 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar3,false);
      Memory::free_static(pvVar4,false);
      uVar39 = *(uint *)(in_RSI + 0x24);
      uVar2 = *(uint *)(in_RSI + 0x20);
    }
    uVar35 = (ulong)uVar39;
    iVar25 = (int)*(undefined8 *)in_RDX;
    iVar26 = (int)((ulong)*(undefined8 *)in_RDX >> 0x20);
    uVar32 = (iVar25 * 0x16a88000 | (uint)(iVar25 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
    uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
             (iVar26 * 0x16a88000 | (uint)(iVar26 * -0x3361d2af) >> 0x11) * 0x1b873593;
    iVar25 = (int)*(undefined8 *)(in_RDX + 8);
    iVar26 = (int)((ulong)*(undefined8 *)(in_RDX + 8) >> 0x20);
    uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64 ^
             (iVar25 * 0x16a88000 | (uint)(iVar25 * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar32 = (iVar26 * 0x16a88000 | (uint)(iVar26 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
    uVar32 = (uVar32 << 0xd | uVar32 >> 0x13) * 5 + 0xe6546b64;
    uVar32 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
    uVar41 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar41 ^ uVar41 >> 0x10;
    if (uVar41 == uVar41 >> 0x10) {
      uVar33 = 1;
      uVar32 = 1;
    }
    else {
      uVar33 = (ulong)uVar32;
    }
    uVar27 = *(undefined8 *)(in_RDX + 8);
    uVar36 = 0;
    lVar28 = *(long *)in_RSI;
    lVar6 = *(long *)(in_RSI + 0x18);
    puVar1 = (undefined8 *)(lVar28 + uVar35 * 0x10);
    *puVar1 = *(undefined8 *)in_RDX;
    puVar1[1] = uVar27;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar2 * 4);
    uVar37 = CONCAT44(0,uVar41);
    lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)uVar2 * 8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar33 * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar37;
    lVar5 = SUB168(auVar12 * auVar20,8) * 4;
    iVar25 = SUB164(auVar12 * auVar20,8);
    lVar29 = *(long *)(in_RSI + 0x10);
    puVar42 = (uint *)(lVar6 + lVar5);
    lVar7 = *(long *)(in_RSI + 8);
    uVar2 = *puVar42;
    uVar33 = uVar35;
    while (uVar2 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar2 * lVar30;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((uVar41 + iVar25) - SUB164(auVar13 * auVar21,8)) * lVar30;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      local_98 = SUB164(auVar14 * auVar22,8);
      uVar34 = uVar32;
      if (local_98 < uVar36) {
        puVar31 = (uint *)(lVar5 + lVar7);
        *(int *)(lVar29 + uVar35 * 4) = iVar25;
        uVar34 = *puVar42;
        *puVar42 = uVar32;
        uVar32 = *puVar31;
        *puVar31 = (uint)uVar33;
        uVar35 = (ulong)uVar32;
        uVar33 = uVar35;
        uVar36 = local_98;
      }
      uVar39 = (uint)uVar33;
      uVar36 = uVar36 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar25 + 1) * lVar30;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar37;
      lVar5 = SUB168(auVar15 * auVar23,8) * 4;
      iVar25 = SUB164(auVar15 * auVar23,8);
      puVar42 = (uint *)(lVar6 + lVar5);
      uVar32 = uVar34;
      uVar2 = *puVar42;
    }
    *puVar42 = uVar32;
    *(int *)(lVar29 + uVar35 * 4) = iVar25;
    *(uint *)(lVar7 + lVar5) = uVar39;
    uVar32 = *(uint *)(in_RSI + 0x24);
    iVar25 = uVar32 + 1;
    *(int *)(in_RSI + 0x24) = iVar25;
  }
  else {
    iVar25 = *(int *)(in_RSI + 0x24);
    lVar28 = *(long *)in_RSI;
    uVar32 = local_44;
  }
LAB_0010805a:
  *(long *)param_1 = lVar28;
  *(int *)(param_1 + 8) = iVar25;
  *(uint *)(param_1 + 0xc) = uVar32;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001082f0) */
/* WARNING: Removing unreachable block (ram,0x00108420) */
/* WARNING: Removing unreachable block (ram,0x00108599) */
/* WARNING: Removing unreachable block (ram,0x0010842c) */
/* WARNING: Removing unreachable block (ram,0x00108436) */
/* WARNING: Removing unreachable block (ram,0x0010857b) */
/* WARNING: Removing unreachable block (ram,0x00108442) */
/* WARNING: Removing unreachable block (ram,0x0010844c) */
/* WARNING: Removing unreachable block (ram,0x0010855d) */
/* WARNING: Removing unreachable block (ram,0x00108458) */
/* WARNING: Removing unreachable block (ram,0x00108462) */
/* WARNING: Removing unreachable block (ram,0x0010853f) */
/* WARNING: Removing unreachable block (ram,0x0010846e) */
/* WARNING: Removing unreachable block (ram,0x00108478) */
/* WARNING: Removing unreachable block (ram,0x00108521) */
/* WARNING: Removing unreachable block (ram,0x00108484) */
/* WARNING: Removing unreachable block (ram,0x0010848e) */
/* WARNING: Removing unreachable block (ram,0x00108503) */
/* WARNING: Removing unreachable block (ram,0x00108496) */
/* WARNING: Removing unreachable block (ram,0x001084a0) */
/* WARNING: Removing unreachable block (ram,0x001084e8) */
/* WARNING: Removing unreachable block (ram,0x001084a8) */
/* WARNING: Removing unreachable block (ram,0x001084be) */
/* WARNING: Removing unreachable block (ram,0x001084ca) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String_conflict *
vformat<unsigned_int,char_const*>(String_conflict *param_1,uint param_2,char *param_3)

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



/* RID_Alloc<RaycastOcclusionCull::Occluder*, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RaycastOcclusionCull::Occluder*,false>::~RID_Alloc
          (RID_Alloc<RaycastOcclusionCull::Occluder*,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_0010bf58;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RaycastOcclusionCull::Occluder*, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RaycastOcclusionCull::Occluder*,false>::~RID_Alloc
          (RID_Alloc<RaycastOcclusionCull::Occluder*,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_0010bf58;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
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
    *(code **)param_1 = Memory::free_static;
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



/* HashMap<RID, RaycastOcclusionCull::OccluderInstance, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RaycastOcclusionCull::OccluderInstance> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
::_resize_and_rehash
          (HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
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
/* HashMap<RID, RaycastOcclusionCull::OccluderInstance, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RaycastOcclusionCull::OccluderInstance> > >::insert(RID const&,
   RaycastOcclusionCull::OccluderInstance const&, bool) */

RID * HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
      ::insert(RID *param_1,OccluderInstance *param_2,bool param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  long lVar3;
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
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  void *pvVar34;
  long lVar35;
  undefined1 (*pauVar36) [16];
  long lVar37;
  void *pvVar38;
  undefined8 uVar39;
  undefined8 *in_RCX;
  int iVar40;
  undefined7 in_register_00000011;
  long *plVar41;
  long lVar42;
  char in_R8B;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 (*pauVar46) [16];
  long in_FS_OFFSET;
  long local_e0;
  
  plVar41 = (long *)CONCAT71(in_register_00000011,param_3);
  pvVar34 = *(void **)(param_2 + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (pvVar34 == (void *)0x0) {
    uVar44 = (ulong)uVar29;
    uVar32 = uVar44 * 4;
    uVar45 = uVar44 * 8;
    uVar39 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar39;
    pvVar34 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar34;
    if (uVar29 != 0) {
      pvVar38 = *(void **)(param_2 + 0x10);
      if ((pvVar38 < (void *)((long)pvVar34 + uVar45)) &&
         (pvVar34 < (void *)((long)pvVar38 + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar38 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar34 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar44 != uVar32);
        goto LAB_00108d0a;
      }
      memset(pvVar38,0,uVar32);
      memset(pvVar34,0,uVar45);
      iVar40 = *(int *)(param_2 + 0x2c);
      local_e0 = *plVar41;
      goto LAB_00108d1a;
    }
    iVar40 = *(int *)(param_2 + 0x2c);
    local_e0 = *plVar41;
    if (pvVar34 != (void *)0x0) goto LAB_00108d1a;
  }
  else {
LAB_00108d0a:
    iVar40 = *(int *)(param_2 + 0x2c);
    local_e0 = *plVar41;
LAB_00108d1a:
    if (iVar40 != 0) {
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = local_e0 * 0x3ffff - 1;
      uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
      uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar44 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
        uVar44 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar44 * lVar37;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar45;
      lVar42 = SUB168(auVar5 * auVar13,8);
      uVar31 = *(uint *)(*(long *)(param_2 + 0x10) + lVar42 * 4);
      uVar32 = (ulong)uVar31;
      uVar30 = SUB164(auVar5 * auVar13,8);
      if (uVar31 != 0) {
        uVar31 = 0;
        do {
          if (((int)uVar44 == (int)uVar32) &&
             (*(long *)(*(long *)((long)pvVar34 + lVar42 * 8) + 0x10) == local_e0)) {
            lVar37 = *(long *)((long)pvVar34 + (ulong)uVar30 * 8);
            uVar29 = *(uint *)(in_RCX + 1);
            *(undefined8 *)(lVar37 + 0x18) = *in_RCX;
            if (uVar29 < *(uint *)(lVar37 + 0x20)) {
              *(uint *)(lVar37 + 0x20) = uVar29;
            }
            else if (*(uint *)(lVar37 + 0x20) < uVar29) {
              if (*(uint *)(lVar37 + 0x24) < uVar29) {
                uVar31 = uVar29 - 1 | uVar29 - 1 >> 1;
                uVar31 = uVar31 >> 2 | uVar31;
                uVar31 = uVar31 >> 4 | uVar31;
                uVar31 = uVar31 >> 8 | uVar31;
                uVar31 = (uVar31 >> 0x10 | uVar31) + 1;
                *(uint *)(lVar37 + 0x24) = uVar31;
                lVar42 = Memory::realloc_static(*(void **)(lVar37 + 0x28),(ulong)uVar31 * 4,false);
                *(long *)(lVar37 + 0x28) = lVar42;
                if (lVar42 == 0) goto LAB_001095b4;
              }
              *(uint *)(lVar37 + 0x20) = uVar29;
              uVar29 = *(uint *)(in_RCX + 1);
            }
            if (uVar29 != 0) {
              lVar42 = in_RCX[2];
              lVar35 = *(long *)(lVar37 + 0x28);
              lVar33 = 0;
              do {
                *(undefined4 *)(lVar35 + lVar33 * 4) = *(undefined4 *)(lVar42 + lVar33 * 4);
                lVar33 = lVar33 + 1;
              } while ((uint)lVar33 < *(uint *)(in_RCX + 1));
            }
            uVar29 = *(uint *)(in_RCX + 3);
            if (uVar29 < *(uint *)(lVar37 + 0x30)) {
              *(uint *)(lVar37 + 0x30) = uVar29;
            }
            else if (*(uint *)(lVar37 + 0x30) < uVar29) {
              if (*(uint *)(lVar37 + 0x34) < uVar29) {
                uVar31 = uVar29 - 1 | uVar29 - 1 >> 1;
                uVar31 = uVar31 | uVar31 >> 2;
                uVar31 = uVar31 >> 4 | uVar31;
                uVar31 = uVar31 | uVar31 >> 8;
                uVar31 = (uVar31 >> 0x10 | uVar31) + 1;
                *(uint *)(lVar37 + 0x34) = uVar31;
                lVar42 = Memory::realloc_static(*(void **)(lVar37 + 0x38),(ulong)uVar31 * 4,false);
                *(long *)(lVar37 + 0x38) = lVar42;
                if (lVar42 == 0) goto LAB_001095b4;
              }
              *(uint *)(lVar37 + 0x30) = uVar29;
              uVar29 = *(uint *)(in_RCX + 3);
            }
            if (uVar29 != 0) {
              lVar42 = in_RCX[4];
              lVar35 = *(long *)(lVar37 + 0x38);
              lVar33 = 0;
              do {
                *(undefined4 *)(lVar35 + lVar33) = *(undefined4 *)(lVar42 + lVar33);
                lVar33 = lVar33 + 4;
              } while (lVar33 != (ulong)uVar29 << 2);
            }
            uVar39 = in_RCX[6];
            uVar2 = *(undefined2 *)(in_RCX + 0xb);
            *(undefined8 *)(lVar37 + 0x40) = in_RCX[5];
            *(undefined8 *)(lVar37 + 0x48) = uVar39;
            uVar39 = in_RCX[8];
            *(undefined8 *)(lVar37 + 0x50) = in_RCX[7];
            *(undefined8 *)(lVar37 + 0x58) = uVar39;
            uVar39 = in_RCX[9];
            uVar22 = in_RCX[10];
            *(undefined2 *)(lVar37 + 0x70) = uVar2;
            lVar42 = *(long *)(param_2 + 8);
            *(undefined8 *)(lVar37 + 0x60) = uVar39;
            *(undefined8 *)(lVar37 + 0x68) = uVar22;
            pauVar36 = *(undefined1 (**) [16])(lVar42 + (ulong)uVar30 * 8);
            goto LAB_001093b7;
          }
          uVar31 = uVar31 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar30 + 1) * lVar37;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar45;
          lVar42 = SUB168(auVar6 * auVar14,8);
          uVar43 = *(uint *)(*(long *)(param_2 + 0x10) + lVar42 * 4);
          uVar32 = (ulong)uVar43;
          uVar30 = SUB164(auVar6 * auVar14,8);
        } while ((uVar43 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar32 * lVar37, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar45, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar30) -
                                      SUB164(auVar7 * auVar15,8)) * lVar37, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar45, uVar31 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar29 * __LC46 < (float)(iVar40 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauVar36 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      goto LAB_001093b7;
    }
    _resize_and_rehash((HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar29 = *(uint *)(in_RCX + 1);
  lVar37 = *plVar41;
  uVar39 = *in_RCX;
  if (uVar29 == 0) {
    pvVar34 = (void *)0x0;
LAB_00109192:
    uVar32 = (ulong)*(uint *)(in_RCX + 3);
    if (*(uint *)(in_RCX + 3) == 0) goto LAB_00108fcd;
LAB_001091a0:
    uVar31 = (int)uVar32 - 1;
    uVar31 = uVar31 | uVar31 >> 1;
    uVar31 = uVar31 | uVar31 >> 2;
    uVar31 = uVar31 | uVar31 >> 4;
    uVar31 = uVar31 | uVar31 >> 8;
    pvVar38 = (void *)Memory::realloc_static
                                ((void *)0x0,(ulong)((uVar31 | uVar31 >> 0x10) + 1) << 2,false);
    if (pvVar38 == (void *)0x0) goto LAB_001095b4;
    uVar31 = *(uint *)(in_RCX + 3);
    if (uVar31 != 0) {
      lVar42 = in_RCX[4];
      lVar35 = 0;
      do {
        *(undefined4 *)((long)pvVar38 + lVar35) = *(undefined4 *)(lVar42 + lVar35);
        lVar35 = lVar35 + 4;
      } while (lVar35 != (ulong)uVar31 << 2);
    }
  }
  else {
    uVar31 = uVar29 - 1 | uVar29 - 1 >> 1;
    uVar31 = uVar31 | uVar31 >> 2;
    uVar31 = uVar31 | uVar31 >> 4;
    uVar31 = uVar31 | uVar31 >> 8;
    pvVar34 = (void *)Memory::realloc_static
                                ((void *)0x0,(ulong)((uVar31 | uVar31 >> 0x10) + 1) << 2,false);
    if (pvVar34 == (void *)0x0) goto LAB_001095b4;
    if (*(int *)(in_RCX + 1) == 0) goto LAB_00109192;
    lVar42 = in_RCX[2];
    lVar35 = 0;
    do {
      *(undefined4 *)((long)pvVar34 + lVar35 * 4) = *(undefined4 *)(lVar42 + lVar35 * 4);
      lVar35 = lVar35 + 1;
    } while ((uint)lVar35 < *(uint *)(in_RCX + 1));
    uVar32 = (ulong)*(uint *)(in_RCX + 3);
    if (*(uint *)(in_RCX + 3) != 0) goto LAB_001091a0;
LAB_00108fcd:
    pvVar38 = (void *)0x0;
  }
  uVar2 = *(undefined2 *)(in_RCX + 0xb);
  uVar22 = in_RCX[5];
  uVar23 = in_RCX[6];
  uVar24 = in_RCX[7];
  uVar25 = in_RCX[8];
  uVar26 = in_RCX[9];
  uVar27 = in_RCX[10];
  pauVar36 = (undefined1 (*) [16])operator_new(0x78,"");
  *pauVar36 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar36[2] = 0;
  *(long *)pauVar36[1] = lVar37;
  *(undefined8 *)(pauVar36[2] + 8) = 0;
  *(undefined8 *)(pauVar36[1] + 8) = uVar39;
  if (uVar29 != 0) {
    uVar31 = uVar29 - 1 | uVar29 - 1 >> 1;
    uVar31 = uVar31 | uVar31 >> 2;
    uVar31 = uVar31 | uVar31 >> 4;
    uVar31 = uVar31 | uVar31 >> 8;
    uVar31 = (uVar31 | uVar31 >> 0x10) + 1;
    *(uint *)(pauVar36[2] + 4) = uVar31;
    lVar37 = Memory::realloc_static((void *)0x0,(ulong)uVar31 * 4,false);
    *(long *)(pauVar36[2] + 8) = lVar37;
    if (lVar37 == 0) goto LAB_001095b4;
    *(uint *)pauVar36[2] = uVar29;
    lVar42 = 0;
    do {
      *(undefined4 *)(lVar37 + lVar42) = *(undefined4 *)((long)pvVar34 + lVar42);
      lVar42 = lVar42 + 4;
    } while (lVar42 != (ulong)uVar29 << 2);
  }
  *(undefined8 *)pauVar36[3] = 0;
  *(undefined8 *)(pauVar36[3] + 8) = 0;
  iVar40 = (int)uVar32;
  if (iVar40 == 0) {
    *(undefined2 *)pauVar36[7] = uVar2;
    *(undefined8 *)pauVar36[4] = uVar22;
    *(undefined8 *)(pauVar36[4] + 8) = uVar23;
    *(undefined8 *)pauVar36[5] = uVar24;
    *(undefined8 *)(pauVar36[5] + 8) = uVar25;
    *(undefined8 *)pauVar36[6] = uVar26;
    *(undefined8 *)(pauVar36[6] + 8) = uVar27;
    if (pvVar38 != (void *)0x0) goto LAB_0010917f;
  }
  else {
    uVar29 = iVar40 - 1U | iVar40 - 1U >> 1;
    uVar29 = uVar29 | uVar29 >> 2;
    uVar29 = uVar29 | uVar29 >> 4;
    uVar29 = uVar29 | uVar29 >> 8;
    uVar29 = (uVar29 | uVar29 >> 0x10) + 1;
    *(uint *)(pauVar36[3] + 4) = uVar29;
    lVar37 = Memory::realloc_static((void *)0x0,(ulong)uVar29 * 4,false);
    *(long *)(pauVar36[3] + 8) = lVar37;
    if (lVar37 == 0) {
LAB_001095b4:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar21 = (code *)invalidInstructionException();
      (*pcVar21)();
    }
    *(int *)pauVar36[3] = iVar40;
    lVar42 = 0;
    do {
      *(undefined4 *)(lVar37 + lVar42) = *(undefined4 *)((long)pvVar38 + lVar42);
      lVar42 = lVar42 + 4;
    } while (lVar42 != uVar32 * 4);
    *(undefined2 *)pauVar36[7] = uVar2;
    *(undefined8 *)pauVar36[4] = uVar22;
    *(undefined8 *)(pauVar36[4] + 8) = uVar23;
    *(undefined8 *)pauVar36[5] = uVar24;
    *(undefined8 *)(pauVar36[5] + 8) = uVar25;
    *(undefined8 *)pauVar36[6] = uVar26;
    *(undefined8 *)(pauVar36[6] + 8) = uVar27;
LAB_0010917f:
    Memory::free_static(pvVar38,false);
  }
  if (pvVar34 != (void *)0x0) {
    Memory::free_static(pvVar34,false);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar36;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar36;
  }
  else if (in_R8B == '\0') {
    *puVar4 = pauVar36;
    *(undefined8 **)(*pauVar36 + 8) = puVar4;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar36;
  }
  else {
    lVar37 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar37 + 8) = pauVar36;
    *(long *)*pauVar36 = lVar37;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar36;
  }
  lVar37 = *(long *)(param_2 + 0x10);
  uVar32 = *plVar41 * 0x3ffff - 1;
  uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
  uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
  uVar32 = uVar32 >> 0x16 ^ uVar32;
  uVar45 = uVar32 & 0xffffffff;
  if ((int)uVar32 == 0) {
    uVar45 = 1;
  }
  uVar43 = 0;
  lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar30 = (uint)uVar45;
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar29);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar45 * lVar42;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar32;
  lVar33 = SUB168(auVar9 * auVar17,8);
  lVar35 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar37 + lVar33 * 4);
  iVar40 = SUB164(auVar9 * auVar17,8);
  uVar31 = *puVar1;
  pauVar28 = pauVar36;
  while (uVar31 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar31 * lVar42;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar40 + uVar29) - SUB164(auVar10 * auVar18,8)) * lVar42;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    uVar30 = SUB164(auVar11 * auVar19,8);
    pauVar46 = pauVar28;
    if (uVar30 < uVar43) {
      *puVar1 = (uint)uVar45;
      uVar45 = (ulong)uVar31;
      puVar4 = (undefined8 *)(lVar35 + lVar33 * 8);
      pauVar46 = (undefined1 (*) [16])*puVar4;
      *puVar4 = pauVar28;
      uVar43 = uVar30;
    }
    uVar30 = (uint)uVar45;
    uVar43 = uVar43 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar40 + 1) * lVar42;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    lVar33 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar37 + lVar33 * 4);
    iVar40 = SUB164(auVar12 * auVar20,8);
    pauVar28 = pauVar46;
    uVar31 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar35 + lVar33 * 8) = pauVar28;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001093b7:
  *(undefined1 (**) [16])param_1 = pauVar36;
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<RID, RaycastOcclusionCull::OccluderInstance, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RaycastOcclusionCull::OccluderInstance> > >::TEMPNAMEPLACEHOLDERVALUE(HashMap<RID,
   RaycastOcclusionCull::OccluderInstance, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, RaycastOcclusionCull::OccluderInstance> > > const&) */

void __thiscall
HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
::operator=(HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  RID local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
               *)param_1) {
    uVar4 = *(uint *)(this + 0x28);
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            if (*(void **)((long)pvVar1 + 0x38) != (void *)0x0) {
              if (*(int *)((long)pvVar1 + 0x30) != 0) {
                *(undefined4 *)((long)pvVar1 + 0x30) = 0;
              }
              Memory::free_static(*(void **)((long)pvVar1 + 0x38),false);
            }
            if (*(void **)((long)pvVar1 + 0x28) != (void *)0x0) {
              if (*(int *)((long)pvVar1 + 0x20) != 0) {
                *(undefined4 *)((long)pvVar1 + 0x20) = 0;
              }
              Memory::free_static(*(void **)((long)pvVar1 + 0x28),false);
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        uVar4 = *(uint *)(this + 0x28);
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar2 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar4 != 0x1c) {
        uVar3 = (ulong)uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar3 * 4)) {
            if (uVar4 != uVar2) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar2;
              }
              else {
                _resize_and_rehash(this,uVar2);
              }
            }
            goto LAB_00109739;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00109739:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(OccluderInstance *)this,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::Scenario::Scenario(RaycastOcclusionCull::Scenario const&) */

void __thiscall RaycastOcclusionCull::Scenario::Scenario(Scenario *this,Scenario *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long in_FS_OFFSET;
  RID aRStack_48 [8];
  long local_40;
  
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar8;
  *(undefined8 *)this = uVar12;
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x20) = uVar2;
  uVar3 = *(uint *)(param_1 + 0x50);
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar3 * 4);
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  lVar10 = 1;
  if (5 < uVar3) {
    do {
      if (uVar3 <= *(uint *)(hash_table_size_primes + lVar10 * 4)) {
        *(int *)(this + 0x50) = (int)lVar10;
        goto LAB_00109952;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109952:
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (plVar15 = *(long **)(param_1 + 0x40), plVar15 != (long *)0x0)) {
    do {
      HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
      ::insert(aRStack_48,(OccluderInstance *)(this + 0x28),(bool)((char)plVar15 + '\x10'));
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  uVar1 = *(ulong *)(param_1 + 0x78);
  *(ulong *)(this + 0x78) = uVar1;
  if ((int)(uVar1 >> 0x20) != 0) {
    uVar3 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
    uVar1 = (ulong)uVar3 * 4;
    uVar12 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x70) = uVar12;
    uVar12 = Memory::alloc_static((ulong)uVar3 * 8,false);
    *(undefined8 *)(this + 0x58) = uVar12;
    uVar12 = Memory::alloc_static(uVar1,false);
    *(undefined8 *)(this + 0x68) = uVar12;
    lVar10 = Memory::alloc_static(uVar1,false);
    uVar4 = *(uint *)(this + 0x7c);
    *(long *)(this + 0x60) = lVar10;
    if (uVar4 != 0) {
      lVar5 = *(long *)(this + 0x58);
      lVar11 = *(long *)(param_1 + 0x58);
      lVar13 = 0;
      lVar6 = *(long *)(param_1 + 0x68);
      lVar14 = *(long *)(this + 0x68);
      do {
        *(undefined8 *)(lVar5 + lVar13 * 2) = *(undefined8 *)(lVar11 + lVar13 * 2);
        *(undefined4 *)(lVar14 + lVar13) = *(undefined4 *)(lVar6 + lVar13);
        lVar13 = lVar13 + 4;
      } while ((ulong)uVar4 << 2 != lVar13);
    }
    if (uVar3 != 0) {
      lVar5 = *(long *)(param_1 + 0x70);
      lVar11 = *(long *)(this + 0x70);
      lVar14 = 0;
      lVar6 = *(long *)(param_1 + 0x60);
      do {
        *(undefined4 *)(lVar11 + lVar14) = *(undefined4 *)(lVar5 + lVar14);
        *(undefined4 *)(lVar10 + lVar14) = *(undefined4 *)(lVar6 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar1 - lVar14 != 0);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    uVar9 = uVar4 >> 1 | uVar4;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
    *(uint *)(this + 0x84) = uVar9;
    lVar10 = Memory::realloc_static((void *)0x0,(ulong)uVar9 * 8,false);
    *(long *)(this + 0x88) = lVar10;
    if (lVar10 == 0) goto LAB_00109c68;
    uVar9 = *(uint *)(this + 0x80);
    if (uVar9 < uVar3) {
      memset((void *)(lVar10 + (ulong)uVar9 * 8),0,(ulong)(uVar4 - uVar9) * 8 + 8);
    }
    *(uint *)(this + 0x80) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x80);
    if (uVar3 != 0) {
      lVar5 = *(long *)(param_1 + 0x88);
      lVar11 = 0;
      do {
        *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)(lVar5 + lVar11);
        lVar11 = lVar11 + 8;
      } while (lVar11 != (ulong)uVar3 << 3);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  if (uVar3 != 0) {
    uVar4 = uVar3 - 1;
    uVar9 = uVar4 >> 1 | uVar4;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
    *(uint *)(this + 0x94) = uVar9;
    lVar10 = Memory::realloc_static((void *)0x0,(ulong)uVar9 * 8,false);
    *(long *)(this + 0x98) = lVar10;
    if (lVar10 == 0) {
LAB_00109c68:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar9 = *(uint *)(this + 0x90);
    if (uVar9 < uVar3) {
      memset((void *)(lVar10 + (ulong)uVar9 * 8),0,(ulong)(uVar4 - uVar9) * 8 + 8);
    }
    *(uint *)(this + 0x90) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x90);
    if (uVar3 != 0) {
      lVar5 = *(long *)(param_1 + 0x98);
      lVar11 = 0;
      do {
        *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)(lVar5 + lVar11);
        lVar11 = lVar11 + 8;
      } while (lVar11 != (ulong)uVar3 << 3);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, RaycastOcclusionCull::Scenario, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, RaycastOcclusionCull::Scenario> > >::operator[](RID
   const&) */

Scenario * __thiscall
HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
::operator[](HashMap<RID,RaycastOcclusionCull::Scenario,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::Scenario>>>
             *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
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
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  int iVar43;
  long lVar44;
  long lVar45;
  uint uVar46;
  long lVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  undefined8 *puVar53;
  long in_FS_OFFSET;
  Scenario *local_1c8;
  Scenario *local_1c0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  HashMap local_170 [8];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  HashSet local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  Scenario local_e0 [160];
  long local_40;
  
  local_1c8 = *(Scenario **)(this + 8);
  lVar47 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar46);
  if (local_1c8 == (Scenario *)0x0) {
    local_178 = 0;
    uVar39 = uVar40 * 4;
    uVar52 = uVar40 * 8;
    local_188 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_140[0] = (HashSet)0x0;
    local_140[1] = (HashSet)0x0;
    local_140[2] = (HashSet)0x0;
    local_140[3] = (HashSet)0x0;
    local_140[4] = (HashSet)0x0;
    local_140[5] = (HashSet)0x0;
    local_140[6] = (HashSet)0x0;
    local_140[7] = (HashSet)0x0;
    local_140[8] = (HashSet)0x0;
    local_140[9] = (HashSet)0x0;
    local_140[10] = (HashSet)0x0;
    local_140[0xb] = (HashSet)0x0;
    local_140[0xc] = (HashSet)0x0;
    local_140[0xd] = (HashSet)0x0;
    local_140[0xe] = (HashSet)0x0;
    local_140[0xf] = (HashSet)0x0;
    local_130 = (undefined1  [16])0x0;
    local_198._0_9_ = (unkuint9)1 << 0x40;
    local_198._9_7_ = 0;
    local_120 = _LC7;
    uStack_118 = _UNK_0010c328;
    local_148 = 2;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    uVar41 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_1c8 = (Scenario *)Memory::alloc_static(uVar52,false);
    *(Scenario **)(this + 8) = local_1c8;
    if (uVar46 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_1c8 + uVar52)) &&
         (local_1c8 < (void *)((long)pvVar4 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_1c8 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar40 != uVar39);
        iVar43 = *(int *)(this + 0x2c);
        lVar47 = *(long *)param_1;
      }
      else {
        memset(pvVar4,0,uVar39);
        memset(local_1c8,0,uVar52);
        iVar43 = *(int *)(this + 0x2c);
        lVar47 = *(long *)param_1;
      }
      goto LAB_00109ea4;
    }
    iVar43 = *(int *)(this + 0x2c);
    lVar47 = *(long *)param_1;
    if (local_1c8 != (Scenario *)0x0) goto LAB_00109ea4;
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = lVar47 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar52 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar52 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar52 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar44 = SUB168(auVar5 * auVar21,8);
      uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar44 * 4);
      uVar38 = SUB164(auVar5 * auVar21,8);
      if (uVar49 != 0) {
        uVar51 = 0;
        do {
          if ((uVar49 == (uint)uVar52) &&
             (lVar47 == *(long *)(*(long *)((long)local_1c8 + lVar44 * 8) + 0x10))) {
            local_1c0 = (Scenario *)(*(long *)((long)local_1c8 + (ulong)uVar38 * 8) + 0x18);
            goto LAB_00109dee;
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar38 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar44 = SUB168(auVar6 * auVar22,8);
          uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar44 * 4);
          uVar38 = SUB164(auVar6 * auVar22,8);
        } while ((uVar49 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar49 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar38 + uVar46) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
    }
    iVar43 = *(int *)(this + 0x2c);
    local_178 = 0;
    local_188 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_140[0] = (HashSet)0x0;
    local_140[1] = (HashSet)0x0;
    local_140[2] = (HashSet)0x0;
    local_140[3] = (HashSet)0x0;
    local_140[4] = (HashSet)0x0;
    local_140[5] = (HashSet)0x0;
    local_140[6] = (HashSet)0x0;
    local_140[7] = (HashSet)0x0;
    local_140[8] = (HashSet)0x0;
    local_140[9] = (HashSet)0x0;
    local_140[10] = (HashSet)0x0;
    local_140[0xb] = (HashSet)0x0;
    local_140[0xc] = (HashSet)0x0;
    local_140[0xd] = (HashSet)0x0;
    local_140[0xe] = (HashSet)0x0;
    local_140[0xf] = (HashSet)0x0;
    local_130 = (undefined1  [16])0x0;
    local_198._0_9_ = (unkuint9)1 << 0x40;
    local_198._9_7_ = 0;
    local_148 = 2;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_120 = _LC7;
    uStack_118 = _UNK_0010c328;
LAB_00109ea4:
    if (iVar43 != 0) {
      uVar39 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = lVar47 * 0x3ffff - 1;
      uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
      uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar52 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
        uVar52 = 1;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar52 * lVar3;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      lVar44 = SUB168(auVar9 * auVar25,8);
      uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar44 * 4);
      uVar38 = SUB164(auVar9 * auVar25,8);
      if (uVar49 != 0) {
        uVar51 = 0;
        do {
          if (((uint)uVar52 == uVar49) &&
             (*(long *)(*(long *)((long)local_1c8 + lVar44 * 8) + 0x10) == lVar47)) {
            lVar47 = *(long *)((long)local_1c8 + (ulong)uVar38 * 8);
            *(undefined2 *)(lVar47 + 0x20) = 1;
            *(undefined8 *)(lVar47 + 0x18) = 0;
            *(undefined4 *)(lVar47 + 0x38) = 0;
            *(undefined1 (*) [16])(lVar47 + 0x28) = (undefined1  [16])0x0;
            HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
            ::operator=((HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
                         *)(lVar47 + 0x40),local_170);
            HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::operator=
                      ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)
                       (lVar47 + 0x70),local_140);
            if (*(int *)(lVar47 + 0x98) != 0) {
              *(undefined4 *)(lVar47 + 0x98) = 0;
            }
            if (*(int *)(lVar47 + 0xa8) != 0) {
              *(undefined4 *)(lVar47 + 0xa8) = 0;
            }
            local_1c0 = (Scenario *)(*(long *)(*(long *)(this + 8) + (ulong)uVar38 * 8) + 0x18);
            goto LAB_0010a3fb;
          }
          uVar51 = uVar51 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar38 + 1) * lVar3;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar39;
          lVar44 = SUB168(auVar10 * auVar26,8);
          uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar44 * 4);
          uVar38 = SUB164(auVar10 * auVar26,8);
        } while ((uVar49 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar49 * lVar3, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar39, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                             + uVar38) - SUB164(auVar11 * auVar27,8)) * lVar3, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar39, uVar51 <= SUB164(auVar12 * auVar28,8)));
      }
    }
  }
  if ((float)uVar46 * __LC46 < (float)(iVar43 + 1)) {
    uVar46 = *(uint *)(this + 0x28);
    if (uVar46 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_1c0 = (Scenario *)0x18;
      goto LAB_0010a3fb;
    }
    uVar40 = (ulong)(uVar46 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar49 = *(uint *)(hash_table_size_primes + (ulong)uVar46 * 4);
    if (uVar46 + 1 < 2) {
      uVar40 = 2;
    }
    uVar46 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar52 = (ulong)uVar46;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar52 * 4;
    uVar39 = uVar52 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar46 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar52);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar39);
      }
    }
    if (uVar49 != 0) {
      uVar40 = 0;
      do {
        uVar46 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar46 != 0) {
          lVar47 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar38);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar46 * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar44 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar47 + lVar44 * 4);
          iVar43 = SUB164(auVar13 * auVar29,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_1c8 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar51 * lVar3;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((iVar43 + uVar38) - SUB164(auVar14 * auVar30,8)) * lVar3;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar48 = uVar41;
            if (uVar37 < uVar50) {
              *puVar1 = uVar46;
              puVar53 = (undefined8 *)((long)__s_00 + lVar44 * 8);
              uVar48 = *puVar53;
              *puVar53 = uVar41;
              uVar46 = uVar51;
              uVar50 = uVar37;
            }
            uVar50 = uVar50 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar39;
            lVar44 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar47 + lVar44 * 4);
            iVar43 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar48;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar44 * 8) = uVar41;
          *puVar1 = uVar46;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar49);
      Memory::free_static(local_1c8,false);
      Memory::free_static(pvVar4,false);
    }
  }
  local_f8 = (undefined1  [16])0x0;
  local_e8 = *(undefined8 *)param_1;
  RaycastOcclusionCull::Scenario::Scenario(local_e0,(Scenario *)local_198);
  puVar42 = (undefined8 *)operator_new(0xb8,"");
  *puVar42 = local_f8._0_8_;
  puVar42[1] = local_f8._8_8_;
  puVar42[2] = local_e8;
  local_1c0 = (Scenario *)(puVar42 + 3);
  RaycastOcclusionCull::Scenario::Scenario(local_1c0,local_e0);
  RaycastOcclusionCull::Scenario::~Scenario(local_e0);
  puVar53 = *(undefined8 **)(this + 0x20);
  if (puVar53 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar42;
  }
  else {
    *puVar53 = puVar42;
    puVar42[1] = puVar53;
  }
  lVar47 = *(long *)(this + 0x10);
  *(undefined8 **)(this + 0x20) = puVar42;
  uVar40 = *(long *)param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar39 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar39 = 1;
  }
  uVar51 = 0;
  uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar46);
  uVar38 = (uint)uVar39;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar39 * lVar3;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar40;
  lVar45 = SUB168(auVar17 * auVar33,8);
  lVar44 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar47 + lVar45 * 4);
  iVar43 = SUB164(auVar17 * auVar33,8);
  uVar49 = *puVar1;
  while (uVar49 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar49 * lVar3;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar40;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar46 + iVar43) - SUB164(auVar18 * auVar34,8)) * lVar3;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar40;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar53 = puVar42;
    if (uVar38 < uVar51) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar49;
      puVar2 = (undefined8 *)(lVar44 + lVar45 * 8);
      puVar53 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar51 = uVar38;
    }
    uVar38 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar40;
    lVar45 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar47 + lVar45 * 4);
    iVar43 = SUB164(auVar20 * auVar36,8);
    puVar42 = puVar53;
    uVar49 = *puVar1;
  }
  *(undefined8 **)(lVar44 + lVar45 * 8) = puVar42;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a3fb:
  local_1c8 = (Scenario *)local_198;
  RaycastOcclusionCull::Scenario::~Scenario(local_1c8);
LAB_00109dee:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1c0;
}



/* RaycastOcclusionCull::OccluderInstance::OccluderInstance(RaycastOcclusionCull::OccluderInstance
   const&) */

void __thiscall
RaycastOcclusionCull::OccluderInstance::OccluderInstance
          (OccluderInstance *this,OccluderInstance *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(undefined8 *)param_1;
  iVar2 = *(int *)(param_1 + 8);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 0x10) = 0;
  if (iVar2 != 0) {
    uVar10 = iVar2 - 1U | iVar2 - 1U >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
    *(uint *)(this + 0xc) = uVar10;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar10 * 4,false);
    *(long *)(this + 0x10) = lVar11;
    if (lVar11 == 0) goto LAB_0010a763;
    *(int *)(this + 8) = iVar2;
    if (*(int *)(param_1 + 8) != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      lVar12 = 0;
      do {
        *(undefined4 *)(lVar11 + lVar12 * 4) = *(undefined4 *)(lVar4 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(param_1 + 8));
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (iVar2 != 0) {
    uVar10 = iVar2 - 1U | iVar2 - 1U >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
    *(uint *)(this + 0x1c) = uVar10;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar10 * 4,false);
    *(long *)(this + 0x20) = lVar11;
    if (lVar11 == 0) {
LAB_0010a763:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(int *)(this + 0x18) = iVar2;
    uVar10 = *(uint *)(param_1 + 0x18);
    if (uVar10 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      lVar12 = 0;
      do {
        *(undefined4 *)(lVar11 + lVar12) = *(undefined4 *)(lVar4 + lVar12);
        lVar12 = lVar12 + 4;
      } while (lVar12 != (ulong)uVar10 << 2);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined2 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined2 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x40) = uVar7;
  *(undefined8 *)(this + 0x48) = uVar8;
  *(undefined8 *)(this + 0x50) = uVar9;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, RaycastOcclusionCull::OccluderInstance, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RaycastOcclusionCull::OccluderInstance> > >::operator[](RID const&) */

OccluderInstance * __thiscall
HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
::operator[](HashMap<RID,RaycastOcclusionCull::OccluderInstance,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::OccluderInstance>>>
             *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
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
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  undefined8 *puVar41;
  long in_FS_OFFSET;
  uint local_148;
  OccluderInstance *local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  OccluderInstance local_a0 [16];
  void *local_90;
  void *local_80;
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  lVar40 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar3);
  if ((__s_00 != (void *)0x0) && (*(int *)(this + 0x2c) != 0)) {
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = lVar40 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar39 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar39 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar39 * lVar4;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar30;
    lVar35 = SUB168(auVar5 * auVar17,8);
    uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
    uVar33 = SUB164(auVar5 * auVar17,8);
    if (uVar37 != 0) {
      uVar38 = 0;
      do {
        if ((uVar37 == (uint)uVar39) &&
           (lVar40 == *(long *)(*(long *)((long)__s_00 + lVar35 * 8) + 0x10))) {
          local_128 = (OccluderInstance *)(*(long *)((long)__s_00 + (ulong)uVar33 * 8) + 0x18);
          goto LAB_0010a8da;
        }
        uVar38 = uVar38 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar33 + 1) * lVar4;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar30;
        lVar35 = SUB168(auVar6 * auVar18,8);
        uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
        uVar33 = SUB164(auVar6 * auVar18,8);
      } while ((uVar37 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar37 * lVar4, auVar19._8_8_ = 0,
              auVar19._0_8_ = uVar30, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar33 + uVar3) - SUB164(auVar7 * auVar19,8)) * lVar4,
              auVar20._8_8_ = 0, auVar20._0_8_ = uVar30, uVar38 <= SUB164(auVar8 * auVar20,8)));
    }
  }
  local_f0 = ZEXT416(_LC18);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_d0 = 0x3f800000;
  uStack_c8 = 0;
  local_c0 = 1;
  local_e0 = local_f0;
  if (__s_00 == (void *)0x0) {
    uVar29 = uVar30 * 4;
    uVar39 = uVar30 * 8;
    uVar32 = Memory::alloc_static(uVar29,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar3 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar29))) {
        uVar29 = 0;
        do {
          *(undefined4 *)((long)__s + uVar29 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar29 * 8) = 0;
          uVar29 = uVar29 + 1;
        } while (uVar30 != uVar29);
      }
      else {
        memset(__s,0,uVar29);
        memset(__s_00,0,uVar39);
      }
      lVar40 = *(long *)param_1;
      goto LAB_0010a971;
    }
    iVar34 = *(int *)(this + 0x2c);
    lVar40 = *(long *)param_1;
    if (__s_00 != (void *)0x0) goto LAB_0010a975;
  }
  else {
LAB_0010a971:
    iVar34 = *(int *)(this + 0x2c);
LAB_0010a975:
    if (iVar34 != 0) {
      uVar39 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar30 = lVar40 * 0x3ffff - 1;
      uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
      uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
      uVar30 = uVar30 >> 0x16 ^ uVar30;
      uVar29 = 1;
      if ((int)uVar30 != 0) {
        uVar29 = uVar30 & 0xffffffff;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar29 * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar39;
      lVar35 = SUB168(auVar9 * auVar21,8);
      uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar33 = SUB164(auVar9 * auVar21,8);
      if (uVar37 != 0) {
        uVar38 = 0;
        do {
          if (((uint)uVar29 == uVar37) &&
             (lVar40 == *(long *)(*(long *)((long)__s_00 + lVar35 * 8) + 0x10))) {
            lVar40 = *(long *)((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined8 *)(lVar40 + 0x18) = local_118;
            if (*(int *)(lVar40 + 0x20) != 0) {
              *(undefined4 *)(lVar40 + 0x20) = 0;
            }
            if (*(int *)(lVar40 + 0x30) != 0) {
              *(undefined4 *)(lVar40 + 0x30) = 0;
            }
            local_128 = (OccluderInstance *)(lVar40 + 0x18);
            *(undefined2 *)(lVar40 + 0x70) = 1;
            *(undefined8 *)(lVar40 + 0x40) = local_f0._0_8_;
            *(undefined8 *)(lVar40 + 0x48) = local_f0._8_8_;
            *(undefined8 *)(lVar40 + 0x50) = local_e0._0_8_;
            *(undefined8 *)(lVar40 + 0x58) = local_e0._8_8_;
            *(undefined8 *)(lVar40 + 0x60) = local_d0;
            *(undefined8 *)(lVar40 + 0x68) = uStack_c8;
            goto LAB_0010a8da;
          }
          uVar38 = uVar38 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar33 + 1) * lVar4;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar39;
          lVar35 = SUB168(auVar10 * auVar22,8);
          uVar37 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar33 = SUB164(auVar10 * auVar22,8);
        } while ((uVar37 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar37 * lVar4, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar39, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                             + uVar33) - SUB164(auVar11 * auVar23,8)) * lVar4, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar39, uVar38 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar3 * __LC46 < (float)(iVar34 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_128 = (OccluderInstance *)0x18;
      goto LAB_0010a8da;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_b8 = (undefined1  [16])0x0;
  local_a8 = *(undefined8 *)param_1;
  RaycastOcclusionCull::OccluderInstance::OccluderInstance(local_a0,(OccluderInstance *)&local_118);
  puVar31 = (undefined8 *)operator_new(0x78,"");
  *puVar31 = local_b8._0_8_;
  puVar31[1] = local_b8._8_8_;
  puVar31[2] = local_a8;
  local_128 = (OccluderInstance *)(puVar31 + 3);
  RaycastOcclusionCull::OccluderInstance::OccluderInstance(local_128,local_a0);
  if (local_80 != (void *)0x0) {
    Memory::free_static(local_80,false);
  }
  if (local_90 != (void *)0x0) {
    Memory::free_static(local_90,false);
  }
  puVar41 = *(undefined8 **)(this + 0x20);
  if (puVar41 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar31;
  }
  else {
    *puVar41 = puVar31;
    puVar31[1] = puVar41;
  }
  lVar40 = *(long *)(this + 0x10);
  *(undefined8 **)(this + 0x20) = puVar31;
  uVar30 = *(long *)param_1 * 0x3ffff - 1;
  uVar30 = (uVar30 ^ uVar30 >> 0x1f) * 0x15;
  uVar30 = (uVar30 ^ uVar30 >> 0xb) * 0x41;
  uVar30 = uVar30 >> 0x16 ^ uVar30;
  uVar29 = uVar30 & 0xffffffff;
  if ((int)uVar30 == 0) {
    uVar29 = 1;
  }
  uVar38 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar33 = (uint)uVar29;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar3);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar29 * lVar4;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar30;
  lVar36 = SUB168(auVar13 * auVar25,8);
  lVar35 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar40 + lVar36 * 4);
  iVar34 = SUB164(auVar13 * auVar25,8);
  uVar37 = *puVar1;
  while (uVar37 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar37 * lVar4;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar30;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar3 + iVar34) - SUB164(auVar14 * auVar26,8)) * lVar4;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar30;
    local_148 = SUB164(auVar15 * auVar27,8);
    puVar41 = puVar31;
    if (local_148 < uVar38) {
      *puVar1 = (uint)uVar29;
      uVar29 = (ulong)uVar37;
      puVar2 = (undefined8 *)(lVar35 + lVar36 * 8);
      puVar41 = (undefined8 *)*puVar2;
      *puVar2 = puVar31;
      uVar38 = local_148;
    }
    uVar33 = (uint)uVar29;
    uVar38 = uVar38 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar34 + 1) * lVar4;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar30;
    lVar36 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar40 + lVar36 * 4);
    iVar34 = SUB164(auVar16 * auVar28,8);
    puVar31 = puVar41;
    uVar37 = *puVar1;
  }
  *(undefined8 **)(lVar35 + lVar36 * 8) = puVar31;
  *puVar1 = uVar33;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a8da:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_128;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RaycastOcclusionCull::RaycastHZBuffer::RaycastHZBuffer(RaycastOcclusionCull::RaycastHZBuffer
   const&) */

void __thiscall
RaycastOcclusionCull::RaycastHZBuffer::RaycastHZBuffer
          (RaycastHZBuffer *this,RaycastHZBuffer *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  iVar3 = *(int *)(param_1 + 8);
  *(code **)this = rtcReleaseDevice;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (iVar3 != 0) {
    uVar10 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
    *(uint *)(this + 0xc) = uVar10;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar10 * 4,false);
    *(long *)(this + 0x10) = lVar12;
    if (lVar12 == 0) goto LAB_0010b155;
    *(int *)(this + 8) = iVar3;
    uVar10 = *(uint *)(param_1 + 8);
    if (uVar10 != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      lVar13 = 0;
      do {
        *(undefined4 *)(lVar12 + lVar13) = *(undefined4 *)(lVar4 + lVar13);
        lVar13 = lVar13 + 4;
      } while (lVar13 != (ulong)uVar10 << 2);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (uVar10 != 0) {
    uVar1 = uVar10 - 1;
    uVar11 = uVar1 >> 1 | uVar1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = (uVar11 | uVar11 >> 0x10) + 1;
    *(uint *)(this + 0x1c) = uVar11;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar11 * 8,false);
    *(long *)(this + 0x20) = lVar12;
    if (lVar12 == 0) goto LAB_0010b155;
    uVar11 = *(uint *)(this + 0x18);
    if (uVar11 < uVar10) {
      memset((void *)(lVar12 + (ulong)uVar11 * 8),0,(ulong)(uVar1 - uVar11) * 8 + 8);
    }
    *(uint *)(this + 0x18) = uVar10;
    uVar10 = *(uint *)(param_1 + 0x18);
    if (uVar10 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      lVar13 = 0;
      do {
        *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar4 + lVar13);
        lVar13 = lVar13 + 8;
      } while ((ulong)uVar10 << 3 != lVar13);
    }
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (iVar3 != 0) {
    uVar10 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
    *(uint *)(this + 0x2c) = uVar10;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar10 * 8,false);
    *(long *)(this + 0x30) = lVar12;
    if (lVar12 == 0) goto LAB_0010b155;
    *(int *)(this + 0x28) = iVar3;
    uVar10 = *(uint *)(param_1 + 0x28);
    if (uVar10 != 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      lVar13 = 0;
      do {
        *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar4 + lVar13);
        lVar13 = lVar13 + 8;
      } while (lVar13 != (ulong)uVar10 << 3);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = 0;
  lVar12 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x38) = uVar5;
  if (lVar12 != 0) {
    *(long *)(this + 0x40) = lVar12;
    cVar9 = RefCounted::reference();
    if (cVar9 == '\0') {
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x68) = uVar5;
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined ***)this = &PTR_clear_0010bf78;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x80) = uVar7;
  *(undefined8 *)(this + 0x88) = uVar8;
  iVar3 = *(int *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x70) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined8 *)(this + 0x98) = 0;
  if (iVar3 != 0) {
    uVar10 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
    *(uint *)(this + 0x94) = uVar10;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar10 * 4,false);
    *(long *)(this + 0x98) = lVar12;
    if (lVar12 == 0) {
LAB_0010b155:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(int *)(this + 0x90) = iVar3;
    if (*(int *)(param_1 + 0x90) != 0) {
      lVar4 = *(long *)(param_1 + 0x98);
      lVar13 = 0;
      do {
        *(undefined4 *)(lVar12 + lVar13 * 4) = *(undefined4 *)(lVar4 + lVar13 * 4);
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < *(uint *)(param_1 + 0x90));
    }
  }
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, RaycastOcclusionCull::RaycastHZBuffer, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   RaycastOcclusionCull::RaycastHZBuffer> > >::operator[](RID const&) */

RaycastHZBuffer * __thiscall
HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
::operator[](HashMap<RID,RaycastOcclusionCull::RaycastHZBuffer,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,RaycastOcclusionCull::RaycastHZBuffer>>>
             *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Image *pIVar4;
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
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  uint uVar48;
  long lVar49;
  undefined8 uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  ulong uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  RaycastHZBuffer *local_1e8;
  RaycastHZBuffer *local_1e0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  CowData local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  RaycastHZBuffer local_f0 [176];
  long local_40;
  
  local_1e8 = *(RaycastHZBuffer **)(this + 8);
  lVar49 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar48 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar48);
  if ((local_1e8 != (RaycastHZBuffer *)0x0) && (*(int *)(this + 0x2c) != 0)) {
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar41 = lVar49 * 0x3ffff - 1;
    uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
    uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
    uVar41 = uVar41 >> 0x16 ^ uVar41;
    uVar54 = uVar41 & 0xffffffff;
    if ((int)uVar41 == 0) {
      uVar54 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar54 * lVar3;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar42;
    lVar46 = SUB168(auVar6 * auVar22,8);
    uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
    uVar40 = SUB164(auVar6 * auVar22,8);
    if (uVar51 != 0) {
      uVar53 = 0;
      do {
        if ((uVar51 == (uint)uVar54) &&
           (lVar49 == *(long *)(*(long *)((long)local_1e8 + lVar46 * 8) + 0x10))) {
          local_1e0 = (RaycastHZBuffer *)(*(long *)((long)local_1e8 + (ulong)uVar40 * 8) + 0x18);
          goto LAB_0010b2ce;
        }
        uVar53 = uVar53 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar40 + 1) * lVar3;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar42;
        lVar46 = SUB168(auVar7 * auVar23,8);
        uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        uVar40 = SUB164(auVar7 * auVar23,8);
      } while ((uVar51 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar51 * lVar3, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar42, auVar9._8_8_ = 0,
              auVar9._0_8_ = (ulong)((uVar40 + uVar48) - SUB164(auVar8 * auVar24,8)) * lVar3,
              auVar25._8_8_ = 0, auVar25._0_8_ = uVar42, uVar53 <= SUB164(auVar9 * auVar25,8)));
    }
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_1b8 = &PTR_clear_0010bf78;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_178 = (undefined1  [16])0x0;
  local_168[0] = (CowData)0x0;
  local_168[1] = (CowData)0x0;
  local_168[2] = (CowData)0x0;
  local_168[3] = (CowData)0x0;
  local_168[4] = (CowData)0x0;
  local_168[5] = (CowData)0x0;
  local_168[6] = (CowData)0x0;
  local_168[7] = (CowData)0x0;
  local_168[8] = (CowData)0x0;
  local_168[9] = (CowData)0x0;
  local_168[10] = (CowData)0x0;
  local_168[0xb] = (CowData)0x0;
  local_168[0xc] = (CowData)0x0;
  local_168[0xd] = (CowData)0x0;
  local_168[0xe] = (CowData)0x0;
  local_168[0xf] = (CowData)0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  if (local_1e8 == (RaycastHZBuffer *)0x0) {
    uVar41 = uVar42 * 4;
    uVar54 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    local_1e8 = (RaycastHZBuffer *)Memory::alloc_static(uVar54,false);
    *(RaycastHZBuffer **)(this + 8) = local_1e8;
    if (uVar48 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)local_1e8 + uVar54)) &&
         (local_1e8 < (void *)((long)pvVar5 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_1e8 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar42 != uVar41);
      }
      else {
        memset(pvVar5,0,uVar41);
        memset(local_1e8,0,uVar54);
      }
      lVar49 = *(long *)param_1;
      goto LAB_0010b3ad;
    }
    iVar45 = *(int *)(this + 0x2c);
    lVar49 = *(long *)param_1;
    if (local_1e8 != (RaycastHZBuffer *)0x0) goto LAB_0010b3b1;
  }
  else {
LAB_0010b3ad:
    iVar45 = *(int *)(this + 0x2c);
LAB_0010b3b1:
    if (iVar45 != 0) {
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar42 = lVar49 * 0x3ffff - 1;
      uVar42 = (uVar42 ^ uVar42 >> 0x1f) * 0x15;
      uVar42 = (uVar42 ^ uVar42 >> 0xb) * 0x41;
      uVar42 = uVar42 >> 0x16 ^ uVar42;
      uVar54 = uVar42 & 0xffffffff;
      if ((int)uVar42 == 0) {
        uVar54 = 1;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar54 * lVar3;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar41;
      lVar46 = SUB168(auVar10 * auVar26,8);
      uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
      uVar40 = SUB164(auVar10 * auVar26,8);
      if (uVar51 != 0) {
        uVar53 = 0;
        do {
          if ((uVar51 == (uint)uVar54) &&
             (*(long *)(*(long *)((long)local_1e8 + lVar46 * 8) + 0x10) == lVar49)) {
            lVar49 = *(long *)((long)local_1e8 + (ulong)uVar40 * 8);
            if (*(int *)(lVar49 + 0x20) != 0) {
              *(undefined4 *)(lVar49 + 0x20) = 0;
            }
            if (*(int *)(lVar49 + 0x30) != 0) {
              *(undefined4 *)(lVar49 + 0x30) = 0;
            }
            if (*(int *)(lVar49 + 0x40) != 0) {
              *(undefined4 *)(lVar49 + 0x40) = 0;
            }
            pIVar4 = *(Image **)(lVar49 + 0x58);
            *(undefined8 *)(lVar49 + 0x50) = local_180;
            if (pIVar4 != (Image *)0x0) {
              *(undefined8 *)(lVar49 + 0x58) = 0;
              cVar38 = RefCounted::unreference();
              if (cVar38 != '\0') {
                memdelete<Image>(pIVar4);
              }
            }
            if (*(long *)(lVar49 + 0x68) != 0) {
              CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(lVar49 + 0x68),local_168);
            }
            *(undefined4 *)(lVar49 + 0x70) = 0;
            *(undefined8 *)(lVar49 + 0x78) = 0;
            *(undefined8 *)(lVar49 + 0x80) = local_158._8_8_;
            *(undefined4 *)(lVar49 + 0x90) = 0;
            *(undefined8 *)(lVar49 + 0x88) = local_148._0_8_;
            *(undefined1 (*) [16])(lVar49 + 0x98) = (undefined1  [16])0x0;
            if (*(int *)(lVar49 + 0xa8) != 0) {
              *(undefined4 *)(lVar49 + 0xa8) = 0;
            }
            *(undefined8 *)(lVar49 + 0xb8) = local_118;
            local_1e0 = (RaycastHZBuffer *)
                        (*(long *)(*(long *)(this + 8) + (ulong)uVar40 * 8) + 0x18);
            goto LAB_0010b96b;
          }
          uVar53 = uVar53 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar40 + 1) * lVar3;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar41;
          lVar46 = SUB168(auVar11 * auVar27,8);
          uVar51 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
          uVar40 = SUB164(auVar11 * auVar27,8);
        } while ((uVar51 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar51 * lVar3, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar41, auVar13._8_8_ = 0,
                auVar13._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                             + uVar40) - SUB164(auVar12 * auVar28,8)) * lVar3, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar41, uVar53 <= SUB164(auVar13 * auVar29,8)));
      }
    }
  }
  if ((float)uVar48 * __LC46 < (float)(iVar45 + 1)) {
    uVar48 = *(uint *)(this + 0x28);
    if (uVar48 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_1e0 = (RaycastHZBuffer *)0x18;
      goto LAB_0010b96b;
    }
    uVar42 = (ulong)(uVar48 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar51 = *(uint *)(hash_table_size_primes + (ulong)uVar48 * 4);
    if (uVar48 + 1 < 2) {
      uVar42 = 2;
    }
    uVar48 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar54 = (ulong)uVar48;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar5 = *(void **)(this + 0x10);
    uVar42 = uVar54 * 4;
    uVar41 = uVar54 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = __s_00;
    if (uVar48 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar54);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar51 != 0) {
      uVar42 = 0;
      do {
        uVar48 = *(uint *)((long)pvVar5 + uVar42 * 4);
        if (uVar48 != 0) {
          lVar49 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar41 = CONCAT44(0,uVar40);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar48 * lVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar46 = SUB168(auVar14 * auVar30,8);
          puVar1 = (uint *)(lVar49 + lVar46 * 4);
          iVar45 = SUB164(auVar14 * auVar30,8);
          uVar53 = *puVar1;
          uVar43 = *(undefined8 *)((long)local_1e8 + uVar42 * 8);
          while (uVar53 != 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar53 * lVar3;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar41;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((iVar45 + uVar40) - SUB164(auVar15 * auVar31,8)) * lVar3;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar41;
            uVar39 = SUB164(auVar16 * auVar32,8);
            uVar50 = uVar43;
            if (uVar39 < uVar52) {
              *puVar1 = uVar48;
              puVar55 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar50 = *puVar55;
              *puVar55 = uVar43;
              uVar48 = uVar53;
              uVar52 = uVar39;
            }
            uVar52 = uVar52 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(iVar45 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar41;
            lVar46 = SUB168(auVar17 * auVar33,8);
            puVar1 = (uint *)(lVar49 + lVar46 * 4);
            iVar45 = SUB164(auVar17 * auVar33,8);
            uVar43 = uVar50;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar43;
          *puVar1 = uVar48;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar42 != uVar51);
      Memory::free_static(local_1e8,false);
      Memory::free_static(pvVar5,false);
    }
  }
  local_108 = (undefined1  [16])0x0;
  local_f8 = *(undefined8 *)param_1;
  RaycastOcclusionCull::RaycastHZBuffer::RaycastHZBuffer(local_f0,(RaycastHZBuffer *)&local_1b8);
  puVar44 = (undefined8 *)operator_new(0xc0,"");
  *puVar44 = local_108._0_8_;
  puVar44[1] = local_108._8_8_;
  puVar44[2] = local_f8;
  local_1e0 = (RaycastHZBuffer *)(puVar44 + 3);
  RaycastOcclusionCull::RaycastHZBuffer::RaycastHZBuffer(local_1e0,local_f0);
  RaycastOcclusionCull::RaycastHZBuffer::~RaycastHZBuffer(local_f0);
  puVar55 = *(undefined8 **)(this + 0x20);
  if (puVar55 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar44;
  }
  else {
    *puVar55 = puVar44;
    puVar44[1] = puVar55;
  }
  lVar49 = *(long *)(this + 0x10);
  *(undefined8 **)(this + 0x20) = puVar44;
  uVar42 = *(long *)param_1 * 0x3ffff - 1;
  uVar42 = (uVar42 ^ uVar42 >> 0x1f) * 0x15;
  uVar42 = (uVar42 ^ uVar42 >> 0xb) * 0x41;
  uVar42 = uVar42 >> 0x16 ^ uVar42;
  uVar41 = uVar42 & 0xffffffff;
  if ((int)uVar42 == 0) {
    uVar41 = 1;
  }
  uVar53 = 0;
  uVar48 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar48);
  uVar40 = (uint)uVar41;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar41 * lVar3;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar42;
  lVar47 = SUB168(auVar18 * auVar34,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar49 + lVar47 * 4);
  iVar45 = SUB164(auVar18 * auVar34,8);
  uVar51 = *puVar1;
  while (uVar51 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar51 * lVar3;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar42;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar48 + iVar45) - SUB164(auVar19 * auVar35,8)) * lVar3;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar42;
    uVar40 = SUB164(auVar20 * auVar36,8);
    puVar55 = puVar44;
    if (uVar40 < uVar53) {
      *puVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar51;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar44;
      uVar53 = uVar40;
    }
    uVar40 = (uint)uVar41;
    uVar53 = uVar53 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(iVar45 + 1) * lVar3;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar42;
    lVar47 = SUB168(auVar21 * auVar37,8);
    puVar1 = (uint *)(lVar49 + lVar47 * 4);
    iVar45 = SUB164(auVar21 * auVar37,8);
    puVar44 = puVar55;
    uVar51 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar47 * 8) = puVar44;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010b96b:
  local_1e8 = (RaycastHZBuffer *)&local_1b8;
  RaycastOcclusionCull::RaycastHZBuffer::~RaycastHZBuffer(local_1e8);
LAB_0010b2ce:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1e0;
}



/* WARNING: Control flow encountered bad instruction data */
/* RaycastOcclusionCull::RaycastHZBuffer::RaycastHZBuffer(RaycastOcclusionCull::RaycastHZBuffer
   const&) */

void __thiscall
RaycastOcclusionCull::RaycastHZBuffer::RaycastHZBuffer
          (RaycastHZBuffer *this,RaycastHZBuffer *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RaycastOcclusionCull::OccluderInstance::OccluderInstance(RaycastOcclusionCull::OccluderInstance
   const&) */

void __thiscall
RaycastOcclusionCull::OccluderInstance::OccluderInstance
          (OccluderInstance *this,OccluderInstance *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RaycastOcclusionCull::Scenario::Scenario(RaycastOcclusionCull::Scenario const&) */

void __thiscall RaycastOcclusionCull::Scenario::Scenario(Scenario *this,Scenario *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RaycastOcclusionCull::Occluder*, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RaycastOcclusionCull::Occluder*,false>::~RID_Alloc
          (RID_Alloc<RaycastOcclusionCull::Occluder*,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RaycastOcclusionCull::Scenario::~Scenario() */

void __thiscall RaycastOcclusionCull::Scenario::~Scenario(Scenario *this)

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
/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::RaycastHZBuffer, void
   (RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned int,
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData const*),
   RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::RaycastHZBuffer,void(RaycastOcclusionCull::RaycastHZBuffer::*)(unsigned_int,RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData_const*),RaycastOcclusionCull::RaycastHZBuffer::CameraRayThreadData*>
                 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::TransformThreadData*),
   RaycastOcclusionCull::Scenario::TransformThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::TransformThreadData*),RaycastOcclusionCull::Scenario::TransformThreadData*>
                 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario, void
   (RaycastOcclusionCull::Scenario::*)(int, RID*), RID*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario,void(RaycastOcclusionCull::Scenario::*)(int,RID*),RID*>
                 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::GroupUserData<RaycastOcclusionCull::Scenario const, void
   (RaycastOcclusionCull::Scenario::*)(unsigned int,
   RaycastOcclusionCull::Scenario::RaycastThreadData const*) const,
   RaycastOcclusionCull::Scenario::RaycastThreadData*>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
::~GroupUserData(GroupUserData<RaycastOcclusionCull::Scenario_const,void(RaycastOcclusionCull::Scenario::*)(unsigned_int,RaycastOcclusionCull::Scenario::RaycastThreadData_const*)const,RaycastOcclusionCull::Scenario::RaycastThreadData*>
                 *this)

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


