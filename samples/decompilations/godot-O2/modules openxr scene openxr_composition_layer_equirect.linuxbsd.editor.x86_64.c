
/* OpenXRCompositionLayerEquirect::get_radius() const */

undefined4 __thiscall
OpenXRCompositionLayerEquirect::get_radius(OpenXRCompositionLayerEquirect *this)

{
  return *(undefined4 *)(this + 0x5f0);
}



/* OpenXRCompositionLayerEquirect::get_central_horizontal_angle() const */

undefined4 __thiscall
OpenXRCompositionLayerEquirect::get_central_horizontal_angle(OpenXRCompositionLayerEquirect *this)

{
  return *(undefined4 *)(this + 0x5f4);
}



/* OpenXRCompositionLayerEquirect::get_upper_vertical_angle() const */

undefined4 __thiscall
OpenXRCompositionLayerEquirect::get_upper_vertical_angle(OpenXRCompositionLayerEquirect *this)

{
  return *(undefined4 *)(this + 0x5f8);
}



/* OpenXRCompositionLayerEquirect::get_lower_vertical_angle() const */

undefined4 __thiscall
OpenXRCompositionLayerEquirect::get_lower_vertical_angle(OpenXRCompositionLayerEquirect *this)

{
  return *(undefined4 *)(this + 0x5fc);
}



/* OpenXRCompositionLayerEquirect::get_fallback_segments() const */

undefined4 __thiscall
OpenXRCompositionLayerEquirect::get_fallback_segments(OpenXRCompositionLayerEquirect *this)

{
  return *(undefined4 *)(this + 0x600);
}



/* OpenXRCompositionLayerEquirect::~OpenXRCompositionLayerEquirect() */

void __thiscall
OpenXRCompositionLayerEquirect::~OpenXRCompositionLayerEquirect
          (OpenXRCompositionLayerEquirect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109030;
  OpenXRCompositionLayer::~OpenXRCompositionLayer((OpenXRCompositionLayer *)this);
  return;
}



/* OpenXRCompositionLayerEquirect::~OpenXRCompositionLayerEquirect() */

void __thiscall
OpenXRCompositionLayerEquirect::~OpenXRCompositionLayerEquirect
          (OpenXRCompositionLayerEquirect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109030;
  OpenXRCompositionLayer::~OpenXRCompositionLayer((OpenXRCompositionLayer *)this);
  operator_delete(this,0x608);
  return;
}



/* OpenXRCompositionLayerEquirect::update_transform() */

void __thiscall
OpenXRCompositionLayerEquirect::update_transform(OpenXRCompositionLayerEquirect *this)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  OpenXRCompositionLayer::get_openxr_pose();
  *(undefined8 *)(this + 0x5c0) = local_38;
  *(ulong *)(this + 0x5c8) = CONCAT44(uStack_2c,uStack_30);
  *(ulong *)(this + 0x5cc) = CONCAT44(uStack_28,uStack_2c);
  *(undefined8 *)(this + 0x5d4) = uStack_24;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRCompositionLayerEquirect::intersects_ray(Vector3 const&, Vector3 const&) const */

void __thiscall
OpenXRCompositionLayerEquirect::intersects_ray
          (OpenXRCompositionLayerEquirect *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  float fVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_44;
  float local_40;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::get_global_transform();
  fVar4 = *(float *)(param_1 + 4);
  fVar6 = *(float *)param_1;
  fVar8 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_1 + 8);
  fVar3 = fVar4 - local_40;
  fVar2 = *(float *)(param_2 + 8);
  fVar11 = fVar6 - local_44;
  fVar10 = fVar1 - local_3c;
  fVar5 = fVar8 * fVar11 + fVar7 * fVar3 + fVar2 * fVar10;
  fVar5 = fVar5 + fVar5;
  dVar9 = (double)(fVar8 * fVar8 + fVar7 * fVar7 + fVar2 * fVar2);
  fVar3 = (float)((double)(fVar5 * fVar5) -
                 (double)((fVar3 * fVar3 + fVar11 * fVar11 + fVar10 * fVar10) -
                         *(float *)(this + 0x5f0) * *(float *)(this + 0x5f0)) * _LC3 * dVar9);
  if (0.0 <= fVar3) {
    fVar3 = SQRT(fVar3);
    fVar10 = (float)((double)((float)((uint)fVar5 ^ __LC5) - fVar3) / (dVar9 + dVar9));
    fVar3 = (float)((double)(fVar3 - fVar5) / (dVar9 + dVar9));
    if (fVar10 <= fVar3) {
      fVar10 = fVar3;
    }
    if (0.0 <= fVar10) {
      Basis::inverse();
      Basis::rotate((Vector3 *)&local_98,_LC1);
      fVar7 = (fVar7 * fVar10 + fVar4) - local_40;
      fVar8 = (fVar8 * fVar10 + fVar6) - local_44;
      fVar6 = (fVar2 * fVar10 + fVar1) - local_3c;
      fVar4 = atan2f(fVar8 * local_80 + fVar7 * local_7c + fVar6 * local_78,
                     local_98 * fVar8 + local_94 * fVar7 + local_90 * fVar6);
      if ((((double)ABS(fVar4) <= (double)*(float *)(this + 0x5f4) * __LC7) &&
          (fVar4 = (local_8c * fVar8 + local_88 * fVar7 + local_84 * fVar6) /
                   *(float *)(this + 0x5f0), (float)_LC8 <= fVar4)) && (fVar4 <= __LC32)) {
        acosf(fVar4);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerEquirect::set_radius(float) */

void __thiscall
OpenXRCompositionLayerEquirect::set_radius(OpenXRCompositionLayerEquirect *this,float param_1)

{
  if (0.0 < param_1) {
    *(float *)(this + 0x5f0) = param_1;
    *(float *)(this + 0x5dc) = param_1;
    OpenXRCompositionLayer::update_fallback_mesh();
    return;
  }
  _err_print_error("set_radius","modules/openxr/scene/openxr_composition_layer_equirect.cpp",0x88,
                   "Condition \"p_radius <= 0\" is true.",0,0);
  return;
}



/* OpenXRCompositionLayerEquirect::set_central_horizontal_angle(float) */

void __thiscall
OpenXRCompositionLayerEquirect::set_central_horizontal_angle
          (OpenXRCompositionLayerEquirect *this,float param_1)

{
  if (0.0 < param_1) {
    *(float *)(this + 0x5f4) = param_1;
    *(float *)(this + 0x5e0) = param_1;
    OpenXRCompositionLayer::update_fallback_mesh();
    return;
  }
  _err_print_error("set_central_horizontal_angle",
                   "modules/openxr/scene/openxr_composition_layer_equirect.cpp",0x93,
                   "Condition \"p_angle <= 0\" is true.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRCompositionLayerEquirect::set_upper_vertical_angle(float) */

void __thiscall
OpenXRCompositionLayerEquirect::set_upper_vertical_angle
          (OpenXRCompositionLayerEquirect *this,float param_1)

{
  if ((0.0 < param_1) && ((double)param_1 <= __LC10)) {
    *(float *)(this + 0x5f8) = param_1;
    *(float *)(this + 0x5e4) = param_1;
    OpenXRCompositionLayer::update_fallback_mesh();
    return;
  }
  _err_print_error("set_upper_vertical_angle",
                   "modules/openxr/scene/openxr_composition_layer_equirect.cpp",0x9e,
                   "Condition \"p_angle <= 0 || p_angle > (3.1415926535897932384626433833 / 2.0)\" is true."
                   ,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRCompositionLayerEquirect::set_lower_vertical_angle(float) */

void __thiscall
OpenXRCompositionLayerEquirect::set_lower_vertical_angle
          (OpenXRCompositionLayerEquirect *this,float param_1)

{
  if ((0.0 < param_1) && ((double)param_1 <= __LC10)) {
    *(float *)(this + 0x5fc) = param_1;
    *(uint *)(this + 0x5e8) = (uint)param_1 ^ __LC5;
    OpenXRCompositionLayer::update_fallback_mesh();
    return;
  }
  _err_print_error("set_lower_vertical_angle",
                   "modules/openxr/scene/openxr_composition_layer_equirect.cpp",0xa9,
                   "Condition \"p_angle <= 0 || p_angle > (3.1415926535897932384626433833 / 2.0)\" is true."
                   ,0,0);
  return;
}



/* OpenXRCompositionLayerEquirect::set_fallback_segments(unsigned int) */

void __thiscall
OpenXRCompositionLayerEquirect::set_fallback_segments
          (OpenXRCompositionLayerEquirect *this,uint param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x600) = param_1;
    OpenXRCompositionLayer::update_fallback_mesh();
    return;
  }
  _err_print_error("set_fallback_segments",
                   "modules/openxr/scene/openxr_composition_layer_equirect.cpp",0xb4,
                   "Condition \"p_fallback_segments == 0\" is true.",0,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXRCompositionLayerEquirect::OpenXRCompositionLayerEquirect() */

void __thiscall
OpenXRCompositionLayerEquirect::OpenXRCompositionLayerEquirect(OpenXRCompositionLayerEquirect *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  CallableCustom *this_00;
  long lVar5;
  XrCompositionLayerBaseHeader *pXVar6;
  long in_FS_OFFSET;
  byte bVar7;
  long local_50;
  Callable local_48 [24];
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  OpenXRCompositionLayer::OpenXRCompositionLayer
            ((OpenXRCompositionLayer *)this,(XrCompositionLayerBaseHeader *)(this + 0x578));
  *(undefined ***)this = &PTR__initialize_classv_00109030;
  uVar3 = _UNK_00109518;
  uVar2 = __LC32;
  pXVar6 = (XrCompositionLayerBaseHeader *)(this + 0x578);
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pXVar6 = 0;
    pXVar6 = pXVar6 + (ulong)bVar7 * -0x10 + 8;
  }
  *(undefined4 *)(this + 0x578) = 0x3b9c2d78;
  *(undefined8 *)(this + 0x5dc) = uVar2;
  *(undefined8 *)(this + 0x5e4) = uVar3;
  uVar3 = _UNK_00109528;
  uVar2 = __LC33;
  *(undefined4 *)(this + 0x600) = 10;
  *(undefined8 *)(this + 0x5f0) = uVar2;
  *(undefined8 *)(this + 0x5f8) = uVar3;
  plVar4 = (long *)XRServer::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x108);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(OpenXRCompositionLayerEquirect **)(this_00 + 0x28) = this;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00109238;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  *(code **)(this_00 + 0x38) = update_transform;
  *(undefined **)(this_00 + 0x20) = &_LC34;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "OpenXRCompositionLayerEquirect::update_transform";
  Callable::Callable(local_48,this_00);
  StringName::StringName((StringName *)&local_50,"reference_frame_changed",false);
  (*pcVar1)(plVar4,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerEquirect::_notification(int) */

void __thiscall
OpenXRCompositionLayerEquirect::_notification(OpenXRCompositionLayerEquirect *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2c) {
    OpenXRCompositionLayer::get_openxr_pose();
    *(undefined8 *)(this + 0x5c0) = local_38;
    *(ulong *)(this + 0x5c8) = CONCAT44(uStack_2c,uStack_30);
    *(ulong *)(this + 0x5cc) = CONCAT44(uStack_28,uStack_2c);
    *(undefined8 *)(this + 0x5d4) = uStack_24;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerEquirect::_bind_methods() */

void OpenXRCompositionLayerEquirect::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  long *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "radius";
  uVar5 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_radius",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(set_radius);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_radius",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(get_radius);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "angle";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_central_horizontal_angle",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(set_central_horizontal_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_central_horizontal_angle",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(get_central_horizontal_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "angle";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_upper_vertical_angle",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(set_upper_vertical_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_upper_vertical_angle",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(get_upper_vertical_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "angle";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_lower_vertical_angle",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(set_lower_vertical_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_lower_vertical_angle",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,float>(get_lower_vertical_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  local_68 = "segments";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_fallback_segments",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,unsigned_int>(set_fallback_segments);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_fallback_segments",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRCompositionLayerEquirect,unsigned_int>(get_fallback_segments);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"radius");
  local_98 = 3;
  local_90 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c0 == 0) {
LAB_00101a78:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c0);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00101a78;
    StringName::StringName((StringName *)&local_a0,(String *)&local_78,false);
    if (local_88 == (long *)local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a0;
    }
  }
  local_e8 = (CowData<char32_t> *)&local_78;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"OpenXRCompositionLayerEquirect");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)&local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((((StringName::configured != '\0') &&
       ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_a8 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"0,360,0.1,or_less,or_greater,radians_as_degrees");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"central_horizontal_angle");
  local_98 = 3;
  local_90 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
  }
  local_88 = (long *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c0 == 0) {
LAB_00101c8b:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref(local_e8,(CowData *)&local_c0);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00101c8b;
    StringName::StringName((StringName *)&local_a0,(String *)local_e8,false);
    if (local_88 == (long *)local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a0;
    }
  }
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"OpenXRCompositionLayerEquirect");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)&local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((((StringName::configured != '\0') &&
       ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_a8 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"0,90,0.1,or_less,or_greater,radians_as_degrees");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"upper_vertical_angle");
  local_98 = 3;
  local_90 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
  }
  local_88 = (long *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c0 == 0) {
LAB_00101e93:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref(local_e8,(CowData *)&local_c0);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00101e93;
    StringName::StringName((StringName *)&local_a0,(String *)local_e8,false);
    if (local_88 == (long *)local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a0;
    }
  }
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"OpenXRCompositionLayerEquirect");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)&local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((((StringName::configured != '\0') &&
       ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_a8 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"0,90,0.1,or_less,or_greater,radians_as_degrees");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"lower_vertical_angle");
  local_98 = 3;
  local_90 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
  }
  local_88 = (long *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c0 == 0) {
LAB_0010209b:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref(local_e8,(CowData *)&local_c0);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_0010209b;
    StringName::StringName((StringName *)&local_a0,(String *)local_e8,false);
    if (local_88 == (long *)local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a0;
    }
  }
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"OpenXRCompositionLayerEquirect");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)&local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (((StringName::configured != '\0') &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_a8 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_a8,true);
  _scs_create((char *)&local_b0,true);
  local_b8 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"");
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"fallback_segments");
  local_98 = 2;
  local_90 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c0 != 0) {
    CowData<char32_t>::_ref(local_e8,(CowData *)&local_c0);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a0,(String *)local_e8,false);
      if (local_88 == (long *)local_a0) {
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a0;
      }
      goto LAB_001022b2;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_b8);
LAB_001022b2:
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"OpenXRCompositionLayerEquirect");
  StringName::StringName((StringName *)&local_a0,(String *)&local_d0,false);
  ClassDB::add_property
            ((StringName *)&local_a0,(PropertyInfo *)&local_98,(StringName *)&local_b0,
             (StringName *)&local_a8,-1);
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((((StringName::configured != '\0') &&
       ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_a8 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */

void Vector<Vector3>::push_back(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_3 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_3 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 0xc);
        *puVar1 = param_1;
        *(undefined4 *)(puVar1 + 1) = param_2;
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
/* OpenXRCompositionLayerEquirect::_create_fallback_mesh() */

long * OpenXRCompositionLayerEquirect::_create_fallback_mesh(void)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  ArrayMesh *this;
  Variant *pVVar9;
  uint uVar10;
  uint uVar11;
  long in_RSI;
  long lVar12;
  int iVar13;
  long *in_RDI;
  uint uVar14;
  long lVar15;
  long in_FS_OFFSET;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_140;
  Vector *local_118;
  Vector *local_110;
  Object *local_f0;
  float local_e0;
  float local_dc;
  Array local_d8 [8];
  Array local_d0 [8];
  Dictionary local_c8 [8];
  long local_c0;
  Vector local_b8 [8];
  long local_b0;
  Vector local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  long local_90;
  Vector<int> local_88 [8];
  long local_80;
  ulong local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (ArrayMesh *)operator_new(0x430,"");
  ArrayMesh::ArrayMesh(this);
  postinitialize_handler((Object *)this);
  cVar7 = RefCounted::init_ref();
  local_f0 = (Object *)0x0;
  if (cVar7 != '\0') {
    cVar7 = RefCounted::reference();
    local_f0 = (Object *)(ArrayMesh *)0x0;
    if (cVar7 != '\0') {
      local_f0 = (Object *)this;
    }
    cVar7 = RefCounted::unreference();
    if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)this), cVar7 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  Array::Array(local_d8);
  iVar13 = (int)local_d8;
  Array::resize(iVar13);
  fVar2 = *(float *)(in_RSI + 0x5f8);
  fVar3 = *(float *)(in_RSI + 0x5fc);
  fVar4 = *(float *)(in_RSI + 0x5f4);
  local_b0 = 0;
  fVar20 = (float)*(uint *)(in_RSI + 0x600);
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  dVar16 = _LC72 - (double)fVar4 * __LC7;
  if (*(uint *)(in_RSI + 0x600) == 0xffffffff) {
    uVar11 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uVar10 = 0;
      sincosf((fVar4 / fVar20) * (float)uVar14 + (float)dVar16,&local_dc,&local_e0);
      fVar6 = local_dc;
      fVar5 = local_e0;
      do {
        auVar17._4_4_ = (float)uVar10;
        auVar17._0_4_ = (float)uVar14;
        sincosf((float)uVar10 * ((fVar2 + fVar3) / fVar20) - *(float *)(in_RSI + 0x5fc),&local_dc,
                &local_e0);
        fVar21 = local_e0 * *(float *)(in_RSI + 0x5f0);
        fVar18 = *(float *)(in_RSI + 0x5f0) * local_dc;
        fVar23 = fVar5 * fVar21;
        fVar21 = fVar21 * fVar6;
        auVar24._0_8_ = CONCAT44(fVar18,fVar21);
        local_78 = auVar24._0_8_;
        local_70 = fVar23;
        Vector<Vector3>::push_back(auVar24._0_8_,fVar23,local_b8);
        auVar24._8_8_ = 0;
        fVar18 = fVar18 * fVar18 + fVar21 * fVar21 + fVar23 * fVar23;
        local_68 = 0;
        local_60 = 0.0;
        if (fVar18 != 0.0) {
          fVar18 = SQRT(fVar18);
          local_60 = fVar23 / fVar18;
          auVar22._4_4_ = fVar18;
          auVar22._0_4_ = fVar18;
          auVar22._12_4_ = _LC73._4_4_;
          auVar22._8_4_ = (float)_LC73;
          auVar24 = divps(auVar24,auVar22);
          local_68 = auVar24._0_8_;
        }
        Vector<Vector3>::push_back(local_68,local_60,local_a8);
        auVar17._8_8_ = uStack_140;
        auVar19._0_4_ = (float)*(uint *)(in_RSI + 0x600);
        auVar19._4_4_ = auVar19._0_4_;
        auVar19._12_4_ = _LC73._4_4_;
        auVar19._8_4_ = (float)_LC73;
        auVar17 = divps(auVar17,auVar19);
        fVar18 = (float)_LC73 - auVar17._0_4_;
        fVar21 = _LC73._4_4_ - auVar17._4_4_;
        if (local_90 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = *(long *)(local_90 + -8) + 1;
        }
        iVar8 = CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_90,lVar12);
        if (iVar8 == 0) {
          if (local_90 == 0) {
            lVar15 = -1;
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(local_90 + -8);
            lVar15 = lVar12 + -1;
            if (-1 < lVar15) {
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_90);
              *(ulong *)(local_90 + lVar15 * 8) = CONCAT44(fVar21,fVar18);
              goto LAB_001029e8;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar12,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_001029e8:
        uVar10 = uVar10 + 1;
        uVar11 = *(int *)(in_RSI + 0x600) + 1;
      } while (uVar10 < uVar11);
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar11);
    if (*(int *)(in_RSI + 0x600) == 0) goto LAB_00102c62;
  }
  uVar14 = 0;
  while( true ) {
    uVar10 = 0;
    while( true ) {
      iVar8 = uVar11 * uVar14 + uVar10;
      uVar10 = uVar10 + 1;
      Vector<int>::push_back(local_88,iVar8);
      Vector<int>::push_back(local_88,iVar8 + 1 + *(int *)(in_RSI + 0x600));
      Vector<int>::push_back(local_88,iVar8 + 2 + *(int *)(in_RSI + 0x600));
      Vector<int>::push_back(local_88,iVar8);
      Vector<int>::push_back(local_88,iVar8 + 2 + *(int *)(in_RSI + 0x600));
      Vector<int>::push_back(local_88,iVar8 + 1);
      uVar11 = *(uint *)(in_RSI + 0x600);
      if (uVar11 <= uVar10) break;
      uVar11 = uVar11 + 1;
    }
    uVar14 = uVar14 + 1;
    if (uVar11 <= uVar14) break;
    uVar11 = uVar11 + 1;
  }
LAB_00102c62:
  local_110 = local_a8;
  local_118 = local_b8;
  Variant::Variant((Variant *)local_58,local_118);
  pVVar9 = (Variant *)Array::operator[](iVar13);
  if (pVVar9 == (Variant *)local_58) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = local_58[0];
    *(undefined8 *)(pVVar9 + 8) = local_50._0_8_;
    *(undefined8 *)(pVVar9 + 0x10) = local_50._8_8_;
  }
  Variant::Variant((Variant *)local_58,local_110);
  pVVar9 = (Variant *)Array::operator[](iVar13);
  if (pVVar9 == (Variant *)local_58) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = local_58[0];
    *(undefined8 *)(pVVar9 + 8) = local_50._0_8_;
    *(undefined8 *)(pVVar9 + 0x10) = local_50._8_8_;
  }
  Variant::Variant((Variant *)local_58,local_98);
  pVVar9 = (Variant *)Array::operator[](iVar13);
  if (pVVar9 == (Variant *)local_58) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = local_58[0];
    *(undefined8 *)(pVVar9 + 8) = local_50._0_8_;
    *(undefined8 *)(pVVar9 + 0x10) = local_50._8_8_;
  }
  Variant::Variant((Variant *)local_58,(Vector *)local_88);
  pVVar9 = (Variant *)Array::operator[](iVar13);
  if (pVVar9 == (Variant *)local_58) {
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = local_58[0];
    *(undefined8 *)(pVVar9 + 8) = local_50._0_8_;
    *(undefined8 *)(pVVar9 + 0x10) = local_50._8_8_;
  }
  Dictionary::Dictionary(local_c8);
  Array::Array(local_d0);
  local_58[0] = 0;
  local_58[1] = 0;
  local_c0 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)local_d0,(StringName *)0x1c,(Variant *)&local_c0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  ArrayMesh::add_surface_from_arrays(local_f0,3,local_d8,local_d0,local_c8,0);
  Array::~Array(local_d0);
  Dictionary::~Dictionary(local_c8);
  *in_RDI = 0;
  lVar12 = __dynamic_cast(local_f0,&Object::typeinfo,&Mesh::typeinfo,0);
  if (lVar12 != 0) {
    *in_RDI = lVar12;
    cVar7 = RefCounted::reference();
    if (cVar7 == '\0') {
      *in_RDI = 0;
    }
  }
  lVar12 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  Array::~Array(local_d8);
  cVar7 = RefCounted::unreference();
  if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_f0), cVar7 != '\0')) {
    (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
    Memory::free_static(local_f0,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
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



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

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



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* Node3D::is_transform_gizmo_visible() const */

byte __thiscall Node3D::is_transform_gizmo_visible(Node3D *this)

{
  return (byte)this[0x518] >> 2 & 1;
}



/* OpenXRCompositionLayerEquirect::is_class_ptr(void*) const */

uint __thiscall
OpenXRCompositionLayerEquirect::is_class_ptr(OpenXRCompositionLayerEquirect *this,void *param_1)

{
  return (uint)CONCAT71(0x1094,(undefined4 *)param_1 ==
                               &OpenXRCompositionLayer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1094,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<OpenXRCompositionLayerEquirect, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void> *this)

{
  return;
}



/* MethodBindTRC<unsigned int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned int>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<unsigned_int>::get_argument_meta(MethodBindTRC<unsigned_int> *this,int param_1)

{
  return param_1 >> 0x1f & 7;
}



/* MethodBindT<unsigned int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<unsigned_int>::_gen_argument_type(MethodBindT<unsigned_int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int>::get_argument_meta(MethodBindT<unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* CallableCustomMethodPointer<OpenXRCompositionLayerEquirect, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void>::get_argument_count
          (CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<OpenXRCompositionLayerEquirect, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001092c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001092c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109328;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109328;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001093e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001093e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* OpenXRCompositionLayerEquirect::_property_get_revertv(StringName const&, Variant&) const */

undefined8
OpenXRCompositionLayerEquirect::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OpenXRCompositionLayerEquirect::_property_can_revertv(StringName const&) const */

undefined8 OpenXRCompositionLayerEquirect::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010c008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* OpenXRCompositionLayerEquirect::_getv(StringName const&, Variant&) const */

undefined8 OpenXRCompositionLayerEquirect::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010c010 != Object::_get) {
    uVar1 = OpenXRCompositionLayer::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OpenXRCompositionLayerEquirect::_setv(StringName const&, Variant const&) */

undefined8 OpenXRCompositionLayerEquirect::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010c018 != Object::_set) {
    uVar1 = OpenXRCompositionLayer::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRCompositionLayerEquirect::_bind_methods() [clone .cold] */

void OpenXRCompositionLayerEquirect::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<OpenXRCompositionLayerEquirect, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void>::get_object
          (CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
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
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00103b0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103b0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103b0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* OpenXRCompositionLayerEquirect::_validate_propertyv(PropertyInfo&) const */

void OpenXRCompositionLayerEquirect::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010c020 == Node3D::_validate_property) {
    return;
  }
  OpenXRCompositionLayer::_validate_property(param_1);
  return;
}



/* OpenXRCompositionLayerEquirect::_notificationv(int, bool) */

void __thiscall
OpenXRCompositionLayerEquirect::_notificationv
          (OpenXRCompositionLayerEquirect *this,int param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (int)this;
  if (param_2) {
    if (param_1 == 0x2c) {
      OpenXRCompositionLayer::get_openxr_pose();
      *(undefined8 *)(this + 0x5c0) = local_58;
      *(ulong *)(this + 0x5c8) = CONCAT44(uStack_4c,uStack_50);
      *(ulong *)(this + 0x5cc) = CONCAT44(uStack_48,uStack_4c);
      *(undefined8 *)(this + 0x5d4) = uStack_44;
    }
    if ((code *)PTR__notification_0010c028 != Node3D::_notification) {
      OpenXRCompositionLayer::_notification(iVar2);
    }
    Node3D::_notification(iVar2);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_notification(iVar2);
      return;
    }
  }
  else {
    Node::_notification(iVar2);
    Node3D::_notification(iVar2);
    if ((code *)PTR__notification_0010c028 == Node3D::_notification) {
      if (param_1 == 0x2c) {
        OpenXRCompositionLayer::get_openxr_pose();
        *(undefined8 *)(this + 0x5c0) = local_58;
        *(ulong *)(this + 0x5c8) = CONCAT44(uStack_4c,uStack_50);
        *(ulong *)(this + 0x5cc) = CONCAT44(uStack_48,uStack_4c);
        *(undefined8 *)(this + 0x5d4) = uStack_44;
      }
    }
    else {
      OpenXRCompositionLayer::_notification(iVar2);
      if (param_1 == 0x2c) {
        OpenXRCompositionLayer::get_openxr_pose();
        *(undefined8 *)(this + 0x5c0) = local_58;
        *(ulong *)(this + 0x5c8) = CONCAT44(uStack_4c,uStack_50);
        *(ulong *)(this + 0x5cc) = CONCAT44(uStack_48,uStack_4c);
        *(undefined8 *)(this + 0x5d4) = uStack_44;
      }
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* OpenXRCompositionLayerEquirect::_get_class_namev() const */

undefined8 * OpenXRCompositionLayerEquirect::_get_class_namev(void)

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
LAB_00103e63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103e63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "OpenXRCompositionLayerEquirect");
      goto LAB_00103ece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRCompositionLayerEquirect")
  ;
LAB_00103ece:
  return &_get_class_namev()::_class_name_static;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* OpenXRCompositionLayerEquirect::get_class() const */

void OpenXRCompositionLayerEquirect::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* CallableCustomMethodPointer<OpenXRCompositionLayerEquirect, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void>::call
          (CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010428f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010428f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00104351;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010428f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC42,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104351:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_class(String const&) const */

undefined8 __thiscall Node3D::is_class(Node3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001043df;
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
LAB_001043df:
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
    if (cVar6 != '\0') goto LAB_00104493;
  }
  cVar6 = String::operator==(param_1,"Node3D");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00104493;
    }
    cVar6 = String::operator==(param_1,"Node");
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
                if (lVar5 == 0) goto LAB_001045f3;
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
LAB_001045f3:
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
        if (cVar6 != '\0') goto LAB_00104493;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_0010469c;
    }
  }
LAB_00104493:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010469c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerEquirect::is_class(String const&) const */

undefined8 __thiscall
OpenXRCompositionLayerEquirect::is_class(OpenXRCompositionLayerEquirect *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010472f;
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
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010472f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001047e3;
  }
  cVar6 = String::operator==(param_1,"OpenXRCompositionLayerEquirect");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001047e3;
    }
    cVar6 = String::operator==(param_1,"OpenXRCompositionLayer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node3D::is_class((Node3D *)this,param_1);
        return uVar8;
      }
      goto LAB_001048ee;
    }
  }
LAB_001047e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001048ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC34;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001049f5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001049f5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC34;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 3;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00104b55;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00104b55:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC44;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC44;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104d4d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104d4d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00104d6f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00104d6f:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_001050a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001050a1:
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
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OpenXRCompositionLayer::_get_property_listv(OpenXRCompositionLayer *this,List *param_1,bool param_2)

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
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRCompositionLayer";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRCompositionLayer";
  local_98 = 0;
  local_70 = 0x16;
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
      goto LAB_00105351;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105351:
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
  StringName::StringName((StringName *)&local_78,"OpenXRCompositionLayer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010c030 != Object::_get_property_list) {
    OpenXRCompositionLayer::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::_get_property_listv((Node3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerEquirect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
OpenXRCompositionLayerEquirect::_get_property_listv
          (OpenXRCompositionLayerEquirect *this,List *param_1,bool param_2)

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
    OpenXRCompositionLayer::_get_property_listv((OpenXRCompositionLayer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRCompositionLayerEquirect";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRCompositionLayerEquirect";
  local_98 = 0;
  local_70 = 0x1e;
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
      goto LAB_00105621;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105621:
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
  StringName::StringName((StringName *)&local_78,"OpenXRCompositionLayerEquirect",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      OpenXRCompositionLayer::_get_property_listv((OpenXRCompositionLayer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001057a9;
  local_78 = 0;
  local_68 = &_LC34;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001058a5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001058a5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001057a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00105a19;
  local_78 = 0;
  local_68 = &_LC34;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00105b15:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00105b15;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00105a19:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<OpenXRCompositionLayerEquirect, float>(void
   (OpenXRCompositionLayerEquirect::*)(float)) */

MethodBind * create_method_bind<OpenXRCompositionLayerEquirect,float>(_func_void_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001092c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRCompositionLayerEquirect";
  local_30 = 0x1e;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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



/* MethodBind* create_method_bind<OpenXRCompositionLayerEquirect, float>(float
   (OpenXRCompositionLayerEquirect::*)() const) */

MethodBind * create_method_bind<OpenXRCompositionLayerEquirect,float>(_func_float *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109328;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRCompositionLayerEquirect";
  local_30 = 0x1e;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<OpenXRCompositionLayerEquirect, unsigned int>(void
   (OpenXRCompositionLayerEquirect::*)(unsigned int)) */

MethodBind *
create_method_bind<OpenXRCompositionLayerEquirect,unsigned_int>(_func_void_uint *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRCompositionLayerEquirect";
  local_30 = 0x1e;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<OpenXRCompositionLayerEquirect, unsigned int>(unsigned int
   (OpenXRCompositionLayerEquirect::*)() const) */

MethodBind * create_method_bind<OpenXRCompositionLayerEquirect,unsigned_int>(_func_uint *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001093e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "OpenXRCompositionLayerEquirect";
  local_30 = 0x1e;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerEquirect::_initialize_classv() */

void OpenXRCompositionLayerEquirect::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (OpenXRCompositionLayer::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Node");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0010c040 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node3D";
        local_70 = 0;
        local_50 = 6;
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
        Node3D::_bind_methods();
        Node3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "OpenXRCompositionLayer";
      local_70 = 0;
      local_50 = 0x16;
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
      if ((code *)PTR__bind_methods_0010c038 != Node3D::_bind_methods) {
        OpenXRCompositionLayer::_bind_methods();
      }
      OpenXRCompositionLayer::initialize_class()::initialized = '\x01';
    }
    local_58 = "OpenXRCompositionLayer";
    local_68 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRCompositionLayerEquirect";
    local_70 = 0;
    local_50 = 0x1e;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00106820:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0xc - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00106820;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_0010678c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010671b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010678c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_0010671b:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_00106b40:
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
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00106b40;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
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
  if (lVar7 == lVar3) {
LAB_00106aac:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00106a41;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00106aac;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00106a41:
  puVar9[-1] = param_1;
  return 0;
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
LAB_00106e30:
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
  if (lVar8 == 0) goto LAB_00106e30;
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
        goto LAB_00106d41;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106d41:
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



/* WARNING: Removing unreachable block (ram,0x00107028) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTRC<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  uint uVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001073a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      uVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,uVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_001073a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_int>::validated_call
          (MethodBindTRC<unsigned_int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107644;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00107644:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_int>::ptrcall
          (MethodBindTRC<unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107803;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00107803:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<unsigned_int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00107b41;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001079cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00107b41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00107d21;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00107d21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107df0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00107df0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108008;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_00108008:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001081c7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_001081c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108519;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x001083a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00108519:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001086f9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x00108581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001086f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int>
               (__UnexistingClass *param_1,_func_void_uint *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_001087fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108860;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108860:
      uVar6 = 4;
LAB_001087fd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010877b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010877b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC88;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x001087d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((uint)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108956;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int>
            (p_Var2,(_func_void_uint *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108956:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00108c1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108c80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108c80:
      uVar6 = 4;
LAB_00108c1d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00108b9b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00108b9b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC90;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00108bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC42,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108ce6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108ce6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRCompositionLayerEquirect, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRCompositionLayerEquirect,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


