
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererEnvironmentStorage::RendererEnvironmentStorage() */

void __thiscall
RendererEnvironmentStorage::RendererEnvironmentStorage(RendererEnvironmentStorage *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__RendererEnvironmentStorage_001092c0;
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_001092a0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  uVar1 = _UNK_00109318;
  uVar2 = __LC0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar2 = Memory::alloc_static(0x3d28,false);
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x2c) << 3,false);
  *(undefined8 *)(this + 0x18) = uVar2;
  singleton = this;
  return;
}



/* RendererEnvironmentStorage::environment_free(RID) */

void __thiscall
RendererEnvironmentStorage::environment_free(RendererEnvironmentStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined4 extraout_EDX;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  __mutex = (pthread_mutex_t *)(this + 0x38);
  uVar8 = param_2;
  uVar4 = pthread_mutex_lock(__mutex);
  if (uVar4 != 0) {
    uVar9 = (ulong)uVar4;
    std::__throw_system_error(uVar4);
    if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)(uVar9 + 0x24))) {
      puVar7 = (undefined4 *)
               (((uVar8 & 0xffffffff) % (ulong)*(uint *)(uVar9 + 0x20)) * 0x1f0 +
               *(long *)(*(long *)(uVar9 + 0x10) +
                        ((uVar8 & 0xffffffff) / (ulong)*(uint *)(uVar9 + 0x20)) * 8));
      iVar2 = puVar7[0x7a];
      if (iVar2 == (int)(uVar8 >> 0x20)) {
        *puVar7 = extraout_EDX;
        return;
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("environment_set_background",
                     "servers/rendering/storage/environment_storage.cpp",0x3f,
                     "Parameter \"env\" is null.",0,0);
    return;
  }
  if ((uint)param_2 < *(uint *)(this + 0x24)) {
    uVar8 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20);
    lVar10 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0;
    lVar5 = *(long *)(*(long *)(this + 0x10) + uVar8 * 8) + lVar10;
    if (*(int *)(lVar5 + 0x1e8) < 0) {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC5,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0,0);
      return;
    }
    if ((int)(param_2 >> 0x20) == *(int *)(lVar5 + 0x1e8)) {
      if (*(long *)(lVar5 + 0x120) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar5 + 0x120) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(lVar5 + 0x120);
          *(undefined8 *)(lVar5 + 0x120) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
          lVar5 = lVar10 + *(long *)(*(long *)(this + 0x10) + uVar8 * 8);
        }
        else {
          lVar5 = lVar10 + *(long *)(*(long *)(this + 0x10) + uVar8 * 8);
        }
      }
      *(undefined4 *)(lVar5 + 0x1e8) = 0xffffffff;
      uVar4 = *(int *)(this + 0x28) - 1;
      *(uint *)(this + 0x28) = uVar4;
      *(uint *)(*(long *)(*(long *)(this + 0x18) +
                         ((ulong)uVar4 / (ulong)*(uint *)(this + 0x20)) * 8) +
               ((ulong)uVar4 % (ulong)*(uint *)(this + 0x20)) * 4) = (uint)param_2;
      pthread_mutex_unlock(__mutex);
      return;
    }
    pthread_mutex_unlock(__mutex);
    uVar6 = 0x171;
  }
  else {
    pthread_mutex_unlock(__mutex);
    uVar6 = 0x161;
  }
  _err_print_error(&_LC5,"./core/templates/rid_owner.h",uVar6,"Method/function failed.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_background(RID, RenderingServer::EnvironmentBG) */

void __thiscall
RendererEnvironmentStorage::environment_set_background
          (RendererEnvironmentStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
             *(long *)(*(long *)(this + 0x10) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
    iVar1 = puVar2[0x7a];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *puVar2 = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_background","servers/rendering/storage/environment_storage.cpp",
                   0x3f,"Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_sky(RID, RID) */

void __thiscall
RendererEnvironmentStorage::environment_set_sky
          (RendererEnvironmentStorage *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
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
  _err_print_error("environment_set_sky","servers/rendering/storage/environment_storage.cpp",0x45,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_sky_custom_fov(RID, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_sky_custom_fov
          (undefined4 param_1,RendererEnvironmentStorage *this,ulong param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_3 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x10) = param_1;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_sky_custom_fov",
                   "servers/rendering/storage/environment_storage.cpp",0x4b,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_sky_orientation(RID, Basis const&) */

void __thiscall
RendererEnvironmentStorage::environment_set_sky_orientation
          (RendererEnvironmentStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar2 + 0x1e8) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x14) = *param_3;
      *(undefined8 *)(lVar2 + 0x1c) = uVar1;
      uVar1 = param_3[3];
      *(undefined8 *)(lVar2 + 0x24) = param_3[2];
      *(undefined8 *)(lVar2 + 0x2c) = uVar1;
      *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(param_3 + 4);
      return;
    }
    if (*(int *)(lVar2 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_sky_orientation",
                   "servers/rendering/storage/environment_storage.cpp",0x51,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_bg_color(RID, Color const&) */

void __thiscall
RendererEnvironmentStorage::environment_set_bg_color
          (RendererEnvironmentStorage *this,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar2 + 0x1e8) == (int)(param_2 >> 0x20)) {
      uVar1 = param_3[1];
      *(undefined8 *)(lVar2 + 0x38) = *param_3;
      *(undefined8 *)(lVar2 + 0x40) = uVar1;
      return;
    }
    if (*(int *)(lVar2 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_bg_color","servers/rendering/storage/environment_storage.cpp",
                   0x57,"Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_bg_energy(RID, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_bg_energy
          (undefined4 param_1,undefined4 param_2,RendererEnvironmentStorage *this,ulong param_4)

{
  int iVar1;
  long lVar2;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_4 >> 0x20)) {
      *(ulong *)(lVar2 + 0x48) = CONCAT44(param_2,param_1);
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_bg_energy","servers/rendering/storage/environment_storage.cpp",
                   0x5d,"Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_canvas_max_layer(RID, int) */

void __thiscall
RendererEnvironmentStorage::environment_set_canvas_max_layer
          (RendererEnvironmentStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x50) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_canvas_max_layer",
                   "servers/rendering/storage/environment_storage.cpp",100,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_set_ambient_light(RID, Color const&,
   RenderingServer::EnvironmentAmbientSource, float, float,
   RenderingServer::EnvironmentReflectionSource) */

void __thiscall
RendererEnvironmentStorage::environment_set_ambient_light
          (undefined4 param_1,undefined4 param_2,RendererEnvironmentStorage *this,ulong param_4,
          undefined8 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x24))) {
    lVar3 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar3 + 0x1e8) == (int)(param_4 >> 0x20)) {
      uVar1 = *param_5;
      uVar2 = param_5[1];
      *(undefined4 *)(lVar3 + 0x54) = param_6;
      *(undefined4 *)(lVar3 + 0x70) = param_7;
      *(undefined8 *)(lVar3 + 0x58) = uVar1;
      *(undefined8 *)(lVar3 + 0x60) = uVar2;
      *(ulong *)(lVar3 + 0x68) = CONCAT44(param_2,param_1);
      return;
    }
    if (*(int *)(lVar3 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_ambient_light",
                   "servers/rendering/storage/environment_storage.cpp",0x6a,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_get_background(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_background
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
             *(long *)(*(long *)(this + 0x10) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8));
    iVar1 = puVar2[0x7a];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *puVar2;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_background","servers/rendering/storage/environment_storage.cpp",
                   0x74,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_sky(RID) const */

undefined8 __thiscall
RendererEnvironmentStorage::environment_get_sky(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sky","servers/rendering/storage/environment_storage.cpp",0x7a,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_sky_custom_fov(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sky_custom_fov
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x10);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sky_custom_fov",
                   "servers/rendering/storage/environment_storage.cpp",0x80,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_sky_orientation(RID) const */

undefined1 (*) [16]
RendererEnvironmentStorage::environment_get_sky_orientation
          (undefined1 (*param_1) [16],long param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar6 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar6 + 0x1e8) == (int)(param_3 >> 0x20)) {
      uVar2 = *(undefined8 *)(lVar6 + 0x1c);
      uVar3 = *(undefined8 *)(lVar6 + 0x24);
      uVar4 = *(undefined8 *)(lVar6 + 0x2c);
      uVar1 = *(undefined4 *)(lVar6 + 0x34);
      *(undefined8 *)*param_1 = *(undefined8 *)(lVar6 + 0x14);
      *(undefined8 *)(*param_1 + 8) = uVar2;
      *(undefined4 *)param_1[2] = uVar1;
      *(undefined8 *)param_1[1] = uVar3;
      *(undefined8 *)(param_1[1] + 8) = uVar4;
      return param_1;
    }
    if (*(int *)(lVar6 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sky_orientation",
                   "servers/rendering/storage/environment_storage.cpp",0x86,
                   "Parameter \"env\" is null.",0,0);
  uVar5 = _LC26;
  *(undefined4 *)param_1[2] = 0x3f800000;
  *param_1 = ZEXT416(uVar5);
  param_1[1] = ZEXT416(uVar5);
  return param_1;
}



/* RendererEnvironmentStorage::environment_get_bg_color(RID) const */

undefined1  [16] __thiscall
RendererEnvironmentStorage::environment_get_bg_color(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0x38);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_bg_color","servers/rendering/storage/environment_storage.cpp",
                   0x8c,"Parameter \"env\" is null.",0,0);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererEnvironmentStorage::environment_get_bg_energy_multiplier(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_bg_energy_multiplier
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x48);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_bg_energy_multiplier",
                   "servers/rendering/storage/environment_storage.cpp",0x92,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_bg_intensity(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_bg_intensity
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x4c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_bg_intensity",
                   "servers/rendering/storage/environment_storage.cpp",0x98,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_canvas_max_layer(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_canvas_max_layer
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x50);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_canvas_max_layer",
                   "servers/rendering/storage/environment_storage.cpp",0x9e,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ambient_source(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ambient_source
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x54);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ambient_source",
                   "servers/rendering/storage/environment_storage.cpp",0xa4,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ambient_light(RID) const */

undefined1  [16] __thiscall
RendererEnvironmentStorage::environment_get_ambient_light
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0x58);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ambient_light",
                   "servers/rendering/storage/environment_storage.cpp",0xaa,
                   "Parameter \"env\" is null.",0,0);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererEnvironmentStorage::environment_get_ambient_light_energy(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ambient_light_energy
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x68);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ambient_light_energy",
                   "servers/rendering/storage/environment_storage.cpp",0xb0,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_ambient_sky_contribution(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ambient_sky_contribution
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x6c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ambient_sky_contribution",
                   "servers/rendering/storage/environment_storage.cpp",0xb6,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_reflection_source(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_reflection_source
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x70);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_reflection_source",
                   "servers/rendering/storage/environment_storage.cpp",0xbc,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_set_camera_feed_id(RID, int) */

void __thiscall
RendererEnvironmentStorage::environment_set_camera_feed_id
          (RendererEnvironmentStorage *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *(undefined4 *)(lVar2 + 0x74) = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_camera_feed_id",
                   "servers/rendering/storage/environment_storage.cpp",0xc2,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_get_camera_feed_id(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_camera_feed_id
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x74);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_camera_feed_id",
                   "servers/rendering/storage/environment_storage.cpp",200,
                   "Parameter \"env\" is null.",0,0);
  return 0xffffffff;
}



/* RendererEnvironmentStorage::environment_set_tonemap(RID, RenderingServer::EnvironmentToneMapper,
   float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_tonemap
          (undefined4 param_1,undefined4 param_2,RendererEnvironmentStorage *this,ulong param_4,
          undefined4 param_5)

{
  long lVar1;
  
  if ((param_4 != 0) && ((uint)param_4 < *(uint *)(this + 0x24))) {
    lVar1 = ((param_4 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_4 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar1 + 0x1e8) == (int)(param_4 >> 0x20)) {
      *(undefined4 *)(lVar1 + 0x78) = param_5;
      *(ulong *)(lVar1 + 0x7c) = CONCAT44(param_2,param_1);
      return;
    }
    if (*(int *)(lVar1 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_tonemap","servers/rendering/storage/environment_storage.cpp",
                   0xd0,"Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_get_tone_mapper(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_tone_mapper
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x78);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_tone_mapper","servers/rendering/storage/environment_storage.cpp"
                   ,0xd8,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_exposure(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_exposure(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x7c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_exposure","servers/rendering/storage/environment_storage.cpp",
                   0xde,"Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_white(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_white(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x80);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_white","servers/rendering/storage/environment_storage.cpp",0xe4,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_set_fog(RID, bool, Color const&, float, float, float,
   float, float, float, float, RenderingServer::EnvironmentFogMode) */

void __thiscall
RendererEnvironmentStorage::environment_set_fog
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,RendererEnvironmentStorage *this,
          ulong param_9,undefined1 param_10,undefined8 *param_11,undefined4 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_9 != 0) && ((uint)param_9 < *(uint *)(this + 0x24))) {
    lVar3 = ((param_9 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_9 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar3 + 0x1e8) == (int)(param_9 >> 0x20)) {
      uVar1 = *param_11;
      uVar2 = param_11[1];
      *(undefined1 *)(lVar3 + 0x84) = param_10;
      *(undefined4 *)(lVar3 + 0x88) = param_12;
      *(undefined8 *)(lVar3 + 0x8c) = uVar1;
      *(undefined8 *)(lVar3 + 0x94) = uVar2;
      *(ulong *)(lVar3 + 0xac) = CONCAT44(param_5,param_4);
      *(undefined4 *)(lVar3 + 0xb4) = param_6;
      *(undefined4 *)(lVar3 + 0x9c) = param_1;
      *(undefined4 *)(lVar3 + 0xa0) = param_2;
      *(undefined4 *)(lVar3 + 0xa4) = param_3;
      *(undefined4 *)(lVar3 + 0xa8) = param_7;
      return;
    }
    if (*(int *)(lVar3 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_fog","servers/rendering/storage/environment_storage.cpp",0xec,
                   "Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_get_fog_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_fog_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x84);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_enabled","servers/rendering/storage/environment_storage.cpp"
                   ,0xfb,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_mode(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_mode(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x88);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_mode","servers/rendering/storage/environment_storage.cpp",
                   0x101,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_light_color(RID) const */

undefined1  [16] __thiscall
RendererEnvironmentStorage::environment_get_fog_light_color
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0x8c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_light_color",
                   "servers/rendering/storage/environment_storage.cpp",0x107,
                   "Parameter \"env\" is null.",0,0);
  auVar3._8_8_ = 0x3f8000003f333333;
  auVar3._0_8_ = 0x3f19999a3f000000;
  return auVar3;
}



/* RendererEnvironmentStorage::environment_get_fog_light_energy(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_light_energy
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x9c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_light_energy",
                   "servers/rendering/storage/environment_storage.cpp",0x10d,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_fog_sun_scatter(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_sun_scatter
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xa0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_sun_scatter",
                   "servers/rendering/storage/environment_storage.cpp",0x113,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_density(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_density
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xa4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_density","servers/rendering/storage/environment_storage.cpp"
                   ,0x119,"Parameter \"env\" is null.",0,0);
  return _LC48;
}



/* RendererEnvironmentStorage::environment_get_fog_height(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_height
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xac);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_height","servers/rendering/storage/environment_storage.cpp",
                   0x11f,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_height_density(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_height_density
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xb0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_height_density",
                   "servers/rendering/storage/environment_storage.cpp",0x125,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_aerial_perspective(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_aerial_perspective
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xb4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_aerial_perspective",
                   "servers/rendering/storage/environment_storage.cpp",299,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_sky_affect(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_sky_affect
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xa8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_sky_affect",
                   "servers/rendering/storage/environment_storage.cpp",0x131,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_set_fog_depth(RID, float, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_fog_depth
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,RendererEnvironmentStorage *this
          ,ulong param_5)

{
  long lVar1;
  
  if ((param_5 != 0) && ((uint)param_5 < *(uint *)(this + 0x24))) {
    lVar1 = ((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar1 + 0x1e8) == (int)(param_5 >> 0x20)) {
      *(ulong *)(lVar1 + 0xb8) = CONCAT44(param_2,param_1);
      *(undefined4 *)(lVar1 + 0xc0) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_fog_depth","servers/rendering/storage/environment_storage.cpp",
                   0x139,"Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_get_fog_depth_curve(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_depth_curve
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xb8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_depth_curve",
                   "servers/rendering/storage/environment_storage.cpp",0x141,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_depth_begin(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_depth_begin
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xbc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_depth_begin",
                   "servers/rendering/storage/environment_storage.cpp",0x147,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_fog_depth_end(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_fog_depth_end
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xc0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_fog_depth_end",
                   "servers/rendering/storage/environment_storage.cpp",0x14d,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0xc4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_enabled",
                   "servers/rendering/storage/environment_storage.cpp",0x16c,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_density(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_density
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 200);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_density",
                   "servers/rendering/storage/environment_storage.cpp",0x172,
                   "Parameter \"env\" is null.",0,0);
  return _LC59;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_scattering(RID) const */

undefined1  [16] __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_scattering
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0xcc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_scattering",
                   "servers/rendering/storage/environment_storage.cpp",0x178,
                   "Parameter \"env\" is null.",0,0);
  auVar3._8_8_ = 0x3f8000003f800000;
  auVar3._0_8_ = 0x3f8000003f800000;
  return auVar3;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_emission(RID) const */

undefined1  [16] __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_emission
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 (*) [16])(lVar2 + 0xdc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_emission",
                   "servers/rendering/storage/environment_storage.cpp",0x17e,
                   "Parameter \"env\" is null.",0,0);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_emission_energy(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_emission_energy
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xec);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_emission_energy",
                   "servers/rendering/storage/environment_storage.cpp",0x184,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_anisotropy(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_anisotropy
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xf0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_anisotropy",
                   "servers/rendering/storage/environment_storage.cpp",0x18a,
                   "Parameter \"env\" is null.",0,0);
  return _LC64;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_length(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_length
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xf4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_length",
                   "servers/rendering/storage/environment_storage.cpp",400,
                   "Parameter \"env\" is null.",0,0);
  return _LC66;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_detail_spread(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_detail_spread
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xf8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_detail_spread",
                   "servers/rendering/storage/environment_storage.cpp",0x196,
                   "Parameter \"env\" is null.",0,0);
  return _LC68;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_gi_inject(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_gi_inject
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0xfc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_gi_inject",
                   "servers/rendering/storage/environment_storage.cpp",0x19c,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_sky_affect(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_sky_affect
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x104);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_sky_affect",
                   "servers/rendering/storage/environment_storage.cpp",0x1a2,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_temporal_reprojection(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_temporal_reprojection
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x108);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_temporal_reprojection",
                   "servers/rendering/storage/environment_storage.cpp",0x1a8,
                   "Parameter \"env\" is null.",0,0);
  return 1;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_temporal_reprojection_amount(RID)
   const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_temporal_reprojection_amount
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x10c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_temporal_reprojection_amount",
                   "servers/rendering/storage/environment_storage.cpp",0x1ae,
                   "Parameter \"env\" is null.",0,0);
  return _LC73;
}



/* RendererEnvironmentStorage::environment_get_volumetric_fog_ambient_inject(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_volumetric_fog_ambient_inject
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x100);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_volumetric_fog_ambient_inject",
                   "servers/rendering/storage/environment_storage.cpp",0x1b4,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_set_glow(RID, bool, Vector<float>, float, float, float,
   float, RenderingServer::EnvironmentGlowBlendMode, float, float, float, float, RID) */

long __thiscall
RendererEnvironmentStorage::environment_set_glow
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          RendererEnvironmentStorage *this,ulong param_10,undefined1 param_11,long param_12,
          undefined4 param_13,undefined8 param_14)

{
  long lVar1;
  long lVar2;
  
  if ((param_10 != 0) && ((uint)param_10 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_10 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_10 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar2 + 0x1e8) == (int)(param_10 >> 0x20)) {
      lVar1 = *(long *)(param_12 + 8);
      if ((lVar1 == 0) || (*(long *)(lVar1 + -8) != 7)) {
        lVar1 = 0;
        _err_print_error("environment_set_glow","servers/rendering/storage/environment_storage.cpp",
                         0x1bd,"Condition \"p_levels.size() != 7\" is true.",
                         "Size of array of glow levels must be 7",0);
      }
      else {
        *(undefined1 *)(lVar2 + 0x110) = param_11;
        if (lVar1 != *(long *)(lVar2 + 0x120)) {
          lVar1 = CowData<float>::_ref((CowData<float> *)(lVar2 + 0x120),(CowData *)(param_12 + 8));
        }
        *(undefined4 *)(lVar2 + 0x138) = param_13;
        *(undefined8 *)(lVar2 + 0x150) = param_14;
        *(undefined4 *)(lVar2 + 0x128) = param_1;
        *(undefined4 *)(lVar2 + 300) = param_2;
        *(undefined4 *)(lVar2 + 0x130) = param_4;
        *(undefined4 *)(lVar2 + 0x134) = param_3;
        *(undefined4 *)(lVar2 + 0x13c) = param_5;
        *(undefined4 *)(lVar2 + 0x140) = param_7;
        *(undefined4 *)(lVar2 + 0x144) = param_6;
        *(undefined4 *)(lVar2 + 0x148) = param_8;
      }
      return lVar1;
    }
    if (*(int *)(lVar2 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  lVar2 = _err_print_error("environment_set_glow",
                           "servers/rendering/storage/environment_storage.cpp",0x1bc,
                           "Parameter \"env\" is null.",0,0);
  return lVar2;
}



/* RendererEnvironmentStorage::environment_get_glow_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_glow_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x110);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_enabled",
                   "servers/rendering/storage/environment_storage.cpp",0x1ce,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_glow_levels(RID) const */

long RendererEnvironmentStorage::environment_get_glow_levels
               (long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x24))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(param_2 + 0x10) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x20)) * 8);
    if (*(int *)(lVar1 + 0x1e8) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)(param_1 + 8) = 0;
      if (*(long *)(lVar1 + 0x120) != 0) {
        CowData<float>::_ref((CowData<float> *)(param_1 + 8),(CowData *)(lVar1 + 0x120));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_levels","servers/rendering/storage/environment_storage.cpp"
                   ,0x1d4,"Parameter \"env\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererEnvironmentStorage::environment_get_glow_intensity(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_intensity
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x128);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_intensity",
                   "servers/rendering/storage/environment_storage.cpp",0x1da,
                   "Parameter \"env\" is null.",0,0);
  return _LC81;
}



/* RendererEnvironmentStorage::environment_get_glow_strength(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_strength
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 300);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_strength",
                   "servers/rendering/storage/environment_storage.cpp",0x1e0,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_glow_bloom(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_bloom
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x130);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_bloom","servers/rendering/storage/environment_storage.cpp",
                   0x1e6,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_glow_mix(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_mix(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x134);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_mix","servers/rendering/storage/environment_storage.cpp",
                   0x1ec,"Parameter \"env\" is null.",0,0);
  return _LC59;
}



/* RendererEnvironmentStorage::environment_get_glow_blend_mode(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_blend_mode
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x138);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_blend_mode",
                   "servers/rendering/storage/environment_storage.cpp",0x1f2,
                   "Parameter \"env\" is null.",0,0);
  return 2;
}



/* RendererEnvironmentStorage::environment_get_glow_hdr_bleed_threshold(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_hdr_bleed_threshold
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x13c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_hdr_bleed_threshold",
                   "servers/rendering/storage/environment_storage.cpp",0x1f8,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_glow_hdr_luminance_cap(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_hdr_luminance_cap
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x140);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_hdr_luminance_cap",
                   "servers/rendering/storage/environment_storage.cpp",0x1fe,
                   "Parameter \"env\" is null.",0,0);
  return _LC88;
}



/* RendererEnvironmentStorage::environment_get_glow_hdr_bleed_scale(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_hdr_bleed_scale
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x144);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_hdr_bleed_scale",
                   "servers/rendering/storage/environment_storage.cpp",0x204,
                   "Parameter \"env\" is null.",0,0);
  return _LC68;
}



/* RendererEnvironmentStorage::environment_get_glow_map_strength(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_glow_map_strength
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x148);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_map_strength",
                   "servers/rendering/storage/environment_storage.cpp",0x20a,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_glow_map(RID) const */

undefined8 __thiscall
RendererEnvironmentStorage::environment_get_glow_map(RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x150);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_glow_map","servers/rendering/storage/environment_storage.cpp",
                   0x210,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ssr_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_ssr_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x158);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssr_enabled","servers/rendering/storage/environment_storage.cpp"
                   ,0x227,"Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ssr_max_steps(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssr_max_steps
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x15c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssr_max_steps",
                   "servers/rendering/storage/environment_storage.cpp",0x22d,
                   "Parameter \"env\" is null.",0,0);
  return 0x40;
}



/* RendererEnvironmentStorage::environment_get_ssr_fade_in(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssr_fade_in
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x160);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssr_fade_in","servers/rendering/storage/environment_storage.cpp"
                   ,0x233,"Parameter \"env\" is null.",0,0);
  return _LC95;
}



/* RendererEnvironmentStorage::environment_get_ssr_fade_out(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssr_fade_out
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x164);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssr_fade_out",
                   "servers/rendering/storage/environment_storage.cpp",0x239,
                   "Parameter \"env\" is null.",0,0);
  return _LC68;
}



/* RendererEnvironmentStorage::environment_get_ssr_depth_tolerance(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssr_depth_tolerance
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x168);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssr_depth_tolerance",
                   "servers/rendering/storage/environment_storage.cpp",0x23f,
                   "Parameter \"env\" is null.",0,0);
  return _LC64;
}



/* RendererEnvironmentStorage::environment_get_ssao_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_ssao_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x16c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_enabled",
                   "servers/rendering/storage/environment_storage.cpp",0x25a,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ssao_radius(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_radius
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x170);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_radius","servers/rendering/storage/environment_storage.cpp"
                   ,0x260,"Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_ssao_intensity(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_intensity
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x174);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_intensity",
                   "servers/rendering/storage/environment_storage.cpp",0x266,
                   "Parameter \"env\" is null.",0,0);
  return _LC68;
}



/* RendererEnvironmentStorage::environment_get_ssao_power(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_power
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x178);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_power","servers/rendering/storage/environment_storage.cpp",
                   0x26c,"Parameter \"env\" is null.",0,0);
  return _LC102;
}



/* RendererEnvironmentStorage::environment_get_ssao_detail(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_detail
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x17c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_detail","servers/rendering/storage/environment_storage.cpp"
                   ,0x272,"Parameter \"env\" is null.",0,0);
  return _LC104;
}



/* RendererEnvironmentStorage::environment_get_ssao_horizon(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_horizon
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x180);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_horizon",
                   "servers/rendering/storage/environment_storage.cpp",0x278,
                   "Parameter \"env\" is null.",0,0);
  return _LC106;
}



/* RendererEnvironmentStorage::environment_get_ssao_sharpness(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_sharpness
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x184);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_sharpness",
                   "servers/rendering/storage/environment_storage.cpp",0x27e,
                   "Parameter \"env\" is null.",0,0);
  return _LC108;
}



/* RendererEnvironmentStorage::environment_get_ssao_direct_light_affect(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_direct_light_affect
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x188);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_direct_light_affect",
                   "servers/rendering/storage/environment_storage.cpp",0x284,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ssao_ao_channel_affect(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssao_ao_channel_affect
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x18c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssao_ao_channel_affect",
                   "servers/rendering/storage/environment_storage.cpp",0x28a,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ssil_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_ssil_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 400);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssil_enabled",
                   "servers/rendering/storage/environment_storage.cpp",0x2a1,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_ssil_radius(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssil_radius
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x194);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssil_radius","servers/rendering/storage/environment_storage.cpp"
                   ,0x2a7,"Parameter \"env\" is null.",0,0);
  return _LC113;
}



/* RendererEnvironmentStorage::environment_get_ssil_intensity(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssil_intensity
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x198);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssil_intensity",
                   "servers/rendering/storage/environment_storage.cpp",0x2ad,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_ssil_sharpness(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssil_sharpness
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x19c);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssil_sharpness",
                   "servers/rendering/storage/environment_storage.cpp",0x2b3,
                   "Parameter \"env\" is null.",0,0);
  return _LC108;
}



/* RendererEnvironmentStorage::environment_get_ssil_normal_rejection(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_ssil_normal_rejection
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1a0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_ssil_normal_rejection",
                   "servers/rendering/storage/environment_storage.cpp",0x2b9,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x1a4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_enabled",
                   "servers/rendering/storage/environment_storage.cpp",0x2d5,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_cascades(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_cascades
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1a8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_cascades",
                   "servers/rendering/storage/environment_storage.cpp",0x2db,
                   "Parameter \"env\" is null.",0,0);
  return 4;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_min_cell_size(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_min_cell_size
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1ac);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_min_cell_size",
                   "servers/rendering/storage/environment_storage.cpp",0x2e1,
                   "Parameter \"env\" is null.",0,0);
  return _LC64;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_use_occlusion(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_use_occlusion
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x1b0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_use_occlusion",
                   "servers/rendering/storage/environment_storage.cpp",0x2e7,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_bounce_feedback(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_bounce_feedback
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1b4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_bounce_feedback",
                   "servers/rendering/storage/environment_storage.cpp",0x2ed,
                   "Parameter \"env\" is null.",0,0);
  return _LC104;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_read_sky_light(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_read_sky_light
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x1b8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_read_sky_light",
                   "servers/rendering/storage/environment_storage.cpp",0x2f3,
                   "Parameter \"env\" is null.",0,0);
  return 1;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_energy(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_energy
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1bc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_energy",
                   "servers/rendering/storage/environment_storage.cpp",0x2f9,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_normal_bias(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_normal_bias
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1c0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_normal_bias",
                   "servers/rendering/storage/environment_storage.cpp",0x2ff,
                   "Parameter \"env\" is null.",0,0);
  return _LC125;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_probe_bias(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_probe_bias
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1c4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_probe_bias",
                   "servers/rendering/storage/environment_storage.cpp",0x305,
                   "Parameter \"env\" is null.",0,0);
  return _LC125;
}



/* RendererEnvironmentStorage::environment_get_sdfgi_y_scale(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_sdfgi_y_scale
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1c8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_sdfgi_y_scale",
                   "servers/rendering/storage/environment_storage.cpp",0x30b,
                   "Parameter \"env\" is null.",0,0);
  return 1;
}



/* RendererEnvironmentStorage::environment_set_adjustment(RID, bool, float, float, float, bool, RID)
    */

void __thiscall
RendererEnvironmentStorage::environment_set_adjustment
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,RendererEnvironmentStorage *this
          ,ulong param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  
  if ((param_5 != 0) && ((uint)param_5 < *(uint *)(this + 0x24))) {
    lVar1 = ((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    if (*(int *)(lVar1 + 0x1e8) == (int)(param_5 >> 0x20)) {
      *(undefined1 *)(lVar1 + 0x1cc) = param_6;
      *(undefined1 *)(lVar1 + 0x1dc) = param_7;
      *(undefined8 *)(lVar1 + 0x1e0) = param_8;
      *(ulong *)(lVar1 + 0x1d0) = CONCAT44(param_2,param_1);
      *(undefined4 *)(lVar1 + 0x1d8) = param_3;
      return;
    }
    if (*(int *)(lVar1 + 0x1e8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_set_adjustment","servers/rendering/storage/environment_storage.cpp",
                   0x313,"Parameter \"env\" is null.",0,0);
  return;
}



/* RendererEnvironmentStorage::environment_get_adjustments_enabled(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_adjustments_enabled
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x1cc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_adjustments_enabled",
                   "servers/rendering/storage/environment_storage.cpp",799,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_adjustments_brightness(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_adjustments_brightness
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1d0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_adjustments_brightness",
                   "servers/rendering/storage/environment_storage.cpp",0x325,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_adjustments_contrast(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_adjustments_contrast
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1d4);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_adjustments_contrast",
                   "servers/rendering/storage/environment_storage.cpp",0x32b,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_adjustments_saturation(RID) const */

undefined4 __thiscall
RendererEnvironmentStorage::environment_get_adjustments_saturation
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined4 *)(lVar2 + 0x1d8);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_adjustments_saturation",
                   "servers/rendering/storage/environment_storage.cpp",0x331,
                   "Parameter \"env\" is null.",0,0);
  return _LC26;
}



/* RendererEnvironmentStorage::environment_get_use_1d_color_correction(RID) const */

undefined1 __thiscall
RendererEnvironmentStorage::environment_get_use_1d_color_correction
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined1 *)(lVar2 + 0x1dc);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_use_1d_color_correction",
                   "servers/rendering/storage/environment_storage.cpp",0x337,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_get_color_correction(RID) const */

undefined8 __thiscall
RendererEnvironmentStorage::environment_get_color_correction
          (RendererEnvironmentStorage *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
            *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
    iVar1 = *(int *)(lVar2 + 0x1e8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      return *(undefined8 *)(lVar2 + 0x1e0);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("environment_get_color_correction",
                   "servers/rendering/storage/environment_storage.cpp",0x33d,
                   "Parameter \"env\" is null.",0,0);
  return 0;
}



/* RendererEnvironmentStorage::environment_set_volumetric_fog(RID, bool, float, Color const&, Color
   const&, float, float, float, float, float, bool, float, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_volumetric_fog
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          RendererEnvironmentStorage *this,ulong param_10,char param_11,undefined8 *param_12,
          undefined8 *param_13,undefined1 param_14,undefined4 param_15)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_10 != 0) {
    if ((uint)param_10 < *(uint *)(this + 0x24)) {
      lVar6 = ((param_10 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_10 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar6 + 0x1e8) == (int)(param_10 >> 0x20)) {
        lVar5 = OS::get_singleton();
        local_48 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar5 + 0x68));
        cVar4 = String::operator!=((String_conflict *)&local_48,"forward_plus");
        lVar5 = local_48;
        if (cVar4 == '\0') {
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
          if ((param_11 != '\0') &&
             (environment_set_volumetric_fog(RID,bool,float,Color_const&,Color_const&,float,float,float,float,float,bool,float,float,float)
              ::first_print != '\0')) {
            _err_print_error("environment_set_volumetric_fog",
                             "servers/rendering/storage/environment_storage.cpp",0x158,
                             "Volumetric fog can only be enabled when using the Forward+ renderer.",
                             1,1);
            environment_set_volumetric_fog(RID,bool,float,Color_const&,Color_const&,float,float,float,float,float,bool,float,float,float)
            ::first_print = '\0';
          }
        }
        *(char *)(lVar6 + 0xc4) = param_11;
        uVar2 = param_12[1];
        *(undefined8 *)(lVar6 + 0xcc) = *param_12;
        *(undefined8 *)(lVar6 + 0xd4) = uVar2;
        uVar2 = *param_13;
        uVar3 = param_13[1];
        *(undefined4 *)(lVar6 + 200) = param_1;
        *(undefined1 *)(lVar6 + 0x108) = param_14;
        *(ulong *)(lVar6 + 0xfc) = CONCAT44(param_8,param_6);
        *(undefined8 *)(lVar6 + 0xdc) = uVar2;
        *(undefined8 *)(lVar6 + 0xe4) = uVar3;
        *(ulong *)(lVar6 + 0xec) = CONCAT44(param_3,param_2);
        *(ulong *)(lVar6 + 0xf4) = CONCAT44(param_5,param_4);
        *(undefined4 *)(lVar6 + 0x10c) = param_7;
        *(undefined4 *)(lVar6 + 0x104) = param_15;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00105edb;
      }
      if (*(int *)(lVar6 + 0x1e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("environment_set_volumetric_fog",
                     "servers/rendering/storage/environment_storage.cpp",0x155,
                     "Parameter \"env\" is null.",0,0);
    return;
  }
LAB_00105edb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererEnvironmentStorage::environment_set_ssr(RID, bool, int, float, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_ssr
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,RendererEnvironmentStorage *this
          ,ulong param_5,char param_6,undefined4 param_7)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != 0) {
    if ((uint)param_5 < *(uint *)(this + 0x24)) {
      lVar4 = ((param_5 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_5 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar4 + 0x1e8) == (int)(param_5 >> 0x20)) {
        lVar3 = OS::get_singleton();
        local_48 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar3 + 0x68));
        cVar2 = String::operator!=((String_conflict *)&local_48,"forward_plus");
        lVar3 = local_48;
        if (cVar2 == '\0') {
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
        else {
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
          if ((param_6 != '\0') &&
             (environment_set_ssr(RID,bool,int,float,float,float)::first_print != '\0')) {
            _err_print_error("environment_set_ssr",
                             "servers/rendering/storage/environment_storage.cpp",0x21b,
                             "Screen-space reflections (SSR) can only be enabled when using the Forward+ renderer."
                             ,1,1);
            environment_set_ssr(RID,bool,int,float,float,float)::first_print = '\0';
          }
        }
        *(char *)(lVar4 + 0x158) = param_6;
        *(undefined4 *)(lVar4 + 0x15c) = param_7;
        *(ulong *)(lVar4 + 0x160) = CONCAT44(param_2,param_1);
        *(undefined4 *)(lVar4 + 0x168) = param_3;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010610b;
      }
      if (*(int *)(lVar4 + 0x1e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("environment_set_ssr","servers/rendering/storage/environment_storage.cpp",0x218
                     ,"Parameter \"env\" is null.",0,0);
    return;
  }
LAB_0010610b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererEnvironmentStorage::environment_set_ssao(RID, bool, float, float, float, float, float,
   float, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_ssao
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          RendererEnvironmentStorage *this,ulong param_10,char param_11)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_10 != 0) {
    if ((uint)param_10 < *(uint *)(this + 0x24)) {
      lVar4 = ((param_10 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_10 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar4 + 0x1e8) == (int)(param_10 >> 0x20)) {
        lVar3 = OS::get_singleton();
        local_28 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)(lVar3 + 0x68));
        cVar2 = String::operator!=((String_conflict *)&local_28,"forward_plus");
        lVar3 = local_28;
        if (cVar2 == '\0') {
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
          if ((param_11 != '\0') &&
             (environment_set_ssao(RID,bool,float,float,float,float,float,float,float,float)::
              first_print != '\0')) {
            _err_print_error("environment_set_ssao",
                             "servers/rendering/storage/environment_storage.cpp",0x24a,
                             "Screen-space ambient occlusion (SSAO) can only be enabled when using the Forward+ renderer."
                             ,1,1);
            environment_set_ssao(RID,bool,float,float,float,float,float,float,float,float)::
            first_print = '\0';
          }
        }
        *(char *)(lVar4 + 0x16c) = param_11;
        *(ulong *)(lVar4 + 0x170) = CONCAT44(param_2,param_1);
        *(ulong *)(lVar4 + 0x178) = CONCAT44(param_4,param_3);
        *(ulong *)(lVar4 + 0x180) = CONCAT44(param_6,param_5);
        *(ulong *)(lVar4 + 0x188) = CONCAT44(param_8,param_7);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00106343;
      }
      if (*(int *)(lVar4 + 0x1e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("environment_set_ssao","servers/rendering/storage/environment_storage.cpp",
                     0x247,"Parameter \"env\" is null.",0,0);
    return;
  }
LAB_00106343:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererEnvironmentStorage::environment_set_ssil(RID, bool, float, float, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_ssil
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          RendererEnvironmentStorage *this,ulong param_6,char param_7)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 != 0) {
    if ((uint)param_6 < *(uint *)(this + 0x24)) {
      lVar4 = ((param_6 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_6 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar4 + 0x1e8) == (int)(param_6 >> 0x20)) {
        lVar3 = OS::get_singleton();
        local_28 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)(lVar3 + 0x68));
        cVar2 = String::operator!=((String_conflict *)&local_28,"forward_plus");
        lVar3 = local_28;
        if (cVar2 == '\0') {
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
          if ((param_7 != '\0') &&
             (environment_set_ssil(RID,bool,float,float,float,float)::first_print != '\0')) {
            _err_print_error("environment_set_ssil",
                             "servers/rendering/storage/environment_storage.cpp",0x295,
                             "Screen-space indirect lighting (SSIL) can only be enabled when using the Forward+ renderer."
                             ,1,1);
            environment_set_ssil(RID,bool,float,float,float,float)::first_print = '\0';
          }
        }
        *(char *)(lVar4 + 400) = param_7;
        *(ulong *)(lVar4 + 0x194) = CONCAT44(param_2,param_1);
        *(ulong *)(lVar4 + 0x19c) = CONCAT44(param_4,param_3);
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00106563;
      }
      if (*(int *)(lVar4 + 0x1e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("environment_set_ssil","servers/rendering/storage/environment_storage.cpp",
                     0x292,"Parameter \"env\" is null.",0,0);
    return;
  }
LAB_00106563:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererEnvironmentStorage::environment_set_sdfgi(RID, bool, int, float,
   RenderingServer::EnvironmentSDFGIYScale, bool, float, bool, float, float, float) */

void __thiscall
RendererEnvironmentStorage::environment_set_sdfgi
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,RendererEnvironmentStorage *this,ulong param_7,char param_8,
          undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 != 0) {
    if ((uint)param_7 < *(uint *)(this + 0x24)) {
      lVar4 = ((param_7 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x1f0 +
              *(long *)(*(long *)(this + 0x10) +
                       ((param_7 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8);
      if (*(int *)(lVar4 + 0x1e8) == (int)(param_7 >> 0x20)) {
        lVar3 = OS::get_singleton();
        local_48 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar3 + 0x68));
        cVar2 = String::operator!=((String_conflict *)&local_48,"forward_plus");
        lVar3 = local_48;
        if (cVar2 == '\0') {
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
        else {
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
          if ((param_8 != '\0') &&
             (environment_set_sdfgi(RID,bool,int,float,RenderingServer::EnvironmentSDFGIYScale,bool,float,bool,float,float,float)
              ::first_print != '\0')) {
            _err_print_error("environment_set_sdfgi",
                             "servers/rendering/storage/environment_storage.cpp",0x2c4,
                             "SDFGI can only be enabled when using the Forward+ renderer.",1,1);
            environment_set_sdfgi(RID,bool,int,float,RenderingServer::EnvironmentSDFGIYScale,bool,float,bool,float,float,float)
            ::first_print = '\0';
          }
        }
        *(char *)(lVar4 + 0x1a4) = param_8;
        *(undefined4 *)(lVar4 + 0x1a8) = param_9;
        *(undefined4 *)(lVar4 + 0x1ac) = param_1;
        *(undefined1 *)(lVar4 + 0x1b0) = param_11;
        *(undefined1 *)(lVar4 + 0x1b8) = param_12;
        *(ulong *)(lVar4 + 0x1bc) = CONCAT44(param_4,param_3);
        *(undefined4 *)(lVar4 + 0x1c8) = param_10;
        *(undefined4 *)(lVar4 + 0x1b4) = param_2;
        *(undefined4 *)(lVar4 + 0x1c4) = param_5;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010680b;
      }
      if (*(int *)(lVar4 + 0x1e8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("environment_set_sdfgi","servers/rendering/storage/environment_storage.cpp",
                     0x2c1,"Parameter \"env\" is null.",0,0);
    return;
  }
LAB_0010680b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererEnvironmentStorage::~RendererEnvironmentStorage() */

void __thiscall
RendererEnvironmentStorage::~RendererEnvironmentStorage(RendererEnvironmentStorage *this)

{
  *(undefined ***)this = &PTR__RendererEnvironmentStorage_001092c0;
  singleton = 0;
  RID_Alloc<RendererEnvironmentStorage::Environment,true>::~RID_Alloc
            ((RID_Alloc<RendererEnvironmentStorage::Environment,true> *)(this + 8));
  return;
}



/* RendererEnvironmentStorage::~RendererEnvironmentStorage() */

void __thiscall
RendererEnvironmentStorage::~RendererEnvironmentStorage(RendererEnvironmentStorage *this)

{
  *(undefined ***)this = &PTR__RendererEnvironmentStorage_001092c0;
  singleton = 0;
  RID_Alloc<RendererEnvironmentStorage::Environment,true>::~RID_Alloc
            ((RID_Alloc<RendererEnvironmentStorage::Environment,true> *)(this + 8));
  operator_delete(this,0x60);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererEnvironmentStorage::environment_initialize(RID) */

void __thiscall
RendererEnvironmentStorage::environment_initialize
          (RendererEnvironmentStorage *this,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 auStack_1f8 [2];
  undefined2 local_1e2;
  undefined2 local_1d2;
  undefined2 local_1c2;
  undefined8 local_1b2;
  undefined2 local_1aa;
  undefined8 local_192;
  undefined2 local_18a;
  undefined8 local_17a;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 local_15a;
  undefined8 local_152;
  undefined8 local_13e;
  undefined8 local_136;
  undefined8 local_12e;
  undefined8 local_126;
  undefined2 local_11e;
  undefined8 local_10e;
  undefined8 local_106;
  undefined8 local_fd;
  undefined8 local_f2;
  undefined2 local_ea;
  undefined8 local_d0;
  undefined8 local_c4;
  undefined8 local_ba;
  undefined1 local_b1;
  undefined8 local_9c;
  undefined8 local_91;
  undefined8 local_86;
  undefined8 local_7e;
  undefined8 local_76;
  undefined8 local_62;
  undefined8 local_5a;
  undefined8 local_50;
  undefined8 local_41;
  undefined8 local_39;
  undefined2 local_31;
  undefined8 local_26;
  undefined2 local_1e;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = auStack_1f8;
  for (lVar1 = 0x3d; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1d2 = 0x3f80;
  local_152 = 0x3f8000003c23;
  local_12e = 0x3f8000003c23;
  local_1c2 = 0x3f80;
  local_10e = 0xcccd000000003f80;
  local_15a = 0xd70a000000003f80;
  local_106 = 0x428000003e4c;
  local_13e = 0x412000003f80;
  local_fd = 0x3f80000040;
  local_136 = 0xd70a0000000042c8;
  local_f2 = 0x6666000000013f80;
  local_d0 = __LC81;
  local_1e2 = 0x3f80;
  local_c4 = 0x23c23d70a;
  local_ba = 0x414000003f80;
  local_1b2 = 0x3f8000003f80;
  local_192 = 0x3f8000003f80;
  local_17a = 0x3f8000003f80;
  local_126 = 0x3f8000003f80;
  local_1aa = 0x3f80;
  local_18a = 0x3f80;
  local_11e = 0x3f80;
  local_ea = 0x3f66;
  local_b1 = 0x40;
  local_16c = __LC158;
  uStack_168 = _UNK_00109334;
  uStack_164 = _UNK_00109338;
  uStack_160 = _UNK_0010933c;
  local_9c = 0x3e19999a00000040;
  local_91 = 0x3e4ccccd40;
  local_7e = 0xc28f3f0000003fc0;
  local_86 = 0x400000003f80;
  local_62 = 0xe1483f80000040a0;
  local_76 = 0x3f7ae1483d75;
  local_50 = 0x3e4ccccd00000004;
  local_5a = 0x3f8000003f7a;
  local_39 = 0x8ccccd3f8ccccd3f;
  local_26 = 0x3f8000003f80;
  local_41 = 0x800000000000013f;
  local_1e = 0x3f80;
  local_31 = 0x13f;
  RID_Alloc<RendererEnvironmentStorage::Environment,true>::initialize_rid
            ((RID_Alloc<RendererEnvironmentStorage::Environment,true> *)(this + 8),param_2,
             auStack_1f8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererEnvironmentStorage::environment_allocate() */

void __thiscall RendererEnvironmentStorage::environment_allocate(RendererEnvironmentStorage *this)

{
  RID_Alloc<RendererEnvironmentStorage::Environment,true>::allocate_rid
            ((RID_Alloc<RendererEnvironmentStorage::Environment,true> *)(this + 8));
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



/* WARNING: Removing unreachable block (ram,0x00107f10) */
/* WARNING: Removing unreachable block (ram,0x00108040) */
/* WARNING: Removing unreachable block (ram,0x001081b9) */
/* WARNING: Removing unreachable block (ram,0x0010804c) */
/* WARNING: Removing unreachable block (ram,0x00108056) */
/* WARNING: Removing unreachable block (ram,0x0010819b) */
/* WARNING: Removing unreachable block (ram,0x00108062) */
/* WARNING: Removing unreachable block (ram,0x0010806c) */
/* WARNING: Removing unreachable block (ram,0x0010817d) */
/* WARNING: Removing unreachable block (ram,0x00108078) */
/* WARNING: Removing unreachable block (ram,0x00108082) */
/* WARNING: Removing unreachable block (ram,0x0010815f) */
/* WARNING: Removing unreachable block (ram,0x0010808e) */
/* WARNING: Removing unreachable block (ram,0x00108098) */
/* WARNING: Removing unreachable block (ram,0x00108141) */
/* WARNING: Removing unreachable block (ram,0x001080a4) */
/* WARNING: Removing unreachable block (ram,0x001080ae) */
/* WARNING: Removing unreachable block (ram,0x00108123) */
/* WARNING: Removing unreachable block (ram,0x001080b6) */
/* WARNING: Removing unreachable block (ram,0x001080c0) */
/* WARNING: Removing unreachable block (ram,0x00108108) */
/* WARNING: Removing unreachable block (ram,0x001080c8) */
/* WARNING: Removing unreachable block (ram,0x001080de) */
/* WARNING: Removing unreachable block (ram,0x001080ea) */
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



/* RID_Alloc<RendererEnvironmentStorage::Environment, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererEnvironmentStorage::Environment,true>::~RID_Alloc
          (RID_Alloc<RendererEnvironmentStorage::Environment,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_001092a0;
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x18);
    puVar9 = *(undefined8 **)(this + 8);
LAB_00108383:
    if ((uint)uVar4 < uVar7) goto LAB_001083cb;
    lVar5 = 0;
    while( true ) {
      Memory::free_static((void *)puVar9[lVar5],false);
      lVar2 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar7) <= (uint)lVar5) break;
      puVar9 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar7);
    print_error((String_conflict *)&local_48);
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
    lVar5 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    uVar7 = *(uint *)(this + 0x18);
    uVar8 = (ulong)uVar7;
    puVar9 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        lVar5 = (uVar6 % uVar8) * 0x1f0 + puVar9[uVar6 / uVar8];
        if (-1 < *(int *)(lVar5 + 0x1e8)) {
          if (*(long *)(lVar5 + 0x120) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar5 + 0x120) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *(long *)(lVar5 + 0x120);
              *(undefined8 *)(lVar5 + 0x120) = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
            puVar9 = *(undefined8 **)(this + 8);
            uVar8 = (ulong)*(uint *)(this + 0x18);
          }
          uVar7 = (uint)uVar8;
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_00108383;
    }
    if (uVar7 != 0) goto LAB_001083cb;
    Memory::free_static((void *)*puVar9,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar9 = *(undefined8 **)(this + 8);
LAB_001083cb:
  if (puVar9 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar9,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererEnvironmentStorage::Environment, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererEnvironmentStorage::Environment,true>::~RID_Alloc
          (RID_Alloc<RendererEnvironmentStorage::Environment,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererEnvironmentStorage::Environment, true>::initialize_rid(RID,
   RendererEnvironmentStorage::Environment const&) */

void __thiscall
RID_Alloc<RendererEnvironmentStorage::Environment,true>::initialize_rid
          (RID_Alloc<RendererEnvironmentStorage::Environment,true> *this,ulong param_2,
          undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  char *pcVar19;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    puVar17 = (undefined4 *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x1f0 +
              *(long *)(*(long *)(this + 8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)puVar17[0x7a] < 0) {
      uVar18 = (uint)(param_2 >> 0x20);
      if (uVar18 == (puVar17[0x7a] & 0x7fffffff)) {
        uVar3 = *param_3;
        uVar16 = *(undefined8 *)(param_3 + 0x1a);
        puVar17[0x7a] = uVar18;
        uVar1 = param_3[4];
        uVar6 = *(undefined8 *)(param_3 + 5);
        uVar7 = *(undefined8 *)(param_3 + 7);
        uVar8 = *(undefined8 *)(param_3 + 9);
        uVar9 = *(undefined8 *)(param_3 + 0xb);
        uVar10 = *(undefined8 *)(param_3 + 0xe);
        uVar11 = *(undefined8 *)(param_3 + 0x10);
        *puVar17 = uVar3;
        uVar4 = *(undefined8 *)(param_3 + 2);
        uVar12 = *(undefined8 *)(param_3 + 0x16);
        uVar13 = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)(puVar17 + 0x1a) = uVar16;
        uVar16 = *(undefined8 *)(param_3 + 0x1c);
        puVar17[4] = uVar1;
        *(undefined8 *)(puVar17 + 2) = uVar4;
        uVar1 = param_3[0xd];
        *(undefined8 *)(puVar17 + 0x1c) = uVar16;
        uVar16 = *(undefined8 *)(param_3 + 0x1e);
        puVar17[0xd] = uVar1;
        uVar4 = *(undefined8 *)(param_3 + 0x12);
        *(undefined8 *)(puVar17 + 0x1e) = uVar16;
        uVar1 = param_3[0x20];
        *(undefined8 *)(puVar17 + 0x12) = uVar4;
        uVar16 = *(undefined8 *)(param_3 + 0x14);
        *(undefined8 *)(puVar17 + 5) = uVar6;
        *(undefined8 *)(puVar17 + 7) = uVar7;
        *(undefined8 *)(puVar17 + 0x14) = uVar16;
        uVar2 = *(undefined1 *)(param_3 + 0x21);
        *(undefined8 *)(puVar17 + 9) = uVar8;
        *(undefined8 *)(puVar17 + 0xb) = uVar9;
        *(undefined1 *)(puVar17 + 0x21) = uVar2;
        uVar3 = param_3[0x22];
        *(undefined8 *)(puVar17 + 0xe) = uVar10;
        *(undefined8 *)(puVar17 + 0x10) = uVar11;
        puVar17[0x20] = uVar1;
        *(undefined8 *)(puVar17 + 0x16) = uVar12;
        *(undefined8 *)(puVar17 + 0x18) = uVar13;
        puVar17[0x22] = uVar3;
        uVar1 = param_3[0x32];
        uVar4 = *(undefined8 *)(param_3 + 0x23);
        uVar6 = *(undefined8 *)(param_3 + 0x25);
        *(undefined8 *)(puVar17 + 0x2f) = *(undefined8 *)(param_3 + 0x2f);
        uVar2 = *(undefined1 *)(param_3 + 0x31);
        puVar17[0x32] = uVar1;
        uVar1 = param_3[0x41];
        uVar7 = *(undefined8 *)(param_3 + 0x27);
        uVar8 = *(undefined8 *)(param_3 + 0x29);
        *(undefined1 *)(puVar17 + 0x31) = uVar2;
        uVar16 = *(undefined8 *)(param_3 + 0x3f);
        uVar9 = *(undefined8 *)(param_3 + 0x2b);
        uVar10 = *(undefined8 *)(param_3 + 0x2d);
        uVar11 = *(undefined8 *)(param_3 + 0x33);
        uVar12 = *(undefined8 *)(param_3 + 0x35);
        puVar17[0x41] = uVar1;
        *(undefined8 *)(puVar17 + 0x3f) = uVar16;
        uVar2 = *(undefined1 *)(param_3 + 0x42);
        uVar16 = *(undefined8 *)(param_3 + 0x37);
        uVar13 = *(undefined8 *)(param_3 + 0x39);
        uVar14 = *(undefined8 *)(param_3 + 0x3b);
        uVar15 = *(undefined8 *)(param_3 + 0x3d);
        *(undefined8 *)(puVar17 + 0x23) = uVar4;
        *(undefined8 *)(puVar17 + 0x25) = uVar6;
        uVar1 = param_3[0x43];
        *(undefined1 *)(puVar17 + 0x42) = uVar2;
        uVar2 = *(undefined1 *)(param_3 + 0x44);
        *(undefined8 *)(puVar17 + 0x27) = uVar7;
        *(undefined8 *)(puVar17 + 0x29) = uVar8;
        *(undefined8 *)(puVar17 + 0x48) = 0;
        lVar5 = *(long *)(param_3 + 0x48);
        *(undefined1 *)(puVar17 + 0x44) = uVar2;
        *(undefined8 *)(puVar17 + 0x2b) = uVar9;
        *(undefined8 *)(puVar17 + 0x2d) = uVar10;
        *(undefined8 *)(puVar17 + 0x33) = uVar11;
        *(undefined8 *)(puVar17 + 0x35) = uVar12;
        *(undefined8 *)(puVar17 + 0x37) = uVar16;
        *(undefined8 *)(puVar17 + 0x39) = uVar13;
        *(undefined8 *)(puVar17 + 0x3b) = uVar14;
        *(undefined8 *)(puVar17 + 0x3d) = uVar15;
        puVar17[0x43] = uVar1;
        if (lVar5 != 0) {
          CowData<float>::_ref((CowData<float> *)(puVar17 + 0x48),(CowData *)(param_3 + 0x48));
        }
        uVar16 = *(undefined8 *)(param_3 + 0x57);
        uVar1 = param_3[0x6d];
        uVar6 = *(undefined8 *)(param_3 + 0x4a);
        uVar7 = *(undefined8 *)(param_3 + 0x4c);
        puVar17[0x4e] = param_3[0x4e];
        uVar4 = *(undefined8 *)(param_3 + 0x54);
        *(undefined8 *)(puVar17 + 0x57) = uVar16;
        uVar16 = *(undefined8 *)(param_3 + 0x59);
        *(undefined8 *)(puVar17 + 0x54) = uVar4;
        uVar2 = *(undefined1 *)(param_3 + 0x56);
        *(undefined8 *)(puVar17 + 0x59) = uVar16;
        uVar4 = *(undefined8 *)(param_3 + 0x4f);
        uVar8 = *(undefined8 *)(param_3 + 0x51);
        *(undefined1 *)(puVar17 + 0x56) = uVar2;
        uVar2 = *(undefined1 *)(param_3 + 0x5b);
        uVar16 = *(undefined8 *)(param_3 + 0x6a);
        uVar9 = *(undefined8 *)(param_3 + 0x5c);
        uVar10 = *(undefined8 *)(param_3 + 0x5e);
        puVar17[0x6d] = uVar1;
        *(undefined1 *)(puVar17 + 0x5b) = uVar2;
        uVar2 = *(undefined1 *)(param_3 + 100);
        uVar11 = *(undefined8 *)(param_3 + 0x60);
        uVar12 = *(undefined8 *)(param_3 + 0x62);
        uVar13 = *(undefined8 *)(param_3 + 0x65);
        uVar14 = *(undefined8 *)(param_3 + 0x67);
        *(undefined8 *)(puVar17 + 0x6a) = uVar16;
        *(undefined1 *)(puVar17 + 100) = uVar2;
        uVar2 = *(undefined1 *)(param_3 + 0x69);
        *(undefined8 *)(puVar17 + 0x4a) = uVar6;
        *(undefined8 *)(puVar17 + 0x4c) = uVar7;
        *(undefined1 *)(puVar17 + 0x69) = uVar2;
        uVar2 = *(undefined1 *)(param_3 + 0x6c);
        *(undefined8 *)(puVar17 + 0x4f) = uVar4;
        *(undefined8 *)(puVar17 + 0x51) = uVar8;
        *(undefined1 *)(puVar17 + 0x6c) = uVar2;
        *(undefined8 *)(puVar17 + 0x5c) = uVar9;
        *(undefined8 *)(puVar17 + 0x5e) = uVar10;
        *(undefined8 *)(puVar17 + 0x60) = uVar11;
        *(undefined8 *)(puVar17 + 0x62) = uVar12;
        *(undefined8 *)(puVar17 + 0x65) = uVar13;
        *(undefined8 *)(puVar17 + 0x67) = uVar14;
        uVar16 = *(undefined8 *)(param_3 + 0x6f);
        uVar1 = param_3[0x76];
        *(undefined1 *)(puVar17 + 0x6e) = *(undefined1 *)(param_3 + 0x6e);
        uVar2 = *(undefined1 *)(param_3 + 0x73);
        *(undefined8 *)(puVar17 + 0x6f) = uVar16;
        uVar16 = *(undefined8 *)(param_3 + 0x71);
        *(undefined1 *)(puVar17 + 0x73) = uVar2;
        uVar4 = *(undefined8 *)(param_3 + 0x74);
        *(undefined8 *)(puVar17 + 0x71) = uVar16;
        *(undefined8 *)(puVar17 + 0x74) = uVar4;
        uVar2 = *(undefined1 *)(param_3 + 0x77);
        puVar17[0x76] = uVar1;
        *(undefined1 *)(puVar17 + 0x77) = uVar2;
        *(undefined8 *)(puVar17 + 0x78) = *(undefined8 *)(param_3 + 0x78);
        return;
      }
      pcVar19 = "Attempting to initialize the wrong RID";
      uVar16 = 0xfc;
    }
    else {
      pcVar19 = "Initializing already initialized RID";
      uVar16 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar16,
                     "Method/function failed. Returning: nullptr",pcVar19,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108a28) */
/* WARNING: Removing unreachable block (ram,0x00108b58) */
/* WARNING: Removing unreachable block (ram,0x00108d20) */
/* WARNING: Removing unreachable block (ram,0x00108b64) */
/* WARNING: Removing unreachable block (ram,0x00108b6e) */
/* WARNING: Removing unreachable block (ram,0x00108d00) */
/* WARNING: Removing unreachable block (ram,0x00108b7a) */
/* WARNING: Removing unreachable block (ram,0x00108b84) */
/* WARNING: Removing unreachable block (ram,0x00108ce0) */
/* WARNING: Removing unreachable block (ram,0x00108b90) */
/* WARNING: Removing unreachable block (ram,0x00108b9a) */
/* WARNING: Removing unreachable block (ram,0x00108cc0) */
/* WARNING: Removing unreachable block (ram,0x00108ba6) */
/* WARNING: Removing unreachable block (ram,0x00108bb0) */
/* WARNING: Removing unreachable block (ram,0x00108ca0) */
/* WARNING: Removing unreachable block (ram,0x00108bbc) */
/* WARNING: Removing unreachable block (ram,0x00108bc6) */
/* WARNING: Removing unreachable block (ram,0x00108c80) */
/* WARNING: Removing unreachable block (ram,0x00108bd2) */
/* WARNING: Removing unreachable block (ram,0x00108bdc) */
/* WARNING: Removing unreachable block (ram,0x00108c60) */
/* WARNING: Removing unreachable block (ram,0x00108be4) */
/* WARNING: Removing unreachable block (ram,0x00108bfa) */
/* WARNING: Removing unreachable block (ram,0x00108c06) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

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
/* RID_Alloc<RendererEnvironmentStorage::Environment, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererEnvironmentStorage::Environment,true>::allocate_rid
          (RID_Alloc<RendererEnvironmentStorage::Environment,true> *this)

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
      goto LAB_00108f87;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x1f0,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0x1e8);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x7c;
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
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0x1f0 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0x1e8) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_00108f87:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererEnvironmentStorage::Environment, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererEnvironmentStorage::Environment,true>::~RID_Alloc
          (RID_Alloc<RendererEnvironmentStorage::Environment,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


